/*
 * HansoftSVNPlugin.h
 *
 *  Created on: 10 jun 2014
 *      Author: bjorn
 */

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_

#include "HPMSdkCpp.h"

class HansoftSVNPlugin : public HPMSdk::HPMSdkCallbacks {
public:
	HansoftSVNPlugin();
	virtual ~HansoftSVNPlugin();
	virtual void On_ProcessError(HPMSdk::EHPMError _Error);

	void initializeSDK();
	void run();
};

#endif /* HANSOFTSVNPLUGIN_H_ */
