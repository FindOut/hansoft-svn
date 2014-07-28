package se.findout.hansoft.integration_client;

import se.findout.hansoft.integration_server.adapter.Credentials;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftException;
import se.findout.hansoft.integration_server.adapter.HansoftServer;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMUniqueID;

import java.io.IOException;

/**
 * Created by bjorn on 2014-06-09.
 */
public class SVNIntegrationClient {

    public static void main(String [] args) throws HansoftException, IOException {
        HansoftAdapter adapter = new HansoftAdapter();
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        String sdkUsername = System.getenv("HANSOFT_SDK_USERNAME");
        String sdkPassword = System.getenv("HANSOFT_SDK_PASSWORD");
        String sdkDatabase = System.getenv("HANSOFT_DATABASE");
        String testUserName = System.getenv("TEST_USERNAME");
        sdkUser.setUsername(sdkUsername);
        sdkUser.setPassword(sdkPassword);
        adapter.initialize(server, sdkDatabase, sdkUser);
        System.out.print("Press any key to continue:");
        System.in.read();

        int id = adapter.getUserID(testUserName);
        adapter.signalCommitPerformed(id, "TestData");

    }
}
