
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

#include "../../HPMSdk.h"

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#else
#include <sys/time.h>
#include <sys/select.h>
#include <termios.h>
#include <stdio.h>
#include <errno.h>
#include <pthread.h>
#endif
#include <iostream>
#include <string>


using namespace std;

#ifdef _MSC_VER
typedef wstring SampleString;
#else
typedef string SampleString;
#endif

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

class CHansoftSDKSample_Simple
{
public:

	HPMSdkFunctions m_SDK;
	void *m_pSession;

	HPMUInt64 m_NextUpdate;
	HPMUInt64 m_NextConnectionAttempt;
#ifdef _MSC_VER
	HANDLE m_ProcessSemaphore;
#elif __GNUC__
	CProcessSemaphore m_ProcessSemaphore;
#endif
	HPMNeedSessionProcessCallbackInfo m_ProcessCallbackInfo;
	bool m_bDoneInit;

	CHansoftSDKSample_Simple()
	{
		m_bDoneInit = false;
		m_pSession = NULL;
		m_NextUpdate = 0;
		m_NextConnectionAttempt = 0;
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

		if (m_bDoneInit)
		{
			DestroyConnection();
			HPMDestroy(&m_SDK);
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

			HPMInt32 Error;
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

			m_pSession = m_SDK.SessionOpen(&Error, hpm_str("localhost"), 50256, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), true, &m_ProcessCallbackInfo, EHPMSDK_Version, DebugMode, 0, hpm_str(""), NULL, NULL);

			if (Error != EHPMError_NoError)
			{
				m_pSession = NULL;
				wcout << "SessionOpen failed with error: " << HPMErrorToStr(Error) << "\r\n";
				m_NextConnectionAttempt = CurrentTime + 10000000;

				return false;
			}

			wcout << "Successfully opened session.\r\n";

			return true;
		}

