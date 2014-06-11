
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			HPMSdk.c: function import stub for SDK Plugins and Integration Launcher  	|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Erik Olofsson, 2007															|
|																								|																								|
|	Comments:		Implements the HPMInit function, that Plugins and the loader use to		 	|
|					initialize the SDK for use.													|
|																								|
|	History:																					|
|		020128:		Created File																|
\*_____________________________________________________________________________________________*/

#include <wchar.h>

#include "HPMSdk.h"

// List of function names whose addresses are obtained
static char const*g_HPMExportedFunctions[] = {
	"HPMSdk_SessionOpen",
	"HPMSdk_SessionStop",
	"HPMSdk_SessionClose",
	"HPMSdk_SessionProcess",
	"HPMSdk_SessionGetInfo",
	"HPMSdk_RegisterChangeCallback",
	"HPMSdk_UnregisterChangeCallback",
	"HPMSdk_ObjectFree",
	"HPMSdk_ObjectAddRef",
	"HPMSdk_ObjectGetRef",
	"HPMSdk_ObjectCompare",
	"HPMSdk_MemoryFree",

	"HPMSdk_SessionOpenVirtual",
	"HPMSdk_SessionSetConnectionLostTimeout",
	"HPMSdk_SessionGetDisconnectReason",

	"HPMSdk_GlobalSetStatisticsSettings",
	"HPMSdk_GlobalGetStatisticsSettings",

	"HPMSdk_GlobalSetServerInternetName",
	"HPMSdk_GlobalGetServerInternetName",

	"HPMSdk_GlobalGetDatabaseGUIDs",	

	"HPMSdk_GlobalRegisterCustomSettings",
	"HPMSdk_GlobalUnregisterCustomSettings",
	"HPMSdk_GlobalGetCustomSettingsIdentifierHash",
	"HPMSdk_GlobalGetRegisteredCustomSettings",
	"HPMSdk_GlobalGetCustomSettingsValue",
	"HPMSdk_GlobalSetCustomSettingsValue",
	"HPMSdk_GlobalRegisterForDynamicCustomSettingsNotifications",
	"HPMSdk_GlobalRegisterForRightClickNotifications",
	"HPMSdk_GlobalAddRightClickMenuItem",
	"HPMSdk_GlobalDisplayCustomSettingsDialog",
	"HPMSdk_GlobalCancelCustomSettingsDialog",
	"HPMSdk_GlobalRegisterForCustomTaskStatusNotifications",
	"HPMSdk_GlobalDisplayCustomTaskStatusDialog",
	"HPMSdk_GlobalCancelCustomTaskStatusDialog",
	"HPMSdk_GlobalAddTasksCustomTaskStatusDialog",

	"HPMSdk_GlobalRequestDynamicCustomSettingsValues",
	"HPMSdk_GlobalSetDynamicCustomSettingsValues",

	"HPMSdk_GlobalGetSDKInternalDataIdentifierHash",	
	"HPMSdk_GlobalGetSDKInternalData",
	"HPMSdk_GlobalSetSDKInternalData",

	"HPMSdk_GlobalWorkflowsRemoveDeleted",

	"HPMSdk_GlobalGetReport",
	"HPMSdk_GlobalGetReports",
	"HPMSdk_GlobalSetReports",

	"HPMSdk_GlobalSetDocumentAttachmentLimit",
	"HPMSdk_GlobalGetDocumentAttachmentLimit",
	"HPMSdk_GlobalSetCommentThumbnailDimensionInPixels",
	"HPMSdk_GlobalGetCommentThumbnailDimensionInPixels",

	"HPMSdk_GlobalGetChatMessageLastID",

	"HPMSdk_GlobalSetTimesheetConfig",
	"HPMSdk_GlobalGetTimesheetConfig",

	"HPMSdk_GlobalSetEmailSettings",
	"HPMSdk_GlobalGetEmailSettings",
	
	"HPMSdk_ResourceCreate",
	"HPMSdk_ResourceDelete",
	"HPMSdk_ResourceImpersonate",
	"HPMSdk_ResourceEnum",
	"HPMSdk_ResourceGetProperties",
	"HPMSdk_ResourceSetProperties",
	"HPMSdk_ResourceGetGlobalSettings",
	"HPMSdk_ResourceSetGlobalSettings",
	"HPMSdk_ResourceGetCustomSettingsValue",
	"HPMSdk_ResourceSetCustomSettingsValue",

	"HPMSdk_ResourceGetSDKInternalData",
	"HPMSdk_ResourceSetSDKInternalData",

	"HPMSdk_ResourceGroupCreate",
	"HPMSdk_ResourceGroupDelete",
	"HPMSdk_ResourceGroupEnum",
	"HPMSdk_ResourceGroupGetProperties",
	"HPMSdk_ResourceGroupSetProperties",

	"HPMSdk_ResourceGetLoggedIn",
	"HPMSdk_ResourceGroupGetResources",
	"HPMSdk_ResourceGetResourceFromName",
	"HPMSdk_ResourceGetNameFromResource",
	"HPMSdk_ResourceGroupGetNameFromResourceGroup",
	"HPMSdk_ResourceGroupUtilResourceGroupExists",
	"HPMSdk_ResourceGetImpersonate",
	"HPMSdk_ResourceGetLockFlags",
	"HPMSdk_ResourceChangeLockFlags",

	"HPMSdk_ResourceSetPreferredLanguage",
	"HPMSdk_ResourceGetPreferredLanguage",
	"HPMSdk_ResourceSetLastUsedLanguage",
	"HPMSdk_ResourceGetLastUsedLanguage",
	"HPMSdk_ResourceGetEffectiveLanguage",
	"HPMSdk_ResourceGetDeletedDate",
	"HPMSdk_ResourceGetUndeletedDate",
	"HPMSdk_ResourceTimesheetPeriodDataDelete",
	"HPMSdk_ResourceUtilCanBeDeleted",
	"HPMSdk_ResourceUtilExpandResources",

	"HPMSdk_ResourceSetChatOnlineStatus",
	"HPMSdk_ResourceGetChatOnlineStatus",
	"HPMSdk_ResourceSetDoNotDisturb",
	"HPMSdk_ResourceGetDoNotDisturb",
	"HPMSdk_ResourceSendChatMessage",
	"HPMSdk_ResourceSetLastReadChatID",
	"HPMSdk_ResourceGetLastReadChatID",

	"HPMSdk_ResourceUploadAvatar",

	"HPMSdk_ResourceGetTimesheetDay",
	"HPMSdk_TimesheetRowSetActivityID",
	"HPMSdk_TimesheetRowSetProjectID",
	"HPMSdk_TimesheetRowSetTaskID",
	"HPMSdk_TimesheetRowSetStartedTime",
	"HPMSdk_TimesheetRowSetDurationTime",
	"HPMSdk_TimesheetRowSetComment",
	"HPMSdk_TimesheetRowDelete",
	"HPMSdk_TimesheetGetDateRange",

	"HPMSdk_ProjectCreate",
	"HPMSdk_ProjectDelete",
	"HPMSdk_ProjectEnum",
	"HPMSdk_ProjectEnumNonArchived",
	"HPMSdk_ProjectGetProperties",
	"HPMSdk_ProjectSetProperties",
	"HPMSdk_ProjectGetSettings",
	"HPMSdk_ProjectSetSettings",
	"HPMSdk_ProjectGetEmailSettings",
	"HPMSdk_ProjectSetEmailSettings",
	"HPMSdk_ProjectGetHistoryAutoSaveSettings",
	"HPMSdk_ProjectSetHistoryAutoSaveSettings",
	"HPMSdk_ProjectGetCompletionStyle",
	"HPMSdk_ProjectWorkflowEnum",
	"HPMSdk_ProjectWorkflowEnumWorkflow",
	"HPMSdk_ProjectWorkflowEnumObject",
	"HPMSdk_ProjectWorkflowCreate",
	"HPMSdk_ProjectWorkflowDelete",
	"HPMSdk_ProjectWorkflowGetObject",
	"HPMSdk_ProjectWorkflowGetSettings",
	"HPMSdk_ProjectWorkflowSetSettings",
	"HPMSdk_ProjectWorkflowSetLatestVersion",
	"HPMSdk_ProjectWorkflowGetNewestVersion",
	"HPMSdk_ProjectGetStatisticsSettings",
	"HPMSdk_ProjectSetStatisticsSettings",
	"HPMSdk_ProjectGetWallSettings",
	"HPMSdk_ProjectSetWallSettings",
	"HPMSdk_ProjectGetKanbanWallSettings",
	"HPMSdk_ProjectSetKanbanWallSettings",
	"HPMSdk_ProjectGetWallGroups",
	"HPMSdk_ProjectSetWallGroups",
	"HPMSdk_ProjectGetDetailedAccessRules",
	"HPMSdk_ProjectSetDetailedAccessRules",
	"HPMSdk_ProjectGetReport",
	"HPMSdk_ProjectGetReports",
	"HPMSdk_ProjectSetReports",
	"HPMSdk_ProjectEnumReportResources",
	"HPMSdk_ProjectGetCustomStatisticsSettings",
	"HPMSdk_ProjectSetCustomStatisticsSettings",
	"HPMSdk_ProjectGetWorkflowStatusStats",
	"HPMSdk_ProjectUtilGetWorkflowProgression",

	"HPMSdk_ProjectCustomColumnsGet",
	"HPMSdk_ProjectCustomColumnsSet",
	"HPMSdk_ProjectCustomColumnsCreate",
	"HPMSdk_ProjectCustomColumnsDeleteTaskData",
	"HPMSdk_ProjectCustomColumnsRenameTaskData",
	"HPMSdk_ProjectGetDefaultActivatedColumns",
	"HPMSdk_ProjectSetDefaultActivatedColumns",
	"HPMSdk_ProjectOpenBacklogProject",
	"HPMSdk_ProjectOpenQAProject",
	"HPMSdk_ProjectGetCustomSettingsValue",
	"HPMSdk_ProjectSetCustomSettingsValue",

	"HPMSdk_ProjectGetSDKInternalData",
	"HPMSdk_ProjectSetSDKInternalData",

	"HPMSdk_ProjectUtilGetWorkflowStructure",

	"HPMSdk_ProjectResourceAdd",
	"HPMSdk_ProjectResourceRemove",
	"HPMSdk_ProjectResourceEnum",
	"HPMSdk_ProjectResourceGetProperties",
	"HPMSdk_ProjectResourceSetProperties",
	"HPMSdk_ProjectResourceGetCustomSettingsValue",
	"HPMSdk_ProjectResourceSetCustomSettingsValue",

	"HPMSdk_ProjectResourceGetSDKInternalData",
	"HPMSdk_ProjectResourceSetSDKInternalData",

	"HPMSdk_ProjectResourceUtilIsMember",

	"HPMSdk_ProjectViewPresetApply",

	"HPMSdk_ProjectUtilGetBacklog",
	"HPMSdk_ProjectUtilGetQA",
	"HPMSdk_ProjectUtilIsArchived",

	"HPMSdk_ProjectGetAgilePriorityCustomColumn",
	"HPMSdk_ProjectSetAgilePriorityCustomColumn",
	"HPMSdk_ProjectGetCustomColumn",
	"HPMSdk_ProjectGetOldCustomColumn",
	"HPMSdk_ProjectGetDefaultActivatedNonHidableColumns",
	"HPMSdk_ProjectGetDefaultAvailableColumns",

	"HPMSdk_ProjectCalendarGetWorkingDays",
	"HPMSdk_ProjectCalendarSetWorkingDays",
	"HPMSdk_ProjectCalendarGetCustomWorkingDays",
	"HPMSdk_ProjectCalendarSetCustomWorkingDays",
	"HPMSdk_ProjectCalendarGetWorkingHours",
	"HPMSdk_ProjectCalendarSetWorkingHours",
	"HPMSdk_ProjectCalendarGetCustomWorkingHours",
	"HPMSdk_ProjectCalendarSetCustomWorkingHours",
	"HPMSdk_ProjectCalendarGetHolidays",
	"HPMSdk_ProjectCalendarSetHolidays",
	"HPMSdk_ProjectGetCalendarDayInfo",

	"HPMSdk_ProjectGetViewPresets",
	"HPMSdk_ProjectSetViewPresets",

	"HPMSdk_ProjectSetTimesheetLock",

	"HPMSdk_ProjectDisplayUserMessage",

	"HPMSdk_TaskCreateUnified",
	"HPMSdk_TaskMoveProject",
	"HPMSdk_TaskDelete",
	"HPMSdk_TaskEnum",
	"HPMSdk_TaskEnumConnections",
	"HPMSdk_TaskEnumReferences",
	"HPMSdk_TaskChangeDisposition",
	"HPMSdk_TaskGetMainReference",
	"HPMSdk_TaskGetProxy",
	"HPMSdk_TaskGetContainer",
	"HPMSdk_TaskEnumCustomColumnData",
	"HPMSdk_TaskEnumComments",
	"HPMSdk_TaskSetBacklogCategory",
	"HPMSdk_TaskGetBacklogCategory",
	"HPMSdk_TaskSetColor",
	"HPMSdk_TaskGetColor",
	"HPMSdk_TaskSetWallItemColor",
	"HPMSdk_TaskGetWallItemColor",
	"HPMSdk_TaskSetComplexityPoints",
	"HPMSdk_TaskGetComplexityPoints",
	"HPMSdk_TaskSetConfidence",
	"HPMSdk_TaskGetConfidence",
	"HPMSdk_TaskSetEstimatedIdealDays",
	"HPMSdk_TaskGetEstimatedIdealDays",
	"HPMSdk_TaskSetRisk",
	"HPMSdk_TaskGetRisk",
	"HPMSdk_TaskSetStartOffset",
	"HPMSdk_TaskGetStartOffset",
	"HPMSdk_TaskSetDuration",
	"HPMSdk_TaskGetDuration",
	"HPMSdk_TaskSetForceSubProject",
	"HPMSdk_TaskGetForceSubProject",
	"HPMSdk_TaskSetBudgetedWork",
	"HPMSdk_TaskGetBudgetedWork",
	"HPMSdk_TaskGetLockedType",
	"HPMSdk_TaskSetPercentComplete",
	"HPMSdk_TaskGetPercentComplete",
	"HPMSdk_TaskSetStatus",
	"HPMSdk_TaskGetStatus",
	"HPMSdk_TaskGetType",
	"HPMSdk_TaskSetVacationOptions",
	"HPMSdk_TaskGetVacationOptions",
	"HPMSdk_TaskCreateComment",
	"HPMSdk_TaskDeleteComment",
	"HPMSdk_TaskNotifyCommentPosted",
	"HPMSdk_TaskSetComment",
	"HPMSdk_TaskGetComment",
	"HPMSdk_TaskSetDescription",
	"HPMSdk_TaskGetDescription",
	"HPMSdk_TaskSetHyperlink",
	"HPMSdk_TaskGetHyperlink",
	"HPMSdk_TaskSetCommentsOptions",
	"HPMSdk_TaskGetCommentsOptions",
	"HPMSdk_TaskSetLockedBy",
	"HPMSdk_TaskGetLockedBy",
	"HPMSdk_TaskSetOriginallyCreatedBy",
	"HPMSdk_TaskGetOriginallyCreatedBy",
	"HPMSdk_TaskSetCustomColumnData",
	"HPMSdk_TaskGetCustomColumnData",
	"HPMSdk_TaskSetLastResourceCommentReadTime",
	"HPMSdk_TaskGetLastResourceCommentReadTime",
	"HPMSdk_TaskSetAttachedDocuments",
	"HPMSdk_TaskGetAttachedDocuments",
	"HPMSdk_TaskSetDelegateTo",
	"HPMSdk_TaskGetDelegateTo",
	"HPMSdk_TaskSetResourceAllocation",
	"HPMSdk_TaskGetResourceAllocation",
	"HPMSdk_TaskSetSprintAllocatedResources",
	"HPMSdk_TaskGetSprintAllocatedResources",
	"HPMSdk_TaskSetSprintResourceAllocation",
	"HPMSdk_TaskGetSprintResourceAllocation",
	"HPMSdk_TaskSetCompleted",
	"HPMSdk_TaskGetCompleted",
	"HPMSdk_TaskSetTimeZones",
	"HPMSdk_TaskGetTimeZones",
	"HPMSdk_TaskGetTotalDuration",
	"HPMSdk_TaskSetVisibleTo",
	"HPMSdk_TaskGetVisibleTo",
	"HPMSdk_TaskSetWorkRemaining",
	"HPMSdk_TaskGetWorkRemaining",
	"HPMSdk_TaskSetWorkRemainingHistory",
	"HPMSdk_TaskGetWorkRemainingHistory",
	"HPMSdk_TaskEnumWorkRemainingHistoryDays",
	"HPMSdk_TaskSetIdealDaysHistory",
	"HPMSdk_TaskGetIdealDaysHistory",
	"HPMSdk_TaskEnumIdealDaysHistoryDays",
	"HPMSdk_TaskSetPointsHistory",
	"HPMSdk_TaskGetPointsHistory",
	"HPMSdk_TaskEnumPointsHistoryDays",
	"HPMSdk_TaskSetSeverity",
	"HPMSdk_TaskGetSeverity",
	"HPMSdk_TaskSetWorkflowStatus",
	"HPMSdk_TaskGetWorkflowStatus",
	"HPMSdk_TaskSetUserStoryFlag",
	"HPMSdk_TaskGetUserStoryFlag",
	"HPMSdk_TaskSetLastUpdatedTime",
	"HPMSdk_TaskGetLastUpdatedTime",
	"HPMSdk_TaskSetDetailedDescription",
	"HPMSdk_TaskGetDetailedDescription",
	"HPMSdk_TaskSetStepsToReproduce",
	"HPMSdk_TaskGetStepsToReproduce",
	"HPMSdk_TaskSetSprintResourcesHaveFullRights",
	"HPMSdk_TaskGetSprintResourcesHaveFullRights",
	"HPMSdk_TaskGetAttachmentPath",
	"HPMSdk_TaskGetID",
	"HPMSdk_TaskSetLinkedToMilestones",
	"HPMSdk_TaskGetLinkedToMilestones",
	"HPMSdk_TaskSetLinkedToSprint",
	"HPMSdk_TaskGetLinkedToSprint",
	"HPMSdk_TaskSetLinkedTo",
	"HPMSdk_TaskGetLinkedTo",
	"HPMSdk_TaskSetWallPositions",
	"HPMSdk_TaskGetWallPositions",
	"HPMSdk_TaskSetFullyCreated",
	"HPMSdk_TaskGetFullyCreated",
	"HPMSdk_TaskSetArchived",
	"HPMSdk_TaskGetArchived",
	"HPMSdk_TaskUpdatePipelineWorkflowToNewestVersion",
	"HPMSdk_UtilPrepareFindContext", 
	"HPMSdk_UtilUpdateFindContext",
	"HPMSdk_TaskFind",
	"HPMSdk_TaskRefUtilIsInFindContext",

	"HPMSdk_TaskSetWorkflow",
	"HPMSdk_TaskGetWorkflow",
	"HPMSdk_TaskGetLinkedToPipelineTask",
	"HPMSdk_TaskSetCreatedPipelineTasks",
	"HPMSdk_TaskGetCreatedPipelineTasks",
	"HPMSdk_TaskSetCreatedFromWorkflowObject",
	"HPMSdk_TaskGetCreatedFromWorkflowObject",
	"HPMSdk_TaskSetDefaultWorkflow",
	"HPMSdk_TaskGetDefaultWorkflow",
	"HPMSdk_TaskPipelineGetTaskRef",
	"HPMSdk_TaskRefGetColumnText",
	"HPMSdk_TaskGetLastAssignedInWorkflowStatus",
	"HPMSdk_TaskGetLastAssignedInWorkflowStatuses",
	"HPMSdk_TaskGetLastEnterWorkflowStatus",
	"HPMSdk_TaskGetLastExitWorkflowStatus",
	"HPMSdk_TaskGetAgilePriorityCategory",
	"HPMSdk_TaskSetAgilePriorityCategory",
	"HPMSdk_TaskGetBacklogPriority",
	"HPMSdk_TaskSetBacklogPriority",
	"HPMSdk_TaskGetSprintPriority",
	"HPMSdk_TaskSetSprintPriority",
	"HPMSdk_TaskGetBugPriority",
	"HPMSdk_TaskSetBugPriority",

	"HPMSdk_TaskUtilGetWorkflowProgression",
	"HPMSdk_TaskUtilGetWorkflowProgressionFromTaskStatusChange",	

	"HPMSdk_TaskGetSDKInternalData",
	"HPMSdk_TaskSetSDKInternalData",

	"HPMSdk_TaskGetCommentSDKInternalData",
	"HPMSdk_TaskSetCommentSDKInternalData",

	"HPMSdk_TaskRefGetTask",
	"HPMSdk_TaskRefGetContainer",
	"HPMSdk_TaskRefEnum",
	"HPMSdk_TaskRefConnect",
	"HPMSdk_TaskRefGetTreeLevel",
	"HPMSdk_TaskRefGetPreviousID",
	"HPMSdk_TaskRefClearNewlyCreated",
	"HPMSdk_TaskRefGetNewlyCreated",
	"HPMSdk_TaskRefSetUIDHistory",
	"HPMSdk_TaskRefGetUIDHistory",
	"HPMSdk_TaskRefGetPreviousWorkPriorityID",
	"HPMSdk_TaskRefGetSummary",
	"HPMSdk_TaskRefGetMilestoneSummary",

	"HPMSdk_TaskRefConnectionsEnum",
	"HPMSdk_TaskUtilSprintTaskRefEnum",

	"HPMSdk_TaskUtilGetEffectiveLinkedToMilestones",

	"HPMSdk_TaskRefGetSDKInternalData",
	"HPMSdk_TaskRefSetSDKInternalData",

	"HPMSdk_TaskRefUtilGetSubProjectPath",
	"HPMSdk_TaskRefUtilEnumChildren",
	"HPMSdk_TaskRefUtilEnumPipelineProgression",
	"HPMSdk_TaskRefUtilGetParent",
	"HPMSdk_TaskRefUtilGetNext",
	"HPMSdk_TaskRefUtilGetNextSibling",
	"HPMSdk_TaskRefUtilGetPrevSibling",
	"HPMSdk_TaskRefUtilGetNextAtSameOrLowerLevel",
	"HPMSdk_TaskRefUtilGetPrevAtSameOrLowerLevel",
	"HPMSdk_TaskRefUtilMoveInTree",
	"HPMSdk_TaskRefUtilTraceTree",
	"HPMSdk_TaskRefUtilIsCompleted",
	"HPMSdk_TaskRefUtilHasChildren",
	"HPMSdk_TaskRefUtilCanStartNow",
	"HPMSdk_TaskUtilOneTaskRefHasChildren",
	"HPMSdk_TaskUtilUpdateAgilePriority",

	"HPMSdk_TaskConnectionDelete",
	"HPMSdk_TaskConnectionSetConnectionType",
	"HPMSdk_TaskConnectionGetConnectionType",
	"HPMSdk_TaskConnectionSetLeadLagTime",
	"HPMSdk_TaskConnectionGetLeadLagTime",
	"HPMSdk_TaskConnectionGetConnectFrom",
	"HPMSdk_TaskConnectionGetConnectTo",

	"HPMSdk_VersionControlRegisterCallback",
	"HPMSdk_VersionControlUnregisterCallback",

	"HPMSdk_VersionControlInit",
	"HPMSdk_VersionControlErrorToStr",
	"HPMSdk_VersionControlEnumFiles",
	"HPMSdk_VersionControlFileExists",
	"HPMSdk_VersionControlOperationPending",
	"HPMSdk_VersionControlGetFileInfo",
	"HPMSdk_VersionControlGetFileHistory",
	"HPMSdk_VersionControlGetAccessRights",
	"HPMSdk_VersionControlAddFiles",
	"HPMSdk_VersionControlCreateDirectories",
	"HPMSdk_VersionControlSyncFiles",
	"HPMSdk_VersionControlCheckOutFiles",
	"HPMSdk_VersionControlCheckInFiles",
	"HPMSdk_VersionControlRenameFiles",
	"HPMSdk_VersionControlRevertFiles",
	"HPMSdk_VersionControlDeleteFiles",
	"HPMSdk_VersionControlRestoreDeletedFiles",
	"HPMSdk_VersionControlDeleteVersions",
	"HPMSdk_VersionControlRollbackFile",
	"HPMSdk_VersionControlSetAccessRights",
	"HPMSdk_VersionControlUtilPathToFileID",
	"HPMSdk_VersionControlUtilFileIDToPath",
	"HPMSdk_VersionControlUtilIsInitialized",
	"HPMSdk_VersionControlSetLocalPath",

	"HPMSdk_CommunicationChannelRegister",
	"HPMSdk_CommunicationChannelUnregister",
	"HPMSdk_CommunicationChannelSendPacket",
	"HPMSdk_CommunicationChannelEnum",

	"HPMSdk_ChatHistoryGetHistory",

	"HPMSdk_DataHistoryGetHistory",

	"HPMSdk_DataHistoryGetEntryData",
	"HPMSdk_DataHistorySetMaxCacheEntries",
	"HPMSdk_VariantDecode_HPMInt32",
	"HPMSdk_VariantDecode_HPMUInt32",
	"HPMSdk_VariantDecode_HPMInt64",
	"HPMSdk_VariantDecode_HPMUInt64",
	"HPMSdk_VariantDecode_HPMFP32",
	"HPMSdk_VariantDecode_HPMFP64",
	"HPMSdk_VariantDecode_HPMUniqueID",
	"HPMSdk_VariantDecode_HPMString",
	"HPMSdk_VariantDecode_HPMTaskLinkedToMilestones",
	"HPMSdk_VariantDecode_HPMTaskDelegateTo",
	"HPMSdk_VariantDecode_HPMTaskSprintAllocatedResources",
	"HPMSdk_VariantDecode_HPMTaskVisibleTo",
	"HPMSdk_VariantDecode_HPMTaskResourceAllocation",
	"HPMSdk_VariantDecode_HPMStatisticsMultiFrequency",
	"HPMSdk_VariantDecode_HPMStatisticsCustomStatisticsFrequency",

	"HPMSdk_VariantDecode_HPMTaskAttachedDocuments",
	"HPMSdk_VariantDecode_HPMTaskVacationOptions",
	"HPMSdk_VariantDecode_HPMTaskCommentsOptions",
	"HPMSdk_VariantDecode_HPMTaskLinkedTo",
	"HPMSdk_VariantDecode_HPMTaskSprintResourceAllocation",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskCreated",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskRestoredFromHistory",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskMoved",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskRenameCustomColumn",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskProxyCreated",
	"HPMSdk_VariantDecode_HPMDataHistoryTaskProxyDeleted",
	"HPMSdk_VariantDecode_HPMTaskTimeZones",
	"HPMSdk_VariantDecode_HPMChatMessage",
	"HPMSdk_VariantDecode_HPMProjectCustomColumns",
	"HPMSdk_VariantDecode_HPMProjectCustomColumnsColumn",
	"HPMSdk_VariantDecode_HPMProjectWorkflowSettings",
	"HPMSdk_VariantDecode_HPMHolidays",
	"HPMSdk_VariantDecode_HPMWorkingDays",
	"HPMSdk_VariantDecode_HPMCustomWorkingDays",
	"HPMSdk_VariantDecode_HPMWorkingHours",
	"HPMSdk_VariantDecode_HPMCustomWorkingHours",
	"HPMSdk_VariantDecode_HPMProjectDefaultColumns",

	"HPMSdk_VariantEncode_HPMInt32",
	"HPMSdk_VariantEncode_HPMUInt32",
	"HPMSdk_VariantEncode_HPMInt64",
	"HPMSdk_VariantEncode_HPMUInt64",
	"HPMSdk_VariantEncode_HPMFP32",
	"HPMSdk_VariantEncode_HPMFP64",
	"HPMSdk_VariantEncode_HPMUniqueID",
	"HPMSdk_VariantEncode_HPMString",
	"HPMSdk_VariantEncode_HPMUntranslatedString",
	"HPMSdk_VariantEncode_EHPMTaskStatus",

	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeText",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeDate",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist",
	"HPMSdk_CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeText",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeDate",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist",
	"HPMSdk_CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist",

	"HPMSdk_AuthenticationClientPluginRegister",
	"HPMSdk_AuthenticationClientPluginUnregister",
	"HPMSdk_AuthenticationClientProtocolEnded",
	"HPMSdk_AuthenticationIntegrationProtocolEnded",
	"HPMSdk_AuthenticationResolveCredentials",
	"HPMSdk_AuthenticationResolveCredentialsEnded",

	"HPMSdk_UtilGetColumnHash",
	"HPMSdk_UtilIsIDValid",
	"HPMSdk_UtilIsIDTask",
	"HPMSdk_UtilIsIDTaskRef",
	"HPMSdk_UtilIsIDProject",
	"HPMSdk_UtilIsIDBacklogProject",
	"HPMSdk_UtilIsIDQAProject",
	"HPMSdk_UtilIsIDResource",
	"HPMSdk_UtilDecodeCustomChoiceValue",
	"HPMSdk_UtilDecodeCustomColumnResourcesValue",
	"HPMSdk_UtilEncodeCustomColumnResourcesValue",
	"HPMSdk_UtilDecodeCustomColumnDateTimeValue",
	"HPMSdk_UtilEncodeCustomColumnDateTimeValue",
	"HPMSdk_UtilGetRealProjectIDFromProjectID",
	"HPMSdk_UtilGetLastErrorDescription",
	"HPMSdk_UtilGetHansoftURL",
	"HPMSdk_UtilGetFindCriteriaDataTypeFromData",
	"HPMSdk_UtilGetFindCriteriaDataTypeFromColumn",
	"HPMSdk_UtilConvertFindStringToReport",
	"HPMSdk_UtilConvertReportToFindString",
	"HPMSdk_UtilGetColumnName",
	"HPMSdk_UtilGetColumnDescription",
	"HPMSdk_UtilColumnToTaskField",
	"HPMSdk_UtilTaskFieldToColumn",	
	"HPMSdk_UtilGetColumnDataItemFormatted",
	"HPMSdk_UtilIsColumnReadOnly",
	"HPMSdk_UtilGetColumnData",
	"HPMSdk_LocalizationGetLanguages",
	"HPMSdk_LocalizationGetLanguageName",
	"HPMSdk_UtilGetResourceUndeleteTimeOut",
	"HPMSdk_UtilGetWorkflowObjectName",
	"HPMSdk_UtilGetWorkflowObjectIDFromName",
	"HPMSdk_UtilGetWorkflowName",
	"HPMSdk_UtilGetWorkflowIDFromName",
	"HPMSdk_UtilGetWorkflowType",
	"HPMSdk_UtilGetWorkflowContainerFlags",
	"HPMSdk_UtilTaskCommentExists",
	"HPMSdk_UtilGlobalReportExists",
	"HPMSdk_UtilProjectReportExists",
	"HPMSdk_UtilWorkflowObjectExists",
	"HPMSdk_UtilWorkflowExists",
	"HPMSdk_DebugCheckHeap",
	"HPMSdk_LocalizationTranslateString",
	"HPMSdk_LocalizationGetDefaultLanguage",
	"HPMSdk_LocalizationCreateUntranslatedStringFromString",
	"HPMSdk_LocalizationCreateUntranslatedStringFromTranslationID",
	"HPMSdk_LocalizationGetTranslationIDFromFullTranslationID",
	"HPMSdk_SessionLock",


	};


