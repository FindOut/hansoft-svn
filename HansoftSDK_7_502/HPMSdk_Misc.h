
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Misc											|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/3 - Misc											|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Data history entry type used for @{HPMDataHistoryEntry}::m_EntryType		|
|																									|
|	See Also:			@{HPMDataHistoryEntry}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryEntryType
{
	EHPMDataHistoryEntryType_NewVersionOfSDKRequired,	// The entry type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMDataHistoryEntryType_FieldCreated,				// The field was created.
	EHPMDataHistoryEntryType_FieldChanged,				// The field was changed.
	EHPMDataHistoryEntryType_FieldDeleted,				// The field was deleted.
	EHPMDataHistoryEntryType_TaskCreated,				// A task was created.
	EHPMDataHistoryEntryType_Statistics_AbsoluteValue,	// An absolute value sampled with the statistics module.
	EHPMDataHistoryEntryType_Statistics_RelativeValue,	// An relative value sampled with the statistics module.
	EHPMDataHistoryEntryType_TaskDeleted,				// A task was deleted.
	EHPMDataHistoryEntryType_TaskMoved,					// A task was moved between projects.
	EHPMDataHistoryEntryType_TaskRenameCustomColumn,	// Custom column data was renamed on a task.
	EHPMDataHistoryEntryType_TaskProxyCreated,			// A proxy was created for a task.
	EHPMDataHistoryEntryType_TaskProxyDeleted,			// A proxy was deleted for a task.
	EHPMDataHistoryEntryType_TaskRestoredFromHistory,	// A task was restored from change history.
	EHPMDataHistoryEntryType_ChatHistory,				// A chat entry was made.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Data history entry kind used for @{HPMDataHistoryEntry}::m_EntryKind		|
|																									|
|	See Also:			@{HPMDataHistoryEntry}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryEntryKind
{
	EHPMDataHistoryEntryKind_NewVersionOfSDKRequired,	// The entry kind did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry kind.
	EHPMDataHistoryEntryKind_Default,					// Data history entry is default value.
	EHPMDataHistoryEntryKind_ProjectChangeHistory,		// Data history entry is project change history.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Data history client origin used for @{HPMDataHistoryEntry}::m_ClientOrigin	|
|																									|
|	See Also:			@{HPMDataHistoryEntry}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryClientOrigin
{
	EHPMDataHistoryClientOrigin_NewVersionOfSDKRequired,	// The entry type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMDataHistoryClientOrigin_None,						// Does not originate from client
	EHPMDataHistoryClientOrigin_Unknown,					// Recorded when in old version where client version wasn't availaible
	EHPMDataHistoryClientOrigin_Default,					// Normal non-specific client origin 
	EHPMDataHistoryClientOrigin_DefaultSDK,					// Normal non-specific SDK client origin
	EHPMDataHistoryClientOrigin_Custom,						// Custom client origin
	EHPMDataHistoryClientOrigin_CustomSDK,					// Custom SDK client origin
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Data history origin used for @{HPMDataHistoryEntry}::m_Origin				|
|																									|
|	See Also:			@{HPMDataHistoryEntry}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryOrigin
{
	EHPMDataHistoryOrigin_NewVersionOfSDKRequired,			// The entry type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMDataHistoryOrigin_None,
	EHPMDataHistoryOrigin_Unknown,
	EHPMDataHistoryOrigin_StatisticsSampling,
	EHPMDataHistoryOrigin_FixDatabaseErrors,
	EHPMDataHistoryOrigin_UpdateAllDurationDatabaseLoad,
	EHPMDataHistoryOrigin_UpdateTaskToLatestPipeline,
	EHPMDataHistoryOrigin_SetInitialFieldValues,
	EHPMDataHistoryOrigin_LinkTasksToMilestones,
	EHPMDataHistoryOrigin_ChangeDisposition,
	EHPMDataHistoryOrigin_CreateTask,
	EHPMDataHistoryOrigin_CreateProxy,
	EHPMDataHistoryOrigin_MoveTask,
	EHPMDataHistoryOrigin_DeleteTask,
	EHPMDataHistoryOrigin_UpdateSprintStatisticsMidnight,
	EHPMDataHistoryOrigin_UpdateSprintStatisticsDatabaseOnline,
	EHPMDataHistoryOrigin_ConvertDatabaseVersion,
	EHPMDataHistoryOrigin_DeleteResource,
	EHPMDataHistoryOrigin_DeleteShare,
	EHPMDataHistoryOrigin_RemoveResourceFromProject,
	EHPMDataHistoryOrigin_ChangeProjectArchivedStatus,
	EHPMDataHistoryOrigin_InvokeDispositionBug,
	EHPMDataHistoryOrigin_DeleteCustomColumn,
	EHPMDataHistoryOrigin_RenameCustomColumn,
	EHPMDataHistoryOrigin_FullCommentsCreated,
	EHPMDataHistoryOrigin_CommentCreated,
	EHPMDataHistoryOrigin_CommentDeleted,
	EHPMDataHistoryOrigin_ConvertProjectChangeHistory,
	EHPMDataHistoryOrigin_ProjectCreate,
	EHPMDataHistoryOrigin_ProjectChange,
	EHPMDataHistoryOrigin_ProjectSetCustomColumns,
	EHPMDataHistoryOrigin_ProjectAddCustomColumn, 
	EHPMDataHistoryOrigin_ProjectOpenQA, 
	EHPMDataHistoryOrigin_ProjectSetWorkflow, 
	EHPMDataHistoryOrigin_ProjectEnableWorkflowsInMainProjectAndBacklog, 
	EHPMDataHistoryOrigin_ProjectCreateWorkflow, 
	EHPMDataHistoryOrigin_ProjectChangeWorkflow,
	EHPMDataHistoryOrigin_ProjectDeleteWorkflow,
	EHPMDataHistoryOrigin_AddResourceToProject, 
	EHPMDataHistoryOrigin_CreateShare, 
	EHPMDataHistoryOrigin_CreateResource, 
	EHPMDataHistoryOrigin_ProjectOpenBacklog, 
	EHPMDataHistoryOrigin_ProjectSetDefaultActivatedColumns, 
	EHPMDataHistoryOrigin_CommandChangeField_Comment,
	EHPMDataHistoryOrigin_CommandChangeField_Description,
	EHPMDataHistoryOrigin_CommandChangeField_TimeZones,
	EHPMDataHistoryOrigin_CommandChangeField_Completed,
	EHPMDataHistoryOrigin_CommandChangeField_Resources,
	EHPMDataHistoryOrigin_CommandChangeField_Color,
	EHPMDataHistoryOrigin_CommandChangeField_Unlocked,
	EHPMDataHistoryOrigin_CommandChangeField_BudgetedWork,
	EHPMDataHistoryOrigin_CommandChangeField_CompletedPercent,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedToMilestones,
	EHPMDataHistoryOrigin_CommandChangeField_AttachedDocuments,
	EHPMDataHistoryOrigin_CommandChangeField_DelegatedTo,
	EHPMDataHistoryOrigin_CommandChangeField_OriginallyCreatedBy,
	EHPMDataHistoryOrigin_CommandChangeField_CustomColumnData,
	EHPMDataHistoryOrigin_CommandChangeField_VisibleTo,
	EHPMDataHistoryOrigin_CommandChangeField_DurationHours,
	EHPMDataHistoryOrigin_CommandChangeField_HourOffset,
	EHPMDataHistoryOrigin_CommandChangeField_Risk,
	EHPMDataHistoryOrigin_CommandChangeField_Priority,
	EHPMDataHistoryOrigin_CommandChangeField_IdealDays,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedToSprint,
	EHPMDataHistoryOrigin_CommandChangeField_WorkRemaining,
	EHPMDataHistoryOrigin_CommandChangeField_BacklogCategory,
	EHPMDataHistoryOrigin_CommandChangeField_Points,
	EHPMDataHistoryOrigin_CommandChangeField_ItemStatus,
	EHPMDataHistoryOrigin_CommandChangeField_LastUserIntefraceAction,
	EHPMDataHistoryOrigin_CommandChangeField_Confidence,
	EHPMDataHistoryOrigin_CommandChangeField_WorkRemainingHistory,
	EHPMDataHistoryOrigin_CommandChangeField_IdealDaysHistory,
	EHPMDataHistoryOrigin_CommandChangeField_PointsHistory,
	EHPMDataHistoryOrigin_CommandChangeField_SprintAllocatedResources,
	EHPMDataHistoryOrigin_CommandChangeField_HyperLink,
	EHPMDataHistoryOrigin_CommandChangeField_CalendarOptions,
	EHPMDataHistoryOrigin_CommandChangeField_SprintResourceAllocation,
	EHPMDataHistoryOrigin_CommandChangeField_CommentsOptions,
	EHPMDataHistoryOrigin_CommandChangeField_WorkflowStatus,
	EHPMDataHistoryOrigin_CommandChangeField_Severity,
	EHPMDataHistoryOrigin_CommandChangeField_DetailedDescription,
	EHPMDataHistoryOrigin_CommandChangeField_IsUserStory,
	EHPMDataHistoryOrigin_CommandChangeField_Archived,
	EHPMDataHistoryOrigin_CommandChangeField_SprintDisableFullCreationRights,
	EHPMDataHistoryOrigin_CommandChangeField_StepsToReproduce,
	EHPMDataHistoryOrigin_CommandChangeField_LinkedTo,
	EHPMDataHistoryOrigin_CommandChangeField_WallItemColorCategory,
	EHPMDataHistoryOrigin_CommandChangeField_WorkflowID,
	EHPMDataHistoryOrigin_CommandChangeField_DefaultWorkflowIDForNewItems,
	EHPMDataHistoryOrigin_CommandChangeField_FullyCreated,
	EHPMDataHistoryOrigin_CommandChangeField_SprintPriority,
	EHPMDataHistoryOrigin_CommandChangeField_BacklogPriority,
	EHPMDataHistoryOrigin_CommandChangeField_BugPriority,
	EHPMDataHistoryOrigin_CommandChangeField_SubProjectLock,
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{DataHistoryGetHistory} to specify a statistics					|
|						field.																		|
|																									|
|	See Also:			@{DataHistoryGetHistory}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMStatisticsField
{
	EHPMStatisticsField_NewVersionOfSDKRequired=1<<31,		// The statistics field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMStatisticsField_WorkRemaining=0,					// Work remaining statistics.
	EHPMStatisticsField_EstimatedIdealDays,					// Estimated ideal days statistics.
	EHPMStatisticsField_ItemStatus,							// Item status statistics.
	EHPMStatisticsField_Severity,							// Severity statistics.
	EHPMStatisticsField_BugStatus,							// QA Bug status statistics.
	EHPMStatisticsField_CompletedAndInCompletedDays,		// Statistics about how mane complete and incomplete working days.
	EHPMStatisticsField_BudgetedWorkEarnedValue,			// Budgeted work earned value statistics.
	EHPMStatisticsField_ComplexityPoints,					// Complexity point statistics.
	EHPMStatisticsField_Priority,							// Priority statistics.
	EHPMStatisticsField_Risk,								// Risk statistics.
	EHPMStatisticsField_Confidence,							// Confidence statistics.
	EHPMStatisticsField_CustomColumn,						// Custom column statistics.
	EHPMStatisticsField_CustomStatisticsSampler,			// The field is a custom statistics sampler
	EHPMStatisticsField_PipelineTasksBuildupAndBurndown,	// Pipeline tasks buildup and burndown statistics.
	EHPMStatisticsField_RecordedStatisticsOnDate,			// Recorded statistics on specified date.
	EHPMStatisticsField_NoStatistics,						// No statistics used
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{DataHistoryGetHistory} to specify a statistics scope.				|
|																									|
|	See Also:			@{DataHistoryGetHistory}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMStatisticsScope
{
	EHPMStatisticsScope_NewVersionOfSDKRequired=1<<31,		// The statistics field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMStatisticsScope_Everyone=0,							// The statistics are for everyone.
	EHPMStatisticsScope_Resource,							// The statistics are for a specific resource.
	EHPMStatisticsScope_ResourceGroup,						// The statistics are for a specific resource group.
	EHPMStatisticsScope_Milestone,							// The statistics are for a specific milestone.
	EHPMStatisticsScope_ChatHistory,						// The statistics are for chat history.
	EHPMStatisticsScope_ProjectChangeHistory,				// The statistics are for project change history.
	EHPMStatisticsScope_NoStatisticsScope,					// No statistics scope used.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used with @{HPMDataHistoryGetHistoryParameters}::m_Flags.				|
|																									|
|	See Also:			@{HPMDataHistoryGetHistoryParameters}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryFlag
{
	EHPMDataHistoryFlag_None = 0,
	EHPMDataHistoryFlag_GetEntriesReverse = 1 << 0,		// Get the data history entries in reverse, starting with the latest data history entry.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{HPMCustomChoiceValue}::m_ValueType to specify the type of value	|
|						the decoded data represents.												|
|																									|
|	See Also:			@{HPMCustomChoiceValue}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMCustomChoiceValueType
{
	EHPMCustomChoiceValueType_NewVersionOfSDKRequired=0,		// The choice value type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this entry type.
	EHPMCustomChoiceValueType_Unknown,							// The value type is unknown and cannot be decoded.
	EHPMCustomChoiceValueType_Resource,							// The value is a resource unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
	EHPMCustomChoiceValueType_Project,							// The value is a project unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
	EHPMCustomChoiceValueType_Task,								// The value is a task unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
	EHPMCustomChoiceValueType_CustomColumnHash,					// The value is a custom column hash. Use @{HPMCustomChoiceValue}::m_IntValue.
	EHPMCustomChoiceValueType_DefaultColumn,					// The value is a default column. Use @{HPMCustomChoiceValue}::m_IntValue interpreted as a @{EHPMProjectDefaultColumn}.
	EHPMCustomChoiceValueType_GlobalReport,						// The value is a global report unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
	EHPMCustomChoiceValueType_Report,							// The value is a report unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
	EHPMCustomChoiceValueType_ResourceGroup,					// The value is a resource unique id. Use @{HPMCustomChoiceValue}::m_UniqueID.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Criteria type used for 														|
|						@{HPMFindCriteria}::m_Type													|
|																									|
|	See Also:			@{HPMFindCriteria}															|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindCriteriaType
{
	EHPMFindCriteriaType_NewVersionOfSDKRequired,	// The type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMFindCriteriaType_Criteria,					// Find criteria type.
	EHPMFindCriteriaType_AllItems,					// All items start type.
	EHPMFindCriteriaType_ReportedItems,				// Reported items end type.
	EHPMFindCriteriaType_ExcludingCriteria,			// Excluding find criteria type.
};



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Criteria data type used for													|
|						@{HPMFindCriteriaData}::m_Type.												|
|																									|
|	See Also:			@{HPMFindCriteriaData}, @{UtilGetFindCriteriaDataTypeFromData},				|
|						@{UtilGetFindCriteriaDataTypeFromColumn}, @{UtilGetColumnDescription},		|
|						@{HPMColumnDescription}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindCriteriaDataType
{
	EHPMFindCriteriaDataType_NewVersionOfSDKRequired,	// The criteria type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMFindCriteriaDataType_Invalid,					// Invalid criteria data.
	EHPMFindCriteriaDataType_Text,						// The criteria data condition is free text.
	EHPMFindCriteriaDataType_Droplist,					// The criteria data condition is a list of selectable items.
	EHPMFindCriteriaDataType_Integer,					// The criteria data is an integer condition.
	EHPMFindCriteriaDataType_Float,						// The criteria data is a float condition.
	EHPMFindCriteriaDataType_Date,						// The criteria data is a date condition.
	EHPMFindCriteriaDataType_GeneralCondition,			// The criteria data is a general condition.
	EHPMFindCriteriaDataType_MultiSelectDroplist,		// The criteria data is a list of selectable items with a condition set by @{HPMFindCriteriaDataHeader}::m_Operator.
	EHPMFindCriteriaDataType_UnquotedText,				// The criteria data condition is unquoted text.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Criteria operator used for													|
|						@{HPMFindCriteriaDataHeader}::m_Operator									|
|																									|
|																									|
|	Comments:			All combinations of operator and criterias are not possible.				|
|																									|
|	See Also:			@{HPMFindCriteriaDataHeader}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindCriteriaOperator
{
	EHPMFindCriteriaOperator_NewVersionOfSDKRequired,	// The operator did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this operator.
	EHPMFindCriteriaOperator_NoOperator,				// No operator set.
	EHPMFindCriteriaOperator_EmptyOperator,				// No operator used.
	EHPMFindCriteriaOperator_Contains,					// Contains operator.
	EHPMFindCriteriaOperator_ContainsCase,				// Contains operator (case sensitive).
	EHPMFindCriteriaOperator_NotContains,				// Does not contain operator.
	EHPMFindCriteriaOperator_NotContainsCase,			// Does not contain operator (case sensitive).
	EHPMFindCriteriaOperator_StartsWith,				// Starts with operator.
	EHPMFindCriteriaOperator_StartsWithCase,			// Starts with operator (case sensitive).
	EHPMFindCriteriaOperator_EndsWith,					// Ends with operator.
	EHPMFindCriteriaOperator_EndsWithCase,				// Ends with operator (case sensitive).
	EHPMFindCriteriaOperator_EqualTo,					// Equal to operator.
	EHPMFindCriteriaOperator_EqualToCase,				// Equal to operator (case sensitive). 
	EHPMFindCriteriaOperator_NotEqualTo,				// Not equal to operator. 
	EHPMFindCriteriaOperator_NotEqualToCase,			// Not equal to operator (case sensitive).
	EHPMFindCriteriaOperator_GreaterThan,				// Greater than operator.
	EHPMFindCriteriaOperator_GreaterThanCase,			// Greater than operator (case sensitive).
	EHPMFindCriteriaOperator_LessThan,					// Less than operator.
	EHPMFindCriteriaOperator_LessThanCase,				// Less than operator (case sensitive).
	EHPMFindCriteriaOperator_GreaterThanEqual,			// Greater or equal than operator.
	EHPMFindCriteriaOperator_GreaterThanEqualCase,		// Greater or equal than (case sensitive).
	EHPMFindCriteriaOperator_LessThanEqual,				// Less or equal than operator.
	EHPMFindCriteriaOperator_LessThanEqualCase,			// Less or equal than operator (case sensitive).
	EHPMFindCriteriaOperator_Range,						// Range operator.
	EHPMFindCriteriaOperator_DateFromNowToXDays,		// From today to X days in the future operator.
	EHPMFindCriteriaOperator_DateFromNowToXWeeks,		// From today to X weeks in the future operator.
	EHPMFindCriteriaOperator_DateFromNowToXMonths,		// From today to X months in the future operator.
	EHPMFindCriteriaOperator_DateFromNowToXYears,		// From today to X years in the future operator.
	EHPMFindCriteriaOperator_DateFromXDaysInThePast,	// From X days in the past to today operator.
	EHPMFindCriteriaOperator_DateFromXWeeksInThePast,	// From X weeks in the past to today operator.
	EHPMFindCriteriaOperator_DateFromXMonthsInThePast,	// From X months in the past to today operator.
	EHPMFindCriteriaOperator_DateFromXYearsInThePast,	// From X years in the past to today operator.
	EHPMFindCriteriaOperator_DateFromNowToXHours,		// From today to X hours in the future operator.
	EHPMFindCriteriaOperator_DateFromNowToXMinutes,		// From today to X minutes in the future operator.
	EHPMFindCriteriaOperator_DateFromXHoursInThePast,	// From X hours in the past to today operator.
	EHPMFindCriteriaOperator_DateFromXMinutesInThePast,	// From X minutes in the past to today operator.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Value type used for @{HPMColumnDescription}::m_Type.						|
|																									|
|	See Also:			@{UtilGetColumnDescription}, @{HPMColumnDescription}						|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMValueType
{
	EHPMValueType_NewVersionOfSDKRequired,	// The value did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMValueType_Undefined,
	EHPMValueType_Normal,
	EHPMValueType_Number,
	EHPMValueType_Boolean,
	EHPMValueType_Hours,
	EHPMValueType_Days,
	EHPMValueType_Year,
	EHPMValueType_Time,
	EHPMValueType_Points,
	EHPMValueType_Resources,
	EHPMValueType_Tasks,
	EHPMValueType_Task,
	EHPMValueType_Project,
	EHPMValueType_Column,
	EHPMValueType_CustomColumnDrop,
	EHPMValueType_ID_BugStatus,
	EHPMValueType_IDs_WorkflowAndStatus,
	EHPMValueType_Enum_Risk,
	EHPMValueType_Enum_Priority,
	EHPMValueType_Enum_BacklogCategory,
	EHPMValueType_Enum_Confidence,
	EHPMValueType_Enum_Severity,
	EHPMValueType_Enum_ItemStatus,
	EHPMValueType_Enum_ItemType,
	EHPMValueType_Enum_Defined,
	EHPMValueType_Enum_Unset,
	EHPMValueType_Unset,
	EHPMValueType_CustomColumnMultiSelectionDrop,
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Connection site used for													|
|						@{HPMFindCriteriaConnection}::m_ConnectionFrom and							|
|						@{HPMFindCriteriaConnection}::m_ConnectionTo								|
|																									|
|	See Also:			@{HPMFindCriteriaConnection}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindCriteriaConnectionSite
{
	EHPMFindCriteriaConnectionSite_NewVersionOfSDKRequired,		// The connection site did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this connection site.
	EHPMFindCriteriaConnectionSite_Top,							// The connection is to/from the top connection site of the object box.
	EHPMFindCriteriaConnectionSite_Bottom,						// The connection is to/from the bottom connection site of the object box.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used with @{CommunicationChannelRegister}.							|
|																									|
|	See Also:			@{CommunicationChannelRegister},											|
|						@{EHPMChangeCallbackOperation}_AuthenticationResolveCredentials				|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMChannelFlag
{
	EHPMChannelFlag_None = 0,
	EHPMChannelFlag_SupportsAuthentication = 1 << 0,		// The Channel and this session accept client login authentication requests.
	EHPMChannelFlag_SupportsResolveCredentials = 1 << 1,	// The Channel and this session accept and process requests for credential checks and resolution.
	EHPMChannelFlag_PermitSharing = 1 << 2,					// The Channel may be shared with other Hansoft database servers, enabling their clients to send packets to this channel and session.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used with @{HPMCertificateSettings}::m_VerificationFlags				|
|																									|
|	See Also:			@{SessionOpen}																|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMCertificateVerificationFlag
{
	EHPMCertificateVerificationFlag_None = 0,
	EHPMCertificateVerificationFlag_UserCanAcceptUntrusted = 1 << 0,			// Accept untrusted certificates.
	EHPMCertificateVerificationFlag_RememberTrustedCertificates = 1 << 1,		// Remember trusted certificates.
	EHPMCertificateVerificationFlag_UseSpecificPeerCertificate = 1 << 2,		// Use specific peer certificate stored in @{HPMCertificateSettings}::m_CACertificateData.
	EHPMCertificateVerificationFlag_UseOSStoreIfNoCASpecified = 1 << 3,			// If no CA is specified the operating systems own CA store should be used.
	EHPMCertificateVerificationFlag_VerifyHostnameMatches = 1 << 4,				// Decides whether or not to verify the certificate's hostnames with the hostname of the server you are connecting to.
	EHPMCertificateVerificationFlag_UserCanIgnoreVerificationFailures = 1 << 5,	// Determines whether a user can ignore validation failures (e.g. expired certificates, hostname mismatches).
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{CommunicationChannelSendPacket} and								|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelPacketReceived			|
|						to specify properties of a channel packet.									|
|																									|
|	See Also:			@{CommunicationChannelSendPacket},											|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelPacketReceived,			|
|						@{HPMCommunicationChannelPacket}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMPacketFlag
{
	EHPMPacketFlag_None = 0,
	EHPMPacketFlag_AuthenticationPacket = 1 << 0,			// Packet is part of a client authentication exchange, receiving channels must have the EHPMChannelFlag_SupportsAuthentication {@EHPMChannelFlag}
	EHPMPacketFlag_CredentialResolutionPacket = 1 << 1,		// Packet is part of a credential resolution request, receiving channels must have the EHPMChannelFlag_SupportsResolveCredentials {@EHPMChannelFlag}
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Criteria flag used for														|
|						@{HPMFindCriteria}::m_Flags													|
|																									|
|	See Also:			@{HPMFindCriteria}															|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindCriteriaFlag
{
	EHPMFindCriteriaFlag_None = 0,
	EHPMFindCriteriaFlag_CustomQueryString = 1 << 0,				// Custom query string.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Type of timesheet request used for @{TimesheetGetDateRange}.				|
|																									|
|	See Also:			@{TimesheetGetDateRange}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTimesheetRequestType
{
	EHPMTimesheetRequestType_NewVersionOfSDKRequired,	// The timesheet request type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this request type.
	EHPMTimesheetRequestType_Resources,					// Request type for resources.
	EHPMTimesheetRequestType_Projects,					// Request type for projects.
	EHPMTimesheetRequestType_Tasks,						// Request type for tasks.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Chat online status used for @{ResourceSetChatOnlineStatus} and				|
|						@{ResourceGetChatOnlineStatus}												|
|																									|
|	See Also:			@{ResourceSetChatOnlineStatus}, @{ResourceGetChatOnlineStatus}				|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMChatOnlineStatus
{
	EHPMChatOnlineStatus_NewVersionOfSDKRequired,	// The chat status did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this chat status.
	EHPMChatOnlineStatus_Offline,					// Offline chat status.
	EHPMChatOnlineStatus_Away,						// Away chat status.
	EHPMChatOnlineStatus_Online,					// Online chat status.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Type of email security protocol used in										|
|						@{HPMGlobalEmailSettings}::m_SecurityProtocol								|
|																									|
|	See Also:			@{HPMGlobalEmailSettings}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMEmailSecurityProtocol
{
	EHPMEmailSecurityProtocol_NewVersionOfSDKRequired,	// The security protocol did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this security protocol.
	EHPMEmailSecurityProtocol_None,						// No security protocol.
	EHPMEmailSecurityProtocol_SSL,						// Secure Socket Layer.
	EHPMEmailSecurityProtocol_TLS,						// Transport Layer Security.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		SDK debug mode																|
|																									|
|	See Also:			@{SessionOpen}																|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMSdkDebugMode
{
	EHPMSdkDebugMode_Off,				// No debugging
	EHPMSdkDebugMode_Debug,				// Full debugging
	EHPMSdkDebugMode_Testing,			// Minimal debugging with only contracts enabled. Deprecated
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Data history entry filter flag used for										|
|						@{HPMDataHistoryEntryFilter}::m_Flags that determines which fields are used	|
|						in @{HPMDataHistoryFilter}::m_EntryFilter.									|
|																									|
|	See Also:			@{HPMDataHistoryEntryFilter}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryEntryFilterFlag
{
	EHPMDataHistoryEntryFilterFlag_None = 0,
	EHPMDataHistoryEntryFilterFlag_Kind = 1 << 0,		// Filter on the @{HPMDataHistoryEntryFilter}::m_EntryKind field.
	EHPMDataHistoryEntryFilterFlag_Type = 1 << 1,		// Filter on the @{HPMDataHistoryEntryFilter}::m_EntryType field.
	EHPMDataHistoryEntryFilterFlag_FieldID = 1 << 2,	// Filter on the @{HPMDataHistoryEntryFilter}::m_FieldID field.
	EHPMDataHistoryEntryFilterFlag_FieldData = 1 << 3,	// Filter on the @{HPMDataHistoryEntryFilter}::m_FieldData field.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		The logical operators used for @{HPMDataHistoryFilter}::m_Flags. If not set	|
|						a logical OR will be used to combine the filters.							|
|																									|
|	See Also:			@{HPMDataHistoryFilter}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDataHistoryFilterOperatorFlag
{
	EHPMDataHistoryFilterOperatorFlag_None = 0,
	EHPMDataHistoryFilterOperatorFlag_And = 1 << 0,		// Logical AND will be used to combine the @{HPMDataHistoryFilter}::m_pFilters filters.
	EHPMDataHistoryFilterOperatorFlag_Not = 1 << 1,		// Every filter in @{HPMDataHistoryFilter}::m_pFilters will negated.
};
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		The filter used in  @{HPMDataHistoryFilter}::m_EntryFilter.					|
|																									|
|	See Also:			@{HPMDataHistoryFilter}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryEntryFilter
{
	HPMUInt32 m_Flags;				// [type=EHPMDataHistoryEntryFilterFlag,default=EHPMDataHistoryEntryFilterFlag_None] These flags determine which fields in @{HPMDataHistoryEntryFilter} will be used for filtering. The data history entry @{EHPMDataHistoryEntryFilterFlag} flags.
	HPMUInt32 m_EntryType;			// [type=EHPMDataHistoryEntryType,default=EHPMDataHistoryEntryType_FieldCreated] The type of entry to filter on. See @{EHPMDataHistoryEntryType}.
	HPMUInt32 m_EntryKind;			// [type=EHPMDataHistoryEntryKind,default=EHPMDataHistoryEntryKind_Default] The kind of entry to filter on. See @{EHPMDataHistoryEntryKind}.
	HPMInt32 m_FieldID;				// [default=0] The field id of the data to filter on. If filtering on a task history entry, i.e. m_EntryKind is not set to @{EHPMDataHistoryEntryKind}_ProjectChangeHistory, this is one of @{EHPMTaskField}, although not all fields will be used. If m_EntryKind is set to @{EHPMDataHistoryEntryKind}_ProjectChangeHistory it will be one of @{EHPMProjectField}
	HPMUInt32 m_FieldData;			// [default=0] The field data of the data to filter on. If m_FieldID is @{EHPMTaskField}_CustomColumnData this member is the column hash of the custom column data.
} HPMDataHistoryEntryFilter;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Filter to limit the number of returned data history entries. Used for		|
|						@{HPMDataHistoryGetHistoryParameters}::m_Filter								|
|																									|
|	See Also:			@{HPMDataHistoryGetHistoryParameters}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryFilter
{
	HPMUInt32 m_Flags;								// [type=EHPMDataHistoryFilterOperatorFlag,default=EHPMDataHistoryFilterOperatorFlag_None] The operator that will combine the filters in the m_pFilter list. Can be a combination of  the @{EHPMDataHistoryFilterOperatorFlag} flags.
	HPMDataHistoryEntryFilter m_EntryFilter;		// The filter parameters. Only valid if m_nFilters is 0.
	HPMUInt32 m_nFilters;							// The number of @{HPMDataHistoryFilter} that this filter combines.
	const struct HPMDataHistoryFilter *m_pFilters;	// Pointer to a list of @{HPMDataHistoryFilter} that specifies the filters to apply to the data history search.
} HPMDataHistoryFilter;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Time and position used to limit the returned data history entries.			|
|																									|
|	See Also:			@{HPMDataHistoryGetHistoryParameters}, @{HPMDataHistory}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTimePosition
{
	HPMUInt64 m_Time;				// [default=0] Time value expressed as the number of micro seconds since 1970 UTC. Set to 0 to have unbounded start time.
	HPMInt64 m_Position;			// [default=0] Position value. See @{HPMDataHistory} Differentiator when several entries have the same time stamp. 
} HPMDataHistoryTimePosition;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		The parameters passed to @{DataHistoryGetHistory}.							|
|																									|
|	Retrieving Task or Project History:	To retrieve history for a task or project pass the			|
|	following parameters:																			|
|																									|
|		m_DataID:		The unique identifier of the task or project to retrieve history for.		|
|																									|
|		m_FieldID:		@{EHPMStatisticsField}_NoStatistics											|
|																									|
|		m_FieldData:		0																		|
|																									|
|		m_DataIdent0:	@{EHPMStatisticsScope}_NoStatisticsScope									|
|																									|
|		m_DataIdent1:	0																			|
|																									|
|	Retrieving Statistics:		To retrieve sampled statistics for an object pass the following		|
|								parameters:															|
|																									|
|		m_DataID:		Pass -1 to retrieve global statistics. Pass the unique identifier of an		|
|						project to retrieve statistics of a specific project.						|
|																									|
|		m_FieldID:		Should be one of @{EHPMStatisticsField}.									|
|																									|
|		m_FieldData:	If m_FieldID is @{EHPMStatisticsField}_CustomColumn this parameter should	|
|						be the column hash for the custom column to retrieve statistics for. If		|
|						m_FieldID is @{EHPMStatisticsField}_CustomStatisticsSampler this parameter	|
|						should be the sampler ID of the custom statistics sampler for the			|
|						project (can only be retrieved when m_DataID is a project).					|
|						Otherwise 0.																|
|																									|
|		m_DataIdent0:	Should be one of @{EHPMStatisticsScope}.									|
|																									|
|		m_DataIdent1:	If m_DataIdent0 is @{EHPMStatisticsScope}_Everyone this parameter should be	|
|						0.																			|
|																									|
|						If m_DataIdent0 is @{EHPMStatisticsScope}_Resource this parameter should be	|
|						the unique identifier of the resource to retrieve statistics for.			|
|																									|
|						If m_DataIdent0 is @{EHPMStatisticsScope}_ResourceGroup this parameter		|
|						should	be the identifier for the resource group to retrieve statistics		|
|						for.																		|
|																									|
|						If m_DataIdent0 is @{EHPMStatisticsScope}_Milestone this parameter			|
|						the unique reference identifier of the milestone to retrieve statistics for.|
|																									|
|						When a data history entry is received, it is cached locally in memory		|
|						on the client. To limit the size of the cache use							|
|						@{DataHistorySetMaxCacheEntries}.											|
|																									|
|																									|
|	See Also:			@{DataHistoryGetHistory}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryGetHistoryParameters
{
	HPMUniqueID m_DataID;				// The identifier of the data to retrieve. See comments for more information.
	HPMInt32 m_FieldID; 				// [type=EHPMStatisticsField, default=EHPMStatisticsField_NoStatistics] The field id of the data to retrieve. See comments for more information.
	HPMUInt32 m_FieldData; 				// [default=0] The field data of the data to retrieve. See comments for more information.
	HPMUInt32 m_DataIdent0; 			// [type=EHPMStatisticsScope,default=EHPMStatisticsScope_NoStatisticsScope] The first identifier of the data to retrieve. See comments for more information.
	HPMUInt32 m_DataIdent1;				// [default=0] The second identifier of the data to retrieve. See comments for more information.
	HPMUInt32 m_Flags;					// [type=EHPMDataHistoryFlag,default=EHPMDataHistoryFlag_None] The data history entry @{EHPMDataHistoryFlag} flags.
	HPMUInt32 m_MaxEntries;				// [default=0] The max number of entries to retrieve. Set to 0 to have unbounded number of entries.
	HPMDataHistoryTimePosition m_Start; // Limit start time and start position.
	HPMDataHistoryTimePosition m_End;	// Limit end time and end position.
	HPMDataHistoryFilter m_Filter;		// @{HPMDataHistoryEntryFilter} that specifies the filters to apply to the data history search.
} HPMDataHistoryGetHistoryParameters;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																															|
|																																	|
|																																	|
|																																	|
|	Description:		Data history entry used for @{HPMDataHistory}::m_pHistoryEntries.											|
|																																	|
|	Retrieving Task History Data:	Task history data is retrieved differently depending on the										|
|									type of field you want to retrieve data for. @{HPMDataHistoryEntry}::m_EntryKind is set to 		|
|									@{EHPMDataHistoryEntryKind}_Default.															|
|																																	|
|		EHPMTaskField_BacklogCategory:					Use @{VariantDecode_HPMInt32}. @{EHPMTaskBacklogCategory}					|
|		EHPMTaskField_Confidence:						Use @{VariantDecode_HPMInt32}. @{EHPMTaskConfidence}						|
|		EHPMTaskField_Risk:								Use @{VariantDecode_HPMInt32}. @{EHPMTaskRisk}								|
|		EHPMTaskField_Status:							Use @{VariantDecode_HPMInt32}. @{EHPMTaskStatus}							|
|		EHPMTaskField_Severity:							Use @{VariantDecode_HPMInt32}. @{EHPMTaskSeverity}							|
|		EHPMTaskField_SprintPriority:					Use @{VariantDecode_HPMInt32}. @{EHPMTaskAgilePriorityCategory}				|
|		EHPMTaskField_BacklogPriority:					Use @{VariantDecode_HPMInt32}. @{EHPMTaskAgilePriorityCategory}				|
|		EHPMTaskField_BugPriority:						Use @{VariantDecode_HPMInt32}. @{EHPMTaskAgilePriorityCategory}				|
|		EHPMTaskField_VacationOptions (FieldData = 2):	Use @{VariantDecode_HPMInt32}. @{EHPMTaskVacationOptionsFlag}				|
|		EHPMTaskField_LastUserInterfaceAction:			Use @{VariantDecode_HPMInt32}. @{EHPMTaskLastUserInterfaceAction}			|
|		EHPMTaskField_Priority:							Use @{VariantDecode_HPMInt32}. @{EHPMTaskPriority}							|
|		EHPMTaskField_LockedType:						Use @{VariantDecode_HPMInt32}. @{EHPMTaskLockedType}						|
|		EHPMTaskField_Type:								Use @{VariantDecode_HPMInt32}. @{EHPMTaskType}								|
|		EHPMTaskField_WallItemColor:					Use @{VariantDecode_HPMInt32}. @{EHPMTaskWallItemColor}						|
|		EHPMTaskField_Unlocked:							Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_Completed:						Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_UserStoryFlag:					Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_Archived:							Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_FullyCreated:						Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_ForceSubProject:					Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_SprintResourcesHaveFullRights:	Use @{VariantDecode_HPMInt32}. Boolean.										|
|		EHPMTaskField_VacationOptions (FieldData = 0):	Use @{VariantDecode_HPMInt32}. Boolean. Set if vacation task flag is on.	|
|		EHPMTaskField_BudgetedWork:						Use @{VariantDecode_HPMInt32}. Hours.										|
|		EHPMTaskField_StartOffset:						Use @{VariantDecode_HPMInt32}. Hours.										|
|		EHPMTaskField_Duration:							Use @{VariantDecode_HPMInt32}. Hours.										|
|		EHPMTaskField_TotalDuration:					Use @{VariantDecode_HPMInt32}. Days.										|
|		EHPMTaskField_PercentComplete:					Use @{VariantDecode_HPMInt32}. 0 - 100.										|
|		EHPMTaskField_ResourceAllocationFirstPercent:	Use @{VariantDecode_HPMInt32}. 0 - 100.										|
|		EHPMTaskField_ComplexityPoints:					Use @{VariantDecode_HPMInt32}.												|
|		EHPMTaskField_WorkflowStatus:					Use @{VariantDecode_HPMInt32}. Corresponds to object id in workflow.		|
|		EHPMTaskField_Workflow:							Use @{VariantDecode_HPMUInt32}. Corresponds to workflow container ID.		|
|		EHPMTaskField_Color:							Use @{VariantDecode_HPMUInt32}. RGB.										|
|		EHPMTaskField_TimeZoneStart:					Use @{VariantDecode_HPMUInt64}. Micro seconds since 1970.					|
|		EHPMTaskField_TimeZoneEnd:						Use @{VariantDecode_HPMUInt64}.	Micro seconds since 1970.					|
|		EHPMTaskField_WorkRemaining:					Use @{VariantDecode_HPMFP32}. Hours.										|
|		EHPMTaskField_EstimatedIdealDays:				Use @{VariantDecode_HPMFP32}.												|
|		EHPMTaskField_ResourceAllocationFirst:			Use @{VariantDecode_HPMUniqueID}.											|
|		EHPMTaskField_DefaultWorkflow:					Use @{VariantDecode_HPMUniqueID}.											|
|		EHPMTaskField_LinkedToPipelineTask:				Use @{VariantDecode_HPMUniqueID}.											|
|		EHPMTaskField_LinkedToSprint:					Use @{VariantDecode_HPMUniqueID}.											|
|		EHPMTaskField_OriginallyCreatedBy:				Use @{VariantDecode_HPMUniqueID}.											|
|		EHPMTaskField_Description:						Use @{VariantDecode_HPMString}.												|
|		EHPMTaskField_Hyperlink:						Use @{VariantDecode_HPMString}.												|
|		EHPMTaskField_DetailedDescription:				Use @{VariantDecode_HPMString}.												|
|		EHPMTaskField_StepsToReproduce:					Use @{VariantDecode_HPMString}.												|
|		EHPMTaskField_CustomColumnData:					Use @{VariantDecode_HPMString}.												|
|		EHPMTaskField_LinkedToMilestone:				Use @{VariantDecode_HPMTaskLinkedToMilestones}.								|
|		EHPMTaskField_DelegateTo:						Use @{VariantDecode_HPMTaskDelegateTo}.										|
|		EHPMTaskField_SprintAllocatedResources:			Use @{VariantDecode_HPMTaskSprintAllocatedResources}.						|
|		EHPMTaskField_VisibleTo:						Use @{VariantDecode_HPMTaskVisibleTo}.										|
|		EHPMTaskField_ResourceAllocationMore:			Use @{VariantDecode_HPMTaskResourceAllocation}.								|
|		EHPMTaskField_AttachedDocuments:				Use @{VariantDecode_HPMTaskAttachedDocuments}.								|
|		EHPMTaskField_VacationOptions (FieldData = 1):	Use @{VariantDecode_HPMTaskVacationOptions}.								|
|		EHPMTaskField_CommentsOptions:					Use @{VariantDecode_HPMTaskCommentsOptions}.								|
|		EHPMTaskField_LinkedTo:							Use @{VariantDecode_HPMTaskLinkedTo}.										|
|		EHPMTaskField_SprintResourceAllocation:			Use @{VariantDecode_HPMTaskSprintResourceAllocation}.						|
|		EHPMTaskField_TimeZones:						Use @{VariantDecode_HPMTaskTimeZones}.										|
|		EHPMTaskField_Comment:							No data recorded.															|
|		EHPMTaskField_IdealDaysHistory:					No data recorded.															|
|		EHPMTaskField_PointsHistory:					No data recorded.															|
|		EHPMTaskField_WorkRemainingHistory:				No data recorded.															|
|																																	|
|	Retrieving Task History Special Data:	Task history data is retrieved differently depending on the								|
|											entry type of field you want to retrieve data for.										|
|																																	|
|		EHPMDataHistoryEntryType_TaskCreated:				Use @{VariantDecode_HPMDataHistoryTaskCreated}.							|
|		EHPMDataHistoryEntryType_TaskRestoredFromHistory:	Use @{VariantDecode_HPMDataHistoryTaskRestoredFromHistory}.				|
|		EHPMDataHistoryEntryType_TaskMoved:					Use @{VariantDecode_HPMDataHistoryTaskMoved}.							|
|		EHPMDataHistoryEntryType_TaskRenameCustomColumn:	Use @{VariantDecode_HPMDataHistoryTaskRenameCustomColumn}.				|
|		EHPMDataHistoryEntryType_TaskProxyCreated:			Use @{VariantDecode_HPMDataHistoryTaskProxyCreated}.					|
|		EHPMDataHistoryEntryType_TaskProxyDeleted:			Use @{VariantDecode_HPMDataHistoryTaskProxyDeleted}.					|
|		EHPMDataHistoryEntryType_TaskDeleted:																						|
|																																	|
|	Retrieving Statistics Data:		Statistics data is retrieved differently depending on the										|
|									type of field you want to retrieve data for.													|
|																																	|
|		EHPMStatisticsField_WorkRemaining:						Use @{VariantDecode_HPMFP32}.										|
|		EHPMStatisticsField_EstimatedIdealDays:					Use @{VariantDecode_HPMStatisticsMultiFrequency}. If m_UniqueID is  |
|																0, m_Frequency is Days. If m_UniqueID is 1, m_Frequency is			|
|																Days not done.														|
|		EHPMStatisticsField_ItemStatus:							Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_Severity:							Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_BugStatus:							Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_CompletedAndInCompletedDays:		Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_BudgetedWorkEarnedValue:			Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_ComplexityPoints:					Use @{VariantDecode_HPMStatisticsMultiFrequency}. If m_UniqueID is  |
|																0, m_Frequency is Points. If m_UniqueID is 1, m_Frequency is		|
|																Points not done.													|
|		EHPMStatisticsField_Priority:							Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_Risk:								Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_Confidence:							Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|		EHPMStatisticsField_CustomColumn:						Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|																To interpret the data you need to check the custom column			|
|																configuration for the specific column hash with						|
|																@{ProjectCustomColumnsGet}											|
|		EHPMStatisticsField_CustomStatisticsSampler:			Use @{VariantDecode_HPMStatisticsCustomStatisticsFrequency}.		|
|		EHPMStatisticsField_PipelineTasksBuildupAndBurndown:	Use @{VariantDecode_HPMStatisticsMultiFrequency}.					|
|																																	|
|	Retrieving Project History Data:	Project history data is retrieved differently depending on the								|
|										type of field you want to retrieve data for. @{HPMDataHistoryEntry}::m_EntryKind is set to 	|
|										@{EHPMDataHistoryEntryKind}_ProjectChangeHistory.											|
|																																	|
|		EHPMProjectField_CustomColumns:							Use @{VariantDecode_HPMProjectCustomColumns}.						|
|		EHPMProjectField_WorkflowSettings:						Use @{VariantDecode_HPMProjectWorkflowSettings}. 					|
|		EHPMProjectField_CalendarHolidays:						Use @{VariantDecode_HPMHolidays}.									|
|		EHPMProjectField_CalendarWorkingDays:					Use @{VariantDecode_HPMWorkingDays}.								|
|		EHPMProjectField_CalendarCustomWorkingDays:				Use @{VariantDecode_HPMCustomWorkingDays}.							|
|		EHPMProjectField_CalendarWorkingHours:					Use @{VariantDecode_HPMWorkingHours}.								|
|		EHPMProjectField_CalendarCustomWorkingHours:			Use @{VariantDecode_HPMCustomWorkingHours}.							|
|		EHPMProjectField_Name:									Use @{VariantDecode_HPMString}.										|
|		EHPMProjectField_ArchivedStatus:						Use @{VariantDecode_HPMInt32}. Boolean.								|
|		EHPMProjectField_ProjectMethod:							Use @{VariantDecode_HPMInt32}. @{EHPMProjectMethod}	.				|
|		EHPMProjectField_CompletionStyle:						Use @{VariantDecode_HPMInt32}. @{EHPMProjectTaskCompletionStyle}.	|
|		EHPMProjectField_AgileTemplate:							Use @{VariantDecode_HPMInt32}. @{EHPMProjectAgileTemplate}.			|
|		EHPMProjectField_OldCustomColumn:						Use @{VariantDecode_HPMProjectCustomColumnsColumn}.					|
|		EHPMProjectField_WorkflowsInMainProjectAndBacklog:		Use @{VariantDecode_HPMInt32}. Boolean.								|
|		EHPMProjectField_OldResource:							Use @{VariantDecode_HPMUniqueID}.									|
|		EHPMProjectField_DefaultEditorMode:						Use @{VariantDecode_HPMInt32}. @{EHPMProjectDefaultEditorMode}.		|
|		EHPMProjectField_DefaultActivatedColumns:				Use @{VariantDecode_HPMProjectDefaultColumns}.						|
|																																	|
|	Comments:			Note that there can be several EHPMDataHistoryEntryType_TaskCreated entries, since a task can be			|
|						recreated by a cut and paste or from history. The current history is often what you are looking for and		|
|						in that case just look at entries from the latest EHPMDataHistoryEntryType_TaskCreated.						|
|																																	|
|	See Also:			@{HPMDataHistory}, @{EHPMDataHistoryEntryType}																|
|																																	|
|	Location:			Structures																									|
|																																	|
|	Index:				!name																										|
\*_________________________________________________________________________________________________________________________________*/
typedef struct HPMDataHistoryEntry
{
	HPMUInt64 m_Time;									// [default=0] The time when the data was changed. Expressed as the number of micro seconds since 1970 UTC.
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that changed the data.
	HPMString m_Resource;								// The resource that changed the data.
	HPMUniqueID m_ObjectID;								// Set to task id if this is a task history entry and project id if this is a project history entry.
	HPMUniqueID m_NonImpersonatedResourceID;			// The unique identifier of the non impersonated resource that changed the data. Differs from m_ResourceID when resource is impersonated.
	HPMString m_NonImpersonatedResource;				// The non impersonated resource that changed the data. Differs from m_Resource when resource is impersonated.
	HPMUInt32 m_EntryType;								// [type=EHPMDataHistoryEntryType,default=EHPMDataHistoryEntryType_FieldCreated] The type of entry. See @{EHPMDataHistoryEntryType}.
	HPMUInt32 m_EntryKind;								// [type=EHPMDataHistoryEntryKind,default=EHPMDataHistoryEntryKind_Default] The kind of entry. See @{EHPMDataHistoryEntryKind}.
	HPMInt32 m_FieldID;									// [default=0] The field id of the data for this entry. If this is a task history entry this is one of @{EHPMTaskField}, although not all fields will be used. If this is project history entry this is one of @{EHPMProjectField}.
	HPMUInt32 m_FieldData;								// [default=0] The field data of the data for this entry. If m_FieldID is @{EHPMTaskField}_CustomColumnData this member is the column hash of the custom column data.
	HPMInt32 m_Origin;									// [type=EHPMDataHistoryOrigin,default=EHPMDataHistoryOrigin_None] The origin detailing where on the server the entry was created from.
	HPMInt32 m_ClientOrigin;							// [type=EHPMDataHistoryClientOrigin,default=EHPMDataHistoryClientOrigin_None] The client origin detailing where on the client the entry was created from.
	const HPMUntranslatedString *m_pClientCustomOrigin; // A string detailing the custom client origin.
	HPMInt32 m_bHasDataRecorded;						// [default=0] Set to true if this entry is a has any data recorded. If set it is safe to call @{DataHistoryGetEntryData} on the entry.
} HPMDataHistoryEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Frequency entry used in @{HPMStatisticsMultiFrequency}.						|
|																									|
|	See Also:			@{HPMStatisticsMultiFrequency}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMStatisticsMultiFrequencyEntry
{
	HPMInt32 m_UniqueID;			// [default=0] The unique identifier of the state to count frequency for.
	HPMInt32 m_Frequency;			// [default=0] The number of occurrences of the unique id.
	HPMFP64 m_FrequencyFP;			// [default=0.0] The statistic as a floating point number. Used for statistics for custom columns that is of the decimal format.
} HPMStatisticsMultiFrequencyEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Frequency entries used in													|
|						@{VariantDecode_HPMStatisticsMultiFrequency}.								|
|																									|
|	See Also:			@{VariantDecode_HPMStatisticsMultiFrequency},								|
|						@{HPMStatisticsMultiFrequencyEntry}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMStatisticsMultiFrequency
{
	HPMUInt32 m_nFrequencyEntries;									// The number of frequency entries.
	const HPMStatisticsMultiFrequencyEntry *m_pFrequencyEntries;	// Pointer to a list of @{HPMStatisticsMultiFrequencyEntry} that specifies the frequency entries.
} HPMStatisticsMultiFrequency;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Task created data used in													|
|						@{VariantDecode_HPMDataHistoryTaskCreated}.									|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskCreated},									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskCreated
{
	HPMUniqueID m_Container;			// The container the task was created in.
	HPMUniqueID m_TaskMainReferenceID;	// The main reference ID for the task.
	HPMUInt32 m_ID;						// The task ID. See @{TaskGetID}.
} HPMDataHistoryTaskCreated;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Restored task data used in													|
|						@{VariantDecode_HPMDataHistoryTaskRestoredFromHistory}.						|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskRestoredFromHistory},						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskRestoredFromHistory
{
	HPMUniqueID m_Container;	// The container the task was restored in.
	HPMUniqueID m_TaskMainReferenceID;	// The main reference ID for the task.
	HPMUInt32 m_ID;						// The task ID. See @{TaskGetID}.
} HPMDataHistoryTaskRestoredFromHistory;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Task moved data used in														|
|						@{VariantDecode_HPMDataHistoryTaskMoved}.									|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskMoved},									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskMoved
{
	HPMUniqueID m_ContainerFrom;		// The container the task was moved from.
	HPMUniqueID m_ContainerTo;			// The container the task was moved to.
	HPMUniqueID m_TaskMainReferenceID;	// The main reference ID for the task.
	HPMUInt32 m_ID;						// The task ID. See @{TaskGetID}.
} HPMDataHistoryTaskMoved;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Frequency entries used in													|
|						@{VariantDecode_HPMDataHistoryTaskProxyCreated}.							|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskProxyCreated},							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskProxyCreated
{
	HPMUniqueID m_Container;		// The container the task proxy was created in.
	HPMUniqueID m_TaskReferenceID;	// The task reference ID of the created proxy.
} HPMDataHistoryTaskProxyCreated;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Proxy deleted data used in													|
|						@{VariantDecode_HPMDataHistoryTaskProxyDeleted}.							|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskProxyDeleted},							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskProxyDeleted
{
	HPMUniqueID m_Container;		// The container the task proxy was deleted from.
	HPMUniqueID m_TaskReferenceID;	// The task reference ID of the deleted proxy.
} HPMDataHistoryTaskProxyDeleted;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Rename custom column data used in											|
|						@{VariantDecode_HPMDataHistoryTaskRenameCustomColumn}.						|
|																									|
|	See Also:			@{VariantDecode_HPMDataHistoryTaskRenameCustomColumn},						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistoryTaskRenameCustomColumn
{
	HPMUInt32 m_HashFrom;	// The hash of the custom column that was renamed from.
	HPMUInt32 m_HashTo;		// The hash of the custom column that was renamed to.
} HPMDataHistoryTaskRenameCustomColumn;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Frequency entry used in @{HPMStatisticsCustomStatisticsFrequency}.			|
|																									|
|	See Also:			@{HPMStatisticsCustomStatisticsFrequency}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMStatisticsCustomStatisticsFrequencyEntry
{
	HPMInt32 m_nFieldData;		// The number of field data that specifies the combination for this specific entry. Should always be the same as @{HPMStatisticsCustomStatisticsFrequency}::m_nFields.
	HPMInt32 *m_pFieldData;		// Pointer to a list of {HPMInt32} that specifies the data for the fields that specifies the specific combination for this entry. Appears in the order specified in @{HPMStatisticsCustomStatisticsFrequency}::m_pFields.
	HPMInt32 m_Frequency;		// [default=0] The number of occurrences of this combination of data.
} HPMStatisticsCustomStatisticsFrequencyEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Frequency entries used in													|
|						@{VariantDecode_HPMStatisticsCustomStatisticsFrequency}.					|
|																									|
|	See Also:			@{VariantDecode_HPMStatisticsCustomStatisticsFrequency},					|
|						@{HPMStatisticsCustomStatisticsFrequencyEntry}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMStatisticsCustomStatisticsFrequency
{
	HPMUInt32 m_nFields;													// The number of fields the custom statistic is comprised of. Normally the same as specified in @{HPMProjectCustomStatisticsSampler}.
	const HPMCustomStatisticsField *m_pFields;								// Pointer to a list of @{HPMCustomStatisticsField} that specifies the fields the custom statistic is comprised of. This is the order that data in @{HPMStatisticsCustomStatisticsFrequencyEntry}::m_pFieldData appears.

	HPMUInt32 m_nFrequencyEntries;											// The number of frequency entries.
	const HPMStatisticsCustomStatisticsFrequencyEntry *m_pFrequencyEntries;	// Pointer to a list of @{HPMStatisticsCustomStatisticsFrequencyEntry} that specifies the frequency entries.
} HPMStatisticsCustomStatisticsFrequency;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Callback used by the SDK to get function pointers when the SDK is used as	|
|						a client plugin.															|
|																									|
|	Return Value:		Returns the function pointer.												|
|																									|
|	See Also:			@{HPMClientSDKData}															|
|																									|
|	Location:			Callbacks																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef void * (DHPMSdkCallingConvention *HPMFunctionClientSDKGetFunctionPtr)(	HPMUInt32 _ClientVersion,			// [in] Pointer to a HPMInt32 value that will receive the error code for the function. See @{EHPMError}.
																				const HPMAsciChar *_pFunctionName	// [in] Pointer to a HPMInt32 value that will receive the error code for the function. See @{EHPMError}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																											|
|																													|
|																													|
|	Description:		This structure is passed to the Init function when the Hansoft executable					|
|						loads a client plugin.																		|
|																													|
|	Comments:			For a client plugin you should export a function named HPMClientSDKCreate and a function	|
|						named HPMClientSDKDestroy with the following prototypes:									|
|																													|
|						void DHPMSdkCallingConvention HPMClientSDKCreate(const HPMClientSDKData *_pClientData);		|
|						void DHPMSdkCallingConvention HPMClientSDKDestroy();										|
|																													|
|						HPMClientSDKCreate will be called when the Hansoft client loads the plugin dll.				|
|																													|
|						HPMClientSDKDestroy will be called right before the Hansoft client uloads the plugin dll.	|
|						You should make sure to destroy any SDK objects and stop all threads before returning from	|
|						this function, or the client executable might start leaking memory.							|
|																													|
|	See Also:			@{HPMFunctionClientSDKGetFunctionPtr}														|
|																													|
|	Location:			Structures																					|
|																													|
|	Index:				!name																						|
|																													|
|	Managed:			NoGenerate																					|
\*_________________________________________________________________________________________________________________*/
typedef struct HPMClientSDKData
{
	HPMFunctionClientSDKGetFunctionPtr m_pGetFunctionPtr;	// The function pointer used by HPMInit to get the functions from the SDK implementation in the client.
	HPMUInt32 m_HansoftVersion;								// [default=EHPMSDK_Version] The Hansoft version that the client plugin is loaded into.
} HPMClientSDKData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in UtilDecodeCustomChoiceValue to specify a decoded custom				|
|						choice value.																|
|																									|
|	See Also:			@{UtilDecodeCustomChoiceValue}, @{EHPMCustomChoiceValueType}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomChoiceValue
{
	HPMInt32 m_ValueType;		// [type=EHPMCustomChoiceValueType,default=EHPMCustomChoiceValueType_Unknown] Can be one of @{EHPMCustomChoiceValueType}.
	HPMUniqueID m_UniqueID;		// The unique identifier of the decoded custom value, if the m_ValueType specifies a type that is expressed as an unique identifier.
	HPMUniqueID m_UniqueID2;	// A second unique identifier of the decoded custom value, if the m_ValueType specifies a type that needs a second unique identifier. Currently used for @{EHPMCustomChoiceValueType}::_Report and @{EHPMCustomChoiceValueType}::_GlobalReport.
	HPMUInt32 m_IntValue;		// [default=0] The integer value of the decoded custom value, if the m_ValueType specifies a type that is expressed as an integer value.
} HPMCustomChoiceValue;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Stores custom data for a channel, provided by the session that registered	|
|						the channel using @{CommunicationChannelRegister}.							|
|																									|
|	See Also:			@{CommunicationChannelRegister}, @{CommunicationChannelEnum}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCommunicationChannelData
{
	HPMUInt32 m_nBytes;			// The number of bytes of channel data.
	const HPMUInt8 *m_pBytes;	// The channel data, as at the beginning of session login sequence.
} HPMCommunicationChannelData;



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{CommunicationChannelEnum}, to provide information about a			|
|						communication channel.														|
|																									|
|	See Also:			@{CommunicationChannelEnum}, @{CommunicationChannelRegister}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCommunicationChannelProperties
{
	const HPMChar* m_pChannelName;					// The name of the Channel. An empty channel name means the channel is owned by the server hosting the channel's database.
	HPMUInt64 m_OwnerSessionID;						// [default=0] The session ID of the channel's owner
	const HPMChar* m_pDatabaseGUID;					// The globally unique GUID of the database where Channel is originally registered, as a string.
	const HPMChar* m_pDescription;					// A description of the database's domain, for example the name of the organization or department owning it.
	HPMCommunicationChannelData m_ChannelData;		// Custom channel data, provided by channel's owner.
	HPMUInt32 m_Flags;								// [type=EHPMChannelFlag,default=EHPMChannelFlag_None] The Channel's @{EHPMChannelFlag} flags.
} HPMCommunicationChannelProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating channels of a server.									|
|																									|
|	See Also:			@{CommunicationChannelEnum}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCommunicationChannelEnum
{
	HPMUInt32 m_nChannels;									// The number of channels in the array.
	const HPMCommunicationChannelProperties *m_pChannels;	// Pointer to a list of channels and their properties.
} HPMCommunicationChannelEnum;




/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying target Session IDs for credential resolution queries.	|
|																									|
|	See Also:			@{AuthenticationResolveCredentials}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCredentialResolutionSessionIDsEnum
{
	HPMUInt32 m_nSessionIDs;								// The number of Session IDs in the array.
	const HPMUInt64 *m_pSessionIDs;							// Pointer to a list of Session IDs.
} HPMCredentialResolutionSessionIDsEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Stores certificate data.													|
|																									|
|	See Also:			@{HPMCertificateSettings}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCertificateData
{
	HPMUInt32 m_nBytes;			// The number of bytes of certificate data.
	const HPMUInt8 *m_pBytes;	// The certificate data.
} HPMCertificateData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Certificate settings used for session connect.								|
|																									|
|	See Also:			@{SessionOpen}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCertificateSettings
{
	HPMUInt32 m_VerificationFlags;								// [type=EHPMCertificateVerificationFlag,default=EHPMCertificateVerificationFlag_None] The certificate verification flags.
	HPMCertificateData m_PublicCertificateData;					// Public certificate data.
	HPMCertificateData m_PrivateKeyData;						// Private key data.
	HPMCertificateData m_CRLData;								// Certificate revocation list data.
	HPMCertificateData m_CACertificateData;						// CA certificate data.
	const HPMChar* m_CAStoreLocation;							// File system location of CA store.
	const HPMChar* m_PathToCRLs;								// File system location of CRLs.
	HPMInt32 m_VerificationDepth;								// The certificate verification depth.
} HPMCertificateSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Data history entries used in @{DataHistoryGetHistory}.						|
|																									|
|	Time and pos values:	The data history search can be limited with the m_Start, m_End			|
|							and m_MaxEntries fields in @{HPMDataHistoryGetHistoryParameters}.		|	
|							Together with the returned time	and	position values in m_Delivered,		|
|							m_First and m_Last, data history can be returned in chunks.				|
|																									|
|	See Also:			@{DataHistoryGetHistory}, @{HPMDataHistoryEntry}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMDataHistory
{
	HPMUInt32 m_nHistoryEntries;					// The number of history entries.
	const HPMDataHistoryEntry *m_pHistoryEntries;	// Pointer to a list of @{HPMDataHistoryEntry} that specifies the history entries.
	HPMDataHistoryTimePosition m_Delivered;			// The actual last time and last position of the delivered entries.
	HPMDataHistoryTimePosition m_Earliest;			// The earliest time and position of all entries available in the unfiltered data history search.
	HPMDataHistoryTimePosition m_Latests;			// The latest time and position of all entries available in the unfiltered data history search.
} HPMDataHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Task status custom dialog strings used in									|
|						@{GlobalDisplayCustomTaskStatusDialog}.										|
|																									|
|	See Also:			@{GlobalDisplayCustomTaskStatusDialog}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomTaskStatusDialogValues
{
	const HPMUntranslatedString *m_pTitle;					// The dialog title.
	const HPMUntranslatedString *m_pInfoText;				// General description.
	const HPMUntranslatedString *m_pButtonLabel;			// Label on submit button.
	const HPMUntranslatedString *m_pCancelLabel;			// Label on cancel button.
	const HPMUntranslatedString *m_pSelectionActionText;	// Description of submit action.
	const HPMUntranslatedString *m_pOptionalTextHeading;	// Heading for section that can display optional information.
	const HPMChar *m_pOptionalText;							// Optional text.
} HPMCustomTaskStatusDialogValues;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to describe the information about a session.							|
|																									|
|	See Also:			@{SessionGetInfo}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMSessionInfo
{
	const HPMChar *m_pAddress;			// The address of the server the session is connected to
	HPMInt32 m_Port;					// [default=0] The port of the server the session is connected to
	const HPMChar *m_pDatabase;			// The database the session is connected to
	const HPMChar *m_pResourceName;		// The resource used to connect to the database with
	HPMUInt64 m_SessionID;				// The session ID of this session.
} HPMSessionInfo;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to keep a reference to a session lock.									|
|																									|
|	See Also:			@{SessionLock}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMSessionLock
{
	HPMInt32 m_Dummy;	// Unused dummy member
} HPMSessionLock;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Definition of the callback function called when you need to call			|
|						SessionProcess because new events have been received from the server.		|
|																									|
|	Comments:			You cannot call any SDK functions when called into this function. It is		|
|						intended that you signal another thread that will subsequently call			|
|						SessionProcess. When converting from 7.0 or older SDKs just signal the 		|
|						semaphore that was previously used for the same purpose.					|
|																									|
|	See Also:			@{HPMNeedSessionProcessCallbackInfo}										|
|																									|
|	Location:			Callbacks																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef void (DHPMSdkCallingConvention *HPMNeedSessionProcessCallback)(	void *_pContext	// [in] The context provided to 
																	   );
														

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Need session process callback.												|
|																									|
|	See Also:			@{SessionOpen}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef struct HPMNeedSessionProcessCallbackInfo
{
	void *m_pContext;							// The user supplied context that will be provided when the callback is  called
	HPMNeedSessionProcessCallback m_pCallback;	// The callback to call when you need to call SessionProcess
} HPMNeedSessionProcessCallbackInfo;


#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Opens a session to a database on a server.									|
|																									|
|	Return Value:		Returns a session identifier. This identifier is used in all other			|
|						functions of the SDK to identify the session to perform an operation on.	|
|																									|
|	Comments:			When you are done with the session you should close it with					|
|						@{SessionClose}.															|
|																									|
|						You need to call @{SessionProcess} periodically or when the need process	|
|						callback is called. If no callback is specified in the non-C SDKs, the SDK 	|
|						will deliver  notifications from it's own thread with all the concurrency 	|
|						implications this has. If don't want to deal with the concurrency issues 	|
|						specify the callback/semaphore and call SessionProcess manually on your		|
|						main thread.																|
|																									|
|						For more information see @{Connecting to a Database}.						|
|																									|
|						If _nSessions > 0 a session pool is created. The session pool is a			|
|						collection of SDK sessions where each session caches its own copy of the	|
|						database. You can access the sessions in the session pool with				|
|						@{SessionOpenVirtual}. Every function call made on the virtual session		|
|						calls any of the real sessions in the session pool. Every call on			|
|						the virtual session can be made on a different real session under the hood	|
|						and it does not need to be aware of this. If you have set the number		|
|						of sessions parameter in SessionOpen to zero and use virtual sessions,		|
|						all virtual sessions will work towards the same session. As long as			|
|						your program is mostly reading and not doing heavy writing					|
|						or blocking operations you can have a large number of virtual 				|
|						sessions without increasing the size of the session pool.					|
|																									|
|						For every session in the pool a new SDK user is created. This user will		|
|						be named _pResourceName_number and have the password _pPassword.			|
|																									|
|						Note that for the Java, managed and C++ wrappers the @{SessionOpen} and		|
|						@{HPMInit} functions are combined into a @{SessionOpen} with @{HPMInit}'s	|
|						last argument added.														|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{SessionProcess}, @{SessionClose},						|
|						@{SessionOpenVirtual}														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionOpen																	|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef void * (DHPMSdkCallingConvention *HPMFunctionSessionOpen)(	HPMError *_pError,												// [out] Pointer to a HPMInt32 value that will receive the error code for the function. See @{EHPMError}.
																	const HPMChar *_pAddress,										// [in] The address of the server to connect to.
																	HPMInt32 _Port,													// [in] The port of the server to connect to.
																	const HPMChar *_pDatabase,										// [in] The database on the server to connect to.
																	const HPMChar *_pResourceName,									// [in] The resource name of the user to log in with. See comments for more information.
																	const HPMChar *_pPassword,										// [in] The password of the resource to login with.
																	HPMInt32 _bBlockOnOperations,									// [in] Turn on blocking operation of the SDK. It is recommended that you turn on blocking operation as non blocking operations has not been tested extensively.
																	HPMNeedSessionProcessCallbackInfo const *_pNeedProcessCallback,	// [in] A callback that will be called when you need to call @{SessionProcess}. Specify NULL to let the SDK do SessionProcess from a worker thread.
																	HPMUInt32 _SDKVersion,											// [in] Used by the SDK to keep track of what version of the interface is being used. You must set this to EHPMSDK_Version.
																	HPMInt32 _SDKDebug,												// [in,type=EHPMSdkDebugMode] Turn on debugging of the SDK. Use this during development to detect memory leaks, detect memory overwrites and turn on other run time checks such as asserts. Can be one of @{EHPMSdkDebugMode}
																	HPMUInt32 _nSessions,											// [in] The number of sessions in an optional session pool. If set to 0 no pool is created. The pooled sessions are handled by @{SessionOpenVirtual}.
																	const HPMChar *_pWorkingDirectory,								// [in] The working directory where the SDK stores its working data. If not set the program directory of the application will be used.
																	const HPMCertificateSettings *_pCertificateSettings,			// [in] The security certificate settings for the SDK session. If no settings are provided, i.e. a NULL value sent, the SDK session to the server will be created without credentials.
																	const HPMChar **_pExtendedErrorMessage							// [out] HPMChar memory that will be allocated by the SDK if there are extra error message set by e.g. SSL. Will not be used if set to NULL. Must be freed with @{MemoryFree} if returning non NULL content or a memory leak will result.
																);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to get the information about a connected session.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMSessionInfo}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionGetInfo																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionGetInfo)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																		const HPMSessionInfo **_pInfo		// [out] Pointer to a pointer of a @{HPMSessionInfo} object, representing the returned data.
																	);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to lock the session from receiving server updates.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						When the object is freed the session is unlocked and can receive updates	|
|						from the server again.														|
|																									|
|						Try to lock the session as little time as possible to allow the processing	|
|						of messages from the server.												|
|																									|
|						If you call a blocking function while having the session lock				|
|						it will temporarily be unlocked and updates from the server will be			|
|						received until the blocking command has been returned from the server.		|
|																									|
|						Keep in mind that if you call this function from a client dll session		|
|						the client will hang until you unlock the session.							|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMSessionLock}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionLock																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionLock)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																		HPMSessionLock const **_pLockReference	// [out] Pointer to a pointer of a @{HPMSessionLock} object, representing the returned data.
																	);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Opens a virtual session. Function calls made on this virtual session uses	|
|						pre-opened sessions from a session pool. Every call can use a different		|
|						session from the session pool.												|
|																									|
|	Return Value:		Returns a virtual session identifier. This identifier is used in all other	|
|						functions of the SDK to identify the session to perform an operation on.	|
|						If no session pool has been created by @{SessionOpen} the return value will	|
|						be NULL. Note that you can use virtual sessions even if only one session	|
|						was created by @{SessionOpen}, i.e. the number of session parameter in		|
|						@{SessionOpen} is set to zero.												|
|																									|
|	Comments:			Callbacks and the process semaphore are handled by the parent session.		|
|																									|
|						If no session currently is available in the session pool when a function	|
|						call is made, the call will block until a session is available or the call	|
|						timeouts. In this case @{EHPMError}_SessionPoolSessionNotAvailable is		|
|						returned by functions that returns @{EHPMError} and 0 for all other			|
|						functions.																	|
|																									|
|						If you have set the number of sessions parameter in @{SessionOpen} to zero	|
|						and use virtual sessions, all virtual sessions will work towards the same	|
|						session. As long as your SDK program is doing mostly reads and not			|
|						spend to much time writing or on blocking operations you can have quite a	|
|						large number of virtual sessions without increasing the size of the			|
|						session pool. Our recommendation is that you start by setting the number	|
|						of sessions parameter to zero and increase it if you start experiencing		|
|						slowdowns.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{SessionOpen}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionOpenVirtual															|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef void * (DHPMSdkCallingConvention *HPMFunctionSessionOpenVirtual)(void *_pSession	// [in] A connected session. See @{SessionOpen}.
																		 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Closes a session.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When you close the session eventual memory leaks will be displayed if you	|
|						specified to have debugging enabled when you opened the session.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{SessionOpen}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionClose																|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionClose)(	void *_pSession	// [in] A connected session. See @{SessionOpen}.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Stops a session.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			After SessionStop has been called on a session all functions called on the	|
|						session will return the disconnected attribute. All current functions that	|
|						are running will also return a timout.										|
|																									|
|						You don't have to call this functions before SessionClose, but it can be	|
|						useful in case you need to wait for threads to quit before calling			|
|						SessionClose.																|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{SessionOpen}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionStop																	|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionStop)(	void *_pSession	// [in] A connected session. See @{SessionOpen}.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Does deferred processing in the SDK.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			This function calls any callbacks that you have specified. You need to		|
|						call this function periodically or when the semaphore specified in			|
|						@{SessionOpen} is signaled.													|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionProcess																|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionProcess)(	void *_pSession	// [in] A connected session. See @{SessionOpen}.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Frees an object returned by the SDK.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You need to call this function on any objects that have been returned from	|
|						the SDK or memory leaks will result. To debug memory leaks specify the		|
|						debug flag when you call @{SessionOpen}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ObjectFree																	|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionObjectFree)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}. 
																	const void *_pObject,	// [in] The object to free.
																	HPMInt32 *_pDeleted		// [out,type=bool] Set to 1 if the object was deleted (ref count went to 0).
																);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Adds a reference to an object returned by the SDK.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ObjectAddRef																|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionObjectAddRef)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}. 
																		const void *_pObject	// [in] The object to add a reference to.
																	);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the reference count of an object returned by the SDK.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ObjectGetRef																|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionObjectGetRef)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}. 
																		const void *_pObject,	// [in] The object to get the reference count for.
																		HPMUInt32 *_pRefCount	// [out] The reference count of the object.
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Compares two SDK objects.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ObjectCompare																|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionObjectCompare)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}. 
																		const void *_pObjectLeft,	// [in] The first object to compare.
																		const void *_pObjectRight,	// [in] The second object to compare.
																		HPMInt32 *_pReturn			// [out] The return value from the comparison. If left is less than right return is -1, if left is greater than right return is 1, if equals return is 0.
																	  );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Frees an external object that has had its memory allocated by the SDK.		|
|						Currently used by the @{SessionOpen}._pExtendedErrorMessage parameter		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You need to call this function on any objects that have memory allocated 	|
|						from the SDK or memory leaks will result. 									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						MemoryFree																	|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionMemoryFree)(void *_pMemory	// [in] The object to free.
																   );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Calculates the column hash of a custom column.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The column hash is used to identify a custom column. When new columns are	|
