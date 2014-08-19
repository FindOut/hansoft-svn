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

import org.glassfish.grizzly.http.util.HttpStatus;

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
    private HPMSdkSession sdk;
	
	public IntegrationCallback() {
		sessions = new HashMap<String, Long>();
	}

    public void setSdk(HPMSdkSession sdk) {
        this.sdk = sdk;
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
		// handle user name or selected task response
		if (data.startsWith("HelloWorld")) {
		    // SVN commit ID
		    // Hansoft selected tasks
		    String svnRevision = "81";
		    String selectedItems = "1, 2";
		    handleSelectedTasks(svnRevision, selectedItems);
		} else {
		    sessions.put(data, sessionID);
		}
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
    }

    private void updateHansoftItems(String svnRevision, String selectedItems) {
        List<String> items = Arrays.asList(selectedItems.split(","));
        for (String item : items) {
            HPMUniqueID id = new HPMUniqueID(Integer.parseInt(item.trim()));
            try {
                EnumSet<EHPMTaskSetStatusFlag> noStatusFlags = 
                        EnumSet.noneOf(EHPMTaskSetStatusFlag.class);
                sdk.TaskSetStatus(
                        id,
                        EHPMTaskStatus.Completed,
                        false, //GotoWorkFlowStatus boolean: False
                        noStatusFlags  //SetStatusFlags: 0
                        );
                HPMTaskComment taskComment = new HPMTaskComment();
                taskComment.m_MessageText = "SVN Revision: " + svnRevision;
                sdk.TaskSetComment(
                        id, 
                        0, //TODO - PostID
                        taskComment);
            } catch (HPMSdkException | HPMSdkJavaException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
                HPMSdkException he = (HPMSdkException) e;
                System.out.println(he.ErrorAsStr());
            }
        } 
        
    }

    private void updateSVNcommit(String commitId, String selectedTasks) {
        // create annotation
        String hansoftURIprefix = "hsprefix:"; //TODO - replace w actual hansoft URI
        String annotation = "";
        //TODO must be a configurable paramter to the integration:
        //TODO is the root of the SVN project
        String svnProjectPath = "/Users/fredrik/Library/Subversion/Repository/hstestproject"; 
        List<String> items = Arrays.asList(selectedTasks.split(","));
        for (String item : items) {
            annotation += hansoftURIprefix + item;
        }
        String content;
        content = "rev=" + commitId;
        content += "&url=" + annotation;
        content += "&path=" + svnProjectPath;
        
        // open connection to http server
        System.out.println("TODO connect to http server");
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
        
/*
        connection = HTTPConnection('localhost', 9006)
        content = {'rev': 1, 'url': 'http://hansoft.url', 'path': '/home/svn/testproject/'}
        connection.request("POST", "/post", urlencode(content), 
           {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/plain"})
        reply = connection.getresponse()
        assert reply.status == 200
        
 */
    }

    public long getSessionID(String user) {
		try {
			return sessions.get(user);
		} catch (NullPointerException e) {
			System.err.println("User " + user + " not found!\n");
			return 0;
		}
	}
}
