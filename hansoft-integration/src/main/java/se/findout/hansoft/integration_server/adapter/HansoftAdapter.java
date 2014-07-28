package se.findout.hansoft.integration_server.adapter;

import javax.inject.Singleton;

import se.hansoft.hpmsdk.EHPMSdkDebugMode;
import se.hansoft.hpmsdk.HPMCommunicationChannelPacket;
import se.hansoft.hpmsdk.HPMResourceEnum;
import se.hansoft.hpmsdk.HPMResourceProperties;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMSdkSession;
import se.hansoft.hpmsdk.HPMUniqueID;

@Singleton
public class HansoftAdapter {
    private HPMSdkSession sdk;

    public void initialize(HansoftServer s, String databaseName, Credentials user) throws HansoftException {
        if(sdk == null) {
            try {
                String hansoftWorkingDir = System.getenv("HANSOFT_WORKING_DIR");
                String hansoftLibPath = System.getenv("HANSOFT_SDK_PATH");
                sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), databaseName, user.getUsername(), user.getPassword(),
                        null, null, true, EHPMSdkDebugMode.Debug, 0, hansoftWorkingDir, hansoftLibPath, null);
                        //null, null, true, EHPMSdkDebugMode.Debug, 0, "/home/bjorn/github/hansoft-svn/hansoft-integration", "/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6", null);
                //sdk.CommunicationChannelRegister("svnChannel", EnumSet.of(EHPMChannelFlag.None), new HPMCommunicationChannelData(), "svn Integration Channel");
            } catch (HPMSdkException e) {
                throw new HansoftException(e.ErrorAsStr());
            } catch (HPMSdkJavaException e) {
                throw new HansoftException(e.ErrorAsStr());
            }
        }
    }



    public int getUserID(String name) throws HansoftException {
        try {
            HPMResourceEnum users = sdk.ResourceEnum();
            if (users != null) {
                for (HPMUniqueID userID : users.m_Resources) {
                    HPMResourceProperties userInfo = sdk.ResourceGetProperties(userID);
                    if (userInfo.m_Name.equals(name)) {
                        return userID.m_ID;
                    }

                }
            }
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }

        return -1;
    }

    public void signalCommitPerformed(int userID, String data) throws HansoftException {
        HPMCommunicationChannelPacket packet = new HPMCommunicationChannelPacket();
        packet.m_Bytes = data.getBytes();
        try {
            sdk.CommunicationChannelSendPacket("svnChannel", userID, packet);
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }
    }
}
