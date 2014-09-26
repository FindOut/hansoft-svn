/**
* Copyright (c) - placeholder
*
*/

#include "HansoftSVNPlugin.h"
#include "HansoftSVNCommon.h"
#include "converter.h"
#include <HPMSdkCpp.h>

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#endif
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#ifdef _MSC_VER
#define mod_export __declspec(dllexport)
#elif __GNUC__
#define mod_export __attribute__ ((__visibility__("default")))
#endif

using namespace HPMSdk;


#ifdef _DEBUG
std::ofstream _debuglog;
#endif

HansoftSVNPlugin::HansoftSVNPlugin(const void *_pClientData)
    {
        m_pSession = NULL;

#ifdef _DEBUG
#ifdef _MSC_VER
        _debuglog.open("C:\\tmp\\hssvnplugin.log");
#else
        _debuglog.open("/tmp/hssvnplugin.log");
#endif
        _debuglog << "Starting log" << std::endl;
        _debuglog.flush();
#endif

        try
        {
            m_pSession = HPMSdkSession::SessionOpen(
                hpm_str(""),
                0,
                hpm_str(""),
                hpm_str(""),
                hpm_str(""),
                this,
                NULL,
                true,
                EHPMSdkDebugMode_Off,
                _pClientData,
                0,
                hpm_str(""),
                HPMSystemString(),
                NULL);
        }
        catch (HPMSdkException &_Exception)
        {
            HPMString ErrorStr = _Exception.GetAsString();

#ifdef _MSC_VER
            STD_STRINGSTREAM Stream;
            Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
            Stream << ErrorStr;
            MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK | MB_ICONERROR);
#else
            std::cerr << hpm_str("Error initializing client SVN plugin: ") << ErrorStr << "\n";
#endif
        }
        catch (HPMSdkCppException &_Exception)
        {
#ifdef _MSC_VER
            STD_STRINGSTREAM Stream;
            Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
            Stream << _Exception.what();
            MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK | MB_ICONERROR);
#else
            std::cerr << hpm_str("Error initializing client SVN plugin: ") << _Exception.what() << "\n";
#endif
        }
    }

HansoftSVNPlugin::~HansoftSVNPlugin()
    {
        if (m_pSession)
        {
            HPMSdkSession::SessionDestroy(m_pSession);
            m_pSession = NULL;
        }
    }

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_ClientSyncDone &_Data)
    {

#ifdef _MSC_VER
        MessageBox(
            NULL,
            hpm_str("The client has finished syncing and the Client SVN plugin is working."),
            hpm_str("Client SVN plugin"),
            MB_OK | MB_ICONINFORMATION);
#else
        std::cout << "The client has finished syncing and the Client SVN plugin is working.\n";
#endif
        HansoftSVNPlugin::RegisterWithIntegration();
		popup = m_pSession->GlobalRegisterForCustomTaskStatusNotifications(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp"), new HPMUserContext());

    }

//void HansoftSVNPlugin::On_Callback(const HPMSdk::HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data) {}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
        displayDialog(_Data);
		std::string repoStr1(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());

#ifdef _MSC_VER
		std::wstring revRepoStr = get_wstring(repoStr1);
        int pos = revRepoStr.find(L"@");
        STD_STRING revision = revRepoStr.substr(0, pos);
#else
		int pos = repoStr1.find("@");
        STD_STRING revision = repoStr1.substr(0, pos);
#endif
        const NInternal_C::HPMCharType *pData = (const NInternal_C::HPMCharType *)&(_Data.m_Packet.m_Bytes[0]);
		std::string commitStr(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
#ifdef _MSC_VER
		commit = get_wstring(commitStr);
#else
		commit = commitStr;
#endif
}

static STD_STRING convertToString(int from) {
	STD_OSTRINGSTREAM ss;
	ss << from;
	return ss.str();
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_CustomTaskStatusNotification &_Data) {
        if (_Data.m_Notification == EHPMCustomTaskStatusNotification_DialogEndedOk) {
#ifdef _DEBUG
            _debuglog << "Dialog closed!" << std::endl;
            _debuglog.flush();
#endif
            HPMString channel = hpm_str("svnChannel");
            HPMCommunicationChannelPacket packet;
			HPMString text = hpm_str("@Commit:");
            text.append(commit);
			text.append(hpm_str("@Items:"));
            for (std::vector<HPMUniqueID>::size_type i = 0; i != _Data.m_SelectedTasks.size(); i++) {
				HPMString temp = convertToString(_Data.m_SelectedTasks.at(i));
				temp += hpm_str(",");
				text.append(temp);
            }
#ifdef _DEBUG
            _debuglog << text.c_str() << std::endl;
            _debuglog.flush();
#endif
			std::string textStr = get_locale_string(text);
            const HPMUInt8 *data = (const HPMUInt8 *)textStr.c_str();
            copy(data, data + textStr.length() * sizeof(wchar_t), back_inserter(packet.m_Bytes));
            m_pSession->CommunicationChannelSendPacket(channel, _sessionId, packet);
#ifdef _DEBUG
            _debuglog << "Packet sent!" << std::endl;
            _debuglog.flush();
#endif
        }
    }

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error) {
#ifdef _DEBUG
        _debuglog << _Error << std::endl;
        _debuglog.flush();
#endif
    }


