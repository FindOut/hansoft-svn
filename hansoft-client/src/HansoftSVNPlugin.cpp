/**
* Copyright (c) - placeholder
*
*/

#include "HansoftSVNPlugin.h"
#include "HansoftSVNCommon.h"
#include "converter.h"
#include "dialogs.h"
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
struct DebugHelper {
    int dummy;
};
#endif

//struct CDynamicHelper
//{
//    HPMNotificationSubscription m_RightClickSubscription;
//    HPMNotificationSubscription m_DynamicUpdateSubscription;
//    std::vector<HPMUniqueID> m_LastSelectedTasks; //TODO: Naming?
//};

#ifdef _DEBUG
DebugHelper debugHelper;
#endif

HansoftSVNPlugin *g_pClientPlugin;
//CDynamicHelper *m_pDynamicHelper;
//HPMUserContext m_UserContext;
//HPMString m_IntegrationIdentifier;
//HPMString m_CustomDialogSpec;
HPMString m_CustomDialogSpecPart1;
HPMString m_CustomDialogSpecPart2;
//HPMDynamicCustomSettingsContext *m_pLastDynamicContext;
HPMString m_AssociateWithCommitDialogSpecPart1;
HPMString m_AssociateWithCommitDialogSpecPart2;

HPMString REGISTER_TOKEN = "@Register:";
HPMString REPOSITORIES_TOKEN = "@Repositories:";
HPMString REQUEST_COMMITS_TOKEN = "@RequestCommits:";
HPMString svnRepository;

//void f_Init();

HansoftSVNPlugin::HansoftSVNPlugin(const void *_pClientData) {
    m_pSession = NULL;
    
#ifdef _DEBUG
#ifndef _MSC_VER
    _debuglog.open("/tmp/hssvnplugin.log");
    _debuglog << "Starting log" << std::endl;
    _debuglog.flush();
#endif
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
        if (m_pSession) {
            //f_Init();
            f_InitSelectSVNRepositoryDialog(
                    m_CustomDialogSpecPart1,
                    m_CustomDialogSpecPart2);
            f_InitAssociateWithCommitDialog(
                    m_AssociateWithCommitDialogSpecPart1,
                    m_AssociateWithCommitDialogSpecPart2);
        }
    }
    catch (HPMSdkException &_Exception)
    {
        HPMString ErrorStr = _Exception.GetAsString();
        
#ifdef _DEBUG
#ifdef _MSC_VER
        STD_STRINGSTREAM Stream;
        Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
        Stream << ErrorStr;
        MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK | MB_ICONERROR);
#else
        std::cerr << hpm_str("Error initializing client SVN plugin: ") << ErrorStr << "\n";
#endif
#endif
    }
    catch (HPMSdkCppException &_Exception)
    {
#ifdef _DEBUG
#ifdef _MSC_VER
        STD_STRINGSTREAM Stream;
        Stream << hpm_str("Error initializing client SVN plugin:\r\n\r\n");
        Stream << _Exception.what();
        MessageBox(NULL, Stream.str().c_str(), hpm_str("Client SVN plugin Error"), MB_OK | MB_ICONERROR);
#else
        std::cerr << hpm_str("Error initializing client SVN plugin: ") << _Exception.what() << "\n";
#endif
#endif
    }
}

HansoftSVNPlugin::~HansoftSVNPlugin()
{
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
    
    if (_debuglog) {
        _debuglog << "Closing log and exiting" << std::endl;
        _debuglog.close();
    }
}

