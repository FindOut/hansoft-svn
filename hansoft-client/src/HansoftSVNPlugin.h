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
	virtual void On_Callback(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data);
private:
	HPMSdk::HPMSdkSession *session;
	HPMSdk::HPMCustomTaskStatusDialogValues dialogTexts;
};

HansoftSVNPlugin *plugin;

#endif /* HANSOFTSVNPLUGIN_H_ */
