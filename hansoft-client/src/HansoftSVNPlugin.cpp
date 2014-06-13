/*
 * HansoftSVNPlugin.cpp
 *
 *  Created on: 12 jun 2014
 *      Author: bjorn
 */

#include <iostream>

#include "HPMSdkCpp.h"

#include "HansoftSVNPlugin.h"

#define mod_export __attribute__ ((__visibility__("default")))

using namespace HPMSdk;
using namespace std;

HansoftSVNPlugin::HansoftSVNPlugin() {
	session = NULL;
}

HansoftSVNPlugin::~HansoftSVNPlugin() {
	// TODO Auto-generated destructor stub
}

void HansoftSVNPlugin::initialize(const void *data) {
	session = HPMSdkSession::SessionOpen(hpm_str(""), 0, hpm_str(""), hpm_str(""), hpm_str(""), this, NULL, true, EHPMSdkDebugMode_Off, data, 0, hpm_str(""), HPMSystemString(), NULL);
	dialogTexts.m_ButtonLabel = session->LocalizationCreateUntranslatedStringFromString("Submit"); // HPMUntranslatedString//hpm_str("Submit");
	dialogTexts.m_CancelLabel = session->LocalizationCreateUntranslatedStringFromString("Cancel");
	dialogTexts.m_InfoText = session->LocalizationCreateUntranslatedStringFromString("Select items associated with your svn commit");
	dialogTexts.m_Title = session->LocalizationCreateUntranslatedStringFromString("Svn Commit");

}

void HansoftSVNPlugin::shutdown() {
	HPMSdkSession::SessionDestroy(session);
}

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error) {
	HPMString sdkError = HPMSdkSession::ErrorToStr(_Error);
	wstring Error(sdkError.begin(), sdkError.end());

	wcout << "On_ProcessError: " << Error << "\r\n";
}

void HansoftSVNPlugin::On_Callback(const HPMSdk::HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
	// This should be the channel for communicating with the clients.
	// We should ask for a project and return data to the Integration server!
	HPMProjectEnum projects = session->ProjectEnum();
	session->GlobalDisplayCustomTaskStatusDialog(dialogTexts, false, projects);
}

// External functions to load and unload the plugin

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKCreate(const void *_pClientData) {
	plugin = new HansoftSVNPlugin();
	plugin->initialize(_pClientData);
}

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKDestroy() {
	plugin->shutdown();
	delete plugin;
}
