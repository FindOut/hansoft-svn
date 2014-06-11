
#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.IO;
using System.Messaging;

using HPMInt8 = System.SByte;
using HPMUInt8 = System.Byte;
using HPMInt16 = System.Int16;
using HPMUInt16 = System.UInt16;
using HPMInt32 = System.Int32;
using HPMUInt32 = System.UInt32;
using HPMInt64 = System.Int64;
using HPMUInt64 = System.UInt64;
using HPMError = System.Int32;
using HPMString = System.String;


namespace HansoftSDKSample_SimpleManaged
{
    class Program
    {
	    HPMSdkSession m_Session;
	    HPMUInt64 m_NextUpdate;
	    HPMUInt64 m_NextConnectionAttempt;
        CHPMSdkCallback m_Callback;
        bool m_bBrokenConnection;

	    Program()
	    {
		    m_Session = null;
		    m_NextUpdate = 0;
		    m_NextConnectionAttempt = 0;
            m_bBrokenConnection = false;
            m_Callback = new CHPMSdkCallback();
            m_Callback.m_Program = this;
	    }

	    ~Program()
	    {
		    DestroyConnection();
	    }

        class CHPMSdkCallback : HPMSdkCallbacks
        {
            public Program m_Program;
            public override void On_ProcessError(EHPMError _Error)
            {
                Console.Write("On_ProcessError: " + HPMSdkSession.ErrorToStr(_Error) + "\r\n");
                m_Program.m_bBrokenConnection = true;
            }
        }

	    HPMUInt64 GetTimeSince1970()
	    {
            DateTime Now = DateTime.UtcNow;
            DateTime t1970 = new DateTime(1970, 1, 1);
            TimeSpan Span = Now - t1970;

		    return (HPMUInt64)(Span.Ticks / 10);
	    }

	    bool InitConnection()
	    {
		    if (m_Session != null)
			    return true;

		    HPMUInt64 CurrentTime = GetTimeSince1970();
		    if (CurrentTime > m_NextConnectionAttempt)
		    {
			    m_NextConnectionAttempt = 0;

                EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode.Off;
#if (DEBUG)
			    DebugMode = EHPMSdkDebugMode.Debug; // Set debug flag so we will get memory leak info.
#endif

                try
                {
                    // You should change these parameters to match your development server and the SDK account you have created. For more information see SDK documentation.
                    m_Session = HPMSdkSession.SessionOpen("localhost", 50256, "Company Projects", "SDK", "SDK", m_Callback, null, true, DebugMode, (IntPtr)0, 0, "", "", null);
                }
                catch (HPMSdkException _Error)
                {
                    Console.Write("SessionOpen failed with error:" + _Error.ErrorAsStr() + "\r\n");
                    return false;
                }
                catch (HPMSdkManagedException _Error)
                {
                    Console.Write("SessionOpen failed with error:" + _Error.ErrorAsStr() + "\r\n");
                    return false;
                }

                Console.Write("Successfully opened session.\r\n");
                m_bBrokenConnection = false;

			    return true;
		    }

		    return false;
	    }

