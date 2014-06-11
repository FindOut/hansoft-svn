 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Notifications									|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/9 - Notifications									|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Callback operation specified for @{HPMChangeCallbackInfo}::m_Operation.		|
|																									|
|	Comments:			When you receive a change callback you need to cast							|
|						@{HPMChangeCallbackInfo}::m_pCallbackData according to the m_Operation		|
|						member. For information about what structure belongs to which operation		|
|						check the documentation for the enum values.								|
|																									|
|	See Also:			@{HPMChangeCallbackInfo}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
|																									|
|	Managed:			GenEnumList(Notifications,NoRet)											|
\*_________________________________________________________________________________________________*/
enum EHPMChangeCallbackOperation
{
	EHPMChangeCallbackOperation_NewVersionOfSDKRequired,						// @[NoGen] The callback operation did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to interpret this callback operation.

	EHPMChangeCallbackOperation_GlobalStatisticsSettingsChange,					// The global statistics settings changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalStatisticsSettingsChange}.
	EHPMChangeCallbackOperation_GlobalServerNameChange,							// The global server name changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalServerNameChange}.
	
	EHPMChangeCallbackOperation_ResourceCreate,									// A new resource was created. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceCreate}.
	EHPMChangeCallbackOperation_ResourceDelete,									// A resource was deleted. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceCreate}.
	EHPMChangeCallbackOperation_ResourcePropertiesChange,						// The properties of a resource was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourcePropertiesChange}.
	EHPMChangeCallbackOperation_ResourceGlobalSettingsChange,					// The global settings for a resource changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceGlobalSettingsChange}.
	EHPMChangeCallbackOperation_ResourceLicenseViolation,						// A user command caused a license violation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceLicenseViolation}.

	EHPMChangeCallbackOperation_ResourceGroupsChange,							// A resource group was created, deleted or changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceGroupsChange}.

	EHPMChangeCallbackOperation_ProjectCreate,									// A project was created. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCreate}.
	EHPMChangeCallbackOperation_ProjectDelete,									// A project was deleted. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectDelete}.
	EHPMChangeCallbackOperation_ProjectPropertiesChange,						// The properties of a project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectPropertiesChange}.
	EHPMChangeCallbackOperation_ProjectSettingsChange,							// The settings of a project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectSettingsChange}.
	EHPMChangeCallbackOperation_ProjectStatisticsSettingsChange,				// The statistics settings of a project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectStatisticsSettingsChange}.
	EHPMChangeCallbackOperation_ProjectWorkflowChange,							// The settings for a workflow in a project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWorkflowChange}.
	EHPMChangeCallbackOperation_ProjectEmailSettingsChange,						// The email settings of a project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectEmailSettingsChange}.
	EHPMChangeCallbackOperation_ProjectOpenBacklogProject,						// The backlog project of a project was opened. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectOpenBacklogProject}.
	EHPMChangeCallbackOperation_ProjectOpenQAProject,							// The QA project of a project was opened. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectOpenQAProject}.
	EHPMChangeCallbackOperation_ProjectHistoryAutoSaveSettingsChange,			// The project history auto save settings for a project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange}.
	EHPMChangeCallbackOperation_ProjectResourceAdd,								// A resource was added to a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectResourceAdd}.
	EHPMChangeCallbackOperation_ProjectResourceRemove,							// A resource was removed from a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectResourceRemove}.
	EHPMChangeCallbackOperation_ProjectResourcePropertiesChange,				// The properties of a resource was changed for a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectResourcePropertiesChange}.
	EHPMChangeCallbackOperation_ProjectCustomColumnsChange,						// The custom columns of a project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomColumnsChange}.
	EHPMChangeCallbackOperation_ProjectCustomColumnsCreate,						// A custom column was created in a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomColumnsCreate}.
	EHPMChangeCallbackOperation_ProjectCustomColumnsDeleteTaskData,				// Custom column task data was deleted in a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData}.
	EHPMChangeCallbackOperation_ProjectCustomColumnsRenameTaskData,				// Custom column task data was renamed in a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData}.
	EHPMChangeCallbackOperation_ProjectActiveDefaultColumnsChange,				// The active default column of a project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectActiveDefaultColumnsChange}.
	EHPMChangeCallbackOperation_ProjectWallSettingsChange,						// The wall settings of the project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWallSettingsChange}.
	EHPMChangeCallbackOperation_ProjectWallGroupsChange,						// The wall groups of the project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWallGroupsChange}.
	EHPMChangeCallbackOperation_ProjectDetailedAccessRulesChange,				// The detailed access rules of the project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectDetailedAccessRulesChange}.

	EHPMChangeCallbackOperation_TaskDelete,										// A task was deleted. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskDelete}.
	EHPMChangeCallbackOperation_TaskChange,										// A property of a task changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChange}.
	EHPMChangeCallbackOperation_TaskChangeCustomColumnData,						// The custom column data of a task was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangeCustomColumnData}.
	EHPMChangeCallbackOperation_TaskChangeWorkRemainingHistory,					// The work remaining history of a task was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangeWorkRemainingHistory}.
	EHPMChangeCallbackOperation_TaskRefDelete,									// A task reference was deleted. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskRefDelete}.
	EHPMChangeCallbackOperation_TaskRefConnect,									// A task reference was connected. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskRefConnect}.
	EHPMChangeCallbackOperation_TaskRefChange,									// A property of a task reference was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskRefChange}.
	EHPMChangeCallbackOperation_TaskConnectionDelete,							// A task connection was deleted. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskConnectionDelete}.
	EHPMChangeCallbackOperation_TaskConnectionChangeType,						// The type of a connection was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskConnectionChangeType}.
	EHPMChangeCallbackOperation_TaskConnectionChangeLeadLagTime,				// The lead lag time of a connection was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskConnectionChangeLeadLagTime}.
	EHPMChangeCallbackOperation_TaskCreateComment,								// A comment was created on a task. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskCreateComment}.
	
	EHPMChangeCallbackOperation_TaskDeleteComment,								// A comment was deleted on a task. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskDeleteComment}.
	EHPMChangeCallbackOperation_TaskCommentPosted,								// A comment was posted on a task. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskCommentPosted}.

	EHPMChangeCallbackOperation_DataHistoryReceived,							// Data history was received. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_DataHistoryReceived}.

	EHPMChangeCallbackOperation_VersionControlFileTreeAvailable,				// A new file tree is available, you need to enumerate files to download the latest version. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlFileTreeAvailable}.
	EHPMChangeCallbackOperation_VersionControlAllCommandsFinished,				// Info for a file somewhere in the file tree changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlFileInfoChanged}.
	EHPMChangeCallbackOperation_VersionControlFileInfoChanged,					// Info for a file somewhere in the file tree changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlFileInfoChanged}.
	EHPMChangeCallbackOperation_VersionControlWarnFileOverwriteDelete,			// @[Ret] The file will be overwritten callback. This callback will not be called from the SessionProcess function, but rather from a processing thread, so make sure to return as fast as possible and take care to protect your data from other threads. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete}.
	EHPMChangeCallbackOperation_VersionControlWarnCheckOutShouldSync,			// @[Ret] The files that are to be checked out isn't the newest version. This callback will not be called from the SessionProcess function, but rather from a processing thread, so make sure to return as fast as possible and take care to protect your data from other threads. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync}.
	EHPMChangeCallbackOperation_VersionControlSyncFilesResponse,				// Response to a sync files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlSyncFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlAddFilesResponse,					// Response to a add files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlAddFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlCheckInFilesResponse,				// Response to a check in files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlCheckInFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlCheckOutFilesResponse,			// Response to a check out files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlCheckOutFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlRenameResponse,					// Response to a rename files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlRenameResponse}.
	EHPMChangeCallbackOperation_VersionControlDeleteFilesResponse,				// Response to a delete files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlDeleteFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlRestoreDeletedFilesResponse,		// Response to a restore deleted files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse}.
	EHPMChangeCallbackOperation_VersionControlSetAccessRightsResponse,			// Response to a set file access rights operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlSetAccessRightsResponse}.
	EHPMChangeCallbackOperation_VersionControlRollbackFileResponse,				// Response to a rollback file operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlRollbackFileResponse}.
	EHPMChangeCallbackOperation_VersionControlDeleteVersionsResponse,			// Response to a delete versions file operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlDeleteVersionsResponse}.
	EHPMChangeCallbackOperation_VersionControlGetFileHistoryResponse,			// Response to a get file history operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlGetFileHistoryResponse}.
	EHPMChangeCallbackOperation_VersionControlGetAccessRightsResponse,			// Response to a get access rights operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlGetAccessRightsResponse}.

	// Version 1.2 Changes
	EHPMChangeCallbackOperation_GlobalCustomSettingsChange,						// The custom settings for an integration identifier changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalCustomSettingsChange}.
	EHPMChangeCallbackOperation_GlobalCustomSettingsUnregister,					// A custom settings was unregistered. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalCustomSettingsUnregister}.
	EHPMChangeCallbackOperation_GlobalCustomSettingsValueChange,				// A global custom settings value changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalCustomSettingsValueChange}.
	EHPMChangeCallbackOperation_ProjectCustomSettingsValueChange,				// A project custom settings value changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomSettingsValueChange}.
	EHPMChangeCallbackOperation_ProjectResourceCustomSettingsValueChange,		// A project resource custom settings value changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange}.
	EHPMChangeCallbackOperation_ResourceCustomSettingsValueChange,				// A user custom settings value changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceCustomSettingsValueChange}.

