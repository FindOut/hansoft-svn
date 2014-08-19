
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
#ifdef __GNUC__
#ifdef __linux__
#include <linux/limits.h>
#endif
#include <unistd.h>
#endif
#endif
#include <iostream>

#include <HPMSdkCpp.h>

using namespace std;
using namespace HPMSdk;


class HansoftSVNPusher : public HPMSdkCallbacks
{
public:
	HPMSdkSession *m_pSession;

	virtual void On_ProcessError(EHPMError _Error)
	{
		HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
		wstring Error(SdkError.begin(), SdkError.end());

		wcout << "On_ProcessError: " << Error << "\r\n";

	}

	HansoftSVNPusher()
	{
		m_pSession = NULL;
	}

	~HansoftSVNPusher()
	{
		if (m_pSession)
		{
			DestroyConnection();
		}
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

		EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode_Debug;
#ifdef _DEBUG
		DebugMode = EHPMSdkDebugMode_Debug; // Set debug flag so we will get memory leak info.
#endif

		try
		{
			m_pSession = HPMSdkSession::SessionOpen(
			        hpm_str("localhost"),
			        50256,
			        hpm_str("Company projects"),
			        hpm_str("SDK"),
			        hpm_str("SDK"),
			        this,
			        NULL,
			        true,
			        DebugMode,
			        NULL,
			        0,
			        hpm_str(""),
			        HPMSystemString(),
			        NULL); //&m_ProcessCallbackInfo
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

		return true;
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
		ToDelete.m_Comment = hpm_str("Client SVN plugin automatic deletion");
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
		ToAdd.m_Comment = hpm_str("Client SVN plugin automatic add");
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
		DeleteVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp"));

		// Add plugins. You need a Win32 x86 and x64, OS X 10.7 x64 and 10.5 x86 and x64 and Linux x64 and x86 versions built when you run the program. Both are required. If you create your own application make sure to use a directory for a reverse domain name that you own. Remove ifdefs and comments in real deployer
#ifdef _MSC_VER
		AddVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp/Win32/x86/Plugin.dll"), GetProgramDirectory() + hpm_str("/Plugin/x86/HansoftSDKSample_ClientPluginCppPlugin.dll"));
		AddVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp/Win32/x64/Plugin.dll"), GetProgramDirectory() + hpm_str("/Plugin/x64/HansoftSDKSample_ClientPluginCppPlugin.dll"));
#elif defined(__APPLE__)
		AddVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp/OSX10.7/x64/Plugin.dylib"), GetProgramDirectory() + hpm_str("/Plugin.dylib"));
#elif defined(__linux__)
		AddVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp/Linux2.6/x64/Plugin.so"), GetProgramDirectory() + hpm_str("/Plugin.so"));
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
				UpdateServer();
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
		Update();
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
	HansoftSVNPusher Sample;

	return Sample.Run();
}
