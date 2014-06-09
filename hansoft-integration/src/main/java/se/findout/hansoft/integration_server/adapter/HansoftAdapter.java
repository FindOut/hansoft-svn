package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.*;

import javax.inject.Singleton;
import java.util.ArrayList;

@Singleton
public class HansoftAdapter {
    private HPMSdkSession sdk;

    public void initialize(HansoftServer s, String databaseName, Credentials user) throws HPMSdkException, HPMSdkJavaException {
        if(sdk == null) {
            // TODO Hardcoded sdk-location
            sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), databaseName, user.getUsername(), user.getPassword(),
                    null, null, true, EHPMSdkDebugMode.Off, 0, "", "/home/bjorn/github/hansoft-svn/hansoft-integration/src/main/resources", null);
        }
    }

    public HPMUniqueID getUserID(String name) throws HPMSdkException, HPMSdkJavaException {
        HPMResourceEnum users = sdk.ResourceEnum();
        if (users != null) {
            for (HPMUniqueID userID : users.m_Resources) {
                HPMResourceProperties userInfo = sdk.ResourceGetProperties(userID);
                if (userInfo.m_Name.equals(name)) {
                    return userID;
                }

            }
        }
        return null;
    }

    public void signalCommitPerformed(HPMUniqueID userID, String data) throws HPMSdkException, HPMSdkJavaException {
        HPMCustomSettingValue value = new HPMCustomSettingValue();
        value.m_Value = data;
        sdk.ResourceSetCustomSettingsValue(EHPMCustomSettingsType.Custom, userID, "svnIntegration", "svnCommit", value);
    }

    public String getCommitSignal(HPMUniqueID userID) throws HPMSdkException, HPMSdkJavaException {
        HPMCustomSettingValue data = sdk.ResourceGetCustomSettingsValue(EHPMCustomSettingsType.Custom, userID, "svnIntegration", "svnCommit");
        return data.m_Value;
    }

    public String sayHello() {
        return "Hello World";
    }
}
