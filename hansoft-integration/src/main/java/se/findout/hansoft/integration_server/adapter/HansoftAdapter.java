package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.*;

import javax.inject.Singleton;

@Singleton
public class HansoftAdapter {
    public static int USER_DOES_NOT_EXIST = -1;
    private HPMSdkSession sdk;

    public void initialize(HansoftServer s, String project, Credentials user) throws HPMSdkException, HPMSdkJavaException {
        sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), project, user.getUsername(), user.getPassword(),
                null, null, true, EHPMSdkDebugMode.Off, 0, "", "", null);
    }

    public int getUserID(String name) throws HPMSdkException, HPMSdkJavaException {
        HPMResourceEnum users = sdk.ResourceEnum();
        if(users != null) {
            return users.m_Resources.get(0).m_ID;
        }
        return USER_DOES_NOT_EXIST;
    }

    public String getUserURL(int id) {
        return null;
    }
}
