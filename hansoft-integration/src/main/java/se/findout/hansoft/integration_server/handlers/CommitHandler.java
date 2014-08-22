package se.findout.hansoft.integration_server.handlers;

import javax.inject.Inject;
import javax.ws.rs.Consumes;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.core.MediaType;

import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftException;
import se.findout.hansoft.integration_server.model.Commit;

@Path("/commit")

public class CommitHandler {

    @Inject
    HansoftAdapter adapter;

	public CommitHandler() {
	}

	@POST
    @Consumes(MediaType.APPLICATION_JSON)
	public String postCommit(Commit commit) throws HansoftException {
	    String svnuser = commit.getAuthor();
	    if (svnuser.endsWith("\n")) {
	        // Strip trailing "\n"
	        svnuser = svnuser.substring(0, svnuser.length() - 1); 
	    }
		long id = adapter.getSessionID(adapter.mapSVNUserToHansoftUser(svnuser));
        adapter.signalCommitPerformed(id, commit); 
        return "OK";
	}


}