// Platform specific dynamic library helpers
#if defined(DHPMWindows)

	#if defined (DHPM_x86_64)	
		#define DHPMDllName L"HPMSdk.x64.dll"
	#else
		#define DHPMDllName	L"HPMSdk.x86.dll"
	#endif

	#include <windows.h>
	
	typedef HMODULE HPMLibrary;
	
	HPMLibrary HPMLibraryLoad(wchar_t const* _pPath, wchar_t const* _pName)
	{
		if (!_pPath || wcslen(_pPath) == 0)
		{
			return LoadLibraryW(_pName);	
		}
		else
		{
			HPMChar LibraryPath[4096];
			_snwprintf_s(LibraryPath, 4096, 4096, L"%s\\%s", _pPath, _pName);
			return LoadLibraryW(LibraryPath);
		}
	}
	
	void HPMLibraryUnload(HPMLibrary _Library)
	{
		FreeLibrary(_Library);
	}
	
	DHPMFarProc HPMLibraryGetSymbol(HPMLibrary _Library, char const* _pName)
	{
		return (DHPMFarProc)GetProcAddress(_Library, _pName);
	}
	
#elif defined(DHPMNix)

	#if defined(DHPMOSX)
		#if defined (DHPM_x86_64)
			#define DHPMDllName "HPMSdk.x64.dylib"
		#else
			#define DHPMDllName	"HPMSdk.x86.dylib"
		#endif
	#else
		#if defined (DHPM_x86_64)	
			#define DHPMDllName "HPMSdk.x64.so"
		#else
			#define DHPMDllName	"HPMSdk.x86.so"
		#endif
	#endif

	#include <dlfcn.h>	// dl*
	#include <stdio.h>	// swprintf
	#include <stdlib.h>	// wcstombs
	#include <string.h> // memset
	#include <stdint.h>
	#include <unistd.h>

	typedef void *HPMLibrary;

	HPMLibrary HPMLibraryLoad(HPMSystemChar const* _pPath, HPMSystemChar const* _pName)
	{
		HPMSystemChar const* pLibraryStr = NULL;
		HPMSystemChar LibraryPathBuffer[4096];
	
		if (!_pPath || strlen(_pPath) == 0)
		{
			pLibraryStr = _pName;
		}
		else
		{
			snprintf(LibraryPathBuffer, 4096, "%s/%s", _pPath, _pName);
			pLibraryStr = LibraryPathBuffer;
		}
	
		return dlopen(pLibraryStr, RTLD_LAZY);
	}
	
	void HPMLibraryUnload(HPMLibrary _Library)
	{
		dlclose(_Library);
	}
	
	DHPMFarProc* HPMLibraryGetSymbol(HPMLibrary _Library, char const* _pName)
	{
		return (DHPMFarProc*)dlsym(_Library, _pName);
	}

