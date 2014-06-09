package se.findout.hansoft.integration_client;

import se.findout.hansoft.integration_server.adapter.Credentials;
import se.findout.hansoft.integration_server.adapter.HansoftAdapter;
import se.findout.hansoft.integration_server.adapter.HansoftServer;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMUniqueID;

/**
 * Created by bjorn on 2014-06-09.
 */
public class SVNIntegrationClient {

    public static void main(String [] args) throws HPMSdkException, HPMSdkJavaException {
        HansoftAdapter adapter = new HansoftAdapter();
        HansoftServer server = new HansoftServer();
        Credentials sdkUser = new Credentials();
        sdkUser.setUsername("SDK");
        sdkUser.setPassword("SDK");
        try {
            adapter.initialize(server, "hansoft-data", sdkUser);
            HPMUniqueID id = adapter.getUserID("Björn Arnelid");
            adapter.signalCommitPerformed(id, "TestData");
            String answer = adapter.getCommitSignal(id);
            System.out.println(answer);
        } catch (HPMSdkException e) {
            System.err.print(e.ErrorAsStr() + "\n");
            throw e;
        } catch (HPMSdkJavaException e) {
            System.err.print(e.ErrorAsStr() + "\n");
            throw e;
        }
    }
}
