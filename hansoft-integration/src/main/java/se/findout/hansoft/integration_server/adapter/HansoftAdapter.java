package se.findout.hansoft.integration_server.adapter;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Properties;

import javax.inject.Singleton;

import se.findout.hansoft.integration_server.model.Commit;
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
            	System.out.println("Initializing!");
            	callback = new IntegrationCallback();
                String hansoftWorkingDir = System.getenv("HANSOFT_WORKING_DIR");
                String hansoftLibPath = System.getenv("HANSOFT_SDK_PATH");
                String usermappingFile = System.getenv("HANSOFT_SVN_MAPPINGFILE");
                populateMap(usermappingFile);
                sdk = HPMSdkSession.SessionOpen(
                        s.getURL(), 
                        s.getPort(), 
                        databaseName, 
                        user.getUsername(), 
                        user.getPassword(),
                        callback, 
                        null, 
                        true, 
                        EHPMSdkDebugMode.Debug, 
                        0, 
                        hansoftWorkingDir, 
                        hansoftLibPath, 
                        null);
                callback.setSdk(sdk);
            } catch (HPMSdkException e) {
                throw new HansoftException(e.ErrorAsStr());
            } catch (HPMSdkJavaException e) {
                throw new HansoftException(e.ErrorAsStr());
            }
        }
    }

    public long getSessionID(String name) {
    	return callback.getSessionID(name);
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

    public void signalCommitPerformed(long sessionID, Commit commit) throws HansoftException {
        String revision = Integer.toString(commit.getRevision());
        callback.addCommit(commit);
        HPMCommunicationChannelPacket packet = new HPMCommunicationChannelPacket();
        packet.m_Bytes = revision.getBytes();
        packet.m_Flags = EHPMPacketFlag.toEnumSet(0);
        try {
            sdk.CommunicationChannelSendPacket("svnChannel", sessionID, packet);
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
	
	Properties userMapping = new Properties();
	
	private void populateMap(String mapFilename) {
	    try {
    	    File mapFile = new File(mapFilename);
    	    FileInputStream fileInput = new FileInputStream(mapFile);
    	    userMapping.load(fileInput);
    	    System.out.println("HansoftAdapter.populateMap() - element count: " + userMapping.size());
    	    fileInput.close();
        } catch (FileNotFoundException e) {
            System.err
                    .println("!!! Could not locate Hansoft/SVN user mapping file: "
                            + mapFilename);
        } catch (IOException e) {
            System.err
                    .println("!!! Failed to load Hansoft/SVN user mapping from: "
                            + mapFilename);
        }
	}
	
	public String mapSVNUserToHansoftUser(String svnUser) {
	    String hansoftUser = userMapping.getProperty(svnUser);
	    return hansoftUser;
	}
}
