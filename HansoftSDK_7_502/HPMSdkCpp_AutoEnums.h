enum EHPMSDK
{
	EHPMSDK_Version = 29954,
};

enum EHPMSDKAdvanced
{
	EHPMSDKAdvanced_LowestSupportedVersion = 29954,
};

enum EHPMError
{
	EHPMError_NoError                                     = 0,
	EHPMError_DllNotFound                                 = 1,
	EHPMError_DllInvalid                                  = 2,
	EHPMError_NewVersionOfSDKRequired                     = 3,
	EHPMError_CouldNotConnectToHost                       = 4,
	EHPMError_GeneralLoginError                           = 5,
	EHPMError_FailedToConnectToDatabase                   = 6,
	EHPMError_DatabaseDoesNotExist                        = 7,
	EHPMError_DatabaseNotOnline                           = 8,
	EHPMError_PasswordOrResourceInvalid                   = 9,
	EHPMError_LicenseInvalid                              = 10,
	EHPMError_SyncError                                   = 11,
	EHPMError_OtherError                                  = 12,
	EHPMError_ConnectionLost                              = 13,
	EHPMError_InvalidID                                   = 14,
	EHPMError_PasswordRequired                            = 15,
	EHPMError_CallbackAlreadyExists                       = 16,
	EHPMError_CallbackDoesNotExist                        = 17,
	EHPMError_BlockTimeout                                = 18,
	EHPMError_ResourceNotMemberOfProject                  = 19,
	EHPMError_DataNotYetAvailable                         = 20,
	EHPMError_ConversionNotSupported                      = 21,
	EHPMError_IndexOutOfRange                             = 22,
	EHPMError_FunctionalityNotInitialized                 = 23,
	EHPMError_AlreadyInitialized                          = 24,
	EHPMError_OperationAlreadyInProgress                  = 25,
	EHPMError_AccessDenied                                = 26,
	EHPMError_FileDoesNotExist                            = 27,
	EHPMError_LicenseViolation                            = 28,
	EHPMError_ParseError                                  = 29,
	EHPMError_InvalidCustomSettingsType                   = 30,
	EHPMError_NotAvailableInClientSDK                     = 31,
	EHPMError_OnlyAvailableInClientSDK                    = 32,
	EHPMError_Deprecated                                  = 33,
	EHPMError_OnlyAvailableInQAProject                    = 34,
	EHPMError_InvalidSessionKeySize                       = 35,
	EHPMError_InvalidIdentifier                           = 36,
	EHPMError_SessionPoolNotInitialized                   = 37,
	EHPMError_SessionPoolSessionNotAvailable              = 38,
	EHPMError_SessionPoolNotAllowed                       = 39,
	EHPMError_SessionPoolNotAvailableInClientSDK          = 40,
	EHPMError_LoginDisabled                               = 41,
	EHPMError_Partitioned                                 = 42,
	EHPMError_WorkingDirectoryNotAvailableInClientSDK     = 43,
	EHPMError_NewVersionOfServerRequired                  = 44,
	EHPMError_IDNoLongerExists                            = 45,
	EHPMError_NotValidOnTaskWithProxy                     = 46,
	EHPMError_FullIdentifierNotAvailaibleInTranslation    = 47,
	EHPMError_IdentifierNotAvailaibleInTranslation        = 48,
	EHPMError_SDKNotAllowedToSetAuthOrCredential          = 49,
	EHPMError_ImageFormatNotSupported                     = 50,
	EHPMError_CropAreaOutOfBounds                         = 51,
	EHPMError_NoVersionControlHistory                     = 52,
	EHPMError_TimeZoneOrder                               = 53,
	EHPMError_ServerTimedOut                              = 54,
	EHPMError_CouldNotLoadImpDll                          = 55,
	EHPMError_SecureConnectionRefused                     = 56,
	EHPMError_SecureConnectionNotTrusted                  = 57,
	EHPMError_Certificate                                 = 58,
	EHPMError_ServerDoesNotSupportSecureConnection        = 59,
	EHPMError_CertificateSettingsNotApplicableInClientSDK = 60,
	EHPMError_DateTimeOutOfRange                          = 61,
	EHPMError_CouldNotCreateSDKInterface                  = 62,
	EHPMError_ServerVersionMismatch                       = 63,
	EHPMError_ServerDoesNotSupportPlatform                = 64,
	EHPMError_ServerTimeMismatch                          = 65,
};

enum EHPMDateFormat
{
	EHPMDateFormat_NewVersionOfSDKRequired = 0,
	EHPMDateFormat_YYYY_MM_DD_ISO8601      = 1,
	EHPMDateFormat_MM_DD_YYYY              = 2,
	EHPMDateFormat_DD_MM_YYYY              = 3,
	EHPMDateFormat_YYYY_MMM_DD             = 4,
	EHPMDateFormat_MMM_DD_YYYY             = 5,
	EHPMDateFormat_DD_MMM_YYYY             = 6,
	EHPMDateFormat_WEEKDAY_YY_MM_DD        = 7,
	EHPMDateFormat_WEEKDAY_MM_DD_YY        = 8,
	EHPMDateFormat_WEEKDAY_DD_MM_YY        = 9,
	EHPMDateFormat_FromLanguage            = 10,
};

enum EHPMPeriodicityType
{
	EHPMPeriodicityType_NewVersionOfSDKRequired = 0,
	EHPMPeriodicityType_Never                   = 1,
	EHPMPeriodicityType_Daily                   = 2,
	EHPMPeriodicityType_Weekly                  = 3,
};

enum EHPMWallGroupingType
{
	EHPMWallGroupingType_NewVersionOfSDKRequired = 0,
	EHPMWallGroupingType_DefaultColumn           = 1,
	EHPMWallGroupingType_CustomColumn            = 2,
	EHPMWallGroupingType_CustomGroups            = 3,
};

enum EHPMResourceGroupingType
{
	EHPMResourceGroupingType_NewVersionOfSDKRequired = 0,
	EHPMResourceGroupingType_Resource                = 1,
	EHPMResourceGroupingType_ResourceGroup           = 2,
	EHPMResourceGroupingType_AllProjectMembers       = 3,
};

enum EHPMCustomSettingsType
{
	EHPMCustomSettingsType_NewVersionOfSDKRequired = 0,
	EHPMCustomSettingsType_Admin                   = 1,
	EHPMCustomSettingsType_Normal                  = 2,
	EHPMCustomSettingsType_Custom                  = 3,
};

enum EHPMReportViewType
{
	EHPMReportViewType_NewVersionOfSDKRequired  = 0,
	EHPMReportViewType_BugsReportedByMe         = 1,
	EHPMReportViewType_AllBugsInProject         = 2,
	EHPMReportViewType_MyWork                   = 3,
	EHPMReportViewType_ScheduleMainProject      = 4,
	EHPMReportViewType_GlobalResourceAllocation = 5,
	EHPMReportViewType_GlobalFind               = 6,
	EHPMReportViewType_ProjectHistory           = 7,
	EHPMReportViewType_AgileMainProject         = 8,
	EHPMReportViewType_AgileBacklog             = 9,
};

enum EHPMReportFlag
{
	EHPMReportFlag_None                            = 0,
	EHPMReportFlag_ContinueToFindWhileInReportMode = 8,
};

enum EHPMColumnType
{
	EHPMColumnType_NewVersionOfSDKRequired = 0,
	EHPMColumnType_DefaultColumn           = 1,
	EHPMColumnType_CustomColumn            = 2,
};

enum EHPMFindSelectionType
{
	EHPMFindSelectionType_NewVersionOfSDKRequired = 0,
	EHPMFindSelectionType_Column                  = 1,
	EHPMFindSelectionType_Fixed                   = 2,
};

enum EHPMFilterType
{
	EHPMFilterType_NewVersionOfSDKRequired   = 0,
	EHPMFilterType_None                      = 1,
	EHPMFilterType_Incompleted               = 2,
	EHPMFilterType_Completed                 = 3,
	EHPMFilterType_InProgress                = 4,
	EHPMFilterType_Overdue                   = 5,
	EHPMFilterType_NotStartedYet             = 6,
	EHPMFilterType_ResourcesOverallocation   = 7,
	EHPMFilterType_ResourcesUnderallocation  = 8,
	EHPMFilterType_ResourcesGaps             = 9,
	EHPMFilterType_ResourcesWorkingNow       = 10,
	EHPMFilterType_ResourcesFreeNow          = 11,
	EHPMFilterType_OutOfOffice               = 12,
	EHPMFilterType_NotAssigned               = 13,
	EHPMFilterType_MilestoneOverdue          = 14,
	EHPMFilterType_AreMilestone              = 15,
	EHPMFilterType_AreMilestonePast          = 16,
	EHPMFilterType_AreMilestoneFuture        = 17,
	EHPMFilterType_AreSprints                = 18,
	EHPMFilterType_AreBacklogItems           = 19,
	EHPMFilterType_HaveAgileStatusNotDone    = 20,
	EHPMFilterType_HaveAgileStatusInProgress = 21,
	EHPMFilterType_HaveAgileStatusCompleted  = 22,
	EHPMFilterType_HaveAgileStatusBlocked    = 23,
	EHPMFilterType_HaveAgileStatusDeleted    = 24,
	EHPMFilterType_VacationTasks             = 25,
	EHPMFilterType_UserStories               = 26,
	EHPMFilterType_AssignedToMe              = 27,
	EHPMFilterType_CanStartNow               = 28,
	EHPMFilterType_IsOngoingWork             = 29,
	EHPMFilterType_IsArchived                = 30,
	EHPMFilterType_IsDeleted                 = 31,
};

enum EHPMListIcon
{
	EHPMListIcon_NewVersionOfSDKRequired = 0,
	EHPMListIcon_Default                 = 1,
	EHPMListIcon_WhiteBox                = 2,
	EHPMListIcon_GreenBox                = 3,
	EHPMListIcon_YellowBox               = 4,
	EHPMListIcon_RedBox                  = 5,
	EHPMListIcon_BlueBox                 = 6,
	EHPMListIcon_MagentaBox              = 7,
	EHPMListIcon_OrangeBox               = 8,
	EHPMListIcon_Check                   = 9,
	EHPMListIcon_RedDot                  = 10,
	EHPMListIcon_BlueFace                = 11,
	EHPMListIcon_GreyFace                = 12,
	EHPMListIcon_OrangeFace              = 13,
	EHPMListIcon_GoldFace                = 14,
	EHPMListIcon_Locked                  = 15,
	EHPMListIcon_Unlocked                = 16,
	EHPMListIcon_ReOpenBug               = 17,
	EHPMListIcon_NewBug                  = 18,
	EHPMListIcon_AssignedBug             = 19,
	EHPMListIcon_FixedBug                = 20,
	EHPMListIcon_VerifiedBug             = 21,
	EHPMListIcon_ClosedBug               = 22,
	EHPMListIcon_Group                   = 23,
	EHPMListIcon_GreyGroup               = 24,
	EHPMListIcon_LightGreyGroup          = 25,
	EHPMListIcon_GreenCircle             = 26,
	EHPMListIcon_YellowCircle            = 27,
	EHPMListIcon_RedCircle               = 28,
	EHPMListIcon_BlueCircle              = 29,
	EHPMListIcon_MagentaCircle           = 30,
	EHPMListIcon_OrangeCircle            = 31,
	EHPMListIcon_YesBox                  = 32,
	EHPMListIcon_NoBox                   = 33,
	EHPMListIcon_QuestionBox             = 34,
	EHPMListIcon_Project                 = 35,
	EHPMListIcon_DeletedResource         = 36,
	EHPMListIcon_Workflow                = 37,
	EHPMListIcon_Progress                = 38,
	EHPMListIcon_Step                    = 39,
	EHPMListIcon_Pipeline                = 40,
	EHPMListIcon_Report                  = 41,
	EHPMListIcon_VeryHighPriorityBox     = 42,
	EHPMListIcon_HighPriorityBox         = 43,
	EHPMListIcon_MediumPriorityBox       = 44,
	EHPMListIcon_LowPriorityBox          = 45,
	EHPMListIcon_VeryLowPriorityBox      = 46,
	EHPMListIcon_DisabledBox             = 47,
	EHPMListIcon_Plus                    = 48,
};

