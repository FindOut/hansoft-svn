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
	try {
		HPMSdkSession *session = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), this, &info, true, EHPMSdkDebugMode_Off, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
	} catch (const HPMSdkException &_Error)
	{
		HPMString SdkError = _Error.GetAsString();
		std::wstring Error(SdkError.begin(), SdkError.end());
		std::wcout << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
		return;
	}
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
