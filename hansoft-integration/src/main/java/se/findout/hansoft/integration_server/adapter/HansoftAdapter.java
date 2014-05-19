package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.EHPMSdkDebugMode;
import se.hansoft.hpmsdk.HPMSdkException;
import se.hansoft.hpmsdk.HPMSdkJavaException;
import se.hansoft.hpmsdk.HPMSdkSession;

import javax.inject.Singleton;

@Singleton
public class HansoftAdapter {
    public static int USER_DOES_NOT_EXIST = -1;
    private HPMSdkSession sdk;

    public int getUserID(String name) {
		return USER_DOES_NOT_EXIST;
	}

    public void initialize(HansoftServer s, String project, Credentials user) throws HPMSdkException, HPMSdkJavaException {
        sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), project, user.getUsername(), user.getPassword(),
                null, null, true, EHPMSdkDebugMode.Off, 0, "", "", null);
    }
}
