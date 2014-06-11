
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:																						|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2007															|
|																								|
|	Contents:		Hansoft Project Manager SDK "Simple sample"									|
|																								|
|	Comments:		This sample shows the basics of connecting to a server with the SDK.		|
|					The sample will create a task in all projects and update the task date		|
|					so that it always stays on todays date.										|
|																								|
|	History:																					|
|		070312:		Created sample																|
\*_____________________________________________________________________________________________*/

#include "../../HPMSdkCpp.h"

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#else
#include <sys/time.h>
#include <sys/select.h>
#include <termios.h>
#if defined(__GNUC__)
#include <stdio.h>
#include <errno.h>
#include <pthread.h>
#endif
#endif
#include <iostream>
#include <string>


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

class CHansoftSDKSample_Simple : public HPMSdkCallbacks
{
public:


	HPMSdkSession *m_pSession;
	bool m_bBrokenConnection;

	virtual void On_ProcessError(EHPMError _Error)
	{
		HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
		wstring Error(SdkError.begin(), SdkError.end());
		
		wcout << "On_ProcessError: " << Error << "\r\n";
		m_bBrokenConnection = true;
	}

	HPMUInt64 m_NextUpdate;
	HPMUInt64 m_NextConnectionAttempt;
#ifdef _MSC_VER
	HANDLE m_ProcessSemaphore;
#elif __GNUC__
	CProcessSemaphore m_ProcessSemaphore;
#endif
	HPMNeedSessionProcessCallbackInfo m_ProcessCallbackInfo;

	CHansoftSDKSample_Simple()
	{
		m_pSession = NULL;
		m_NextUpdate = 0;
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
	}

	~CHansoftSDKSample_Simple()
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


