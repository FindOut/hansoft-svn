//
//  dialogs.h
//  HansoftSVNPlugin
//
//  Created by Fredrik Attebrant on 05/10/14.
//  Copyright (c) 2014 FindOut Technologies AB. All rights reserved.
//

#ifndef HansoftSVNPlugin_dialogs_h
#define HansoftSVNPlugin_dialogs_h

#include <HPMSdkCpp.h>


struct CDynamicHelper
{
    HPMSdk::HPMNotificationSubscription m_TaskSelectionSubscription;
    HPMSdk::HPMNotificationSubscription m_RightClickSubscription;
    HPMSdk::HPMNotificationSubscription m_DynamicUpdateSubscription;
    std::vector<HPMSdk::HPMUniqueID> m_LastSelectedTasks; //TODO: Naming?
    HPMSdk::HPMString m_DialogSelection;
    HPMSdk::HPMString m_selectedAnnotationTasks;
};

HPMSdk::HPMUserContext m_UserContext;
HPMSdk::HPMString m_IntegrationIdentifier;
HPMSdk::HPMDynamicCustomSettingsContext *m_pLastDynamicContext;
CDynamicHelper *m_pDynamicHelper;
HPMSdk::HPMString m_SVNRepository;
HPMSdk::HPMString m_Commits;

void f_InitSelectSVNRepositoryDialog(
                                     HPMSdk::HPMString &dialogSpecPart1,
                                     HPMSdk::HPMString &dialogSpecPart2) {
    dialogSpecPart1 =
    hpm_str("MinWidth 800\r\n")
    hpm_str("DialogName \"Select SVN repository\"\r\n")
    hpm_str("Item Tab\r\n")
    hpm_str("{\r\n")
    hpm_str("		Identifier \"se.findout.hansoft.svn.clientplugin.customdialog1\"\r\n")
    hpm_str("		Name \"Info\"\r\n")
    hpm_str("		InfoText \"Custom dynamic SDK dialog\"\r\n")
    hpm_str("		Item ComboBoxes\r\n")
    hpm_str("		{\r\n")
    hpm_str("			Identifier \"ComboBoxes\"\r\n")
    hpm_str("			Item\r\n")
    hpm_str("			{\r\n")
    hpm_str("				Identifier \"Combo1\"\r\n")
    hpm_str("				Name \"Select repository:\"\r\n")
    hpm_str("				Choices\r\n")
    hpm_str("				{\r\n");
    
    dialogSpecPart2 =
    hpm_str("				}\r\n")
    hpm_str("			}\r\n")
    hpm_str("		}\r\n")
    hpm_str("}");
    
    m_UserContext = (void *)42;
    m_IntegrationIdentifier = hpm_str("se.findout.hansoft.svn");
    m_pLastDynamicContext = NULL;
    m_pDynamicHelper = NULL;
}

void f_InitAssociateWithCommitDialog(
                                     HPMSdk::HPMString &dialogSpecPart1,
                                     HPMSdk::HPMString &dialogSpecPart2) {
    dialogSpecPart1 =
    hpm_str("MinWidth 800\r\n")
    hpm_str("DialogName \"Associate with SVN commit\"\r\n")
    hpm_str("Item Tab\r\n")
    hpm_str("{\r\n")
    hpm_str("		Identifier \"se.findout.hansoft.svn.clientplugin.customdialog2\"\r\n")
    hpm_str("		Name \"Info\"\r\n")
    hpm_str("		InfoText \"Custom dynamic SDK dialog\"\r\n")
    hpm_str("		Item ComboBoxes\r\n")
    hpm_str("		{\r\n")
    hpm_str("			Identifier \"ComboBoxes\"\r\n")
    hpm_str("			Item\r\n")
    hpm_str("			{\r\n")
    hpm_str("				Identifier \"Combo1\"\r\n")
    hpm_str("				Name \"Select commit:\"\r\n")
    hpm_str("				Choices\r\n")
    hpm_str("				{\r\n");
    
    dialogSpecPart2 =
    hpm_str("				}\r\n")
    hpm_str("			}\r\n")
    hpm_str("		}\r\n")
    hpm_str("}");

// Are these common or individual? ---v
//    m_UserContext = (void *)42;
//    m_IntegrationIdentifier = hpm_str("se.findout.hansoft.svn");
//    m_pLastDynamicContext = NULL;
//    m_pDynamicHelper = NULL;
}


#endif