|						created you need to make sure that the hash value doesn't collide with any	|
|						other column hashes in all projects of the database, otherwise unexpected	|
|						things will happen when data is copy/pasted between projects.				|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectCustomColumnsColumn}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetColumnHash															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetColumnHash)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}. 
																			const HPMProjectCustomColumnsColumn *_pColumn,	// [in] The column to calculate the hash of. See @{HPMProjectCustomColumnsColumn}
																			HPMUInt32 *_pColumnHash							// [out] The returned column hash.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if an unique identifier is valid in the database.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDValid																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDValid)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ID,	// [in] The unique identifier to check the validity of.
																		HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is valid 0 otherwise.
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a task identifier.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDTask																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDTask)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ID,	// [in] The unique identifier to check if it is a task.
																		HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a Task 0 otherwise.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a task reference identifier.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDTaskRef																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDTaskRef)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ID,	// [in] The unique identifier to check if it is a task reference.
																			HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a task reference 0 otherwise.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a project identifier.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDProject																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDProject)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ID,	// [in] The unique identifier to check if it is a project.
																			HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a project 0 otherwise.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a backlog project identifier.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDBacklogProject														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDBacklogProject)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ID,	// [in] The unique identifier to check if it is a backlog project.
																				HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a backlog 0 otherwise.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a QA project identifier.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDQAProject															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDQAProject)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ID,	// [in] The unique identifier to check if it is a QA project.
																			HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a QA project 0 otherwise.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a unique identifier is a resource identifier.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsIDResource															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsIDResource)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ID,	// [in] The unique identifier to check if it is a resource.
																			HPMInt32 *_pReturn	// [out,type=bool] Returns 1 if the identifier is a resource 0 otherwise.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to decode custom choices produced by automatically filled in lists		|
