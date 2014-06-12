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

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error)
{
	HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
	wstring Error(SdkError.begin(), SdkError.end());

	wcout << "On_ProcessError: " << Error << "\r\n";
}