	    void DestroyConnection()
	    {
		    if (m_Session != null)
		    {
                HPMSdkSession.SessionDestroy(ref m_Session);
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

					        HPMResourceEnum Resources = m_Session.ResourceEnum();

					        HPMUniqueID AdminResourceUID = -1;
					        string ResourceToFind = "Administrator";
					        for (HPMUInt32 i = 0; i < Resources.m_Resources.Length && !AdminResourceUID.IsValid(); ++i)
					        {
						        HPMUniqueID ResourceUID = Resources.m_Resources[i];
						        HPMResourceProperties ResourceInfo = m_Session.ResourceGetProperties(ResourceUID);;

						        if (ResourceInfo.m_Name == ResourceToFind)
						        {
							        AdminResourceUID = ResourceUID;
						        }
					        }

					        if (AdminResourceUID.IsValid())
					        {
						        // Enumerate projects
						        HPMProjectEnum Projects = m_Session.ProjectEnum();
						        // Loop through projects
						        for (HPMUInt32 i = 0; i < Projects.m_Projects.Length; ++i)
						        {
							        // Enumerate tasks
							        HPMUniqueID ProjectUID = Projects.m_Projects[i];
							        HPMTaskEnum Tasks = m_Session.TaskEnum(ProjectUID);
                                    HPMProjectProperties ProjectProp = m_Session.ProjectGetProperties(ProjectUID);

							        HPMUniqueID OurTaskID = -1;
							        string OurTaskDesc = "HPM SDK Simple Sample Task";
							        for (HPMUInt32 j = 0; j < Tasks.m_Tasks.Length && !OurTaskID.IsValid(); ++j)
							        {
								        string Description = m_Session.TaskGetDescription(Tasks.m_Tasks[j]);
								        if (Description == OurTaskDesc)
								        {
									        OurTaskID = Tasks.m_Tasks[j];
								        }
							        }

							        // Impersonate resource so it looks like this resource made the changes.
                                    // The string in the third argument will be shown in the "Change originates from" column in the change history
                                    m_Session.ResourceImpersonate(AdminResourceUID, EHPMDataHistoryClientOrigin.CustomSDK, m_Session.LocalizationCreateUntranslatedStringFromString("Task updated from Sample_SimpleManaged"));

							        if (!OurTaskID.IsValid())
							        {
                                        // No old task was found, create a new one
                                        HPMTaskCreateUnified CreateData = new HPMTaskCreateUnified();
                                        Array.Resize(ref CreateData.m_Tasks, 1);
                                        CreateData.m_Tasks[0] = new HPMTaskCreateUnifiedEntry();

                                        // Set previous to -1 to make it the top task.
                                        HPMTaskCreateUnifiedReference PrevRefID = new HPMTaskCreateUnifiedReference();
                                        PrevRefID.m_RefID = -1;
                                        HPMTaskCreateUnifiedReference PrevWorkPrioRefID = new HPMTaskCreateUnifiedReference();
                                        PrevWorkPrioRefID.m_RefID = -2;

                                        CreateData.m_Tasks[0].m_LocalID = 1;
                                        CreateData.m_Tasks[0].m_PreviousRefID = PrevRefID;
                                        CreateData.m_Tasks[0].m_PreviousWorkPrioRefID = PrevWorkPrioRefID;

                                        HPMChangeCallbackData_TaskCreateUnified TaskCreateReturn = m_Session.TaskCreateUnifiedBlock(ProjectUID, CreateData);

                                        if (TaskCreateReturn.m_Tasks.Length == 1)
                                        {
                                            // The returned is a task ref in the project container. We need the task id not the reference id.
                                            HPMUniqueID OurTaskRefID = TaskCreateReturn.m_Tasks[0].m_TaskRefID;
                                            OurTaskID = m_Session.TaskRefGetTask(OurTaskRefID);
                                            m_Session.TaskSetDescription(OurTaskID, OurTaskDesc);
                                            // When we set fully created the task becomes visible to users.
                                            m_Session.TaskSetFullyCreated(OurTaskID);
                                            Console.Write("Successfully created task for project: " + ProjectProp.m_Name + "\r\n");
                                        }
								        else
                                            Console.Write("The wrong number of tasks were created, aborting\r\n");
							        }

							        if (OurTaskID.IsValid())
							        {
								        // Set to todays date
								        HPMTaskTimeZones Zones = new HPMTaskTimeZones();
								        Array.Resize(ref Zones.m_Zones, 1);
                                        Zones.m_Zones[0] = new HPMTaskTimeZonesZone();
								        Zones.m_Zones[0].m_Start = (CurrentTime / (((HPMUInt64)(60*60*24))*1000000)) * (((HPMUInt64)(60*60*24))*1000000); // We must align the time on whole days
								        Zones.m_Zones[0].m_End = Zones.m_Zones[0].m_Start; // When the end is the same as the start the task is one day long.
                                        m_Session.TaskSetTimeZones(OurTaskID, Zones, false);
                                        Console.Write("Successfully updated task for project: " + ProjectProp.m_Name + "\r\n");
                                    }
                                }
					        }
					        else
                                Console.Write("No administrator user was found, aborting.\r\n");

#if (DEBUG)
                            m_NextUpdate = CurrentTime + 10000000; // Check every 10 seconds
#else
                            m_NextUpdate = CurrentTime + 120000000; // Check every 120 seconds
#endif
                        }
			        }
                }
                catch (HPMSdkException _Error)
                {
                    Console.Write("Exception in processing loop: " + _Error.ErrorAsStr() + "\r\n");
                }
                catch (HPMSdkManagedException _Error)
                {
                    Console.Write("Exception in processing loop: " + _Error.ErrorAsStr() + "\r\n");
                }
		    }
	    }

	    void Run()
	    {
		    // Initialize the SDK
            while (!Console.KeyAvailable)
		    {
			    Update();

                Thread.Sleep(100);
		    }
            DestroyConnection();
	    }

        static void Main(string[] args)
        {
            Program MainProgram = new Program();
            MainProgram.Run();
        }
    }
}