|						in a custom dialog.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMCustomChoiceValue}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilDecodeCustomChoiceValue													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilDecodeCustomChoiceValue)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pValue,							// [in] The value to decode.
																						const HPMCustomChoiceValue **_pDecodedValue		// [out] Pointer to a pointer of a @{HPMCustomChoiceValue} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to decode the value of a custom column when the type of custom column	|
|						is @{EHPMProjectCustomColumnsColumnType}_Resources.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceDefinitionList},							|
|						@{EHPMProjectCustomColumnsColumnType}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilDecodeCustomColumnResourcesValue										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilDecodeCustomColumnResourcesValue)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																								const HPMChar *_pValue,									// [in] The value to decode.
																								const HPMResourceDefinitionList **_pDecodedValue		// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to encode the value of a custom column when the type of custom column	|
|						is @{EHPMProjectCustomColumnsColumnType}_Resources.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceDefinitionList},							|
|						@{EHPMProjectCustomColumnsColumnType}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilEncodeCustomColumnResourcesValue										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilEncodeCustomColumnResourcesValue)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																								const HPMResourceDefinitionList *_pResources,			// [in] The value to encode.
																								HPMUniqueID _ProjectID,									// [in] The unique id of the project of the custom column.
																								const HPMString **_pRsourceString						// [out] Pointer to a pointer of a @{HPMString} object, representing the encoded data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to decode the value of a custom column when the type of custom column	|