enum EHPMReportSortGroupOrderType
{
	EHPMReportSortGroupOrderType_NewVersionOfSDKRequired = 0,
	EHPMReportSortGroupOrderType_None                    = 1,
	EHPMReportSortGroupOrderType_Primary                 = 2,
	EHPMReportSortGroupOrderType_Secondary               = 3,
};

enum EHPMTimesheetField
{
	EHPMTimesheetField_NewVersionOfSDKRequired = 0,
	EHPMTimesheetField_DayID                   = 1,
	EHPMTimesheetField_HighestRowID            = 2,
	EHPMTimesheetField_ActivityTypeID          = 3,
	EHPMTimesheetField_ProjectID               = 4,
	EHPMTimesheetField_TaskID                  = 5,
	EHPMTimesheetField_StartedTime             = 6,
	EHPMTimesheetField_FinishedTime            = 7,
	EHPMTimesheetField_DurationTime            = 8,
	EHPMTimesheetField_Comment                 = 9,
	EHPMTimesheetField_Deleted                 = 10,
};

enum EHPMOptionalBoolean
{
	EHPMOptionalBoolean_NotSet = 0,
	EHPMOptionalBoolean_On     = 1,
	EHPMOptionalBoolean_Off    = 2,
};

enum EHPMChangeCallbackOperation
{
	EHPMChangeCallbackOperation_NewVersionOfSDKRequired                    = 0,
	EHPMChangeCallbackOperation_GlobalStatisticsSettingsChange             = 1,
	EHPMChangeCallbackOperation_GlobalServerNameChange                     = 2,
	EHPMChangeCallbackOperation_ResourceCreate                             = 3,
	EHPMChangeCallbackOperation_ResourceDelete                             = 4,
	EHPMChangeCallbackOperation_ResourcePropertiesChange                   = 5,
	EHPMChangeCallbackOperation_ResourceGlobalSettingsChange               = 6,
	EHPMChangeCallbackOperation_ResourceLicenseViolation                   = 7,
	EHPMChangeCallbackOperation_ResourceGroupsChange                       = 8,
	EHPMChangeCallbackOperation_ProjectCreate                              = 9,
	EHPMChangeCallbackOperation_ProjectDelete                              = 10,
	EHPMChangeCallbackOperation_ProjectPropertiesChange                    = 11,
	EHPMChangeCallbackOperation_ProjectSettingsChange                      = 12,
	EHPMChangeCallbackOperation_ProjectStatisticsSettingsChange            = 13,
	EHPMChangeCallbackOperation_ProjectWorkflowChange                      = 14,
	EHPMChangeCallbackOperation_ProjectEmailSettingsChange                 = 15,
	EHPMChangeCallbackOperation_ProjectOpenBacklogProject                  = 16,
	EHPMChangeCallbackOperation_ProjectOpenQAProject                       = 17,
	EHPMChangeCallbackOperation_ProjectHistoryAutoSaveSettingsChange       = 18,
	EHPMChangeCallbackOperation_ProjectResourceAdd                         = 19,
	EHPMChangeCallbackOperation_ProjectResourceRemove                      = 20,
	EHPMChangeCallbackOperation_ProjectResourcePropertiesChange            = 21,
	EHPMChangeCallbackOperation_ProjectCustomColumnsChange                 = 22,
	EHPMChangeCallbackOperation_ProjectCustomColumnsCreate                 = 23,
	EHPMChangeCallbackOperation_ProjectCustomColumnsDeleteTaskData         = 24,
	EHPMChangeCallbackOperation_ProjectCustomColumnsRenameTaskData         = 25,
	EHPMChangeCallbackOperation_ProjectActiveDefaultColumnsChange          = 26,
	EHPMChangeCallbackOperation_ProjectWallSettingsChange                  = 27,
	EHPMChangeCallbackOperation_ProjectWallGroupsChange                    = 28,
	EHPMChangeCallbackOperation_ProjectDetailedAccessRulesChange           = 29,
	EHPMChangeCallbackOperation_TaskDelete                                 = 30,
	EHPMChangeCallbackOperation_TaskChange                                 = 31,
	EHPMChangeCallbackOperation_TaskChangeCustomColumnData                 = 32,
	EHPMChangeCallbackOperation_TaskChangeWorkRemainingHistory             = 33,
	EHPMChangeCallbackOperation_TaskRefDelete                              = 34,
	EHPMChangeCallbackOperation_TaskRefConnect                             = 35,
	EHPMChangeCallbackOperation_TaskRefChange                              = 36,
	EHPMChangeCallbackOperation_TaskConnectionDelete                       = 37,
	EHPMChangeCallbackOperation_TaskConnectionChangeType                   = 38,
	EHPMChangeCallbackOperation_TaskConnectionChangeLeadLagTime            = 39,
	EHPMChangeCallbackOperation_TaskCreateComment                          = 40,
	EHPMChangeCallbackOperation_TaskDeleteComment                          = 41,
	EHPMChangeCallbackOperation_TaskCommentPosted                          = 42,
	EHPMChangeCallbackOperation_DataHistoryReceived                        = 43,
	EHPMChangeCallbackOperation_VersionControlFileTreeAvailable            = 44,
	EHPMChangeCallbackOperation_VersionControlAllCommandsFinished          = 45,
	EHPMChangeCallbackOperation_VersionControlFileInfoChanged              = 46,
	EHPMChangeCallbackOperation_VersionControlWarnFileOverwriteDelete      = 47,
	EHPMChangeCallbackOperation_VersionControlWarnCheckOutShouldSync       = 48,
	EHPMChangeCallbackOperation_VersionControlSyncFilesResponse            = 49,
	EHPMChangeCallbackOperation_VersionControlAddFilesResponse             = 50,
	EHPMChangeCallbackOperation_VersionControlCheckInFilesResponse         = 51,
	EHPMChangeCallbackOperation_VersionControlCheckOutFilesResponse        = 52,
	EHPMChangeCallbackOperation_VersionControlRenameResponse               = 53,
	EHPMChangeCallbackOperation_VersionControlDeleteFilesResponse          = 54,
	EHPMChangeCallbackOperation_VersionControlRestoreDeletedFilesResponse  = 55,
	EHPMChangeCallbackOperation_VersionControlSetAccessRightsResponse      = 56,
	EHPMChangeCallbackOperation_VersionControlRollbackFileResponse         = 57,
	EHPMChangeCallbackOperation_VersionControlDeleteVersionsResponse       = 58,
	EHPMChangeCallbackOperation_VersionControlGetFileHistoryResponse       = 59,
	EHPMChangeCallbackOperation_VersionControlGetAccessRightsResponse      = 60,
	EHPMChangeCallbackOperation_GlobalCustomSettingsChange                 = 61,
	EHPMChangeCallbackOperation_GlobalCustomSettingsUnregister             = 62,
	EHPMChangeCallbackOperation_GlobalCustomSettingsValueChange            = 63,
	EHPMChangeCallbackOperation_ProjectCustomSettingsValueChange           = 64,
	EHPMChangeCallbackOperation_ProjectResourceCustomSettingsValueChange   = 65,
	EHPMChangeCallbackOperation_ResourceCustomSettingsValueChange          = 66,
	EHPMChangeCallbackOperation_GlobalSDKInternalDataChange                = 67,
	EHPMChangeCallbackOperation_ProjectSDKInternalDataChange               = 68,
	EHPMChangeCallbackOperation_ProjectResourceSDKInternalDataChange       = 69,
	EHPMChangeCallbackOperation_ResourceSDKInternalDataChange              = 70,
	EHPMChangeCallbackOperation_TaskSDKInternalDataChange                  = 71,
	EHPMChangeCallbackOperation_TaskRefSDKInternalDataChange               = 72,
	EHPMChangeCallbackOperation_ClientExecuteURL                           = 73,
	EHPMChangeCallbackOperation_ClientSyncDone                             = 74,
	EHPMChangeCallbackOperation_ProjectCustomStatisticsSettingsChange      = 75,
	EHPMChangeCallbackOperation_ProjectWorkflowCreate                      = 76,
	EHPMChangeCallbackOperation_ProjectWorkflowDelete                      = 77,
	EHPMChangeCallbackOperation_ProjectReportsChange                       = 78,
	EHPMChangeCallbackOperation_ProjectWorkflowStatusStatsChange           = 79,
	EHPMChangeCallbackOperation_ProjectWorkflowNewVersion                  = 80,
	EHPMChangeCallbackOperation_TaskUpdatePipelineWorkflowToNewestVersion  = 81,
	EHPMChangeCallbackOperation_GlobalWorkflowsDeleted                     = 82,
	EHPMChangeCallbackOperation_GlobalReportsChange                        = 83,
	EHPMChangeCallbackOperation_TaskLastExitWorkflowStatusChange           = 84,
	EHPMChangeCallbackOperation_TaskLastEnterWorkflowStatusChange          = 85,
	EHPMChangeCallbackOperation_TaskLastAssignedInWorkflowStatusChange     = 86,
	EHPMChangeCallbackOperation_GlobalDocumentAttachmentLimitChange        = 87,
	EHPMChangeCallbackOperation_TaskCreateUnified                          = 88,
	EHPMChangeCallbackOperation_TaskChangeDisposition                      = 89,
	EHPMChangeCallbackOperation_AuthenticationProtocolBegin                = 90,
	EHPMChangeCallbackOperation_CommunicationChannelPacketReceived         = 91,
	EHPMChangeCallbackOperation_CommunicationChannelPacketDropped          = 92,
	EHPMChangeCallbackOperation_AuthenticationResolveCredentials           = 93,
	EHPMChangeCallbackOperation_CommunicationChannelRegisterFailed         = 94,
	EHPMChangeCallbackOperation_ProjectAgilePriorityCustomColumnChange     = 95,
	EHPMChangeCallbackOperation_ResourceLockFlagsChange                    = 96,
	EHPMChangeCallbackOperation_AuthenticationResolveCredentialsResponse   = 97,
	EHPMChangeCallbackOperation_TaskChangeIdealDaysHistory                 = 98,
	EHPMChangeCallbackOperation_TaskChangePointsHistory                    = 99,
	EHPMChangeCallbackOperation_CalendarChangeHolidays                     = 100,
	EHPMChangeCallbackOperation_CalendarChangeCustomWorkingHours           = 101,
	EHPMChangeCallbackOperation_CalendarChangeWorkingHours                 = 102,
	EHPMChangeCallbackOperation_CalendarChangeCustomWorkingDays            = 103,
	EHPMChangeCallbackOperation_CalendarChangeWorkingDays                  = 104,
	EHPMChangeCallbackOperation_ResourcePreferredLanguageChange            = 105,
	EHPMChangeCallbackOperation_ResourceLastUsedLanguageChange             = 106,
	EHPMChangeCallbackOperation_ProjectViewPresetsChange                   = 107,
	EHPMChangeCallbackOperation_ProjectViewPresetsApplied                  = 108,
	EHPMChangeCallbackOperation_ResourceTimesheetPeriodDataDelete          = 109,
	EHPMChangeCallbackOperation_ProjectTimesheetLockChange                 = 110,
	EHPMChangeCallbackOperation_GlobalTimesheetConfigChange                = 111,
	EHPMChangeCallbackOperation_ProjectDisplayUserMessage                  = 112,
	EHPMChangeCallbackOperation_IDNoLongerExists                           = 113,
	EHPMChangeCallbackOperation_TaskChangeLastResourceCommentReadTime      = 114,
	EHPMChangeCallbackOperation_TaskEditComment                            = 115,
	EHPMChangeCallbackOperation_TaskCommentSDKInternalDataChange           = 116,
	EHPMChangeCallbackOperation_DynamicCustomSettingsNotification          = 117,
	EHPMChangeCallbackOperation_DynamicCustomSettingsValueChanged          = 118,
	EHPMChangeCallbackOperation_DynamicCustomSettingsValuesRequestResponse = 119,
	EHPMChangeCallbackOperation_CommunicationChannelsChanged               = 120,
	EHPMChangeCallbackOperation_RightClickDisplayTaskMenu                  = 121,
	EHPMChangeCallbackOperation_RightClickDisplayWorkflowStepMenu          = 122,
	EHPMChangeCallbackOperation_RightClickMenuItemSelected                 = 123,
	EHPMChangeCallbackOperation_ResourceGetTimesheetDayResponse            = 124,
	EHPMChangeCallbackOperation_TimesheetGetDateRangeResponse              = 125,
	EHPMChangeCallbackOperation_TimesheetRowChange                         = 126,
	EHPMChangeCallbackOperation_ChatMessage                                = 127,
	EHPMChangeCallbackOperation_ChatMessageLastID                          = 128,
	EHPMChangeCallbackOperation_ChatMessageLastReadID                      = 129,
	EHPMChangeCallbackOperation_ChatOnlineStatusChange                     = 130,
	EHPMChangeCallbackOperation_ChatHistoryReceived                        = 131,
	EHPMChangeCallbackOperation_VersionControlUploadAvatarFilesResponse    = 132,
	EHPMChangeCallbackOperation_ResourceDoNotDisturbChange                 = 133,
	EHPMChangeCallbackOperation_GlobalEmailSettingsChange                  = 134,
	EHPMChangeCallbackOperation_CustomTaskStatusNotification               = 135,
};

