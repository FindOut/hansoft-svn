package se.findout.hansoft.integration_server.adapter;

import java.io.DataOutputStream;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.glassfish.grizzly.http.util.HttpStatus;

import se.findout.hansoft.integration_server.model.Commit;
import se.hansoft.hpmsdk.EHPMError;
import se.hansoft.hpmsdk.EHPMTaskSetStatusFlag;
import se.hansoft.hpmsdk.EHPMTaskStatus;
import se.hansoft.hpmsdk.HPMChangeCallbackData_CommunicationChannelPacketReceived;
import se.hansoft.hpmsdk.HPMSdkCallbacks;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMSdkSession;
import se.hansoft.hpmsdk.HPMTaskComment;
import se.hansoft.hpmsdk.HPMUniqueID;

public class IntegrationCallback extends HPMSdkCallbacks{
	private HashMap<String, Long> sessions;
    private HPMSdkSession session;
    
    private static final String REGISTER_TOKEN = "@Register:";
    private static final String COMMIT_TOKEN = "@Commit:";
    private static final String ITEMS_TOKEN = "@Items:";
	
	public IntegrationCallback() {
		sessions = new HashMap<String, Long>();
	}

    public void setSdk(HPMSdkSession session) {
        this.session = session;
    }
	
	@Override
	public void On_ProcessError(EHPMError error) {
		System.err.println("Error returned from Hansoft SDK with no: " + error.getValue());
	}
	
	@Override
	public void On_CommunicationChannelPacketReceived(HPMChangeCallbackData_CommunicationChannelPacketReceived packet) {
		long sessionID = packet.m_FromSessionID;
		String data = "";
		for(int i=0; i < packet.m_Packet.m_Bytes.length; ++i) {
			if(packet.m_Packet.m_Bytes[i] == 0) {
				data = new String(packet.m_Packet.m_Bytes, 0 , i);
				break;
			}
		}
		// handle user name or selected items response
		if (data.startsWith(COMMIT_TOKEN)) {
		    String svnRevision = getRevision(data, COMMIT_TOKEN);
		    String selectedItems = getItems(data, ITEMS_TOKEN);
		    if (!selectedItems.isEmpty()) {
		        handleSelectedTasks(svnRevision, selectedItems);
		    }
		} else if (data.startsWith(REGISTER_TOKEN)){
		    String user = data.substring(REGISTER_TOKEN.length());
		    sessions.put(user, sessionID);
		}
	}
	
	private String getItems(String data, String itemsToken) {
        // "@Commit:87@Items:1,2,3"
        String items = data.substring(data.indexOf(ITEMS_TOKEN)
                + ITEMS_TOKEN.length());
        return items;
    }

    private String getRevision(String data, String commitToken) {
        // "@Commit:87@Items:1,2,3"
        int itemPos = data.indexOf(ITEMS_TOKEN);
        String revision = data.substring(COMMIT_TOKEN.length(), itemPos);
        return revision;
    }

    /**
	 * Adds URL annotation for the selectedTasks to the commit
	 * @param svnRevision
	 * @param selectedItems
	 */
	private void handleSelectedTasks(String svnRevision, String selectedItems) {
        // POST to (python) http server to update SVN commit with URL(s)
	    updateSVNcommit(svnRevision, selectedItems);
	    // Update Hansoft items to mark as completed and add SVN commit info
	    updateHansoftItems(svnRevision, selectedItems);
	    // Remove the commit from the "stash"
	    doneWithCommit(svnRevision);
    }

    private void updateHansoftItems(String svnRevision, String selectedItems) {
         List<String> items = Arrays.asList(selectedItems.split(","));
        for (String item : items) {
            HPMUniqueID id = new HPMUniqueID(Integer.parseInt(item.trim()));
            try {
                EnumSet<EHPMTaskSetStatusFlag> noStatusFlags = 
                        EnumSet.noneOf(EHPMTaskSetStatusFlag.class);
                session.TaskSetStatus(
                        id,
                        EHPMTaskStatus.Completed,
                        false, //GotoWorkFlowStatus boolean: False
                        noStatusFlags  //SetStatusFlags: 0
                        );
                // get the user from the SVN revision
                Commit commit = getCommit(svnRevision);
                //String svnUser = commit.getAuthor();
                String message = commit.getMessage();
                //String hansoftUser = HansoftAdapter.getInstance().mapSVNUserToHansoftUser(svnUser);
                // TODO - impersonate to "do as actual user"
                HPMTaskComment taskComment = new HPMTaskComment();
                taskComment.m_MessageText = "Completed by SVN Revision: " + svnRevision + "\n" + message;
                session.TaskCreateComment(
                        id,
                        taskComment);
            } catch (HPMSdkException | HPMSdkJavaException e) {
                // TODO Auto-generated catch block
                HPMSdkException he = (HPMSdkException) e;
                System.err.println(he.ErrorAsStr());
            }
        } 
        
    }

    private void updateSVNcommit(String commitId, String selectedTasks) {
        // create annotation
        String annotation = "";
        String svnProjectPath = getPath(Integer.parseInt(commitId)); 
        List<String> items = Arrays.asList(selectedTasks.split(","));
        boolean isFirstLine = true;
        for (String item : items) {
            if (isFirstLine) {
                isFirstLine = false;
            } else {
                annotation += "\n";
            }
            try {
                String itemUrl = session.UtilGetHansoftURL(item);
                // ';' breaks to URL when sent to hansoftserver.py, so encode:
                String prefix = "Hansoft-URL: " + itemUrl.replaceAll(";", "%3B");
                //HPMUniqueID id = new HPMUniqueID(Integer.parseInt(item.trim()));
                //String description = session.TaskGetDescription(id);
                annotation += prefix; // + "[" + description.replaceAll(" ", "%20") + "]";
            } catch (HPMSdkException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            } catch (HPMSdkJavaException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
        String content;
        content = "rev=" + commitId;
        content += "&url=" + annotation;
        content += "&path=" + svnProjectPath;
        
        // open connection to http server
        String request = "http://localhost:9006";
        System.out.println("Sending to : " + request);
        System.out.println("Content: " + content);
        URL url;
        try {
            url = new URL(request);
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            connection.setDoOutput(true);
            connection.setDoInput(true);
            connection.setRequestMethod("POST");
            connection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
            connection.setRequestProperty("Accept:", "text/plain");
            DataOutputStream os = new DataOutputStream(connection.getOutputStream());
            os.writeBytes(content);
            os.flush();
            os.close();
            
            int responseCode = connection.getResponseCode();
            if (responseCode != HttpStatus.OK_200.getStatusCode()) {
                // not OK - log error - TODO
                System.err.println("Not OK when doing POST to SVN:");
                System.err.println("Status: " + responseCode);
                System.err.println("Content: " + content);
            }
        } catch (MalformedURLException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

    public long getSessionID(String user) {
		try {
			return sessions.get(user);
		} catch (NullPointerException e) {
			System.err.println("User " + user + " not found!\n");
			return 0;
		}
	}

    Map<Integer, Commit> commits = new HashMap<>();
    
    public void addCommit(Commit commit) {
        commits.put(commit.getRevision(), commit);
    }
    
    public Commit getCommit(String revision) {
        Integer rev = Integer.parseInt(revision);
        return commits.get(rev);
    }
    
    String getPath(int revision) {
        Commit commit = commits.get(revision);
        return commit.getPath();
    }
    
    public void doneWithCommit(String revision) {
        commits.remove(revision);
    }
}