	EHPMChangeCallbackOperation_GlobalSDKInternalDataChange,					// Global SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalSDKInternalDataChange}.
	EHPMChangeCallbackOperation_ProjectSDKInternalDataChange,					// Project SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectSDKInternalDataChange}.
	EHPMChangeCallbackOperation_ProjectResourceSDKInternalDataChange,			// Project SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectResourceSDKInternalDataChange}.
	EHPMChangeCallbackOperation_ResourceSDKInternalDataChange,					// User SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceSDKInternalDataChange}.
	EHPMChangeCallbackOperation_TaskSDKInternalDataChange,						// Task SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskSDKInternalDataChange}.
	EHPMChangeCallbackOperation_TaskRefSDKInternalDataChange,					// Task reference SDK internal data changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskRefSDKInternalDataChange}.

	EHPMChangeCallbackOperation_ClientExecuteURL,								// @[Ret,0] Called by the client integration dll when the user clicks an URL. This callback might be called from any thread, so make sure to return as fast as possible and take care to protect your data from other threads. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ClientExecuteURL}.
	EHPMChangeCallbackOperation_ClientSyncDone,									// The client have fully logged in to the database. This message is only sent when using the SDK in a client plugin. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ClientSyncDone}.

	EHPMChangeCallbackOperation_ProjectCustomStatisticsSettingsChange,			// The custom statistics settings of the project was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange}.

	// Version 5.3 Changes
	EHPMChangeCallbackOperation_ProjectWorkflowCreate,							// A workflow was created in a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWorkflowCreate}.
	EHPMChangeCallbackOperation_ProjectWorkflowDelete,							// A workflow was deleted in a project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWorkflowDelete}.

	EHPMChangeCallbackOperation_ProjectReportsChange,							// The reports of the project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectReportsChange}.

	EHPMChangeCallbackOperation_ProjectWorkflowStatusStatsChange,				// The statistics of a workflow status in the project changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWorkflowStatusStatsChange}.
	EHPMChangeCallbackOperation_ProjectWorkflowNewVersion,						// A new version of a workflow in the project is available. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectWorkflowNewVersion}.
	
	EHPMChangeCallbackOperation_TaskUpdatePipelineWorkflowToNewestVersion,		// A task updated a pipeline structure. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion}.
	
	EHPMChangeCallbackOperation_GlobalWorkflowsDeleted,							// All versions of a workflow where deleted in the project. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalWorkflowsDeleted}.

	EHPMChangeCallbackOperation_GlobalReportsChange,							// The global reports changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalReportsChange}.

	EHPMChangeCallbackOperation_TaskLastExitWorkflowStatusChange,				// Last exit status for a specific workflow status changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskLastExitWorkflowStatusChange}.
	EHPMChangeCallbackOperation_TaskLastEnterWorkflowStatusChange,				// Last enter status for a specific workflow status changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange}.
	EHPMChangeCallbackOperation_TaskLastAssignedInWorkflowStatusChange,			// Last assigned in a specific workflow status changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange}.
	EHPMChangeCallbackOperation_GlobalDocumentAttachmentLimitChange,			// The global document attachment size limit changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange}.

	EHPMChangeCallbackOperation_TaskCreateUnified,								// Tasks and/or proxies was created in a container. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskCreateUnified}.
	EHPMChangeCallbackOperation_TaskChangeDisposition,							// The disposition of tasks in a container was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangeDisposition}.

	// Version 6.0 Changes
	EHPMChangeCallbackOperation_AuthenticationProtocolBegin,					// This Custom Authentication Plugin should initiate its authentication protocol. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_AuthenticationProtocolBegin}.
	EHPMChangeCallbackOperation_CommunicationChannelPacketReceived,				// The SDK session received a packet sent to a named communication channel and / or SDK session ID. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CommunicationChannelPacketReceived}.
	EHPMChangeCallbackOperation_CommunicationChannelPacketDropped,				// A packet sent by the SDK session could not be delivered. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CommunicationChannelPacketDropped}.
	EHPMChangeCallbackOperation_AuthenticationResolveCredentials,				// This Custom Authentication Integration should validate the credentials provided. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_AuthenticationResolveCredentials}.
	EHPMChangeCallbackOperation_CommunicationChannelRegisterFailed,				// The request of the SDK session to register a communication channel failed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CommunicationChannelRegisterFailed}.

	EHPMChangeCallbackOperation_ProjectAgilePriorityCustomColumnChange,			// The agile priority has been updated to use a new custom column. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange}.
	EHPMChangeCallbackOperation_ResourceLockFlagsChange,						// The lock flags of a resource have been changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceLockFlagsChange}.

	// Version 6.1 Changes
	EHPMChangeCallbackOperation_AuthenticationResolveCredentialsResponse,		// A credential resolution request has completed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_AuthenticationResolveCredentialsResponse}.
	EHPMChangeCallbackOperation_TaskChangeIdealDaysHistory,						// The ideal days history of a task was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangeIdealDaysHistory}.
	EHPMChangeCallbackOperation_TaskChangePointsHistory,						// The points history of a task was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangePointsHistory}.
	EHPMChangeCallbackOperation_CalendarChangeHolidays,							// The holidays of a calendar were changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CalendarChangeHolidays}.
	EHPMChangeCallbackOperation_CalendarChangeCustomWorkingHours,				// The changed working hours of a calendar were changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CalendarChangeCustomWorkingHours}.
	EHPMChangeCallbackOperation_CalendarChangeWorkingHours,						// The working hours of a calendar were changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CalendarChangeWorkingHours}.
	EHPMChangeCallbackOperation_CalendarChangeCustomWorkingDays,				// The changed working days of a calendar were changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CalendarChangeCustomWorkingDays}.
	EHPMChangeCallbackOperation_CalendarChangeWorkingDays,						// The working days of a calendar were changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CalendarChangeWorkingDays}.

	// Version 6.5 Changes
	EHPMChangeCallbackOperation_ResourcePreferredLanguageChange,				// The preferred language of a resource changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourcePreferredLanguageChange}.
	EHPMChangeCallbackOperation_ResourceLastUsedLanguageChange,					// The last used language of a resource changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceLastUsedLanguageChange}.
	EHPMChangeCallbackOperation_ProjectViewPresetsChange,						// The view presets of a project changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectViewPresetsChange}.
	EHPMChangeCallbackOperation_ProjectViewPresetsApplied,						// The view presets have been applied. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectViewPresetsApplied}.
	EHPMChangeCallbackOperation_ResourceTimesheetPeriodDataDelete,				// The timesheets for a period were deleted. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete}.
	EHPMChangeCallbackOperation_ProjectTimesheetLockChange,						// The timesheet lock for a project changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectTimesheetLockChange}.
	EHPMChangeCallbackOperation_GlobalTimesheetConfigChange,					// The timesheet configuration changed.  {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalTimesheetConfigChange}.

	// Version 6.7 Changes
	EHPMChangeCallbackOperation_ProjectDisplayUserMessage,						// An SDK session has requested a client display user message. Only received if the logged in resource is the same as the resource the message was sent to. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ProjectDisplayUserMessage}. 
	EHPMChangeCallbackOperation_IDNoLongerExists,								// The identifier specified in the command to the server never existed or has been deleted since the command was sent to server. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_IDNoLongerExists}.
	EHPMChangeCallbackOperation_TaskChangeLastResourceCommentReadTime,			// The last resource comment read time data of a task was changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime}.
	EHPMChangeCallbackOperation_TaskEditComment,								// A comment was created on a task. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskEditComment}.
	EHPMChangeCallbackOperation_TaskCommentSDKInternalDataChange,				// SDK internal data on a comment changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TaskCommentSDKInternalDataChange}.

	EHPMChangeCallbackOperation_DynamicCustomSettingsNotification,				// Dynamic custom settings notification. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_DynamicCustomSettingsNotification}.
	EHPMChangeCallbackOperation_DynamicCustomSettingsValueChanged,				// Dynamic custom settings value changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_DynamicCustomSettingsValueChanged}.
	EHPMChangeCallbackOperation_DynamicCustomSettingsValuesRequestResponse,		// Response to a dynamic custom settings value request. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse}.
	EHPMChangeCallbackOperation_CommunicationChannelsChanged,					// The a SDK communication channels changed. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CommunicationChannelsChanged}.

	EHPMChangeCallbackOperation_RightClickDisplayTaskMenu,						// Tasks were right clicked. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_RightClickDisplayTaskMenu}.
	EHPMChangeCallbackOperation_RightClickDisplayWorkflowStepMenu,				// A workflow step was right clicked. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu}.
	EHPMChangeCallbackOperation_RightClickMenuItemSelected,						// A right click menu item was selected. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_RightClickMenuItemSelected}.
	