enum EHPMLicenseViolationReason
{
	EHPMLicenseViolationReason_NewVersionOfSDKRequired              = 0,
	EHPMLicenseViolationReason_CreateResourceExceededLicense        = 1,
	EHPMLicenseViolationReason_ChangeUserExceededLicense            = 2,
	EHPMLicenseViolationReason_ChangeUserExceededLicense_Overridden = 3,
	EHPMLicenseViolationReason_ConvertResourceExceededLicense       = 4,
	EHPMLicenseViolationReason_CannotChangeDeletedResource          = 5,
	EHPMLicenseViolationReason_CannotUndeleteADeletedResource       = 6,
};

enum EHPMPacketDropReason
{
	EHPMPacketDropReason_ChannelNotRegistered               = 0,
	EHPMPacketDropReason_UnknownDestinationSession          = 1,
	EHPMPacketDropReason_ChannelNotAuthenticationProvider   = 2,
	EHPMPacketDropReason_ChannelNotCredentialChecksProvider = 3,
	EHPMPacketDropReason_NewVersionOfSDKRequired            = 4,
};

enum EHPMChannelRegisterFailReason
{
	EHPMChannelRegisterFailReason_UserNotAuthenticationProvider     = 0,
	EHPMChannelRegisterFailReason_UserNotResolveCredentialsProvider = 1,
	EHPMChannelRegisterFailReason_NewVersionOfSDKRequired           = 2,
};

enum EHPMDynamicCustomSettingsNotification
{
	EHPMDynamicCustomSettingsNotification_NewVersionOfSDKRequired = 0,
	EHPMDynamicCustomSettingsNotification_DialogBegin             = 1,
	EHPMDynamicCustomSettingsNotification_DialogEndedOk           = 2,
	EHPMDynamicCustomSettingsNotification_DialogEndedCancel       = 3,
	EHPMDynamicCustomSettingsNotification_DialogEndedClose        = 4,
	EHPMDynamicCustomSettingsNotification_DialogEndedYes          = 5,
	EHPMDynamicCustomSettingsNotification_DialogEndedNo           = 6,
	EHPMDynamicCustomSettingsNotification_DialogEndedCustom       = 7,
};

enum EHPMCustomTaskStatusNotification
{
	EHPMCustomTaskStatusNotification_NewVersionOfSDKRequired = 0,
	EHPMCustomTaskStatusNotification_DialogBegin             = 1,
	EHPMCustomTaskStatusNotification_DialogEndedOk           = 2,
	EHPMCustomTaskStatusNotification_DialogEndedCancel       = 3,
	EHPMCustomTaskStatusNotification_DialogEndedModalOpen    = 4,
};

enum EHPMResourceFlag
{
	EHPMResourceFlag_None                     = 0,
	EHPMResourceFlag_ActiveAccount            = 1,
	EHPMResourceFlag_AdminAccess              = 2,
	EHPMResourceFlag_ResourceAllocationAccess = 4,
	EHPMResourceFlag_DocumentManagementAccess = 8,
	EHPMResourceFlag_AuthenticationProvider   = 16,
	EHPMResourceFlag_CredentialCheckProvider  = 32,
	EHPMResourceFlag_AvatarManagementAccess   = 64,
	EHPMResourceFlag_SdkChatUser              = 128,
	EHPMResourceFlag_ChatAccess               = 256,
};

enum EHPMResourcePasswordFlag
{
	EHPMResourcePasswordFlag_None                        = 0,
	EHPMResourcePasswordFlag_MustChangePasswordNextLogon = 1,
	EHPMResourcePasswordFlag_PasswordNeverExpires        = 2,
	EHPMResourcePasswordFlag_CannotChangePassword        = 4,
	EHPMResourcePasswordFlag_PasswordDisabled            = 8,
};

enum EHPMResourceType
{
	EHPMResourceType_NewVersionOfSDKRequired = 0,
	EHPMResourceType_Normal                  = 1,
	EHPMResourceType_Ghost                   = 2,
	EHPMResourceType_SDK                     = 3,
	EHPMResourceType_QAAccount               = 4,
};

enum EHPMResourceGlobalSettingsFlag
{
	EHPMResourceGlobalSettingsFlag_None                                           = 0,
	EHPMResourceGlobalSettingsFlag_CopyResourceAndMiscOnTaskInsert                = 1,
	EHPMResourceGlobalSettingsFlag_UnlockByDefault                                = 2,
	EHPMResourceGlobalSettingsFlag_ShowMilestoneLinksOnTasks                      = 4,
	EHPMResourceGlobalSettingsFlag_InstantlyEditCreatedTasks                      = 8,
	EHPMResourceGlobalSettingsFlag_CommentIndicator                               = 16,
	EHPMResourceGlobalSettingsFlag_EnterDateManually                              = 32,
	EHPMResourceGlobalSettingsFlag_CopyPasteTaskData                              = 64,
	EHPMResourceGlobalSettingsFlag_ActivityNumberLeftmostColumn                   = 128,
	EHPMResourceGlobalSettingsFlag_ShowPreSucActivityNumbers                      = 256,
	EHPMResourceGlobalSettingsFlag_DontTranslateEstimatedIdealDaysToWorkRemaining = 512,
	EHPMResourceGlobalSettingsFlag_HideCompletedTasksInProjectView                = 1024,
	EHPMResourceGlobalSettingsFlag_HideTasksNotAssignedToMeInProjectView          = 2048,
	EHPMResourceGlobalSettingsFlag_NoFindAutocompletion                           = 4096,
	EHPMResourceGlobalSettingsFlag_HideSubProjectCompletePercent                  = 8192,
	EHPMResourceGlobalSettingsFlag_DoNotAutoPreviewFiles                          = 16384,
	EHPMResourceGlobalSettingsFlag_MagnifyItemsInTheWallView                      = 32768,
	EHPMResourceGlobalSettingsFlag_SymbolicFindOperators                          = 65536,
	EHPMResourceGlobalSettingsFlag_RightAlignItemText                             = 131072,
	EHPMResourceGlobalSettingsFlag_ShowPastSprintsMilestonesInDropdown            = 262144,
	EHPMResourceGlobalSettingsFlag_HighlightTasksOnCriticalPathFlags              = 524288,
};

enum EHPMResourceLockFlag
{
	EHPMResourceLockFlag_None    = 0,
	EHPMResourceLockFlag_Deleted = 1,
	EHPMResourceLockFlag_Locked  = 2,
};

enum EHPMResourceGroupFlag
{
	EHPMResourceGroupFlag_None                  = 0,
	EHPMResourceGroupFlag_ChatVisibleInNewsFeed = 1,
};

enum EHPMProjectSettingsFlag
{
	EHPMProjectSettingsFlag_None                                                         = 0,
	EHPMProjectSettingsFlag_SprintMembersCanBreakdownBacklogItemsIntoTasks               = 2,
	EHPMProjectSettingsFlag_SprintMembersCanBreakdownBacklogItemsIntoTasksOnlyIfAssigned = 4,
	EHPMProjectSettingsFlag_WorkflowCustomized                                           = 8,
	EHPMProjectSettingsFlag_CreatedBacklogItemsAreUserStoriesByDefault                   = 16,
	EHPMProjectSettingsFlag_EverybodyCanCommentOnAllItems                                = 32,
	EHPMProjectSettingsFlag_AutoRefreshQAView                                            = 64,
	EHPMProjectSettingsFlag_DisplayItemsInQAViewWithoutQuery                             = 128,
	EHPMProjectSettingsFlag_EnableWorkflowsInMainProjectAndBacklog                       = 256,
	EHPMProjectSettingsFlag_LetResourcesChangeAgilePriorityInMyWork                      = 512,
	EHPMProjectSettingsFlag_DisplayIdealEstimateAsHours                                  = 1024,
};

enum EHPMProjectCustomColumnsColumnFlag
{
	EHPMProjectCustomColumnsColumnFlag_None                    = 0,
	EHPMProjectCustomColumnsColumnFlag_DefaultDateColumnsToNow = 1,
	EHPMProjectCustomColumnsColumnFlag_DontIntheritData        = 2,
};

enum EHPMProjectCustomColumnsColumnAccessRights
{
	EHPMProjectCustomColumnsColumnAccessRights_NewVersionOfSDKRequired   = 0,
	EHPMProjectCustomColumnsColumnAccessRights_AllProjectMembers         = 1,
	EHPMProjectCustomColumnsColumnAccessRights_SubAndMainProjectManagers = 2,
	EHPMProjectCustomColumnsColumnAccessRights_MainProjectManagers       = 3,
	EHPMProjectCustomColumnsColumnAccessRights_ReadOnly                  = 4,
};

enum EHPMProjectCustomColumnsColumnType
{
	EHPMProjectCustomColumnsColumnType_NewVersionOfSDKRequired = 0,
	EHPMProjectCustomColumnsColumnType_Text                    = 1,
	EHPMProjectCustomColumnsColumnType_Hyperlink               = 2,
	EHPMProjectCustomColumnsColumnType_DropList                = 3,
	EHPMProjectCustomColumnsColumnType_IntegerNumber           = 4,
	EHPMProjectCustomColumnsColumnType_FloatNumber             = 5,
	EHPMProjectCustomColumnsColumnType_DateTime                = 6,
	EHPMProjectCustomColumnsColumnType_MultiLineText           = 7,
	EHPMProjectCustomColumnsColumnType_Resources               = 8,
	EHPMProjectCustomColumnsColumnType_AccumulatedTime         = 9,
	EHPMProjectCustomColumnsColumnType_MultiSelectionDropList  = 10,
	EHPMProjectCustomColumnsColumnType_DateTimeWithTime        = 11,
};