		return false;
	}

	void DestroyConnection()
	{
		if (m_pSession)
		{
			m_SDK.SessionClose(m_pSession);
			m_pSession = NULL;
		}

		m_NextUpdate = 0; // Update when connection is restored
	}

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

	void Update()
	{
		if (InitConnection())
		{
			HPMInt32 Error = m_SDK.SessionProcess(m_pSession);

			if (Error != EHPMError_NoError)
			{
				wcout << "SessionProcess failed with error: " << HPMErrorToStr(Error) << "\r\n";

				if (Error == EHPMError_ConnectionLost)
				{
					// Connection was lost, lets destroy it
					wcout << "Connection lost\r\n";
					DestroyConnection();
				}
			}
			else
			{
				// Check our stuff
				HPMUInt64 CurrentTime = GetTimeSince1970();
				if (CurrentTime > m_NextUpdate)
				{
					// Find administrator resource

					const HPMResourceEnum *pResources;
					Error = m_SDK.ResourceEnum(m_pSession, &pResources);
					HPMUniqueID AdminResourceUID = -1;
					if (Error == EHPMError_NoError)
					{
						SampleString ResourceToFind = hpm_str("Administrator");
						for (HPMUInt32 i = 0; i < pResources->m_nResources && AdminResourceUID == -1; ++i)
						{
							HPMUniqueID ResourceUID = pResources->m_pResources[i];
							const HPMResourceProperties *pResourceInfo;
							Error = m_SDK.ResourceGetProperties(m_pSession, ResourceUID, &pResourceInfo);

							if (Error == EHPMError_NoError)
							{
								if (pResourceInfo->m_pName == ResourceToFind)
								{
									AdminResourceUID = ResourceUID;
								}
								m_SDK.ObjectFree(m_pSession, pResourceInfo, NULL); // We must free the object or a memory leak will result.
							}
							else
								wcout << "ResourceGetProperties failed with error: " << HPMErrorToStr(Error) << "\r\n";
						}

						m_SDK.ObjectFree(m_pSession, pResources, NULL); // We must free the object or a memory leak will result.
					}
					else
						wcout << "ResourceGetProperties failed with error: " << HPMErrorToStr(Error) << "\r\n";

					if (AdminResourceUID != -1)
					{
						// Enumerate projects
						const HPMProjectEnum *pProjects;
						Error = m_SDK.ProjectEnum(m_pSession, &pProjects);
						if (Error == EHPMError_NoError)
						{
							// Loop through projects
							for (HPMUInt32 i = 0; i < pProjects->m_nProjects; ++i)
							{
								// Enumerate tasks
								HPMUniqueID ProjectUID = pProjects->m_pProjects[i];
								const HPMTaskEnum *pTasks;
								Error = m_SDK.TaskEnum(m_pSession, ProjectUID, &pTasks);
								if (Error == EHPMError_NoError)
								{
									HPMUniqueID OurTaskID = -1;
									SampleString OurTaskDesc = hpm_str("HPM SDK Simple Sample Task");
									for (HPMUInt32 j = 0; j < pTasks->m_nTasks && OurTaskID == -1; ++j)
									{
										const HPMString *pDescription;
										Error = m_SDK.TaskGetDescription(m_pSession, pTasks->m_pTasks[j], &pDescription);
										if (Error == EHPMError_NoError)
										{
											SampleString Desc = pDescription->m_pString;

											if (Desc == OurTaskDesc)
											{
												OurTaskID = pTasks->m_pTasks[j];
											}

											m_SDK.ObjectFree(m_pSession, pDescription, NULL); // We must free the object or a memory leak will result.
										}
									}

									// Impersonate resource so it looks like this resource made the changes.
									const HPMUntranslatedString *pOrigin;
									Error = m_SDK.LocalizationCreateUntranslatedStringFromString(m_pSession, hpm_str("Task updated from Sample_Simple"), &pOrigin);
									if (Error == EHPMError_NoError)
									{
										// The string in the fourth argument will be shown in the "Change originates from" column in the change history
										Error = m_SDK.ResourceImpersonate(m_pSession, AdminResourceUID, EHPMDataHistoryClientOrigin_CustomSDK, pOrigin);
										m_SDK.ObjectFree(m_pSession, pOrigin, NULL); // We must free the object or a memory leak will result.
										if (Error != EHPMError_NoError)
										{
											wcout << "ResourceImpersonate failed with error: " << HPMErrorToStr(Error) << "\r\n";
										}
									}

									if (OurTaskID == -1)
									{
										// No old task was found, create a new one
										HPMTaskCreateUnified CreateData;

										// Set previous to -1 to make it the top task.
										HPMTaskCreateUnifiedReference PrevRefID;
										PrevRefID.m_RefID = -1;
										PrevRefID.m_bLocalID = false;
										HPMTaskCreateUnifiedReference PrevWorkPrioRefID;
										PrevWorkPrioRefID.m_RefID = -2;
										PrevWorkPrioRefID.m_bLocalID = false;


										HPMTaskCreateUnifiedEntry CreateEntry;
										CreateEntry.m_LocalID = 1;
										CreateEntry.m_bIsProxy = false;
										CreateEntry.m_TaskType = EHPMTaskType_Planned;
										CreateEntry.m_TaskLockedType = EHPMTaskLockedType_Normal;

										CreateEntry.m_NonProxy_ReuseID = 0;
										CreateEntry.m_NonProxy_WorkflowID = 0xffffffff;
										CreateEntry.m_NonProxy_bRestoreFromHistory = 0;
										CreateEntry.m_PreviousRefID = PrevRefID;
										CreateEntry.m_PreviousWorkPrioRefID = PrevWorkPrioRefID;
										CreateEntry.m_nParentRefIDs = 0;

										CreateData.m_nTasks = 1;
										CreateData.m_pTasks = &CreateEntry;

										const HPMChangeCallbackData_TaskCreateUnified *pTaskCreateReturn;

										Error = m_SDK.TaskCreateUnified(m_pSession, ProjectUID, &CreateData, &pTaskCreateReturn);

										if (Error == EHPMError_NoError)
										{
											if (pTaskCreateReturn->m_nTasks == 1)
											{
												// The returned is a task ref in the project container. We need the task id not the reference id.
												if (m_SDK.TaskRefGetTask(m_pSession, pTaskCreateReturn->m_pTasks[0].m_TaskRefID, &OurTaskID) != EHPMError_NoError)
													wcout << "TaskRefGetTask failed with error: " << HPMErrorToStr(Error) << "\r\n";
												else
												{
													Error = m_SDK.TaskSetDescription(m_pSession, OurTaskID, OurTaskDesc.c_str());
													if (Error != EHPMError_NoError)
														wcout << "TaskSetDescription failed with error: " << HPMErrorToStr(Error) << "\r\n";

													// When we set fully created the task becomes visible to users.
													Error = m_SDK.TaskSetFullyCreated(m_pSession, OurTaskID);
													if (Error != EHPMError_NoError)
														wcout << "TaskSetFullyCreated failed with error: " << HPMErrorToStr(Error) << "\r\n";
													else
														wcout << "Successfully created task\r\n";
												}
											}
											else
												wcout << "The wrong number of tasks were created, aborting\r\n";

											m_SDK.ObjectFree(m_pSession, pTaskCreateReturn, NULL); // We must free the object or a memory leak will result.
										}
										else
											wcout << "TaskCreate failed with error: " << HPMErrorToStr(Error) << "\r\n";
									}

									if (OurTaskID != -1)
									{
										// Set to todays date
										HPMTaskTimeZonesZone Zone;
										HPMTaskTimeZones Zones;
										Zones.m_nZones = 1;
										Zones.m_pZones = &Zone;
										Zone.m_Start = (CurrentTime / (HPMUInt64(60*60*24)*1000000)) * (HPMUInt64(60*60*24)*1000000); // We must align the time on whole days
										Zone.m_End = Zone.m_Start; // When the end is the same as the start the task is one day long.

										Error = m_SDK.TaskSetTimeZones(m_pSession, OurTaskID, &Zones, AdminResourceUID);
										if (Error != EHPMError_NoError)
											wcout << "TaskSetTimeZones failed with error: " << HPMErrorToStr(Error) << "\r\n";
										else
											wcout << "Successfully updated task\r\n";
									}

									m_SDK.ObjectFree(m_pSession, pTasks, NULL); // We must free the object or a memory leak will result.
								}
								else
									wcout << "TaskEnum failed with error: " << HPMErrorToStr(Error) << "\r\n";
							}
							m_SDK.ObjectFree(m_pSession, pProjects, NULL); // We must free the object or a memory leak will result.
						}
						else
							wcout << "ProjectEnum failed with error: " << HPMErrorToStr(Error) << "\r\n";
					}
					else
						wcout << "No administrator user was found, aborting.\r\n";

#ifdef _DEBUG
					m_NextUpdate = CurrentTime + 10000000; // Check every 120 seconds
#else
					m_NextUpdate = CurrentTime + 120000000; // Check every 120 seconds
#endif
				}
			}
		}
	}

	int Run()
	{
		// Initialize the SDK
		HPMInt32 Error = HPMInit(&m_SDK, NULL, hpm_str(""));
		if (Error == EHPMError_NoError)
		{
			m_bDoneInit = true;
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
			HPMDestroy(&m_SDK);
			m_bDoneInit = false;
		}
		else
			wcout << "HPMInit failed with error: " << HPMErrorToStr(Error) << "\r\n";

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

