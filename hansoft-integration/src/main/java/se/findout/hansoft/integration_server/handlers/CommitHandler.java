package se.findout.hansoft.integration_server.handlers;

import se.findout.hansoft.integration_server.adapter.Credentials;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftServer;
import se.findout.hansoft.integration_server.model.Commit;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMUniqueID;

import javax.inject.Inject;
import javax.ws.rs.Consumes;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

@Path("/commit")

public class CommitHandler {

    @Inject
    HansoftAdapter adapter;

	public CommitHandler() {
	}

	@POST
    @Consumes(MediaType.APPLICATION_JSON)
	public String postCommit(Commit commit) throws HPMSdkException, HPMSdkJavaException {
        adapter.initialize(new HansoftServer(),"Project", new Credentials());
        HPMUniqueID id = adapter.getUserID(commit.getAuthor());
        adapter.signalCommitPerformed(id, Integer.toString(commit.getRevision()));
        System.out.println(adapter.sayHello());
        return "OK";
	}


}