enum EHPMProjectDefaultColumn
{
	EHPMProjectDefaultColumn_NewVersionOfSDKRequired   = 0,
	EHPMProjectDefaultColumn_Risk                      = 1,
	EHPMProjectDefaultColumn_PriorityTag               = 2,
	EHPMProjectDefaultColumn_EstimatedIdealDays        = 3,
	EHPMProjectDefaultColumn_BacklogCategory           = 4,
	EHPMProjectDefaultColumn_ComplexityPoints          = 5,
	EHPMProjectDefaultColumn_ItemStatus                = 6,
	EHPMProjectDefaultColumn_MilestoneTag              = 7,
	EHPMProjectDefaultColumn_Confidence                = 8,
	EHPMProjectDefaultColumn_Hyperlink                 = 9,
	EHPMProjectDefaultColumn_UserTag                   = 10,
	EHPMProjectDefaultColumn_OriginallyCreatedBy       = 11,
	EHPMProjectDefaultColumn_ID                        = 12,
	EHPMProjectDefaultColumn_BugStatus                 = 13,
	EHPMProjectDefaultColumn_LastCommented             = 14,
	EHPMProjectDefaultColumn_LastUpdated               = 15,
	EHPMProjectDefaultColumn_Severity                  = 16,
	EHPMProjectDefaultColumn_LinkedTo                  = 17,
	EHPMProjectDefaultColumn_DatabaseID                = 18,
	EHPMProjectDefaultColumn_WorkPriority              = 19,
	EHPMProjectDefaultColumn_ItemName                  = 20,
	EHPMProjectDefaultColumn_Start                     = 21,
	EHPMProjectDefaultColumn_Finish                    = 22,
	EHPMProjectDefaultColumn_Duration                  = 23,
	EHPMProjectDefaultColumn_AssignedTo                = 24,
	EHPMProjectDefaultColumn_BudgetedWork              = 25,
	EHPMProjectDefaultColumn_EarnedValue               = 26,
	EHPMProjectDefaultColumn_Predecessor               = 27,
	EHPMProjectDefaultColumn_Successor                 = 28,
	EHPMProjectDefaultColumn_WorkRemaining             = 29,
	EHPMProjectDefaultColumn_CommittedToSprint         = 30,
	EHPMProjectDefaultColumn_DetailedDescription       = 31,
	EHPMProjectDefaultColumn_StepsToReproduce          = 32,
	EHPMProjectDefaultColumn_Comments                  = 33,
	EHPMProjectDefaultColumn_SubProjectPath            = 34,
	EHPMProjectDefaultColumn_CCCommentsTo              = 35,
	EHPMProjectDefaultColumn_PipelineAndWorkflow       = 36,
	EHPMProjectDefaultColumn_ItemType                  = 37,
	EHPMProjectDefaultColumn_IsOverdue                 = 38,
	EHPMProjectDefaultColumn_IsInProgress              = 39,
	EHPMProjectDefaultColumn_IsIncomplete              = 40,
	EHPMProjectDefaultColumn_IsCompleted               = 41,
	EHPMProjectDefaultColumn_IsNotStartedYet           = 42,
	EHPMProjectDefaultColumn_IsNotAssigned             = 43,
	EHPMProjectDefaultColumn_IsMilestoneOverdue        = 44,
	EHPMProjectDefaultColumn_IsOutOfOfficeTask         = 45,
	EHPMProjectDefaultColumn_UserStory                 = 46,
	EHPMProjectDefaultColumn_IsAssignedToMe            = 47,
	EHPMProjectDefaultColumn_IsUserStory               = 48,
	EHPMProjectDefaultColumn_HasChildren               = 49,
	EHPMProjectDefaultColumn_HasAssignment             = 50,
	EHPMProjectDefaultColumn_Project                   = 51,
	EHPMProjectDefaultColumn_LeafSubItems              = 52,
	EHPMProjectDefaultColumn_SubItems                  = 53,
	EHPMProjectDefaultColumn_ParentSubProjects         = 54,
	EHPMProjectDefaultColumn_ImmediateSubItems         = 55,
	EHPMProjectDefaultColumn_ImmediateParentSubProject = 56,
	EHPMProjectDefaultColumn_SprintPriority            = 57,
	EHPMProjectDefaultColumn_BacklogPriority           = 58,
	EHPMProjectDefaultColumn_BugPriority               = 59,
	EHPMProjectDefaultColumn_CanStartNow               = 60,
	EHPMProjectDefaultColumn_IsOngoingWork             = 61,
	EHPMProjectDefaultColumn_IsArchived                = 62,
	EHPMProjectDefaultColumn_IsDeleted                 = 63,
	EHPMProjectDefaultColumn_IsOnCriticalPath          = 64,
	EHPMProjectDefaultColumn_LastLoggedInReadComments  = 65,
	EHPMProjectDefaultColumn_Status                    = 66,
};

enum EHPMProjectField
{
	EHPMProjectField_NewVersionOfSDKRequired          = 0,
	EHPMProjectField_CustomColumns                    = 1,
	EHPMProjectField_WorkflowSettings                 = 2,
	EHPMProjectField_CalendarHolidays                 = 3,
	EHPMProjectField_CalendarWorkingDays              = 4,
	EHPMProjectField_CalendarCustomWorkingDays        = 5,
	EHPMProjectField_CalendarWorkingHours             = 6,
	EHPMProjectField_CalendarCustomWorkingHours       = 7,
	EHPMProjectField_Name                             = 8,
	EHPMProjectField_ArchivedStatus                   = 9,
	EHPMProjectField_ProjectMethod                    = 10,
	EHPMProjectField_CompletionStyle                  = 11,
	EHPMProjectField_AgileTemplate                    = 12,
	EHPMProjectField_OldCustomColumn                  = 13,
	EHPMProjectField_WorkflowsInMainProjectAndBacklog = 14,
	EHPMProjectField_OldResource                      = 15,
	EHPMProjectField_DefaultEditorMode                = 16,
	EHPMProjectField_DefaultActivatedColumns          = 17,
};

enum EHPMProjectDefaultField
{
	EHPMProjectDefaultField_NewVersionOfSDKRequired = 0,
	EHPMProjectDefaultField_Comment                 = 1,
	EHPMProjectDefaultField_DetailedDescription     = 2,
	EHPMProjectDefaultField_StepsToReproduce        = 3,
};

enum EHPMProjectResourceFlag
{
	EHPMProjectResourceFlag_None                    = 0,
	EHPMProjectResourceFlag_IsMainProjectManager    = 1,
	EHPMProjectResourceFlag_LimitedVisibility       = 2,
	EHPMProjectResourceFlag_CanAccessProjectHistory = 4,
};

enum EHPMProjectMethod
{
	EHPMProjectMethod_NewVersionOfSDKRequired = 0,
	EHPMProjectMethod_FixedDuration           = 1,
	EHPMProjectMethod_FixedWork               = 2,
};

enum EHPMProjectTaskCompletionStyle
{
	EHPMProjectTaskCompletionStyle_NewVersionOfSDKRequired = 0,
	EHPMProjectTaskCompletionStyle_Auto                    = 1,
	EHPMProjectTaskCompletionStyle_Binary                  = 2,
	EHPMProjectTaskCompletionStyle_Percent                 = 3,
};

enum EHPMProjectDefaultEditorMode
{
	EHPMProjectDefaultEditorMode_NewVersionOfSDKRequired = 0,
	EHPMProjectDefaultEditorMode_TaskScheduling          = 1,
	EHPMProjectDefaultEditorMode_Agile                   = 2,
};

enum EHPMProjectAgileTemplate
{
	EHPMProjectAgileTemplate_NewVersionOfSDKRequired = 0,
	EHPMProjectAgileTemplate_SCRUM                   = 1,
	EHPMProjectAgileTemplate_XP                      = 2,
	EHPMProjectAgileTemplate_Custom                  = 3,
	EHPMProjectAgileTemplate_Lean                    = 4,
};

enum EHPMProjectWorkflowObjectType
{
	EHPMProjectWorkflowObjectType_NewVersionOfSDKRequired = 0,
	EHPMProjectWorkflowObjectType_WorkflowStatus          = 1,
	EHPMProjectWorkflowObjectType_Transition              = 2,
	EHPMProjectWorkflowObjectType_EntryStatus             = 3,
	EHPMProjectWorkflowObjectType_WorkflowReference       = 4,
};

enum EHPMProjectWorkflowObjectFlag
{
	EHPMProjectWorkflowObjectFlag_None                                                                = 0,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetAssignedResourcesReassign                         = 2,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_RemoveResourcesWhenReachingThisStatus                = 4,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetAssignedResourcesReassignToOriginalReporter       = 8,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_AssignToOriginalReporterWhenReachingThisStatus       = 16,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_DontAllowNoResourcesAssigned                         = 32,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_UnpublishedStatus                                    = 64,
	EHPMProjectWorkflowObjectFlag_Transition_ResourcesCanEditAllFieldsThatMustBeSetForThisTransition  = 128,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_SetWorkRemainingToZeroWhenReachingThisWorkflowStatus = 256,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_ActionsAreEnabledOnPreviousStatus                    = 512,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_ResourcesCanSelectWorkflowOnPipelineTask             = 1024,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetResourcesBreakdownPipelineTask                    = 2048,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_WorkflowOfChildrenIsSequential                       = 4096,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_AssignToResourcesAssignedInWorkflowStatus            = 8192,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_HideInMyWork                                         = 16384,
};

enum EHPMProjectWorkflowContainerFlag
{
	EHPMProjectWorkflowContainerFlag_None                                          = 0,
	EHPMProjectWorkflowContainerFlag_PipelineTasksMustBeCompletedInSequentialOrder = 1,
	EHPMProjectWorkflowContainerFlag_IsDeleted                                     = 2,
};

enum EHPMProjectWorkflowConnectionSite
{
	EHPMProjectWorkflowConnectionSite_NewVersionOfSDKRequired = 0,
	EHPMProjectWorkflowConnectionSite_Top                     = 1,
	EHPMProjectWorkflowConnectionSite_Bottom                  = 2,
};

enum EHPMProjectWorkflowRequiredFieldType
{
	EHPMProjectWorkflowRequiredFieldType_NewVersionOfSDKRequired = 0,
	EHPMProjectWorkflowRequiredFieldType_DefaultColumn           = 1,
	EHPMProjectWorkflowRequiredFieldType_DefaultField            = 2,
	EHPMProjectWorkflowRequiredFieldType_CustomColumn            = 3,
	EHPMProjectWorkflowRequiredFieldType_EnableAction            = 4,
};

enum EHPMProjectSprintPredictionMethod
{
	EHPMProjectSprintPredictionMethod_NewVersionOfSDKRequired = 0,
	EHPMProjectSprintPredictionMethod_5Days_WeightedAverage   = 1,
	EHPMProjectSprintPredictionMethod_3Days_WeightedAverage   = 2,
	EHPMProjectSprintPredictionMethod_7Days_WeightedAverage   = 3,
	EHPMProjectSprintPredictionMethod_10Days_WeightedAverage  = 4,
	EHPMProjectSprintPredictionMethod_14Days_WeightedAverage  = 5,
	EHPMProjectSprintPredictionMethod_NoPrediction            = 6,
};

enum EHPMProjectWallSettingsFlags
{
	EHPMProjectWallSettingsFlags_None                        = 0,
	EHPMProjectWallSettingsFlags_ShowTaskDescription         = 1,
	EHPMProjectWallSettingsFlags_ShowTaskUserStory           = 2,
	EHPMProjectWallSettingsFlags_ShowSubProjectPath          = 4,
	EHPMProjectWallSettingsFlags_ShowTaskCommentText         = 8,
	EHPMProjectWallSettingsFlags_ShowGroupEstimatedIdealDays = 16,
	EHPMProjectWallSettingsFlags_ShowGroupComplexityPoints   = 32,
	EHPMProjectWallSettingsFlags_ShowGroupWorkRemaining      = 64,
};

enum EHPMProjectDetailedAccessRuleType
{
	EHPMProjectDetailedAccessRuleType_NewVersionOfSDKRequired = 0,
	EHPMProjectDetailedAccessRuleType_GiveAccess              = 1,
	EHPMProjectDetailedAccessRuleType_RestrictAccess          = 2,
	EHPMProjectDetailedAccessRuleType_Hide                    = 3,
};