|						is @{EHPMProjectCustomColumnsColumnType}_DateTime.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMProjectCustomColumnsColumnType}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilDecodeCustomColumnDateTimeValue											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilDecodeCustomColumnDateTimeValue)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																								const HPMChar *_pValue,									// [in] The value to decode.
																								HPMUInt64 *_pDateTime									// [out] Pointer to a variable representing the returned data. This is the number of micro seconds since 1970 UTC.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Used to encode the value of a custom column when the type of custom column	|
|						is @{EHPMProjectCustomColumnsColumnType}_DateTime.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMProjectCustomColumnsColumnType}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilEncodeCustomColumnDateTimeValue											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilEncodeCustomColumnDateTimeValue)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																								HPMUInt64 _DateTime,									// [in] The value to encode. This is the number of micro seconds since 1970 UTC.
																								const HPMString **_pTimeString							// [out] Pointer to a pointer of a @{HPMString} object, representing the encoded data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the unique identifier of the real project associated with a project.	|
|						For example you might send in the identifier of a QA or backlog project		|
|						to get the real project they belong to back. If you send in a unique		|
|						identifier to a real project the same identifier will be returned.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetRealProjectIDFromProjectID											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetRealProjectIDFromProjectID)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _ID,		// [in] The unique identifier of the project to get the real project for.
																								HPMUniqueID *_pReturn	// [out] The unique identifier of the project. If the function fails the return value is -1.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a more detailed description for the last occurred error.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only some errors will change the value of the last error description,		|
