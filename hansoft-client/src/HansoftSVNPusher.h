/**
* Copyright (c) - placeholder
*
*/

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_
#include <HPMSdkCpp.h>
class HansoftSVNPusher : public HPMSdk::HPMSdkCallbacks {
public:
	HansoftSVNPusher();
	virtual ~HansoftSVNPusher();
	virtual void On_ProcessError(HPMSdk::EHPMError _Error);

	void initializeSDK();
	void push();
	void shutDown();

private:
	HPMSdk::HPMSdkSession *session;
};

#endif /* HANSOFTSVNPLUGIN_H_ */