enum EHPMProjectDetailedAccessRuleFunctionType
{
	EHPMProjectDetailedAccessRuleFunctionType_NewVersionOfSDKRequired   = 0,
	EHPMProjectDetailedAccessRuleFunctionType_DefalutColumn             = 1,
	EHPMProjectDetailedAccessRuleFunctionType_CustomColumn              = 2,
	EHPMProjectDetailedAccessRuleFunctionType_TaskField                 = 3,
	EHPMProjectDetailedAccessRuleFunctionType_ChangeAttachments         = 4,
	EHPMProjectDetailedAccessRuleFunctionType_DeleteTask                = 5,
	EHPMProjectDetailedAccessRuleFunctionType_CustomizeQAWorkflow       = 6,
	EHPMProjectDetailedAccessRuleFunctionType_ExportProjectData         = 7,
	EHPMProjectDetailedAccessRuleFunctionType_ImportProjectData         = 8,
	EHPMProjectDetailedAccessRuleFunctionType_ChangeProjectColumnConfig = 9,
	EHPMProjectDetailedAccessRuleFunctionType_ChangeProjectEmailConfig  = 10,
	EHPMProjectDetailedAccessRuleFunctionType_UseScreenshotTool         = 11,
	EHPMProjectDetailedAccessRuleFunctionType_ShareReports              = 12,
	EHPMProjectDetailedAccessRuleFunctionType_OverrideWorkflow          = 13,
	EHPMProjectDetailedAccessRuleFunctionType_EditOtherUsersReports     = 14,
};

enum EHPMWorkflowType
{
	EHPMWorkflowType_NewVersionOfSDKRequired = 0,
	EHPMWorkflowType_Workflow                = 1,
	EHPMWorkflowType_Pipeline                = 2,
};

enum EHPMProjectWorkflowEnumWorkflowType
{
	EHPMProjectWorkflowEnumWorkflowType_OldVersions                                = 0,
	EHPMProjectWorkflowEnumWorkflowType_Dependencies                               = 1,
	EHPMProjectWorkflowEnumWorkflowType_Dependents                                 = 2,
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfNewestVersion                  = 3,
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfAllVersions                    = 4,
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfNewestVersion_OnlyReturnNewest = 5,
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfAllVersions_OnlyReturnNewest   = 6,
};

enum EHPMProjectWorkflowEnumObjectType
{
	EHPMProjectWorkflowEnumObjectType_Dependencies = 0,
	EHPMProjectWorkflowEnumObjectType_Dependents   = 1,
};

enum EHPMWorkflowReturnType
{
	EHPMWorkflowReturnType_NewVersionOfSDKRequired = 0,
	EHPMWorkflowReturnType_Workflow                = 1,
	EHPMWorkflowReturnType_Pipeline                = 2,
	EHPMWorkflowReturnType_Any                     = 3,
};

enum EHPMProjectPresetShowOptionFlag
{
	EHPMProjectPresetShowOptionFlag_None                                   = 0,
	EHPMProjectPresetShowOptionFlag_Tasks                                  = 1,
	EHPMProjectPresetShowOptionFlag_Bugs                                   = 2,
	EHPMProjectPresetShowOptionFlag_Completed                              = 4,
	EHPMProjectPresetShowOptionFlag_PipelineTasksThatCannotStart           = 8,
	EHPMProjectPresetShowOptionFlag_CompletedItemsWithWorkflow             = 16,
	EHPMProjectPresetShowOptionFlag_TimelineView                           = 32,
	EHPMProjectPresetShowOptionFlag_OngoingAndFutureSprints                = 64,
	EHPMProjectPresetShowOptionFlag_CommittedToSprint                      = 128,
	EHPMProjectPresetShowOptionFlag_AssignedToMeOnly                       = 256,
	EHPMProjectPresetShowOptionFlag_EditableByMeOnly                       = 512,
	EHPMProjectPresetShowOptionFlag_DetailedDescriptionOrUserStoriesInList = 1024,
	EHPMProjectPresetShowOptionFlag_CommentsInList                         = 2048,
	EHPMProjectPresetShowOptionFlag_Archived                               = 4096,
	EHPMProjectPresetShowOptionFlag_FourWeeksScheduling                    = 8192,
	EHPMProjectPresetShowOptionFlag_ShowItemDetailsWindow                  = 16384,
};

enum EHPMProjectUserMessageType
{
	EHPMProjectUserMessageType_NewVersionOfSDKRequired = 0,
	EHPMProjectUserMessageType_Error                   = 1,
	EHPMProjectUserMessageType_Warning                 = 2,
	EHPMProjectUserMessageType_Info                    = 3,
};

enum EHPMProjectGetDefaultActivatedNonHidableColumnsFlag
{
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_None          = 0,
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_ScheduledMode = 1,
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_AgileMode     = 2,
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_ProjectMode   = 4,
};

enum EHPMTaskField
{
	EHPMTaskField_NewVersionOfSDKRequired        = 0,
	EHPMTaskField_Container                      = 1,
	EHPMTaskField_BacklogCategory                = 2,
	EHPMTaskField_Color                          = 3,
	EHPMTaskField_ComplexityPoints               = 4,
	EHPMTaskField_Confidence                     = 5,
	EHPMTaskField_EstimatedIdealDays             = 6,
	EHPMTaskField_Priority                       = 7,
	EHPMTaskField_Risk                           = 8,
	EHPMTaskField_StartOffset                    = 9,
	EHPMTaskField_Duration                       = 10,
	EHPMTaskField_ForceSubProject                = 11,
	EHPMTaskField_BudgetedWork                   = 12,
	EHPMTaskField_LockedType                     = 13,
	EHPMTaskField_PercentComplete                = 14,
	EHPMTaskField_Status                         = 15,
	EHPMTaskField_Type                           = 16,
	EHPMTaskField_Unlocked                       = 17,
	EHPMTaskField_VacationOptions                = 18,
	EHPMTaskField_Comment                        = 19,
	EHPMTaskField_Description                    = 20,
	EHPMTaskField_Hyperlink                      = 21,
	EHPMTaskField_LinkedToMilestone              = 22,
	EHPMTaskField_LinkedToSprint                 = 23,
	EHPMTaskField_LockedBy                       = 24,
	EHPMTaskField_OriginallyCreatedBy            = 25,
	EHPMTaskField_AttachedDocuments              = 26,
	EHPMTaskField_DelegateTo                     = 27,
	EHPMTaskField_SprintAllocatedResources       = 28,
	EHPMTaskField_Completed                      = 29,
	EHPMTaskField_TimeZones                      = 30,
	EHPMTaskField_VisibleTo                      = 31,
	EHPMTaskField_WorkRemaining                  = 32,
	EHPMTaskField_SprintResourceAllocation       = 33,
	EHPMTaskField_CommentsOptions                = 34,
	EHPMTaskField_WorkflowStatus                 = 35,
	EHPMTaskField_LastUpdatedTime                = 36,
	EHPMTaskField_Severity                       = 37,
	EHPMTaskField_DetailedDescription            = 38,
	EHPMTaskField_UserStoryFlag                  = 39,
	EHPMTaskField_SprintResourcesHaveFullRights  = 40,
	EHPMTaskField_ID                             = 41,
	EHPMTaskField_StepsToReproduce               = 42,
	EHPMTaskField_LinkedTo                       = 43,
	EHPMTaskField_CustomColumnData               = 44,
	EHPMTaskField_TimeZoneStart                  = 45,
	EHPMTaskField_TimeZoneEnd                    = 46,
	EHPMTaskField_ResourceAllocationFirst        = 47,
	EHPMTaskField_ResourceAllocationFirstPercent = 48,
	EHPMTaskField_ResourceAllocationMore         = 49,
	EHPMTaskField_WallItemColor                  = 50,
	EHPMTaskField_WallItemPositions              = 51,
	EHPMTaskField_Workflow                       = 52,
	EHPMTaskField_LinkedToPipelineTask           = 53,
	EHPMTaskField_CreatedPipelineTasks           = 54,
	EHPMTaskField_CreatedFromWorkflowObject      = 55,
	EHPMTaskField_TotalDuration                  = 56,
	EHPMTaskField_DefaultWorkflow                = 57,
	EHPMTaskField_FullyCreated                   = 58,
	EHPMTaskField_SprintPriority                 = 59,
	EHPMTaskField_BacklogPriority                = 60,
	EHPMTaskField_BugPriority                    = 61,
	EHPMTaskField_Archived                       = 62,
	EHPMTaskField_IdealDaysHistory               = 63,
	EHPMTaskField_PointsHistory                  = 64,
	EHPMTaskField_Undefined                      = 65,
	EHPMTaskField_LastUserInterfaceAction        = 66,
	EHPMTaskField_WorkRemainingHistory           = 67,
};

enum EHPMTaskRefField
{
	EHPMTaskRefField_NewVersionOfSDKRequired = 0,
	EHPMTaskRefField_TaskID                  = 1,
	EHPMTaskRefField_TreeLevel               = 2,
	EHPMTaskRefField_ParentID                = 3,
	EHPMTaskRefField_NewlyCreated            = 4,
	EHPMTaskRefField_UIDHistory              = 5,
	EHPMTaskRefField_ParentIDWorkPriority    = 6,
};

enum EHPMTaskConnectionType
{
	EHPMTaskConnectionType_NewVersionOfSDKRequired = 0,
	EHPMTaskConnectionType_EndToStart              = 1,
	EHPMTaskConnectionType_EndToEnd                = 2,
	EHPMTaskConnectionType_StartToEnd              = 3,
	EHPMTaskConnectionType_StartToStart            = 4,
};

enum EHPMTaskStatus
{
	EHPMTaskStatus_NewVersionOfSDKRequired = 0,
	EHPMTaskStatus_NoStatus                = 1,
	EHPMTaskStatus_NotDone                 = 2,
	EHPMTaskStatus_InProgress              = 3,
	EHPMTaskStatus_Completed               = 4,
	EHPMTaskStatus_Blocked                 = 5,
	EHPMTaskStatus_Deleted                 = 6,
};

enum EHPMTaskLockedType
{
	EHPMTaskLockedType_NewVersionOfSDKRequired = 0,
	EHPMTaskLockedType_Normal                  = 1,
	EHPMTaskLockedType_BacklogItem             = 2,
	EHPMTaskLockedType_SprintItem              = 3,
	EHPMTaskLockedType_QABug                   = 4,
};

enum EHPMTaskType
{
	EHPMTaskType_NewVersionOfSDKRequired = 0,
	EHPMTaskType_Planned                 = 1,
	EHPMTaskType_Milestone               = 2,
};

enum EHPMTaskBacklogCategory
{
	EHPMTaskBacklogCategory_NewVersionOfSDKRequired = 0,
	EHPMTaskBacklogCategory_None                    = 1,
	EHPMTaskBacklogCategory_Requirement             = 2,
	EHPMTaskBacklogCategory_Enhancement             = 3,
	EHPMTaskBacklogCategory_TechnologyUpgrade       = 4,
	EHPMTaskBacklogCategory_BugA                    = 5,
	EHPMTaskBacklogCategory_BugB                    = 6,
	EHPMTaskBacklogCategory_BugC                    = 7,
	EHPMTaskBacklogCategory_BugD                    = 8,
};

enum EHPMTaskSeverity
{
	EHPMTaskSeverity_NewVersionOfSDKRequired = 0,
	EHPMTaskSeverity_None                    = 1,
	EHPMTaskSeverity_A                       = 2,
	EHPMTaskSeverity_B                       = 3,
	EHPMTaskSeverity_C                       = 4,
	EHPMTaskSeverity_D                       = 5,
};

enum EHPMTaskConfidence
{
	EHPMTaskConfidence_NewVersionOfSDKRequired = 0,
	EHPMTaskConfidence_None                    = 1,
	EHPMTaskConfidence_Low                     = 2,
	EHPMTaskConfidence_Medium                  = 3,
	EHPMTaskConfidence_High                    = 4,
};

enum EHPMTaskPriority
{
	EHPMTaskPriority_NewVersionOfSDKRequired = 0,
	EHPMTaskPriority_None                    = 1,
	EHPMTaskPriority_Low                     = 2,
	EHPMTaskPriority_Medium                  = 3,
	EHPMTaskPriority_High                    = 4,
};