|						check @{EHPMError} for more information.									|
|																									|
|						The last error is stored per thread, so you must call this function			|
|						from the thread where you called the function that returned an error.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}, @{EHPMError}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetLastErrorDescription													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetLastErrorDescription)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						const HPMString **_pData			// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets chat data history for a chat room.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. The function might return			|
|						@{EHPMError}_DataNotYetAvailable if the history data hasn't been requsted	|
|						before. If it have been requested before it might be available in the		|
|						cache and the function will return @{EHPMError}_NoError.					|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						When first calling this function for a specific set of data this function	|
|						will return @{EHPMError}_DataNotYetAvailable and you will have to wait		|
|						for the data to be downloaded from the server. You can either poll			|
|						the function until it returns @{EHPMError}_NoError or register a callback	|
|						with @{RegisterChangeCallback} and wait for the								|
|						@{EHPMChangeCallbackOperation}_DataHistoryReceived callback to be received.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMDataHistory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ChatHistoryGetHistory														|
|																									|
|	Managed:			RetNotYetAvailable															|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionChatHistoryGetHistory)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				const HPMChatRoom *_pChatRoom,		// [in] The chat room identifier to get history for. See @{HPMChatRoom}.
																				HPMUInt64 _StartTime,				// [in] The start time to query history entries for. Expressed as the number of micro seconds since 1970 UTC. Set to 0 to have unbounded start time.
																				HPMUInt64 _EndTime,					// [in] The end time to queriy history entries for. Expressed as the number of micro seconds since 1970 UTC. Set to 0 to have unbounded end time.
																				const HPMDataHistory **_pHistory	// [out] Pointer to a pointer of a @{HPMDataHistory} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets data history for an object.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. The function might return			|
