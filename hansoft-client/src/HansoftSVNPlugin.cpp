/*
 * HansoftSVNPlugin.cpp
 *
 *  Created on: 12 jun 2014
 *      Author: bjorn
 */

#include <iostream>

#include "HPMSdkCpp.h"

#include "HansoftSVNPlugin.h"

using namespace HPMSdk;
using namespace std;

HansoftSVNPlugin::HansoftSVNPlugin() {
	// TODO Auto-generated constructor stub

}

HansoftSVNPlugin::~HansoftSVNPlugin() {
	// TODO Auto-generated destructor stub
}

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error) {
	HPMString sdkError = HPMSdkSession::ErrorToStr(_Error);
	wstring Error(sdkError.begin(), sdkError.end());

	wcout << "On_ProcessError: " << Error << "\r\n";
}

void HansoftSVNPlugin::On_Callback(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
	// This should be the channel for communicating with the clients.
	// We should ask for a project and return data to the Integration server!
}
