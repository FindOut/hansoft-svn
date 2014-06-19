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
        sdkUser.setUsername("SDK");
        sdkUser.setPassword("SDK");
        adapter.initialize(server, "hansoft-data", sdkUser);
        System.in.read();

        int id = adapter.getUserID("Björn Arnelid");
        adapter.signalCommitPerformed(id, "TestData");

    }
}