//void f_Init() {
//    m_CustomDialogSpec =
//    hpm_str("MinWidth 800\r\n")
//    hpm_str("DialogName \"Associate with SVN commit\"\r\n")
//    hpm_str("Item Tab\r\n")
//    hpm_str("{\r\n")
//    hpm_str("		Identifier \"se.findout.hansoft.svn.customdialog\"\r\n")
//    hpm_str("		Name \"Info\"\r\n")
//    hpm_str("		InfoText \"Custom dynamic SDK dialog\"\r\n")
//    hpm_str("		Item MultiLineEdit\r\n")
//    hpm_str("		{\r\n")
//    hpm_str("			Identifier \"Status\"\r\n")
//    hpm_str("			Name \"Value selected\"\r\n")
//    hpm_str("			DefaultValue \"\"\r\n")
//    hpm_str("			Height 400\r\n")
//    hpm_str("			ScrollBars 3\r\n")
//    hpm_str("			Enabled 0\r\n")
//    hpm_str("			Password 0\r\n")
//    hpm_str("			DontSave 1\r\n")
//    hpm_str("		}\r\n")
//    hpm_str("		Item ComboBoxes\r\n")
//    hpm_str("		{\r\n")
//    hpm_str("			Identifier \"ComboBoxes\"\r\n")
//    hpm_str("			Item\r\n")
//    hpm_str("			{\r\n")
//    hpm_str("				Identifier \"Combo1\"\r\n")
//    hpm_str("				Name \"Select\"\r\n")
//    hpm_str("				Choices\r\n")
//    hpm_str("				{\r\n")
//    hpm_str("					Choice \"One\"\r\n")
//    hpm_str("					Choice \"Two\"\r\n")
//    hpm_str("					Choice \"Three\"\r\n")
//    hpm_str("				}\r\n")
//    hpm_str("			}\r\n")
//    hpm_str("		}\r\n")
//    hpm_str("}");
//
//    m_CustomDialogSpecPart1 =
//    hpm_str("MinWidth 800\r\n")
//    hpm_str("DialogName \"Associate with SVN commit\"\r\n")
//    hpm_str("Item Tab\r\n")
//    hpm_str("{\r\n")
//    hpm_str("		Identifier \"se.findout.hansoft.svn.customdialog\"\r\n")
//    hpm_str("		Name \"Info\"\r\n")
//    hpm_str("		InfoText \"Custom dynamic SDK dialog\"\r\n")
////    hpm_str("		Item MultiLineEdit\r\n")
////    hpm_str("		{\r\n")
////    hpm_str("			Identifier \"Status\"\r\n")
////    hpm_str("			Name \"Value selected\"\r\n")
////    hpm_str("			DefaultValue \"\"\r\n")
////    hpm_str("			Height 400\r\n")
////    hpm_str("			ScrollBars 3\r\n")
////    hpm_str("			Enabled 0\r\n")
////    hpm_str("			Password 0\r\n")
////    hpm_str("			DontSave 1\r\n")
////    hpm_str("		}\r\n")
//    hpm_str("		Item ComboBoxes\r\n")
//    hpm_str("		{\r\n")
//    hpm_str("			Identifier \"ComboBoxes\"\r\n")
//    hpm_str("			Item\r\n")
//    hpm_str("			{\r\n")
//    hpm_str("				Identifier \"Combo1\"\r\n")
//    hpm_str("				Name \"Select repository:\"\r\n")
//    hpm_str("				Choices\r\n")
//    hpm_str("				{\r\n");
//    //    hpm_str("					Choice \"One\"\r\n")
//    //    hpm_str("					Choice \"Two\"\r\n")
//    //    hpm_str("					Choice \"Three\"\r\n")
//    
//    m_CustomDialogSpecPart2 =
//    hpm_str("				}\r\n")
//    hpm_str("			}\r\n")
//    hpm_str("		}\r\n")
//    hpm_str("}");
//
//    m_UserContext = (void *)42;
//    m_IntegrationIdentifier = hpm_str("se.findout.hansoft.svn");
//    m_pLastDynamicContext = NULL;
//    m_pDynamicHelper = NULL;
//}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_ClientSyncDone &_Data)
{
#ifdef _DEBUG
#ifdef _MSC_VER
    MessageBox(
               NULL,
               hpm_str("The client has finished syncing and the Client SVN plugin is working."),
               hpm_str("Client SVN plugin"),
               MB_OK | MB_ICONINFORMATION);
#else
    std::cout << "The client has finished syncing and the Client SVN plugin is working.\n";
#endif
#endif /* _DEBUG */
    HansoftSVNPlugin::RegisterWithIntegration();
    try {
        m_pDynamicHelper = new CDynamicHelper;
        m_pDynamicHelper->m_RightClickSubscription = m_pSession->GlobalRegisterForRightClickNotifications(NULL);
        m_pDynamicHelper->m_DynamicUpdateSubscription = m_pSession->GlobalRegisterForDynamicCustomSettingsNotifications(hpm_str("se.findout.hansoft.svn.clientplugin"), m_UserContext);
        m_pDynamicHelper->m_DialogSelection = HPMString(""); // no selection
    }
    catch (const HPMSdkException &_Exception)
    {
        if (_Exception.GetError() == EHPMError_ConnectionLost)
            return;
    }
    catch (const HPMSdkCppException &)
    {
    }
    
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
    std::string repoStr1(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
    // dispatch on content
    if (repoStr1.find(REPOSITORIES_TOKEN) != std::string::npos) {
        _debuglog << "Got " << REPOSITORIES_TOKEN << " - time to display repositories dialog" << std::endl; //REMOVE
        displaySelectRepositoryDialog(_Data);
    } else if (repoStr1.find(REQUEST_COMMITS_TOKEN) != std::string::npos) {
        _debuglog << "Got " << REQUEST_COMMITS_TOKEN << " - time to display commits dialog" << std::endl; //REMOVE
        displayAssociateCommitDialog(_Data);
    } else {
        _debuglog << "Taking the else branch" << std::endl; //REMOVE
        displayDialog(_Data);
#ifdef _MSC_VER
        std::wstring revRepoStr = get_wstring(repoStr1);
        int pos = revRepoStr.find(L"@");
        STD_STRING revision = revRepoStr.substr(0, pos);
#else
        unsigned long pos = repoStr1.find("@");
        STD_STRING revision = repoStr1.substr(0, pos);
#endif
        //TODO-REMOVE-UNUSED: const NInternal_C::HPMCharType *pData = (const NInternal_C::HPMCharType *)&(_Data.m_Packet.m_Bytes[0]);
        std::string commitStr(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
#ifdef _MSC_VER
        commit = get_wstring(commitStr);
#else
        commit = commitStr;
#endif
    }
}

static STD_STRING convertToString(int from) {
	STD_OSTRINGSTREAM ss;
	ss << from;
	return ss.str();
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_CustomTaskStatusNotification &_Data) {
    _debuglog << "On_Callback HPMChangeCallbackData_CustomTaskStatusNotification" << std::endl;
    if (_Data.m_Notification == EHPMCustomTaskStatusNotification_DialogEndedOk) {
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
        std::string textStr = get_locale_string(text);
        const HPMUInt8 *data = (const HPMUInt8 *)textStr.c_str();
        copy(data, data + textStr.length() * sizeof(wchar_t), back_inserter(packet.m_Bytes));
        m_pSession->CommunicationChannelSendPacket(channel, _sessionId, packet);
    }
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_RightClickDisplayTaskMenu &_Data)
{
    _debuglog << "On_Callback HPMChangeCallbackData_RightClickDisplayTaskMenu" << std::endl;
    try {
        if (_Data.m_SelectedTasks.size() > 0) {
            m_pDynamicHelper->m_LastSelectedTasks = _Data.m_SelectedTasks;
            m_pSession->GlobalAddRightClickMenuItem(
                _Data.m_RightClickContext,
                m_IntegrationIdentifier + hpm_str(".taskmenu.hansoftsvnplugin.root"),
                m_IntegrationIdentifier + hpm_str(".taskmenu.hansoftsvnplugin.sub1"),
                m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Select SVN repository...")),
                NULL);
            m_pSession->GlobalAddRightClickMenuItem(
                                                    _Data.m_RightClickContext,
                                                    m_IntegrationIdentifier + hpm_str(".taskmenu.hansoftsvnplugin.root"),
                                                    m_IntegrationIdentifier + hpm_str(".taskmenu.hansoftsvnplugin.sub2"),
                                                    m_pSession->LocalizationCreateUntranslatedStringFromString(hpm_str("Associate with SVN commit...")),
                                                    NULL);
        }
    } catch (const HPMSdkException &_Exception) {
        if (_Exception.GetError() == EHPMError_ConnectionLost) {
            return;
        }
    } catch (const HPMSdkCppException &_Exception) {
        // shut up???
    }
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_RightClickMenuItemSelected &_Data)
{
    _debuglog << "On_Callback HPMChangeCallbackData_RightClickMenuItemSelected" << std::endl;
    if (_Data.m_UniqueName == m_IntegrationIdentifier +
        hpm_str(".taskmenu.hansoftsvnplugin.sub1"))
    {
        RequestSVNRepositories();
    } else if (_Data.m_UniqueName == m_IntegrationIdentifier + hpm_str(".taskmenu.hansoftsvnplugin.sub2"))
    {
        RequestSVNCommits();
    }
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_DynamicCustomSettingsNotification &_Data) {
    _debuglog << "On_Callback HPMChangeCallbackData_DynamicCustomSettingsNotification" << std::endl;
    if (_Data.m_Notification == EHPMDynamicCustomSettingsNotification_DialogBegin)
    {
        m_pLastDynamicContext = new HPMDynamicCustomSettingsContext;
        *m_pLastDynamicContext = _Data.m_DynamicContext;
    }
    else if (_Data.m_Notification == EHPMDynamicCustomSettingsNotification_DialogEndedOk)
    {
        // TODO - do the stuff
        HPMString temp(m_pDynamicHelper->m_DialogSelection);
        _debuglog << "Got: " << temp << std::endl;
        int i = 0;
        i++;
    }
    else
    {
        delete m_pLastDynamicContext;
        m_pLastDynamicContext = NULL;
    }
}

void HansoftSVNPlugin::On_Callback(const HPMChangeCallbackData_DynamicCustomSettingsValueChanged &_Data) {
    _debuglog << "On_Callback HPMChangeCallbackData_DynamicCustomSettingsValueChanged" << std::endl;
    if (_Data.m_UserContext != m_UserContext) {
        return;
    }
    // Save dialog selection:
    m_pDynamicHelper->m_DialogSelection = _Data.m_Value;

}

void HansoftSVNPlugin::On_ProcessError(EHPMError _Error) {
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
    HPMString name = REGISTER_TOKEN;
    name.append(m_pSession->ResourceGetNameFromResource(me));
    std::string nameStr = get_locale_string(name);
    const HPMUInt8 *data = (const HPMUInt8 *) nameStr.c_str();
    copy(data, data + nameStr.length() * sizeof(wchar_t),
            back_inserter(packet.m_Bytes));
#ifdef _DEBUG
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
#endif /* _DEBUG */
    m_pSession->CommunicationChannelSendPacket(hpm_str("svnChannel"), Owner,
            packet);
}

void HansoftSVNPlugin::RequestSVNRepositories() {
    //TODO - Refactor to reduce code duplications -- see RegisterWithIntegration() etc...
    HPMUInt64 owner = GetIntegrationSessionID();
    if (owner == 0) {
        return;
    }
    HPMUniqueID me = m_pSession->ResourceGetLoggedIn();
    HPMCommunicationChannelPacket packet;
    HPMString name = REPOSITORIES_TOKEN;
    name.append(m_pSession->ResourceGetNameFromResource(me));
    std::string nameStr = get_locale_string(name);
    const HPMUInt8 *data = (const HPMUInt8 *) nameStr.c_str();
    copy(data, data + nameStr.length() * sizeof(wchar_t),
         back_inserter(packet.m_Bytes));
#ifdef _DEBUG
#ifdef _MSC_VER
    HPMString debugText = L"Requesting list of SVN repositories";
    debugText.append(name);
    MessageBox(
               NULL,
               hpm_str("sending -> svnChannel"),
               hpm_str("Client SVN plugin"),
               MB_OK | MB_ICONINFORMATION);
#else
    _debuglog << "Requesting list of SVN repositories" << std::endl;
#endif
#endif /* _DEBUG */
    m_pSession->CommunicationChannelSendPacket(hpm_str("svnChannel"), owner,
                                               packet);
}

void HansoftSVNPlugin::RequestSVNCommits() {
    //TODO - Refactor to reduce code duplications:
    //See: RequestSVNRepositories(), RegisterWithIntegration() etc
    HPMUInt64 owner = GetIntegrationSessionID();
    if (owner == 0) {
        return;
    }
    HPMUniqueID me = m_pSession->ResourceGetLoggedIn();
    HPMCommunicationChannelPacket packet;
    HPMString name = REQUEST_COMMITS_TOKEN;
    name.append(m_pSession->ResourceGetNameFromResource(me));
    std::string nameStr = get_locale_string(name);
    const HPMUInt8 *data = (const HPMUInt8 *) nameStr.c_str();
    copy(data, data + nameStr.length() * sizeof(wchar_t),
         back_inserter(packet.m_Bytes));
#ifdef _DEBUG
#ifdef _MSC_VER
    HPMString debugText = L"Requesting list of SVN commits";
    debugText.append(name);
    MessageBox(
               NULL,
               hpm_str("sending -> svnChannel"),
               hpm_str("Client SVN plugin"),
               MB_OK | MB_ICONINFORMATION);
#else
    _debuglog << "Requesting list of SVN commits" << std::endl;
#endif
#endif /* _DEBUG */
    m_pSession->CommunicationChannelSendPacket(hpm_str("svnChannel"), owner,
                                               packet);
    
}

/**
 * Displays dialog for selecting item(s) for a commit
 * Invoked by a svn commit
 */
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
        unsigned long pos = str.find(toFind);
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
    }
    catch (const HPMSdkException &_Exception) {
        if (_Exception.GetError() == EHPMError_ConnectionLost)
            return;
    }
    catch (const HPMSdkCppException & _Exception) {
    }
}