HPMUInt64 HansoftSVNPlugin::GetIntegrationSessionID() {
	HPMCommunicationChannelEnum Channels = this->m_pSession->CommunicationChannelEnum(hpm_str("svnChannel"));
	//session->CommunicationChannelEnum(hpm_str("svnChannel"));

	HPMDatabaseGUIDs GUIDs = m_pSession->GlobalGetDatabaseGUIDs();
	HPMUInt32 nSessions = 0;
	HPMUInt64 Ret = 0;
	for (std::vector<HPMCommunicationChannelProperties>::iterator Iter = Channels.m_Channels.begin(), End = Channels.m_Channels.end(); Iter != End; ++Iter) {
	    // We need to check the database GUID to make sure that this channel isn't from a share
	    if (Iter->m_DatabaseGUID == GUIDs.m_GUID) {
            ++nSessions;
            Ret = Iter->m_OwnerSessionID;
        }
    }
    if (nSessions > 1) {
        std::cerr
                << hpm_str(
                        "More than one integration channel session ID found.");
    }

    return Ret;
}

void HansoftSVNPlugin::RegisterWithIntegration() {
    HPMUInt64 Owner = GetIntegrationSessionID();
    if (Owner == 0) {
        return;
    }
    HPMUniqueID me = m_pSession->ResourceGetLoggedIn();
    HPMCommunicationChannelPacket packet;
    HPMString name = hpm_str("@Register:");
    name.append(m_pSession->ResourceGetNameFromResource(me));
    std::string nameStr = get_locale_string(name);
    const HPMUInt8 *data = (const HPMUInt8 *) nameStr.c_str();
    copy(data, data + nameStr.length() * sizeof(wchar_t),
            back_inserter(packet.m_Bytes));
#ifdef _MSC_VER
	HPMString debugText = L"Sending packet over the svnChannel";
	debugText.append(name);
	MessageBox(
		NULL,
		hpm_str("sending -> svnChannel"),
		hpm_str("Client SVN plugin"),
		MB_OK | MB_ICONINFORMATION);
#else
#endif
    m_pSession->CommunicationChannelSendPacket(hpm_str("svnChannel"), Owner,
            packet);
}

void HansoftSVNPlugin::displayDialog(
        const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
    try {
#ifdef _MSC_VER
        STD_STRING toFind = L"@";
        STD_STRING commitPrefix = L"SVN Commit - ";
#else
        STD_STRING toFind = "@";
        STD_STRING commitPrefix = "SVN Commit - ";
#endif
        STD_STRING str(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
        // Format: revision@repo
        int pos = str.find(toFind);
        STD_STRING revision = str.substr(0, pos);
        STD_STRING repo = str.substr(pos + 1);
        HPMString dialogTitle = commitPrefix + repo;
        HPMCustomTaskStatusDialogValues values;
        values.m_Title = m_pSession->LocalizationCreateUntranslatedStringFromString(dialogTitle);
        values.m_ButtonLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("OK"));
        values.m_CancelLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Cancel"));
        values.m_InfoText = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Select items to associate with your SVN commit"));
        m_pSession->GlobalDisplayCustomTaskStatusDialog(values, // dialog values
                true,                     // add TODO tasks
                m_pSession->ProjectEnum() // list of allowed projects
                );
        _sessionId = _Data.m_FromSessionID;
#ifdef _DEBUG
        _debuglog << "Called from session: " << _sessionId << std::endl;
        _debuglog.flush();
#endif
    }
    catch (const HPMSdk::HPMSdkException &_Exception) {
#ifdef _DEBUG
        _debuglog << _Exception.GetAsString().c_str() << _sessionId << std::endl;
        _debuglog.flush();
#endif
        if (_Exception.GetError() == EHPMError_ConnectionLost)
            return;
    }
    catch (const HPMSdk::HPMSdkCppException & _Exception) {
#ifdef _DEBUG
        _debuglog << _Exception.what() << _sessionId << std::endl;
        _debuglog.flush();
#endif
    }
}

HansoftSVNPlugin *g_pClientPlugin;

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKCreate(const void *_pClientData)
{
    g_pClientPlugin = new HansoftSVNPlugin(_pClientData);
}

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKDestroy()
{
    delete g_pClientPlugin;
}
