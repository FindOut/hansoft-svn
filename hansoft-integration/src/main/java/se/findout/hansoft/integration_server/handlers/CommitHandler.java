package se.findout.hansoft.integration_server.handlers;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

@Path("commit")
public class CommitHandler {

	public CommitHandler() {
		// TODO Auto-generated constructor stub
	}
	
	@GET
	@Produces(MediaType.TEXT_PLAIN)
	public String getCommit() {
		System.out.println("Sending commit response!");
		return "Something";
	}

}