/**
 * Displays dialog for associating item(s) with an SVN commit
 * Invoked by user action in Hansoft, i.e. right click menu
 */
void HansoftSVNPlugin::displaySelectRepositoryDialog(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
    
    _debuglog << "Invoked displayAssociateDialog" << std::endl; //REMOVE

    HPMString dialogSpec = m_CustomDialogSpecPart1;
    
    // Build the dialog options:
    std::string repoStr(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
    // Format: REPOSITORIES_TOKEN + "[" + repo1 + ", " + repo2 ... + "]"
    unsigned long startPos = repoStr.find("[");
    unsigned long splitPos;
    bool done = false;
    do {
        splitPos = repoStr.find(",", startPos);
        if (splitPos == std::string::npos) {
            _debuglog << "got npos" << std::endl;
            splitPos = repoStr.length() - 1;
            done = true;
        }
        _debuglog << "Start pos: " << startPos << std::endl;
        _debuglog << "Split pos: " << splitPos << std::endl;
        std::string repo = repoStr.substr(startPos + 1, splitPos - startPos - 1);
        startPos = splitPos + 1;
        //hpm_str("					Choice \"One\"\r\n")
        //dialogSpec += HPMString("					Choice \"" + repo + "\r\n");
        HPMString repoChoise = *new HPMString("					Choice \"" + repo + "\r\n");
        //dialogSpec += repoChoise;
        HPMString test1("					Choice \"");
        test1 += repo;
        test1 += hpm_str("\"\r\n");
        dialogSpec += test1;
        _debuglog << "Repo: " << repo << std::endl; // REMOVE
    } while (!done);
    dialogSpec += m_CustomDialogSpecPart2;
    _debuglog << std::endl;
    _debuglog << "m_CustomDialogSpec: " << std::endl;
//    _debuglog << m_CustomDialogSpec;
    _debuglog << std::endl;
    _debuglog << std::endl;
    _debuglog << "Composed dialog: " << std::endl;
    _debuglog << dialogSpec;
    _debuglog << std::endl;
    _debuglog << std::endl;

//
    HPMString selectedTasks;
    for (std::vector<HPMUniqueID>::iterator iter = m_pDynamicHelper->m_LastSelectedTasks.begin();
         iter != m_pDynamicHelper->m_LastSelectedTasks.end(); iter++) {
        selectedTasks += hpm_str("\"") + m_pSession->TaskGetDescription(
                    m_pSession->TaskRefGetTask(*iter)) + (((iter + 1) != m_pDynamicHelper->m_LastSelectedTasks.end())?
                            hpm_str("ALT1") : hpm_str("ALT2"));
    }
    HPMString initialValues =
    hpm_str("se.findout.hansoft.svn.customdialog1\r\n")
    hpm_str("{\r\n")
    hpm_str("Select SVN repository:")
    hpm_str("\r\n")
    hpm_str("Repository1\\r\\n")
    hpm_str("Repository2\\r\\n")
    hpm_str("")
    hpm_str("}");
    
    _debuglog << "INITIAL VALUES:" << std::endl;
    _debuglog << initialValues << std::endl;
//    _debuglog << "---------------" << std::endl;
    
    m_pSession->GlobalDisplayCustomSettingsDialog(
                      HPMUniqueID(),        // Can be set to specific project
                      HPMUniqueID(),        // Can be set to specific resource
                      //m_CustomDialogSpec,   //
                      dialogSpec,
                      initialValues);       //
    

}
        
void HansoftSVNPlugin::displayAssociateCommitDialog(const HPMChangeCallbackData_CommunicationChannelPacketReceived &_Data) {
    _debuglog << "Display associate with commit dialog" << std::endl; //REMOVE
    HPMString dialogSpec = m_AssociateWithCommitDialogSpecPart1;
    _debuglog << "DialogSpec 1:" << std::endl;
    _debuglog << dialogSpec << std::endl;
    
    // Build the dialog options:
    std::string commitStr(_Data.m_Packet.m_Bytes.begin(), _Data.m_Packet.m_Bytes.end());
    // Format: REQUEST_COMMITS_TOKEN + "[" + commit1 + ", " + commit2 ... + "]"
    unsigned long startPos = commitStr.find("[");
    unsigned long splitPos;
    bool done = false;
    do {
        splitPos = commitStr.find(",", startPos);
        if (splitPos == std::string::npos) {
            _debuglog << "got npos" << std::endl;
            splitPos = commitStr.length() - 1;
            done = true;
        }
        _debuglog << "Start pos: " << startPos << std::endl;
        _debuglog << "Split pos: " << splitPos << std::endl;
        std::string commit = commitStr.substr(startPos + 1, splitPos - startPos - 1);
        startPos = splitPos + 1;
        HPMString test1("					Choice \"");
        test1 += commit;
        test1 += hpm_str("\"\r\n");
        dialogSpec += test1;
        _debuglog << "Commit: " << commit << std::endl; // REMOVE
    } while (!done);
    dialogSpec += m_AssociateWithCommitDialogSpecPart2;
    
    _debuglog << "DialogSpec 2:" << std::endl;
    _debuglog << dialogSpec << std::endl;
    _debuglog << "===" << std::endl;
    
    //
    HPMString selectedTasks;
    for (std::vector<HPMUniqueID>::iterator iter = m_pDynamicHelper->m_LastSelectedTasks.begin();
         iter != m_pDynamicHelper->m_LastSelectedTasks.end(); iter++) {
        selectedTasks += hpm_str("\"") + m_pSession->TaskGetDescription(
            m_pSession->TaskRefGetTask(*iter)) + (((iter + 1) != m_pDynamicHelper->m_LastSelectedTasks.end())?
                                                                                                              hpm_str("ALT1") : hpm_str("ALT2"));
    }
    
    HPMString initialValues =
    hpm_str("se.findout.hansoft.svn.customdialog2\r\n")
    hpm_str("{\r\n")
    hpm_str("Select SVN commit:")
    hpm_str("\r\n")
    hpm_str("Commit-1\\r\\n")
    hpm_str("Commit-2\\r\\n")
    hpm_str("}");
    _debuglog << "INITIAL VALUES:" << std::endl;
    _debuglog << initialValues << std::endl;
    _debuglog << "---------------" << std::endl;
    
    _debuglog << "About to open commit selection dialog" << std::endl;
    m_pSession->GlobalDisplayCustomSettingsDialog(
                    HPMUniqueID(),        // Can be set to specific project
                    HPMUniqueID(),        // Can be set to specific resource
                    dialogSpec, //
                    initialValues);       //
}

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKCreate(const void *_pClientData)
{
    g_pClientPlugin = new HansoftSVNPlugin(_pClientData);
}

extern "C" mod_export void DHPMSdkCallingConvention HPMClientSDKDestroy()
{
    delete g_pClientPlugin;
}
