#if (PLATFORM_X64)
extern alias HPMSdkx64;
using HPMSdkx64::HPMSdk;
#else
extern alias HPMSdkx86;
using HPMSdkx86::HPMSdk;
#endif

using System;
using System.Collections;
using System.Collections.Generic;
using System.Configuration;

/// <summary>
/// Holds an instance of the globally available SDK session. This instance is used to get virtual session handles into the SDK session pool.
/// </summary>
public sealed class HPMWISdkSession
{

    private static volatile HPMWISdkSession m_Instance;
    private static object m_Sync = new Object();
    private static HPMSdkSession m_Session;
    private static HPMWISdkCallback m_Callback;

    private HPMWISdkSession()
    {

    }

    public static HPMWISdkSession Instance
    {
        get
        {
            if (m_Instance == null)
            {
                lock (m_Sync)
                {
                    if (m_Instance == null)
                    {

                        m_Instance = new HPMWISdkSession();
                        // configuration parameters are set in Web.config
                        string host = ((Hashtable)ConfigurationManager.GetSection("HPM"))["hpmhost"].ToString();
                        Int32 port = Convert.ToInt32(((Hashtable)ConfigurationManager.GetSection("HPM"))["hpmport"].ToString());
                        string database = ((Hashtable)ConfigurationManager.GetSection("HPM"))["hpmdatabase"].ToString();
                        string user = ((Hashtable)ConfigurationManager.GetSection("HPM"))["sdkuser"].ToString();
                        string password = ((Hashtable)ConfigurationManager.GetSection("HPM"))["sdkpassword"].ToString();
                        UInt32 sessions = Convert.ToUInt32(((Hashtable)ConfigurationManager.GetSection("HPM"))["sdknumsessions"].ToString());

                        m_Callback = new HPMWISdkCallback();

                        try
                        {
                            m_Session = HPMSdkSession.SessionOpen(host, port, database, user, password, m_Callback, null, true, EHPMSdkDebugMode.Off, (IntPtr)0, sessions, "", "", null);
                        }
                        catch (HPMSdkException error)
                        {
                            m_Instance = null;
                            throw error;
                        }
                        catch (HPMSdkManagedException error)
                        {
                            m_Instance = null;
                            throw error;
                        }
                    }
                }
            }
            return m_Instance;
        }
    }

    public HPMSdkSession Session
    {
        get
        {
            return m_Session;
        }
    }

   public HPMWISdkCallback Callback
    {
        get
        {
            return m_Callback;
        }
    }
}