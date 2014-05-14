package se.findout.hansoft.integration_server.handlers;

import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

@Path("commit")
public class CommitHandler {

	public CommitHandler() {
	}
	
	@POST
	public String postCommit() {
		return "OK";
	}

}
