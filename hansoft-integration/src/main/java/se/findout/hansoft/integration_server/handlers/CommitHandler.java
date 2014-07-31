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
		// TODO Hardcoded user for testing...
		//long id = adapter.getSessionID(commit.getAuthor());
        long id = adapter.getSessionID("Björn Arnelid");
        adapter.signalCommitPerformed(id, Integer.toString(commit.getRevision()));
        return "OK";
	}


}
