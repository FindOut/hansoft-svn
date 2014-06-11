
#ifndef DInc_HPMSdk_H
#define DInc_HPMSdk_H

#ifdef DHPMDocumentation
// Remove the DInc_HPMSdk_H define from generated C++ code state
#pragma hpmdoc clear_condition_state
#endif

#ifdef __cplusplus
extern "C" {
#endif
	
#include "HPMSdk_Common.h"
#include "HPMSdk_Localization.h"
#include "HPMSdk_Notification.h"
#include "HPMSdk_Resources.h"
#include "HPMSdk_Projects.h"
#include "HPMSdk_Tasks.h"
#include "HPMSdk_VersionControl.h"
#include "HPMSdk_Misc.h"
#include "HPMSdk_Authentication.h"
#include "HPMSdk_Global.h"

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK top-level header file							|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK																|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		061117:		Started documenting file													|
\*_____________________________________________________________________________________________*/

#ifndef DHPMSdk_OnlyDefinitions


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines the SDK interface.													|
|																									|
|	Comments:			Defines all functions in the SDK interface. To initialize this structure	|
|						call @{HPMInit}. To destroy the instance of the SDK, call @{HPMDestroy}.	|
|																									|
|						One SDK instance can support several sessions. All functions are thread		|
|						safe.																		|
|																									|
|						Before calling @{HPMDestroy} make sure that you have closed all sessions	|
|																									|
|	See Also:			@{HPMInit}, @{HPMDestroy}													|
|																									|
|	Location:			Reference/1 - Main Interface/Structures										|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/

typedef struct HPMSdkFunctions
{    
	void *m_hDll;																														// For internal use only. Points to a DLL handle when the SDK is initialized

	HPMFunctionSessionOpen SessionOpen;																									// Opens a session. See @{HPMFunctionSessionOpen}.
	
	HPMFunctionSessionStop SessionStop;																									// Stops a session. See @{HPMFunctionSessionStop}.
	HPMFunctionSessionClose SessionClose;																								// Closes a session. See @{HPMFunctionSessionOpen}.
	HPMFunctionSessionProcess SessionProcess;																							// Performs processing such as callbacks on the session. See @{HPMFunctionSessionProcess}.
	HPMFunctionSessionGetInfo SessionGetInfo;																							// Gets the information about a session. See @{HPMFunctionSessionGetInfo}.
	
	HPMFunctionRegisterChangeCallback RegisterChangeCallback;																			// Registers a change callback on a session. See @{HPMFunctionRegisterChangeCallback}.
	HPMFunctionUnregisterChangeCallback UnregisterChangeCallback;																		// Unregisters a change callback on a session. See @{HPMFunctionUnregisterChangeCallback}.

	HPMFunctionObjectFree ObjectFree;																									// Frees an object returned by an interface function. See @{HPMFunctionObjectFree}.
	HPMFunctionObjectAddRef ObjectAddRef;																								// Adds a reference to an object returned by an interface function. See @{HPMFunctionObjectAddRef}.
	HPMFunctionObjectGetRef ObjectGetRef;																								// Get the reference count of an object returned by an interface function. See @{HPMFunctionObjectGetRef}.
	HPMFunctionObjectCompare ObjectCompare;																								// Compares two objects returned by interface functions. See @{HPMFunctionObjectCompare}.
	
	HPMFunctionMemoryFree MemoryFree;																									// Frees external allocated memory. See @{HPMFunctionSessionOpenVirtual}.
	
	HPMFunctionSessionOpenVirtual SessionOpenVirtual;																					// Opens a virtual SDK session. See @{HPMFunctionMemoryFree}.

	HPMFunctionSessionSetConnectionLostTimeout SessionSetConnectionLostTimeout;															// Sets the connection lost timeout value. See @{HPMFunctionSessionSetConnectionLostTimeout}.
	HPMFunctionSessionGetDisconnectReason SessionGetDisconnectReason;																	// Gets a more detailed disconnect reason after a @{EHPMError}_ConnectionLost. See @{HPMFunctionSessionGetDisconnectReason}.

	HPMFunctionGlobalSetStatisticsSettings GlobalSetStatisticsSettings;																	// Sets statistics settings for global statistics. See @{HPMFunctionGlobalSetStatisticsSettings}.
	HPMFunctionGlobalGetStatisticsSettings GlobalGetStatisticsSettings;																	// Gets statistics settings for global statistics. See @{HPMFunctionGlobalGetStatisticsSettings}.

	HPMFunctionGlobalSetServerInternetName GlobalSetServerInternetName;																	// Sets the server internet name. See @{HPMFunctionGlobalSetServerInternetName}.
	HPMFunctionGlobalGetServerInternetName GlobalGetServerInternetName;																	// Gets the server internet name. See @{HPMFunctionGlobalGetServerInternetName}.

	HPMFunctionGlobalGetDatabaseGUIDs GlobalGetDatabaseGUIDs;																			// Gets the database guids. See @{HPMFunctionGlobalGetDatabaseGUIDs}.
	
	HPMFunctionGlobalRegisterCustomSettings GlobalRegisterCustomSettings;																// Registers custom settings. See @{HPMFunctionGlobalRegisterCustomSettings}.
	HPMFunctionGlobalUnregisterCustomSettings GlobalUnregisterCustomSettings;															// Unregisters custom settings. See @{HPMFunctionGlobalUnregisterCustomSettings}.
	HPMFunctionGlobalGetCustomSettingsIdentifierHash GlobalGetCustomSettingsIdentifierHash;												// Gets the identifier hash for a custom settings identifier. See @{HPMFunctionGlobalGetCustomSettingsIdentifierHash}.
	HPMFunctionGlobalGetRegisteredCustomSettings GlobalGetRegisteredCustomSettings;														// Gets registered custom settings. See @{HPMFunctionGlobalGetRegisteredCustomSettings}.
	HPMFunctionGlobalGetCustomSettingsValue GlobalGetCustomSettingsValue;																// Gets the value of a global custom setting. See @{HPMFunctionGlobalGetCustomSettingsValue}.
	HPMFunctionGlobalSetCustomSettingsValue GlobalSetCustomSettingsValue;																// Sets the value of a global custom setting. See @{HPMFunctionGlobalSetCustomSettingsValue}.

	HPMFunctionGlobalRegisterForDynamicCustomSettingsNotifications GlobalRegisterForDynamicCustomSettingsNotifications;					// Registers for custom settings notifications in client dll. See @{HPMFunctionGlobalRegisterForDynamicCustomSettingsNotifications}.
	HPMFunctionGlobalRegisterForRightClickNotifications GlobalRegisterForRightClickNotifications;										// Registers for right click notifications in client dll. See @{HPMFunctionGlobalRegisterForRightClickNotifications}.
	HPMFunctionGlobalAddRightClickMenuItem GlobalAddRightClickMenuItem;																	// Adds a right click menu item. See @{HPMFunctionGlobalAddRightClickMenuItem}.

	HPMFunctionGlobalDisplayCustomSettingsDialog GlobalDisplayCustomSettingsDialog;														// Displays a custom settings dialog in client. See @{HPMFunctionGlobalDisplayCustomSettingsDialog}.
	HPMFunctionGlobalCancelCustomSettingsDialog GlobalCancelCustomSettingsDialog;														// Cancels a custom settings dialog in client. See @{HPMFunctionGlobalCancelCustomSettingsDialog}.

	HPMFunctionGlobalRegisterForCustomTaskStatusNotifications GlobalRegisterForCustomTaskStatusNotifications;							// Registers for task status notifications in client dll. See @{HPMFunctionGlobalRegisterForCustomTaskStatusNotifications}.
	HPMFunctionGlobalDisplayCustomTaskStatusDialog GlobalDisplayCustomTaskStatusDialog;													// Displays a custom task status dialog in client. See @{HPMFunctionGlobalDisplayCustomTaskStatusDialog}.
	HPMFunctionGlobalCancelCustomTaskStatusDialog GlobalCancelCustomTaskStatusDialog;													// Cancels a custom task status dialog in client. See @{HPMFunctionGlobalCancelCustomTaskStatusDialog}.
	HPMFunctionGlobalAddTasksCustomTaskStatusDialog GlobalAddTasksCustomTaskStatusDialog;												// Add tasks to a custom task status dialog in client. See @{HPMFunctionGlobalAddTasksCustomTaskStatusDialog}.

	HPMFunctionGlobalRequestDynamicCustomSettingsValues GlobalRequestDynamicCustomSettingsValues;										// Requests dynamic custom settings values. See @{GlobalRequestDynamicCustomSettingsValues}.
	HPMFunctionGlobalSetDynamicCustomSettingsValues GlobalSetDynamicCustomSettingsValues;												// Sets dynamic custom settings values. See @{GlobalSetDynamicCustomSettingsValues}.


	HPMFunctionGlobalGetSDKInternalDataIdentifierHash GlobalGetSDKInternalDataIdentifierHash;											// Get the identifier hash for a SDK internal data identifier. See @{HPMFunctionGlobalGetSDKInternalDataIdentifierHash}.
	HPMFunctionGlobalGetSDKInternalData GlobalGetSDKInternalData;																		// Gets global SDK internal data. See @{HPMFunctionGlobalGetSDKInternalData}.
	HPMFunctionGlobalSetSDKInternalData GlobalSetSDKInternalData;																		// Sets global SDK internal data. See @{HPMFunctionGlobalSetSDKInternalData}.

	HPMFunctionGlobalWorkflowsRemoveDeleted GlobalWorkflowsRemoveDeleted;																// Removes all workflows in all projects that have been deleted.

	HPMFunctionGlobalGetReport GlobalGetReport;																							// Gets global report for report id. See @{HPMFunctionGlobalGetReport}.
	HPMFunctionGlobalGetReports GlobalGetReports;																						// Gets global reports. See @{HPMFunctionGlobalGetReports}.
	HPMFunctionGlobalSetReports GlobalSetReports;																						// Sets global reports. See @{HPMFunctionGlobalSetReports}.
	HPMFunctionGlobalSetDocumentAttachmentLimit GlobalSetDocumentAttachmentLimit;														// Sets file size limit for attached files. See @{HPMFunctionGlobalSetDocumentAttachmentLimit}.
	HPMFunctionGlobalGetDocumentAttachmentLimit GlobalGetDocumentAttachmentLimit;														// Gets file size limit for attached files. See @{HPMFunctionGlobalGetDocumentAttachmentLimit}.
	HPMFunctionGlobalSetCommentThumbnailDimensionInPixels GlobalSetCommentThumbnailDimensionInPixels;									// Sets the comment thumbnail max size. See @{HPMFunctionGlobalSetCommentThumbnailDimensionInPixels}.
	HPMFunctionGlobalGetCommentThumbnailDimensionInPixels GlobalGetCommentThumbnailDimensionInPixels;									// Gets the comment thumbnail max size. See @{HPMFunctionGlobalGetCommentThumbnailDimensionInPixels}.

	HPMFunctionGlobalGetChatMessageLastID GlobalGetChatMessageLastID;																	// Gets the last chat message id in a chat room. See @{HPMFunctionGlobalGetChatMessageLastID}.

	HPMFunctionGlobalSetTimesheetConfig GlobalSetTimesheetConfig;																		// Sets configuration of timesheets. See @{HPMFunctionGlobalSetTimesheetConfig}.
	HPMFunctionGlobalGetTimesheetConfig GlobalGetTimesheetConfig;																		// Gets configuration of timesheets. See @{HPMFunctionGlobalGetTimesheetConfig}.

	HPMFunctionGlobalSetEmailSettings GlobalSetEmailSettings;																			// Sets global email settings. See @{HPMFunctionGlobalSetEmailSettings}.
	HPMFunctionGlobalGetEmailSettings GlobalGetEmailSettings;																			// Gets global email settings. See @{HPMFunctionGlobalGetEmailSettings}.

	HPMFunctionResourceCreate ResourceCreate;																							// Creates a resource. See @{HPMFunctionResourceCreate}.
	HPMFunctionResourceDelete ResourceDelete;																							// Deletes a resource. See @{HPMFunctionResourceDelete}.
	HPMFunctionResourceImpersonate ResourceImpersonate;																					// Impersonates a resource. See @{HPMFunctionResourceImpersonate}.
	HPMFunctionResourceEnum ResourceEnum;																								// Enumerates resources in a database. See @{HPMFunctionResourceEnum}.
	HPMFunctionResourceGetProperties ResourceGetProperties;																				// Gets properties of a resource. See @{HPMFunctionResourceGetProperties}.
	HPMFunctionResourceSetProperties ResourceSetProperties;																				// Sets properties of a resource. See @{HPMFunctionResourceSetProperties}.
	HPMFunctionResourceGetGlobalSettings ResourceGetGlobalSettings;																		// Gets global settings for a resource. See @{HPMFunctionResourceGetGlobalSettings}.
	HPMFunctionResourceSetGlobalSettings ResourceSetGlobalSettings;																		// Sets global settings for a resource. See @{HPMFunctionResourceSetGlobalSettings}.
	HPMFunctionResourceGetCustomSettingsValue ResourceGetCustomSettingsValue;															// Gets the value of a resource custom setting. See @{HPMFunctionResourceGetCustomSettingsValue}.
	HPMFunctionResourceSetCustomSettingsValue ResourceSetCustomSettingsValue;															// Sets the value of a resource custom setting. See @{HPMFunctionResourceSetCustomSettingsValue}.

	HPMFunctionResourceGetSDKInternalData ResourceGetSDKInternalData;																	// Gets resource SDK internal data. See @{HPMFunctionResourceGetSDKInternalData}.
	HPMFunctionResourceSetSDKInternalData ResourceSetSDKInternalData;																	// Sets resource SDK internal data. See @{HPMFunctionResourceSetSDKInternalData}.

	HPMFunctionResourceGroupCreate ResourceGroupCreate;																					// Creates a resource group. See @{HPMFunctionResourceGroupCreate}.
	HPMFunctionResourceGroupDelete ResourceGroupDelete;																					// Deletes a resource group. See @{HPMFunctionResourceGroupDelete}.
	HPMFunctionResourceGroupEnum ResourceGroupEnum;																						// Enumerates resource groups. See @{HPMFunctionResourceGroupEnum}.
	HPMFunctionResourceGroupGetProperties ResourceGroupGetProperties;																	// Gets properties of a resource group. See @{HPMFunctionResourceGroupGetProperties}.
	HPMFunctionResourceGroupSetProperties ResourceGroupSetProperties;																	// Sets properties of a resource group. See @{HPMFunctionResourceGroupSetProperties}.

	HPMFunctionResourceGetLoggedIn ResourceGetLoggedIn;																					// Gets the currently logged in resource. See @{HPMFunctionResourceGetLoggedIn}.
	HPMFunctionResourceGroupGetResources ResourceGroupGetResources;																		// Gets resources that are members of a resource group. See @{HPMFunctionResourceGroupGetResources}.
	HPMFunctionResourceGetResourceFromName ResourceGetResourceFromName;																	// Gets a resource from a name. See @{HPMFunctionResourceGetResourceFromName}.
	HPMFunctionResourceGetNameFromResource ResourceGetNameFromResource;																	// Gets a name from a resource. See @{HPMFunctionResourceGetNameFromResource}.
	HPMFunctionResourceGroupGetNameFromResourceGroup ResourceGroupGetNameFromResourceGroup;												// Gets a name from a resource group. See @{HPMFunctionResourceGroupGetNameFromResourceGroup}.
	HPMFunctionResourceGroupUtilResourceGroupExists ResourceGroupUtilResourceGroupExists;												// Checks if an identifier is a resource group. See @{HPMFunctionResourceGroupUtilResourceGroupExists}.
	HPMFunctionResourceGetImpersonate ResourceGetImpersonate;																			// Gets the currently impersonated resource. See @{HPMFunctionResourceGetImpersonate}.
	HPMFunctionResourceGetLockFlags ResourceGetLockFlags;																				// Gets the lock flags for a resource. See @{HPMFunctionResourceGetLockFlags}.
	HPMFunctionResourceChangeLockFlags ResourceChangeLockFlags;																			// Changes the lock flags for a resource. See @{HPMFunctionResourceChangeLockFlags}.

	HPMFunctionResourceSetPreferredLanguage ResourceSetPreferredLanguage;																// Sets the preferred language of a resource. See @{HPMFunctionResourceSetPreferredLanguage}.
	HPMFunctionResourceGetPreferredLanguage ResourceGetPreferredLanguage;																// Gets the preferred language of a resource. See @{HPMFunctionResourceGetPreferredLanguage}.
	HPMFunctionResourceSetLastUsedLanguage ResourceSetLastUsedLanguage;																	// Sets the last used language of a resource. See @{HPMFunctionResourceSetLastUsedLanguage}.
	HPMFunctionResourceGetLastUsedLanguage ResourceGetLastUsedLanguage;																	// Gets the last used language of a resource. See @{HPMFunctionResourceGetLastUsedLanguage}.
	HPMFunctionResourceGetEffectiveLanguage ResourceGetEffectiveLanguage;																// Gets the effective language of a resource. See @{HPMFunctionResourceGetEffectiveLanguage}.
	HPMFunctionResourceGetDeletedDate ResourceGetDeletedDate;																			// Gets the date a resource was deleted. See @{HPMFunctionResourceGetDeletedDate}.
	HPMFunctionResourceGetUndeletedDate ResourceGetUndeletedDate;																		// Gets the date a resource was undeleted. See @{HPMFunctionResourceGetUndeletedDate}.
	HPMFunctionResourceTimesheetPeriodDataDelete ResourceTimesheetPeriodDataDelete;														// Deletes timesheet period data for a resource. See @{HPMFunctionResourceTimesheetPeriodDataDelete}.
	HPMFunctionResourceUtilCanBeDeleted ResourceUtilCanBeDeleted;																		// Checks if a resource can be deleted. See @{HPMFunctionResourceUtilCanBeDeleted}.
	HPMFunctionResourceUtilExpandResources ResourceUtilExpandResources;																	// Expands a resources list into a list of resources. See @{HPMFunctionResourceUtilExpandResources}.
	
	HPMFunctionResourceSetChatOnlineStatus ResourceSetChatOnlineStatus;																	// Sets the chat online status for the currently logged in SDK resource. See @{HPMFunctionResourceSetChatOnlineStatus}.
	HPMFunctionResourceGetChatOnlineStatus ResourceGetChatOnlineStatus;																	// Gets the chat online status for a resource. See @{HPMFunctionResourceGetChatOnlineStatus}.
	HPMFunctionResourceSetDoNotDisturb ResourceSetDoNotDisturb;																			// Sets the do not disturb flag for a resource. See @{HPMFunctionResourceSetDoNotDisturb}.
	HPMFunctionResourceGetDoNotDisturb ResourceGetDoNotDisturb;																			// Gets the do not disturb flag for a resource. See @{HPMFunctionResourceGetDoNotDisturb}.
	HPMFunctionResourceSendChatMessage ResourceSendChatMessage;																			// Sets/submits a chat message for a resource. See @{HPMFunctionResourceSendChatMessage}.
	HPMFunctionResourceSetLastReadChatID ResourceSetLastReadChatID;																		// Sets the last read chat message id for a resource. See @{HPMFunctionResourceSetLastReadChatID}.
	HPMFunctionResourceGetLastReadChatID ResourceGetLastReadChatID;																		// Gets the last read chat message id for a resource. See @{HPMFunctionResourceGetLastReadChatID}.

	HPMFunctionResourceUploadAvatar ResourceUploadAvatar;																				// Uploads an avatar image for a resource. See @{HPMFunctionResourceUploadAvatar}.

	HPMFunctionResourceGetTimesheetDay ResourceGetTimesheetDay;																			// Gets a timesheet report day for a resource. See @{HPMFunctionResourceGetTimesheetDay}.

	HPMFunctionTimesheetRowSetActivityID TimesheetRowSetActivityID;																		// Sets the activity id for a timesheet row. See @{HPMFunctionTimesheetRowSetActivityID}.
	HPMFunctionTimesheetRowSetProjectID TimesheetRowSetProjectID;																		// Sets the project id for a timesheet row. See @{HPMFunctionTimesheetRowSetProjectID}.
	HPMFunctionTimesheetRowSetTaskID TimesheetRowSetTaskID;																				// Sets the task id for a timesheet row. See @{HPMFunctionTimesheetRowSetTaskID}.
	HPMFunctionTimesheetRowSetStartedTime TimesheetRowSetStartedTime;																	// Sets the started time for a timesheet row. See @{HPMFunctionTimesheetRowSetStartedTime}.
	HPMFunctionTimesheetRowSetDurationTime TimesheetRowSetDurationTime;																	// Sets the duration time for a timesheet row. See @{HPMFunctionTimesheetRowSetDurationTime}.
	HPMFunctionTimesheetRowSetComment TimesheetRowSetComment;																			// Sets the comment for a timesheet row. See @{HPMFunctionTimesheetRowSetComment}.
	HPMFunctionTimesheetRowDelete TimesheetRowDelete;																					// Deletes a timesheet row. See @{HPMFunctionTimesheetRowDelete}.
	HPMFunctionTimesheetGetDateRange TimesheetGetDateRange;																				// Gets a timesheet report for a date range. See @{HPMFunctionTimesheetGetDateRange}.

	HPMFunctionProjectCreate ProjectCreate;																								// Creates a project. See @{HPMFunctionProjectCreate}.
	HPMFunctionProjectDelete ProjectDelete;																								// Deletes a project. See @{HPMFunctionProjectDelete}.
	HPMFunctionProjectEnum ProjectEnum;																									// Enumerates projects in database. See @{HPMFunctionProjectEnum}.
	HPMFunctionProjectEnumNonArchived ProjectEnumNonArchived;																			// Enumerates projects that are not archived in database. See @{HPMFunctionProjectEnumNonArchived}.
	HPMFunctionProjectGetProperties ProjectGetProperties;																				// Gets properties of a project. See @{HPMFunctionProjectGetProperties}.
	HPMFunctionProjectSetProperties ProjectSetProperties;																				// Sets properties of a project. See @{HPMFunctionProjectSetProperties}.
	HPMFunctionProjectGetSettings ProjectGetSettings;																					// Gets settings of a project. See @{HPMFunctionProjectGetSettings}.
	HPMFunctionProjectSetSettings ProjectSetSettings;																					// Sets settings of a project. See @{HPMFunctionProjectSetSettings}.
	HPMFunctionProjectGetEmailSettings ProjectGetEmailSettings;																			// Gets email settings of a project. See @{HPMFunctionProjectGetEmailSettings}.
	HPMFunctionProjectSetEmailSettings ProjectSetEmailSettings;																			// Sets email settings of a project. See @{HPMFunctionProjectSetEmailSettings}.
	HPMFunctionProjectGetHistoryAutoSaveSettings ProjectGetHistoryAutoSaveSettings;														// Gets project history auto save settings of a project. See @{HPMFunctionProjectGetHistoryAutoSaveSettings}.
	HPMFunctionProjectSetHistoryAutoSaveSettings ProjectSetHistoryAutoSaveSettings;														// Sets project history auto save settings of a project. See @{HPMFunctionProjectSetHistoryAutoSaveSettings}.
	HPMFunctionProjectGetCompletionStyle ProjectGetCompletionStyle;																		// Gets the project completion style. See @{HPMFunctionProjectGetCompletionStyle}.
	HPMFunctionProjectWorkflowEnum ProjectWorkflowEnum;																					// Enumerates workflows in a project. See @{HPMFunctionProjectWorkflowEnum}.
	HPMFunctionProjectWorkflowEnumWorkflow ProjectWorkflowEnumWorkflow;																	// Enumerates workflows of a workflow in a project. See @{HPMFunctionProjectWorkflowEnumWorkflow}.
	HPMFunctionProjectWorkflowEnumObject ProjectWorkflowEnumObject;																		// Enumerates workflow objects of a workflow in a project See @{HPMFunctionProjectWorkflowEnumObject}.
	HPMFunctionProjectWorkflowCreate ProjectWorkflowCreate;																				// Creates a new workflow in a project. See @{HPMFunctionProjectWorkflowCreate}.
	HPMFunctionProjectWorkflowDelete ProjectWorkflowDelete;																				// Deletes a workflow in a project. See @{HPMFunctionProjectWorkflowDelete}.
	HPMFunctionProjectWorkflowGetObject ProjectWorkflowGetObject;																		// Gets the a work flow object. See @{HPMFunctionProjectWorkflowGetObject}.
	HPMFunctionProjectWorkflowGetSettings ProjectWorkflowGetSettings;																	// Gets the work flow settings for a project. See @{HPMFunctionProjectWorkflowGetSettings}.
	HPMFunctionProjectWorkflowSetSettings ProjectWorkflowSetSettings;																	// Sets the work flow settings for a project. See @{HPMFunctionProjectWorkflowSetSettings}.
	HPMFunctionProjectWorkflowSetLatestVersion ProjectWorkflowSetLatestVersion;															// Sets the latest version of a workflow in a project. See @{HPMFunctionProjectWorkflowSetLatestVersion}.
	HPMFunctionProjectWorkflowGetNewestVersion ProjectWorkflowGetNewestVersion;															// Sets the newest workflow id of a workflow in a project. See @{HPMFunctionProjectWorkflowGetNewestVersion}.
	HPMFunctionProjectGetStatisticsSettings ProjectGetStatisticsSettings;																// Gets the statistics settings for a project. See @{HPMFunctionProjectGetStatisticsSettings}.
	HPMFunctionProjectSetStatisticsSettings ProjectSetStatisticsSettings;																// Sets the statistics settings for a project. See @{HPMFunctionProjectSetStatisticsSettings}.
	HPMFunctionProjectGetWallSettings ProjectGetWallSettings;																			// Gets wall settings of a project. See @{HPMFunctionProjectGetWallSettings}.
	HPMFunctionProjectSetWallSettings ProjectSetWallSettings;																			// Sets wall settings of a project. See @{HPMFunctionProjectSetWallSettings}.
	HPMFunctionProjectGetKanbanWallSettings ProjectGetKanbanWallSettings;																// Gets wall settings of a project when wall is in Kanban mode. See @{HPMFunctionProjectGetKanbanWallSettings}.
	HPMFunctionProjectSetKanbanWallSettings ProjectSetKanbanWallSettings;																// Sets wall settings of a project when wall is in Kanban mode. See @{HPMFunctionProjectSetKanbanWallSettings}.
	HPMFunctionProjectGetWallGroups ProjectGetWallGroups;																				// Gets wall groups of a project. See @{HPMFunctionProjectGetWallGroups}.
	HPMFunctionProjectSetWallGroups ProjectSetWallGroups;																				// Sets wall groups of a project. See @{HPMFunctionProjectSetWallGroups}.
	HPMFunctionProjectGetDetailedAccessRules ProjectGetDetailedAccessRules;																// Gets detailed access rules of a project. See @{HPMFunctionProjectGetDetailedAccessRules}.
	HPMFunctionProjectSetDetailedAccessRules ProjectSetDetailedAccessRules;																// Sets detailed access rules of a project. See @{HPMFunctionProjectSetDetailedAccessRules}.
	HPMFunctionProjectGetReport ProjectGetReport;																						// Gets report for a report id in a project. See @{HPMFunctionProjectGetReport}
	HPMFunctionProjectGetReports ProjectGetReports;																						// Gets reports for a project. See @{HPMFunctionProjectGetReports}.
	HPMFunctionProjectSetReports ProjectSetReports;																						// Sets reports for a project. See @{HPMFunctionProjectSetReports}.
	HPMFunctionProjectEnumReportResources ProjectEnumReportResources;																	// Enumerates resources that have created reports.	See @{HPMFunctionProjectEnumReportResources}.
	HPMFunctionProjectGetCustomStatisticsSettings ProjectGetCustomStatisticsSettings;													// Gets custom statistics settings of a project. See @{HPMFunctionProjectGetCustomStatisticsSettings}.
	HPMFunctionProjectSetCustomStatisticsSettings ProjectSetCustomStatisticsSettings;													// Sets custom statistics settings of a project. See @{HPMFunctionProjectSetCustomStatisticsSettings}.
	HPMFunctionProjectGetWorkflowStatusStats ProjectGetWorkflowStatusStats;																// Gets workflow status statistics for a bug status in a project. See @{HPMFunctionProjectGetWorkflowStatusStats}
	HPMFunctionProjectUtilGetWorkflowProgression ProjectUtilGetWorkflowProgression;														// Generates list of possible progression states. See @{HPMFunctionProjectUtilGetWorkflowProgression}

	HPMFunctionProjectCustomColumnsGet ProjectCustomColumnsGet;																			// Gets custom columns in a project. See @{HPMFunctionProjectCustomColumnsGet}.
	HPMFunctionProjectCustomColumnsSet ProjectCustomColumnsSet;																			// Sets custom columns in a project. See @{HPMFunctionProjectCustomColumnsSet}.
	HPMFunctionProjectCustomColumnsCreate ProjectCustomColumnsCreate;																	// Creates a single custom column in project. See @{HPMFunctionProjectCustomColumnsCreate}.
	HPMFunctionProjectCustomColumnsDeleteTaskData ProjectCustomColumnsDeleteTaskData;													// Deletes custom column data for the specified custom column in project. See @{HPMFunctionProjectCustomColumnsDeleteTaskData}.
	HPMFunctionProjectCustomColumnsRenameTaskData ProjectCustomColumnsRenameTaskData;													// Renames custom column data for the specified custom columns in project. See @{HPMFunctionProjectCustomColumnsRenameTaskData}.
	HPMFunctionProjectGetDefaultActivatedColumns ProjectGetDefaultActivatedColumns;														// Gets activated default columns in project. See @{HPMFunctionProjectGetDefaultActivatedColumns}.
	HPMFunctionProjectSetDefaultActivatedColumns ProjectSetDefaultActivatedColumns;														// Sets activated default columns in project. See @{HPMFunctionProjectSetDefaultActivatedColumns}.
	HPMFunctionProjectOpenBacklogProject ProjectOpenBacklogProject;																		// Opens backlog project. See @{HPMFunctionProjectOpenBacklogProject}.
	HPMFunctionProjectOpenQAProject ProjectOpenQAProject;																				// Opens QA project. See @{HPMFunctionProjectOpenQAProject}.
	HPMFunctionProjectGetCustomSettingsValue ProjectGetCustomSettingsValue;																// Gets the value of a project custom setting. See @{HPMFunctionProjectGetCustomSettingsValue}.
	HPMFunctionProjectSetCustomSettingsValue ProjectSetCustomSettingsValue;																// Sets the value of a project custom setting. See @{HPMFunctionProjectSetCustomSettingsValue}.

	HPMFunctionProjectGetSDKInternalData ProjectGetSDKInternalData;																		// Gets project SDK internal data. See @{HPMFunctionProjectGetSDKInternalData}.
	HPMFunctionProjectSetSDKInternalData ProjectSetSDKInternalData;																		// Sets project SDK internal data. See @{HPMFunctionProjectSetSDKInternalData}.

	HPMFunctionProjectUtilGetWorkflowStructure ProjectUtilGetWorkflowStructure;															// Gets the workflow structure for a workflow. See @{HPMFunctionProjectUtilGetWorkflowStructure}.

	HPMFunctionProjectResourceAdd ProjectResourceAdd;																					// Adds a resource as a member of a project. See @{HPMFunctionProjectResourceAdd}.
	HPMFunctionProjectResourceRemove ProjectResourceRemove;																				// Removes a resource from being a member of a project. See @{HPMFunctionProjectResourceRemove}.
	HPMFunctionProjectResourceEnum ProjectResourceEnum;																					// Enumerates members of a project. See @{HPMFunctionProjectResourceEnum}.
	HPMFunctionProjectResourceGetProperties ProjectResourceGetProperties;																// Gets properties of a member in a project. See @{HPMFunctionProjectResourceGetProperties}.
	HPMFunctionProjectResourceSetProperties ProjectResourceSetProperties;																// Sets properties of a member in a project. See @{HPMFunctionProjectResourceEnum}.
	HPMFunctionProjectResourceGetCustomSettingsValue ProjectResourceGetCustomSettingsValue;												// Gets the value of a project resource custom setting. See @{HPMFunctionProjectResourceGetCustomSettingsValue}.
	HPMFunctionProjectResourceSetCustomSettingsValue ProjectResourceSetCustomSettingsValue;												// Sets the value of a project resource custom setting. See @{HPMFunctionProjectResourceSetCustomSettingsValue}.

	HPMFunctionProjectResourceGetSDKInternalData ProjectResourceGetSDKInternalData;														// Gets project resource SDK internal data. See @{HPMFunctionProjectResourceGetSDKInternalData}.
	HPMFunctionProjectResourceSetSDKInternalData ProjectResourceSetSDKInternalData;														// Sets project resource SDK internal data. See @{HPMFunctionProjectResourceSetSDKInternalData}.

	HPMFunctionProjectResourceUtilIsMember ProjectResourceUtilIsMember;																	// Checks if a resource is member of a project. See @{HPMFunctionProjectResourceUtilIsMember}.

	HPMFunctionProjectViewPresetApply ProjectViewPresetApply;																			// Applies a view preset for a user in a project. See @{HPMFunctionProjectViewPresetApply}.

	HPMFunctionProjectUtilGetBacklog ProjectUtilGetBacklog;																				// Gets the unique identifier of the backlog project of a project. See @{HPMFunctionProjectUtilGetBacklog}.
	HPMFunctionProjectUtilGetQA ProjectUtilGetQA;																						// Gets the unique identifier of the QA project of a project. See @{HPMFunctionProjectUtilGetQA}.
	HPMFunctionProjectUtilIsArchived ProjectUtilIsArchived;																				// Checks if a project is archived. See @{HPMFunctionProjectUtilIsArchived}.

	HPMFunctionProjectGetAgilePriorityCustomColumn ProjectGetAgilePriorityCustomColumn;													// Gets the agile priority of a task. See @{HPMFunctionProjectGetAgilePriorityCustomColumn}.
	HPMFunctionProjectSetAgilePriorityCustomColumn ProjectSetAgilePriorityCustomColumn;													// Sets the agile priority of a task. See @{HPMFunctionProjectSetAgilePriorityCustomColumn}.
	HPMFunctionProjectGetCustomColumn ProjectGetCustomColumn;																			// Gets a custom column. See @{HPMFunctionProjectGetCustomColumn}. 
	HPMFunctionProjectGetOldCustomColumn ProjectGetOldCustomColumn;																		// Gets a custom column for a hash value of an old project column. See @{HPMFunctionProjectGetOldCustomColumn}. 
	HPMFunctionProjectGetDefaultActivatedNonHidableColumns ProjectGetDefaultActivatedNonHidableColumns;									// Gets the default activated columns in a project. See @{HPMFunctionProjectGetDefaultActivatedNonHidableColumns}.
	HPMFunctionProjectGetDefaultAvailableColumns ProjectGetDefaultAvailableColumns;														// Gets all available default columns in a project. See @{HPMFunctionProjectGetDefaultAvailableColumns}.

	HPMFunctionProjectCalendarGetWorkingDays ProjectCalendarGetWorkingDays;																// Gets the calendar working days in a project. See @{HPMFunctionProjectCalendarGetWorkingDays}.
	HPMFunctionProjectCalendarSetWorkingDays ProjectCalendarSetWorkingDays;																// Sets the calendar working days in a project. See @{HPMFunctionProjectCalendarSetWorkingDays}.
	HPMFunctionProjectCalendarGetCustomWorkingDays ProjectCalendarGetCustomWorkingDays;													// Gets the calendar custom working days for specific days in a project. See @{HPMFunctionProjectCalendarGetCustomWorkingDays}.
	HPMFunctionProjectCalendarSetCustomWorkingDays ProjectCalendarSetCustomWorkingDays;													// Sets the calendar custom working days for specific days in a project. See @{HPMFunctionProjectCalendarSetCustomWorkingDays}.
	HPMFunctionProjectCalendarGetWorkingHours ProjectCalendarGetWorkingHours;															// Gets the calendar working hours for a project. See @{HPMFunctionProjectCalendarGetWorkingHours}.
	HPMFunctionProjectCalendarSetWorkingHours ProjectCalendarSetWorkingHours;															// Sets the calendar working hours for a project. See @{HPMFunctionProjectCalendarSetWorkingHours}.
	HPMFunctionProjectCalendarGetCustomWorkingHours ProjectCalendarGetCustomWorkingHours;												// Gets the calendar custom working hours for specific days in a project. See @{HPMFunctionProjectCalendarGetCustomWorkingHours}.
	HPMFunctionProjectCalendarSetCustomWorkingHours ProjectCalendarSetCustomWorkingHours;												// Sets the calendar working hours for specific days in a project. See @{HPMFunctionProjectCalendarSetCustomWorkingHours}.
	HPMFunctionProjectCalendarGetHolidays ProjectCalendarGetHolidays;																	// Gets the calendar holidays in a project. See @{HPMFunctionProjectCalendarGetHolidays}.
	HPMFunctionProjectCalendarSetHolidays ProjectCalendarSetHolidays;																	// Sets the calendar holidays in a project. See @{HPMFunctionProjectCalendarSetHolidays}.
	HPMFunctionProjectGetCalendarDayInfo ProjectGetCalendarDayInfo;																		// Gets calendar info for a day in a project. See @{HPMFunctionProjectGetCalendarDayInfo}.

	HPMFunctionProjectGetViewPresets ProjectGetViewPresets;																				// Gets view presets for a project. See @{HPMFunctionProjectGetViewPresets}.
	HPMFunctionProjectSetViewPresets ProjectSetViewPresets;																				// Sets view presets for a project. See @{HPMFunctionProjectSetViewPresets}.

	HPMFunctionProjectSetTimesheetLock ProjectSetTimesheetLock;																			// Sets the timesheet lock for a project. See @{HPMFunctionProjectSetTimesheetLock}.

	HPMFunctionProjectDisplayUserMessage ProjectDisplayUserMessage;																		// Displays a message in the client if the specified user is logged in. See @{HPMFunctionProjectDisplayUserMessage}.

	HPMFunctionTaskCreateUnified TaskCreateUnified;																						// Creates tasks and proxies in a container. See @{HPMFunctionTaskCreateUnified}.
	HPMFunctionTaskMoveProject TaskMoveProject;																							// Moves tasks into a new container. See @{HPMFunctionTaskMoveProject}.
	HPMFunctionTaskDelete TaskDelete;																									// Deletes a task in a container. See @{HPMFunctionTaskDelete}.
	HPMFunctionTaskEnum TaskEnum;																										// Enumerates tasks in a container. See @{HPMFunctionTaskEnum}.
	HPMFunctionTaskEnumConnections TaskEnumConnections;																					// Enumerates connected tasks in a container. See @{HPMFunctionTaskEnumConnections}.
	HPMFunctionTaskEnumReferences TaskEnumReferences;																					// Enumerates the references to a task. See @{HPMFunctionTaskEnumReferences}.
	HPMFunctionTaskChangeDisposition TaskChangeDisposition;																				// Changes the disposition of tasks in a container. See @{HPMFunctionTaskChangeDisposition}.
	HPMFunctionTaskGetMainReference TaskGetMainReference;																				// Gets the main reference for a task. See @{HPMFunctionTaskGetMainReference}.
	HPMFunctionTaskGetProxy TaskGetProxy;																								// Gets the proxy reference for a task. See @{HPMFunctionTaskGetProxy}.
	HPMFunctionTaskGetContainer TaskGetContainer;																						// Get the parent container of a task. See @{HPMFunctionTaskGetContainer}.
	HPMFunctionTaskEnumCustomColumnData TaskEnumCustomColumnData;																		// Enumerates custom column data of a task. See @{HPMFunctionTaskEnumCustomColumnData}.
	HPMFunctionTaskEnumComments TaskEnumComments;																						// Enumerates comments of a task. See @{HPMFunctionTaskEnumComments}.
	HPMFunctionTaskSetBacklogCategory TaskSetBacklogCategory;																			// Sets the backlog category of a task. See @{HPMFunctionTaskSetBacklogCategory}.
	HPMFunctionTaskGetBacklogCategory TaskGetBacklogCategory;																			// Gets the backlog category of a task. See @{HPMFunctionTaskGetBacklogCategory}.
	HPMFunctionTaskSetColor TaskSetColor;																								// Sets the color of a task. See @{HPMFunctionTaskSetColor}.
	HPMFunctionTaskGetColor TaskGetColor;																								// Gets the color of a task. See @{HPMFunctionTaskGetColor}.
	HPMFunctionTaskSetWallItemColor TaskSetWallItemColor;																				// Sets the wall item color of a task. See @{HPMFunctionTaskSetWallItemColor}.
	HPMFunctionTaskGetWallItemColor TaskGetWallItemColor;																				// Gets the wall item color of a task. See @{HPMFunctionTaskGetWallItemColor}.
	HPMFunctionTaskSetComplexityPoints TaskSetComplexityPoints;																			// Sets complexity points of a task. See @{HPMFunctionTaskSetComplexityPoints}.
	HPMFunctionTaskGetComplexityPoints TaskGetComplexityPoints;																			// Gets complexity points of a task. See @{HPMFunctionTaskGetComplexityPoints}.
	HPMFunctionTaskSetConfidence TaskSetConfidence;																						// Sets the confidence of a task. See @{HPMFunctionTaskSetConfidence}.
	HPMFunctionTaskGetConfidence TaskGetConfidence;																						// Gets the confidence of a task. See @{HPMFunctionTaskGetConfidence}.
	HPMFunctionTaskSetEstimatedIdealDays TaskSetEstimatedIdealDays;																		// Sets the estimated ideal days of a task. See @{HPMFunctionTaskSetEstimatedIdealDays}.
	HPMFunctionTaskGetEstimatedIdealDays TaskGetEstimatedIdealDays;																		// Gets the estimated ideal days of a task. See @{HPMFunctionTaskGetEstimatedIdealDays}.
	HPMFunctionTaskSetRisk TaskSetRisk;																									// Sets the risk of a task. See @{HPMFunctionTaskSetRisk}.
	HPMFunctionTaskGetRisk TaskGetRisk;																									// Gets the risk of a task. See @{HPMFunctionTaskGetRisk}.
	HPMFunctionTaskSetStartOffset TaskSetStartOffset;																					// Sets the start offset of a task. See @{HPMFunctionTaskSetStartOffset}.
	HPMFunctionTaskGetStartOffset TaskGetStartOffset;																					// Gets the start offset of a task. See @{HPMFunctionTaskGetStartOffset}.
	HPMFunctionTaskSetDuration TaskSetDuration;																							// Sets the duration of a task. See @{HPMFunctionTaskSetDuration}.
	HPMFunctionTaskGetDuration TaskGetDuration;																							// Gets the duration of a task. See @{HPMFunctionTaskGetDuration}.
	HPMFunctionTaskSetForceSubProject TaskSetForceSubProject;																			// Sets the force subproject flag of a task. See @{HPMFunctionTaskSetForceSubProject}.
	HPMFunctionTaskGetForceSubProject TaskGetForceSubProject;																			// Gets the force subproject flag of a task. See @{HPMFunctionTaskGetForceSubProject}.
	HPMFunctionTaskSetBudgetedWork TaskSetBudgetedWork;																					// Sets the budgeted work of a task. See @{HPMFunctionTaskSetBudgetedWork}.
	HPMFunctionTaskGetBudgetedWork TaskGetBudgetedWork;																					// Gets the budgeted work of a task. See @{HPMFunctionTaskGetBudgetedWork}.
	HPMFunctionTaskGetLockedType TaskGetLockedType;																						// Gets the locked type of a task. See @{HPMFunctionTaskGetLockedType}.
	HPMFunctionTaskSetPercentComplete TaskSetPercentComplete;																			// Sets the completed percent of a task. See @{HPMFunctionTaskSetPercentComplete}.
	HPMFunctionTaskGetPercentComplete TaskGetPercentComplete;																			// Gets the completed percent of a task. See @{HPMFunctionTaskGetPercentComplete}.
	HPMFunctionTaskSetStatus TaskSetStatus;																								// Sets the status of a task. See @{HPMFunctionTaskSetStatus}.
	HPMFunctionTaskGetStatus TaskGetStatus;																								// Gets the status of a task. See @{HPMFunctionTaskGetStatus}.
	HPMFunctionTaskGetType TaskGetType;																									// Gets the type of a task. See @{HPMFunctionTaskGetType}.
	HPMFunctionTaskSetVacationOptions TaskSetVacationOptions;																			// Sets the vacation options of a task. See @{HPMFunctionTaskSetVacationOptions}.
	HPMFunctionTaskGetVacationOptions TaskGetVacationOptions;																			// Gets the vacation options of a task. See @{HPMFunctionTaskGetVacationOptions}.
	HPMFunctionTaskCreateComment TaskCreateComment;																						// Creates a comment on a task. See @{HPMFunctionTaskCreateComment}.
	HPMFunctionTaskDeleteComment TaskDeleteComment;																						// Deletes a comment of a task. See @{HPMFunctionTaskDeleteComment}.
	HPMFunctionTaskNotifyCommentPosted TaskNotifyCommentPosted;																			// Sends notifications about a posted comment on a task. See @{HPMFunctionTaskNotifyCommentPosted}.
	HPMFunctionTaskSetComment TaskSetComment;																							// Sets the data of a comment of a task. See @{HPMFunctionTaskSetComment}.
	HPMFunctionTaskGetComment TaskGetComment;																							// Gets the data of a comment of a task. See @{HPMFunctionTaskGetComment}.
	HPMFunctionTaskSetDescription TaskSetDescription;																					// Sets the description of a task. See @{HPMFunctionTaskSetDescription}.
	HPMFunctionTaskGetDescription TaskGetDescription;																					// Gets the description of a task. See @{HPMFunctionTaskGetDescription}.
	HPMFunctionTaskSetHyperlink TaskSetHyperlink;																						// Sets the hyper link of a task. See @{HPMFunctionTaskSetHyperlink}.
	HPMFunctionTaskGetHyperlink TaskGetHyperlink;																						// Gets the hyper link of a task. See @{HPMFunctionTaskGetHyperlink}.
	HPMFunctionTaskSetCommentsOptions TaskSetCommentsOptions;																			// Sets the comments options of a task. See @{HPMFunctionTaskSetCommentsOptions}.
	HPMFunctionTaskGetCommentsOptions TaskGetCommentsOptions;																			// Gets the comments options of a task. See @{HPMFunctionTaskGetCommentsOptions}.
	HPMFunctionTaskSetLockedBy TaskSetLockedBy;																							// Sets the resource a task is locked by. See @{HPMFunctionTaskSetLockedBy}.
	HPMFunctionTaskGetLockedBy TaskGetLockedBy;																							// Gets the resource a task is locked by. See @{HPMFunctionTaskGetLockedBy}.
	HPMFunctionTaskSetOriginallyCreatedBy TaskSetOriginallyCreatedBy;																	// Sets the originally created/reported by user of a task. See @{HPMFunctionTaskSetOriginallyCreatedBy}.
	HPMFunctionTaskGetOriginallyCreatedBy TaskGetOriginallyCreatedBy;																	// Gets the originally created/reported by user of a task. See @{HPMFunctionTaskGetOriginallyCreatedBy}.
	HPMFunctionTaskSetCustomColumnData TaskSetCustomColumnData;																			// Sets the custom column data of a custom column of a task. See @{HPMFunctionTaskSetCustomColumnData}.
	HPMFunctionTaskGetCustomColumnData TaskGetCustomColumnData;																			// Gets the custom column data of a custom column of a task. See @{HPMFunctionTaskGetCustomColumnData}.
	HPMFunctionTaskSetLastResourceCommentReadTime TaskSetLastResourceCommentReadTime;													// Sets the last resource comment read time of a resource and task. See @{HPMFunctionTaskSetLastResourceCommentReadTime}.
	HPMFunctionTaskGetLastResourceCommentReadTime TaskGetLastResourceCommentReadTime;													// Gets the last resource comment read time of a resource and task. See @{HPMFunctionTaskGetLastResourceCommentReadTime}.
	HPMFunctionTaskSetAttachedDocuments TaskSetAttachedDocuments;																		// Sets the attached documents of a task. See @{HPMFunctionTaskSetAttachedDocuments}.
	HPMFunctionTaskGetAttachedDocuments TaskGetAttachedDocuments;																		// Gets the attached documents of a task. See @{HPMFunctionTaskGetAttachedDocuments}.
	HPMFunctionTaskSetDelegateTo TaskSetDelegateTo;																						// Sets the resources or groups a task is delegated to. See @{HPMFunctionTaskSetDelegateTo}.
	HPMFunctionTaskGetDelegateTo TaskGetDelegateTo;																						// Gets the resources of groups a task is delegated to. See @{HPMFunctionTaskGetDelegateTo}.
	HPMFunctionTaskSetResourceAllocation TaskSetResourceAllocation;																		// Sets the resources allocated to a task. See @{HPMFunctionTaskSetResourceAllocation}.
	HPMFunctionTaskGetResourceAllocation TaskGetResourceAllocation;																		// Gets the resources allocated to a task. See @{HPMFunctionTaskGetResourceAllocation}.
	HPMFunctionTaskSetSprintAllocatedResources TaskSetSprintAllocatedResources;															// Sets the resources or groups allocated to a sprint. See @{HPMFunctionTaskSetSprintAllocatedResources}.
	HPMFunctionTaskGetSprintAllocatedResources TaskGetSprintAllocatedResources;															// Gets the resources or groups allocated to a sprint. See @{HPMFunctionTaskGetSprintAllocatedResources}.
	HPMFunctionTaskSetSprintResourceAllocation TaskSetSprintResourceAllocation;															// Sets the resource allocation of a sprint. See @{HPMFunctionTaskSetSprintResourceAllocation}.
	HPMFunctionTaskGetSprintResourceAllocation TaskGetSprintResourceAllocation;															// Gets the resource allocation of a sprint. See @{HPMFunctionTaskGetSprintResourceAllocation}.
	HPMFunctionTaskSetCompleted TaskSetCompleted;																						// Sets the completed flag of a task. See @{HPMFunctionTaskSetCompleted}.
	HPMFunctionTaskGetCompleted TaskGetCompleted;																						// Gets the completed flag of a task. See @{HPMFunctionTaskGetCompleted}.
	HPMFunctionTaskSetTimeZones TaskSetTimeZones;																						// Sets the start and end dates of the zones of a scheduled task. See @{HPMFunctionTaskSetTimeZones}.
	HPMFunctionTaskGetTimeZones TaskGetTimeZones;																						// Gets the start and end dates of the zones of a scheduled task. See @{HPMFunctionTaskGetTimeZones}.
	HPMFunctionTaskGetTotalDuration TaskGetTotalDuration;																				// Gets the total duration of a task. See @{HPMFunctionTaskGetTotalDuration}.
	HPMFunctionTaskSetVisibleTo TaskSetVisibleTo;																						// Sets the resources a task is visible to. See @{HPMFunctionTaskSetVisibleTo}.
	HPMFunctionTaskGetVisibleTo TaskGetVisibleTo;																						// Gets the resources a task is visible to. See @{HPMFunctionTaskGetVisibleTo}.
	HPMFunctionTaskSetWorkRemaining TaskSetWorkRemaining;																				// Sets work remaining of a task. See @{HPMFunctionTaskSetWorkRemaining}.
	HPMFunctionTaskGetWorkRemaining TaskGetWorkRemaining;																				// Gets work remaining of a task. See @{HPMFunctionTaskGetWorkRemaining}.
	HPMFunctionTaskSetWorkRemainingHistory TaskSetWorkRemainingHistory;																	// Sets work remaining history of a task. See @{HPMFunctionTaskSetWorkRemainingHistory}.
	HPMFunctionTaskGetWorkRemainingHistory TaskGetWorkRemainingHistory;																	// Gets work remaining history of a task. See @{HPMFunctionTaskGetWorkRemainingHistory}.
	HPMFunctionTaskEnumWorkRemainingHistoryDays TaskEnumWorkRemainingHistoryDays;														// Enumerates work remaining history days on a task. See @{HPMFunctionTaskSetIdealDaysHistory}.
	HPMFunctionTaskSetIdealDaysHistory TaskSetIdealDaysHistory;																			// Sets ideal days history of a task. See @{HPMFunctionTaskSetWorkRemainingHistory}.
	HPMFunctionTaskGetIdealDaysHistory TaskGetIdealDaysHistory;																			// Gets ideal days history of a task. See @{HPMFunctionTaskGetIdealDaysHistory}.
	HPMFunctionTaskEnumIdealDaysHistoryDays TaskEnumIdealDaysHistoryDays;																// Enumerates ideal days history days on a task. See @{HPMFunctionTaskEnumIdealDaysHistoryDays}.
	HPMFunctionTaskSetPointsHistory TaskSetPointsHistory;																				// Sets points history of a task. See @{HPMFunctionTaskSetPointsHistory}.
	HPMFunctionTaskGetPointsHistory TaskGetPointsHistory;																				// Gets points history of a task. See @{HPMFunctionTaskGetPointsHistory}.
	HPMFunctionTaskEnumPointsHistoryDays TaskEnumPointsHistoryDays;																		// Enumerates points history days on a task. See @{HPMFunctionTaskEnumPointsHistoryDays}.
	HPMFunctionTaskSetSeverity TaskSetSeverity;																							// Sets severity of a task. See @{HPMFunctionTaskSetSeverity}.
	HPMFunctionTaskGetSeverity TaskGetSeverity;																							// Gets severity of a task. See @{HPMFunctionTaskGetSeverity}.
	HPMFunctionTaskSetWorkflowStatus TaskSetWorkflowStatus;																				// Sets workflow status of a task. See @{HPMFunctionTaskSetWorkflowStatus}.
	HPMFunctionTaskGetWorkflowStatus TaskGetWorkflowStatus;																				// Gets workflow status of a task. See @{HPMFunctionTaskGetWorkflowStatus}.
	HPMFunctionTaskSetUserStoryFlag TaskSetUserStoryFlag;																				// Sets the user story flag of a task. See @{HPMFunctionTaskSetUserStoryFlag}.
	HPMFunctionTaskGetUserStoryFlag TaskGetUserStoryFlag;																				// Gets the user story flag of a task. See @{HPMFunctionTaskGetUserStoryFlag}.
	HPMFunctionTaskSetLastUpdatedTime TaskSetLastUpdatedTime;																			// Sets the last time a task was updated of a task. See @{HPMFunctionTaskSetLastUpdatedTime}.
	HPMFunctionTaskGetLastUpdatedTime TaskGetLastUpdatedTime;																			// Gets the last time a task was updated of a task. See @{HPMFunctionTaskGetLastUpdatedTime}.
	HPMFunctionTaskSetDetailedDescription TaskSetDetailedDescription;																	// Sets detailed description of a task. See @{HPMFunctionTaskSetDetailedDescription}.
	HPMFunctionTaskGetDetailedDescription TaskGetDetailedDescription;																	// Gets detailed description of a task. See @{HPMFunctionTaskGetDetailedDescription}.
	HPMFunctionTaskSetStepsToReproduce TaskSetStepsToReproduce;																			// Sets steps to reproduce of a task. See @{HPMFunctionTaskSetStepsToReproduce}.
	HPMFunctionTaskGetStepsToReproduce TaskGetStepsToReproduce;																			// Gets steps to reproduce of a task. See @{HPMFunctionTaskGetStepsToReproduce}.
	HPMFunctionTaskSetSprintResourcesHaveFullRights TaskSetSprintResourcesHaveFullRights;												// Sets sprint resources to have full rights on a task. See @{HPMFunctionTaskSetSprintResourcesHaveFullRights}.
	HPMFunctionTaskGetSprintResourcesHaveFullRights TaskGetSprintResourcesHaveFullRights;												// Gets sprint resources to have full rights on a task. See @{HPMFunctionTaskGetSprintResourcesHaveFullRights}.
	HPMFunctionTaskGetAttachmentPath TaskGetAttachmentPath;																				// Gets the attachment path in document management for a task. See @{HPMFunctionTaskGetAttachmentPath}.
	HPMFunctionTaskGetID TaskGetID;																										// Gets the task or bug id. See @{HPMFunctionTaskGetID}.
	HPMFunctionTaskSetLinkedToMilestones TaskSetLinkedToMilestones;																		// Sets the milestones a task is linked to. See @{HPMFunctionTaskSetLinkedToMilestones}.
	HPMFunctionTaskGetLinkedToMilestones TaskGetLinkedToMilestones;																		// Gets the milestones a task is linked to. See @{HPMFunctionTaskGetLinkedToMilestones}.
	HPMFunctionTaskSetLinkedToSprint TaskSetLinkedToSprint;																				// Sets the sprint a task is linked to. See @{HPMFunctionTaskSetLinkedToSprint}.
	HPMFunctionTaskGetLinkedToSprint TaskGetLinkedToSprint;																				// Gets the sprint a task is linked to. See @{HPMFunctionTaskGetLinkedToSprint}.
	HPMFunctionTaskSetLinkedTo TaskSetLinkedTo;																							// Sets the objects a task is linked to. See @{HPMFunctionTaskSetLinkedTo}.
	HPMFunctionTaskGetLinkedTo TaskGetLinkedTo;																							// Gets the objects a task is linked to. See @{HPMFunctionTaskGetLinkedTo}.
	HPMFunctionTaskSetWallPositions TaskSetWallPositions;																				// Sets the wall positions for a task. See @{HPMFunctionTaskSetWallPositions}.
	HPMFunctionTaskGetWallPositions TaskGetWallPositions;																				// Gets the wall positions for a task. See @{HPMFunctionTaskGetWallPositions}.
	HPMFunctionTaskSetFullyCreated TaskSetFullyCreated;																					// Sets the fully created flag for a task. See @{HPMFunctionTaskSetFullyCreated}.
	HPMFunctionTaskGetFullyCreated TaskGetFullyCreated;																					// Gets the fully created flag for a task. See @{HPMFunctionTaskGetFullyCreated}.
	HPMFunctionTaskSetArchived TaskSetArchived;																							// Sets the archived status of a sprint task. See @{HPMFunctionTaskSetArchived}.
	HPMFunctionTaskGetArchived TaskGetArchived;																							// Gets the archived status of a sprint task. See @{HPMFunctionTaskGetArchived}.

	HPMFunctionTaskUpdatePipelineWorkflowToNewestVersion TaskUpdatePipelineWorkflowToNewestVersion;										// Updates all tasks to the newest version of the workflow. See @{HPMFunctionTaskUpdatePipelineWorkflowToNewestVersion}.
	HPMFunctionUtilPrepareFindContext UtilPrepareFindContext;																			// Prepares a find context to be used in future finds. See @{HPMFunctionUtilPrepareFindContext}.
	HPMFunctionUtilUpdateFindContext UtilUpdateFindContext;																				// Updates find context with new search string. See @{HPMFunctionUtilUpdateFindContext}.
	HPMFunctionTaskFind TaskFind;																										// Find all the tasks given a find context. See @{HPMFunctionTaskFind}.
	HPMFunctionTaskRefUtilIsInFindContext TaskRefUtilIsInFindContext;																	// Checks if a task is included in a find context. See @{TaskRefUtilIsInFindContext}.

	HPMFunctionTaskSetWorkflow TaskSetWorkflow;																							// Sets the workflow of a task. See @{HPMFunctionTaskSetWorkflow}.
	HPMFunctionTaskGetWorkflow TaskGetWorkflow;																							// Gets the workflow of a task. See @{HPMFunctionTaskGetWorkflow}.
	HPMFunctionTaskGetLinkedToPipelineTask TaskGetLinkedToPipelineTask;																	// Gets the pipeline task that created the task. See @{HPMFunctionTaskGetLinkedToPipelineTask}.
	HPMFunctionTaskSetCreatedPipelineTasks TaskSetCreatedPipelineTasks;																	// Sets the tasks that the pipeline task created. See @{HPMFunctionTaskSetCreatedPipelineTasks}.
	HPMFunctionTaskGetCreatedPipelineTasks TaskGetCreatedPipelineTasks;																	// Gets the tasks that the pipeline task created. See @{HPMFunctionTaskGetCreatedPipelineTasks}.
	HPMFunctionTaskSetCreatedFromWorkflowObject TaskSetCreatedFromWorkflowObject;														// Sets the workflow object that the task was created from. See @{HPMFunctionTaskSetCreatedFromWorkflowObject}.
	HPMFunctionTaskGetCreatedFromWorkflowObject TaskGetCreatedFromWorkflowObject;														// Gets the workflow object that the task was created from. See @{HPMFunctionTaskGetCreatedFromWorkflowObject}.
	HPMFunctionTaskSetDefaultWorkflow TaskSetDefaultWorkflow;																			// Sets the default workflow of a task. See @{HPMFunctionTaskSetDefaultWorkflow}.
	HPMFunctionTaskGetDefaultWorkflow TaskGetDefaultWorkflow;																			// Gets the default workflow of a task. See @{HPMFunctionTaskGetDefaultWorkflow}.
	HPMFunctionTaskPipelineGetTaskRef TaskPipelineGetTaskRef;																			// Gets the pipeline task reference of a task. See @{HPMFunctionTaskPipelineGetTaskRef}.
	HPMFunctionTaskRefGetColumnText TaskRefGetColumnText;																				// Gets the text representation of a columns content for a task. See @{HPMFunctionTaskRefGetColumnText}.
	HPMFunctionTaskGetLastAssignedInWorkflowStatus TaskGetLastAssignedInWorkflowStatus;													// Gets a list of resources that are assigned to a specific status in a workflow. See @{TaskGetLastAssignedInWorkflowStatus}.
	HPMFunctionTaskGetLastAssignedInWorkflowStatuses TaskGetLastAssignedInWorkflowStatuses;												// Gets a list of resources that are assigned for all workflows and statuses for a task. See @{TaskGetLastAssignedInWorkflowStatuses}.
	HPMFunctionTaskGetLastEnterWorkflowStatus TaskGetLastEnterWorkflowStatus;															// Gets last entered info for a specific status in a workflow. See @{TaskGetLastEnterWorkflowStatus}.
	HPMFunctionTaskGetLastExitWorkflowStatus TaskGetLastExitWorkflowStatus;																// Gets last exit info for a specific status in a workflow. See @{TaskGetLastExitWorkflowStatus}.
	HPMFunctionTaskGetAgilePriorityCategory TaskGetAgilePriorityCategory;																// Gets the agile priority of a task. See @{HPMFunctionTaskGetAgilePriorityCategory}.
	HPMFunctionTaskSetAgilePriorityCategory TaskSetAgilePriorityCategory;																// Sets the agile priority of a task. See @{HPMFunctionTaskSetAgilePriorityCategory}.
	HPMFunctionTaskGetBacklogPriority TaskGetBacklogPriority;																			// Gets the backlog priority of a task. See @{HPMFunctionTaskGetBacklogPriority}.
	HPMFunctionTaskSetBacklogPriority TaskSetBacklogPriority;																			// Sets the backlog priority of a task. See @{HPMFunctionTaskSetBacklogPriority}.
	HPMFunctionTaskGetSprintPriority TaskGetSprintPriority;																				// Gets the sprint priority of a task. See @{HPMFunctionTaskGetSprintPriority}.
	HPMFunctionTaskSetSprintPriority TaskSetSprintPriority;																				// Sets the sprint priority of a task. See @{HPMFunctionTaskSetSprintPriority}.
	HPMFunctionTaskGetBugPriority TaskGetBugPriority;																					// Gets the bug priority of a task. See @{HPMFunctionTaskGetBugPriority}.
	HPMFunctionTaskSetBugPriority TaskSetBugPriority;																					// Sets the bug priority of a task. See @{HPMFunctionTaskSetBugPriority}.
	HPMFunctionTaskUtilGetWorkflowProgression TaskUtilGetWorkflowProgression;															// Generates list of possible progression states. See @{HPMFunctionTaskUtilGetWorkflowProgression}
	HPMFunctionTaskUtilGetWorkflowProgressionFromTaskStatusChange TaskUtilGetWorkflowProgressionFromTaskStatusChange;					// Gets workflow progression for workflow based on workflow and status. See @{HPMFunctionTaskUtilGetWorkflowProgressionFromTaskStatusChange}.

	HPMFunctionTaskGetSDKInternalData TaskGetSDKInternalData;																			// Gets task SDK internal data. See @{HPMFunctionTaskGetSDKInternalData}.
	HPMFunctionTaskSetSDKInternalData TaskSetSDKInternalData;																			// Sets task SDK internal data. See @{HPMFunctionTaskSetSDKInternalData}.

	HPMFunctionTaskGetCommentSDKInternalData TaskGetCommentSDKInternalData;																// Gets task comment SDK internal data. See @{HPMFunctionTaskGetCommentSDKInternalData}.
	HPMFunctionTaskSetCommentSDKInternalData TaskSetCommentSDKInternalData;																// Sets task comment SDK internal data. See @{HPMFunctionTaskSetCommentSDKInternalData}.

	HPMFunctionTaskRefGetTask TaskRefGetTask;																							// Gets the task a task reference refers to. See @{HPMFunctionTaskRefGetTask}.
	HPMFunctionTaskRefGetContainer TaskRefGetContainer;																					// Gets the container of a task reference. See @{HPMFunctionTaskRefGetContainer}.
	HPMFunctionTaskRefEnum TaskRefEnum;																									// Enumerates task references in a container. See @{HPMFunctionTaskRefEnum}.
	HPMFunctionTaskRefConnect TaskRefConnect;																							// Connects two task references. See @{HPMFunctionTaskRefConnect}.
	HPMFunctionTaskRefGetTreeLevel TaskRefGetTreeLevel;																					// Gets the tree level of a task reference. See @{HPMFunctionTaskRefGetTreeLevel}.
	HPMFunctionTaskRefGetPreviousID TaskRefGetPreviousID;																				// Gets the previous id of a task reference. See @{HPMFunctionTaskRefGetPreviousID}.
	HPMFunctionTaskRefClearNewlyCreated TaskRefClearNewlyCreated;																		// Clears the newly created flag on a task reference. See @{HPMFunctionTaskRefClearNewlyCreated}.
	HPMFunctionTaskRefGetNewlyCreated TaskRefGetNewlyCreated;																			// Gets the newly created flag on a task reference. See @{HPMFunctionTaskRefGetNewlyCreated}.
	HPMFunctionTaskRefSetUIDHistory TaskRefSetUIDHistory;																				// Sets the unique identifier history of a task reference. See @{HPMFunctionTaskRefSetUIDHistory}.
	HPMFunctionTaskRefGetUIDHistory TaskRefGetUIDHistory;																				// Gets the unique identifier history of a task reference. See @{HPMFunctionTaskRefGetUIDHistory}.
	HPMFunctionTaskRefGetPreviousWorkPriorityID TaskRefGetPreviousWorkPriorityID;														// Gets the parent id of a task reference in the work priority list. See @{HPMFunctionTaskRefGetPreviousWorkPriorityID}.
	HPMFunctionTaskRefGetSummary TaskRefGetSummary;																						// Gets the summary of a task ref. See @{HPMFunctionTaskRefGetSummary}.
	HPMFunctionTaskRefGetMilestoneSummary TaskRefGetMilestoneSummary;																	// Gets the summary of a milestone task ref. See @{HPMFunctionTaskRefGetMilestoneSummary}.
	HPMFunctionTaskRefConnectionsEnum TaskRefConnectionsEnum;																			// Gets all task references that are connected to/from a given task ref. See @{TaskRefConnectionsEnum}.
	HPMFunctionTaskUtilSprintTaskRefEnum TaskUtilSprintTaskRefEnum;																		// Enumerates all task references that are are part of a sprint. See @{TaskUtilSprintTaskRefEnum}.
	HPMFunctionTaskUtilGetEffectiveLinkedToMilestones TaskUtilGetEffectiveLinkedToMilestones;											// Returns the effective release tags for the task. See @{TaskUtilGetEffectiveLinkedToMilestones}.

	HPMFunctionTaskRefGetSDKInternalData TaskRefGetSDKInternalData;																		// Gets task ref SDK internal data. See @{HPMFunctionTaskRefGetSDKInternalData}.
	HPMFunctionTaskRefSetSDKInternalData TaskRefSetSDKInternalData;																		// Sets task ref SDK internal data. See @{HPMFunctionTaskRefSetSDKInternalData}.
	HPMFunctionTaskRefUtilGetSubProjectPath TaskRefUtilGetSubProjectPath;																// Gets the sub project path. See @{HPMFunctionTaskRefUtilGetSubProjectPath}.
	HPMFunctionTaskRefUtilEnumChildren TaskRefUtilEnumChildren;																			// Enumerates children task references of a parent task reference. See @{HPMFunctionTaskRefUtilEnumChildren}.
	HPMFunctionTaskRefUtilEnumPipelineProgression TaskRefUtilEnumPipelineProgression;													// Enumerates not completed pipeline task references of a parent task reference. See @{HPMFunctionTaskRefUtilEnumPipelineProgression}.
	HPMFunctionTaskRefUtilGetParent TaskRefUtilGetParent;																				// Gets the parent task reference of a task reference id. See @{HPMFunctionTaskRefUtilGetParent}.
	HPMFunctionTaskRefUtilGetNext TaskRefUtilGetNext;																					// Gets the successor task reference of a task reference id. See @{HPMFunctionTaskRefUtilGetNext}.
	HPMFunctionTaskRefUtilGetNextSibling TaskRefUtilGetNextSibling;																		// Gets the successor sibling task reference of a task reference id. See @{HPMFunctionTaskRefUtilGetNextSibling}.
	HPMFunctionTaskRefUtilGetPrevSibling TaskRefUtilGetPrevSibling;																		// Gets the predecessor sibling task reference of a task reference id. See @{HPMFunctionTaskRefUtilGetPrevSibling}.
	HPMFunctionTaskRefUtilGetNextAtSameOrLowerLevel TaskRefUtilGetNextAtSameOrLowerLevel;												// Gets the successor task reference at the same or lower level as a task reference id. See @{HPMFunctionTaskRefUtilGetNextAtSameOrLowerLevel}.
	HPMFunctionTaskRefUtilGetPrevAtSameOrLowerLevel TaskRefUtilGetPrevAtSameOrLowerLevel;												// Gets the predecessor task reference at the same or lower level as a task reference id. See @{HPMFunctionTaskRefUtilGetPrevAtSameOrLowerLevel}.
	HPMFunctionTaskRefUtilMoveInTree TaskRefUtilMoveInTree;																				// Moves a task reference from one position to another in the task ref tree structure. See @{HPMFunctionTaskRefUtilMoveInTree}.
	HPMFunctionTaskRefUtilTraceTree TaskRefUtilTraceTree;																				// Traces the task tree. See @{HPMFunctionTaskRefUtilTraceTree}.
	HPMFunctionTaskRefUtilIsCompleted TaskRefUtilIsCompleted;																			// Gets the completion status of a task. See @{HPMFunctionTaskRefUtilIsCompleted}.
	HPMFunctionTaskRefUtilHasChildren TaskRefUtilHasChildren;																			// Checks if task reference has children. See @{HPMFunctionTaskRefUtilHasChildren}.
	HPMFunctionTaskRefUtilCanStartNow TaskRefUtilCanStartNow;																			// Checks if task reference has can be started now. See @{HPMFunctionTaskRefUtilCanStartNow}.
	HPMFunctionTaskUtilOneTaskRefHasChildren TaskUtilOneTaskRefHasChildren;																// Checks if any of the task refs of a task has children. See @{HPMFunctionTaskUtilOneTaskRefHasChildren}.
	HPMFunctionTaskUtilUpdateAgilePriority TaskUtilUpdateAgilePriority;																	// Updates the priority order in a project according to the agile priority status. See @{HPMFunctionTaskUtilUpdateAgilePriority}.

	HPMFunctionTaskConnectionDelete TaskConnectionDelete;																				// Deletes a task reference connection. See @{HPMFunctionTaskConnectionDelete}.
	HPMFunctionTaskConnectionSetConnectionType TaskConnectionSetConnectionType;															// Sets the type of a task reference connection. See @{HPMFunctionTaskConnectionSetConnectionType}.
	HPMFunctionTaskConnectionGetConnectionType TaskConnectionGetConnectionType;															// Gets the type of a task reference connection. See @{HPMFunctionTaskConnectionGetConnectionType}.
	HPMFunctionTaskConnectionSetLeadLagTime TaskConnectionSetLeadLagTime;																// Sets the lead/lag time of a task reference connection. See @{HPMFunctionTaskConnectionSetLeadLagTime}.
	HPMFunctionTaskConnectionGetLeadLagTime TaskConnectionGetLeadLagTime;																// Gets the lead/lag time of a task reference connection. See @{HPMFunctionTaskConnectionGetLeadLagTime}.
	HPMFunctionTaskConnectionGetConnectFrom TaskConnectionGetConnectFrom;																// Gets the from task reference of a task reference connection. See @{HPMFunctionTaskConnectionGetConnectFrom}.
	HPMFunctionTaskConnectionGetConnectTo TaskConnectionGetConnectTo;																	// Gets the to task reference of a task reference connection. See @{HPMFunctionTaskConnectionGetConnectTo}.

	HPMFunctionVersionControlRegisterCallback VersionControlRegisterCallback;															// Registers a version control change callback. See @{HPMFunctionVersionControlRegisterCallback}.
	HPMFunctionVersionControlUnregisterCallback VersionControlUnregisterCallback;														// Unregisters a version control change callback. See @{HPMFunctionVersionControlUnregisterCallback}.

	HPMFunctionVersionControlInit VersionControlInit;																					// Initializes version control functionality. See @{HPMFunctionVersionControlInit}.
	HPMFunctionVersionControlErrorToStr VersionControlErrorToStr;																		// Gets the string description for a version control error code. See @{HPMFunctionVersionControlErrorToStr}.
	HPMFunctionVersionControlEnumFiles VersionControlEnumFiles;																			// Enumerates version control files. See @{HPMFunctionVersionControlEnumFiles}.
	HPMFunctionVersionControlFileExists VersionControlFileExists;																		// Checks in a file exists in repository. See @{HPMFunctionVersionControlFileExists}.
	HPMFunctionVersionControlOperationPending VersionControlOperationPending;															// Checks if there is a pending version control command. See @{HPMFunctionVersionControlOperationPending}.
	
	HPMFunctionVersionControlGetFileInfo VersionControlGetFileInfo;																		// Gets information about a version control file. See @{HPMFunctionVersionControlGetFileInfo}.
	HPMFunctionVersionControlGetFileHistory VersionControlGetFileHistory;																// Gets version control file history. See @{HPMFunctionVersionControlGetFileHistory}.
	HPMFunctionVersionControlGetAccessRights VersionControlGetAccessRights;																// Gets access rights for a version control file. See @{HPMFunctionVersionControlGetAccessRights}.
	HPMFunctionVersionControlAddFiles VersionControlAddFiles;																			// Adds files to the version control system. See @{HPMFunctionVersionControlAddFiles}.
	HPMFunctionVersionControlCreateDirectories VersionControlCreateDirectories;															// Creates directories in the version control system. See @{HPMFunctionVersionControlCreateDirectories}.
	HPMFunctionVersionControlSyncFiles VersionControlSyncFiles;																			// Syncs version control files. See @{HPMFunctionVersionControlSyncFiles}.
	HPMFunctionVersionControlCheckOutFiles VersionControlCheckOutFiles;																	// Checks out version control files. See @{HPMFunctionVersionControlCheckOutFiles}.
	HPMFunctionVersionControlCheckInFiles VersionControlCheckInFiles;																	// Checks in version control files. See @{HPMFunctionVersionControlCheckInFiles}.
	HPMFunctionVersionControlRenameFiles VersionControlRenameFiles;																		// Renames version control files. See @{HPMFunctionVersionControlRenameFiles}.
	HPMFunctionVersionControlRevertFiles VersionControlRevertFiles;																		// Reverts version control files. See @{HPMFunctionVersionControlRevertFiles}.
	HPMFunctionVersionControlDeleteFiles VersionControlDeleteFiles;																		// Deletes version control files. See @{HPMFunctionVersionControlDeleteFiles}.
	HPMFunctionVersionControlRestoreDeletedFiles VersionControlRestoreDeletedFiles;														// Restores deleted version control files. See @{HPMFunctionVersionControlRestoreDeletedFiles}.
	HPMFunctionVersionControlDeleteVersions VersionControlDeleteVersions;																// Deletes versions on a version control file. See @{HPMFunctionVersionControlDeleteVersions}.
	HPMFunctionVersionControlRollbackFile VersionControlRollbackFile;																	// Rollbacks to a previous version of a version control file. See @{HPMFunctionVersionControlRollbackFile}.
	HPMFunctionVersionControlSetAccessRights VersionControlSetAccessRights;																// Sets access rights of a version control file. See @{HPMFunctionVersionControlSetAccessRights}.

	HPMFunctionVersionControlUtilPathToFileID VersionControlUtilPathToFileID;															// Converts a file path to a file id. See @{HPMFunctionVersionControlUtilPathToFileID}.
	HPMFunctionVersionControlUtilFileIDToPath VersionControlUtilFileIDToPath;															// Converts a file id to a file path. See @{HPMFunctionVersionControlUtilFileIDToPath}.
	HPMFunctionVersionControlUtilIsInitialized VersionControlUtilIsInitialized;															// Checks if the version control functionality is initialized. See @{HPMFunctionVersionControlUtilIsInitialized}.
	HPMFunctionVersionControlSetLocalPath VersionControlSetLocalPath;																	// Sets the local path for version control files. See @{HPMFunctionVersionControlSetLocalPath}.
	
	HPMFunctionCommunicationChannelRegister CommunicationChannelRegister;																// Registers a communication channel. See @{HPMFunctionCommunicationChannelRegister}.
	HPMFunctionCommunicationChannelUnregister CommunicationChannelUnregister;															// Unregisters a communication channel. See @{HPMFunctionCommunicationChannelUnregister}.
	HPMFunctionCommunicationChannelSendPacket CommunicationChannelSendPacket;															// Sends a packet to a communication channel. See @{HPMFunctionCommunicationChannelSendPacket}.
	HPMFunctionCommunicationChannelEnum CommunicationChannelEnum;																		// Gets channels and their associated data. See @{HPMFunctionCommunicationChannelEnum}.

	HPMFunctionChatHistoryGetHistory ChatHistoryGetHistory;																				// Gets chat data history for a chat room. See @{HPMFunctionChatHistoryGetHistory}.

	HPMFunctionDataHistoryGetHistory DataHistoryGetHistory;																				// Gets data history for an object. See @{HPMFunctionDataHistoryGetHistory}.
	HPMFunctionDataHistoryGetEntryData DataHistoryGetEntryData;																			// Gets data history entry data in a variant data format. See @{HPMFunctionDataHistoryGetEntryData}.

	HPMFunctionDataHistorySetMaxCacheEntries DataHistorySetMaxCacheEntries;																// Sets the number of data history entries that are cached on the client. See @{HPMFunctionDataHistorySetMaxCacheEntries}.

	HPMFunctionVariantDecode_HPMInt32 VariantDecode_HPMInt32;																			// Decodes variant data to the HPMInt32 format. See @{HPMFunctionVariantDecode_HPMInt32}.
	HPMFunctionVariantDecode_HPMUInt32 VariantDecode_HPMUInt32;																			// Decodes variant data to the HPMUInt32 format. See @{HPMFunctionVariantDecode_HPMUInt32}.
	HPMFunctionVariantDecode_HPMInt64 VariantDecode_HPMInt64;																			// Decodes variant data to the HPMInt64 format. See @{HPMFunctionVariantDecode_HPMInt64}.
	HPMFunctionVariantDecode_HPMUInt64 VariantDecode_HPMUInt64;																			// Decodes variant data to the HPMUInt64 format. See @{HPMFunctionVariantDecode_HPMUInt64}.
	HPMFunctionVariantDecode_HPMFP32 VariantDecode_HPMFP32;																				// Decodes variant data to the HPMFP32 format. See @{HPMFunctionVariantDecode_HPMFP32}.
	HPMFunctionVariantDecode_HPMFP64 VariantDecode_HPMFP64;																				// Decodes variant data to the HPMFP64 format. See @{HPMFunctionVariantDecode_HPMFP64}.
	HPMFunctionVariantDecode_HPMUniqueID VariantDecode_HPMUniqueID;																		// Decodes variant data to the HPMUniqueID format. See @{HPMFunctionVariantDecode_HPMUniqueID}.
	HPMFunctionVariantDecode_HPMString VariantDecode_HPMString;																			// Decodes variant data to the HPMString format. See @{HPMFunctionVariantDecode_HPMString}.
	HPMFunctionVariantDecode_HPMTaskLinkedToMilestones VariantDecode_HPMTaskLinkedToMilestones;											// Decodes variant data to the HPMTaskLinkedToMilestones format. See @{HPMFunctionVariantDecode_HPMTaskLinkedToMilestones}.
	HPMFunctionVariantDecode_HPMTaskDelegateTo VariantDecode_HPMTaskDelegateTo;															// Decodes variant data to the HPMTaskDelegateTo format. See @{HPMFunctionVariantDecode_HPMTaskDelegateTo}.
	HPMFunctionVariantDecode_HPMTaskSprintAllocatedResources VariantDecode_HPMTaskSprintAllocatedResources;								// Decodes variant data to the HPMTaskSprintAllocatedResources format. See @{HPMFunctionVariantDecode_HPMTaskSprintAllocatedResources}.
	HPMFunctionVariantDecode_HPMTaskVisibleTo VariantDecode_HPMTaskVisibleTo;															// Decodes variant data to the HPMTaskVisibleTo format. See @{HPMFunctionVariantDecode_HPMTaskVisibleTo}.
	HPMFunctionVariantDecode_HPMTaskResourceAllocation VariantDecode_HPMTaskResourceAllocation;											// Decodes variant data to the HPMTaskResourceAllocation format. See @{HPMFunctionVariantDecode_HPMTaskResourceAllocation}.
	HPMFunctionVariantDecode_HPMStatisticsMultiFrequency VariantDecode_HPMStatisticsMultiFrequency;										// Decodes variant data to the HPMStatisticsMultiFrequency format. See @{HPMFunctionVariantDecode_HPMStatisticsMultiFrequency}.
	HPMFunctionVariantDecode_HPMStatisticsCustomStatisticsFrequency VariantDecode_HPMStatisticsCustomStatisticsFrequency;				// Decodes variant data to the HPMStatisticsCustomStatisticsFrequency format. See @{HPMFunctionVariantDecode_HPMStatisticsCustomStatisticsFrequency}.

	HPMFunctionVariantDecode_HPMTaskAttachedDocuments VariantDecode_HPMTaskAttachedDocuments;											// Decodes variant data to the HPMTaskAttachedDocuments format. See @{HPMFunctionVariantDecode_HPMTaskAttachedDocuments}.
	HPMFunctionVariantDecode_HPMTaskVacationOptions VariantDecode_HPMTaskVacationOptions;												// Decodes variant data to the HPMTaskVacationOptions format. See @{HPMFunctionVariantDecode_HPMTaskVacationOptions}.
	HPMFunctionVariantDecode_HPMTaskCommentsOptions VariantDecode_HPMTaskCommentsOptions;												// Decodes variant data to the HPMTaskCommentsOptions format. See @{HPMFunctionVariantDecode_HPMTaskCommentsOptions}.
	HPMFunctionVariantDecode_HPMTaskLinkedTo VariantDecode_HPMTaskLinkedTo;																// Decodes variant data to the HPMTaskLinkedTo format. See @{HPMFunctionVariantDecode_HPMTaskLinkedTo}.
	HPMFunctionVariantDecode_HPMTaskSprintResourceAllocation VariantDecode_HPMTaskSprintResourceAllocation;								// Decodes variant data to the HPMTaskSprintResourceAllocation format. See @{HPMFunctionVariantDecode_HPMTaskSprintResourceAllocation}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskCreated VariantDecode_HPMDataHistoryTaskCreated;											// Decodes variant data to the HPMDataHistoryTaskCreated format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskCreated}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskRestoredFromHistory VariantDecode_HPMDataHistoryTaskRestoredFromHistory;					// Decodes variant data to the HPMDataHistoryTaskRestoredFromHistory format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskRestoredFromHistory}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskMoved VariantDecode_HPMDataHistoryTaskMoved;												// Decodes variant data to the HPMDataHistoryTaskMoved format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskMoved}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskRenameCustomColumn VariantDecode_HPMDataHistoryTaskRenameCustomColumn;					// Decodes variant data to the HPMDataHistoryTaskRenameCustomColumn format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskRenameCustomColumn}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskProxyCreated VariantDecode_HPMDataHistoryTaskProxyCreated;								// Decodes variant data to the HPMDataHistoryTaskProxyCreated format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskProxyCreated}.
	HPMFunctionVariantDecode_HPMDataHistoryTaskProxyDeleted VariantDecode_HPMDataHistoryTaskProxyDeleted;								// Decodes variant data to the HPMDataHistoryTaskProxyDeleted format. See @{HPMFunctionVariantDecode_HPMDataHistoryTaskProxyDeleted}.
	HPMFunctionVariantDecode_HPMTaskTimeZones VariantDecode_HPMTaskTimeZones;															// Decodes variant data to the HPMTaskTimeZones format. See @{HPMFunctionVariantDecode_HPMTaskTimeZones}.
	HPMFunctionVariantDecode_HPMChatMessage VariantDecode_HPMChatMessage;																// Decodes variant data to the HPMChatMessage format. See @{HPMFunctionVariantDecode_HPMChatMessage}.
	HPMFunctionVariantDecode_HPMProjectCustomColumns VariantDecode_HPMProjectCustomColumns;												// Decodes variant data to the HPMProjectCustomColumns format. See @{HPMFunctionVariantDecode_HPMProjectCustomColumns}.
	HPMFunctionVariantDecode_HPMProjectCustomColumnsColumn VariantDecode_HPMProjectCustomColumnsColumn;									// Decodes variant data to the HPMProjectCustomColumnsColumn format. See @{HPMFunctionVariantDecode_HPMProjectCustomColumnsColumn}.
	HPMFunctionVariantDecode_HPMProjectWorkflowSettings VariantDecode_HPMProjectWorkflowSettings;										// Decodes variant data to the HPMProjectWorkflowSettings format. See @{HPMFunctionVariantDecode_HPMProjectWorkflowSettings}.
	HPMFunctionVariantDecode_HPMHolidays VariantDecode_HPMHolidays;																		// Decodes variant data to the HPMHolidays format. See @{HPMFunctionVariantDecode_HPMHolidays}.
	HPMFunctionVariantDecode_HPMWorkingDays VariantDecode_HPMWorkingDays;																// Decodes variant data to the HPMWorkingDays format. See @{HPMFunctionVariantDecode_HPMWorkingDays}.
	HPMFunctionVariantDecode_HPMCustomWorkingDays VariantDecode_HPMCustomWorkingDays;													// Decodes variant data to the HPMCustomWorkingDays format. See @{HPMFunctionVariantDecode_HPMCustomWorkingDays}.
	HPMFunctionVariantDecode_HPMWorkingHours VariantDecode_HPMWorkingHours;																// Decodes variant data to the HPMWorkingHours format. See @{HPMFunctionVariantDecode_HPMWorkingHours}.
	HPMFunctionVariantDecode_HPMCustomWorkingHours VariantDecode_HPMCustomWorkingHours;													// Decodes variant data to the HPMCustomWorkingHours format. See @{HPMFunctionVariantDecode_HPMCustomWorkingHours}.
	HPMFunctionVariantDecode_HPMProjectDefaultColumns VariantDecode_HPMProjectDefaultColumns;											// Decodes variant data to the HPMProjectDefaultColumns format. See @{HPMFunctionVariantDecode_HPMProjectDefaultColumns}.

	HPMFunctionVariantEncode_HPMInt32 VariantEncode_HPMInt32;																			// Encodes HPMInt32 data to a variant format. See @{HPMFunctionVariantEncode_HPMInt32}.
	HPMFunctionVariantEncode_HPMUInt32 VariantEncode_HPMUInt32;																			// Encodes HPMUInt32 data to a variant format. See @{HPMFunctionVariantEncode_HPMUInt32}.
	HPMFunctionVariantEncode_HPMInt64 VariantEncode_HPMInt64;																			// Encodes HPMInt64 data to a variant format. See @{HPMFunctionVariantEncode_HPMInt64}.
	HPMFunctionVariantEncode_HPMUInt64 VariantEncode_HPMUInt64;																			// Encodes HPMUInt64 data to a variant format. See @{HPMFunctionVariantEncode_HPMUInt64}.
	HPMFunctionVariantEncode_HPMFP32 VariantEncode_HPMFP32;																				// Encodes HPMFP32 data to a variant format. See @{HPMFunctionVariantEncode_HPMFP32}.
	HPMFunctionVariantEncode_HPMFP64 VariantEncode_HPMFP64;																				// Encodes HPMFP64 data to a variant format. See @{HPMFunctionVariantEncode_HPMFP64}.
	HPMFunctionVariantEncode_HPMUniqueID VariantEncode_HPMUniqueID;																		// Encodes HPMUniqueID data to a variant format. See @{HPMFunctionVariantEncode_HPMUniqueID}.
	HPMFunctionVariantEncode_HPMString VariantEncode_HPMString;																			// Encodes HPMString data to a variant format. See @{HPMFunctionVariantEncode_HPMString}.
	HPMFunctionVariantEncode_HPMUntranslatedString VariantEncode_HPMUntranslatedString;													// Encodes HPMUntranslatedString data to a variant format. See @{HPMFunctionVariantEncode_HPMUntranslatedString}.

	HPMFunctionVariantEncode_EHPMTaskStatus VariantEncode_EHPMTaskStatus;																// Encodes a EHPMTaskStatus status to a variant format. See @{HPMFunctionVariantEncode_EHPMTaskStatus}.

	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeText CriteriaDataDecode_HPMTaskFindCriteriaTypeText;							// Decodes criteria data to the HPMTaskFindCriteriaTypeText format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeText}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeInteger CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger;						// Decodes criteria data to the HPMTaskFindCriteriaTypeInteger format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeInteger}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeFloat CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat;							// Decodes criteria data to the HPMTaskFindCriteriaTypeFloat format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeFloat}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition;	// Decodes criteria data to the HPMTaskFindCriteriaTypeGeneralCondition format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDate CriteriaDataDecode_HPMTaskFindCriteriaTypeDate;							// Decodes criteria data to the HPMTaskFindCriteriaTypeDate format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDate}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist;					// Decodes criteria data to the HPMTaskFindCriteriaTypeDroplist format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist}.
	HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist;		// Decodes criteria data to the HPMTaskFindCriteriaTypeMultiSelectDroplist format. See @{HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeText CriteriaDataEncode_HPMTaskFindCriteriaTypeText;							// Encodes criteria data to the HPMTaskFindCriteriaTypeText format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeText}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeInteger CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger;						// Encodes criteria data to the HPMTaskFindCriteriaTypeInteger format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeInteger}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeFloat CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat;							// Encodes criteria data to the HPMTaskFindCriteriaTypeFloat format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeFloat}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition;	// Encodes criteria data to the HPMTaskFindCriteriaTypeGeneralCondition format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDate CriteriaDataEncode_HPMTaskFindCriteriaTypeDate;							// Encodes criteria data to the HPMTaskFindCriteriaTypeDate format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDate}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist;					// Encodes criteria data to the HPMTaskFindCriteriaTypeDroplist format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist}.
	HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist;		// Encodes criteria data to the HPMTaskFindCriteriaTypeMultiSelectDroplist format. See @{HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist}.

	HPMFunctionAuthenticationClientPluginRegister AuthenticationClientPluginRegister;													// Registers a client authentication method. See @{HPMFunctionAuthenticationClientPluginRegister}.
	HPMFunctionAuthenticationClientPluginUnregister AuthenticationClientPluginUnregister;												// Unregisters a client authentication method. See @{HPMFunctionAuthenticationClientPluginUnregister}.
	HPMFunctionAuthenticationClientProtocolEnded AuthenticationClientProtocolEnded;														// Notification from SDK Plugin to Client that an authentication protocol has ended
	HPMFunctionAuthenticationIntegrationProtocolEnded AuthenticationIntegrationProtocolEnded;											// Notification from Integration SDK Client to Server that an authentication protocol has ended
	HPMFunctionAuthenticationResolveCredentials AuthenticationResolveCredentials;														// Checks if user credentials are valid or not.
	HPMFunctionAuthenticationResolveCredentialsEnded AuthenticationResolveCredentialsEnded;												// Notification from Integration SDK Client to Server that an credentials check has ended

	HPMFunctionUtilGetColumnHash UtilGetColumnHash;																						// Gets the column hash from a set of column properties. See @{HPMFunctionUtilGetColumnHash}.
	HPMFunctionUtilIsIDValid UtilIsIDValid;																								// Checks if a unique identifier exists in the database. See @{HPMFunctionUtilIsIDValid}.
	HPMFunctionUtilIsIDTask UtilIsIDTask;																								// Checks if a unique identifier points to a task. See @{HPMFunctionUtilIsIDTask}.
	HPMFunctionUtilIsIDTaskRef UtilIsIDTaskRef;																							// Checks if a unique identifier points to a task ref. See @{HPMFunctionUtilIsIDTaskRef}.
	HPMFunctionUtilIsIDProject UtilIsIDProject;																							// Checks if a unique identifier points to a project. See @{HPMFunctionUtilIsIDProject}.
	HPMFunctionUtilIsIDBacklogProject UtilIsIDBacklogProject;																			// Checks if a unique identifier points to a backlog project. See @{HPMFunctionUtilIsIDBacklogProject}.
	HPMFunctionUtilIsIDQAProject UtilIsIDQAProject;																						// Checks if a unique identifier points to a QA project. See @{HPMFunctionUtilIsIDQAProject}.
	HPMFunctionUtilIsIDResource UtilIsIDResource;																						// Checks if a unique identifier points to a resource. See @{HPMFunctionUtilIsIDResource}.
	HPMFunctionUtilDecodeCustomChoiceValue UtilDecodeCustomChoiceValue;																	// Decodes a custom choice value. See @{HPMFunctionUtilDecodeCustomChoiceValue}.
	HPMFunctionUtilDecodeCustomColumnResourcesValue UtilDecodeCustomColumnResourcesValue;												// Decodes a custom column resource value. See @{HPMFunctionUtilDecodeCustomColumnResourcesValue}.
	HPMFunctionUtilEncodeCustomColumnResourcesValue UtilEncodeCustomColumnResourcesValue;												// Encodes a custom column resource value. See @{HPMFunctionUtilEncodeCustomColumnResourcesValue}.
	HPMFunctionUtilDecodeCustomColumnDateTimeValue UtilDecodeCustomColumnDateTimeValue;													// Decodes a custom column DateTime value. See @{HPMFunctionUtilDecodeCustomColumnDateTimeValue}.
	HPMFunctionUtilEncodeCustomColumnDateTimeValue UtilEncodeCustomColumnDateTimeValue;													// Encodes a custom column DateTime value. See @{HPMFunctionUtilEncodeCustomColumnDateTimeValue}.

	HPMFunctionUtilGetRealProjectIDFromProjectID UtilGetRealProjectIDFromProjectID;														// Gets the unique identifier of the real project. See @{HPMFunctionUtilGetRealProjectIDFromProjectID}.
	HPMFunctionUtilGetLastErrorDescription UtilGetLastErrorDescription;																	// Gets the last error description. See @{HPMFunctionUtilGetLastErrorDescription}.
	HPMFunctionUtilGetHansoftURL UtilGetHansoftURL;																						// Gets the Hansoft URL. See @{HPMFunctionUtilGetHansoftURL}.
	HPMFunctionUtilGetFindCriteriaDataTypeFromData UtilGetFindCriteriaDataTypeFromData;													// Gets the criteria data type of a criteria data. See @{HPMFunctionUtilGetFindCriteriaDataTypeFromData}.
	HPMFunctionUtilGetFindCriteriaDataTypeFromColumn UtilGetFindCriteriaDataTypeFromColumn;												// Gets the criteria data type of a column. See @{HPMFunctionUtilGetFindCriteriaDataTypeFromColumn}.
	HPMFunctionUtilConvertFindStringToReport UtilConvertFindStringToReport;																// Converts a text string into a report. See @{HPMFunctionUtilConvertFindStringToReport}.
	HPMFunctionUtilConvertReportToFindString UtilConvertReportToFindString;																// Converts a report to a text string. See @{HPMFunctionUtilConvertReportToFindString}.
	HPMFunctionUtilGetColumnName UtilGetColumnName;																						// Gets the name of a column as a string. See @{HPMFunctionUtilGetColumnName}.
	HPMFunctionUtilGetColumnDescription UtilGetColumnDescription;																		// Gets the description of a column. See @{HPMFunctionUtilGetColumnDescription}.
	HPMFunctionUtilColumnToTaskField UtilColumnToTaskField;																				// Converts a column to a taskfield. See @{HPMFunctionUtilColumnToTaskField}.
	HPMFunctionUtilTaskFieldToColumn UtilTaskFieldToColumn;																				// Converts a taskfield to a column. See @{HPMFunctionUtilTaskFieldToColumn}.	
	HPMFunctionUtilGetColumnDataItemFormatted UtilGetColumnDataItemFormatted;															// Gets the formatted string version of data in a column. See @{HPMFunctionUtilGetColumnDataItemFormatted}.
	HPMFunctionUtilIsColumnReadOnly UtilIsColumnReadOnly;																				// Checks if a column is read only. See @{HPMFunctionUtilIsColumnReadOnly}.
	HPMFunctionUtilGetColumnData UtilGetColumnData;																						// Gets the possible data values for a list column. See @{HPMFunctionUtilGetColumnData}.
	HPMFunctionLocalizationGetLanguages LocalizationGetLanguages;																		// Gets all the languages that are available to the application. See @{HPMFunctionLocalizationGetLanguages}.
	HPMFunctionLocalizationGetLanguageName LocalizationGetLanguageName;																	// Gets the string representation of a language. See @{HPMFunctionLocalizationGetLanguageName}.
	HPMFunctionUtilGetResourceUndeleteTimeOut UtilGetResourceUndeleteTimeOut;															// Gets the time that needs to pass before a resource can be undeleted. See @{HPMFunctionUtilGetResourceUndeleteTimeOut}.
	HPMFunctionUtilGetWorkflowObjectName UtilGetWorkflowObjectName;																		// Gets the name of a pipeline, workflow status or transition etc. See @{HPMFunctionUtilGetWorkflowObjectName}.
	HPMFunctionUtilGetWorkflowObjectIDFromName UtilGetWorkflowObjectIDFromName;															// Gets the object ID of a pipeline, workflow status or transition etc. See @{HPMFunctionUtilGetWorkflowObjectIDFromName}.
	HPMFunctionUtilGetWorkflowName UtilGetWorkflowName;																					// Gets the name of a pipeline or workflow. See @{HPMFunctionUtilGetWorkflowName}.
	HPMFunctionUtilGetWorkflowIDFromName UtilGetWorkflowIDFromName;																		// Gets the ID of a pipeline or workflow. See @{HPMFunctionUtilGetWorkflowIDFromName}.
	HPMFunctionUtilGetWorkflowType UtilGetWorkflowType;																					// Gets the type of a pipeline or workflow. See @{HPMFunctionUtilGetWorkflowType}.
	HPMFunctionUtilGetWorkflowContainerFlags UtilGetWorkflowContainerFlags;																// Gets the type pipeline or workflow container flags. See @{HPMFunctionUtilGetWorkflowContainerFlags}.
	HPMFunctionUtilTaskCommentExists UtilTaskCommentExists;																				// Checks if a comment exists on a task. See @{HPMFunctionUtilTaskCommentExists}.
	HPMFunctionUtilGlobalReportExists UtilGlobalReportExists;																			// Checks if a global report exsits. See @{HPMFunctionUtilGlobalReportExists}.
	HPMFunctionUtilProjectReportExists UtilProjectReportExists;																			// Checks if a project report exists. See @{HPMFunctionUtilProjectReportExists}.
	HPMFunctionUtilWorkflowObjectExists UtilWorkflowObjectExists;																		// Checks if a workflow object exists. See @{HPMFunctionUtilWorkflowObjectExists}.
	HPMFunctionUtilWorkflowExists UtilWorkflowExists;																					// Checks if a workflow exists. See @{HPMFunctionUtilWorkflowExists}.

	HPMFunctionDebugCheckHeap DebugCheckHeap;																							// Checks the integrity of the heap. See @{HPMFunctionDebugCheckHeap}.

	HPMFunctionLocalizationTranslateString LocalizationTranslateString;																	// Translates an untranslated string. See @{HPMFunctionLocalizationTranslateString}.
	HPMFunctionLocalizationGetDefaultLanguage LocalizationGetDefaultLanguage;															// Gets the default langue. Currently this is UK english. See @{HPMFunctionLocalizationGetDefaultLanguage}.

	HPMFunctionLocalizationCreateUntranslatedStringFromString LocalizationCreateUntranslatedStringFromString;							// Encodes a string into an untranslated string. See @{HPMFunctionLocalizationCreateUntranslatedStringFromString}.
	HPMFunctionLocalizationCreateUntranslatedStringFromTranslationID LocalizationCreateUntranslatedStringFromTranslationID;				// Encodes a translation id into an untranslated string. See @{HPMFunctionLocalizationCreateUntranslatedStringFromTranslationID}.
	HPMFunctionLocalizationGetTranslationIDFromFullTranslationID LocalizationGetTranslationIDFromFullTranslationID;						// Converts a full translation ID into a translation ID. See @{HPMFunctionLocalizationGetTranslationIDFromFullTranslationID}.

	HPMFunctionSessionLock SessionLock;																									// Locks the session from receiving updates from server. See @{HPMFunctionSessionLock}.

} HPMSdkFunctions;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Initializes the SDK structure.												|
|																									|
|	Return Value:		Returns one of the folloing errors codes. See @{EHPMError} for more info.	|
|																									|
|		List:							Error~25, Description										|
|			@{EHPMError}_NoError:		No error occurred.											|
|			@{EHPMError}_DllNotFound:	The SDK dll could not be found in the current path.			|
|			@{EHPMError}_DllInvalid:	The SDK dll did not contain the expected functions. This	|
|										could be due to an old dll being used with a new SDK		|
|										header file.												|
|																									|
|	Comments:			You only need one HPMSdkFunctions instance for several sessions, but you	|
|						can also have several HPMSdkFunctions instances if that is more convenient.	|
|																									|
|						For the managed and C++ wrappers, see @{SessionOpen}.						|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMDestroy}, @{EHPMError}								|
|																									|
|	Location:			Reference/1 - Main Interface/Functions										|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/