	// Version 7.0 Changes
	EHPMChangeCallbackOperation_ResourceGetTimesheetDayResponse,				// The response to requested timesheet day data for a resource. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceGetTimesheetDayResponse}.
	EHPMChangeCallbackOperation_TimesheetGetDateRangeResponse,					// The response to requested timesheet date range data. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TimesheetGetDateRangeResponse}.
	EHPMChangeCallbackOperation_TimesheetRowChange,								// A timesheet row was changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_TimesheetRowChange}.
	EHPMChangeCallbackOperation_ChatMessage,									// A chat message was received. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ChatMessage}.
	EHPMChangeCallbackOperation_ChatMessageLastID,								// The last id in a chat room was upped. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ChatMessageLastID}.
	EHPMChangeCallbackOperation_ChatMessageLastReadID,							// The last read id in a chat room was upped. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ChatMessageLastReadID}.
	EHPMChangeCallbackOperation_ChatOnlineStatusChange,							// The chat online status for a resource changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ChatOnlineStatusChange}.
	EHPMChangeCallbackOperation_ChatHistoryReceived,							// Chat history was received. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ChatHistoryReceived}.
	EHPMChangeCallbackOperation_VersionControlUploadAvatarFilesResponse,		// Response to a upload avatar files operation. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse}.
	EHPMChangeCallbackOperation_ResourceDoNotDisturbChange,						// The do not disturb flag for a resource changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_ResourceDoNotDisturbChange}.
	EHPMChangeCallbackOperation_GlobalEmailSettingsChange,						// The global email settings changed. {HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_GlobalEmailSettingsChange}.

