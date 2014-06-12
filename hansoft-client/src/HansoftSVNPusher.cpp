/*
 * HansoftSVNPlugin.cpp
 *
 *  Created on: 10 jun 2014
 *      Author: bjorn
 */

#include <iostream>

#include "HansoftSVNPusher.h"

using namespace HPMSdk;

using namespace std;

HansoftSVNPusher::HansoftSVNPusher() {
	// TODO Auto-generated constructor stub

}

HansoftSVNPusher::~HansoftSVNPusher() {
	// TODO Auto-generated destructor stub
}

void HansoftSVNPusher::On_ProcessError(EHPMError _Error)
{
	HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
	wstring Error(SdkError.begin(), SdkError.end());

	wcout << "On_ProcessError: " << Error << "\r\n";
}

int HansoftSVNPusher::initializeSDK() {
	wcout << "Initializing..." << endl;

	HPMNeedSessionProcessCallbackInfo info;
	info.m_pContext = NULL;
	info.m_pCallback = NULL;

	HPMSdkSession *session = NULL;

	try {
		session = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("hansoft-data"), hpm_str("SDK"), hpm_str("SDK"), this, &info, true, EHPMSdkDebugMode_Debug, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
	} catch (const HPMSdkException &_Error) {
		HPMString SdkError = _Error.GetAsString();
		wstring Error(SdkError.begin(), SdkError.end());
		wcout << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
	} catch (const HPMSdkCppException &_Error) {
		wcout << hpm_str("SessionOpen failed with error:") << _Error.what() << hpm_str("\r\n");
	}

	if(session) {
		wcout << "Initialize complete!" << endl;
		return 0;
	}
	wcout << "Initialize failed" << endl;
	return 1;
}

void HansoftSVNPusher::run() {
	wcout << "Starting plugin..." << endl;
}

void HansoftSVNPusher::shutDown() {
	wcout << "Shutting down connection" << endl;
}

int main() {
	int status = 1;
	HansoftSVNPusher *pusher = new HansoftSVNPusher();
	status = pusher->initializeSDK();
	pusher->run();
	pusher->shutDown();
	delete pusher;
	return status;

}
