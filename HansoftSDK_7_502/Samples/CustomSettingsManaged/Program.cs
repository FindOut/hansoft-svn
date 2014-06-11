
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


namespace HansoftSDKSample_CustomSettings
{
    class Program
    {
        HPMSdkSession m_Session;
        HPMUInt64 m_NextUpdate;
        HPMUInt64 m_NextConnectionAttempt;
        CHPMSdkCallback m_Callback;
        bool m_bBrokenConnection;
        String m_CustomSettings;
        const String m_IntegrationIdentifier = "se.hansoft.samplecustomsettings";
        const String m_NewValue = "SDKItem1";

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
                    Console.WriteLine("SessionOpen failed with error:" + _Error.ErrorAsStr());
                    return false;
                }
                catch (HPMSdkManagedException _Error)
                {
                    Console.WriteLine("SessionOpen failed with error:" + _Error.ErrorAsStr());
                    return false;
                }

                Console.WriteLine("Successfully opened session.\r\n");
                m_Session.GlobalRegisterCustomSettings(m_IntegrationIdentifier, m_CustomSettings);
                m_bBrokenConnection = false;

                return true;
            }

            return false;
        }

        void DestroyConnection()
        {
            if (m_Session != null)
            {
                m_Session.GlobalUnregisterCustomSettings(m_IntegrationIdentifier);
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
#if (DEBUG)
                            m_NextUpdate = CurrentTime + 10000000; // Check every 10 seconds
#else
                            m_NextUpdate = CurrentTime + 120000000; // Check every 120 seconds
#endif
                        // Get text field
                        HPMCustomSettingValue EditFieldValue = m_Session.GlobalGetCustomSettingsValue(EHPMCustomSettingsType.Admin, m_IntegrationIdentifier, "GlobalSettings1/TestTab1/Edit");
                        Console.WriteLine("Example edit field: " + EditFieldValue.m_Value);

                        // Get selected resources
                        HPMCustomSettingValue SelectedResourcesValue = m_Session.GlobalGetCustomSettingsValue(EHPMCustomSettingsType.Admin, m_IntegrationIdentifier, "GlobalSettings1/TestTab2/Subset0");
                        if (SelectedResourcesValue.m_Value.Length > 0)
                        {
                            char[] DelimitChars = { ' ' };  // This will not work for values with escaped space in them
                            String[] Values = SelectedResourcesValue.m_Value.Split(DelimitChars);
                            foreach (String Value in Values)
                            {
                                HPMCustomChoiceValue CustomValue = m_Session.UtilDecodeCustomChoiceValue(Value);
                                Console.WriteLine("Value " + Value + " has unique ID " + CustomValue.m_UniqueID);
                                HPMResourceProperties Properties = m_Session.ResourceGetProperties(CustomValue.m_UniqueID);
                                Console.WriteLine("Name: " + Properties.m_Name + ", Email: " + Properties.m_EmailAddress);
                            }
                        }

                        HPMCustomSettingValue AllChoiceValue = m_Session.GlobalGetCustomSettingsValue(EHPMCustomSettingsType.Admin, m_IntegrationIdentifier, "GlobalSettings1/TestTab3/Subset1/Choices");
                        Console.WriteLine("All choices in TestTab3: " + AllChoiceValue.m_Value);

                        // Add new value from SDK if it's not there
                        if (!AllChoiceValue.m_Value.Contains(m_NewValue))
                        {
                            String NewAllChoices = m_NewValue + " " + AllChoiceValue.m_Value;
                            AllChoiceValue.m_Value = NewAllChoices;
                            m_Session.GlobalSetCustomSettingsValue(EHPMCustomSettingsType.Admin, m_IntegrationIdentifier, "GlobalSettings1/TestTab3/Subset1/Choices", AllChoiceValue);
                        }

                    }
                }
                catch (HPMSdkException _Error)
                {
                    Console.WriteLine("Exception in processing loop: " + _Error.ErrorAsStr());
                }
                catch (HPMSdkManagedException _Error)
                {
                    Console.WriteLine("Exception in processing loop: " + _Error.ErrorAsStr());
                }
            }
        }

        void Run()
        {
            try
            {
                m_CustomSettings = System.IO.File.ReadAllText(@"CustomSettings.ir");
                Thread.Sleep(100);
            }
            catch (Exception _Error)
            {
                Console.Error.WriteLine("Could not open custom settings file: " + _Error);
                System.Environment.Exit(1);

            }
            // Initialize the SDK
            while (!Console.KeyAvailable)
            {
                Update();

                Thread.Sleep(1000);
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
