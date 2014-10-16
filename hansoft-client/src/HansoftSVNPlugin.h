/**
* Copyright (c) - placeholder
*
*/

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_
#include <HPMSdkCpp.h>
class HansoftSVNPlugin : public HPMSdk::HPMSdkCallbacks{
public:
	HansoftSVNPlugin();
	HansoftSVNPlugin(const void *_pClientData);
	virtual ~HansoftSVNPlugin();

	void initialize(const void *data);
	void shutdown();

	virtual void On_ProcessError(HPMSdk::EHPMError _Error);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_ClientSyncDone &_Data);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data);
    virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_RightClickMenuItemSelected &_Data);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data);
    virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_DynamicCustomSettingsNotification &_Data);
    virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_DynamicCustomSettingsValueChanged &_Data);

private:
	void displayDialog(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data);
    void displaySelectRepositoryDialog(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data);
    void displayAssociateCommitDialog(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data);
	void RegisterWithIntegration();
    void RequestSVNRepositories();
    void RequestSVNCommits();
	void On_Callback(const HPMSdk::HPMChangeCallbackData_CustomTaskStatusNotification &_Data);
	HPMSdk::HPMUInt64 GetIntegrationSessionID();

	HPMSdk::HPMSdkSession *m_pSession;
	HPMSdk::HPMUInt64 _sessionId;

	HPMSdk::HPMCustomTaskStatusDialogValues dialogTexts;
	HPMSdk::HPMNotificationSubscription subscription;

	HPMSdk::HPMString commit;
};

//HansoftSVNPlugin *plugin;

#endif /* HANSOFTSVNPLUGIN_H_ */
