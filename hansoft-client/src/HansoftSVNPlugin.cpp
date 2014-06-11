/*
 * HansoftSVNPlugin.cpp
 *
 *  Created on: 10 jun 2014
 *      Author: bjorn
 */

#include <iostream>

#include "HansoftSVNPlugin.h"

using namespace HPMSdk;

HansoftSVNPlugin::HansoftSVNPlugin() {
	// TODO Auto-generated constructor stub

}

HansoftSVNPlugin::~HansoftSVNPlugin() {
	// TODO Auto-generated destructor stub
}

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error)
{
	// Lets do nothing for now....
}

void HansoftSVNPlugin::initializeSDK() {
	std::cout << "Initializing..." << std::endl;
	HPMNeedSessionProcessCallbackInfo info;
	HPMSdkSession *session = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), this, &info, true, EHPMSdkDebugMode_Off, NULL, 0, hpm_str("/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Linux2.6"), HPMSystemString(), NULL);
	std::cout << "Initialize complete!" << std::endl;

}

void HansoftSVNPlugin::run() {
	std::cout << "Starting plugin..." << std::endl;
}

int main() {
	HansoftSVNPlugin *plugin = new HansoftSVNPlugin();
	plugin->initializeSDK();
	plugin->run();
	delete plugin;
	return 0;

}
