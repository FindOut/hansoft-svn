/*
 * HansoftSVNPlugin.h
 *
 *  Created on: 12 jun 2014
 *      Author: bjorn
 */

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_

class HansoftSVNPlugin : public HPMSdk::HPMSdkCallbacks{
public:
	HansoftSVNPlugin();
	virtual ~HansoftSVNPlugin();

	void initialize(const void *data);
	void shutdown();

	virtual void On_ProcessError(HPMSdk::EHPMError _Error);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_ClientSyncDone &_Data);
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data);

	//HPMSdk::HPMSdkSession *session;
private:
	void displayDialog();
	HPMSdk::HPMSdkSession *session;
	HPMSdk::HPMCustomTaskStatusDialogValues dialogTexts;
	HPMSdk::HPMNotificationSubscription subscription;
};

HansoftSVNPlugin *plugin;

#endif /* HANSOFTSVNPLUGIN_H_ */