|						@{EHPMError}_DataNotYetAvailable if the history data hasn't been requsted	|
|						before. If it have been requested before it might be available in the		|
|						cache and the function will return @{EHPMError}_NoError.					|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						This function is used to retrieve task history for tasks as well as			|
|						sampled statistics information.												|
|																									|
|						When first calling this function for a specific set of data this function	|
|						will return @{EHPMError}_DataNotYetAvailable and you will have to wait		|
|						for the data to be downloaded from the server. You can either poll			|
|						the function until it returns @{EHPMError}_NoError or register a callback	|
|						with @{RegisterChangeCallback} and wait for the								|
|						@{EHPMChangeCallbackOperation}_DataHistoryReceived callback to be received.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMDataHistory},						|
|						@{HPMDataHistoryGetHistoryParameters}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						DataHistoryGetHistory														|
|																									|
|	Managed:			RetNotYetAvailable															|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionDataHistoryGetHistory)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																				const HPMDataHistoryGetHistoryParameters *_pParameters,	// [in] The parameters to apply to the data history search. See @{HPMDataHistoryGetHistoryParameters}.
																				const HPMDataHistory **_pHistory						// [out] Pointer to a pointer of a @{HPMDataHistory} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data in a data history entry variant data. See						|
|						@{HPMVariantData}.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Make sure that the _pHistory parameter is a pointer returned by				|
|						@{DataHistoryGetHistory} and that the										|
|						history list hasn't been freed yet.											|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMDataHistory},										|
|						@{DataHistoryGetHistory}, @{HPMVariantData}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						DataHistoryGetEntryData														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionDataHistoryGetEntryData)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							const HPMDataHistory *_pHistory, 		// [in] Pointer to the history to retrieve data for.
																							HPMUInt32 _Index,						// [in] The index of the history entry to get data for.
																							const HPMVariantData **_pData			// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the max number of data history entries that are cached in memory on	|
