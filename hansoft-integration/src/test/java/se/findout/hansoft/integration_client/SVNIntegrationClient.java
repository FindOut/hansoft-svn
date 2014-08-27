package se.findout.hansoft.integration_client;

import java.io.IOException;

import se.findout.hansoft.integration_server.adapter.Credentials;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftException;
import se.findout.hansoft.integration_server.adapter.HansoftServer;
import se.findout.hansoft.integration_server.model.Commit;

/**
 * Created by bjorn on 2014-06-09.
 */
public class SVNIntegrationClient {

    public static void main(String [] args) throws HansoftException, IOException {
        HansoftAdapter adapter = HansoftAdapter.getInstance();
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        String sdkUsername = System.getenv("HANSOFT_SDK_USERNAME");
        String sdkPassword = System.getenv("HANSOFT_SDK_PASSWORD");
        String sdkDatabase = System.getenv("HANSOFT_DATABASE");
        String testUserName = System.getenv("TEST_USERNAME");
        sdkUser.setUsername(sdkUsername);
        sdkUser.setPassword(sdkPassword);
        adapter.initialize(server, sdkDatabase, sdkUser);
        
        // We need to register a channel for communication....
        adapter.registerChannel();
        System.out.print("Press any key to continue:\n");
        System.in.read();

        long id = adapter.getSessionID(testUserName);
        System.out.println("session id " + id);
        String author = "tester";
        int revision = 42;
        String path = "/a/b/c/repo/dir";
        String message = "Test of commit message";
        Commit commit = new Commit(author, revision, path, message);
        adapter.signalCommitPerformed(id, commit);
        System.out.println("Packet sent!");
    }
}
