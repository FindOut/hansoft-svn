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
	session = NULL;

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

void HansoftSVNPusher::initializeSDK() {
	wcout << "Initializing..." << endl;

	HPMNeedSessionProcessCallbackInfo info;
	info.m_pContext = NULL;
	info.m_pCallback = NULL;

	try {
		session = HPMSdkSession::SessionOpen(hpm_str("localhost"), 50256, hpm_str("hansoft-data"), hpm_str("SDK"), hpm_str("SDK"), this, &info, true, EHPMSdkDebugMode_Debug, NULL, 0, hpm_str(""), HPMSystemString(), NULL);
	} catch (const HPMSdkException &_Error) {
		HPMString SdkError = _Error.GetAsString();
		wstring Error(SdkError.begin(), SdkError.end());
		wcout << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
		throw Error;
	} catch (const HPMSdkCppException &_Error) {
		wcout << hpm_str("SessionOpen failed with error:") << _Error.what() << hpm_str("\r\n");
		throw _Error;
	}
	session->VersionControlInit(hpm_str("./LocalFiles"));
	wcout << "Initialize complete!" << endl;
}

void HansoftSVNPusher::push() {
	wcout << "Pushing plugin to Hansoft..." << endl;

	HPMVersionControlAddFiles files;
	HPMVersionControlLocalFilePair file;
	// Local directory for plugin
	file.m_LocalPath = hpm_str("/home/bjorn/github/hansoft-svn/HansoftSDK_7_502/Samples/ClientPluginCpp/Plugin.so");
	// Remote Directory Path
	file.m_FileSpec.m_Path = hpm_str("SDK/Plugins/se.findout.hansoftsvnplugin/Linux2.6/x64/Plugin.so");
	files.m_FilesToAdd.push_back(file);

	files.m_Comment = hpm_str("Client plugin updated by HansoftSVNPusher");

	HPMChangeCallbackData_VersionControlAddFilesResponse Response = session->VersionControlAddFilesBlock(files);
	wcout << "Succeeded files: " << Response.m_Succeeded.size() << endl;
	wcout << "Already exists: " << Response.m_AlreadyExists.size() << endl;
	if (Response.m_Errors.size())
	{
		wcout << "Error adding version control file: '" << Response.m_Errors[0].m_File.c_str() << "' Error: '" << session->VersionControlErrorToStr(Response.m_Errors[0].m_Error).c_str() << "'\r\n";
		throw "Program Failed during push!";
	}

	wcout << "PushComplete!" << endl;
}

void HansoftSVNPusher::shutDown() {
	wcout << "Shutting down connection" << endl;
}

int main() {
	int status = 1;
	HansoftSVNPusher *pusher = new HansoftSVNPusher();
	pusher->initializeSDK();
	pusher->push();
	pusher->shutDown();
	delete pusher;
	return status;

}