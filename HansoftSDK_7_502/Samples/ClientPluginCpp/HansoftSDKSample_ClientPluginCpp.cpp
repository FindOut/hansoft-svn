
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:																						|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2007															|
|																								|
|	Contents:		Hansoft Project Manager SDK "Simple sample"									|
|																								|
|	Comments:		This sample shows how to use the SDK from a client plugin.					|
|					The sample will upload the custom DLL's to the server.						|
|																								|
|	History:																					|
|		070312:		Created sample																|
\*_____________________________________________________________________________________________*/



#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#else
#include <sys/time.h>
#include <sys/select.h>
#include <termios.h>
#ifdef __GNUC__
#ifdef __linux__
#include <linux/limits.h>
#include <stdio.h>
#endif
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#endif
#endif
#include <iostream>
#include <string>

#include "../../HPMSdkCpp.h"

using namespace std;
using namespace HPMSdk;

#ifndef _MSC_VER
int _kbhit()
{
    static const int STDIN = 0;
    static bool bInitialized = false;
	
    if (!bInitialized)
	{
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        bInitialized = true;
    }
	
    timeval timeout;
    fd_set rdset;
	
    FD_ZERO(&rdset);
    FD_SET(STDIN, &rdset);
    timeout.tv_sec  = 0;
    timeout.tv_usec = 0;
	
    return select(STDIN + 1, &rdset, NULL, NULL, &timeout);
}
#endif

#ifdef __GNUC__

struct CProcessSemaphore
{
	pthread_cond_t m_Cond;
    pthread_mutex_t m_Mutex;
    int m_Counter;
};


#endif

class CHansoftSDKSample_ClientPlugin : public HPMSdkCallbacks
{
public:


	HPMSdkSession *m_pSession;
    bool m_bBrokenConnection;
	bool m_bConnectionWasMade;
	HPMString m_IntegrationIdentifier;

	virtual void On_ProcessError(EHPMError _Error)
	{
		HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
		wstring Error(SdkError.begin(), SdkError.end());
		
		wcout << "On_ProcessError: " << Error << "\r\n";
		m_bBrokenConnection = true;

	}

