
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

using namespace std;
using namespace HPMSdk;


class HansoftSVNPlugin : public HPMSdkCallbacks
{
public:


	HansoftSVNPlugin(const void *_pClientData)
	{
		m_pSession = NULL;

		_debuglog.open("/tmp/hssvnplugin.log"); //TODO - close...
		_debuglog << "Starting log" << endl;
		_debuglog.flush();

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
			wstringstream Stream;
			Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
			Stream << ErrorStr;
			MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK|MB_ICONERROR);
#else
			cerr << hpm_str("Error initializing client SVN plugin: ") << ErrorStr << "\n";
#endif
		}
		catch (HPMSdkCppException &_Exception)
		{
#ifdef _MSC_VER
			wstringstream Stream;
			Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
			Stream << _Exception.what();
			MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK|MB_ICONERROR);
#else
			cerr << hpm_str("Error initializing client SVN plugin: ") << _Exception.what() << "\n";
#endif
		}
	}

	~HansoftSVNPlugin()
	{
		if (m_pSession)
		{
			HPMSdkSession::SessionDestroy(m_pSession);
			m_pSession = NULL;
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_ClientSyncDone &_Data)
	{

#ifdef _MSC_VER
		MessageBox(
		        NULL,
		        hpm_str("The client has finished syncing and the Client SVN plugin is working."),
		        hpm_str("Client SVN plugin"),
		        MB_OK|MB_ICONINFORMATION);
#else
		cout << "The client has finished syncing and the Client SVN plugin is working.\n";
#endif
		RegisterWithIntegration();
		popup = m_pSession->GlobalRegisterForCustomTaskStatusNotifications("SDK/Plugins/se.findout.hansoft.svn.clientplugincpp", new HPMUserContext());

	}

	virtual void On_Callback(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
		_debuglog << _Data.m_ToSessionID << " , "<< m_pSession->ResourceGetLoggedIn() << std::endl;
		_debuglog.flush();
		if(_Data.m_ToSessionID == m_pSession->ResourceGetLoggedIn()) {
			displayDialog(_Data);
			std::string str(_Data.m_Packet.m_Bytes.begin(),_Data.m_Packet.m_Bytes.end());
			commit = hpm_str(str);
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_CustomTaskStatusNotification &_Data) {
		if(_Data.m_Notification == EHPMCustomTaskStatusNotification_DialogEndedOk) {
			_debuglog << "Dialog closed!" << std::endl;
			_debuglog.flush();
			HPMString channel = hpm_str("svnChannel");
			HPMCommunicationChannelPacket packet;
			_Data.m_SelectedTasks;
			HPMString text = "@Commit:";
			text.append(commit);
			text.append("@Items:");
			for(std::vector<HPMUniqueID>::size_type i = 0; i != _Data.m_SelectedTasks.size(); i++) {
				text.append(convertToString(_Data.m_SelectedTasks.at(i)) + ",");
			}
			_debuglog << text << std::endl;
			_debuglog.flush();
			const HPMUInt8 *data = (const HPMUInt8 *) text.c_str();
			copy(data, data + text.length() * sizeof(wchar_t), back_inserter(packet.m_Bytes));
			m_pSession->CommunicationChannelSendPacket(channel, _sessionId, packet);
			_debuglog << "Packet sent!" << std::endl;
			_debuglog.flush();
		}
	}

	virtual void On_ProcessError(EHPMError _Error) {
		_debuglog << _Error << std::endl;
		_debuglog.flush();
	}

private:

	std::string convertToString(int from) {
	    std::ostringstream ss;
	    ss << from;
	    return ss.str();
	}


	HPMUInt64 GetIntegrationSessionID() {
		HPMCommunicationChannelEnum Channels = m_pSession->CommunicationChannelEnum("svnChannel");

		HPMDatabaseGUIDs GUIDs = m_pSession->GlobalGetDatabaseGUIDs();
		HPMUInt32 nSessions = 0;
		HPMUInt64 Ret = 0;
		for (vector<HPMCommunicationChannelProperties>::iterator Iter = Channels.m_Channels.begin(), End = Channels.m_Channels.end(); Iter != End; ++Iter) {
			// We need to check the database GUID to make sure that this channel isn't from a share
			if (Iter->m_DatabaseGUID == GUIDs.m_GUID) {
				++nSessions;
				Ret = Iter->m_OwnerSessionID;
			}
		}
		if (nSessions > 1) {
			cerr << hpm_str("More than one integration channel session ID found.");
		}

		return Ret;
	}

	void RegisterWithIntegration() {
		HPMUInt64 Owner = GetIntegrationSessionID();
		if (Owner == 0) {
			return;
		}
		HPMUniqueID me = m_pSession->ResourceGetLoggedIn();
		HPMCommunicationChannelPacket packet;
		HPMString name = "@Register:";
		name.append(m_pSession->ResourceGetNameFromResource(me));
		const HPMUInt8 *data = (const HPMUInt8 *) name.c_str();
		copy(data, data +  name.length() * sizeof(wchar_t), back_inserter(packet.m_Bytes));

		m_pSession->CommunicationChannelSendPacket("svnChannel", Owner, packet);
	}

	void displayDialog(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
		try
		{
			HPMCustomTaskStatusDialogValues values;
			values.m_Title = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("SVN commit"));
			values.m_ButtonLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("OK"));
			values.m_CancelLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Cancel"));
			values.m_InfoText = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Select items to associate with your SVN commit"));
			m_pSession->GlobalDisplayCustomTaskStatusDialog(
			        values,                   // dialog values
			        true,                     // add TODO tasks
			        m_pSession->ProjectEnum() // list of allowed projects
                );
			_sessionId = _Data.m_FromSessionID;
			_debuglog << "Called from session: " << _sessionId << std::endl;
			_debuglog.flush();
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			_debuglog << _Exception.GetAsString() << _sessionId << std::endl;
			_debuglog.flush();
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException & _Exception)
		{
			_debuglog << _Exception.what() << _sessionId << std::endl;
			_debuglog.flush();
		}
	}

	HPMSdkSession *m_pSession;
    HPMUInt64 _sessionId;

    ofstream _debuglog;
    HPMNotificationSubscription popup;
    HPMString commit;
};

HansoftSVNPlugin *g_pClientPlugin;

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKCreate(const void *_pClientData)
{
	g_pClientPlugin = new HansoftSVNPlugin(_pClientData);
}

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKDestroy()
{
	delete g_pClientPlugin;
}
