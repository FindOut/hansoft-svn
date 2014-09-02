package se.findout.hansoft.integration_server.adapter;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Properties;

import javax.inject.Singleton;

import se.findout.hansoft.integration_server.IntegrationServer;
import se.findout.hansoft.integration_server.Utilities;
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
    private HPMSdkSession sdkSession;
    private IntegrationCallback callback;
    private Credentials sdkUser;
    
    private static HansoftAdapter instance;
    
    public HansoftAdapter() {
        instance = this;
    }
    
    public static HansoftAdapter getInstance() {
        if (instance == null) {
            instance = new HansoftAdapter();
        }
        return instance;
    }

    public void initialize(HansoftServer server, String databaseName, Credentials user) throws HansoftException {
        if(sdkSession == null) {
            sdkUser = user;
            try {
            	Utilities.debug("Initializing!");
            	callback = new IntegrationCallback();
                String hansoftWorkingDir = IntegrationServer.getProperty("HANSOFT_WORKING_DIR");
                String hansoftLibPath = IntegrationServer.getProperty("HANSOFT_SDK_PATH");
                String usermappingFile = IntegrationServer.getProperty("HANSOFT_SVN_USER_MAPPINGFILE");
                populateMap(usermappingFile);
                Utilities.debug("Opening session for: " + server.getURL() + ", "
                        + server.getPort() + ", " + user.getUsername() + ", "
                        + hansoftWorkingDir + ", " + hansoftLibPath);
                sdkSession = HPMSdkSession.SessionOpen(
                        server.getURL(), 
                        server.getPort(), 
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
                callback.setSdk(sdkSession);
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
            HPMResourceEnum users = sdkSession.ResourceEnum();
            if (users != null) {
                for (HPMUniqueID userID : users.m_Resources) {
                    HPMResourceProperties userInfo = sdkSession.ResourceGetProperties(userID);
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
    
    public Credentials getSdkUser() {
        return sdkUser;
    }

    public void signalCommitPerformed(long sessionID, Commit commit) throws HansoftException {
        String revision = Integer.toString(commit.getRevision());
        File repoFile = new File(commit.getPath());
        String repoName = repoFile.getName();
        String packetStr = revision + "@" + repoName;
        callback.addCommit(commit);
        HPMCommunicationChannelPacket packet = new HPMCommunicationChannelPacket();
        // send: revision@repo to Hansoft client plug-in:
        //packet.m_Bytes = revision.getBytes();
        packet.m_Bytes = packetStr.getBytes();
        packet.m_Flags = EHPMPacketFlag.toEnumSet(0);
        try {
            sdkSession.CommunicationChannelSendPacket("svnChannel", sessionID, packet);
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }
    }



	public void registerChannel() throws HansoftException {
		try {
			sdkSession.CommunicationChannelRegister("svnChannel", EHPMChannelFlag.toEnumSet(0), new HPMCommunicationChannelData(), "Test channel");
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
    	    Utilities.debug("HansoftAdapter.populateMap() - element count: " + userMapping.size());
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
	
	/**
	 * Map SVN user to Hansoft user.<br>
	 * If no mapping exists, just return the svnUser
	 * @param svnUser
	 * @return hansoftUser
	 */
	public String mapSVNUserToHansoftUser(String svnUser) {
	    String hansoftUser = userMapping.getProperty(svnUser, svnUser);
	    Utilities.debug("DEBUG: Matched SVN user: " + svnUser + " with Hansoft user: " + hansoftUser);
	    return hansoftUser;
	}
}