enum EHPMTaskRisk
{
	EHPMTaskRisk_NewVersionOfSDKRequired = 0,
	EHPMTaskRisk_None                    = 1,
	EHPMTaskRisk_Low                     = 2,
	EHPMTaskRisk_Medium                  = 3,
	EHPMTaskRisk_High                    = 4,
};

enum EHPMTaskLastUserInterfaceAction
{
	EHPMTaskLastUserInterfaceAction_NewVersionOfSDKRequired                                = 0,
	EHPMTaskLastUserInterfaceAction_None                                                   = 1,
	EHPMTaskLastUserInterfaceAction_WhenCreating                                           = 2,
	EHPMTaskLastUserInterfaceAction_AutoSummary                                            = 3,
	EHPMTaskLastUserInterfaceAction_UndoRedoProjectView                                    = 4,
	EHPMTaskLastUserInterfaceAction_UndoRedoWallView                                       = 5,
	EHPMTaskLastUserInterfaceAction_DraggingWallView                                       = 6,
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_ProjectView                   = 7,
	EHPMTaskLastUserInterfaceAction_SettingItemStatus_ProjectView                          = 8,
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_LosingFocus_DetailsWindow     = 9,
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_SettingDirectly_DetailsWindow = 10,
	EHPMTaskLastUserInterfaceAction_SettingItemStatus_DetailsWindow                        = 11,
};

enum EHPMTaskVacationOptionsFlag
{
	EHPMTaskVacationOptionsFlag_None                 = 0,
	EHPMTaskVacationOptionsFlag_WorkMonday           = 1,
	EHPMTaskVacationOptionsFlag_WorkTuesday          = 2,
	EHPMTaskVacationOptionsFlag_WorkWednesday        = 4,
	EHPMTaskVacationOptionsFlag_WorkThursday         = 8,
	EHPMTaskVacationOptionsFlag_WorkFriday           = 16,
	EHPMTaskVacationOptionsFlag_WorkSaturday         = 32,
	EHPMTaskVacationOptionsFlag_WorkSunday           = 64,
	EHPMTaskVacationOptionsFlag_IsVacationTask       = 128,
	EHPMTaskVacationOptionsFlag_WorkDaysValid        = 256,
	EHPMTaskVacationOptionsFlag_WorkPassesValid      = 512,
	EHPMTaskVacationOptionsFlag_UnionFreeDays        = 1024,
	EHPMTaskVacationOptionsFlag_UnionWorkingDays     = 2048,
	EHPMTaskVacationOptionsFlag_ShortestWorkingHours = 4096,
	EHPMTaskVacationOptionsFlag_LongestWorkingHours  = 8192,
};

enum EHPMTaskCommentFlag
{
	EHPMTaskCommentFlag_None      = 0,
	EHPMTaskCommentFlag_IsPosted  = 1,
	EHPMTaskCommentFlag_IsWriting = 2,
};

enum EHPMTaskLinkedToLinkType
{
	EHPMTaskLinkedToLinkType_NewVersionOfSDKRequired = 0,
	EHPMTaskLinkedToLinkType_TaskItemOrBug           = 1,
};

enum EHPMTaskWallItemColor
{
	EHPMTaskWallItemColor_NewVersionOfSDKRequired = 0,
	EHPMTaskWallItemColor_Yellow                  = 1,
	EHPMTaskWallItemColor_Blue                    = 2,
	EHPMTaskWallItemColor_Green                   = 3,
	EHPMTaskWallItemColor_Red                     = 4,
	EHPMTaskWallItemColor_Magenta                 = 5,
	EHPMTaskWallItemColor_Orange                  = 6,
	EHPMTaskWallItemColor_Cyan                    = 7,
};

enum EHPMTaskAgilePriorityCategory
{
	EHPMTaskAgilePriorityCategory_NewVersionOfSDKRequired = 0,
	EHPMTaskAgilePriorityCategory_None                    = 1,
	EHPMTaskAgilePriorityCategory_VeryLow                 = 2,
	EHPMTaskAgilePriorityCategory_Low                     = 3,
	EHPMTaskAgilePriorityCategory_Medium                  = 4,
	EHPMTaskAgilePriorityCategory_High                    = 5,
	EHPMTaskAgilePriorityCategory_VeryHigh                = 6,
};

enum EHPMTaskChangeDispositionEntryChangeFlag
{
	EHPMTaskChangeDispositionEntryChangeFlag_None                       = 0,
	EHPMTaskChangeDispositionEntryChangeFlag_PreviousRefID              = 1,
	EHPMTaskChangeDispositionEntryChangeFlag_TreeLevel                  = 2,
	EHPMTaskChangeDispositionEntryChangeFlag_LinkedToSprint             = 4,
	EHPMTaskChangeDispositionEntryChangeFlag_LinkToMainRealWorkflowItem = 8,
	EHPMTaskChangeDispositionEntryChangeFlag_TaskType                   = 16,
	EHPMTaskChangeDispositionEntryChangeFlag_TaskLockedType             = 32,
};

enum EHPMTaskChangeDispositionOptionFlag
{
	EHPMTaskChangeDispositionOptionFlag_None                          = 0,
	EHPMTaskChangeDispositionOptionFlag_ChangeWorkPriorityDisposition = 1,
	EHPMTaskChangeDispositionOptionFlag_ReportDebugInfoOnRejection    = 2,
	EHPMTaskChangeDispositionOptionFlag_AllowInvalidChanges           = 4,
};

enum EHPMTaskConnectionFlag
{
	EHPMTaskConnectionFlag_None         = 0,
	EHPMTaskConnectionFlag_Dependencies = 1,
	EHPMTaskConnectionFlag_Dependents   = 2,
};

enum EHPMTaskSetStatusFlag
{
	EHPMTaskSetStatusFlag_None              = 0,
	EHPMTaskSetStatusFlag_DoAutoAssignments = 1,
	EHPMTaskSetStatusFlag_DoAutoCompletion  = 2,
	EHPMTaskSetStatusFlag_All               = 2147483647,
};

enum EHPMTaskFindFlag
{
	EHPMTaskFindFlag_None             = 0,
	EHPMTaskFindFlag_ArchivedProjects = 1,
};

enum EHPMVersionControlCallbackOperation
{
	EHPMVersionControlCallbackOperation_NewVersionOfSDKRequired = 0,
	EHPMVersionControlCallbackOperation_None                    = 1,
	EHPMVersionControlCallbackOperation_Add                     = 2,
	EHPMVersionControlCallbackOperation_Update                  = 3,
	EHPMVersionControlCallbackOperation_Delete                  = 4,
	EHPMVersionControlCallbackOperation_Rename                  = 5,
	EHPMVersionControlCallbackOperation_ReAdd                   = 6,
	EHPMVersionControlCallbackOperation_Rollback                = 7,
	EHPMVersionControlCallbackOperation_Undelete                = 8,
};

enum EHPMVersionControlFileAttributesFlag
{
	EHPMVersionControlFileAttributesFlag_None      = 0,
	EHPMVersionControlFileAttributesFlag_Directory = 1,
};

enum EHPMVersionControlMetaDataType
{
	EHPMVersionControlMetaDataType_NewVersionOfSDKRequired = 0,
	EHPMVersionControlMetaDataType_Unknown                 = 1,
	EHPMVersionControlMetaDataType_String                  = 2,
	EHPMVersionControlMetaDataType_Int                     = 3,
	EHPMVersionControlMetaDataType_Float                   = 4,
};

enum EHPMVersionControlCallbackChanged
{
	EHPMVersionControlCallbackChanged_None         = 0,
	EHPMVersionControlCallbackChanged_FileContents = 1,
	EHPMVersionControlCallbackChanged_Resource     = 2,
	EHPMVersionControlCallbackChanged_Comment      = 4,
	EHPMVersionControlCallbackChanged_Date         = 8,
	EHPMVersionControlCallbackChanged_MetaData     = 16,
};

enum EHPMVersionControlFileInfoFlag
{
	EHPMVersionControlFileInfoFlag_None                      = 0,
	EHPMVersionControlFileInfoFlag_CheckedOutByYou           = 1,
	EHPMVersionControlFileInfoFlag_CheckedOutByOther         = 2,
	EHPMVersionControlFileInfoFlag_ExistsLocally             = 4,
	EHPMVersionControlFileInfoFlag_ChildrenExistsLocallySome = 16,
	EHPMVersionControlFileInfoFlag_ChildrenExistsLocallyAll  = 32,
	EHPMVersionControlFileInfoFlag_FileUpToDate              = 64,
};

enum EHPMVersionControlAccessRightFlag
{
	EHPMVersionControlAccessRightFlag_None             = 0,
	EHPMVersionControlAccessRightFlag_List             = 1,
	EHPMVersionControlAccessRightFlag_Read             = 2,
	EHPMVersionControlAccessRightFlag_Write            = 4,
	EHPMVersionControlAccessRightFlag_Rename           = 8,
	EHPMVersionControlAccessRightFlag_Create           = 16,
	EHPMVersionControlAccessRightFlag_Delete           = 32,
	EHPMVersionControlAccessRightFlag_PermanentDelete  = 64,
	EHPMVersionControlAccessRightFlag_Restore          = 128,
	EHPMVersionControlAccessRightFlag_WritePermissions = 256,
	EHPMVersionControlAccessRightFlag_ReadPermissions  = 512,
};

enum EHPMVersionControlSpecialAccessRightObject
{
	EHPMVersionControlSpecialAccessRightObject_NewVersionOfSDKRequired = -65536,
	EHPMVersionControlSpecialAccessRightObject_Everyone                = -2,
	EHPMVersionControlSpecialAccessRightObject_Administartors          = -3,
};

enum EHPMVersionControlVersionAction
{
	EHPMVersionControlVersionAction_NewVersionOfSDKRequired = 0,
	EHPMVersionControlVersionAction_None                    = 1,
	EHPMVersionControlVersionAction_Add                     = 2,
	EHPMVersionControlVersionAction_Update                  = 3,
	EHPMVersionControlVersionAction_Delete                  = 4,
	EHPMVersionControlVersionAction_Rename                  = 5,
	EHPMVersionControlVersionAction_ReAdd                   = 6,
	EHPMVersionControlVersionAction_Rollback                = 7,
	EHPMVersionControlVersionAction_Restore                 = 8,
};

enum EHPMVersionControlVersionActionInfo
{
	EHPMVersionControlVersionActionInfo_NewVersionOfSDKRequired = 0,
	EHPMVersionControlVersionActionInfo_None                    = 1,
	EHPMVersionControlVersionActionInfo_Legacy                  = 2,
	EHPMVersionControlVersionActionInfo_Add                     = 3,
	EHPMVersionControlVersionActionInfo_DirAdd                  = 4,
	EHPMVersionControlVersionActionInfo_FileAdd                 = 5,
	EHPMVersionControlVersionActionInfo_Update                  = 6,
	EHPMVersionControlVersionActionInfo_Delete                  = 7,
	EHPMVersionControlVersionActionInfo_Rename                  = 8,
	EHPMVersionControlVersionActionInfo_Move                    = 9,
	EHPMVersionControlVersionActionInfo_ReAdd                   = 10,
	EHPMVersionControlVersionActionInfo_FileReAdd               = 11,
	EHPMVersionControlVersionActionInfo_Rollback                = 12,
	EHPMVersionControlVersionActionInfo_Undelete                = 13,
	EHPMVersionControlVersionActionInfo_Create                  = 14,
	EHPMVersionControlVersionActionInfo_SdkAdd                  = 15,
	EHPMVersionControlVersionActionInfo_TransCreate             = 16,
	EHPMVersionControlVersionActionInfo_ProjectCreate           = 17,
	EHPMVersionControlVersionActionInfo_GlobalCreate            = 18,
	EHPMVersionControlVersionActionInfo_ProjectUpdate           = 19,
};

