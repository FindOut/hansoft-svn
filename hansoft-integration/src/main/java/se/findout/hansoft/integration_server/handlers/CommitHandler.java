package se.findout.hansoft.integration_server.handlers;

import se.findout.hansoft.integration_server.adapter.Credentials;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftException;
import se.findout.hansoft.integration_server.adapter.HansoftServer;
import se.findout.hansoft.integration_server.model.Commit;

import javax.inject.Inject;
import javax.ws.rs.Consumes;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.core.MediaType;

@Path("/commit")

public class CommitHandler {

    @Inject
    HansoftAdapter adapter;

	public CommitHandler() {
	}

	@POST
    @Consumes(MediaType.APPLICATION_JSON)
	public String postCommit(Commit commit) throws HansoftException {
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        sdkUser.setUsername("SDK");
        sdkUser.setPassword("SDK");

        adapter.initialize(server, "hansoft-data", sdkUser);
        int id = adapter.getUserID(commit.getAuthor());
        adapter.signalCommitPerformed(id, Integer.toString(commit.getRevision()));
        return "OK";
	}


}