#endif


// use:  HPMInit(_pSdkFunctions, _pClientSDKData, _pLibraryDirectory)
// pre:  if executing in an SDK Integration process context: _pClientSDKData == 0
//       else: _pClientSDKData is valid
HPMInt32 HPMInit(struct HPMSdkFunctions *_pSdkFunctions, const HPMClientSDKData *_pClientSDKData, const HPMSystemChar *_pLibraryDirectory)
{
	HPMUInt32 nExported = sizeof(g_HPMExportedFunctions) / sizeof(g_HPMExportedFunctions[0]);
	DHPMFarProc *pFunctions = (DHPMFarProc *)&_pSdkFunctions->SessionOpen;
	HPMUInt32 nFunctions = (HPMUInt32)((sizeof(HPMSdkFunctions) - (((char *)pFunctions) - ((char *)_pSdkFunctions))) / sizeof(pFunctions[0]));
	HPMUInt32 i;
	HPMUInt32 bFailed = 0;

	// Clear
	memset(_pSdkFunctions, 0, sizeof(HPMSdkFunctions));

	/// if running as a PlugIn: set DLL handle to 0
	if (_pClientSDKData)
	{
		_pSdkFunctions->m_hDll = NULL;
	}
	/// else (running as an Integration process)
	else
	{
		HPMSystemChar const* pLibraryStr = NULL;
		HPMSystemChar LibraryPathBuffer[4096];
		if (!_pLibraryDirectory 
			||
#if defined(DHPMWindows)
			wcslen(_pLibraryDirectory) == 0
#elif defined(DHPMNix)
			strlen(_pLibraryDirectory) == 0
#endif
			)
		{
#if defined(DHPMWindows)
			DWORD PathLength;
			int It;
			if ((PathLength = GetModuleFileNameW(NULL, LibraryPathBuffer, 4096)) == 0)
				return EHPMError_OtherError;
			It = PathLength - 1;
			while (It)
			{
				if (LibraryPathBuffer[It] == '/' || LibraryPathBuffer[It] == '\\')
				{
					LibraryPathBuffer[It] = '\0';
					break;
				}
				--It;
			}
#elif defined(DHPMNix)
			if (!getcwd(LibraryPathBuffer, 4096))
				return EHPMError_OtherError;
#endif
			pLibraryStr = LibraryPathBuffer;
		}
		else
		{
			pLibraryStr = _pLibraryDirectory;
		}
		/// if we fail to load the SDK DLL: return failure
		_pSdkFunctions->m_hDll = HPMLibraryLoad(pLibraryStr, DHPMDllName);	
		
		if (!_pSdkFunctions->m_hDll)
			return EHPMError_DllNotFound;

		{
			void (DHPMSdkCallingConvention *pIdsLoadLibraryExternal)();
			pIdsLoadLibraryExternal = (void (DHPMSdkCallingConvention *)())HPMLibraryGetSymbol((HPMLibrary)_pSdkFunctions->m_hDll, "IdsLoadLibraryExternal");
			if (pIdsLoadLibraryExternal)
				pIdsLoadLibraryExternal();
		}

	}

	// Should be static check
	if (nFunctions != nExported)
	{
		return EHPMError_DllInvalid;
	}
	
	/// for each SDK function
	for (i = 0; i < nFunctions; ++i)
	{
		/// if we're running in PlugIn context: call back (to the client) to get the function's address
		if (_pClientSDKData)
			pFunctions[i] = (DHPMFarProc)_pClientSDKData->m_pGetFunctionPtr(EHPMSDK_Version, g_HPMExportedFunctions[i]);
		/// else: GetProcAddress() the function from the SDK .DLL module
		else
			pFunctions[i] = HPMLibraryGetSymbol((HPMLibrary)_pSdkFunctions->m_hDll, g_HPMExportedFunctions[i]);

		if (pFunctions[i] == NULL)
		{
			bFailed = 1;
		}
	}

	/// if we failed to get some function: return failure (and unload DLL, if in Integration context)
	if (bFailed)
	{
		if (!_pClientSDKData)
		{
			void (DHPMSdkCallingConvention *pIdsFreeLibraryExternal)();
			pIdsFreeLibraryExternal = (void (DHPMSdkCallingConvention *)())HPMLibraryGetSymbol((HPMLibrary)_pSdkFunctions->m_hDll, "IdsFreeLibraryExternal");
			if (pIdsFreeLibraryExternal)
				pIdsFreeLibraryExternal();
			HPMLibraryUnload((HPMLibrary)_pSdkFunctions->m_hDll);
		}
		return EHPMError_DllInvalid;
	}

	return EHPMError_NoError;
}

