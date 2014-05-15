package se.findout.hansoft.integration_server.handlers;

import se.findout.hansoft.integration_server.model.Commit;

import javax.ws.rs.*;
import javax.ws.rs.core.MediaType;

@Path("/commit")

public class CommitHandler {

	public CommitHandler() {
	}

	@POST
    @Consumes(MediaType.APPLICATION_JSON)
	public String postCommit(Commit commit) {
		System.out.println("Received commit from: " + commit.author);
        return "OK";
	}

    @GET
    public String getCommit() {
        return "Hello World!";
    }
}