HPMError HPMInit(HPMSdkFunctions *_pSdkFunctions,			// Pointer to the @{HPMSdkFunctions} to be initialized.
				 const HPMClientSDKData *_pClientSDKData,	// Pointer to a @{HPMClientSDKData}. This member should be NULL if you aren't using the SDK as a client plugin.
				 const HPMSystemChar *_pLibraryPath				// Absolute path to the directory where the SDK DLL's are located. If not set the application will look for the DLL's according to Windows DLL search order. Not used for client plugins.
				 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unloads the SDK dll.														|
|																									|
|	Comments:			Make sure you have closed all sessions before you call this function.		|
|																									|
|						The managed and C++ wrappers use SessionDestroy instead.					|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMInit}												|
|																									|
|	Location:			Reference/1 - Main Interface/Functions										|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/

void HPMDestroy(HPMSdkFunctions *_pSdkFunctions // Pointer to the @{HPMSdkFunctions} to be destroyed.
				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a descriptive string from an error code.								|
|																									|
|	Return Value:		Returns a pointer to a string describing the error.							|
|																									|
|	See Also:			@{EHPMError}																|
|																									|
|	Location:			Reference/1 - Main Interface/Functions										|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/

const char *HPMErrorToStr(HPMError _Error // The error to get the description of. Must be one of @{EHPMError}.
							 );

#endif

#ifdef __cplusplus
}
#endif

#endif // DInc_HPMSdk_H
