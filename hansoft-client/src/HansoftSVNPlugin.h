/*
 * HansoftSVNPlugin.h
 *
 *  Created on: 10 jun 2014
 *      Author: bjorn
 */

#ifndef HANSOFTSVNPLUGIN_H_
#define HANSOFTSVNPLUGIN_H_

class HansoftSVNPlugin {
public:
	HansoftSVNPlugin();
	virtual ~HansoftSVNPlugin();

	void initializeSDK();
	void run();
};

#endif /* HANSOFTSVNPLUGIN_H_ */
