
#include <HPMSdkCpp.h>

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#endif
#include <iostream>

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

		try
		{
			m_pSession = HPMSdkSession::SessionOpen(hpm_str(""), 0, hpm_str(""), hpm_str(""), hpm_str(""), this, NULL, true, EHPMSdkDebugMode_Off, _pClientData, 0, hpm_str(""), HPMSystemString(), NULL);
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
		if (m_pSession)
		{
			HPMSdkSession::SessionDestroy(m_pSession);
			m_pSession = NULL;
		}
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
			HPMCustomTaskStatusDialogValues values;
			values.m_ButtonLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("OK"));
			values.m_CancelLabel = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Cancel"));
			values.m_InfoText = m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("This is an info text"));
			m_pSession->GlobalDisplayCustomTaskStatusDialog(values, false, m_pSession->ProjectEnum());
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

	virtual void On_ProcessError(EHPMError _Error)
	{
	}

private:
	HPMSdkSession *m_pSession;
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