	// Version 7.1 Changes
	EHPMChangeCallbackOperation_CustomTaskStatusNotification,				// Dynamic custom task status notification. @{HPMChangeCallbackInfo}::m_pCallbackData should be cast to @{HPMChangeCallbackData_CustomTaskStatusNotification}.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		License violation reason used for											|
|						@{HPMChangeCallbackData_ResourceLicenseViolation}::m_ViolationReason		|
|																									|
|	See Also:			@{HPMChangeCallbackData_ResourceLicenseViolation}							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMLicenseViolationReason
{
	EHPMLicenseViolationReason_NewVersionOfSDKRequired,					// The reason did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this reason.
	EHPMLicenseViolationReason_CreateResourceExceededLicense,			// A command to create a resource would have caused the license to be exceeded. The command was not performed.
	EHPMLicenseViolationReason_ChangeUserExceededLicense,				// A command to change a resource would have caused the license to be exceeded. The command was not performed.
	EHPMLicenseViolationReason_ChangeUserExceededLicense_Overridden,	// A command to change a resource caused the license to be exceeded. The command was performed and the license is now exceeded.
	EHPMLicenseViolationReason_ConvertResourceExceededLicense,			// A command to convert a resource would have caused the license to be exceeded. The command was not performed.
	EHPMLicenseViolationReason_CannotChangeDeletedResource,				// The license does not allow deleted resources to be changed. The command was not performed.
	EHPMLicenseViolationReason_CannotUndeleteADeletedResource,			// The license does not deleted resources to be undeleted. The command was not performed.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Reason for dropped packet, used by											|
|						@{HPMChangeCallbackData_CommunicationChannelPacketDropped}::m_Reason		|
|																									|
|	See Also:			@{HPMChangeCallbackData_CommunicationChannelPacketDropped},					|
|						@{CommunicationChannelRegister}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMPacketDropReason
{
	EHPMPacketDropReason_ChannelNotRegistered,							// The packet's destination channel does not exist at the server.
	EHPMPacketDropReason_UnknownDestinationSession,						// The packet's destination session ID is not known to the server.
	EHPMPacketDropReason_ChannelNotAuthenticationProvider,				// The destination channel does not support the transmission of login authentication packets.
	EHPMPacketDropReason_ChannelNotCredentialChecksProvider,			// The destination channel does not support the transmission of login authentication packets.
	EHPMPacketDropReason_NewVersionOfSDKRequired,						// The reason did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this reason.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Reason for dropped packet, used by											|
|						@{HPMChangeCallbackData_CommunicationChannelRegisterFailed}::m_Reason		|
|																									|
|	See Also:			@{HPMChangeCallbackData_CommunicationChannelRegisterFailed},				|
|						@{CommunicationChannelRegister}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMChannelRegisterFailReason
{
	EHPMChannelRegisterFailReason_UserNotAuthenticationProvider,				// The channel flag @{EHPMChannelFlag}_SupportsAuthentication was specified but the session's SDK user account is not permitted to provide login authentication services.
	EHPMChannelRegisterFailReason_UserNotResolveCredentialsProvider,			// The channel flag @{EHPMChannelFlag}_SupportsResolveCredentials was specified but the session's SDK user account is not permitted to provide credential resolution services.
	EHPMChannelRegisterFailReason_NewVersionOfSDKRequired,						// The reason did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this reason.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/

enum EHPMDynamicCustomSettingsNotification
{
	EHPMDynamicCustomSettingsNotification_NewVersionOfSDKRequired,	// The custom setting notification did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this reason.
	EHPMDynamicCustomSettingsNotification_DialogBegin,				// A dialog has started displaying to user.
	EHPMDynamicCustomSettingsNotification_DialogEndedOk,			// A dialog was ended by pressing OK.
	EHPMDynamicCustomSettingsNotification_DialogEndedCancel,		// A dialog was ended by canceling it.
	EHPMDynamicCustomSettingsNotification_DialogEndedClose,			// A dialog was ended by pressing close.
	EHPMDynamicCustomSettingsNotification_DialogEndedYes,			// A dialog was ended by pressing yes.
	EHPMDynamicCustomSettingsNotification_DialogEndedNo,			// A dialog was ended by pressing no.
	EHPMDynamicCustomSettingsNotification_DialogEndedCustom,		// A dialog was ended by pressing a custom button.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/

enum EHPMCustomTaskStatusNotification
{
	EHPMCustomTaskStatusNotification_NewVersionOfSDKRequired,	// The custom task status notification did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this reason.
	EHPMCustomTaskStatusNotification_DialogBegin,				// A dialog has started displaying to user.
	EHPMCustomTaskStatusNotification_DialogEndedOk,				// A dialog was ended by pressing OK.
	EHPMCustomTaskStatusNotification_DialogEndedCancel,			// A dialog was ended by canceling it.
	EHPMCustomTaskStatusNotification_DialogEndedModalOpen,		// A dialog was ended because a modal dialog was already open in the Hansoft client.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalStatisticsSettingsChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalStatisticsSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalStatisticsSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalServerNameChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalServerNameChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalServerNameChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalDocumentAttachmentLimitChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_AuthenticationProtocolBegin.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_AuthenticationProtocolBegin
{
	const HPMChar *m_pIdentifier;					// the identifier of the authentication method to start. The Plugin had previously registered this method using the @{AuthenticationClientPluginRegister} function.
	const HPMChar *m_pUserName;						// the user name entered into the login dialog by the user.
	const HPMChar *m_pPassword;						// the password entered into the login dialog by the user.
} HPMChangeCallbackData_AuthenticationProtocolBegin;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelPacketReceived.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CommunicationChannelPacketReceived
{
	const HPMChar *m_pChannelName;					// The name of the channel on which the packet was sent.
	HPMUInt64 m_ToSessionID;						// The identifier of the SDK session to which the packet was sent, or 0 if the packet was sent to the channel's owner session.
	HPMUInt64 m_FromSessionID;						// The identifier of the SDK session that sent the packet.
	HPMCommunicationChannelPacket m_Packet;			// The packet's data and settings
} HPMChangeCallbackData_CommunicationChannelPacketReceived;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelPacketDropped.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CommunicationChannelPacketDropped
{
	const HPMChar *m_pChannelName;					// The name of the channel for which the packet was intended.
	HPMUInt64 m_ToSessionID;						// The identifier of the SDK session for which the packet was intended, or 0 if the packet was sent to the channel's owner session.
	HPMUInt64 m_FromSessionID;						// The identifier of the SDK session that sent the packet, that is: the session receiving this callback.
	HPMCommunicationChannelPacket m_Packet;			// The packet that was dropped
	HPMInt32 m_Reason;								// [type=EHPMPacketDropReason,default=EHPMPacketDropReason_NewVersionOfSDKRequired] The reason why the packet was dropped, one of @{EHPMPacketDropReason}.
} HPMChangeCallbackData_CommunicationChannelPacketDropped;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelRegisterFailed.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{CommunicationChannelRegister}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CommunicationChannelRegisterFailed
{
	const HPMChar *m_pChannelName;					// The name of the channel to which the session attempted to register.
	HPMInt32 m_Reason;								// [type=EHPMChannelRegisterFailReason,default=EHPMChannelRegisterFailReason_NewVersionOfSDKRequired] The reason why the registration failed, one of @{EHPMChannelRegisterFailReason}.
} HPMChangeCallbackData_CommunicationChannelRegisterFailed;



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelsChanged.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{CommunicationChannelRegister}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CommunicationChannelsChanged
{
	const HPMChar *m_pChannelName;					// The name of the channel that was registered.
} HPMChangeCallbackData_CommunicationChannelsChanged;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_AuthenticationResolveCredentials.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_AuthenticationResolveCredentials
{
	const HPMChar *m_pChannelName;					// The name of the channel on which the credential check request was sent.
	HPMUInt64 m_ToSessionID;						// The identifier of the SDK session to which the packet was sent, that is: this session.
	HPMUInt64 m_FromSessionID;						// The identifier of the SDK session requesting the credentials check.
	const HPMChar *m_pUserName;						// the user name to check.
	const HPMChar *m_pPassword;						// the password to check.
} HPMChangeCallbackData_AuthenticationResolveCredentials;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_AuthenticationResolveCredentialsResponse.	|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/

typedef struct HPMChangeCallbackData_AuthenticationResolveCredentialsResponse
{
	const HPMChar *m_pUserName;						// The user name that was checked
	HPMUniqueID m_ResourceID;						// Set to 0 if the credential resolution failed, otherwise: the User ID of the user that was verified.
	HPMUInt64 m_AuthSessionID;						// If m_ResourceID != 0: the identifier of the SDK session that performed the credential resolution.
} HPMChangeCallbackData_AuthenticationResolveCredentialsResponse;



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceCreate.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceCreate
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the created resource.
	HPMUniqueID m_TemporaryResourceID;				// When in nonblocking mode this is the identifier returned from the @{ResourceCreate} function.
} HPMChangeCallbackData_ResourceCreate;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceDelete.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the deleted resource.
} HPMChangeCallbackData_ResourceDelete;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourcePropertiesChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourcePropertiesChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that properties was changed on.
} HPMChangeCallbackData_ResourcePropertiesChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceGlobalSettingsChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceGlobalSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that global settings was changed for.
} HPMChangeCallbackData_ResourceGlobalSettingsChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceLicenseViolation.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{EHPMLicenseViolationReason}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceLicenseViolation
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this license violation was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMInt32 m_ViolationReason;						// [type=EHPMLicenseViolationReason,default=EHPMLicenseViolationReason_NewVersionOfSDKRequired] The reason the license was violated. Can be one of @{EHPMLicenseViolationReason}.
} HPMChangeCallbackData_ResourceLicenseViolation;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceLockFlagsChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceLockFlagsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that lock flags was changed for.
} HPMChangeCallbackData_ResourceLockFlagsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourcePreferredLanguageChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourcePreferredLanguageChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that preferred language was changed for.
	HPMUInt16 m_LanguageID;							// The language id of the new language
	const HPMChar *m_pCustomLanguageID;				// The custom language id of the new language
} HPMChangeCallbackData_ResourcePreferredLanguageChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceLastUsedLanguageChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceLastUsedLanguageChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that preferred language was changed for.
	HPMUInt16 m_LanguageID;							// The language id of the new language
	const HPMChar *m_pCustomLanguageID;				// The custom language id of the new language
} HPMChangeCallbackData_ResourceLastUsedLanguageChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceGroupsChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceGroupsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_ResourceGroupsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectViewPresetsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectViewPresetsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project the presets changed in.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that changed the presets.
} HPMChangeCallbackData_ProjectViewPresetsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectViewPresetsApplied.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectViewPresetsApplied
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that the presets have been applied for.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project the presets have been applied in.
} HPMChangeCallbackData_ProjectViewPresetsApplied;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceTimesheetWeekDataChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceTimesheetWeekDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;									// The unique identifier of the resource that the timesheet week data has been changed for.
	HPMUInt32 m_Year;											// The year that timesheet week data has been changed for.
	HPMUInt32 m_Week;											// The week of year that timesheet week data has been changed for.
} HPMChangeCallbackData_ResourceTimesheetWeekDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalTimesheetConfigChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalTimesheetConfigChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalTimesheetConfigChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceTimesheetPeriodDataDelete.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;									// The unique identifier of the resource that deleted the reports.
	HPMUInt64 m_Date;											// The end date up until the reports where deleted. Expressed as the number of microseconds since 1970 UTC.
} HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectTimesheetLockChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectTimesheetLockChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;									// The unique identifier of the resource that deleted the reports.
} HPMChangeCallbackData_ProjectTimesheetLockChange;
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceGetTimesheetDayResponse.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceGetTimesheetDayResponse
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMTimesheetDay m_Day;											// The timesheet day data.
	HPMInt32 m_CurrentHighestRowID;									// The current highest used row id.
} HPMChangeCallbackData_ResourceGetTimesheetDayResponse;
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TimesheetGetDateRangeResponse.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TimesheetGetDateRangeResponse
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_nTimesheetDays;									// The number of timesheet posts in the report.
	const HPMTimesheetDay *m_pTimesheetDays;					// Pointer to a list of @{HPMTimesheetDay} timesheet posts.
} HPMChangeCallbackData_TimesheetGetDateRangeResponse;
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TimesheetRowChange.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TimesheetRowChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;					// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;							// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;				// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_DayID;										// The unique identifier of the resource that the timesheet day data has been created for.
	HPMUInt32 m_RowID;											// The unique identifier of the day that the timesheet day data has been created for.
	HPMInt32 m_FieldID;											// [type=EHPMTimesheetField,default=EHPMTimesheetField_NewVersionOfSDKRequired] The field type of the field in the row that was changed. Can be one of @{EHPMTimesheetField}.
} HPMChangeCallbackData_TimesheetRowChange;
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectDisplayUserMessage.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectDisplayUserMessage
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;							// The unique identifier of the project to display the message in client for.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource to display the message in client for if the resource is logged in.
	HPMInt32 m_MessageType;								// [type=EHPMProjectUserMessageType,default=EHPMProjectUserMessageType_NewVersionOfSDKRequired] The type of user message to display. Can be one of @{EHPMProjectUserMessageType}.
	const HPMUntranslatedString *m_pMessage;			// The message to display.
} HPMChangeCallbackData_ProjectDisplayUserMessage;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_IDNoLongerExists.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_IDNoLongerExists
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
} HPMChangeCallbackData_IDNoLongerExists;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ChatMessage.									|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ChatMessage
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that sent the chat message.
	HPMChatRoom m_ChatRoom;								// The chat room where the message was sent.
	const HPMChar *m_Message;							// The chat message.
} HPMChangeCallbackData_ChatMessage;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ChatMessageLastID.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ChatMessageLastID
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMInt64 m_LastChatID;								// The id of the last message in the chat room.
	HPMChatRoom m_ChatRoom;								// The chat room where the message was sent.
} HPMChangeCallbackData_ChatMessageLastID;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ChatMessageLastReadID.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ChatMessageLastReadID
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that read the last chat message.
	HPMInt64 m_LastReadChatID;							// The id of the last read message.
	HPMChatRoom m_ChatRoom;								// The chat room where the message was read.
} HPMChangeCallbackData_ChatMessageLastReadID;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ChatOnlineStatusChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ChatOnlineStatusChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that the chat online status was changed for.
	HPMInt32 m_Status;									// [type=EHPMChatOnlineStatus,default=EHPMChatOnlineStatus_NewVersionOfSDKRequired] The new chat online status. Can be one of @{EHPMChatOnlineStatus}.
} HPMChangeCallbackData_ChatOnlineStatusChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceDoNotDisturbChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceDoNotDisturbChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that the do not disturb flag was changed for.
	HPMInt32 m_bIsDoNotDisturb;							// The new value of the do not disturb flag.
} HPMChangeCallbackData_ResourceDoNotDisturbChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalEmailSettingsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalEmailSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;			// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;					// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;		// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalEmailSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCreate.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCreate
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the created project.
	HPMUniqueID m_TemporaryProjectID;				// When in nonblocking mode this is the identifier returned from the @{ProjectCreate} function.
} HPMChangeCallbackData_ProjectCreate;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectDelete.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that was deleted.
} HPMChangeCallbackData_ProjectDelete;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectPropertiesChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectPropertiesChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifer of the project that had its properties changed.
} HPMChangeCallbackData_ProjectPropertiesChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectSettingsChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that had its settings changed.
} HPMChangeCallbackData_ProjectSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectStatisticsSettingsChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectStatisticsSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that had its statistics settings changed.
} HPMChangeCallbackData_ProjectStatisticsSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_WorkflowChange.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWorkflowChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that had its workflow changed.
	HPMUInt32 m_WorkflowID;							// The identifier of the workflow that changed in the project.
} HPMChangeCallbackData_ProjectWorkflowChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_WorkflowCreate.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWorkflowCreate
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where a workflow was created.
	HPMUInt32 m_WorkflowID;							// The identifier of the workflow that was created in the project.
} HPMChangeCallbackData_ProjectWorkflowCreate;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure used for specifying updated versions of a workflow.				|
|						@{HPMChangeCallbackData_ProjectWorkflowNewVersion}::m_pWorkflows.			|
|						@{HPMChangeCallbackData_ProjectWorkflowDelete}::m_pWorkflows.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_WorkflowUpdateData
{
	HPMUInt32 m_WorkflowOldID;		// The id of the new version of the workflow.
	HPMUInt32 m_WorkflowNewID;		// The id of the old version of the workflow. 
	HPMInt32 m_bReferencesChanged;	// Set to 1 if the workflow id change is due to a new version of a workflow referenced by this workflow, set to 0 if this workflow has a new version. If set to 0 and m_WorkflowOldID and m_WorkflowNewID are equal @{HPMProjectWorkflowSettings}::m_NewestWorkflowVersionID was updated.
} HPMChangeCallbackData_WorkflowUpdateData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_WorkflowDelete.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWorkflowDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;										// The unique identifier of the project where a workflow was deleted.
	HPMUInt32 m_nWorkflows;											// The number of deleted workflows.
	const HPMChangeCallbackData_WorkflowUpdateData *m_pWorkflows;	// Pointer to a list of deleted workflow data.
} HPMChangeCallbackData_ProjectWorkflowDelete;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure used for specifying updated versions of a workflow.				|
|						@{HPMChangeCallbackData_GlobalWorkflowsDeleted}::m_pDeletedWorkflows.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_WorkflowsDeletedData
{
	HPMUniqueID m_ProjectID;		// The unique identifier of the project where a workflow was deleted.
	HPMUInt32 m_WorkflowID;			// The id of the last version of the workflow. 
} HPMChangeCallbackData_WorkflowsDeletedData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_WorkflowsDeleted.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalWorkflowsDeleted
{
	HPMInt32 m_bChangeInitiatedFromThisSession;								// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;										// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;							// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_nDeletedWorkflows;											// The number of deleted workflows.
	const HPMChangeCallbackData_WorkflowsDeletedData *m_pDeletedWorkflows;	// Pointer to a list of deleted workflow data.
} HPMChangeCallbackData_GlobalWorkflowsDeleted;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectReportsChange							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectReportsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where reports changed.
} HPMChangeCallbackData_ProjectReportsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectAgilePriorityCustomColumnChange		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the agile priority custom column changed.
} HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalReporsChange							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalReportsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
} HPMChangeCallbackData_GlobalReportsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectWorkflowStatusStatsChange				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWorkflowStatusStatsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the workflow status statistics changed.
	HPMUInt32 m_WorkflowObjectID;					// The id of the workflow object that the stats changed for.
	HPMUInt32 m_WorkflowStatusID;					// The id of the status that the stats changed for.
} HPMChangeCallbackData_ProjectWorkflowStatusStatsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectWorkflowNewVersion					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWorkflowNewVersion
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;										// The unique identifier of the project where the new version of the workflow was created.
	HPMUInt32 m_nWorkflows;											// The number of updated workflows.
	const HPMChangeCallbackData_WorkflowUpdateData *m_pWorkflows;	// Pointer to a list of updated workflow data.
} HPMChangeCallbackData_ProjectWorkflowNewVersion;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure used for specifying updated versions of a workflow.				|
|						@{HPMChangeCallbackData_TaskUpdateData}::m_pFields.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_FieldUpdateData
{
	HPMInt32 m_FieldID;		// The field id of the data for this entry. Depending on if @{HPMChangeCallbackData_TaskUpdateData}::m_ID is a task ref id or task id this field is one of @{EHPMTaskRefField} or @{EHPMTaskField} respectively. If -1 the task it belongs to was deleted or created. Check with @{UtilIsIDValid} if @{HPMChangeCallbackData_TaskUpdateData}::m_ID exist.
	HPMUInt32 m_FieldData;	// The field data of the data for this entry. If m_FieldID is @{EHPMTaskField}_CustomColumnData this member is the column hash of the custom column data.
} HPMChangeCallbackData_FieldUpdateData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																										|
|																												|
|																												|
|	Description:		Structure used for specifying updated versions of a task.								|
|						@{HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion}::m_pTasks.			|
|																												|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}								|
|																												|
|	Location:			Structures																				|
|																												|
|	Index:				!name																					|
\*_____________________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskUpdateData
{
	HPMUniqueID m_ID;										// The unique task id or task reference id that was updated.
	HPMUInt32 m_nFields;									// The number of updated fields.
	const HPMChangeCallbackData_FieldUpdateData *m_pFields;	// Pointer to a list of updated fields.
} HPMChangeCallbackData_TaskUpdateData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskUpdatePipelineWorkflowToNewestVersion	|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;										// The unique identifier of the project where the pipeline was updated.
	HPMUInt32 m_nTasks;												// The number of updated tasks.
	const HPMChangeCallbackData_TaskUpdateData *m_pTasks;			// Pointer to a list of updated tasks.
} HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectEmailSettingsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectEmailSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that had its email settings changed.
} HPMChangeCallbackData_ProjectEmailSettingsChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectOpenBacklogProject.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectOpenBacklogProject
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the backlog was opened for.
	HPMInt32 m_bSuccess;							// Set to 1 if the open of the backlog succeeded, 0 otherwise.
	HPMUniqueID m_BacklogProjectID;					// The unique identifier of the backlog in the project.
} HPMChangeCallbackData_ProjectOpenBacklogProject;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectOpenQAProject.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectOpenQAProject
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the backlog was opened for.
	HPMInt32 m_bSuccess;							// Set to 1 if the open of the QA project succeeded, 0 otherwise.
	HPMUniqueID m_QAProjectID;						// The unique identifier of the QA in the project.
} HPMChangeCallbackData_ProjectOpenQAProject;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectHistoryAutoSaveSettingsChange.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier the project that project history auto save settings was changed for.
} HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomColumnsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomColumnsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier for the project that had its custom columns changed.
} HPMChangeCallbackData_ProjectCustomColumnsChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomColumnsCreate.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomColumnsCreate
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that a column was created in.
	HPMUInt32 m_ColumnHash;							// The hash of the created column.
} HPMChangeCallbackData_ProjectCustomColumnsCreate;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomColumnsDeleteTaskData.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that task custom column data was deleted in.
	HPMUInt32 m_ColumnHash;							// The hash of the column that task data was deleted for.
} HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomColumnsRenameTaskData.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that task custom column data was renamed in.
	HPMUInt32 m_ColumnHashFrom;						// The hash of the column data to be moved.
	HPMUInt32 m_ColumnHashTo;						// The hash to move the column data to.
} HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectActiveDefaultColumnsChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectActiveDefaultColumnsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that active default columns was changed for.
} HPMChangeCallbackData_ProjectActiveDefaultColumnsChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectWallSettingsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWallSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that changed the wall settings.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that wall settings was changed for.
} HPMChangeCallbackData_ProjectWallSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectWallGroupsChange.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectWallGroupsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that changed the wall groups.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that wall groups was changed for.
} HPMChangeCallbackData_ProjectWallGroupsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectDetailedAccessRulesChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectDetailedAccessRulesChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that changed the detailed access rules.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that detailed access rules was changed for.
} HPMChangeCallbackData_ProjectDetailedAccessRulesChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomStatisticsSettingsChange.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that changed the custom statistics settings.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that custom statistics settings was changed for.
} HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectResourceAdd.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectResourceAdd
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that a resource was added to.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that was added to the project.
} HPMChangeCallbackData_ProjectResourceAdd;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectResourceRemove.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectResourceRemove
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that a resource was removed from.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that was removed from the project.
} HPMChangeCallbackData_ProjectResourceRemove;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectResourcePropertiesChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectResourcePropertiesChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that resource properties was changed for.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that project properties was changed for.
} HPMChangeCallbackData_ProjectResourcePropertiesChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure used for specifying a created task in								|
|						@{HPMChangeCallbackData_TaskCreateUnified}::m_pTasks.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskCreateUnifiedTask
{
	HPMInt32 m_bIsProxy;			// Is set to true if the created task is a proxy.
	HPMUniqueID m_LocalID;			// The local ID specified in @{HPMTaskCreateUnifiedEntry}::m_LocalID.
	HPMUniqueID m_TaskRefID;		// This will point to the unique identifiers of the task references of the created task, if this ID is -1 the creation of the proxy was unsuccessful, non-proxy tasks will always be created.
} HPMChangeCallbackData_TaskCreateUnifiedTask;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskCreateUnified.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskCreateUnified
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;										// The unique identifier of the project that tasks were created in.
	HPMUInt32 m_nTasks;												// The number of tasks created.
	const HPMChangeCallbackData_TaskCreateUnifiedTask *m_pTasks;	// Pointer to a list of created tasks.
} HPMChangeCallbackData_TaskCreateUnified;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChangeDisposition.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangeDisposition
{
	HPMInt32 m_bChangeInitiatedFromThisSession;						// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;								// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;					// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;										// The unique identifier of the project that tasks were changed in.
	HPMInt32 m_bChangeWorkPriorityDisposition;						// Set to true if @{EHPMTaskChangeDispositionOptionFlag}_ChangeWorkPriorityDisposition was specified.
	HPMInt32 m_bDispositionChangedRejected;							// Set to true when the disposition change was rejected as invalid by the server.

	const HPMChar *m_pRejectedDebugData;							// Filled in with a debug string when disposition change was rejected by the server and @{EHPMTaskChangeDispositionOptionFlag}_ReportDebugInfoOnRejection was specified
	HPMUInt32 m_nTasksRejected;										// The number of tasks references rejected.
	const HPMUniqueID *m_pTasksRejected;							// Pointer to a list task references rejected. This list is only a help to match the task references that you sent with changes in @{HPMTaskCreateUnified}. It is basically a copy of that list.
} HPMChangeCallbackData_TaskChangeDisposition;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskDelete.									|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the deleted task.
} HPMChangeCallbackData_TaskDelete;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskCreateComment.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskCreateComment
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a comment was created on.
	HPMInt32 m_PostID;								// The post identifier of the created comment. Can be -1 if several comments were created in one database message.
} HPMChangeCallbackData_TaskCreateComment;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskCommentSDKInternalDataChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskCommentSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a comment was created on.
	HPMInt32 m_PostID;								// The post identifier of the created comment. Can be -1 if several comments were created in one database message.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the comment SDK internal data value was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_TaskCommentSDKInternalDataChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskEditComment.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskEditComment
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a comment was created on.
	HPMInt32 m_PostID;								// The post identifier of the edited comment.
} HPMChangeCallbackData_TaskEditComment;



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskDeleteComment.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskDeleteComment
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task a comment was deleted on.
	HPMInt32 m_PostID;								// The post identifier of the deleted comment post.
} HPMChangeCallbackData_TaskDeleteComment;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskCommentPosted.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskCommentPosted
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a comment was posted on.
	HPMInt32 m_PostID;								// The post identifier of the posted comment.
} HPMChangeCallbackData_TaskCommentPosted;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChange.									|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}, @{EHPMTaskField}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that was changed.
	HPMUInt32 m_FieldChanged;						// [type=EHPMTaskField,default=EHPMTaskField_NewVersionOfSDKRequired] The type of data in the task that was changed. Can be one of @{EHPMTaskField}.
} HPMChangeCallbackData_TaskChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskLastExitWorkflowStatusChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}, @{EHPMTaskField}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskLastExitWorkflowStatusChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task the workflow is set on.                                                                   
	HPMUInt32 m_WorkflowID;							// The identifier of the workflow that had a status change.                                   
	HPMUInt32 m_WorkflowObjectID;					// The identifier of the old status in the workflow. 
} HPMChangeCallbackData_TaskLastExitWorkflowStatusChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskLastEnterWorkflowStatusChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that was changed.                                                                             
	HPMUInt32 m_WorkflowID;							// The identifier of the workflow that had a status change.                                   
	HPMUInt32 m_WorkflowObjectID;					// The identifier of the new status in the workflow.                                                
} HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskLastAssignedInWorkflowStatusChange.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that was changed.                                                                             
	HPMUInt32 m_WorkflowID;							// The identifier of the workflow that had a status change. If set to -1 all status assignments for all workflows on this task might have changed.                                 
	HPMUInt32 m_WorkflowObjectID;					// The identifier of the old status in the workflow.                   
} HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChangeCustomColumnData.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangeCustomColumnData
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a custom column data entry was changed for.
	HPMUInt32 m_ColumnHash;							// The hash of the column of which data on the task was changed.
} HPMChangeCallbackData_TaskChangeCustomColumnData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChangeLastResourceCommentReadTime.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that a last resource comment read time was changed for.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that last resource comment read time was changed for.
} HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChangeWorkRemainingHistory.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangeWorkRemainingHistory
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that work remaining history was changed for.
	HPMUInt32 m_DayInSprint;						// The day in the sprint that work remaining was changed for.
} HPMChangeCallbackData_TaskChangeWorkRemainingHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						or @{EHPMChangeCallbackOperation}_TaskChangePointsHistory.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangePointsHistory
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that history was changed for.
	HPMUInt32 m_DayInSprint;						// The day in the sprint that history was changed for.
} HPMChangeCallbackData_TaskChangePointsHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskChangeIdealDaysHistory.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskChangeIdealDaysHistory
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that history was changed for.
	HPMUInt32 m_DayInSprint;						// The day in the sprint that history was changed for.
} HPMChangeCallbackData_TaskChangeIdealDaysHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskRefChange.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{EHPMTaskRefField}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskRefChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskRefID;						// The unique identifier of the task reference that data was changed for.
	HPMUInt32 m_FieldChanged;						// [type=EHPMTaskRefField,default=EHPMTaskRefField_NewVersionOfSDKRequired] The type of data in the task reference that was changed. Can be one of @{EHPMTaskRefField}.
} HPMChangeCallbackData_TaskRefChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskRefDelete.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskRefDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskRefID;						// The uinque identifier of the task reference that was deleted.
} HPMChangeCallbackData_TaskRefDelete;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskRefConnect.								|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskRefConnect
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_LocalTempConnectionID;			// When in nonblocking mode this is the identifier returned from the @{TaskRefConnect} function.
	HPMUniqueID m_ConnectionID;						// The unique identifier of the created connection.
	HPMUniqueID m_TaskRefIDFrom;					// The unique identifier of the task a task was connected from.
	HPMUniqueID m_TaskRefIDTo;						// The unique identifier of the task a task was connected to.
} HPMChangeCallbackData_TaskRefConnect;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskConnectionDelete.						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskConnectionDelete
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ConnectionID;						// The unique identifier of
} HPMChangeCallbackData_TaskConnectionDelete;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskConnectionChangeType.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskConnectionChangeType
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ConnectionID;						// The unique identifier of the connection that the type was changed for.
} HPMChangeCallbackData_TaskConnectionChangeType;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskConnectionChangeLeadLagTime.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskConnectionChangeLeadLagTime
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ConnectionID;						// The unique identifier of the connection that the type was changed for.
} HPMChangeCallbackData_TaskConnectionChangeLeadLagTime;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_DataHistoryReceived.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_DataHistoryReceived
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_UniqueIdentifier;					// The unique identifier of the data received.
	HPMInt32 m_FieldID;								// The field id of the data received.
	HPMUInt32 m_FieldData;							// The field data of the data received.
	HPMUInt32 m_DataIdent0;							// The first data identifier of the data received.
	HPMUInt32 m_DataIdent1;							// The second data identifier of the data received.
} HPMChangeCallbackData_DataHistoryReceived;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ChatHistoryReceived.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ChatHistoryReceived
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_UniqueIdentifier;					// The unique identifier of the data received.
	HPMChatRoom m_ChatRoom;							// The chat room identifier of the chat history data received.
} HPMChangeCallbackData_ChatHistoryReceived;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CalendarChangeHolidays						|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CalendarChangeHolidays
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the calendar was changed.
} HPMChangeCallbackData_CalendarChangeHolidays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CalendarChangeChangedWorkingHours			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CalendarChangeCustomWorkingHours
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the calendar was changed.
} HPMChangeCallbackData_CalendarChangeCustomWorkingHours;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CalendarChangeWorkingHours					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CalendarChangeWorkingHours
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the calendar was changed.
} HPMChangeCallbackData_CalendarChangeWorkingHours;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CalendarChangeChangedWorkingDays				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CalendarChangeCustomWorkingDays
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the calendar was changed.
} HPMChangeCallbackData_CalendarChangeCustomWorkingDays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CalendarChangeWorkingDays					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CalendarChangeWorkingDays
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project where the calendar was changed.
} HPMChangeCallbackData_CalendarChangeWorkingDays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlAllCommandsFinished.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlAllCommandsFinished
{
	HPMUInt32 m_Dummy;	// No data needed.
} HPMChangeCallbackData_VersionControlAllCommandsFinished;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlFileInfoChanged.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlFileInfoChanged
{
	HPMUInt32 m_Dummy;	// No data needed.
} HPMChangeCallbackData_VersionControlFileInfoChanged;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlFileTreeAvailable.				|
|																									|
|	Comments:			This callback will be received when the file tree has changed on the server.|
|						The new file tree will be downloaded the next time you enumerate files.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlFileTreeAvailable
{
	HPMUInt32 m_Dummy;	// No data needed.
} HPMChangeCallbackData_VersionControlFileTreeAvailable;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlWarnFileOverwriteDelete.		|
|																									|
|	Comments:			The @{HPMChangeCallback} callback should return 1 if it is ok to delete		|
|						and overwrite the files. If it is not ok it should return 0 and the			|
|						operation will not be performed.											|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete
{
	HPMUInt32 m_nFilesToDelete;				// The number of files that will be deleted that wasn't in document management before.
	const HPMString *m_pFilesToDelete;		// Pointer to a list of strings that are the files to be deleted.
	HPMUInt32 m_nFilesToOverwrite;			// The number of changed files that will be overwritten.
	const HPMString *m_pFilesToOverwrite;	// Pointer to a list of strings that are the files to be overwritten.
} HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlWarnCheckOutShouldSync.		|
|																									|
|	Comments:			The @{HPMChangeCallback} callback should return 1 if it is ok to delete		|
|						and overwrite the files. If it is not ok it should return 0 to check out	|
|						the files without syncing them first. Otherwise return 2 and the operation	|
|						will be canceled.															|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync
{
	HPMUInt32 m_nFilesToDelete;				// The number of files that will be deleted that wasn't in document management before.
	const HPMString *m_pFilesToDelete;		// Pointer to a list of strings that are the files to be deleted.
	HPMUInt32 m_nFilesToOverwrite;			// The number of changed files that will be overwritten.
	const HPMString *m_pFilesToOverwrite;	// Pointer to a list of strings that are the files to be overwritten.
} HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to describe an error that occurred for a file in a version control		|
|						operation.																	|
|																									|
|	See Also:			@{EHPMVersionControlError},													|
|						@{HPMChangeCallbackData_VersionControlSyncFilesResponse},					|
|						@{HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse},			|
|						@{HPMChangeCallbackData_VersionControlDeleteFilesResponse},					|
|						@{HPMChangeCallbackData_VersionControlRenameResponse},						|
|						@{HPMChangeCallbackData_VersionControlCheckInFilesResponse},				|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse},					|
|						@{HPMChangeCallbackData_VersionControlCheckOutFilesResponse},				|
|						@{HPMChangeCallbackData_VersionControlSetAccessRightsResponse},				|
|						@{HPMChangeCallbackData_VersionControlRollbackFileResponse},				|
|						@{HPMChangeCallbackData_VersionControlDeleteVersionsResponse},				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlErrorResponse
{
	const HPMChar *m_pFile;							// The file that the error occurred for.
	HPMUInt64 m_FileID;								// The file id of the file that the error occurred for.
	HPMUInt32 m_Error;								// [type=EHPMVersionControlError,default=EHPMVersionControlError_NewVersionOfSDKRequired] The error that occurred for the file. Can be one of @{EHPMVersionControlError}.
	const HPMUntranslatedString *m_pCustomError;	// A custom error string containing extra information about the error.
} HPMChangeCallbackData_VersionControlErrorResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_SyncFilesResponse.							|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlSyncFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nNotSyncedBecauseCheckedOut;													// The number of files that were not synced because they are checked out.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pNotSyncedBecauseCheckedOut;		// Pointer to a list of files that were not synced because they are checked out.
	HPMUInt32 m_nLocalFiles;																	// The number of files of local files received. This member will only be valid if you specified to sync a specified version.
	const HPMString *m_pLocalFiles;																// Pointer to a list of local files received. This member will only be valid if you specified to sync a specified version.
} HPMChangeCallbackData_VersionControlSyncFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlAddFilesResponse.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlAddFiles}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlAddFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
	HPMUInt32 m_nAlreadyExists;																	// The number of files that were not synced because they are checked out.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pAlreadyExists;					// Pointer to a list of files that were not synced because they are checked out.
	HPMUInt32 m_nExtraData;																		// The number of bytes of extra data in the response. The extra data is the same as specified in @{HPMVersionControlAddFiles}.
	const HPMUInt8 *m_pExtraData;																// Pointer to a buffer of bytes. The extra data is the same as specified in @{HPMVersionControlAddFiles}.
} HPMChangeCallbackData_VersionControlAddFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlUploadAvatarFilesResponse.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse
{
	HPMUInt32 m_nDeleteErrors;																	// The number of delete previous avatar files errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pDeleteErrors;					// Pointer to a list of delete previous avatar files errors that occurred.
	HPMUInt32 m_nDeleteSucceeded;																// The number of delete previous avatar files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pDeleteSucceeded;				// Pointer to a list of delete previous avatar files that succeeded.
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
	HPMUInt32 m_nAlreadyExists;																	// The number of files that were not synced because they are checked out.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pAlreadyExists;					// Pointer to a list of files that were not synced because they are checked out.
	HPMUInt32 m_nExtraData;																		// The number of bytes of extra data in the response. The extra data is the same as specified in @{HPMVersionControlAddFiles}.
	const HPMUInt8 *m_pExtraData;																// Pointer to a buffer of bytes. The extra data is the same as specified in @{HPMVersionControlAddFiles}.
} HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlCheckInFilesResponse.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlCheckInFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
	HPMUInt32 m_nSkippedFiles;																	// The number of files that were skipped.
	HPMInt32 m_bForceReverted;																	// If set to 1 the files where force reverted, 0 otherwise.
	HPMUInt32 m_nExtraData;																		// The number of bytes of extra data in the response. The extra data is the same as specified in @{HPMVersionControlCheckInFiles}.
	const HPMUInt8 *m_pExtraData;																// Pointer to a buffer of bytes. The extra data is the same as specified in @{HPMVersionControlCheckInFiles}.
} HPMChangeCallbackData_VersionControlCheckInFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlCheckOutFilesResponse.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlCheckOutFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
	HPMUInt32 m_nAlreadyCheckedOut;																// The number of files that were already checked out.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pAlreadyCheckedOut;				// Pointer to a list of files that were already checked out.
} HPMChangeCallbackData_VersionControlCheckOutFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlRenameResponse.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlRenameResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlRenameResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlDeleteFilesResponse.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlDeleteFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlDeleteFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlRestoreDeletedFilesResponse.	|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlSetAccessRightsResponse.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlSetAccessRightsResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlSetAccessRightsResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlRollbackFileResponse.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlRollbackFileResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlRollbackFileResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlDeleteVersionResponse.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{HPMVersionControlCheckInFiles}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlDeleteVersionsResponse
{
	HPMUInt32 m_nErrors;																		// The number of errors that occurred.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pErrors;							// Pointer to a list of errors that occurred.
	HPMUInt32 m_nSucceeded;																		// The number of files that succeeded.
	const HPMChangeCallbackData_VersionControlErrorResponse *m_pSucceeded;						// Pointer to a list of files that succeeded.
} HPMChangeCallbackData_VersionControlDeleteVersionsResponse;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlGetAccessRightsResponse.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{VersionControlGetAccessRights}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlGetAccessRightsResponse
{
	const HPMChar *m_pFile;		// The file that now has access rights cached locally.
	HPMInt32 m_bAccessDenied;	// Access to getting access rights was denied.
} HPMChangeCallbackData_VersionControlGetAccessRightsResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_VersionControlGetFileHistoryResponse.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{VersionControlGetFileHistory}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_VersionControlGetFileHistoryResponse
{
	const HPMChar *m_pFile;		// The file that now has file history cached locally.
	HPMInt32 m_bAccessDenied;	// Access to getting file history rights was denied.
} HPMChangeCallbackData_VersionControlGetFileHistoryResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalCustomSettingsChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalCustomSettingsChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which custom settings changed. See @{GlobalGetCustomSettingsIdentifierHash}.
} HPMChangeCallbackData_GlobalCustomSettingsChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalCustomSettingsUnregister.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalCustomSettingsUnregister
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which custom settings was unregistered. See @{GlobalGetCustomSettingsIdentifierHash}.
} HPMChangeCallbackData_GlobalCustomSettingsUnregister;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalCustomSettingsValueChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}, @{EHPMCustomSettingsType}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalCustomSettingsValueChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_SettingsType;						// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type that changed. Will be one of @{EHPMCustomSettingsType}.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which the custom settings value was changed. See @{GlobalGetCustomSettingsIdentifierHash}.
	const HPMChar *m_pSettingsPath;					// The path of the setting that changed.
} HPMChangeCallbackData_GlobalCustomSettingsValueChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectCustomSettingsValueChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}, @{EHPMCustomSettingsType}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectCustomSettingsValueChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_SettingsType;						// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type that changed. Will be one of @{EHPMCustomSettingsType}.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the custom settings value changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which the custom settings value was changed. See @{GlobalGetCustomSettingsIdentifierHash}.
	const HPMChar *m_pSettingsPath;					// The path of the setting that changed.
} HPMChangeCallbackData_ProjectCustomSettingsValueChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectResourceCustomSettingsValueChange.	|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}, @{EHPMCustomSettingsType}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_SettingsType;						// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type that changed. Will be one of @{EHPMCustomSettingsType}.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the custom settings value changed for.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that the custom settings value changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which the custom settings value was changed. See @{GlobalGetCustomSettingsIdentifierHash}.
	const HPMChar *m_pSettingsPath;					// The path of the setting that changed.
} HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceCustomSettingsValueChange.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetCustomSettingsIdentifierHash}, @{EHPMCustomSettingsType}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceCustomSettingsValueChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_SettingsType;						// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type that changed. Will be one of @{EHPMCustomSettingsType}.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that the custom settings value changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the integration identifier for which the custom settings value was changed. See @{GlobalGetCustomSettingsIdentifierHash}.
	const HPMChar *m_pSettingsPath;					// The path of the setting that changed.
} HPMChangeCallbackData_ResourceCustomSettingsValueChange;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_GlobalSDKInternalDataChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_GlobalSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_GlobalSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectSDKInternalDataChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the SDK internal data changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_ProjectSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ProjectResourceSDKInternalDataChange.		|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ProjectResourceSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ProjectID;						// The unique identifier of the project that the SDK internal data changed for.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that the SDK internal data changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_ProjectResourceSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ResourceSDKInternalDataChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ResourceSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_ResourceID;						// The unique identifier of the resource that the SDK internal data changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_ResourceSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskSDKInternalDataChange.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskID;							// The unique identifier of the task that the SDK internal data changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_TaskSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_TaskRefSDKInternalDataChange.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo},					|
|						@{GlobalGetSDKInternalDataIdentifierHash}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_TaskRefSDKInternalDataChange
{
	HPMInt32 m_bChangeInitiatedFromThisSession;		// Set to 1 if this change in the database was the result of an operation that was initiated from this session.
	HPMUniqueID m_ChangedByResourceID;				// The unique identifier of the resource that initiated the change.
	HPMUniqueID m_ChangedByImpersonatedResourceID;	// The unique identifier of the impersonated resource that initiated the change.
	HPMUniqueID m_TaskRefID;						// The unique identifier of the task reference that the SDK internal data changed for.
	HPMUInt32 m_IdentifierHash;						// The identifier hash of the SDK internal data identifier for which the SDK internal data was changed. See @{GlobalGetSDKInternalDataIdentifierHash}.
} HPMChangeCallbackData_TaskRefSDKInternalDataChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ClientExecuteURL.							|
|																									|
|	Comments:			The @{HPMChangeCallback} callback should return 1 if the URL was parsed		|
|						and executed. This will prevent further processing of this URL by other		|
|						integration DLLs. If no integration dll handles the URL it will be			|
|						executed by the default OS implementation.									|
|																									|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ClientExecuteURL
{
	const HPMChar *m_pURL;				// The URL to execute.
} HPMChangeCallbackData_ClientExecuteURL;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_DynamicCustomSettingsValueChanged.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_DynamicCustomSettingsValueChanged
{
	HPMDynamicCustomSettingsContext const *m_pDynamicContext;	// The context of the dialog that changes
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalRegisterForDynamicCustomSettingsNotifications};
	HPMUniqueID m_ProjectID;									// The unique identifier of the project that the setting changed in. Only set when applicable.
	HPMUniqueID m_ResourceID;									// The unique identiier of the resource that the setting changed for. Only set when applicable.
	HPMInt32 m_SettingsType;									// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type this change originates from
	HPMInt32 m_bTemporary;										// Set to true when the user is writing in a edit box. You will get another notification when the edit box looses focus.
	const HPMChar *m_pPath;										// The path of the changed data.
	const HPMChar *m_pValue;									// The value that was changed to.
} HPMChangeCallbackData_DynamicCustomSettingsValueChanged;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_DynamicCustomSettingsValuesRequestResponse.	|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse
{
	HPMDynamicCustomSettingsContext const *m_pDynamicContext;	// The context of the dialog that changes
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalRequestDynamicCustomSettingsValues};
	HPMDynamicCustomSettingsValues m_Values;					// The result of the values requested.
} HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_DynamicCustomSettingsNotification.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_DynamicCustomSettingsNotification
{
	HPMDynamicCustomSettingsContext const *m_pDynamicContext;	// The context of the dialog that changes.
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalRegisterForDynamicCustomSettingsNotifications};
	HPMUniqueID m_ProjectID;									// The unique identifier of the project that the setting changed in. Only set when applicable.
	HPMUniqueID m_ResourceID;									// The unique identfier of the resource that the setting changed for. Only set when applicable.
	HPMInt32 m_SettingsType;									// [type=EHPMCustomSettingsType,default=EHPMCustomSettingsType_NewVersionOfSDKRequired] The settings type this change originates from
	HPMInt32 m_Notification;									// [type=EHPMDynamicCustomSettingsNotification,default=EHPMDynamicCustomSettingsNotification_NewVersionOfSDKRequired] The notification.
	HPMInt32 m_CustomNotification;								// The return value of the dialog box if m_Notification is EHPMDynamicCustomSettingsNotification_DialogEndCustom. This corresponds to the order of defined buttons.
	HPMUInt32 m_nTabIdentifiers;								// The number of SDK tab identifiers in the dialog.
	HPMString const *m_pTabIdentifiers;							// The SDK tab identifiers.
} HPMChangeCallbackData_DynamicCustomSettingsNotification;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_CustomTaskStatusNotification.				|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_CustomTaskStatusNotification
{
	HPMDynamicCustomSettingsContext const *m_pDynamicContext;	// The context of the dialog that changes.
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalAddTasksCustomTaskStatusDialog};
	HPMInt32 m_Notification;									// [type=EHPMCustomTaskStatusNotification,default=EHPMCustomTaskStatusNotification_NewVersionOfSDKRequired] The notification.
	HPMUInt32 m_nSelectedTasks;									// The number of selected tasks when m_Notification is EHPMCustomTaskStatusNotification_DialogEndedOk.
	HPMUniqueID const *m_pSelectedTasks;						// The selected tasks when m_Notification is EHPMCustomTaskStatusNotification_DialogEndedOk.
} HPMChangeCallbackData_CustomTaskStatusNotification;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_RightClickDisplayTaskMenu.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_RightClickDisplayTaskMenu
{
	HPMRightClickContext const *m_pRightClickContext;			// The context of the popup menu that is displayed.
	HPMInt32 m_bMenuDisplayed;									// Set to 1 when menu is displayed, otherwise set to 0 when menu is dismissed.
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalRegisterForRightClickNotifications};
	HPMUniqueID m_ProjectID;									// The unique identifier of the project where tasks were right clicked.
	HPMUInt32 m_nSelectedTasks;									// The number of selected tasks.
	HPMUniqueID const *m_pSelectedTasks;						// The selected tasks.
} HPMChangeCallbackData_RightClickDisplayTaskMenu;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_RightClickDisplayWorkflowStepMenu.			|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu
{
	HPMRightClickContext const *m_pRightClickContext;			// The context of the popup menu that is displayed.
	HPMInt32 m_bMenuDisplayed;									// Set to 1 when menu is displayed, otherwise set to 0 when menu is dismissed.
	HPMUserContext m_UserContext;								// The value sent in as user context to @{GlobalRegisterForRightClickNotifications};
	HPMUniqueID m_ProjectID;									// The unique identifier of the project where workflow object was right clicked.
	HPMUInt32 m_WorkflowID;										// The identifier of the workflow that was right clicked.
	HPMUInt32 m_WorkflowObjectID;								// The identifier of the workflow object that was right clicked.
} HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_RightClickMenuItemSelected.					|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_RightClickMenuItemSelected
{
	HPMChar const *m_pUniqueName;								// The unique name passed to @{GlobalAddRightClickMenuItem}.
	HPMUserContext m_MenuItemContext;							// The value sent in as user context to @{GlobalAddRightClickMenuItem};
} HPMChangeCallbackData_RightClickMenuItemSelected;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Callback data type for @{HPMChangeCallbackInfo}::m_pCallbackData			|
|						when @{HPMChangeCallbackInfo}::m_Operation is set to						|
|						@{EHPMChangeCallbackOperation}_ClientSyncDone.								|
|																									|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallbackInfo}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackData_ClientSyncDone
{
	HPMUniqueID m_ResourceID;	// The resource id of the user that is logged in
} HPMChangeCallbackData_ClientSyncDone;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		This structure is sent to the callback that is called when something in		|
|						the database changes.														|
|																									|
|	See Also:			@{EHPMChangeCallbackOperation}, @{HPMChangeCallback},						|
|						@{RegisterChangeCallback}, @{UnregisterChangeCallback}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef struct HPMChangeCallbackInfo
{
	void *m_pContext;				// User context. This is the context specified when calling @{RegisterChangeCallback}.
	HPMUInt32 m_Operation;			// [type=EHPMChangeCallbackOperation] The operation that was performed in the database. Can be one of @{EHPMChangeCallbackOperation}.
	const void *m_pCallbackData;	// The data for the operation. This needs to be cast to the correct type depending on the m_Operation member.
} HPMChangeCallbackInfo;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Definition of the callback function called when something in the database	|
|						changes.																	|
|																									|
|	Return Value:		The return value should be different depending on the callback operation.	|
|						See the documentation for the different callback data structures for		|
|						information. If you don't handle the callback you should return 1.			|
|																									|
|	See Also:			@{HPMChangeCallbackInfo}													|
|																									|
|	Location:			Callbacks																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef HPMInt32 (DHPMSdkCallingConvention *HPMChangeCallback)(	const HPMChangeCallbackInfo *_pCallback	// [in] Information about the callback
														);

#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers a database change callback.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A callback is uniquely identified by the callback function and user			|
|						context, thus you cannot specify the same callback and user context or the	|
|						function will fail and @{EHPMError}_CallbackAlreadyExists will be returned.	|
|																									|
|						The callback is called from the @{SessionProcess} function.					|
|																									|
|						Before closing the session you must make sure to call						|
|						@{UnregisterChangeCallback} for all callbacks.								|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{UnregisterChangeCallback}, @{HPMChangeCallbackInfo}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						RegisterChangeCallback														|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionRegisterChangeCallback)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMChangeCallback _pCallback,	// [in] The callback to call when something changes in the database.
																				void *_pContext					// [in] The user context sent to @{HPMChangeCallbackInfo}::m_pContext when the callback is called.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unregisters a database change callback										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{RegisterChangeCallback}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UnregisterChangeCallback													|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUnregisterChangeCallback)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMChangeCallback _pCallback,	// [in] The callback specified to @{RegisterChangeCallback}.
																					void *_pContext					// [in] The user context specified to @{RegisterChangeCallback}.
																				);

#endif

