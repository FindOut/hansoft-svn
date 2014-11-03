package se.findout.hansoft.integration_server.adapter;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;

import org.glassfish.grizzly.http.util.HttpStatus;

import se.findout.hansoft.integration_server.IntegrationServer;
import se.findout.hansoft.integration_server.Utilities;
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
    private String annotationServer;
    private static final String USER_AGENT = "Mozilla/5.0";

    
    private static final String REGISTER_TOKEN = "@Register:";
    private static final String COMMIT_TOKEN = "@Commit:";
    private static final String ITEMS_TOKEN = "@Items:";
    private static final String REPOSITORIES_TOKEN = "@Repositories:";
    private static final String REQUEST_COMMITS_TOKEN = "@RequestCommits:";
    private static final String POST_ANNOTATE_TOKEN = "@PostAnnotate:";
    
    public IntegrationCallback() {
		sessions = new HashMap<String, Long>();
        Utilities.debug("LIBPATH: " + System.getProperty("java.library.path"));
        annotationServer = IntegrationServer.getProperty("ANNOTATION_SERVER_URL", "http://localhost:9006");

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
		    Utilities.debug("Adding Hansoft user: " + user + " for session: " + sessionID);
		    sessions.put(user, sessionID);
		} else if (data.startsWith(REPOSITORIES_TOKEN)) {
		    List<String> repositories = getRepositories();
		    sendRepositories(sessionID, repositories);
		} else if (data.startsWith(REQUEST_COMMITS_TOKEN)) {
		    // format: @RequestCommits:user#svn://path/to/repo
		    String repositoryAndUser = data.substring(REQUEST_COMMITS_TOKEN.length());
		    List<String> commits = getCommits(repositoryAndUser, sessionID);
		    sendCommits(sessionID, commits);
		} else if (data.startsWith(POST_ANNOTATE_TOKEN)) {
		    // format: @PostAnnotate:item(,item)*#commit - where commit starts with r123
		    String itemsAndCommit = data.substring(POST_ANNOTATE_TOKEN.length());
		    int hashPos = itemsAndCommit.indexOf("#");
		    String svnRevision = itemsAndCommit.substring(hashPos + 1);
		    String selectedItems = itemsAndCommit.substring(0, hashPos);
		    handleSelectedTasks(svnRevision, selectedItems);
		}
	}
	
	/**
	 * Gets a list of SVN repositories
	 * @return
	 */
	private List<String> getRepositories() {
	    List<String> repositoryList = new ArrayList<String>();
	    String repositories = IntegrationServer.getProperty("REPOSITORIES");
	    for (String repository : repositories.split(",")) {
	        repositoryList.add(repository.trim());
	    }
	    return repositoryList;
    }
	
	private void sendRepositories(long sessionId, List<String> repositories) {
	    // TODO Send the list of SVN repositories back to the Hansoft client
	    String message;
	    if (repositories == null) {
	        message = REPOSITORIES_TOKEN + "<error>";
	    } else {
	        message = REPOSITORIES_TOKEN + repositories.toString();
	    }
	    System.out.println("Sending repositories to Hansoft: " + message);
	    try {
            HansoftAdapter.getInstance().sendToHansoft(sessionId, message);
        } catch (HansoftException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
	}

	/**
	 * Gets a list of commits for the given repository
	 * @param repository
	 * @return
	 */
	private List<String> getCommits(String repositoryAndUser, long sessionId) {
	    //TODO: do we need to translate hansoft user -> svn user
	    //TODO: or is sessionId enough?
	    String user = getUser(sessionId); 
	    List<String> listOfCommits = getFromAnnotationServer("/commits?" + repositoryAndUser);
	    return listOfCommits;
	}
	
	private void sendCommits(long sessionId, List<String> commits) {
	    String message = REQUEST_COMMITS_TOKEN + commits.toString();
	    System.out.println("Sending commits to Hansoft: " + message);
	    try {
	        HansoftAdapter.getInstance().sendToHansoft(sessionId, message);
	    } catch (HansoftException e) {
	        // TODO
	    }
	}
	
	
    private String getItems(String data, String itemsToken) {
        // "@Commit:87@Items:1,2,3"
        String items = data.substring(data.indexOf(ITEMS_TOKEN)
                + ITEMS_TOKEN.length());
        return items;
    }

    private String getRevision(String data, String commitToken) {
        // "@Commit:87@svnprojectname@Items:1,2,3"
        int itemPos = data.indexOf("@", 1);
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
        String svnRepositoryUrl = "";
        if (svnRevision.startsWith("svn://")) {
            svnRepositoryUrl = svnRevision.substring(0, svnRevision.indexOf("#"));
            svnRevision = svnRevision.substring(svnRevision.indexOf("#") + 1);
            svnRevision = svnRevision.substring(1, svnRevision.indexOf(" | "));
        }

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
                String message = commit.getMessage(true);
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
    
    private int getRevisionFromString(String commitId) {
        //svn://localhost/hstestproject#r480 | fredrik | 2014-10-28 12:57:09 +0100 (Tue, 28 Oct 2014) | x lines
        if (commitId.startsWith("svn://")) {
            commitId = commitId.substring(commitId.indexOf("#") + 1);
        }
        if (commitId.startsWith("r")) {
            // post annotation - commitId format: r123 | username...
            commitId = commitId.substring(1, commitId.indexOf(" |"));
        }
        return Integer.parseInt(commitId);
    }

    private void updateSVNcommit(String commitId, String selectedTasks) {
        // create annotation
        String annotation = "";
        boolean postAssociate = false;
        String svnRepositoryUrl = "";
        String svnProjectPath = ""; 
        if (commitId.startsWith("svn://")) {
            svnRepositoryUrl = commitId.substring(0, commitId.indexOf("#"));
            commitId = commitId.substring(commitId.indexOf("#") + 1);
        }
        if (commitId.startsWith("r")) {
            // post annotation - commitId format: r123 | username...
            commitId = commitId.substring(1, commitId.indexOf(" |"));
            postAssociate = true;
        }
        if (!postAssociate) {
            svnProjectPath = getPath(Integer.parseInt(commitId));
        }
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
                String prefix = Commit.HANSOFT_URL_PREFIX + itemUrl.replaceAll(";", "%3B");
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
        if (postAssociate) {
            content += "&svnurl=" + svnRepositoryUrl;
        } else {
            content += "&path=" + svnProjectPath;
        }
        postToAnnotationServer(content);
//        // open connection to http server
//        String request = IntegrationServer.getProperty("ANNOTATION_SERVER_URL", "http://localhost:9006");
//        Utilities.debug("Sending to : " + request);
//        Utilities.debug("Content: " + content);
//        URL url;
//        try {
//            url = new URL(request);
//            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
//            connection.setDoOutput(true);
//            connection.setDoInput(true);
//            connection.setRequestMethod("POST");
//            connection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
//            connection.setRequestProperty("Accept:", "text/plain");
//            DataOutputStream os = new DataOutputStream(connection.getOutputStream());
//            os.writeBytes(content);
//            os.flush();
//            os.close();
//            
//            int responseCode = connection.getResponseCode();
//            if (responseCode != HttpStatus.OK_200.getStatusCode()) {
//                // not OK - log error - TODO
//                System.err.println("Not OK when doing POST to SVN:");
//                System.err.println("Status: " + responseCode);
//                System.err.println("Content: " + content);
//            }
//        } catch (MalformedURLException e) {
//            // TODO Auto-generated catch block
//            e.printStackTrace();
//        } catch (IOException e) {
//            // TODO Auto-generated catch block
//            e.printStackTrace();
//        }
    }
    
    private void postToAnnotationServer(String content) {
        // open connection to http server
        String serverSpec = IntegrationServer.getProperty("ANNOTATION_SERVER_URL", "http://localhost:9006");
        Utilities.debug("Sending to : " + serverSpec);
        Utilities.debug("Content: " + content);
        URL url;
        try {
            url = new URL(serverSpec);
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
                System.err.println("Not OK when doing POST to SVN annotation server:");
                System.err.println("URL    : " + serverSpec);
                System.err.println("Status : " + responseCode);
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
    
    private List<String> getFromAnnotationServer(String requestPath) {
        Utilities.debug("Get commits from annotation server: " + requestPath);
        String user = requestPath.split("\\?")[2]; //TODO: map Hansoft user to SVN user
        try {
            URL url = new URL(annotationServer + requestPath);
            HttpURLConnection connection = (HttpURLConnection) url
                    .openConnection();
            connection.setRequestMethod("GET");
            connection.setRequestProperty("User-Agent", USER_AGENT);
            int responseCode = connection.getResponseCode();
            if (responseCode != HttpStatus.OK_200.getStatusCode()) {
                //Fail
                Utilities.debug("Got response code: " + responseCode);
                Utilities.debug("When requesting commits with path: " + requestPath);
                return null;
            }
            BufferedReader in = new BufferedReader(new InputStreamReader(
                    connection.getInputStream()));
            String inputLine;
            boolean matchedUser = false;
            Commit commit = null;
            int linesInCommit = -1;
            while ((inputLine = in.readLine()) != null) {
                Utilities.debug("INPUT: " + inputLine);
                if (inputLine.startsWith("SVNCommits:")) {
                    inputLine = inputLine.split(":")[1];
                }
                if (inputLine.startsWith("----------")) {
                    // Line with ------ marks first line of commit 
                    if (matchedUser) {
                        commit.setLines(linesInCommit);
                        linesInCommit = -1;
                        matchedUser = false;
                        commits.put(commit.getRevision(), commit);
                    }
                } else if (inputLine.startsWith("r")) {
                    // Commit line
                    if (inputLine.contains(" | " + user + " | ")) {
                        matchedUser = true;
                        commit = new Commit(inputLine);
                    }
                } else {
                    // other commit line - message!
                    linesInCommit++;
                    commit.setMessage(commit.getMessage() + "\n" + inputLine);
                }
            }
            in.close();
            Set<Integer> keySet = commits.keySet();
            List<String> listOfCommits = new ArrayList<>();
            
            // build the answer in descending revision order:
            ArrayList<Integer> keys = new ArrayList<Integer>(commits.keySet());
            for (int i = keySet.size() - 1; i >= 0; i--) {
                Commit c = commits.get(keys.get(i));
                String line = "r" + c.getRevision()
                        + Commit.COMMIT_FIELD_SEPARATOR + c.getAuthor()
                        + Commit.COMMIT_FIELD_SEPARATOR + c.getTimestamp()
                        + Commit.COMMIT_FIELD_SEPARATOR + c.getLines() + " lines";
                listOfCommits.add(line); 
            }
            return listOfCommits;

        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        return null;
    }

    public long getSessionID(String user) {
		try {
			return sessions.get(user);
		} catch (NullPointerException e) {
			System.err.println("User " + user + " not found!\n");
			return 0;
		}
	}
    
    /**
     * Gets the user for the given sessionId
     * @param sessionId
     * @return user or <b>null</b> if not found
     */
    private String getUser(long sessionId) {
        Set<Entry<String, Long>> entries = sessions.entrySet();
        for (Entry<String, Long> entry : entries) {
            if (entry.getValue() == sessionId) {
                return entry.getKey();
            }
        }
        return null;
    }

    SortedMap<Integer, Commit> commits = new TreeMap<Integer, Commit>();
    List<String> commitList = new ArrayList<String>();
    
    public void addCommit(Commit commit) {
        commits.put(commit.getRevision(), commit);
    }
    
    public Commit getCommit(String revision) {
        Integer rev = Integer.parseInt(revision);
        Commit commit = commits.get(rev);
        if (commit == null) {
            // we're post annotating, so get it from the commitList:
            String commitLine = null;
            for (String entry : commitList) {
                if (entry.startsWith("r" + revision)) {
                    commitLine = entry;
                    break;
                }
            }
            if (commitLine != null) {
                int firstSeparator = commitLine.indexOf(Commit.COMMIT_FIELD_SEPARATOR);
                String author = commitLine.substring(
                        firstSeparator + Commit.COMMIT_FIELD_SEPARATOR.length(),
                        commitLine.indexOf(Commit.COMMIT_FIELD_SEPARATOR, 
                        firstSeparator + Commit.COMMIT_FIELD_SEPARATOR.length()));
                int secondSeparator = commitLine.indexOf(Commit.COMMIT_FIELD_SEPARATOR, firstSeparator);
                String timestamp = commitLine.substring(
                        secondSeparator + Commit.COMMIT_FIELD_SEPARATOR.length(),
                        commitLine.indexOf(Commit.COMMIT_FIELD_SEPARATOR, 
                        firstSeparator + Commit.COMMIT_FIELD_SEPARATOR.length()));
                // message starts after 3d " | ":
                int thirdSeparator = commitLine.indexOf(" | ");
                for (int i = 0; i < 2; i++) {
                    thirdSeparator = commitLine.indexOf(" | ", thirdSeparator + 1);
                }
                String message = commitLine.substring(thirdSeparator + 3);
                String path = "N/A";
                commit = new Commit(author, rev, path, timestamp, message);
                commits.put(rev, commit);
            }
        }
        return commit;
    }
    
    String getPath(int revision) {
        Commit commit = commits.get(revision);
        return commit.getPath();
    }
    
    public void doneWithCommit(String revision) {
        int rev = getRevisionFromString(revision);
        commits.remove(rev);
    }
}
