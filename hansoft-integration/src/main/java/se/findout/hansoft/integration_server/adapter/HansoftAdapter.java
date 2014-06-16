package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.*;

import javax.inject.Singleton;
import java.util.EnumSet;

@Singleton
public class HansoftAdapter {
    private HPMSdkSession sdk;

    public void initialize(HansoftServer s, String databaseName, Credentials user) throws HansoftException {
        if(sdk == null) {
            // TODO Hardcoded sdk-location
            try {
                sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), databaseName, user.getUsername(), user.getPassword(),
                        null, null, true, EHPMSdkDebugMode.Debug, 0, "", "/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6", null);
                sdk.CommunicationChannelRegister("svnChannel", EnumSet.of(EHPMChannelFlag.None), new HPMCommunicationChannelData(), "svn Integration Channel");
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