	bool InitConnection()
	{
		if (m_pSession)
			return true;

		HPMUInt64 CurrentTime = GetTimeSince1970();
		if (CurrentTime > m_NextConnectionAttempt)
		{
			m_NextConnectionAttempt = 0;

			EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode_Off;
			(void)DebugMode;
#ifdef _DEBUG
			DebugMode = EHPMSdkDebugMode_Debug; // Set debug flag so we will get memory leak info.
#endif

			// You should change these parameters to match your development server and the SDK account you have created. For more information see SDK documentation.

#ifdef _MSC_VER
			m_ProcessCallbackInfo.m_pContext = m_ProcessSemaphore;
#elif __GNUC__
			m_ProcessCallbackInfo.m_pContext = &m_ProcessSemaphore;
#endif
			m_ProcessCallbackInfo.m_pCallback = &CHansoftSDKSample_Simple::NeedSessionProcessCallback;

			try
			{
				m_pSession = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50255, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), this, &m_ProcessCallbackInfo, true, DebugMode, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
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
				wcout << hpm_str("SessionOpen failed with error:") << _Error.what() << hpm_str("\r\n");
				return false;
			}

			wcout << "Successfully opened session.\r\n";
			m_bBrokenConnection = false;

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

		m_NextUpdate = 0; // Update when connection is restored
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
					// Check our stuff
					HPMUInt64 CurrentTime = GetTimeSince1970();
					if (CurrentTime > m_NextUpdate)
					{
						// Find administrator resource

						HPMResourceEnum Resources = m_pSession->ResourceEnum();

						HPMUniqueID AdminResourceUID;
						HPMString ResourceToFind = hpm_str("Administrator");
						for (HPMUInt32 i = 0; i < Resources.m_Resources.size() && !AdminResourceUID.IsValid(); ++i)
						{
							HPMUniqueID ResourceUID = Resources.m_Resources[i];
							HPMResourceProperties ResourceInfo = m_pSession->ResourceGetProperties(ResourceUID);;

							if (ResourceInfo.m_Name == ResourceToFind)
							{
								AdminResourceUID = ResourceUID;
							}
						}

						if (AdminResourceUID.IsValid())
						{
							// Enumerate projects
							HPMProjectEnum Projects = m_pSession->ProjectEnum();
							// Loop through projects
							for (HPMUInt32 i = 0; i < Projects.m_Projects.size(); ++i)
							{
								// Enumerate tasks
								HPMUniqueID ProjectUID = Projects.m_Projects[i];
								HPMTaskEnum Tasks = m_pSession->TaskEnum(ProjectUID);
								HPMProjectProperties ProjectProp = m_pSession->ProjectGetProperties(ProjectUID);

								HPMUniqueID OurTaskID;
								HPMString OurTaskDesc = hpm_str("HPM SDK Simple Sample Task");
								for (HPMUInt32 j = 0; j < Tasks.m_Tasks.size() && !OurTaskID.IsValid(); ++j)
								{
									HPMString Description = m_pSession->TaskGetDescription(Tasks.m_Tasks[j]);
									if (Description == OurTaskDesc)
									{
										OurTaskID = Tasks.m_Tasks[j];
									}
								}

								// Impersonate resource so it looks like this resource made the changes.
								// The string in the third argument will be shown in the "Change originates from" column in the change history
								m_pSession->ResourceImpersonate(AdminResourceUID, EHPMDataHistoryClientOrigin_CustomSDK, m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Task updated from Sample_SimpleCpp")));

								if (!OurTaskID.IsValid())
								{
									// No old task was found, create a new one
									HPMTaskCreateUnified TaskCreate;
									TaskCreate.m_Tasks.resize(1);

									// Set previous to -1 to make it the top task.
									HPMTaskCreateUnifiedReference PrevRefID;
									PrevRefID.m_RefID = -1;
									PrevRefID.m_bLocalID = false;
									HPMTaskCreateUnifiedReference PrevWorkPrioRefID;
									PrevWorkPrioRefID.m_RefID = -2;
									PrevWorkPrioRefID.m_bLocalID = false;

									TaskCreate.m_Tasks[0].m_LocalID = 1;
									TaskCreate.m_Tasks[0].m_bIsProxy = false;
									TaskCreate.m_Tasks[0].m_TaskType = EHPMTaskType_Planned;
									TaskCreate.m_Tasks[0].m_TaskLockedType = EHPMTaskLockedType_Normal;

									TaskCreate.m_Tasks[0].m_NonProxy_ReuseID = 0;
									TaskCreate.m_Tasks[0].m_NonProxy_WorkflowID = 0xffffffff;
									TaskCreate.m_Tasks[0].m_PreviousRefID = PrevRefID;
									TaskCreate.m_Tasks[0].m_PreviousWorkPrioRefID = PrevWorkPrioRefID;

									HPMChangeCallbackData_TaskCreateUnified TaskCreateReturn = m_pSession->TaskCreateUnifiedBlock(ProjectUID, TaskCreate);
									if (TaskCreateReturn.m_Tasks.size() == 1)
									{
										// The returned is a task ref in the project container. We need the task id not the reference id.
										HPMUniqueID OurTaskRefID = TaskCreateReturn.m_Tasks[0].m_TaskRefID;
										OurTaskID = m_pSession->TaskRefGetTask(OurTaskRefID);
										m_pSession->TaskSetDescription(OurTaskID, OurTaskDesc);
										// When we set fully created the task becomes visible to users.
										m_pSession->TaskSetFullyCreated(OurTaskID);
										wstring Name(ProjectProp.m_Name.begin(), ProjectProp.m_Name.end());
										wcout << hpm_str("Successfully created task for project: ") << Name << hpm_str("\r\n");
									}
									else
										wcout << hpm_str("The wrong number of tasks were created, aborting\r\n");
								}

								if (OurTaskID.IsValid())
								{
									// Set to todays date
									HPMTaskTimeZones Zones;
									HPMTaskTimeZonesZone Zone;
									Zone.m_Start = (CurrentTime / (((HPMUInt64)(60*60*24))*1000000)) * (((HPMUInt64)(60*60*24))*1000000); // We must align the time on whole days
									Zone.m_End = Zone.m_Start; // When the end is the same as the start the task is one day long.
									Zones.m_Zones.push_back(Zone);
									m_pSession->TaskSetTimeZones(OurTaskID, Zones, 0);
									wstring Name(ProjectProp.m_Name.begin(), ProjectProp.m_Name.end());
									wcout << hpm_str("Successfully updated task for project: ") << Name << hpm_str("\r\n");
								}
							}
						}
						else
							wcout << hpm_str("No administrator user was found, aborting.\r\n");

#if (DEBUG)
						m_NextUpdate = CurrentTime + 10000000; // Check every 10 seconds
#else
						m_NextUpdate = CurrentTime + 120000000; // Check every 120 seconds
#endif
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
	CHansoftSDKSample_Simple Sample;

	return Sample.Run();
}

