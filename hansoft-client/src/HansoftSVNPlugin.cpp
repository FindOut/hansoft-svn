/*
 * HansoftSVNPlugin.cpp
 *
 *  Created on: 10 jun 2014
 *      Author: bjorn
 */

#include <iostream>

#include "HPMSdkCpp.h"

#include "HansoftSVNPlugin.h"

using namespace HPMSdk;

HansoftSVNPlugin::HansoftSVNPlugin() {
	// TODO Auto-generated constructor stub

}

HansoftSVNPlugin::~HansoftSVNPlugin() {
	// TODO Auto-generated destructor stub
}

void HansoftSVNPlugin::initializeSDK() {
	std::cout << "Initializing..." << std::endl;
	HPMSdkSession session = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("Company Projects"), hpm_str("SDK"), hpm_str("SDK"), this, &m_ProcessCallbackInfo, true, DebugMode, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
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