void HPMDestroy(struct HPMSdkFunctions *_pSdkFunctions)
{
	if (_pSdkFunctions->m_hDll)
	{
		void (DHPMSdkCallingConvention *pIdsFreeLibraryExternal)();
		pIdsFreeLibraryExternal = (void (DHPMSdkCallingConvention *)())HPMLibraryGetSymbol((HPMLibrary)_pSdkFunctions->m_hDll, "IdsFreeLibraryExternal");
		if (pIdsFreeLibraryExternal)
			pIdsFreeLibraryExternal();
		HPMLibraryUnload((HPMLibrary)_pSdkFunctions->m_hDll);
	}
	_pSdkFunctions->m_hDll = NULL;

}


const char *HPMErrorToStr(HPMInt32 _Error)
{
	switch (_Error)
	{
	case EHPMError_NoError:	return "The operation completed successfully.";
	case EHPMError_DllNotFound: return "The SDK dll could not be found in the current path.";
	case EHPMError_DllInvalid: return "The SDK dll did not contain the expected functions. This could be due to an old dll being used with a new SDK header file.";
	case EHPMError_NewVersionOfSDKRequired: return "This operation cannot be performed with this version of the SDK, you need to recompile your program with the newest version of the Hansoft SDK.";
	case EHPMError_CouldNotConnectToHost: return "The connection to the server was unsuccessful.";
	case EHPMError_GeneralLoginError: return "Unspecified login error.";
	case EHPMError_FailedToConnectToDatabase: return "Internal error occurred when trying to login to the database on the server.";
	case EHPMError_DatabaseDoesNotExist: return "The database specified does not exist on the server.";
	case EHPMError_DatabaseNotOnline: return "The database specified is not online and cannot be connected to.";
	case EHPMError_PasswordOrResourceInvalid: return "The resource was not found or the password was incorrect when logging in.";
	case EHPMError_LicenseInvalid: return "The license has expired, too many resources have been created on the server or the SDK module is not enabled in the license.";
	case EHPMError_SyncError: return "An error occurred when the client was downloading the database.";
	case EHPMError_OtherError: return "Unspecified error.";
	case EHPMError_ConnectionLost: return "The connection to the server has been lost, it's up to the user of the SDK to try to connect again.";
	case EHPMError_InvalidID: return "The unique identifier specified to the function is not valid.";
	case EHPMError_PasswordRequired: return "A password must be specified at least one character long.";
	case EHPMError_CallbackAlreadyExists: return "The callback with the same function pointer and context has already been registered .";
	case EHPMError_CallbackDoesNotExist: return "The specified callback does not exist.";
	case EHPMError_BlockTimeout: return "A blocking operation timed out. This usually happens if the connection to the server was lost, it could also happen if an operation takes longer that 120 seconds to process on the server. When this happens you should not assume that the function finished or did not finish.";
	case EHPMError_ResourceNotMemberOfProject: return "The resource specified was not a member of the project where the operation was performed. This usually happens when you try to set a resource to some task property and the resource isn't a member of that project.";
	case EHPMError_DataNotYetAvailable: return "The data requested was not yet available. You should wait for a callback signifying that the data is available or poll the function until the requested data is returned.";
	case EHPMError_ConversionNotSupported: return "The data cannot be retrieved in the requested format because the conversion isn't supported.";
	case EHPMError_IndexOutOfRange: return "The index supplied to the function was out of range.";
	case EHPMError_FunctionalityNotInitialized: return "The function called needs to have its functionality initialized before this function can be called.";		
	case EHPMError_AlreadyInitialized: return "The functionality has already been initialized.";
	case EHPMError_OperationAlreadyInProgress: return "An operation is already in progress and you must wait until it is finished before calling this function.";
	case EHPMError_AccessDenied: return "Access was denied by the server.";
	case EHPMError_FileDoesNotExist: return "The file does not exist.";
	case EHPMError_LicenseViolation: return "The command could not be performed because the license would have been violated.";
	case EHPMError_ParseError: return "Failed to parse the string that was sent into the function. Additional information might be available through UtilGetLastErrorDescription.";
	case EHPMError_InvalidCustomSettingsType: return "The custom settings type specified was not valid for this function.";
	case EHPMError_NotAvailableInClientSDK: return "The called functions is not available in the client SDK.";
	case EHPMError_OnlyAvailableInClientSDK: return "The called functions is only available in the client SDK.";
	case EHPMError_Deprecated: return "The function called has been deprecated in this version of the SDK. Check SDK release notes for more information.";
	case EHPMError_OnlyAvailableInQAProject: return "The called function is only available for items residing in a QA project.";
	case EHPMError_InvalidSessionKeySize: return "The session key provided is either too large or too small.";
	case EHPMError_InvalidIdentifier: return "The authentication method identifier provided is either empty or too long.";
	case EHPMError_SessionPoolNotInitialized: return "The session pool could not be initialized.";
	case EHPMError_SessionPoolSessionNotAvailable: return "No session is available in the session pool.";
	case EHPMError_SessionPoolNotAllowed: return "This operation is not allowed on a virtual session.";
	case EHPMError_SessionPoolNotAvailableInClientSDK: return "Session pooling is not available in the client SDK.";
	case EHPMError_LoginDisabled: return "The login for the resource has been disabled.";
	case EHPMError_Partitioned: return "Unable to complete authentication due to network problems.";
	case EHPMError_WorkingDirectoryNotAvailableInClientSDK: return "The working directory is not available in the client SDK.";
	case EHPMError_NewVersionOfServerRequired: return "The application was developed with a version of the SDK, that requires that the server is updated to a newer version.";
	case EHPMError_IDNoLongerExists: return "The identifier specified in the command never existed or has been deleted since the command was sent to server.";
	case EHPMError_NotValidOnTaskWithProxy: return "The operation cannot be performed on a task that has a proxy.";
	case EHPMError_FullIdentifierNotAvailaibleInTranslation: return "The full translation identifier is not available in the translation.";
	case EHPMError_IdentifierNotAvailaibleInTranslation: return "The translation identifier is not available in the translation.";
	case EHPMError_SDKNotAllowedToSetAuthOrCredential: return "The SDK is not allowed to set authentication provider or credential check provider.";
	case EHPMError_ImageFormatNotSupported: return "The image format is not supported by the SDK.";
	case EHPMError_CropAreaOutOfBounds: return "The specified crop area is larger than the original image.";
	case EHPMError_NoVersionControlHistory: return "No version control history exist.";
	case EHPMError_TimeZoneOrder: return "Not possible to set timezone start before or equal to previous timezone end or to set timezone end before timezone start.";
	case EHPMError_ServerTimedOut: return "Connection to server timed out.";
	case EHPMError_CouldNotLoadImpDll: return "Could not load downloaded SDK implementation dll.";
	case EHPMError_SecureConnectionRefused: return "Secure connection refused.";
	case EHPMError_SecureConnectionNotTrusted: return "Secure connection not trusted.";
	case EHPMError_Certificate: return "Certificate error.";
	case EHPMError_ServerDoesNotSupportSecureConnection: return "Server does not support secure connection.";
	case EHPMError_CertificateSettingsNotApplicableInClientSDK: return "The certificate settings are not applicable in the client SDK.";
	case EHPMError_DateTimeOutOfRange: return "The provided date time parameter is out of range.";
	case EHPMError_CouldNotCreateSDKInterface: return "Could not create the SDK interface from the downloaded SDK implementation dll.";
	case EHPMError_ServerVersionMismatch: return "Could not create the SDK interface from the downloaded SDK implementation dll.";
	case EHPMError_ServerDoesNotSupportPlatform: return "The server does not support your SDK platform or architechture.";
	case EHPMError_ServerTimeMismatch: return "The server time differs a lot from time the time on this computer. Connection is not allowed.";
			
			
	}

	return "Unknown error";
}