|						the client.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{DataHistoryGetHistory}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						DataHistorySetMaxCacheEntries												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionDataHistorySetMaxCacheEntries)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						HPMUInt32 _MaxCacheEntries					// [in] The maximum number of data history entries that will be cached on the client.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Decode variant data as @{HPMInt32}.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMInt32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMInt32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMInt32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																				HPMInt32 *_pData						// [out] Pointer to the variable representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMUInt32}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUInt32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMUInt32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMUInt32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					HPMUInt32 *_pData						// [out] Pointer to the variable representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMInt64}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMInt64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMInt64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMInt64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																				HPMInt64 *_pData						// [out] Pointer to the variable representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMUInt64}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUInt64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMUInt64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMUInt64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					HPMUInt64 *_pData						// [out] Pointer to the variable representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMFP32}.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMFP32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMFP32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMFP32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																				HPMFP32 *_pData							// [out] Pointer to the variable representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMFP64}.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMFP64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMFP64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMFP64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																				HPMFP64 *_pData							// [out] Pointer to the variable representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMUniqueID}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUniqueID}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMUniqueID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMUniqueID)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					HPMUniqueID *_pData						// [out] Pointer to the variable representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMString}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData}, @{HPMString}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMString														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMString)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMVariantData *_pVariantData, 	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					const HPMString **_pData				// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskLinkedToMilestones}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMTaskLinkedToMilestones}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskLinkedToMilestones										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskLinkedToMilestones)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData, 		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMTaskLinkedToMilestones **_pData	// [out] Pointer to a pointer of a @{HPMTaskLinkedToMilestones} object, representing the returned data.
																								);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMResourceDefinitionList}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMResourceDefinitionList}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskDelegateTo												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskDelegateTo)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							const HPMVariantData *_pVariantData, 			// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																							const HPMResourceDefinitionList **_pData		// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskSprintAllocatedResources}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskSprintAllocatedResources}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskSprintAllocatedResources								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskSprintAllocatedResources)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																										const HPMVariantData *_pVariantData, 				// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																										const HPMTaskSprintAllocatedResources **_pData		// [out] Pointer to a pointer of a @{HPMTaskSprintAllocatedResources} object, representing the returned data.
																									);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMResourceDefinitionList}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMResourceDefinitionList}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskVisibleTo												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskVisibleTo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData, 		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMResourceDefinitionList **_pData	// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskResourceAllocation}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskResourceAllocation}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskResourceAllocation										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskResourceAllocation)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData, 		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMTaskResourceAllocation **_pData	// [out] Pointer to a pointer of a @{HPMTaskResourceAllocation} object, representing the returned data.
																								);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMStatisticsMultiFrequency}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMStatisticsMultiFrequency}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMStatisticsMultiFrequency									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMStatisticsMultiFrequency)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData, 		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMStatisticsMultiFrequency **_pData	// [out] Pointer to a pointer of a @{HPMStatisticsMultiFrequency} object, representing the returned data.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMStatisticsCustomStatisticsFrequency}.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMStatisticsCustomStatisticsFrequency}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMStatisticsCustomStatisticsFrequency						|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMStatisticsCustomStatisticsFrequency)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																												const HPMVariantData *_pVariantData, 					// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																												const HPMStatisticsCustomStatisticsFrequency **_pData	// [out] Pointer to a pointer of a @{HPMStatisticsCustomStatisticsFrequency} object, representing the returned data.
																											);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskAttachedDocuments}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskAttachedDocuments}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskAttachedDocuments										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskAttachedDocuments)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																												const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																												const HPMTaskAttachedDocuments **_pData	// [out] Pointer to a pointer of a @{HPMTaskAttachedDocuments} object, representing the returned data.
																											);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskVacationOptions}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskVacationOptions}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskVacationOptions										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskVacationOptions)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																												const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																												const HPMTaskVacationOptions **_pData	// [out] Pointer to a pointer of a @{HPMTaskVacationOptions} object, representing the returned data.
																											);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskCommentsOptions}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskCommentsOptions}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskCommentsOptions										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskCommentsOptions)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																												const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																												const HPMTaskCommentsOptions **_pData	// [out] Pointer to a pointer of a @{HPMTaskCommentsOptions} object, representing the returned data.
																											);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskLinkedTo}.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskLinkedTo}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskLinkedTo												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskLinkedTo)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMTaskLinkedTo **_pData			// [out] Pointer to a pointer of a @{HPMTaskLinkedTo} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskSprintResourceAllocation}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskSprintResourceAllocation}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskSprintResourceAllocation								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskSprintResourceAllocation)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																										const HPMVariantData *_pVariantData,			// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																										const HPMTaskSprintResourceAllocation **_pData	// [out] Pointer to a pointer of a @{HPMTaskSprintResourceAllocation} object, representing the returned data.
																										);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskCreated}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskCreated}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskCreated										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskCreated)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData,		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMDataHistoryTaskCreated **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskCreated} object, representing the returned data.
																									);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskRestoredFromHistory}.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskRestoredFromHistory}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskRestoredFromHistory							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskRestoredFromHistory)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																												const HPMVariantData *_pVariantData,					// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																												const HPMDataHistoryTaskRestoredFromHistory **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskRestoredFromHistory} object, representing the returned data.
																											);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskMoved}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskMoved}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskMoved										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskMoved)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																								const HPMDataHistoryTaskMoved **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskMoved} object, representing the returned data.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskRenameCustomColumn}.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskRenameCustomColumn}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskRenameCustomColumn							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskRenameCustomColumn)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																											const HPMVariantData *_pVariantData,				// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																											const HPMDataHistoryTaskRenameCustomColumn **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskRenameCustomColumn} object, representing the returned data.
																											);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskProxyCreated}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskProxyCreated}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskProxyCreated								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskProxyCreated)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																										const HPMVariantData *_pVariantData,			// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																										const HPMDataHistoryTaskProxyCreated **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskProxyCreated} object, representing the returned data.
																									);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMDataHistoryTaskProxyDeleted}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMDataHistoryTaskProxyDeleted}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMDataHistoryTaskProxyDeleted								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMDataHistoryTaskProxyDeleted)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																										const HPMVariantData *_pVariantData,			// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																										const HPMDataHistoryTaskProxyDeleted **_pData	// [out] Pointer to a pointer of a @{HPMDataHistoryTaskProxyDeleted} object, representing the returned data.
																									);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMTaskTimeZones}.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMTaskTimeZones}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMTaskTimeZones												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMTaskTimeZones)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMTaskTimeZones **_pData			// [out] Pointer to a pointer of a @{HPMTaskTimeZones} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMChatMessage}.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMChatMessage}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMChatMessage												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMChatMessage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMChatMessage **_pData			// [out] Pointer to a pointer of a @{HPMChatMessage} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMProjectCustomColumns}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMProjectCustomColumns}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMProjectCustomColumns										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMProjectCustomColumns)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																								const HPMProjectCustomColumns **_pData	// [out] Pointer to a pointer of a @{HPMProjectCustomColumns} object, representing the returned data.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMProjectCustomColumnsColumn}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMProjectCustomColumns}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMProjectCustomColumnsColumn									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMProjectCustomColumnsColumn)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData,			// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMProjectCustomColumnsColumn **_pData	// [out] Pointer to a pointer of a @{HPMProjectCustomColumnsColumn} object, representing the returned data.
																								 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMProjectWorkflowSettings}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMProjectWorkflowSettings}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMProjectWorkflowSettings									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMProjectWorkflowSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																									const HPMVariantData *_pVariantData,		// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																									const HPMProjectWorkflowSettings **_pData	// [out] Pointer to a pointer of a @{HPMProjectWorkflowSettings} object, representing the returned data.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMHolidays}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMHolidays}																|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMHolidays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMHolidays)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					const HPMHolidays **_pData				// [out] Pointer to a pointer of a @{HPMHolidays} object, representing the returned data.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMWorkingDays}.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMWorkingDays}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMWorkingDays												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMWorkingDays)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMWorkingDays **_pData			// [out] Pointer to a pointer of a @{HPMWorkingDays} object, representing the returned data.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMCustomWorkingDays}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMCustomWorkingDays}														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMCustomWorkingDays											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMCustomWorkingDays)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					 const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					 const HPMCustomWorkingDays **_pData	// [out] Pointer to a pointer of a @{HPMCustomWorkingDays} object, representing the returned data.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMWorkingHours}.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMWorkingHours}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMWorkingHours												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMWorkingHours)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																						const HPMWorkingHours **_pData			// [out] Pointer to a pointer of a @{HPMWorkingHours} object, representing the returned data.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMCustomWorkingHours}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMCustomWorkingHours}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMCustomWorkingHours											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMCustomWorkingHours)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					 const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																					 const HPMCustomWorkingHours **_pData			// [out] Pointer to a pointer of a @{HPMCustomWorkingHours} object, representing the returned data.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get a data history entry as @{HPMProjectDefaultColumns}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMProjectDefaultColumns}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantDecode_HPMProjectDefaultColumns										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantDecode_HPMProjectDefaultColumns)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								const HPMVariantData *_pVariantData,	// [in] Pointer to the variant data to decode. See @{HPMVariantData}.
																								const HPMProjectDefaultColumns **_pData	// [out] Pointer to a pointer of a @{HPMProjectDefaultColumns} object, representing the returned data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMInt32} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMInt32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMInt32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMInt32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMInt32 _Data,							// [in] The data to encode as a variant.
																				const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMUInt32} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUInt32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMUInt32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMUInt32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUInt32 _Data,						// [in] The data to encode as a variant.
																					const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMInt64} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMInt64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMInt64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMInt64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMInt64 _Data,							// [in] The data to encode as a variant.
																				const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMUInt64} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUInt64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMUInt64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMUInt64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUInt64 _Data,						// [in] The data to encode as a variant.
																					const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFP32} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMFP32}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMFP32														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMFP32)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMFP32 _Data,							// [in] The data to encode as a variant.
																				const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFP64} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMFP64}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMFP64														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMFP64)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMFP64 _Data,							// [in] The data to encode as a variant.
																				const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMUniqueID} as a variant.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{HPMUniqueID}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMUniqueID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMUniqueID)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _Data,						// [in] The data to encode as a variant.
																					const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMString} as a variant.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData}, @{HPMString}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMString														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMString)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pData,					// [in] The string to encode as a variant.
																					const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																				);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMUntranslatedString} as a variant.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMVariantData},						|
|						@{HPMUntranslatedString}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_HPMUntranslatedString											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_HPMUntranslatedString)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								const HPMUntranslatedString *_pData,	// [in] The untranslated string to encode as a variant.
																								const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																							);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes a @{EHPMTaskStatus} as a variant.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVariantData}, @{EHPMTaskStatus}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VariantEncode_EHPMTaskStatus												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVariantEncode_EHPMTaskStatus)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _Data,							// [in,type=EHPMTaskStatus] The data to encode as a variant. Can be any of the statuses in @{EHPMTaskStatus}.
																						const HPMVariantData **_pVariantData 	// [out] Pointer to a pointer of a @{HPMVariantData} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeText}.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeText}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeText								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeText)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaData *_pCriteriaData, 	// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																											const HPMFindCriteriaTypeText **_pData		// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeText} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeInteger}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeInteger}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeInteger)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaData *_pCriteriaData, 		// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																											const HPMFindCriteriaTypeInteger **_pData		// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeInteger} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeFloat}.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeFloat}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeFloat)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaData *_pCriteriaData, 		// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																											const HPMFindCriteriaTypeFloat **_pData			// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeFloat} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeGeneralCondition}.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeGeneralCondition}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition					|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaData *_pCriteriaData, 			// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																											const HPMFindCriteriaTypeGeneralCondition **_pData	// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeGeneralCondition} object, representing the returned data.
																											);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeDate}.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeDate}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeDate								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDate)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																										const HPMFindCriteriaData *_pCriteriaData, 	// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																										const HPMFindCriteriaTypeDate **_pData		// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeDate} object, representing the returned data.
																									);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeDroplist}.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeDroplist}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaData *_pCriteriaData, 		// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																											const HPMFindCriteriaTypeDroplist **_pData		// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeDroplist} object, representing the returned data.
																											);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets find criteria as @{HPMFindCriteriaTypeMultiSelectDroplist}.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}. If the data cannot be converted	|
|						to the requested format @{EHPMError}_ConversionNotSupported is returned.	|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeMultiSelectDroplist}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist				|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																														const HPMFindCriteriaData *_pCriteriaData, 					// [in] Pointer to the criteria data to decode. See @{HPMFindCriteriaData}.
																														const HPMFindCriteriaTypeMultiSelectDroplist **_pData		// [out] Pointer to a pointer of a @{HPMFindCriteriaTypeMultiSelectDroplist} object, representing the returned data.
																													);	

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeText} as criteria data.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeText}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeText								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeText)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaTypeText *_pData,			// [in] The @{HPMFindCriteriaTypeText} object to encode as criteria data.
																											const HPMFindCriteriaData **_pCriteriaData 		// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeInteger} as criteria data.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeInteger}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeInteger)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaTypeInteger *_pData,	// [in] The @{HPMFindCriteriaTypeInteger} object to encode as criteria data.
																											const HPMFindCriteriaData **_pCriteriaData 	// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeFloat} as criteria data.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeFloat}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeFloat)(void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																										const HPMFindCriteriaTypeFloat *_pData,		// [in] The @{HPMFindCriteriaTypeFloat} object to encode as criteria data.
																										const HPMFindCriteriaData **_pCriteriaData 	// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeGeneralCondition} as criteria data.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeGeneralCondition}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition					|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaTypeGeneralCondition *_pData,	// [in] The @{HPMFindCriteriaTypeGeneralCondition} object to encode as criteria data.
																											const HPMFindCriteriaData **_pCriteriaData 			// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																											);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeDate} as criteria data.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeDate}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeDate								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDate)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																										const HPMFindCriteriaTypeDate *_pData,		// [in] The @{HPMFindCriteriaTypeDate} object to encode as criteria data.
																										const HPMFindCriteriaData **_pCriteriaData 	// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																									);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeDroplist} as criteria data.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeDroplist}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																											const HPMFindCriteriaTypeDroplist *_pData,	// [in] The @{HPMFindCriteriaTypeDroplist} object to encode as criteria data.
																											const HPMFindCriteriaData **_pCriteriaData 	// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Encodes @{HPMFindCriteriaTypeMultiSelectDroplist} criteria data.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindCriteriaData},					|
|						@{HPMFindCriteriaTypeMultiSelectDroplist}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist				|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																														const HPMFindCriteriaTypeMultiSelectDroplist *_pData,	// [in] The @{HPMFindCriteriaTypeMultiSelectDroplist} object to encode as criteria data.
																														const HPMFindCriteriaData **_pCriteriaData 				// [out] Pointer to a pointer of a @{HPMFindCriteriaData} object, representing the returned data.
																													);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers communication channel.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			All packets sent by SDK clients to the named channel will be forwarded to	|
|						this SDK session, until this session unregisters the channel (or terminates)|
|						or some other SDK client registers the same channel name. If the caller		|
|						passes in a pointer to channel data then that data becomes the Channel		|
|						Data associated with the channel and can be retrieved using					|
|						@{CommunicationChannelEnum}.												|
|																									|
|						If registering the channel fails, a											|
|						@{EHPMChangeCallbackOperation_CommunicationChannelRegisterFailed} callback	|
|						results.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{CommunicationChannelUnregister},						|
|						@{CommunicationChannelEnum}, @{EHPMChannelFlag}.							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CommunicationChannelRegister												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCommunicationChannelRegister)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pChannelName,						// [in] The name to uniquely identify the communication channel.
																						HPMUInt32 _Flags,									// [in,type=EHPMChannelFlag] Settings for the channel.  Can be any combination of @{EHPMChannelFlag}.
																						const HPMCommunicationChannelData *_pChannelData,	// [in] The pre-authentication channel data for the channel.
																						const HPMChar* _pDescription						// [in] A description of the channel's database's domain, for example the name of the organization or department owning it.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unregisters a previously registered communication channel.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Packets sent by SDK clients to the named channel will no longer be			|
|						be forwared to this session.												|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{CommunicationChannelRegister}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CommunicationChannelUnregister												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCommunicationChannelUnregister)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pChannelName		// [in] The name uniquely identifying the communication channel.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Retrieves the names and properties of channels registered at the SDK		|
|						session's server at the start of the login sequence.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Channel data is sent before													|
|						the login authentication process completes and is therefore transmitted		|
|						unencrypted without protection against tampering by intruders.				|
|						It should therefore be decoded and interpreted with the utmost care.		|
|						Note that channel names are not unique, while the combination of a			|
|						channel name and its owner's session ID is.									|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{CommunicationChannelRegister},						|
|						@{HPMCommunicationChannelEnum}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CommunicationChannelEnum													|
\*_________________________________________________________________________________________________*/
typedef HPMError  (DHPMSdkCallingConvention *HPMFunctionCommunicationChannelEnum)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																				  const HPMChar* _pChannelName,					// [in] The name of the channel(s) to return, or NULL or the empty string for all channels.
																				  const HPMCommunicationChannelEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMCommunicationChannelEnum} object, representing the returned data.
																				  );


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sends a packet to a communication channel.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The packet can be sent either to the SDK client session that currently has  |
|                       the channel registered or a specific session that had previously sent a		|
|						packet to the channel.														|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{RegisterChangeCallback}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						CommunicationChannelSendPacket												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionCommunicationChannelSendPacket)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pChannelName,					// [in] A name uniquely identifying the communication channel on which the packet should be sent.
																						HPMUInt64 _SessionID,							// [in] The identifier of the SDK client session to which the packet should be sent. Identifier 0 sends it to the channel's current owner, that is: the session that last registered the channel.
																						const HPMCommunicationChannelPacket *_pPacket	// [in] The packet to send to the communication channel.
																						);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the Hansoft URL.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}, @{EHPMError}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetHansoftURL															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetHansoftURL)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			const HPMChar *_pURLSuffix,			// [in] A suffix that will be added to the constructed URL. Could e.g. be a task id.
																			const HPMString **_pData			// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the type of a @{HPMFindCriteriaData}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned type determines which of the CriteriaDataDecode_* functions	|
