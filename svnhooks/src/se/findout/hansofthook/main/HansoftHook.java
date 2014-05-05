package se.findout.hansofthook.main;

import java.io.File;
import java.io.IOException;

import javax.ws.rs.client.Client;
import javax.ws.rs.client.ClientBuilder;
import javax.ws.rs.client.Invocation;
import javax.ws.rs.client.WebTarget;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;


public class HansoftHook {

	public static void main(String[] args) {
		HansoftHook hook = new HansoftHook();
		hook.setRepoPath(args[0]);
		hook.setTask(Integer.parseInt(args[1]));
//		hook.setAuthor(args[2]);
		String append = hook.sendRequest("http://localhost:8000");
		if(append == null) {
			System.exit(1);			
		}
		try {
			hook.appendToMessage(append);
		} catch (IOException e) {
			e.printStackTrace();
			System.exit(1);
		}
	}


	//private String author;
	private int taskID;
	private String RepoPath;

//	public void setAuthor(String name) {
//		author = name;
//	}

	public void setTask(int number) {
		taskID = number;
		
	}
	
	public void setRepoPath(String repoPath) {
		RepoPath = repoPath;
	}

	public String sendRequest(String integrationServer) {
		Client client = ClientBuilder.newClient();
		WebTarget target = client.target("http://localhost:8000").path("commit");
		
		Invocation.Builder invocationBuilder =
		        target.request(MediaType.TEXT_PLAIN_TYPE);
		invocationBuilder.header("some-header", "true");
		Response response = invocationBuilder.get();
		String append = null;
		if(response.getStatus() == 200) {
			append = response.readEntity(String.class);
		}
		return append;
		
	}
	
	private void appendToMessage(String append) throws IOException {
		//  "svn propset -r <VersionNr> --revprop svn:log <"new log message"> <URL/to/repository/>"
		// "svnadmin setlog </path/to/repo> <newlog.txt> -r <VersionNr>" 
		File appendFile = File.createTempFile("tmpmsg", "txt");
		Runtime.getRuntime().exec("svnadmin setlog " + RepoPath + " " + appendFile.getAbsolutePath() + " -r " + taskID);
	}



}
