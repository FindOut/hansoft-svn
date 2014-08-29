/**
* Copyright (c) - placeholder
*
*/

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_
#include <HPMSdkCpp.h>
class HansoftSVNPlugin : public HPMSdk::HPMSdkCallbacks{
	public:
	HansoftSVNPlugin(const void *_pClientData);
	virtual ~HansoftSVNPlugin();

	void initialize(const void *data);
	void shutdown();

	virtual void On_ProcessError(HPMSdk::EHPMError _Error);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_ClientSyncDone &_Data);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data);

	//HPMSdk::HPMSdkSession *session;
private:
	void displayDialog();
	HPMSdk::HPMSdkSession *m_pSession;
	HPMSdk::HPMCustomTaskStatusDialogValues dialogTexts;
	HPMSdk::HPMNotificationSubscription subscription;
};

HansoftSVNPlugin *plugin;

#endif /* HANSOFTSVNPLUGIN_H_ */
