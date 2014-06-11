package se.findout.hansoft.integration_server.adapter;

import se.hansoft.hpmsdk.*;

import javax.inject.Singleton;

@Singleton
public class HansoftAdapter {
    private HPMSdkSession sdk;

    public void initialize(HansoftServer s, String databaseName, Credentials user) throws HansoftException {
        if(sdk == null) {
            // TODO Hardcoded sdk-location
            try {
                sdk = HPMSdkSession.SessionOpen(s.getURL(), s.getPort(), databaseName, user.getUsername(), user.getPassword(),
                        null, null, true, EHPMSdkDebugMode.Off, 0, "", "/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6", null);
            } catch (HPMSdkException e) {
                throw new HansoftException(e.ErrorAsStr());
            } catch (HPMSdkJavaException e) {
                throw new HansoftException(e.ErrorAsStr());
            }
        }
    }

    public int getUserID(String name) throws HansoftException {
        try {
            HPMResourceEnum users = sdk.ResourceEnum();
            if (users != null) {
                for (HPMUniqueID userID : users.m_Resources) {
                    HPMResourceProperties userInfo = sdk.ResourceGetProperties(userID);
                    if (userInfo.m_Name.equals(name)) {
                        return userID.m_ID;
                    }

                }
            }
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }

        return -1;
    }

    public void signalCommitPerformed(int userID, String data) throws HansoftException {
        HPMCustomSettingValue value = new HPMCustomSettingValue();
        value.m_Value = data;
        try {
            sdk.ResourceSetCustomSettingsValue(EHPMCustomSettingsType.Custom, new HPMUniqueID(userID), "svnIntegration", "svnCommit", value);
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }
    }

    public String getCommitSignal(int userID) throws HansoftException {
        HPMCustomSettingValue data = null;
        try {
            data = sdk.ResourceGetCustomSettingsValue(EHPMCustomSettingsType.Custom, new HPMUniqueID(userID), "svnIntegration", "svnCommit");
        } catch (HPMSdkException e) {
            throw new HansoftException(e.ErrorAsStr());
        } catch (HPMSdkJavaException e) {
            throw new HansoftException(e.ErrorAsStr());
        }
        return data.m_Value;
    }

    public String sayHello() {
        return "Hello World";
    }
}