enum EHPMVersionControlError
{
	EHPMVersionControlError_NewVersionOfSDKRequired    = 0,
	EHPMVersionControlError_Success                    = 1,
	EHPMVersionControlError_Other                      = 2,
	EHPMVersionControlError_InternalError              = 3,
	EHPMVersionControlError_FileAlreadyExists          = 4,
	EHPMVersionControlError_Checksum                   = 5,
	EHPMVersionControlError_DiskFull                   = 6,
	EHPMVersionControlError_FileDoesNotExist           = 7,
	EHPMVersionControlError_InvalidVersion             = 8,
	EHPMVersionControlError_FileAlreadyCheckedOut      = 9,
	EHPMVersionControlError_AccessDenied               = 10,
	EHPMVersionControlError_FileDoesNotExistLocal      = 11,
	EHPMVersionControlError_FileAlreadyCheckedOutByYou = 12,
	EHPMVersionControlError_CouldNotWriteFileLocal     = 13,
	EHPMVersionControlError_FileDeleted                = 14,
	EHPMVersionControlError_FileNotDeleted             = 15,
	EHPMVersionControlError_CheckedOutSkipped          = 16,
	EHPMVersionControlError_VersionDoesNotExtist       = 17,
	EHPMVersionControlError_NoVersionsWouldRemain      = 18,
	EHPMVersionControlError_FileIsAlreadyVersion       = 19,
	EHPMVersionControlError_CouldNotReadFileLocal      = 20,
	EHPMVersionControlError_Success_FileUnchanged      = 21,
	EHPMVersionControlError_FileAreadyDeleted          = 22,
};

enum EHPMDataHistoryEntryType
{
	EHPMDataHistoryEntryType_NewVersionOfSDKRequired  = 0,
	EHPMDataHistoryEntryType_FieldCreated             = 1,
	EHPMDataHistoryEntryType_FieldChanged             = 2,
	EHPMDataHistoryEntryType_FieldDeleted             = 3,
	EHPMDataHistoryEntryType_TaskCreated              = 4,
	EHPMDataHistoryEntryType_Statistics_AbsoluteValue = 5,
	EHPMDataHistoryEntryType_Statistics_RelativeValue = 6,
	EHPMDataHistoryEntryType_TaskDeleted              = 7,
	EHPMDataHistoryEntryType_TaskMoved                = 8,
	EHPMDataHistoryEntryType_TaskRenameCustomColumn   = 9,
	EHPMDataHistoryEntryType_TaskProxyCreated         = 10,
	EHPMDataHistoryEntryType_TaskProxyDeleted         = 11,
	EHPMDataHistoryEntryType_TaskRestoredFromHistory  = 12,
	EHPMDataHistoryEntryType_ChatHistory              = 13,
};

enum EHPMDataHistoryEntryKind
{
	EHPMDataHistoryEntryKind_NewVersionOfSDKRequired = 0,
	EHPMDataHistoryEntryKind_Default                 = 1,
	EHPMDataHistoryEntryKind_ProjectChangeHistory    = 2,
};

enum EHPMDataHistoryClientOrigin
{
	EHPMDataHistoryClientOrigin_NewVersionOfSDKRequired = 0,
	EHPMDataHistoryClientOrigin_None                    = 1,
	EHPMDataHistoryClientOrigin_Unknown                 = 2,
	EHPMDataHistoryClientOrigin_Default                 = 3,
	EHPMDataHistoryClientOrigin_DefaultSDK              = 4,
	EHPMDataHistoryClientOrigin_Custom                  = 5,
	EHPMDataHistoryClientOrigin_CustomSDK               = 6,
};

enum EHPMDataHistoryOrigin
{
	EHPMDataHistoryOrigin_NewVersionOfSDKRequired                            = 0,
	EHPMDataHistoryOrigin_None                                               = 1,
	EHPMDataHistoryOrigin_Unknown                                            = 2,
	EHPMDataHistoryOrigin_StatisticsSampling                                 = 3,
	EHPMDataHistoryOrigin_FixDatabaseErrors                                  = 4,
	EHPMDataHistoryOrigin_UpdateAllDurationDatabaseLoad                      = 5,
	EHPMDataHistoryOrigin_UpdateTaskToLatestPipeline                         = 6,
	EHPMDataHistoryOrigin_SetInitialFieldValues                              = 7,
	EHPMDataHistoryOrigin_LinkTasksToMilestones                              = 8,
	EHPMDataHistoryOrigin_ChangeDisposition                                  = 9,
	EHPMDataHistoryOrigin_CreateTask                                         = 10,
	EHPMDataHistoryOrigin_CreateProxy                                        = 11,
	EHPMDataHistoryOrigin_MoveTask                                           = 12,
	EHPMDataHistoryOrigin_DeleteTask                                         = 13,
	EHPMDataHistoryOrigin_UpdateSprintStatisticsMidnight                     = 14,
	EHPMDataHistoryOrigin_UpdateSprintStatisticsDatabaseOnline               = 15,
	EHPMDataHistoryOrigin_ConvertDatabaseVersion                             = 16,
	EHPMDataHistoryOrigin_DeleteResource                                     = 17,
	EHPMDataHistoryOrigin_DeleteShare                                        = 18,
	EHPMDataHistoryOrigin_RemoveResourceFromProject                          = 19,
	EHPMDataHistoryOrigin_ChangeProjectArchivedStatus                        = 20,
	EHPMDataHistoryOrigin_InvokeDispositionBug                               = 21,
	EHPMDataHistoryOrigin_DeleteCustomColumn                                 = 22,
	EHPMDataHistoryOrigin_RenameCustomColumn                                 = 23,
	EHPMDataHistoryOrigin_FullCommentsCreated                                = 24,
	EHPMDataHistoryOrigin_CommentCreated                                     = 25,
	EHPMDataHistoryOrigin_CommentDeleted                                     = 26,
	EHPMDataHistoryOrigin_ConvertProjectChangeHistory                        = 27,
	EHPMDataHistoryOrigin_ProjectCreate                                      = 28,
	EHPMDataHistoryOrigin_ProjectChange                                      = 29,
	EHPMDataHistoryOrigin_ProjectSetCustomColumns                            = 30,
	EHPMDataHistoryOrigin_ProjectAddCustomColumn                             = 31,
	EHPMDataHistoryOrigin_ProjectOpenQA                                      = 32,
	EHPMDataHistoryOrigin_ProjectSetWorkflow                                 = 33,
	EHPMDataHistoryOrigin_ProjectEnableWorkflowsInMainProjectAndBacklog      = 34,
	EHPMDataHistoryOrigin_ProjectCreateWorkflow                              = 35,
	EHPMDataHistoryOrigin_ProjectChangeWorkflow                              = 36,
	EHPMDataHistoryOrigin_ProjectDeleteWorkflow                              = 37,
	EHPMDataHistoryOrigin_AddResourceToProject                               = 38,
	EHPMDataHistoryOrigin_CreateShare                                        = 39,
	EHPMDataHistoryOrigin_CreateResource                                     = 40,
	EHPMDataHistoryOrigin_ProjectOpenBacklog                                 = 41,
	EHPMDataHistoryOrigin_ProjectSetDefaultActivatedColumns                  = 42,
	EHPMDataHistoryOrigin_CommandChangeField_Comment                         = 43,
	EHPMDataHistoryOrigin_CommandChangeField_Description                     = 44,
	EHPMDataHistoryOrigin_CommandChangeField_TimeZones                       = 45,
	EHPMDataHistoryOrigin_CommandChangeField_Completed                       = 46,
	EHPMDataHistoryOrigin_CommandChangeField_Resources                       = 47,
	EHPMDataHistoryOrigin_CommandChangeField_Color                           = 48,
	EHPMDataHistoryOrigin_CommandChangeField_Unlocked                        = 49,
	EHPMDataHistoryOrigin_CommandChangeField_BudgetedWork                    = 50,
	EHPMDataHistoryOrigin_CommandChangeField_CompletedPercent                = 51,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedToMilestones              = 52,
	EHPMDataHistoryOrigin_CommandChangeField_AttachedDocuments               = 53,
	EHPMDataHistoryOrigin_CommandChangeField_DelegatedTo                     = 54,
	EHPMDataHistoryOrigin_CommandChangeField_OriginallyCreatedBy             = 55,
	EHPMDataHistoryOrigin_CommandChangeField_CustomColumnData                = 56,
	EHPMDataHistoryOrigin_CommandChangeField_VisibleTo                       = 57,
	EHPMDataHistoryOrigin_CommandChangeField_DurationHours                   = 58,
	EHPMDataHistoryOrigin_CommandChangeField_HourOffset                      = 59,
	EHPMDataHistoryOrigin_CommandChangeField_Risk                            = 60,
	EHPMDataHistoryOrigin_CommandChangeField_Priority                        = 61,
	EHPMDataHistoryOrigin_CommandChangeField_IdealDays                       = 62,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedToSprint                  = 63,
	EHPMDataHistoryOrigin_CommandChangeField_WorkRemaining                   = 64,
	EHPMDataHistoryOrigin_CommandChangeField_BacklogCategory                 = 65,
	EHPMDataHistoryOrigin_CommandChangeField_Points                          = 66,
	EHPMDataHistoryOrigin_CommandChangeField_ItemStatus                      = 67,
	EHPMDataHistoryOrigin_CommandChangeField_LastUserIntefraceAction         = 68,
	EHPMDataHistoryOrigin_CommandChangeField_Confidence                      = 69,
	EHPMDataHistoryOrigin_CommandChangeField_WorkRemainingHistory            = 70,
	EHPMDataHistoryOrigin_CommandChangeField_IdealDaysHistory                = 71,
	EHPMDataHistoryOrigin_CommandChangeField_PointsHistory                   = 72,
	EHPMDataHistoryOrigin_CommandChangeField_SprintAllocatedResources        = 73,
	EHPMDataHistoryOrigin_CommandChangeField_HyperLink                       = 74,
	EHPMDataHistoryOrigin_CommandChangeField_CalendarOptions                 = 75,
	EHPMDataHistoryOrigin_CommandChangeField_SprintResourceAllocation        = 76,
	EHPMDataHistoryOrigin_CommandChangeField_CommentsOptions                 = 77,
	EHPMDataHistoryOrigin_CommandChangeField_WorkflowStatus                  = 78,
	EHPMDataHistoryOrigin_CommandChangeField_Severity                        = 79,
	EHPMDataHistoryOrigin_CommandChangeField_DetailedDescription             = 80,
	EHPMDataHistoryOrigin_CommandChangeField_IsUserStory                     = 81,
	EHPMDataHistoryOrigin_CommandChangeField_Archived                        = 82,
	EHPMDataHistoryOrigin_CommandChangeField_SprintDisableFullCreationRights = 83,
	EHPMDataHistoryOrigin_CommandChangeField_StepsToReproduce                = 84,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedTo                        = 85,
	EHPMDataHistoryOrigin_CommandChangeField_WallItemColorCategory           = 86,
	EHPMDataHistoryOrigin_CommandChangeField_WorkflowID                      = 87,
	EHPMDataHistoryOrigin_CommandChangeField_DefaultWorkflowIDForNewItems    = 88,
	EHPMDataHistoryOrigin_CommandChangeField_FullyCreated                    = 89,
	EHPMDataHistoryOrigin_CommandChangeField_SprintPriority                  = 90,
	EHPMDataHistoryOrigin_CommandChangeField_BacklogPriority                 = 91,
	EHPMDataHistoryOrigin_CommandChangeField_BugPriority                     = 92,
	EHPMDataHistoryOrigin_CommandChangeField_SubProjectLock                  = 93,
};

