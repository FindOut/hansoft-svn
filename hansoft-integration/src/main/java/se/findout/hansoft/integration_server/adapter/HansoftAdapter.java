package se.findout.hansoft.integration_server.adapter;

import javax.inject.Singleton;

import se.hansoft.hpmsdk.EHPMChannelFlag;
import se.hansoft.hpmsdk.EHPMPacketFlag;
import se.hansoft.hpmsdk.EHPMSdkDebugMode;
import se.hansoft.hpmsdk.HPMCommunicationChannelData;
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
    private IntegrationCallback callback;

    public void initialize(HansoftServer s, String databaseName, Credentials user) throws HansoftException {
        if(sdk == null) {
            try {
            	callback = new IntegrationCallback();
                String hansoftWorkingDir = System.getenv("HANSOFT_WORKING_DIR");
                String hansoftLibPath = System.getenv("HANSOFT_SDK_PATH");
                sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), databaseName, user.getUsername(), user.getPassword(),
                        callback, null, true, EHPMSdkDebugMode.Debug, 0, hansoftWorkingDir, hansoftLibPath, null);
            } catch (HPMSdkException e) {
                throw new HansoftException(e.ErrorAsStr());
            } catch (HPMSdkJavaException e) {
                throw new HansoftException(e.ErrorAsStr());
            }
        }
    }

    public long getSessionID() {
    	return callback.getSessionID();
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

    public void signalCommitPerformed(long userID, String data) throws HansoftException {
        HPMCommunicationChannelPacket packet = new HPMCommunicationChannelPacket();
        packet.m_Bytes = data.getBytes();
        packet.m_Flags = EHPMPacketFlag.toEnumSet(0);
        try {
            sdk.CommunicationChannelSendPacket("svnChannel", userID, packet);
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }
    }



	public void registerChannel() throws HansoftException {
		try {
			sdk.CommunicationChannelRegister("svnChannel", EHPMChannelFlag.toEnumSet(0), new HPMCommunicationChannelData(), "Test channel");
	       } catch (HPMSdkException e) {
	            throw new HansoftException(e.ErrorAsStr());
	        } catch (HPMSdkJavaException e) {
	            throw new HansoftException(e.ErrorAsStr());
	        }
		
	}
}
