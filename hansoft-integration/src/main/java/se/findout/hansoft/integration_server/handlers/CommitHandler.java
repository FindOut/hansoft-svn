package se.findout.hansoft.integration_server.handlers;

import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.model.Commit;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;

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
	public String postCommit(Commit commit) throws HPMSdkException, HPMSdkJavaException {
        adapter.getUserID(commit.getAuthor());
        return "OK";
	}

}