enum EHPMStatisticsField
{
	EHPMStatisticsField_NewVersionOfSDKRequired         = HPMInt32(2147483648u),
	EHPMStatisticsField_WorkRemaining                   = 0,
	EHPMStatisticsField_EstimatedIdealDays              = 1,
	EHPMStatisticsField_ItemStatus                      = 2,
	EHPMStatisticsField_Severity                        = 3,
	EHPMStatisticsField_BugStatus                       = 4,
	EHPMStatisticsField_CompletedAndInCompletedDays     = 5,
	EHPMStatisticsField_BudgetedWorkEarnedValue         = 6,
	EHPMStatisticsField_ComplexityPoints                = 7,
	EHPMStatisticsField_Priority                        = 8,
	EHPMStatisticsField_Risk                            = 9,
	EHPMStatisticsField_Confidence                      = 10,
	EHPMStatisticsField_CustomColumn                    = 11,
	EHPMStatisticsField_CustomStatisticsSampler         = 12,
	EHPMStatisticsField_PipelineTasksBuildupAndBurndown = 13,
	EHPMStatisticsField_RecordedStatisticsOnDate        = 14,
	EHPMStatisticsField_NoStatistics                    = 15,
};

enum EHPMStatisticsScope
{
	EHPMStatisticsScope_NewVersionOfSDKRequired = HPMInt32(2147483648u),
	EHPMStatisticsScope_Everyone                = 0,
	EHPMStatisticsScope_Resource                = 1,
	EHPMStatisticsScope_ResourceGroup           = 2,
	EHPMStatisticsScope_Milestone               = 3,
	EHPMStatisticsScope_ChatHistory             = 4,
	EHPMStatisticsScope_ProjectChangeHistory    = 5,
	EHPMStatisticsScope_NoStatisticsScope       = 6,
};

enum EHPMDataHistoryFlag
{
	EHPMDataHistoryFlag_None              = 0,
	EHPMDataHistoryFlag_GetEntriesReverse = 1,
};

enum EHPMCustomChoiceValueType
{
	EHPMCustomChoiceValueType_NewVersionOfSDKRequired = 0,
	EHPMCustomChoiceValueType_Unknown                 = 1,
	EHPMCustomChoiceValueType_Resource                = 2,
	EHPMCustomChoiceValueType_Project                 = 3,
	EHPMCustomChoiceValueType_Task                    = 4,
	EHPMCustomChoiceValueType_CustomColumnHash        = 5,
	EHPMCustomChoiceValueType_DefaultColumn           = 6,
	EHPMCustomChoiceValueType_GlobalReport            = 7,
	EHPMCustomChoiceValueType_Report                  = 8,
	EHPMCustomChoiceValueType_ResourceGroup           = 9,
};

enum EHPMFindCriteriaType
{
	EHPMFindCriteriaType_NewVersionOfSDKRequired = 0,
	EHPMFindCriteriaType_Criteria                = 1,
	EHPMFindCriteriaType_AllItems                = 2,
	EHPMFindCriteriaType_ReportedItems           = 3,
	EHPMFindCriteriaType_ExcludingCriteria       = 4,
};

enum EHPMFindCriteriaDataType
{
	EHPMFindCriteriaDataType_NewVersionOfSDKRequired = 0,
	EHPMFindCriteriaDataType_Invalid                 = 1,
	EHPMFindCriteriaDataType_Text                    = 2,
	EHPMFindCriteriaDataType_Droplist                = 3,
	EHPMFindCriteriaDataType_Integer                 = 4,
	EHPMFindCriteriaDataType_Float                   = 5,
	EHPMFindCriteriaDataType_Date                    = 6,
	EHPMFindCriteriaDataType_GeneralCondition        = 7,
	EHPMFindCriteriaDataType_MultiSelectDroplist     = 8,
	EHPMFindCriteriaDataType_UnquotedText            = 9,
};

enum EHPMFindCriteriaOperator
{
	EHPMFindCriteriaOperator_NewVersionOfSDKRequired   = 0,
	EHPMFindCriteriaOperator_NoOperator                = 1,
	EHPMFindCriteriaOperator_EmptyOperator             = 2,
	EHPMFindCriteriaOperator_Contains                  = 3,
	EHPMFindCriteriaOperator_ContainsCase              = 4,
	EHPMFindCriteriaOperator_NotContains               = 5,
	EHPMFindCriteriaOperator_NotContainsCase           = 6,
	EHPMFindCriteriaOperator_StartsWith                = 7,
	EHPMFindCriteriaOperator_StartsWithCase            = 8,
	EHPMFindCriteriaOperator_EndsWith                  = 9,
	EHPMFindCriteriaOperator_EndsWithCase              = 10,
	EHPMFindCriteriaOperator_EqualTo                   = 11,
	EHPMFindCriteriaOperator_EqualToCase               = 12,
	EHPMFindCriteriaOperator_NotEqualTo                = 13,
	EHPMFindCriteriaOperator_NotEqualToCase            = 14,
	EHPMFindCriteriaOperator_GreaterThan               = 15,
	EHPMFindCriteriaOperator_GreaterThanCase           = 16,
	EHPMFindCriteriaOperator_LessThan                  = 17,
	EHPMFindCriteriaOperator_LessThanCase              = 18,
	EHPMFindCriteriaOperator_GreaterThanEqual          = 19,
	EHPMFindCriteriaOperator_GreaterThanEqualCase      = 20,
	EHPMFindCriteriaOperator_LessThanEqual             = 21,
	EHPMFindCriteriaOperator_LessThanEqualCase         = 22,
	EHPMFindCriteriaOperator_Range                     = 23,
	EHPMFindCriteriaOperator_DateFromNowToXDays        = 24,
	EHPMFindCriteriaOperator_DateFromNowToXWeeks       = 25,
	EHPMFindCriteriaOperator_DateFromNowToXMonths      = 26,
	EHPMFindCriteriaOperator_DateFromNowToXYears       = 27,
	EHPMFindCriteriaOperator_DateFromXDaysInThePast    = 28,
	EHPMFindCriteriaOperator_DateFromXWeeksInThePast   = 29,
	EHPMFindCriteriaOperator_DateFromXMonthsInThePast  = 30,
	EHPMFindCriteriaOperator_DateFromXYearsInThePast   = 31,
	EHPMFindCriteriaOperator_DateFromNowToXHours       = 32,
	EHPMFindCriteriaOperator_DateFromNowToXMinutes     = 33,
	EHPMFindCriteriaOperator_DateFromXHoursInThePast   = 34,
	EHPMFindCriteriaOperator_DateFromXMinutesInThePast = 35,
};

enum EHPMValueType
{
	EHPMValueType_NewVersionOfSDKRequired        = 0,
	EHPMValueType_Undefined                      = 1,
	EHPMValueType_Normal                         = 2,
	EHPMValueType_Number                         = 3,
	EHPMValueType_Boolean                        = 4,
	EHPMValueType_Hours                          = 5,
	EHPMValueType_Days                           = 6,
	EHPMValueType_Year                           = 7,
	EHPMValueType_Time                           = 8,
	EHPMValueType_Points                         = 9,
	EHPMValueType_Resources                      = 10,
	EHPMValueType_Tasks                          = 11,
	EHPMValueType_Task                           = 12,
	EHPMValueType_Project                        = 13,
	EHPMValueType_Column                         = 14,
	EHPMValueType_CustomColumnDrop               = 15,
	EHPMValueType_ID_BugStatus                   = 16,
	EHPMValueType_IDs_WorkflowAndStatus          = 17,
	EHPMValueType_Enum_Risk                      = 18,
	EHPMValueType_Enum_Priority                  = 19,
	EHPMValueType_Enum_BacklogCategory           = 20,
	EHPMValueType_Enum_Confidence                = 21,
	EHPMValueType_Enum_Severity                  = 22,
	EHPMValueType_Enum_ItemStatus                = 23,
	EHPMValueType_Enum_ItemType                  = 24,
	EHPMValueType_Enum_Defined                   = 25,
	EHPMValueType_Enum_Unset                     = 26,
	EHPMValueType_Unset                          = 27,
	EHPMValueType_CustomColumnMultiSelectionDrop = 28,
};

enum EHPMFindCriteriaConnectionSite
{
	EHPMFindCriteriaConnectionSite_NewVersionOfSDKRequired = 0,
	EHPMFindCriteriaConnectionSite_Top                     = 1,
	EHPMFindCriteriaConnectionSite_Bottom                  = 2,
};

enum EHPMChannelFlag
{
	EHPMChannelFlag_None                       = 0,
	EHPMChannelFlag_SupportsAuthentication     = 1,
	EHPMChannelFlag_SupportsResolveCredentials = 2,
	EHPMChannelFlag_PermitSharing              = 4,
};

enum EHPMCertificateVerificationFlag
{
	EHPMCertificateVerificationFlag_None                              = 0,
	EHPMCertificateVerificationFlag_UserCanAcceptUntrusted            = 1,
	EHPMCertificateVerificationFlag_RememberTrustedCertificates       = 2,
	EHPMCertificateVerificationFlag_UseSpecificPeerCertificate        = 4,
	EHPMCertificateVerificationFlag_UseOSStoreIfNoCASpecified         = 8,
	EHPMCertificateVerificationFlag_VerifyHostnameMatches             = 16,
	EHPMCertificateVerificationFlag_UserCanIgnoreVerificationFailures = 32,
};

enum EHPMPacketFlag
{
	EHPMPacketFlag_None                       = 0,
	EHPMPacketFlag_AuthenticationPacket       = 1,
	EHPMPacketFlag_CredentialResolutionPacket = 2,
};

enum EHPMFindCriteriaFlag
{
	EHPMFindCriteriaFlag_None              = 0,
	EHPMFindCriteriaFlag_CustomQueryString = 1,
};

enum EHPMTimesheetRequestType
{
	EHPMTimesheetRequestType_NewVersionOfSDKRequired = 0,
	EHPMTimesheetRequestType_Resources               = 1,
	EHPMTimesheetRequestType_Projects                = 2,
	EHPMTimesheetRequestType_Tasks                   = 3,
};

enum EHPMChatOnlineStatus
{
	EHPMChatOnlineStatus_NewVersionOfSDKRequired = 0,
	EHPMChatOnlineStatus_Offline                 = 1,
	EHPMChatOnlineStatus_Away                    = 2,
	EHPMChatOnlineStatus_Online                  = 3,
};

enum EHPMEmailSecurityProtocol
{
	EHPMEmailSecurityProtocol_NewVersionOfSDKRequired = 0,
	EHPMEmailSecurityProtocol_None                    = 1,
	EHPMEmailSecurityProtocol_SSL                     = 2,
	EHPMEmailSecurityProtocol_TLS                     = 3,
};

enum EHPMSdkDebugMode
{
	EHPMSdkDebugMode_Off     = 0,
	EHPMSdkDebugMode_Debug   = 1,
	EHPMSdkDebugMode_Testing = 2,
};

enum EHPMDataHistoryEntryFilterFlag
{
	EHPMDataHistoryEntryFilterFlag_None      = 0,
	EHPMDataHistoryEntryFilterFlag_Kind      = 1,
	EHPMDataHistoryEntryFilterFlag_Type      = 2,
	EHPMDataHistoryEntryFilterFlag_FieldID   = 4,
	EHPMDataHistoryEntryFilterFlag_FieldData = 8,
};

enum EHPMDataHistoryFilterOperatorFlag
{
	EHPMDataHistoryFilterOperatorFlag_None = 0,
	EHPMDataHistoryFilterOperatorFlag_And  = 1,
	EHPMDataHistoryFilterOperatorFlag_Not  = 2,
};

enum EHPMAuthenticationGlobalParameters
{
	EHPMAuthenticationGlobalParameters_MinimumSessionKeyBits = 128,
	EHPMAuthenticationGlobalParameters_MaximumSessionKeyBits = 16384,
};

enum EHPMAuthenticationPropertiesFlag
{
	EHPMAuthenticationPropertiesFlag_None                 = 0,
	EHPMAuthenticationPropertiesFlag_AllowUserNameSave    = 1,
	EHPMAuthenticationPropertiesFlag_AllowActiveDirectory = 2,
	EHPMAuthenticationPropertiesFlag_AllowLDAP            = 4,
};

enum EHPMAuthenticationLoginNameFlag
{
	EHPMAuthenticationLoginNameFlag_None                    = 0,
	EHPMAuthenticationLoginNameFlag_CanLoginWithoutPassword = 1,
};

