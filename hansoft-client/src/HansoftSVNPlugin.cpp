
#include "../../HansoftSDK_7_502/HPMSdkCpp.h"

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#endif
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>

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

	struct CDynamicHelper
	{
		HPMNotificationSubscription m_RightClickSubscription;
		HPMNotificationSubscription m_DynamicUpdateSubscription;
		std::vector<HPMUniqueID> m_LastSelectedTasks;
	};

	HansoftSVNPlugin(const void *_pClientData)
	{
		m_pSession = NULL;

		try
		{
			m_pSession = HPMSdkSession::SessionOpen(hpm_str(""), 0, hpm_str(""), hpm_str(""), hpm_str(""), this, NULL, true, EHPMSdkDebugMode_Off, _pClientData, 0, hpm_str(""), HPMSystemString(), NULL);
			if (m_pSession)
			{
				f_Init();
			}
		}
		catch (HPMSdkException &_Exception)
		{
			HPMString ErrorStr = _Exception.GetAsString();

#ifdef _MSC_VER
			wstringstream Stream;
			Stream << hpm_str("Error initializing client SDK plugin sample:\r\n\r\n");
			Stream << ErrorStr;
			MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SDK plugin sample Error"), MB_OK|MB_ICONERROR);
#else
			cerr << hpm_str("Error initializing client SDK plugin sample: ") << ErrorStr << "\n";
#endif
		}
		catch (HPMSdkCppException &_Exception)
		{
#ifdef _MSC_VER
			wstringstream Stream;
			Stream << hpm_str("Error initializing client SDK plugin sample:\r\n\r\n");
			Stream << _Exception.what();
			MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SDK plugin sample Error"), MB_OK|MB_ICONERROR);
#else
			cerr << hpm_str("Error initializing client SDK plugin sample: ") << _Exception.what() << "\n";
#endif
		}
	}

	~HansoftSVNPlugin()
	{
		if (m_pLastDynamicContext)
		{
			delete m_pLastDynamicContext;
			m_pLastDynamicContext = NULL;
		}
		if (m_pDynamicHelper)
		{
			delete m_pDynamicHelper;
			m_pDynamicHelper = NULL;
		}
		if (m_pSession)
		{
			HPMSdkSession::SessionDestroy(m_pSession);
			m_pSession = NULL;
		}
	}

	virtual void On_ProcessError(EHPMError _Error)
	{
	}

	virtual void On_Callback(const HPMChangeCallbackData_ClientSyncDone &_Data)
	{

#ifdef _MSC_VER
		MessageBox(NULL, hpm_str("The client has finished syncing and the Client SDK plugin sample is working."), hpm_str("Client SDK plugin sample"), MB_OK|MB_ICONINFORMATION);
#else
		cout << "The client has finished syncing and the Client SDK plugin sample is working.\n";
#endif

		try
		{
			m_pDynamicHelper = new CDynamicHelper;
			m_pDynamicHelper->m_RightClickSubscription = m_pSession->GlobalRegisterForRightClickNotifications(NULL);
			m_pDynamicHelper->m_DynamicUpdateSubscription = m_pSession->GlobalRegisterForDynamicCustomSettingsNotifications(hpm_str("se.hansoft.sampleclientplugin."), m_UserContext);
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_DynamicCustomSettingsValueChanged &_Data)
	{
		try
		{
			if (_Data.m_UserContext != m_UserContext)
				return;

			HPMUInt64 Owner = f_GetIntegrationSessionID();

			if (Owner != 0)
			{
				if (_Data.m_Path == hpm_str("se.hansoft.sampleclientplugin.customdialog/ComboBoxes/Combo1"))
				{
					if (_Data.m_Value.length() > 0)
					{
						m_pLastDynamicContext = new HPMDynamicCustomSettingsContext;
						*m_pLastDynamicContext = _Data.m_DynamicContext;

						// You could send the value to the dialog directly here with GlobalSetDynamicCustomSettingsValues.
						// For demonstration purposes we use the SDK's general communication data channel instead
						// You can use it to send arbitrary data between or within SDK integrations
						HPMCommunicationChannelPacket Packet;
						const HPMUInt8 *pData = (const HPMUInt8 *)_Data.m_Value.c_str();
						std::copy(pData, pData + _Data.m_Value.length() * sizeof(wchar_t), std::back_inserter(Packet.m_Bytes));

						m_pSession->CommunicationChannelSendPacket(m_IntegrationIdentifier, Owner, Packet);
					}
				}
			}
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_DynamicCustomSettingsNotification &_Data)
	{
		if (_Data.m_Notification == EHPMDynamicCustomSettingsNotification_DialogBegin)
		{
			m_pLastDynamicContext = new HPMDynamicCustomSettingsContext;
			*m_pLastDynamicContext = _Data.m_DynamicContext;
		}
		else
		{
			delete m_pLastDynamicContext;
			m_pLastDynamicContext = NULL;
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data)
	{
		try
		{
			if (_Data.m_ChannelName != m_IntegrationIdentifier)
				return;

			if (!m_pLastDynamicContext)
				return;

			const NInternal_C::HPMCharType *pData = (const NInternal_C::HPMCharType *)&(_Data.m_Packet.m_Bytes[0]);
			HPMString Rec(pData, _Data.m_Packet.m_Bytes.size() / sizeof(NInternal_C::HPMCharType));
			HPMDynamicCustomSettingsValues Values;
			HPMDynamicCustomSettingsValue Value;
			Value.m_Path = hpm_str("se.hansoft.sampleclientplugin.customdialog/Status");
			Value.m_Value = Rec;
			Values.m_Values.push_back(Value);

			m_pSession->GlobalSetDynamicCustomSettingsValues(*m_pLastDynamicContext, Values);

		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data)
	{
		try
		{
			if (_Data.m_SelectedTasks.size() > 0)
			{
				m_pDynamicHelper->m_LastSelectedTasks = _Data.m_SelectedTasks;

				m_pSession->GlobalAddRightClickMenuItem
					(
					_Data.m_RightClickContext
					, hpm_str(""), m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.root")
					, m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Final!?!"))
					, NULL
					)
					;
#ifdef _MSC_VER
				m_pSession->GlobalAddRightClickMenuItem
					(
					_Data.m_RightClickContext
					, m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.root")
					, m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.sub1")
					, m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("MessageBox..."))
					, NULL
					)
					;
#endif
				m_pSession->GlobalAddRightClickMenuItem
					(
					_Data.m_RightClickContext
					, m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.root")
					, m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.sub2")
					, m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Changed text..."))
					, NULL
					)
					;
			}
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

	virtual void On_Callback(const HPMChangeCallbackData_RightClickMenuItemSelected &_Data)
	{
		try
		{
#ifdef _MSC_VER
			if (_Data.m_UniqueName == m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.sub1"))
			{
				MessageBox(NULL, hpm_str("MessageBox started from custom SDK right click menu."), hpm_str("Client SDK plugin sample"), MB_OK|MB_ICONINFORMATION);
			}
			else
#endif
				if (_Data.m_UniqueName == m_IntegrationIdentifier + hpm_str(".taskmenu.sampleclientplugin.sub2"))
			{
				HPMString SelectedTasks;
				for (std::vector<HPMUniqueID>::iterator Iter = m_pDynamicHelper->m_LastSelectedTasks.begin(); Iter != m_pDynamicHelper->m_LastSelectedTasks.end(); ++Iter)
				{
					SelectedTasks += hpm_str("\"") + m_pSession->TaskGetDescription(m_pSession->TaskRefGetTask(*Iter)) + (((Iter + 1) != m_pDynamicHelper->m_LastSelectedTasks.end())? hpm_str("\\r\\n\"\\\r\n") : hpm_str("\"\r\n"));
				}

				HPMString InitialValues =
					hpm_str("se.hansoft.sampleclientplugin.customdialog\r\n")
					hpm_str("{\r\n")
					hpm_str("	Status	\"Nothing selected\\r\\n\"\\\r\n")
					hpm_str("			\"Dialog started from these selected tasks:\\r\\n\"\\\r\n") +
					SelectedTasks +
					hpm_str("}");
				m_pSession->GlobalDisplayCustomSettingsDialog
					(
					HPMUniqueID()							// Can be set to specific project
					, HPMUniqueID()							// Can be set to specific resource
					, m_CustomDialogSpec
					, InitialValues
					)
					;
			}
		}
		catch (const HPMSdk::HPMSdkException &_Exception)
		{
			if (_Exception.GetError() == EHPMError_ConnectionLost)
				return;
		}
		catch (const HPMSdk::HPMSdkCppException &)
		{
		}
	}

#ifdef _MSC_VER
	virtual void On_Callback(const HPMChangeCallbackData_TaskChange &_Data)
	{
		// This is an example of how you can create dialogs from within an SDK plugin and based on user input do changes.
		// Pre-conditions for this simplified code is that you have a custom column in the main project called "Custom remaining".
		HPMUniqueID LoggedInResourceID = m_pSession->ResourceGetLoggedIn();
		if (LoggedInResourceID == _Data.m_ChangedByResourceID)
		{
			if (m_pSession->UtilIsIDValid(_Data.m_TaskID))
			{
				if (_Data.m_FieldChanged == EHPMTaskField_WorkRemaining)
				{
					if (MessageBox(NULL, hpm_str("You have updated Work remaining. Do you want to update the 'Custom remaining' column too?"), hpm_str("Client SDK plugin sample"), MB_YESNO|MB_ICONQUESTION) == IDYES)
					{
						HPMFP32 WorkRemaining = m_pSession->TaskGetWorkRemaining(_Data.m_TaskID);
						WorkRemaining = (WorkRemaining > 0) ? WorkRemaining * 100 : 0;

						HPMUniqueID PID =  m_pSession->TaskGetContainer(_Data.m_TaskID);
						// Get the real/main project id so that the code works for tasks committed from the backlog
						HPMUniqueID ProjectID = m_pSession->UtilGetRealProjectIDFromProjectID(PID);

						HPMProjectCustomColumns CustomColumns = m_pSession->ProjectCustomColumnsGet(ProjectID);

						HPMUInt32 CustomRemainingHash = 0;

						int nShowing = (int)CustomColumns.m_ShowingColumns.size();
						for (int i = 0; CustomRemainingHash == 0 && i < nShowing; ++i)
						{
							if (CustomColumns.m_ShowingColumns[i].m_Name.compare(hpm_str("Custom remaining")) == 0)
							{
								CustomRemainingHash = CustomColumns.m_ShowingColumns[i].m_Hash;
							}
						}

						int nHidden = (int)CustomColumns.m_HiddenColumns.size();
						for (int i = 0; CustomRemainingHash == 0 && i < nHidden; ++i)
						{
							if (CustomColumns.m_HiddenColumns[i].m_Name.compare(hpm_str("Custom remaining")) == 0)
							{
								CustomRemainingHash = CustomColumns.m_HiddenColumns[i].m_Hash;
							}
						}

						if (CustomRemainingHash != 0)
						{
							wstringstream Stream;
							Stream << WorkRemaining;

							m_pSession->TaskSetCustomColumnData(_Data.m_TaskID, CustomRemainingHash, Stream.str().c_str(), true);
						}
						else
						{
							MessageBox(NULL, hpm_str("No custom column named 'Custom remaining' found."), hpm_str("No column found"), MB_OK|MB_ICONWARNING);
						}
					}
				}
			}
		}
	}
#endif

	HPMSdkSession *m_pSession;
	HPMString m_IntegrationIdentifier;
	HPMString m_CustomDialogSpec;
	HPMUserContext m_UserContext;
	HPMDynamicCustomSettingsContext *m_pLastDynamicContext;
	CDynamicHelper *m_pDynamicHelper;

	HPMUInt64 f_GetIntegrationSessionID()
	{
		HPMCommunicationChannelEnum Channels = m_pSession->CommunicationChannelEnum(m_IntegrationIdentifier);
		for (std::vector<HPMCommunicationChannelProperties>::iterator Iter = Channels.m_Channels.begin(); Iter != Channels.m_Channels.end(); ++Iter)
			return Iter->m_OwnerSessionID;
		return 0;
	}

	void f_Init()
	{
		// It's better to put the custom dialog spec in a file and push it out to the clients with the
		// Hansoft document system, but for this demo we store in a string. For all the controls available
		// to a Hansoft dialog, see the CustomSettingsManaged example.
		m_CustomDialogSpec =
			hpm_str("MinWidth 800\r\n")
			hpm_str("DialogName \"Custom SDK dialog\"\r\n")
			hpm_str("Item Tab\r\n")
			hpm_str("{\r\n")
			hpm_str("		Identifier \"se.hansoft.sampleclientplugin.customdialog\"\r\n")
			hpm_str("		Name \"Info\"\r\n")
			hpm_str("		InfoText \"Custom dynamic SDK dialog\"\r\n")
			hpm_str("		Item MultiLineEdit\r\n")
			hpm_str("		{\r\n")
			hpm_str("			Identifier \"Status\"\r\n")
			hpm_str("			Name \"Value selected\"\r\n")
			hpm_str("			DefaultValue \"\"\r\n")
			hpm_str("			Height 400\r\n")
			hpm_str("			ScrollBars 3\r\n")
			hpm_str("			Enabled 0\r\n")
			hpm_str("			Password 0\r\n")
			hpm_str("			DontSave 1\r\n")
			hpm_str("		}\r\n")
			hpm_str("		Item ComboBoxes\r\n")
			hpm_str("		{\r\n")
			hpm_str("			Identifier \"ComboBoxes\"\r\n")
			hpm_str("			Item\r\n")
			hpm_str("			{\r\n")
			hpm_str("				Identifier \"Combo1\"\r\n")
			hpm_str("				Name \"Select\"\r\n")
			hpm_str("				Choices\r\n")
			hpm_str("				{\r\n")
			hpm_str("					Choice \"One\"\r\n")
			hpm_str("					Choice \"Two\"\r\n")
			hpm_str("					Choice \"Three\"\r\n")
			hpm_str("				}\r\n")
			hpm_str("			}\r\n")
			hpm_str("		}\r\n")
			hpm_str("}");

		m_UserContext = (void *)42;
		m_IntegrationIdentifier = hpm_str("se.hansoft.sampleclientplugin");
		m_pLastDynamicContext = NULL;
		m_pDynamicHelper = NULL;
	}
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