	virtual void On_Callback(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data)
	{
		try
		{
			if (_Data.m_ChannelName != m_IntegrationIdentifier)
				return;

			// Just send the received data back on the channel so the dynamic dialog started from the dialog can use it.
			HPMCommunicationChannelPacket Packet;
			Packet.m_Bytes = _Data.m_Packet.m_Bytes;
			
			m_pSession->CommunicationChannelSendPacket(m_IntegrationIdentifier, _Data.m_FromSessionID, Packet);
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

	HPMUInt64 m_NextConnectionAttempt;
#ifdef _MSC_VER
	HANDLE m_ProcessSemaphore;
#elif __GNUC__
	CProcessSemaphore m_ProcessSemaphore;
#endif
	HPMNeedSessionProcessCallbackInfo m_ProcessCallbackInfo;

	CHansoftSDKSample_ClientPlugin()
	{
		m_pSession = NULL;
		m_bConnectionWasMade = false;
		m_NextConnectionAttempt = 0;
		m_bBrokenConnection = false;
		// Create the event that will be signaled when the SDK needs processing.
#ifdef _MSC_VER
		m_ProcessSemaphore = CreateSemaphore(NULL, 0, 1, NULL); // Behaves like an auto reset event.
#elif __GNUC__
		pthread_cond_init(&m_ProcessSemaphore.m_Cond, NULL);
		pthread_mutex_init(&m_ProcessSemaphore.m_Mutex, NULL);
		m_ProcessSemaphore.m_Counter = 1;
#endif
		m_IntegrationIdentifier = hpm_str("se.hansoft.sampleclientplugin");
	}

	~CHansoftSDKSample_ClientPlugin()
	{
#ifdef _MSC_VER
		if (m_ProcessSemaphore)
			CloseHandle(m_ProcessSemaphore);
#elif __GNUC__
		pthread_mutex_destroy(&m_ProcessSemaphore.m_Mutex);
		pthread_cond_destroy(&m_ProcessSemaphore.m_Cond);
#endif
		if (m_pSession)
		{
			DestroyConnection();
		}
	}
	
#ifdef __GNUC__
	bool SemWait(int _Timeout)
	{
		time_t Now;
		time(&Now);
		
		timespec Ts ;
		Ts.tv_sec = Now;
		Ts.tv_nsec = _Timeout * 1000000;
		
		pthread_mutex_lock(&m_ProcessSemaphore.m_Mutex);
		while (m_ProcessSemaphore.m_Counter== 0)
		{
			if (pthread_cond_timedwait(&m_ProcessSemaphore.m_Cond, &m_ProcessSemaphore.m_Mutex, &Ts) == ETIMEDOUT)
			{
				pthread_mutex_unlock(&m_ProcessSemaphore.m_Mutex);
				return true;
			}
		}
		--m_ProcessSemaphore.m_Counter;
		pthread_mutex_unlock(&m_ProcessSemaphore.m_Mutex);
		return true;
	}
#endif

	HPMUInt64 GetTimeSince1970()
	{
#ifdef _MSC_VER
		FILETIME Time;
		GetSystemTimeAsFileTime(&Time);
		
		return (HPMUInt64)((((ULARGE_INTEGER &)Time).QuadPart / 10) - 11644473600000000);
#else
		timeval Time;
		gettimeofday(&Time, NULL);
		return (HPMUInt64)Time.tv_sec * 1000000;
#endif	
	}

	static void NeedSessionProcessCallback(void *_pSemaphore)
	{
#ifdef _MSC_VER
		ReleaseSemaphore(_pSemaphore, 1, NULL);
#elif __GNUC__
		CProcessSemaphore *pProcessSemaphore = (CProcessSemaphore *)_pSemaphore;
		pthread_mutex_lock(&pProcessSemaphore->m_Mutex);
		++pProcessSemaphore->m_Counter;
		pthread_cond_signal(&pProcessSemaphore->m_Cond);
		pthread_mutex_unlock(&pProcessSemaphore->m_Mutex);
#endif
	}

	template <typename t_CData1, typename t_CData2, typename t_CData3>
	t_CData1 *StrReplaceChar(t_CData1 *_pStr1, t_CData2 _CharFind, t_CData3 _CharReplace)
	{
		t_CData1 *pStr1 = _pStr1;

		while (*pStr1)
		{
			if (sizeof(t_CData1) > sizeof(t_CData2))
			{
				if (*pStr1 - _CharFind == 0)
					*pStr1 = _CharReplace;
			}
			else
			{
				if (_CharFind - *pStr1 == 0)
					*pStr1 = _CharReplace;
			}

			++pStr1;
		}
		return _pStr1;
	}

#ifdef _MSC_VER
	wstring GetProgramPath()
	{
		wstring CommandLine;

		int nArgs = 0;

		LPWSTR* pArgs = CommandLineToArgvW(GetCommandLineW(), &nArgs);
		if (pArgs)
		{
			CommandLine = *pArgs;
			GlobalFree(pArgs);

			wstring FullFileName;
			wchar_t *pFileName;
			wchar_t Temp;
			unsigned int nNeeded = GetFullPathNameW(CommandLine.c_str(), 0, &Temp, &pFileName);

			if (nNeeded == 0)
				throw HPMSdkCppException("Windows returned an error from GetFullPathName");

			wchar_t *pTemp = new wchar_t[nNeeded + 1];
			if (!GetFullPathNameW(CommandLine.c_str(), nNeeded,  pTemp, &pFileName))
				throw HPMSdkCppException("Windows returned an error from GetFullPathName");
			StrReplaceChar(pTemp, '\\', '/');
			FullFileName = pTemp;
			delete [] pTemp;

			CommandLine = FullFileName;
		}

		return CommandLine;
	}

	wstring GetProgramDirectory()
	{
		wstring Ret;
		Ret = GetProgramPath();
		size_t iFind = Ret.find_last_of('/');

		if (iFind >= 0)
		{
			Ret.erase(iFind);
		}
		return Ret;
	}
#elif __GNUC__
	string GetProgramDirectory()
	{
		char TmpBuf[PATH_MAX];
		string CurrentDirectory = string(getcwd(TmpBuf, sizeof(TmpBuf)));
		return CurrentDirectory;
	}
#endif


	bool InitConnection()
	{
		if (m_pSession)
			return true;

		HPMUInt64 CurrentTime = GetTimeSince1970();
		if (CurrentTime > m_NextConnectionAttempt)
		{
			m_NextConnectionAttempt = 0;

			EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode_Off;
	#ifdef _DEBUG
			DebugMode = EHPMSdkDebugMode_Debug; // Set debug flag so we will get memory leak info.
	#endif

#ifdef _MSC_VER
			m_ProcessCallbackInfo.m_pContext = m_ProcessSemaphore;
#elif __GNUC__
			m_ProcessCallbackInfo.m_pContext = &m_ProcessSemaphore;
#endif
			m_ProcessCallbackInfo.m_pCallback = &CHansoftSDKSample_ClientPlugin::NeedSessionProcessCallback;

			// You should change these parameters to match your development server and the SDK account you have created. For more information see SDK documentation.
			
			try
			{
				m_pSession = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), this, &m_ProcessCallbackInfo, true, DebugMode, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
			}
            catch (const HPMSdkException &_Error)
            {
				HPMString SdkError = _Error.GetAsString();
				wstring Error(SdkError.begin(), SdkError.end());
				wcout << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
				return false;

            }
            catch (const HPMSdkCppException &_Error)
            {
                wcout << hpm_str("SessionOpen failed with error:") << _Error.what() << "\r\n";
                return false;
            }

			wcout << "Successfully opened session.\r\n";
			
			m_pSession->VersionControlInit(hpm_str("./LocalFiles"));
			m_pSession->CommunicationChannelRegister(m_IntegrationIdentifier, EHPMChannelFlag_None, HPMCommunicationChannelData(), hpm_str("Sample plugin DLL channel demo"));
			m_bBrokenConnection = false;
			m_bConnectionWasMade = true;

			return true;
		}

		return false;
	}

	void DestroyConnection()
	{
		if (m_pSession)
		{
			HPMSdkSession::SessionDestroy(m_pSession);
			m_pSession = NULL;
		}
	}

	void DeleteVersionControlFile(HPMString _File)
	{
		HPMVersionControlDeleteFiles ToDelete;
		HPMVersionControlFileSpec Spec;
		Spec.m_Path = _File;
		ToDelete.m_Files.push_back(Spec);
		ToDelete.m_bDeleteLocally = false;
		ToDelete.m_bPermanent = true;
		ToDelete.m_Comment = hpm_str("Client plugin sample automatic deletion");
		HPMChangeCallbackData_VersionControlDeleteFilesResponse Response = m_pSession->VersionControlDeleteFilesBlock(ToDelete);
		if (Response.m_Errors.size())
		{
			wcout << "Error deleting version control file: '" << Response.m_Errors[0].m_File.c_str() << "' Error: '" << m_pSession->VersionControlErrorToStr(Response.m_Errors[0].m_Error).c_str() << "'\r\n";
		}
	}

	void AddVersionControlFile(HPMString _File, HPMString _FileLocal)
	{
		HPMVersionControlAddFiles ToAdd;

		HPMVersionControlLocalFilePair File;
		File.m_LocalPath = _FileLocal;
		File.m_FileSpec.m_Path = _File;
		ToAdd.m_FilesToAdd.push_back(File);
		ToAdd.m_Comment = hpm_str("Client plugin sample automatic add");
		ToAdd.m_bDeleteSourceFiles = false;

		HPMChangeCallbackData_VersionControlAddFilesResponse Response = m_pSession->VersionControlAddFilesBlock(ToAdd);
		if (Response.m_Errors.size())
		{
			wcout << "Error adding version control file: '" << Response.m_Errors[0].m_File.c_str() << "' Error: '" << m_pSession->VersionControlErrorToStr(Response.m_Errors[0].m_Error).c_str() << "'\r\n";
		}
	}

	void UpdateServer()
	{
		// Delete old files
		DeleteVersionControlFile(hpm_str("SDK/Plugins/se.hansoft.sdksample.clientplugincpp"));

		// Add plugins. You need a Win32 x86 and x64, OS X 10.7 x64 and 10.5 x86 and x64 and Linux x64 and x86 versions built when you run the program. Both are required. If you create your own application make sure to use a directory for a reverse domain name that you own. Remove ifdefs and comments in real deployer
		
#ifdef _MSC_VER
		AddVersionControlFile(hpm_str("SDK/Plugins/se.hansoft.sdksample.clientplugincpp/Win32/x86/Plugin.dll"), GetProgramDirectory() + hpm_str("/Plugin/x86/HansoftSDKSample_ClientPluginCppPlugin.dll"));
		AddVersionControlFile(hpm_str("SDK/Plugins/se.hansoft.sdksample.clientplugincpp/Win32/x64/Plugin.dll"), GetProgramDirectory() + hpm_str("/Plugin/x64/HansoftSDKSample_ClientPluginCppPlugin.dll"));
#elif defined(__APPLE__)
		AddVersionControlFile(hpm_str("SDK/Plugins/se.hansoft.sdksample.clientplugincpp/OSX10.7/x64/Plugin.dylib"), GetProgramDirectory() + hpm_str("/libHansoftSDKSample_ClientPluginCppPlugin.dylib"));
#elif defined(__linux__)
		AddVersionControlFile(hpm_str("SDK/Plugins/se.hansoft.sdksample.clientplugincpp/Linux2.6/x64/Plugin.so"), GetProgramDirectory() + hpm_str("/Plugin.so"));
#else
#error "Unknown platform"
#endif
	}

	void Update()
	{
	    if (InitConnection())
	    {
            try
            {
		        if (m_bBrokenConnection)
		        {
			        DestroyConnection();
		        }
		        else
		        {
					if (m_bConnectionWasMade)
					{
						m_bConnectionWasMade = false;
						// Upload the plugin dlls to the server document management.
						UpdateServer();
					}
					HPMInt32 Error = m_pSession->SessionProcess();
					if (Error == EHPMError_ConnectionLost)
					{
						m_bBrokenConnection = false;
						wcout << "Lost connection to server.\r\n";
						DestroyConnection();
					}
		        }
            }
            catch (HPMSdkException &_Error)
            {
                HPMString SdkError = _Error.GetAsString();
				wstring Error(SdkError.begin(), SdkError.end());
				wcout << hpm_str("Exception in processing loop: ") << Error << hpm_str("\r\n");
            }
            catch (HPMSdkCppException _Error)
            {
                wcout << hpm_str("Exception in processing loop: ") << _Error.what() << hpm_str("\r\n");
            }
	    }
	}

	int Run()
	{
		// Initialize the SDK
		while (!_kbhit())
		{
			Update();

#ifdef _MSC_VER
			WaitForSingleObjectEx(m_ProcessSemaphore, 100, true);
#elif __GNUC__
			SemWait(100);
#endif
		}

		DestroyConnection();

		return 0;
	}
};

#ifdef _MSC_VER
int _tmain(int argc, _TCHAR* argv[])
#else
int main(int argc, const char * argv[])
#endif
{
	CHansoftSDKSample_ClientPlugin Sample;
	
	return Sample.Run();
}