|						should be used.																|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMFindCriteriaData}, @{EHPMFindCriteriaDataType}.	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetFindCriteriaDataTypeFromData											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetFindCriteriaDataTypeFromData)(void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																							const HPMFindCriteriaData *_pCriteriaData,	// [in] The criteria data to check the type for.
																							HPMInt32 *_pCriteriaDataType				// [out,type=EHPMFindCriteriaDataType] Pointer to a variable that receive the criteria data type. Will be one of @{EHPMFindCriteriaDataType}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the type of a @{HPMColumn}.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned type determines which of the CriteriaDataEncode_* functions	|
|						should be used.																|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMFindCriteriaData}, @{EHPMFindCriteriaDataType}.	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetFindCriteriaDataTypeFromColumn										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetFindCriteriaDataTypeFromColumn)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																								const HPMColumn *_pColumn,					// [in] The column to check the type for.
																								HPMInt32 *_pCriteriaDataType				// [out,type=EHPMFindCriteriaDataType] Pointer to a variable that receive the criteria data type. Will be one of @{EHPMFindCriteriaDataType}.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a text string into a report.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMReport}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilConvertFindStringToReport												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilConvertFindStringToReport)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pFindString,		// [in] The find string that will be converted into a report.
																						HPMUniqueID _ProjectID,				// [in] The unique identifier of the project to create the report in. 
																						HPMUInt32 _FindViewType,			// [in,type=EHPMReportViewType] The type that specifies what kind of search will be done. Can be one of @{EHPMReportViewType}. Note that the QA view type only can be used in a QA project and that the global types do not need a project id.
																						const HPMReport **_pReport			// [out] Pointer to a pointer of a @{HPMReport} object, representing the returned data. 
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a report to a text string.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMReport}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilConvertReportToFindString												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilConvertReportToFindString)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						const HPMReport *_pReport,			// [in] The report to convert to a fins string.
																						HPMUniqueID _ProjectID,				// [in] The unique identifier of the project the report was created in. 
																						HPMUInt32 _FindViewType,			// [in,type=EHPMReportViewType] The type that specifies what kind of search will be done. Can be one of @{EHPMReportViewType}. Note that the QA view type only can be used in a QA project and that the global types do not need a project id.
																						const HPMString **_pFindString		// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data. 
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the header string for a colum											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMReport}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetColumnName															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetColumnName)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																			HPMUInt32 _ColumnType,							// [in,type=EHPMProjectDefaultColumn] The type of the column to get the name for. Can be one of @{EHPMProjectDefaultColumn}.
																			const HPMUntranslatedString **_pColumnName		// [out] Pointer to a pointer of a @{HPMUntranslatedString} object, representing the returned data. 
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Prepares a find context to be used @{TaskFind} and							|
|						@{TaskRefUtilIsInFindContext}.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						To use a @{HPMReport} as input you can convert the report to a string with	|
|						@{UtilConvertReportToFindString}.											|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{TaskFind},								|
|						@{TaskRefUtilIsInFindContext}, @{HPMFindContext}, @{HPMFindContextData}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilPrepareFindContext														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilPrepareFindContext)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				const HPMChar *_pFindString,		// [in] The find string to create a find context for. This string uses the same syntax as the find in the Hansoft client.
																				HPMUniqueID _ProjectID,				// [in] The unique identifier of project to search in. If set to -1 the find will be global.
																				HPMUInt32 _FindViewType,			// [in,type=EHPMReportViewType] The type that specifies what kind of search will be done. Can be one of @{EHPMReportViewType}. Note that the QA view types only can be used in a QA project and that the global types do not need a project id.
																				const HPMFindContext *_pFindContext,// [in] The find context that contain options for the resulting find context.
																				const HPMFindContextData **_pData	// [out] Pointer to a pointer of a @{HPMFindContextData} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Updates a prepared find context with a new find string.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMFindContextData}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilUpdateFindContext														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilUpdateFindContext)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMChar *_pFindString,			// [in]	The new find string.		
																				const HPMFindContextData *_pFindContext	// [in] The find context to update.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the description of a column.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMColumnDescription}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetColumnDescription													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetColumnDescription)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																					const HPMColumn *_pColumn,							// [in] The column to get the type for.
																					const HPMColumnDescription **_pColumnDescription	// [out] Pointer to a pointer of a @{HPMColumnDescription} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a column to a taskfield.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMColumn}, @{HPMTaskField}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilColumnToTaskField														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilColumnToTaskField)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				const HPMColumn *_pColumn,			// [in] The column to to convert to a taskfield.
																				const HPMTaskField **_pTaskField	// [out] Pointer to a pointer of a @{HPMTaskField} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a taskfield to a column.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMColumn}, @{HPMTaskField}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilTaskFieldToColumn														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilTaskFieldToColumn)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				const HPMTaskField *_pTaskField,	// [in] The task field to convert to a column.
																				const HPMColumn **_pColumn			// [out] Pointer to a pointer of a @{HPMColumn} object, representing the returned data.
																			);	

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the formatted string version of data in a column.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{EHPMProjectDefaultColumn}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetColumnDataItemFormatted												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetColumnDataItemFormatted)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique id of the project to get formatted column data item for. Only used if _ColumnID is @{EHPMProjectDefaultColumn}_BugStatus, @{EHPMProjectDefaultColumn}_MilestoneTag or @{EHPMProjectDefaultColumn}_CommittedToSprint.
																						HPMUInt32 _ColumnID,								// [in,type=EHPMProjectDefaultColumn] The column id of the column. Can be one of @{EHPMProjectDefaultColumn}.
																						HPMUInt32 _Data,									// [in] The data in the column. The value depends on the type of _ColumnID.
																						const HPMUntranslatedString **_pColumnFormatted		// [out] Pointer to a pointer of a @{HPMUntranslatedString} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a column is read only.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilIsColumnReadOnly														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilIsColumnReadOnly)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUInt32 _ColumnID,		// [in,type=EHPMProjectDefaultColumn] The column id of the column. Can be one of @{EHPMProjectDefaultColumn}.
																				HPMInt32 *_pReturn			// [out,type=bool] Returns 1 if the column is read only, 0 otherwise.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets all the data values for a @{EHPMProjectDefaultColumn} that has the		|
|						the type @{EHPMFindCriteriaDataType}_List.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{EHPMProjectDefaultColumn},				|
|						@{EHPMFindCriteriaDataType}, @{HPMColumnData},								|
|						@{UtilGetColumnDataItemFormatted}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetColumnData															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetColumnData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,					// [in] The unique id of the project to get column data for. Only used if _ColumnID is @{EHPMProjectDefaultColumn}_BugStatus, @{EHPMProjectDefaultColumn}_MilestoneTag or @{EHPMProjectDefaultColumn}_CommittedToSprint.
																			HPMUInt32 _ColumnID,					// [in,type=EHPMProjectDefaultColumn] The column id of the column. Can be one of @{EHPMProjectDefaultColumn}.
																			const HPMColumnData **_pColumnData		// [out] Pointer to a pointer of a @{HPMColumnData} object, representing the returned data.
																		);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the timeout period between the time a resource was deleted and the		|
|						time a resource can be undeleted again.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetDeletedDate}, @{ResourceGetUndeletedDate}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetResourceUndeleteTimeOut												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetResourceUndeleteTimeOut)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						HPMUInt64 *_pUndeletedDate	// [out] Pointer to a variable representing the returned data. The timeout period is given in microseconds.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the name of a workflow step.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions},	@{ObjectFree}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowObjectName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowObjectName)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																					HPMInt32 _WorkflowID,						// [in] The identifier of the workflow to get in the project. For QA only 0 is valid here as QA only have one workflow.
																					HPMInt32 _ObjectID,							// [in] The ojbect id of the workflow status to get name for.
																					const HPMUntranslatedString **_pObjectName	// [out] Pointer to a pointer of a @{HPMUntranslatedString} object, representing the returned data. The name of the workflow object.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the ID of a workflow step.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowObjectIDFromName												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowObjectIDFromName)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,			// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																							HPMInt32 _WorkflowID,			// [in] The identifier of the workflow to get in the project. For QA only 0 is valid here as QA only have one workflow.
																							const HPMLanguage *_pLanguage,	// [in] The language that the _pName string is in.
																							const HPMChar *_pName,			// [in] The name of the object to get the ID for.
																							HPMInt32 *_pObjectID			// [out] Pointer to a variable representing the returned data. The returned object ID. -1 represents a failure.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the name of a workflow.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions},	@{ObjectFree}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowName															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowName)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,				// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																				HPMInt32 _WorkflowID,				// [in] The identifier of the workflow to get in the project. For QA only 0 is valid here as QA only have one workflow.
																				const HPMString **_pWorkflowName	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data. The name of the workflow object.
																			);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a comment exists.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilTaskCommentExists														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilTaskCommentExists)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,		// [in] The unique id of the task to check if a comment exists on.
																				HPMInt32 _PostID,			// [in] The post id of the comment to check existance for.
																				HPMInt32 *_pExists			// [out] Set to 1 if the comment exists.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a global report exists.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGlobalReportExists														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGlobalReportExists)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,		// [in] The resource ID to check report existance for.
																				HPMUniqueID _ReportID,			// [in] The report ID to check report existance for.
																				HPMInt32 *_pExists				// [out] Set to 1 if the report exists.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a project report exists.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilProjectReportExists														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilProjectReportExists)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,		// [in] The project ID to check report existance for.
																				HPMUniqueID _ResourceID,	// [in] The resource ID to check report existance for.
																				HPMUniqueID _ReportID,		// [in] The report ID to check report existance for.
																				HPMInt32 *_pExists			// [out] Set to 1 if the report exists.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a workflow object exists.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilWorkflowObjectExists													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilWorkflowObjectExists)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,		// [in] The project ID to check workflow object existance for.
																				HPMInt32 _WorkflowID,		// [in] The workflow ID to check workflow object existance for.
																				HPMInt32 _ObjectID,			// [in] The workflow object ID to check workflow object existance for.
																				HPMInt32 *_pExists			// [out] Set to 1 if the workflow object exists.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a workflow exists.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilWorkflowExists															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilWorkflowExists)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,		// [in] The project ID to check workflow existance for.
																				HPMInt32 _WorkflowID,		// [in] The worklow ID to check workflow existance for.
																				HPMInt32 *_pExists			// [out] Set to 1 if the workflow exists.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the ID of a workflow name.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowIDFromName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowIDFromName)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,			// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																					const HPMChar *_pName,			// [in] The name of the workflow to get the ID for.
																					HPMUInt32 _WorkflowReturnType,	// [in,type=EHPMWorkflowReturnType] The type of the workflow matching the workflow name. Can be one of @{EHPMWorkflowReturnType}.
																					HPMInt32 *_pWorkflowID			// [out] Pointer to a variable representing the returned data. The returned object ID. -1 represents a failure.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the ID of a workflow.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowType															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowType)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,				// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																				HPMInt32 _WorkflowID,				// [in] The identifier of the workflow to get in the project. For QA only 0 is valid here as QA only have one workflow.
																				HPMInt32 *_pWorkflowType			// [out,type=EHPMWorkflowType] Pointer to a variable that receive the workflow type. Will be one of @{EHPMWorkflowType}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the container flags of a workflow.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						UtilGetWorkflowContainerFlags												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionUtilGetWorkflowContainerFlags)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,				// [in] The unique id of the project to get the workflow from. If getting the QA workflow this needs to be the QA project, otherwise the main project.
																						HPMInt32 _WorkflowID,				// [in] The identifier of the workflow to get in the project. For QA only 0 is valid here as QA only have one workflow.
																						HPMUInt32 *_pFlags					// [out,type=EHPMProjectWorkflowContainerFlag] Pointer to a variable that receive the workflow container flags. Will be one of @{EHPMProjectWorkflowContainerFlag}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks the integrity of the heap in debug mode.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If an error is found in the heap a debug break will be issued.				|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						DebugCheckHeap																|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionDebugCheckHeap)(	void *_pSession		// [in] A connected session. See @{SessionOpen}. 
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the activity id for a timesheet row.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetActivityID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetActivityID)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _DayID,		// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																					HPMUInt32 _RowID,		// [in] The identifier of the timesheet row.
																					HPMInt32 _ActivityID	// [in] The activity id to set on the timesheet row.
																				); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the project id for a timesheet row.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetProjectID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetProjectID)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _DayID,		// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																					HPMUInt32 _RowID,		// [in] The identifier of the timesheet row.
																					HPMUniqueID _ProjectID	// [in] The unique project id to set on the timesheet row.
																				); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the task id for a timesheet row.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetTaskID														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetTaskID)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _DayID,		// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																				HPMUInt32 _RowID,		// [in] The identifier of the timesheet row.
																				HPMUniqueID _TaskID		// [in] The unique task id to set on the timesheet row.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the started time for a timesheet row.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetStartedTime													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetStartedTime)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _DayID,					// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																					HPMUInt32 _RowID,					// [in] The identifier of the timesheet row.
																					HPMUInt32 _StartedTime				// [in] The started time to set on the timesheet row. Expressed as seconds from midnight. The max value is 86340.
																					); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the duration time for a timesheet row.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetDurationTime													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetDurationTime)(void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _DayID,					// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																					HPMUInt32 _RowID,					// [in] The identifier of the timesheet row.
																					HPMUInt32 _DurationTime				// [in] The duration time to set on the timesheet row. Expressed as seconds. The max value is 86340.
																					); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the comment for a timesheet row.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}, @{HPMString}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowSetComment														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowSetComment)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _DayID,			// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																				HPMUInt32 _RowID,			// [in] The identifier of the timesheet row.
																				const HPMChar *_pComment	// [in] The comment to set on the timesheet row.
																			); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a timesheet row.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGetTimesheetDay}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetRowDelete															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetRowDelete)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _DayID,		// [in] The unique identifier of timesheet day. See @{ResourceGetTimesheetDay}.
																			HPMUInt32 _RowID		// [in] The identifier of the timesheet row to be deleted.
																			); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a timesheet period report.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}imesheetGetDateRangeResponse					|
|						callback.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree},											|
|						@{HPMChangeCallbackData_TimesheetGetDateRangeResponse}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TimesheetGetDateRange														|
|																									|
|	Managed:			CanBlock																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTimesheetGetDateRange)(	void *_pSession,														// [in] A connected session. See @{SessionOpen}.
																				HPMInt32 _Type,															// [in,type=EHPMTimesheetRequestType] The type to request timesheets for. Can be one of @{EHPMTimesheetRequestType}.
																				const HPMUniqueEnum *_pIDs,												// [in] The resource to get the timesheet report for for.
																				HPMUInt64 _StartDate,													// [in] The day to get the timesheet report for. Expressed as the number of microseconds since 1970 UTC.
																				HPMUInt64 _FinishDate,													// [in] The day to get the timesheet report for. Expressed as the number of microseconds since 1970 UTC.
																				const HPMChangeCallbackData_TimesheetGetDateRangeResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_TimesheetGetDateRangeResponse} object, representing the returned data. This function will block even in non-blocking mode if this parameter is not NULL.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the connection lost timeout value. The session will return a 			|
|						connection lost error if it cannot use the session connection during the	|
|						specified timeout time.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionSetConnectionLostTimeout												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionSetConnectionLostTimeout)(void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						HPMFP64 _Timeout					// [in] The connection lost timeout value in seconds.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a more detailed disconnect reason after a @{EHPMError}_ConnectionLost.	|
|						is @{EHPMProjectCustomColumnsColumnType}_DateTime.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						SessionGetDisconnectReason													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionSessionGetDisconnectReason)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																					const HPMString **_pDisconnectReason					// [out] Pointer to a pointer of a @{HPMString} object, containing the disconnect reason.
																					);
#endif
