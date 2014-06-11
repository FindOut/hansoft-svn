
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK projects										|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/4 - Projects										|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags to specify for @{HPMProjectSettings}::m_Flags							|
|																									|
|	See Also:			@{HPMProjectSettings}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectSettingsFlag
{
	EHPMProjectSettingsFlag_None = 0,
	EHPMProjectSettingsFlag_SprintMembersCanBreakdownBacklogItemsIntoTasks = 1 << 1,				// Members of this project can break down backlog items into tasks in their my work view and in the project view.
	EHPMProjectSettingsFlag_SprintMembersCanBreakdownBacklogItemsIntoTasksOnlyIfAssigned = 1 << 2,	// Members of this project can break down backlog items into tasks in their my work view and in the project view only if they are assigned to the task.
	EHPMProjectSettingsFlag_WorkflowCustomized = 1 << 3,											// The workflow has been customized. Set this flag if the workflow has been customized. This will prevent the workflow from being overwritten with the default workflow.
	EHPMProjectSettingsFlag_CreatedBacklogItemsAreUserStoriesByDefault = 1 << 4,					// Newly created backlog items are flagged as user stories by default for project when this flag is set.
	EHPMProjectSettingsFlag_EverybodyCanCommentOnAllItems = 1 << 5,									// All members of project can comment on all items in the project.
	EHPMProjectSettingsFlag_AutoRefreshQAView = 1 << 6,												// The QA view should be automatically refreshed every minute.
	EHPMProjectSettingsFlag_DisplayItemsInQAViewWithoutQuery = 1 << 7,								// If no query options are set for the QA View, display all bugs.
	EHPMProjectSettingsFlag_EnableWorkflowsInMainProjectAndBacklog = 1 << 8,						// Enables workflow on tasks in the main project and and backlog in addition to QA that always have this enabled.
	EHPMProjectSettingsFlag_LetResourcesChangeAgilePriorityInMyWork = 1 << 9,						// Resources can change sprint priority in my work. See @{EHPMTaskAgilePriorityCategory}.
	EHPMProjectSettingsFlag_DisplayIdealEstimateAsHours = 1 << 10,									// If set all ideal estimates will be displayed as hours, otherwise days.
};




/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{HPMProjectCustomColumnsColumn}::m_Flags					|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectCustomColumnsColumnFlag
{
	EHPMProjectCustomColumnsColumnFlag_None = 0,
	EHPMProjectCustomColumnsColumnFlag_DefaultDateColumnsToNow = 1 << 0,			// When creating new tasks and this flag is set on a date or date time custom column, the value for the custom column will be now
	EHPMProjectCustomColumnsColumnFlag_DontIntheritData = 1 << 1,
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Access rights used for @{HPMProjectCustomColumnsColumn}::m_AccessRights		|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectCustomColumnsColumnAccessRights
{
	EHPMProjectCustomColumnsColumnAccessRights_NewVersionOfSDKRequired,		// The access right type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectCustomColumnsColumnAccessRights_AllProjectMembers,			// All project members have access to the custom column.
	EHPMProjectCustomColumnsColumnAccessRights_SubAndMainProjectManagers,	// Project managers and delegated resources have access to the column
	EHPMProjectCustomColumnsColumnAccessRights_MainProjectManagers,			// Main project managers have access to the column
	EHPMProjectCustomColumnsColumnAccessRights_ReadOnly,					// No resources have access to change this value. Only the SDK can change it.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Column types used for @{HPMProjectCustomColumnsColumn}::m_Type				|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectCustomColumnsColumnType
{
	EHPMProjectCustomColumnsColumnType_NewVersionOfSDKRequired,	// The custom column type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectCustomColumnsColumnType_Text,					// Text column type.
	EHPMProjectCustomColumnsColumnType_Hyperlink,				// Hyper link column type.
	EHPMProjectCustomColumnsColumnType_DropList,				// Single selection drop list column type.
	EHPMProjectCustomColumnsColumnType_IntegerNumber,			// Integer number column type.
	EHPMProjectCustomColumnsColumnType_FloatNumber,				// Float number column type.
	EHPMProjectCustomColumnsColumnType_DateTime,				// Date time column type. Custom data of this type will be returned in the Hansoft internal format. Use @{UtilDecodeCustomColumnDateTimeValue} and @{UtilEncodeCustomColumnDateTimeValue} to get/set the number of micro seconds since 1970 UTC.
	EHPMProjectCustomColumnsColumnType_MultiLineText,			// Multi line text column type.
	EHPMProjectCustomColumnsColumnType_Resources,				// Resources column type. Custom data of this type will be returned as a comma separated list of resource identifiers. Use @{UtilDecodeCustomColumnResourcesValue} and @{UtilEncodeCustomColumnResourcesValue}.
	EHPMProjectCustomColumnsColumnType_AccumulatedTime,			// Accumulated time column type. The data is set as a string representation of an hours based floating point value with three decimals. One hour is set as "1.000"
	EHPMProjectCustomColumnsColumnType_MultiSelectionDropList,	// Multi selection drop list column type.
	EHPMProjectCustomColumnsColumnType_DateTimeWithTime,		// Date time column type that displays time as well as date in the GUI. Custom data of this type will be returned in the Hansoft internal format. Use @{UtilDecodeCustomColumnDateTimeValue} and @{UtilEncodeCustomColumnDateTimeValue} to get/set the number of micro seconds since 1970 UTC.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to specify default columns in @{HPMProjectDefaultColumns} and			|
|						@{HPMProjectWorkflowRequiredField}.											|
|																									|
|	See Also:			@{HPMProjectDefaultColumns}, @{HPMProjectWorkflowRequiredField}				|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectDefaultColumn
{
	EHPMProjectDefaultColumn_NewVersionOfSDKRequired,	// The default column did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.

	EHPMProjectDefaultColumn_Risk,						// Risk column.
	EHPMProjectDefaultColumn_PriorityTag,				// Priority tag column.
	EHPMProjectDefaultColumn_EstimatedIdealDays,		// Estimated ideal days column.
	EHPMProjectDefaultColumn_BacklogCategory,			// Backlog category column.
	EHPMProjectDefaultColumn_ComplexityPoints,			// Complexity points column.
	EHPMProjectDefaultColumn_ItemStatus,				// Item status column.
	EHPMProjectDefaultColumn_MilestoneTag,				// Milestone tag column.
	EHPMProjectDefaultColumn_Confidence,				// Confidence column.
	EHPMProjectDefaultColumn_Hyperlink,					// Hyper link column.
	EHPMProjectDefaultColumn_UserTag,					// User tag column.
	EHPMProjectDefaultColumn_OriginallyCreatedBy,		// Originally created/reported by column.
	EHPMProjectDefaultColumn_ID,						// Task or bug ID column that together with the project ID can uniquely identify a task.
	EHPMProjectDefaultColumn_BugStatus,					// Bug status column.
	EHPMProjectDefaultColumn_LastCommented,				// Last commented column.
	EHPMProjectDefaultColumn_LastUpdated,				// Last updated column.
	EHPMProjectDefaultColumn_Severity,					// Severity column.
	EHPMProjectDefaultColumn_LinkedTo,					// Linked to column.
	EHPMProjectDefaultColumn_DatabaseID,				// Database id column.
	EHPMProjectDefaultColumn_WorkPriority,				// Work priority column.

	EHPMProjectDefaultColumn_ItemName,					// Item name column.
	EHPMProjectDefaultColumn_Start,						// Start column.
	EHPMProjectDefaultColumn_Finish,					// Finish column.
	EHPMProjectDefaultColumn_Duration,					// Duration column.
	EHPMProjectDefaultColumn_AssignedTo,				// Assigned to column.
	EHPMProjectDefaultColumn_BudgetedWork,				// Budgeted work column.
	EHPMProjectDefaultColumn_EarnedValue,				// Earned value column.
	EHPMProjectDefaultColumn_Predecessor,				// Predecessor column.
	EHPMProjectDefaultColumn_Successor,					// Successor column.
	EHPMProjectDefaultColumn_WorkRemaining,				// Work remaining column.
	EHPMProjectDefaultColumn_CommittedToSprint,			// Committed to sprint column.

	EHPMProjectDefaultColumn_DetailedDescription,		// Detailed description column.
	EHPMProjectDefaultColumn_StepsToReproduce,			// Steps to reproduce column.
	EHPMProjectDefaultColumn_Comments,					// Comments column.

	EHPMProjectDefaultColumn_SubProjectPath,			// Sub project path column.
	EHPMProjectDefaultColumn_CCCommentsTo,				// CC comments to column.
	EHPMProjectDefaultColumn_PipelineAndWorkflow,		// Pipeline and workflow column.
	EHPMProjectDefaultColumn_ItemType,					// Item type column.
	EHPMProjectDefaultColumn_IsOverdue,					// Is overdue column.
	EHPMProjectDefaultColumn_IsInProgress,				// Is in progress column.
	EHPMProjectDefaultColumn_IsIncomplete,				// Is incomplete column.
	EHPMProjectDefaultColumn_IsCompleted,				// Is Completed column.
	EHPMProjectDefaultColumn_IsNotStartedYet,			// Is not started yet column.
	EHPMProjectDefaultColumn_IsNotAssigned,				// Is not assigned column.
	EHPMProjectDefaultColumn_IsMilestoneOverdue,		// Is milestones overdue column.
	EHPMProjectDefaultColumn_IsOutOfOfficeTask,			// Is out of office task column.
	EHPMProjectDefaultColumn_UserStory,					// User story column.
	EHPMProjectDefaultColumn_IsAssignedToMe,			// Is assigned to me column.
	EHPMProjectDefaultColumn_IsUserStory,				// Is user story column.	
	EHPMProjectDefaultColumn_HasChildren,				// Has children column.
	EHPMProjectDefaultColumn_HasAssignment,				// Has assignment column.
	EHPMProjectDefaultColumn_Project,					// Project column.
	EHPMProjectDefaultColumn_LeafSubItems,				// Leaf sub items column.
	EHPMProjectDefaultColumn_SubItems,					// Sub items column.
	EHPMProjectDefaultColumn_ParentSubProjects,			// Parent sub projects column.
	EHPMProjectDefaultColumn_ImmediateSubItems,			// Immediate sub items column.
	EHPMProjectDefaultColumn_ImmediateParentSubProject,	// Immediate parent sub projects column.
	EHPMProjectDefaultColumn_SprintPriority,			// The sprint priority column.
	EHPMProjectDefaultColumn_BacklogPriority,			// The backlog priority column.
	EHPMProjectDefaultColumn_BugPriority,				// The bug priority column.
	EHPMProjectDefaultColumn_CanStartNow,				// Is task that can start now column.
	EHPMProjectDefaultColumn_IsOngoingWork,				// Is ongoing work column.
	EHPMProjectDefaultColumn_IsArchived,				// Is archived column.
	EHPMProjectDefaultColumn_IsDeleted,					// Is deleted column.
	EHPMProjectDefaultColumn_IsOnCriticalPath,			// Is on critical path column.
	EHPMProjectDefaultColumn_LastLoggedInReadComments,	// Last read comments column.
	EHPMProjectDefaultColumn_Status,					// Combined item status and workflow status column.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Project field identifier used in @{HPMDataHistoryEntry}::m_FieldID			|
|																									|
|	See Also:			@{HPMDataHistoryEntry}											 			|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectField
{
	EHPMProjectField_NewVersionOfSDKRequired,				// The project field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectField_CustomColumns,							// The custom columns of project.
	EHPMProjectField_WorkflowSettings,						// The workflow settings of project.
	EHPMProjectField_CalendarHolidays,						// The holidays set in project.
	EHPMProjectField_CalendarWorkingDays,					// The working days set in project.	
	EHPMProjectField_CalendarCustomWorkingDays,				// The custom working days set in project.
	EHPMProjectField_CalendarWorkingHours,					// The working hours set in project.
	EHPMProjectField_CalendarCustomWorkingHours,			// The custom working hours set in project.
	EHPMProjectField_Name,									// The name of project.
	EHPMProjectField_ArchivedStatus,						// The archived status of project.
	EHPMProjectField_ProjectMethod,							// The project method of project.
	EHPMProjectField_CompletionStyle,						// The completion style of project.
	EHPMProjectField_AgileTemplate,							// The agile template of project.
	EHPMProjectField_OldCustomColumn,						// Old custom column of project.
	EHPMProjectField_WorkflowsInMainProjectAndBacklog,		// The workflows enabled flag of project.
	EHPMProjectField_OldResource,							// Old resource member of project.
	EHPMProjectField_DefaultEditorMode,						// The default editor mode of project.
	EHPMProjectField_DefaultActivatedColumns,				// The default activated columns of project.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Default fields used to specify fields that are not columns in				|
|						@{HPMProjectWorkflowRequiredField}.											|
|																									|
|	See Also:			@{HPMProjectWorkflowRequiredField}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectDefaultField
{
	EHPMProjectDefaultField_NewVersionOfSDKRequired,	// The default column did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectDefaultField_Comment,					// Comment field.
	EHPMProjectDefaultField_DetailedDescription,		// Detailed description field.
	EHPMProjectDefaultField_StepsToReproduce,			// Steps to reproduce field.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags to specify for @{HPMProjectResourceProperties}::m_Flags				|
|																									|
|	See Also:			@{HPMProjectResourceProperties}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectResourceFlag
{
	EHPMProjectResourceFlag_None = 0,
	EHPMProjectResourceFlag_IsMainProjectManager = 1 << 0,		// The project resource is a main project manager for this project. Can not be combined with @{EHPMProjectResourceFlag}_LimitedVisibility.
	EHPMProjectResourceFlag_LimitedVisibility = 1 << 1,			// The project resource has limited visibility in this project. Can not be combined with @{EHPMProjectResourceFlag}_IsMainProjectManager.
	EHPMProjectResourceFlag_CanAccessProjectHistory = 1 << 2,	// The project resource can access the project history for this project.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Project methods used for @{HPMProjectProperties}::m_ProjectMethod			|
|																									|
|	See Also:			@{HPMProjectProperties}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectMethod
{
	EHPMProjectMethod_NewVersionOfSDKRequired,	// The project method did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectMethod_FixedDuration,			// Fixed duration planning method.
	EHPMProjectMethod_FixedWork,				// Fixed work planning method.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Completion styles used for @{HPMProjectProperties}::m_CompletionStyle and	|
|						@{ProjectGetCompletionStyle}												|
|																									|
|	See Also:			@{HPMProjectProperties}, @{ProjectGetCompletionStyle}						|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectTaskCompletionStyle
{
	EHPMProjectTaskCompletionStyle_NewVersionOfSDKRequired,	// The completion style did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectTaskCompletionStyle_Auto,					// The completion style is determined by the project method
	EHPMProjectTaskCompletionStyle_Binary,					// Binary completion style lets resources set tasks to be either done or not done.
	EHPMProjectTaskCompletionStyle_Percent,					// Percent completion style lets resources set the number of percent of a task is completed.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Default editor mode used for @{HPMProjectProperties}::m_DefaultEditorMode	|
|																									|
|	See Also:			@{HPMProjectProperties}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectDefaultEditorMode
{
	EHPMProjectDefaultEditorMode_NewVersionOfSDKRequired,	// The editor mode did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectDefaultEditorMode_TaskScheduling,			// Task scheduling is the default editor method.
	EHPMProjectDefaultEditorMode_Agile,						// Agile scheduling is the default editor method.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Agile template used for @{HPMProjectProperties}::m_AgileTemplate			|
|																									|
|	See Also:			@{HPMProjectProperties}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectAgileTemplate
{
	EHPMProjectAgileTemplate_NewVersionOfSDKRequired,	// The agile template did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMProjectAgileTemplate_SCRUM,						// SCRUM agile template.
	EHPMProjectAgileTemplate_XP,						// Extreme programming agile template.
	EHPMProjectAgileTemplate_Custom,					// Custom agile template.
	EHPMProjectAgileTemplate_Lean,						// Lean agile template.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow object type used for												|
|						@{HPMProjectWorkflowObject}::m_ObjectType									|
|																									|
|	See Also:			@{HPMProjectWorkflowObject}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowObjectType
{
	EHPMProjectWorkflowObjectType_NewVersionOfSDKRequired,	// The object type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this object type.
	EHPMProjectWorkflowObjectType_WorkflowStatus,			// Workflow status object type.
	EHPMProjectWorkflowObjectType_Transition,				// Transition object type.
	EHPMProjectWorkflowObjectType_EntryStatus,				// Entry status object type.
	EHPMProjectWorkflowObjectType_WorkflowReference,		// Workflow reference object type.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow object flag used for @{HPMProjectWorkflowObject}::m_Flags			|
|																									|
|	See Also:			@{HPMProjectWorkflowObject}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowObjectFlag
{
	EHPMProjectWorkflowObjectFlag_None = 0,
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetAssignedResourcesReassign = 1 << 1,									// Only valid when workflow object is a workflow status. When this flag is set resources assigned are allowed to reassign to other resources in the specific status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_RemoveResourcesWhenReachingThisStatus = 1 << 2,						// Only valid when workflow object is a workflow status. When this flag is set resources are unassigned when the specific status is reached.

	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetAssignedResourcesReassignToOriginalReporter = 1 << 3,				// Only valid when workflow object is a workflow status. When this flag is set resources assigned are allowed to reassign to the original reporter in the specific status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_AssignToOriginalReporterWhenReachingThisStatus = 1 << 4,				// Only valid when workflow object is a workflow status. When this flag is set the bug/task is assigned to the original reporter when reaching the specific status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_DontAllowNoResourcesAssigned = 1 << 5,									// Only valid when workflow object is a workflow status. When this flag is set it is not allowed to have no resources assigned in this specific status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_UnpublishedStatus = 1 << 6,											// Only valid when workflow object is a workflow status. When this flag is set the bug is unpublished in this specific status and will only show up on the bug list of the original reporter.
	EHPMProjectWorkflowObjectFlag_Transition_ResourcesCanEditAllFieldsThatMustBeSetForThisTransition = 1 << 7,			// Only valid when workflow object is a transition. When this flag is set resources that are able to go through a transition are also able to edit the columns that are required to be set by the transition.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_SetWorkRemainingToZeroWhenReachingThisWorkflowStatus = 1 << 8,			// Only valid when workflow object is a workflow status. When this flag is set the work remaining for an item is set to 0 when this status is reached.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_ActionsAreEnabledOnPreviousStatus = 1 << 9,							// Only valid when workflow object is a workflow status in QA. When this flag is set the selected actions are enabled on the previous status. 
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_ResourcesCanSelectWorkflowOnPipelineTask = 1 << 10,					// Only valid when workflow object is a workflow status. When this flag is set resources are able to select a workflow for a task generated from the pipeline.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_LetResourcesBreakdownPipelineTask = 1 << 11,							// Only valid when workflow object is a workflow status. When this flag is set resources are able to breakdown pipeline tasks into sub tasks.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_WorkflowOfChildrenIsSequential = 1 << 12,								// Only valid when workflow object is a workflow status. When this flag is set there are sequential workflows under this status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_AssignToResourcesAssignedInWorkflowStatus = 1 << 13,					// Only valid when workflow object is a workflow status. When this flag is set the bug/task is assigned to resources that where assigned in a specific status.
	EHPMProjectWorkflowObjectFlag_WorkflowStatus_HideInMyWork = 1 << 14													// Only valid when workflow object is a workflow status. When this flag is set the status is hidden in My work.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow container flag used for @{HPMProjectWorkflowSettings}::m_Flags		|
|																									|
|	See Also:			@{HPMProjectWorkflowObject}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowContainerFlag
{
	EHPMProjectWorkflowContainerFlag_None = 0,
	EHPMProjectWorkflowContainerFlag_PipelineTasksMustBeCompletedInSequentialOrder = 1 << 0,							// When this flag is set the pipeline tasks must be completed in a sequential order.
	EHPMProjectWorkflowContainerFlag_IsDeleted = 1 << 1,																// This workflow has been deleted.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		QA workflow connection site used for										|
|						@{HPMProjectWorkflowConnection}::m_ConnectionFrom and						|
|						@{HPMProjectWorkflowConnection}::m_ConnectionTo								|
|																									|
|	See Also:			@{HPMProjectWorkflowConnection}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowConnectionSite
{
	EHPMProjectWorkflowConnectionSite_NewVersionOfSDKRequired,		// The connection site did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this connection site.
	EHPMProjectWorkflowConnectionSite_Top,							// The connection is to/from the top connection site of the object box.
	EHPMProjectWorkflowConnectionSite_Bottom,						// The connection is to/from the bottom connection site of the object box.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		QA workflow required field type used for									|
|						@{HPMProjectWorkflowRequiredField}::m_Type.									|
|																									|
|	See Also:			@{HPMProjectWorkflowRequiredField}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowRequiredFieldType
{
	EHPMProjectWorkflowRequiredFieldType_NewVersionOfSDKRequired,	// The field type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this field type.
	EHPMProjectWorkflowRequiredFieldType_DefaultColumn,				// The specified field is one of the @{EHPMProjectDefaultColumn} enum.
	EHPMProjectWorkflowRequiredFieldType_DefaultField,				// The specified field is one of the @{EHPMProjectDefaultField} enum.
	EHPMProjectWorkflowRequiredFieldType_CustomColumn,				// The specified field is a custom column.
	EHPMProjectWorkflowRequiredFieldType_EnableAction,				// The specified field enables an action on a previous workflow object if set on a transition. The specified field is one of @{EHPMProjectDetailedAccessRuleFunctionType}.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Sprint prediction method used for											|
|						@{HPMProjectSettings}::m_SprintPredictionMethod.							|
|																									|
|	See Also:			@{HPMProjectSettings}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectSprintPredictionMethod
{
	EHPMProjectSprintPredictionMethod_NewVersionOfSDKRequired,	// The prediction method did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this prediction method.
	EHPMProjectSprintPredictionMethod_5Days_WeightedAverage,	// Five days weighted average.
	EHPMProjectSprintPredictionMethod_3Days_WeightedAverage,	// Three days weighted average.
	EHPMProjectSprintPredictionMethod_7Days_WeightedAverage,	// Seven days weighted average.
	EHPMProjectSprintPredictionMethod_10Days_WeightedAverage,	// Ten days weighted average.
	EHPMProjectSprintPredictionMethod_14Days_WeightedAverage,	// Fourteen days weighted average.
	EHPMProjectSprintPredictionMethod_NoPrediction,				// No prediction.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Wall settings flags used for 												|
|						@{HPMProjectWallSettings}::m_Flags											|
|																									|
|	See Also:			@{HPMProjectWallSettings}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWallSettingsFlags
{
	EHPMProjectWallSettingsFlags_None = 0,
	EHPMProjectWallSettingsFlags_ShowTaskDescription = 1 << 0,			// Show the description of the task on the wall.
	EHPMProjectWallSettingsFlags_ShowTaskUserStory = 1 << 1,			// Show the user story of the task on the wall.
	EHPMProjectWallSettingsFlags_ShowSubProjectPath = 1 << 2,			// Show the sub project path description of the task on the wall.
	EHPMProjectWallSettingsFlags_ShowTaskCommentText = 1 << 3,			// Show the comment text of the task on the wall.
	EHPMProjectWallSettingsFlags_ShowGroupEstimatedIdealDays = 1 << 4,	// Show the summed estimated ideal days of the group on the wall.
	EHPMProjectWallSettingsFlags_ShowGroupComplexityPoints = 1 << 5,	// Show the summed complexity points of the group on the wall
	EHPMProjectWallSettingsFlags_ShowGroupWorkRemaining = 1 << 6,		// Show the summed work remaining of the group on the wall.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Rule type used for															|
|						@{HPMProjectDetailedAccessRule}::m_RuleType									|
|																									|
|	See Also:			@{HPMProjectDetailedAccessRule}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectDetailedAccessRuleType
{
	EHPMProjectDetailedAccessRuleType_NewVersionOfSDKRequired,	// The rule type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this rule type.
	EHPMProjectDetailedAccessRuleType_GiveAccess,				// The rule gives access to resources.
	EHPMProjectDetailedAccessRuleType_RestrictAccess,			// The rule restricts access for resources.
	EHPMProjectDetailedAccessRuleType_Hide,						// The rule hides tasks for resources.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Access function type used for												|
|						@{HPMProjectDetailedAccessRuleFunction}::m_FunctionType						|
|																									|
|	See Also:			@{HPMProjectDetailedAccessRuleFunction}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectDetailedAccessRuleFunctionType
{
	EHPMProjectDetailedAccessRuleFunctionType_NewVersionOfSDKRequired,			// The function type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this function type.
	EHPMProjectDetailedAccessRuleFunctionType_DefalutColumn,					// Default column function type. See comments section of @{HPMProjectDetailedAccessRuleFunction}.
	EHPMProjectDetailedAccessRuleFunctionType_CustomColumn,						// Custom column function type. See comments section of @{HPMProjectDetailedAccessRuleFunction}.
	EHPMProjectDetailedAccessRuleFunctionType_TaskField,						// Task field function type. See comments section of @{HPMProjectDetailedAccessRuleFunction}.
	EHPMProjectDetailedAccessRuleFunctionType_ChangeAttachments,				// The function of adding/deleting/editing attachments is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_DeleteTask,						// The function of deleting tasks is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_CustomizeQAWorkflow,				// The function of customizing the QA workflow is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_ExportProjectData,				// The function of exporting project data is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_ImportProjectData,				// The function of importing project data is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_ChangeProjectColumnConfig,		// The function of changing the project column configuration is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_ChangeProjectEmailConfig,			// The function of changing the project email configuration is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_UseScreenshotTool,				// The function of using the screenshot tool is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_ShareReports,						// The function of sharing reports is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_OverrideWorkflow,					// The function of overriding a workflow is granted/restricted to/from resource.
	EHPMProjectDetailedAccessRuleFunctionType_EditOtherUsersReports,			// The function of editing other user's reports granted/restricted to/from resource.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow type used for														|
|						@{HPMProjectWorkflowSettings}::m_WorkflowType								|
|																									|
|	See Also:			@{HPMProjectWorkflowSettings}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMWorkflowType
{
	EHPMWorkflowType_NewVersionOfSDKRequired,		// The workflow type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this workflow type.
	EHPMWorkflowType_Workflow,						// The workflow is a normal linear workflow where only one step of the workflow can be active at once.
	EHPMWorkflowType_Pipeline,						// The workflow is of the pipeline type where several steps in the workflow can be active at once.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow enum type used for													|
|						@{HPMProjectWorkflowEnumWorkflowProperties}::m_WorkflowEnumWorkflowType		|
|																									|
|	See Also:			@{HPMProjectWorkflowEnumWorkflowProperties},								|
|						@{HPMFunctionProjectWorkflowEnumWorkflow}.									|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowEnumWorkflowType
{
	EHPMProjectWorkflowEnumWorkflowType_OldVersions,									// The workflow enum contains all old versions of a given workflow.
	EHPMProjectWorkflowEnumWorkflowType_Dependencies,									// The workflow enum contains all workflows the given workflow are dependent on.
	EHPMProjectWorkflowEnumWorkflowType_Dependents,										// The workflow enum contains all workflows that are directly dependent on the given workflow.
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfNewestVersion,						// The workflow enum contains all workflows that are dependent, directly or indirectly, on the start workflow. All versions of the dependent workflows will be returned. Only the given start workflow will be used to find dependents.
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfAllVersions,						// The workflow enum contains all workflows that are dependent, directly or indirectly, on the start workflow. All versions of the dependent workflows will be returned. All versions of the start workflow will be used to find dependents.
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfNewestVersion_OnlyReturnNewest,		// The workflow enum contains all workflows that are dependent, directly or indirectly, on the start workflow. Only the newest versions of the dependent workflows will be returned. Only the given start workflow will be used to find dependents.
	EHPMProjectWorkflowEnumWorkflowType_DependentsOfAllVersions_OnlyReturnNewest,		// The workflow enum contains all workflows that are dependent, directly or indirectly, on the start workflow. Only the newest versions of the dependent workflows will be returned. All versions of the start workflow will be used to find dependents.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow enum type used for													|
|						@{HPMProjectWorkflowEnumObjectProperties}::m_WorkflowEnumObjectType			|
|																									|
|	See Also:			@{HPMProjectWorkflowEnumObjectProperties},									|
|						@{HPMFunctionProjectWorkflowEnumObject}.									|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectWorkflowEnumObjectType
{
	EHPMProjectWorkflowEnumObjectType_Dependencies,					// The workflow object enum contains all workflow objects the given workflow and workflow object are dependent on.
	EHPMProjectWorkflowEnumObjectType_Dependents,					// The workflow object enum contains all workflow objects that are directly dependent on the given workflow and workflow object.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Workflow return type used for												|
|						@{UtilGetWorkflowIDFromName}												|
|																									|
|	See Also:			@{UtilGetWorkflowIDFromName}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMWorkflowReturnType
{
	EHPMWorkflowReturnType_NewVersionOfSDKRequired,	// The workflow type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this workflow type.
	EHPMWorkflowReturnType_Workflow,				// Return only workflows of the workflow type.
	EHPMWorkflowReturnType_Pipeline,				// Return only workflows of the pipeline type.
	EHPMWorkflowReturnType_Any,						// Return any workflow type.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Options that can be shown used in											|
|						@{HPMProjectViewPreset}::m_ShowOptions										|
|																									|
|	See Also:			@{HPMProjectViewPreset}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectPresetShowOptionFlag
{
	EHPMProjectPresetShowOptionFlag_None = 0,
	EHPMProjectPresetShowOptionFlag_Tasks = 1 << 0,										// Show tasks in My Work. At least one of @{EHPMProjectPresetShowOptionFlag}_Tasks or @{EHPMProjectPresetShowOptionFlag}_Bugs must be set.
	EHPMProjectPresetShowOptionFlag_Bugs = 1 << 1,										// Show bugs in My Work. At least one of @{EHPMProjectPresetShowOptionFlag}_Tasks or @{EHPMProjectPresetShowOptionFlag}_Bugs must be set.
	EHPMProjectPresetShowOptionFlag_Completed = 1 << 2,									// Show completed items.
	EHPMProjectPresetShowOptionFlag_PipelineTasksThatCannotStart = 1 << 3,				// Show pipeline tasks that cannot start in My Work.
	EHPMProjectPresetShowOptionFlag_CompletedItemsWithWorkflow = 1 << 4,				// Show completed items that have a workflow in My Work.
	EHPMProjectPresetShowOptionFlag_TimelineView = 1 << 5,								// Show timeline view in My Work.
	EHPMProjectPresetShowOptionFlag_OngoingAndFutureSprints = 1 << 6,					// Show ongoing and future sprints that I'm a member of.
	EHPMProjectPresetShowOptionFlag_CommittedToSprint = 1 << 7,							// Show committed to sprint items.
	EHPMProjectPresetShowOptionFlag_AssignedToMeOnly = 1 << 8,							// Show assigned to me only. 
	EHPMProjectPresetShowOptionFlag_EditableByMeOnly = 1 << 9,							// Show editable by me only.
	EHPMProjectPresetShowOptionFlag_DetailedDescriptionOrUserStoriesInList = 1 << 10,	// Show detailed or user stories in lists.
	EHPMProjectPresetShowOptionFlag_CommentsInList = 1 << 11,							// Show comments in lists.
	EHPMProjectPresetShowOptionFlag_Archived = 1 << 12,									// Show archived items.
	EHPMProjectPresetShowOptionFlag_FourWeeksScheduling = 1 << 13,						// Show only four weeks of scheduled tasks.
	EHPMProjectPresetShowOptionFlag_ShowItemDetailsWindow = 1 << 14,					// Show item details window.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		User message type used for @{ProjectDisplayUserMessage}						|
|																									|
|	See Also:			@{ProjectDisplayUserMessage}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectUserMessageType
{
	EHPMProjectUserMessageType_NewVersionOfSDKRequired,		// The workflow type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this workflow type.
	EHPMProjectUserMessageType_Error,						// The workflow is a normal linear workflow where only one step of the workflow can be active at once.
	EHPMProjectUserMessageType_Warning,						// The workflow is of the pipeline type where several steps in the workflow can be active at once.
	EHPMProjectUserMessageType_Info,
};



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags for @{ProjectGetDefaultActivatedNonHidableColumns}					|
|																									|
|	See Also:			@{ProjectGetDefaultActivatedNonHidableColumns}								|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMProjectGetDefaultActivatedNonHidableColumnsFlag
{
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_None = 0,
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_ScheduledMode = 1 << 0,	// Include columns specific to scheduled mode
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_AgileMode = 1 << 1,		// Include columns specific to agile mode
	EHPMProjectGetDefaultActivatedNonHidableColumnsFlag_ProjectMode = 1 << 2,	// Include columns from agile or scheduled mode depending what is configured as default for the project
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating projects in a database.								|
|																									|
|	See Also:			@{ProjectEnum}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectEnum
{
	HPMUInt32 m_nProjects;				// The number of projects in the database.
	const HPMUniqueID *m_pProjects;		// Pointer to a list of unique ids pointing to the projects.
} HPMProjectEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying properties about a project.								|
|																									|
|	See Also:			@{EHPMProjectMethod}, @{EHPMProjectTaskCompletionStyle},					|
|						@{EHPMProjectDefaultEditorMode}, @{EHPMProjectAgileTemplate},				|
|						@{ProjectCreate}, @{ProjectGetProperties},									|
|						@{ProjectSetProperties}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectProperties
{
	const HPMChar *m_pName;			// The name of the project.
	const HPMChar *m_pNiceName;		// The nice name of the project. A name that is safe to use in the file system. Converted from m_pName internally and is read-only (changes will be ignored by server).
	const HPMChar *m_pSortName;		// If set this name is used for sorting instead of the project name.
	HPMUInt32 m_bArchivedStatus;	// [default=0] Archived status. Set to 1 to indicate that the project is archived. An archived project is kept in the database but is not synchronized to resources connecting to the database saving network bandwidth and memory on the client.
	HPMUInt32 m_ProjectMethod;		// [type=EHPMProjectMethod,default=EHPMProjectMethod_FixedDuration] The project method used in the project. Can be one of @{EHPMProjectMethod}.
	HPMUInt32 m_CompletionStyle;	// [type=EHPMProjectTaskCompletionStyle,default=EHPMProjectTaskCompletionStyle_Auto] The completion style used in the project. Can be one of @{EHPMProjectTaskCompletionStyle}.
	HPMUInt32 m_DefaultEditorMode;	// [type=EHPMProjectDefaultEditorMode,default=EHPMProjectDefaultEditorMode_Agile] The default editor mode for the project. Can be one of @{EHPMProjectDefaultEditorMode}.
	HPMUInt32 m_AgileTemplate;		// [type=EHPMProjectAgileTemplate,default=EHPMProjectAgileTemplate_SCRUM] The agile template used for the project. Can be one of @{EHPMProjectAgileTemplate}.
} HPMProjectProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying settings for a project.									|
|																									|
|	See Also:			@{ProjectGetSettings}, @{ProjectSetSettings},								|
|						@{EHPMProjectSprintPredictionMethod}, @{EHPMProjectSettingsFlag}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectSettings
{
	HPMUInt32 m_Flags;						// [type=EHPMProjectSettingsFlag,default=EHPMProjectSettingsFlag_None] The flags set for the project. Can be any combination of @{EHPMProjectSettingsFlag}.	
	HPMUInt32 m_ParentTaskDisplayDepth;		// [default=1] The depth of parent tasks to display when tasks are displayed outside of the context of the task tree. Set to 1 or larger.
	HPMUInt32 m_SprintPredictionMethod;		// [type=EHPMProjectSprintPredictionMethod,default=EHPMProjectSprintPredictionMethod_5Days_WeightedAverage] The sprint prediction method for the project. See @{EHPMProjectSprintPredictionMethod}.
	HPMUInt32 m_SprintDefaultLength;		// [default=10] The default number of days a sprint is when it is created.
	HPMFP64 m_EstimatedHours;				// [default=8.0] The number of estimated hours per day when @{EHPMProjectSettingsFlag}_DisplayIdealEstimateAsHours is set.
	HPMColumn m_ColumnForPriorityInToDoList;					// Column to use for priority in To do list. See  @{HPMColumn}.
	HPMUInt32 m_CustomColumnHashForTimeSpentColumnInToDolist;   // [default=0] Hash of custom time spent column to use as Time spent column in to do list.
	HPMUInt32 m_bNewSprintsHaveNoMembers;	// [default=0] Determines whether new sprints inherit sprint allocations.
	const HPMChar *m_pWorkflowDesignation;	// The designation of the concept of workflow is called in the project.
} HPMProjectSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying project history auto save settigs for a project.		|
|																									|
|	See Also:			@{EHPMPeriodicityType}, @{ProjectGetHistoryAutoSaveSettings},				|
|						@{ProjectSetHistoryAutoSaveSettings}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectHistoryAutoSaveSettings
{
	HPMUInt32 m_Type;		// [type=EHPMPeriodicityType,default=EHPMPeriodicityType_Weekly]. Can be one of @{EHPMPeriodicityType}.
	HPMUInt32 m_DayOfWeek;	// [default=6] 0 -> 6 = Mon -> Sunday
	HPMUInt32 m_HourOfDay;	// [default=4] 0 -> 47 (number of half hours from midnight)
} HPMProjectHistoryAutoSaveSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying drop list items in a @{HPMProjectCustomColumnsColumn}	|
|						object.																		|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn},											|
|						@{EHPMListIcon}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectCustomColumnsColumnDropListItem
{
	const HPMChar *m_pName;									// The name of the drop list item. Displayed to user.
	HPMUInt32 m_Icon;										// [type=EHPMListIcon,default=EHPMListIcon_Default] An icon for the drop list item. Can be one of @{EHPMListIcon}.
	HPMUInt32 m_Id;											// [default=1] The identifier for the drop list item. Every item should have a unique identifier.
	HPMUInt32 m_nAutoAssignResources;						// The number of resources to auto assign.
	const HPMResourceDefinition *m_pAutoAssignResources;	// Pointer to a list of resources to auto assign. See @{HPMResourceDefinition}.
} HPMProjectCustomColumnsColumnDropListItem;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for SDK custom data in a @{HPMProjectCustomColumnsColumn}				|
|						object.																		|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn},											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectCustomColumnsColumnSDKData
{
	const HPMChar *m_pKey;			// The key for the SDK data. Preferable of format: "com.company.integrationx"
	HPMUInt32 m_nValue;				// The number of bytes in the value
	const HPMUInt8 *m_pValue;		// The value for key
} HPMProjectCustomColumnsColumnSDKData;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying a custom column in @{HPMProjectCustomColumns},			|
|						@{ProjectCustomColumnsCreate} and @{UtilGetColumnHash}.						|
|																									|
|	See Also:			@{HPMProjectCustomColumns}, @{EHPMProjectCustomColumnsColumnType},			|
|						@{EHPMProjectCustomColumnsColumnAccessRights},								|
|						@{HPMProjectCustomColumnsColumnDropListItem},								|
|						@{ProjectCustomColumnsCreate}, @{UtilGetColumnHash}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectCustomColumnsColumn
{
	HPMUInt32 m_Hash;														// The hash of the column. This hash is only used when getting properties of a column it is not used for setting properties or creating a column. To calculate the hash of a column you can use @{UtilGetColumnHash}.
	HPMUInt32 m_Type;														// [type=EHPMProjectCustomColumnsColumnType,default=EHPMProjectCustomColumnsColumnType_Text] The type of column. Can be one of @{EHPMProjectCustomColumnsColumnType}.
	const HPMChar *m_pName;													// The name of the column.
	HPMUInt32 m_AccessRights;												// [type=EHPMProjectCustomColumnsColumnAccessRights,default=EHPMProjectCustomColumnsColumnAccessRights_AllProjectMembers] The access rights for the column. Can be one of @{EHPMProjectCustomColumnsColumnAccessRights}
	const HPMChar *m_pUnit;													// The unit for data in the column.
	HPMUInt32 m_nDropListItems;												// The number of drop list items for the column. Only valid if m_Type is set to EHPMProjectCustomColumnsColumnType_DropList.
	const HPMProjectCustomColumnsColumnDropListItem *m_pDropListItems;		// Pointer to a list of drop list items. See @{HPMProjectCustomColumnsColumnDropListItem}. Only valid if m_Type is set to @{EHPMProjectCustomColumnsColumnType}_DropList.
	HPMUInt32 m_nSDKData;													// The number of SDK data for the column.
	const HPMProjectCustomColumnsColumnSDKData *m_pSDKData;					// Pointer to a list of SDK data. See @{HPMProjectCustomColumnsColumnSDKData}.
	HPMUInt32 m_Flags;														// [type=EHPMProjectCustomColumnsColumnFlag,default=EHPMProjectCustomColumnsColumnFlag_None] Flags. Can be any of @{EHPMProjectCustomColumnsColumnFlag}.
} HPMProjectCustomColumnsColumn;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying the custom columns in a project.						|
|																									|
|	Comments:			The projects has a number of columns that is shown and a number that is		|
|						hidden. Hidden columns still have their task data retained.					|
|																									|
|						When deleting a column you need to make sure to call						|
|						@{ProjectCustomColumnsDeleteTaskData} for its column hash, otherwise the	|
|						data will be left in the database. Similarly you need to call				|
|						@{ProjectCustomColumnsRenameTaskData} when you rename or change the			|
|						properties of a column.														|
|																									|
|						You should take care not to have the same column appear twice in either		|
|						shown or hidden columns.													|
|																									|
|	See Also:			@{HPMProjectCustomColumnsColumn}, @{ProjectCustomColumnsGet},				|
|						@{ProjectCustomColumnsSet}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectCustomColumns
{
	HPMUInt32 m_nShowingColumns;								// The number of columns shown in the gantt view.
	const HPMProjectCustomColumnsColumn *m_pShowingColumns;		// Pointer to a list of columns that is shown in the gantt view. See @{HPMProjectCustomColumnsColumn}.
	HPMUInt32 m_nHiddenColumns;									// The number of columns not shown in the gantt view.
	const HPMProjectCustomColumnsColumn *m_pHiddenColumns;		// Pointer to a list of columns that is not shown in the gantt view. See @{HPMProjectCustomColumnsColumn}.
} HPMProjectCustomColumns;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying the default columns that available in the gantt view.	|
|																									|
|	See Also:			@{EHPMProjectDefaultColumn}, @{ProjectGetDefaultActivatedColumns},			|
|						@{ProjectSetDefaultActivatedColumns},										|
|						@{ProjectGetDefaultActivatedNonHidableColumns},								|
|						@{ProjectGetDefaultAvailableColumns}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectDefaultColumns
{
	HPMUInt32 m_nColumns;			// The number of columns.
	const HPMUInt32 *m_pColumns;	// [type=EHPMProjectDefaultColumn] Pointer to a list of columns. Every entry can be one of @{EHPMProjectDefaultColumn}. You should make sure to not have two entries with the same default column identifier.
} HPMProjectDefaultColumns;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the email settings for a project.							|
|																									|
|	See Also:			@{EHPMPeriodicityType}, @{ProjectGetEmailSettings},							|
|						@{ProjectSetEmailSettings}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectEmailSettings
{
	HPMInt32 m_ResourceScheduleUpdated_Enable;							// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled a email will be sent to a resource when his/her schedule is updated. Can be one of @{EHPMOptionalBoolean}.
	HPMInt32 m_ResourceScheduleUpdated_nMinutesAfterUpdate;				// The number of minutes after a change to the schedule to send the update. Several updates are sent in the same email if many tasks have changed.
	HPMInt32 m_ResourceScheduleUpdated_bIncludeComment;					// If set to true the last comment on updated items will be included.

	HPMInt32 m_BeforeAMilestone_Enable;									// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled emails are sent to resources in a project when a milestone is about to be due. Can be one of @{EHPMOptionalBoolean}.
	HPMInt32 m_BeforeAMilestone_nDaysBefore0;							// [default=0] The number of days before an upcoming milestone to send the first notification. Set to 0 to disable.
	HPMInt32 m_BeforeAMilestone_nDaysBefore1;							// [default=0] The number of days before an upcoming milestone to send the second notification. Set to 0 to disable.
	HPMInt32 m_BeforeAMilestone_WhenToSend;								// [default=0] The number of half hours past midnight to send notifications about upcoming milestones. 0 -> 47 (number of half hours from midnight).

	HPMInt32 m_ProjectReport_Enable;									// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled all main project managers will receive a project report. Can be one of @{EHPMOptionalBoolean}.
	HPMInt32 m_ProjectReport_PeriodicityType;							// [type=EHPMPeriodicityType,default=EHPMPeriodicityType_Weekly] The periodicity of when to send project reports. Can be one of @{EHPMPeriodicityType}.
	HPMInt32 m_ProjectReport_WhenToSendWeekDay;							// [default=0] The weekday to send the project report. 0 -> 6 = Mon -> Sunday. Only valid if m_ProjectReport_PeriodicityType is set to @{EHPMPeriodicityType}_Weekly.
	HPMInt32 m_ProjectReport_WhenToSendHourOfDay;						// [default=0] The number of half hours past midnight to send project reports. 0 -> 47 (number of half hours from midnight).
	const HPMChar *m_ProjectReport_SendToEmailsExtra[3];				// A list of strings specifying extra email addresses to send project reports to. Set to NULL to disable.

	HPMInt32 m_WhenATaskIsCompleted_Enable;								// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled all main project managers will receive a notification when a task in the project is completed. Can be one of @{EHPMOptionalBoolean}.
	const HPMChar *m_WhenATaskIsCompleted_SendToEmailsExtra[3];			// A list of strings specifying extra email addresses to send task notifications to. Set to NULL to disable.

	HPMInt32 m_WhenACommentIsPosted_Enable;								// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled the creator, additional and CC'd resources is sent a notification when a comment is posted. Can be one of @{EHPMOptionalBoolean}.
	const HPMChar *m_WhenACommentIsPosted_SendToEmailsExtra[3];			// A list of strings specifying extra email addresses to send comment notifications to. Set to NULL to disable.

	HPMInt32 m_WhenAPredcessorIsCompleted_Enable;						// [type=EHPMOptionalBoolean,default=EHPMOptionalBoolean_NotSet] If enabled resources assigned to a task will receive notifications when a predecessor task is completed. Can be one of @{EHPMOptionalBoolean}.
	const HPMChar *m_WhenAPredcessorIsCompleted_SendToEmailsExtra[3];	// A list of strings specifying extra email addresses to send predecessor notifications to. Set to NULL to disable.

} HPMProjectEmailSettings;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a required field in the workflow.							|
|																									|
|	See Also:			@{HPMProjectWorkflowObject}, @{EHPMProjectWorkflowRequiredFieldType}		|
|						@{EHPMProjectDefaultColumn}, @{EHPMProjectDefaultField}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowRequiredField
{
	HPMInt32 m_Type;		// [type=EHPMProjectWorkflowRequiredFieldType,default=EHPMProjectWorkflowRequiredFieldType_CustomColumn] The type of field specified. See @{EHPMProjectWorkflowRequiredFieldType}.
	HPMInt32 m_ID;			// [default=0] If m_Type is EHPMProjectWorkflowRequiredFieldType_DefaultColumn this member is one of @{EHPMProjectDefaultColumn}. If m_Type is @{EHPMProjectWorkflowRequiredFieldType}_DefaultField this member is one of @{EHPMProjectDefaultField}. If m_Type is @{EHPMProjectWorkflowRequiredFieldType}_DefaultColumn this member is the column hash of the custom column.
} HPMProjectWorkflowRequiredField;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a connection between workflow objects.						|
|																									|
|	See Also:			@{HPMProjectWorkflowObject}, @{EHPMProjectWorkflowConnectionSite}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowConnection
{
	HPMUInt32 m_ConnectedToUID;	// [default=0] The unique identifier of the status this connection is connected to.
	HPMInt32 m_ConnectFrom;		// [type=EHPMProjectWorkflowConnectionSite,default=EHPMProjectWorkflowConnectionSite_NewVersionOfSDKRequired] The site on the start object that the connection is made from. See @{EHPMProjectWorkflowConnectionSite}.
	HPMInt32 m_ConnectTo;		// [type=EHPMProjectWorkflowConnectionSite,default=EHPMProjectWorkflowConnectionSite_NewVersionOfSDKRequired] The site on the end object that the connection is made to. See @{EHPMProjectWorkflowConnectionSite}.
} HPMProjectWorkflowConnection;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a workflow status change that is set on a defined item		|
|						status change.																|
|																									|
|	See Also:			@{EHPMTaskStatus}, @{HPMProjectWorkflowObject}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkflowStatusChange
{
	HPMInt32 m_ItemStatus;		// [type=EHPMTaskStatus,default=EHPMTaskStatus_NoStatus] The status that triggers the workflow status change. See @{EHPMTaskStatus}.
	HPMUInt32 m_GotoStatus;		// [default=-1] The unique identifier of a workflow object pointing to a workflow status that will be set on the task when @{HPMWorkflowStatusChange}::m_ItemStatus is set. Set to -1 to indicate that the state should not change when the task is completed. 
} HPMWorkflowStatusChange;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a workflow status object.									|
|																									|
|	See Also:			@{HPMProjectWorkflowSettings}, @{EHPMProjectWorkflowObjectType}				|
|						@{HPMResourceDefinition}, @{HPMProjectWorkflowConnection},					|
|						@{EHPMListIcon},															|
|						@{HPMProjectWorkflowRequiredField},	@{EHPMProjectWorkflowObjectFlag}		|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowObject
{
	HPMUInt32 m_ObjectID;															// [default=1] The unique identifier of this object. Make sure that no duplicate identifiers exists when setting the workflow. Must be positive.
	HPMInt32 m_ObjectType;															// [type=EHPMProjectWorkflowObjectType,default=EHPMProjectWorkflowObjectType_WorkflowStatus] The type of object. Can be one of @{EHPMProjectWorkflowObjectType}.
	HPMInt32 m_PositionX;															// [default=500] The X position this object is displayed on when editing the workflow.
	HPMInt32 m_PositionY;															// [default=500] The Y position this object is displayed on when editing the workflow.

	HPMUInt32 m_nResources;															// The number of resources defined for this object.
	const HPMResourceDefinition *m_pResources;										// Pointer to a list of resources. See @{HPMResourceDefinition}. When m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus this list defines the resources a bug should be auto assigned to when this status is reached. When m_ObjectType is @{EHPMProjectWorkflowObjectType}_Transition this list defines the resources that are allowed to pass through the transition. When m_ObjectType is @{EHPMProjectWorkflowObjectType}_EntryStatus this list defines the resources that are allowed select the pipeline/workflow or to report new bugs in the QA section of the project.

	HPMUInt32 m_nConnectedToObjects;												// The number of objects this object is connected to.
	const HPMProjectWorkflowConnection *m_pConnectedToObjects;						// Pointer to a list of objects that this object should be connected to. See @{HPMProjectWorkflowConnection}.

	HPMUInt32 m_Flags;																// [type=EHPMProjectWorkflowObjectFlag, default=EHPMProjectWorkflowObjectFlag_None] The flags for the workflow object. Can be any of @{EHPMProjectWorkflowObjectFlag}.

	HPMUInt32 m_nRequiredFields;													// The number of fields that are required to be filled in to exit this status or transition through this transition. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus or @{EHPMProjectWorkflowObjectType}_Transition.
	const HPMProjectWorkflowRequiredField *m_pRequiredFields;						// Pointer to a list of fields that are required to be filled in to exit this status or transition through this transition. See @{HPMProjectWorkflowRequiredField}. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus or @{EHPMProjectWorkflowObjectType}_Transition.

	const HPMUntranslatedString *m_WorkflowStatus_pName;							// The name of the workflow status. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.

	HPMUInt32 m_WorkflowStatus_GoToWorkflowStatusWhenAssigned;						// [default=0] The unique identifier of a workflow object pointing to a workflow status that will be set on the task when it is assigned to a resource. Set to -1 to indicate that the state should not change when the task is assigned. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.

	HPMUInt32 m_WorkflowStatus_nGotoWorkflowStatusWhenItemStatusSet;				// The number of automatic workflow status changes defined for this object. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.
	HPMWorkflowStatusChange *m_WorkflowStatus_pGotoWorkflowStatusWhenItemStatusSet;	// Pointer to a list of automatic workflow status changes. See @{HPMWorkflowStatusChange}. 

	HPMUInt32 m_WorkflowStatus_AssignToResourcesAssignedInThisStatus;				// [default=0] The unique identifier of a workflow object pointing to a workflow status. The resources that are assigned to to that status will be assigned to this status. Set to -1 to indicate that the no resources will be assigned. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.

	HPMInt32 m_WorkflowStatus_Icon;													// [type=EHPMListIcon,default=EHPMListIcon_Default] The icon to show for the status. Can be one of @{EHPMListIcon}. The icon Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.

	HPMUInt32 m_WorkflowStatus_nEmailNotifications;									// The number of resources that should receive email notifications when this status is reached. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.
	const HPMResourceDefinition *m_WorkflowStatus_pEmailNotifications;				// Pointer to a list of resources that should receive email notifications when this status is reached. See @{HPMResourceDefinition}. Only valid when m_ObjectType is @{EHPMProjectWorkflowObjectType}_WorkflowStatus.

	HPMUInt32 m_WorkflowStatus_nDefaultTaskValues;									// The number of default values to specify for this object.
	const HPMTaskFieldData *m_WorkflowStatus_pDefaultTaskValues;					// Pointer to a list of default values to specify for this object. See @{HPMTaskFieldData}. Currently only EHPMTaskField_WorkRemaining and EHPMTaskField_Status are valid here. EHPMTaskField_TotalDuration is used to specify the duration in hours for a scheduled task in a pipeline workflow.

	HPMUInt32 m_WorkflowStatus_SelectedWorklfowID;									// [default=0] Used to specify a sub workflow, either for specifying a sub pipeline, a sub workflow or the workflow that sub items can be broken down into.

	HPMInt32 m_TaktTimeDays;														// [default=0] The number of takt time days for a Kanban.
	HPMInt32 m_TaktTimeHours;														// [default=0] The number of takt time hours for a Kanban.
	HPMInt32 m_MaxWIPItems;															// [default=0] The max number of work in progress items in a Kanban.	
} HPMProjectWorkflowObject;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the basic properties of a workflow.							|
|																									|
|	See Also:			@{HPMProjectWorkflowSettings}, @{EHPMWorkflowType},							|
|						@{HPMResourceDefinition}, @{EHPMListIcon}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowProperties
{
	const HPMChar *m_pName;									// The name of the workflow.
	HPMInt32 m_WorkflowType;								// [type=EHPMWorkflowType,default=EHPMWorkflowType_Workflow] The type of workflow. Can by any one of @{EHPMWorkflowType}.
	HPMInt32 m_Icon;										// [type=EHPMListIcon,default=EHPMListIcon_Default] The icon to display for this workflow. Can be one of @{EHPMListIcon}.
} HPMProjectWorkflowProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the settings for a workflow.									|
|																									|
|	See Also:			@{ProjectWorkflowGetSettings},												|
|						@{ProjectWorkflowSetSettings}, @{HPMProjectWorkflowObject},					|
|						@{HPMProjectWorkflowProperties}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowSettings
{
	HPMUInt32 m_Identifier;									// [default=1] The unique identifier of this workflow.
	HPMUInt32 m_NewestWorkflowVersionID;					// [default=0xffffffff] Set to 0xffffffff if this is the latest version of the workflow otherwise set to the unique identifer of the latest version of the workflow.

	HPMUInt32 m_Flags;										// [type=EHPMProjectWorkflowContainerFlag,default=EHPMProjectWorkflowContainerFlag_None] Workflow settings flags. Can be any combination of @{EHPMProjectWorkflowContainerFlag}.

	HPMProjectWorkflowProperties m_Properties;				// The base properties for the workflow.
	HPMUniqueID m_CreatedByResource;						// The unique identifier of the resource that created this workflow.

	HPMResourceDefinitionList m_ResourceList;				// A list of resources that can change the workflow status.

	HPMUInt32 m_nWorkflowObjects;							// The number of objects in the workflow.
	const HPMProjectWorkflowObject *m_pWorkflowObjects;		// Pointer to a list of objects defining the workflow. See @{HPMProjectWorkflowObject}.

} HPMProjectWorkflowSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a number of workflows.										|
|																									|
|	See Also:			@{HPMProjectWorkflowSettings}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflows
{
	HPMUInt32 m_nWorkflows;								// The number of workflows.
	const HPMProjectWorkflowSettings *m_pWorkflows;		// Pointer to a list of workflows. See @{HPMProjectWorkflowSettings}.

} HPMProjectWorkflows;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the wall settings for a project.								|
|																									|
|	See Also:			@{ProjectGetWallSettings}, @{ProjectSetWallSettings},						|
|						@{ProjectGetKanbanWallSettings}, @{ProjectSetKanbanWallSettings},			|
|						@{EHPMProjectWallSettingsFlags}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWallSettings
{
	HPMUInt32 m_Flags;									// [type=EHPMProjectWallSettingsFlags,default=EHPMProjectWallSettingsFlags_None] Wall settings flags. Can be any combination of @{EHPMProjectWallSettingsFlags}.

	HPMUInt32 m_nShowTaskColumns;						// The number of columns to show for tasks on the wall.
	HPMColumn *m_pShowTaskColumns;						// Pointer to a list of columns that should be shown for tasks on the wall. See @{HPMColumn}.
} HPMProjectWallSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																																						|
|																																								|
|	Description:		Used to define access functions in @{HPMProjectDetailedAccessRule}.																		|
|																																								|
|	Comments:			Descriptions about how to set the m_FunctionID variable for different m_FunctionType values:											|
|																																								|
|		List:					Enum~25, Description																											|
|			EHPMProjectDetailedAccessRuleFunctionType_DefalutColumn:		m_FunctionID should be set to one of @{EHPMProjectDefaultColumn} enum.				|
|																																								|
|			EHPMProjectDetailedAccessRuleFunctionType_CustomColumn:			m_FunctionID should be set to the hash of a custom column.							|
|																																								|
|			EHPMProjectDetailedAccessRuleFunctionType_TaskField:			m_FunctionID should be set to one of @{EHPMTaskField} enum. Currently only			|
|																			EHPMTaskField_Description, EHPMTaskField_DetailedDescription and					|
|																			EHPMTaskField_StepsToReproduce is used.												|
|																																								|
|			All other:														m_FunctionID should be set to 0.													|
|																																								|
|	See Also:			@{HPMProjectDetailedAccessRule}, @{EHPMProjectDetailedAccessRuleFunctionType}, @{EHPMProjectDefaultColumn}, @{EHPMProjectDefaultColumn},|
|						@{EHPMTaskField}																														|
|																																								|
|	Location:			Structures																																|
|																																								|
|	Index:				!name																																	|
\*_____________________________________________________________________________________________________________________________________________________________*/
typedef struct HPMProjectDetailedAccessRuleFunction
{
	HPMInt32 m_FunctionType;			// [type=EHPMProjectDetailedAccessRuleFunctionType,default=EHPMProjectDetailedAccessRuleFunctionType_DeleteTask] The function type. Can be one of @{EHPMProjectDetailedAccessRuleFunctionType}.
	HPMUInt32 m_FunctionID;				// [default=0] Only used when m_FunctionType is EHPMProjectDetailedAccessRuleFunctionType_DefalutColumn, EHPMProjectDetailedAccessRuleFunctionType_CustomColumn or EHPMProjectDetailedAccessRuleFunctionType_TaskField. Also see comments section.
	HPMInt32 m_FunctionSubID;			// [default=0] This is only used when @{HPMProjectDetailedAccessRule}::m_RuleType is set to EHPMProjectDetailedAccessRuleType_Hide, otherwise it should be set to 0. See the comments section in @{HPMProjectDetailedAccessRule}.
} HPMProjectDetailedAccessRuleFunction;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a access rule in @{HPMProjectDetailedAccessRules}.			|
|																									|
|	Comments:			When m_RuleType is EHPMProjectDetailedAccessRuleType_Hide you should		|
|						only specify one function. The members of the								|
|						@{HPMProjectDetailedAccessRuleFunction} struct should be defined as follows:|
|																									|
|		List:					Variable~25, Description											|
|			m_FunctionType:		Should be set to													|
|								EHPMProjectDetailedAccessRuleFunctionType_CustomColumn.				|
|																									|
|			m_FunctionID:		Should be set to the hash of a custom column that is of the			|
|								drop list type.														|
|																									|
|			m_FunctionSubID:	Should be set to a drop list item identifier. See					|
|								@{HPMProjectCustomColumnsColumnDropListItem}::m_Id.					|
|																									|
|	See Also:			@{HPMProjectDetailedAccessRules}, @{EHPMProjectDetailedAccessRuleType},		|
|						@{HPMResourceDefinition}, @{HPMProjectDetailedAccessRuleFunction}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectDetailedAccessRule
{
	HPMInt32 m_RuleType;										// [type=EHPMProjectDetailedAccessRuleType,default=EHPMProjectDetailedAccessRuleType_GiveAccess] Can be one of @{EHPMProjectDetailedAccessRuleType}.
	
	HPMUniqueID m_CreatedByResource;							// Unique identifier for the resource that created this rule.

	HPMUInt32 m_nResources;										// The number of resources this rule affects.
	const HPMResourceDefinition *m_pResources;					// Pointer to a list of resources this rule affects. See @{HPMResourceDefinition}.

	HPMUInt32 m_nFunctions;										// The number of functions this rule affects. Also see comments section.
	const HPMProjectDetailedAccessRuleFunction *m_pFunctions;	// Pointer to a list of functions this rule affects. See @{HPMProjectDetailedAccessRuleFunction}.

} HPMProjectDetailedAccessRule;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the detailed access rules for a project.						|
|																									|
|	See Also:			@{HPMProjectDetailedAccessRule}, @{ProjectGetDetailedAccessRules},			|
|						@{ProjectSetDetailedAccessRules}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectDetailedAccessRules
{
	HPMUInt32 m_nRules;							// The number of access rules for this project. 
	HPMProjectDetailedAccessRule *m_pRules;		// Pointer to a list of rules for this project. See @{HPMProjectDetailedAccessRule}.

} HPMProjectDetailedAccessRules;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a project wall group.										|
|																									|
|	See Also:			@{HPMProjectWallGroups}, @{EHPMWallGroupingType},							|
|						@{EHPMProjectDefaultColumn} 												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWallGroup
{
	HPMInt32 m_GroupingType;			// [type=EHPMWallGroupingType,default=EHPMWallGroupingType_CustomGroups] Grouping identification type. Can be one of @{EHPMWallGroupingType}.
	HPMUInt32 m_GroupingID;				// [default=0] If m_GroupingType is EHPMWallGroupingType_DefaultColumn this value can be one of @{EHPMProjectDefaultColumn}. If m_GroupingType is EHPMWallGroupingType_CustomColumn this value is the hash of the custom column. If m_GroupingType is EHPMWallGroupingType_CustomGroups this value should be set to 0.
	HPMUniqueID m_GroupingSprintUID;	// The unique identifier of the selected sprint in the main project wall view.

	HPMUniqueID m_ValueAssignID;		// Used to specify the value to be assigned when an item is moved to this group.

	const HPMChar *m_pGroupName;		// The name of the custom group. Only used when m_GroupingType is EHPMWallGroupingType_CustomGroups.

	HPMFP32 m_RectLeft;					// [default=0.0f] The left bonding of the group rectangle.
	HPMFP32 m_RectTop;					// [default=0.0f] The top bonding of the group rectangle.
	HPMFP32 m_RectRight;				// [default=500.0f] The right bonding of the group rectangle.
	HPMFP32 m_RectBottom;				// [default=500.0f] The bottom bonding of the group rectangle.


} HPMProjectWallGroup;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the wall groups for a project.								|
|																									|
|	See Also:			@{HPMProjectWallGroup}, @{ProjectGetWallGroups}, @{ProjectSetWallGroups}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWallGroups
{
	HPMUInt32 m_nGroups;				// The number of wall groups for this project. 
	HPMProjectWallGroup *m_pGroups;		// Pointer to a list of wall groups for this project. See @{HPMProjectWallGroup}.

} HPMProjectWallGroups;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define statistics settings for a project.							|
|																									|
|	See Also:			@{ProjectGetStatisticsSettings},											|
|						@{ProjectSetStatisticsSettings}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectStatisticsSettings
{
	HPMUInt32 m_SamplingFrequency;					// [default=86400] The number of seconds between samplings of project statistics.
	HPMUInt32 m_SecondOfDaySample;					// [default=7200] The number of seconds past midnight that sampling of project statistics should start.
	HPMUInt32 m_SamplingFrequencyResource;			// [default=86400] The number of seconds between samplings of project statistics for a resources.
	HPMUInt32 m_SecondOfDaySampleResource;			// [default=7200] The number of seconds past midnight that sampling of project statistics for resources should start.
	HPMUInt32 m_SamplingFrequencyResourceGroup;		// [default=86400] The number of seconds between samplings of project statistics for a resource groups.
	HPMUInt32 m_SecondOfDaySampleResourceGroup;		// [default=7200] The number of seconds past midnight that sampling of project statistics for resource groups should start.
} HPMProjectStatisticsSettings;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating the resource members of a project.						|
|																									|
|	See Also:			@{ProjectResourceEnum}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectResourceEnum
{
	HPMUInt32 m_nResources;				// The number of resource members in the project.
	const HPMUniqueID *m_pResources;	// Pointer to a list of unique identifiers pointing to resources that are members of the project.
} HPMProjectResourceEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying properties of a member of a project						|
|																									|
|	See Also:			@{EHPMProjectResourceFlag}, @{ProjectResourceAdd},							|
|						@{ProjectResourceGetProperties}, @{ProjectResourceSetProperties}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectResourceProperties
{
	HPMUInt32 m_Flags;				// [type=EHPMProjectResourceFlag,default=EHPMProjectResourceFlag_None] Flags for the member of a project. Can be any valid combination of @{EHPMProjectResourceFlag}.
} HPMProjectResourceProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the a custom statistics sampler in a project. See			|
|						@{HPMProjectCustomStatisticsSettings}.										|
|																									|
|	See Also:			@{HPMProjectCustomStatisticsSettings}, @{HPMCustomStatisticsField}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectCustomStatisticsSampler
{
	HPMInt32 m_SamplerID;						// [default=-1] The unique identifier for this sampler. The ID is unique per project.
	const HPMChar *m_pName;						// The name of the custom sampler.
	HPMUniqueID m_CreatedBy;					// The unique identifier of the resource that created this custom statistics sampler.

	HPMInt32 m_nFields;							// The number of fields that this custom statistics sampler should combine. Maximum of 3 fields currently supported.
	HPMCustomStatisticsField *m_pFields;		// Pointer to a list of fields this custom statistics sampler should combine. See @{HPMCustomStatisticsField}.

} HPMProjectCustomStatisticsSampler;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the custom statistics settings for a project.				|
|																									|
|	See Also:			@{HPMProjectCustomStatisticsSampler}, @{ProjectSetCustomStatisticsSettings},|
|						@{ProjectGetCustomStatisticsSettings}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/

typedef struct HPMProjectCustomStatisticsSettings
{
	HPMInt32 m_NextSamplerID;									// [default=1] The next free sampler ID available. This value should be used and increased when adding a new entry to the m_pStatisticsSamplers list.
	HPMUInt32 m_nStatisticsSamplers;							// The number of defined custom statistics samplers.
	HPMProjectCustomStatisticsSampler *m_pStatisticsSamplers;	// Pointer to a list of custom statistics samplers for this project. See @{HPMProjectCustomStatisticsSampler}.

} HPMProjectCustomStatisticsSettings;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating project workflows.										|
|																									|
|	See Also:			@{ProjectWorkflowEnum}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowEnum
{
	HPMUInt32 m_nWorkflows;				// The number of workflows.
	const HPMUInt32 *m_pWorkflows;		// Pointer to a list of workflow identifiers.
} HPMProjectWorkflowEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating project workflow objects on a workflow.				|
|																									|
|	See Also:			@{HPMFunctionProjectWorkflowEnumObject}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowObjectEnum
{
	HPMUInt32 m_nWorkflowObjects;					// The number of workflow objetcs.
	const HPMUInt32 *m_pWorkflowObjects;		// Pointer to a list of workflow identifiers in the project.
} HPMProjectWorkflowObjectEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for defining a workflow task generated from a workflow pipeline.		|
|																									|
|	See Also:			@{HPMProjectWorkflowStructure}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowStructureTask
{
	HPMWorkflowObjectIdentifier m_WorkflowIdentifier;		// The workflow ID and workflow object ID that was used to generate this task. See @{HPMWorkflowObjectIdentifier}.
	const HPMUntranslatedString *m_pTaskDescription;		// The description to set on the generated task.
	HPMUInt32 m_TaskTreeLevel;								// [default=0] The tree indentation level this task should have. This indentation level is relative.

	HPMResourceDefinitionList m_TaskAllocatedResources;		// The resources that should be allocated to this task. See @{HPMResourceDefinitionList}.

	HPMUInt32 m_nTaskDefaultValues;							// The number of default values to specify for this object.
	const HPMTaskFieldData *m_pTaskDefaultValues;			// Pointer to a list of default values to specify for this object. See @{HPMTaskFieldData}. Currently only values for EHPMTaskField_WorkRemaining, EHPMTaskField_EstimatedIdealDays and EHPMTaskField_ComplexityPoints are valid here.

} HPMProjectWorkflowStructureTask;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for defining a workflow structure generated from a workflow pipeline.	|
|																									|
|	See Also:			@{HPMProjectWorkflowStructureTask}, @{ProjectUtilGetWorkflowStructure}		|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowStructure
{
	HPMUInt32 m_nTasks;									// The number tasks defined in the workflow structure.
	const HPMProjectWorkflowStructureTask *m_pTasks;	// Pointer to a list of workflow structure tasks defining the workflow structure. See @{HPMProjectWorkflowStructureTask}.

} HPMProjectWorkflowStructure;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for defining statistics for a workflow status							|
|																									|
|	See Also:			@{HPMProjectWorkflowStructure}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowStatusStats
{	
	HPMInt64 m_StateChanges;		// [default=0] The number of times tasks have passed this status.
	HPMInt64 m_TotalTimeSpan;		// [default=0] The total time in seconds that tasks have stayed in this status.
	HPMInt64 m_ContributingTasks;	// [default=0] The number of tasks that have passed this status.
} HPMProjectWorkflowStatusStats;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the properties of an enumeration of workflows on a given		|
|						workflow in a project.														|
|																									|
|	See Also:			@{HPMFunctionProjectWorkflowEnumWorkflow},									|
|						@{EHPMProjectWorkflowEnumWorkflowType}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowEnumWorkflowProperties
{
	HPMInt32 m_WorkflowEnumWorkflowType;			// [type=EHPMProjectWorkflowEnumWorkflowType,default=EHPMProjectWorkflowEnumWorkflowType_Dependencies] The type of workflow enumeration. Can be one of @{EHPMProjectWorkflowEnumWorkflowType}.
} HPMProjectWorkflowEnumWorkflowProperties;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the properties of an enumeration of workflow objects on		|
|						given workflow and workflow object in a project.							|
|																									|
|	See Also:			@{HPMFunctionProjectWorkflowEnumObject},									|
|						@{EHPMProjectWorkflowEnumObjectType}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectWorkflowEnumObjectProperties
{
	HPMInt32 m_WorkflowEnumObjectType;			// [type=EHPMProjectWorkflowEnumObjectType,default=EHPMProjectWorkflowEnumObjectType_Dependencies] The type of workflow object enumeration. Can be one of @{EHPMProjectWorkflowEnumObjectType}.
} HPMProjectWorkflowEnumObjectProperties;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a view preset in @{HPMProjectViewPresets}.					|
|																									|
|	See Also:			@{HPMProjectViewPresets}, @{HPMColumn},										|
|						@{EHPMProjectPresetShowOptionFlag}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectViewPreset
{
	const HPMChar *m_pName;							// The name of the user view preset.
	HPMUInt32 m_nResources;							// The number of resources this preset applies for.
	const HPMResourceDefinition *m_pResources;		// Pointer to a list of resources this preset applies for. See @{HPMResourceDefinition}.
	HPMUInt32 m_nColumns;							// The number of columns that will be visible.
	const HPMColumn *m_pColumns;					// Pointer to a list of columns that will be visible. See @{HPMColumn}.
	HPMUInt32 m_nColumnsOrder;						// The number of columns used for column order.
	const HPMColumn *m_pColumnsOrder;				// Pointer to a list of columns that will used for column order. See @{HPMColumn}.
	HPMUInt32 m_nItemSettingsColumns;				// The number of columns that will be visible in item settings/details.
	const HPMColumn *m_pItemSettingsColumns;		// Pointer to a list of columns that will be visible in item settings/details. See @{HPMColumn}.
	HPMUInt32 m_nItemSettingsColumnsOrder;			// The number of columns that will be used for item settings/details column order.
	const HPMColumn *m_pItemSettingsColumnsOrder;	// Pointer to a list of columns that will be used for in item settings/details column order. See @{HPMColumn}.
	HPMUInt32 m_ShowOptions;						// [type=EHPMProjectPresetShowOptionFlag,default=EHPMProjectPresetShowOptionFlag_None] Options that will be set by the preset. Can be any of combination of @{EHPMProjectPresetShowOptionFlag} that are valid for the current type of project.
} HPMProjectViewPreset;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the view presets for a project.								|
|																									|
|	See Also:			@{HPMProjectViewPreset}, @{ProjectGetViewPresets},							|
|						@{ProjectSetViewPresets}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMProjectViewPresets
{
	HPMUInt32 m_nPresets;							// The number of view presets for this project. 
	HPMProjectViewPreset *m_pPresets;			// Pointer to a list of view presets for this project. See @{HPMProjectViewPreset}.
} HPMProjectViewPresets;

#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a project in the database.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You should make sure that a project with the same name does not already		|
|						exist.																		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectProperties}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCreate																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCreate)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																		const HPMProjectProperties *_pProperties,	// [in] The properties of the created project.
																		HPMUniqueID *_pProjectID					// [in] The unique identifier of the created project. If in nonblocking mode _pProjectID will be filled with an temporary id that you later can match against in the change callback. See @{HPMChangeCallbackData_ProjectCreate}.
																	);  
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a project in the database.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When a project is deleted all data about the project is deleted in			|
|						the database, the project history for the project is deleted and			|
|						the documents folder for the project is moved to the "Deleted Projects"		|
|						folder.																		|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectDelete																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectDelete)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ProjectID	// [in] The unique identifier of the project to delete.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates projects in a database.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectEnum}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectEnum																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectEnum)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																		const HPMProjectEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMProjectEnum} object, representing the returned data.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates non archived projects in a database.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectEnum}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectEnumNonArchived														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectEnumNonArchived)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				const HPMProjectEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMProjectEnum} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the properties of a project in the database.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectProperties}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetProperties														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetProperties)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get the properties of.
																				const HPMProjectProperties **_pProperties	// [out] Pointer to a pointer of a @{HPMProjectProperties} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the properties of a project in the database.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectProperties}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetProperties														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetProperties)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set the properties of.
																				const HPMProjectProperties *_pProperties	// [in] The properties to set on the project. See @{HPMProjectProperties}.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Opens the backlog project of a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A backlog is basically a project. The backlog unique identifier can often	|
|						be used in same capacity as a project unique identifer.						|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChangeCallbackData_ProjectOpenBacklogProject}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectOpenBacklogProject													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectOpenBacklogProject)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,			// [in] The project to open the backlog project of.
																					HPMUInt32 _bBlock,				// [in] Set to 1 if you want the function to block even when in nonblocking mode.
																					HPMUniqueID *_pReturnBacklog	// [out] The unique identifier of the project backlog. If the backlog isn't previously opened when running in nonblocking mode and _bBlock is set to 0, -1 will be returned here and the real backlog unique identifier will be returned in @{HPMChangeCallbackData_ProjectOpenBacklogProject}.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Opens the QA project of a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A QA project is a basically a project. The QA project unique identifier		|
|						can often be used in same capacity as a project unique identifer.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChangeCallbackData_ProjectOpenQAProject}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectOpenQAProject														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectOpenQAProject)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,		// [in] The project to open the QA project of.
																				HPMUInt32 _bBlock,			// [in] Set to 1 if you want the function to block even when in nonblocking mode.
																				HPMUniqueID *_pReturnQA		// [out] The unique identifier of the project QA. If the QA project isn't previously opened when running in nonblocking mode and _bBlock is set to 0, -1 will be returned here and the real QA project unique identifier will be returned in @{HPMChangeCallbackData_ProjectOpenQAProject}.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets project history auto save settings for a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectHistoryAutoSaveSettings}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetHistoryAutoSaveSettings											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetHistoryAutoSaveSettings)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to get project history auto save settings for.
																							const HPMProjectHistoryAutoSaveSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectHistoryAutoSaveSettings} object, representing the returned data.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets project history auto save settings for a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectHistoryAutoSaveSettings}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetHistoryAutoSaveSettings											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetHistoryAutoSaveSettings)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to set project history auto save settings on.
																							const HPMProjectHistoryAutoSaveSettings *_pSettings	// [in] The auto save settings to set on the project. See @{HPMProjectHistoryAutoSaveSettings}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a workflow object for a workflow in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowObject}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowGetObject													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowGetObject)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get the object for.
																					HPMUInt32 _WorkflowID,							// [in] The identifier of the workflow to get the object for.
																					HPMUInt32 _ObjectID,							// [in] The identifier of the workflow object to get.
																					const HPMProjectWorkflowObject **_pObject		// [out] Pointer to a pointer of a @{HPMProjectWorkflowObject} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets workflow settings for a workflow in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowSettings}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowGetSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowGetSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get workflow settings for.
																					HPMUInt32 _WorkflowID,							// [in] The identifier of the workflow to get workflow settings for.
																					const HPMProjectWorkflowSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectWorkflowSettings} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets workflow settings for a workflow in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWorkflowSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowSetSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowSetSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to set workflow settings on.
																					HPMUInt32 _WorkflowID,							// [in] The identifier of the workflow to set workflow settings for.
																					const HPMProjectWorkflowSettings *_pSettings	// [in] The workflow settings to set on the project. See @{HPMProjectWorkflowSettings}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the latest version of a workflow in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If you specify a non-NULL pointer to the _pSettings parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pSettings parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_ProjectWorkflowNewVersion callback.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWorkflowSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowSetLatestVersion												|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowSetLatestVersion)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to set the latest workflow version on.
																						HPMUInt32 _WorkflowID,							// [in] The identifier of the workflow to set the latest version for.
																						const HPMProjectWorkflowSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectWorkflowSettings} object, representing the returned data. This function will block even in non-blocking mode if this parameter is not NULL.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the newest id version of a workflow in a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWorkflowSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowGetNewestVersion												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowGetNewestVersion)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get the latest workflow version on.
																						HPMUInt32 _WorkflowID,							// [in] The identifier of the workflow to get the latest version for.
																						HPMUInt32 *_pNewWorkflowID						// [out] Pointer to a variable that will receive the identifier of the newest workflow version.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates workflows in a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowEnum}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowEnum															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowEnum)(void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to enumerate workflows for.
																			HPMUInt32 _bOnlyNewestVersions,         // [in] If set to 1 only the newest versions of the workflows are returned.
																			const HPMProjectWorkflowEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMProjectWorkflowEnum} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates workflows of a workflow in a project. The result depends on the	|
|						settings in @{HPMProjectWorkflowEnumWorkflowProperties}.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowEnum},				|
|						@{HPMProjectWorkflowEnumWorkflowProperties}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowEnumWorkflow													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowEnumWorkflow)(void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,														// [in] The unique identifier of the project to enumerate workflows for.
																					HPMUInt32 _WorkflowID,														// [in] The identifier of the workflow to get the workflows for.
																					const HPMProjectWorkflowEnumWorkflowProperties *_pWorkflowEnumProperties,	// [in] The properties that sets the conditions of the enumeration.
																					const HPMProjectWorkflowEnum **_pEnum										// [out] Pointer to a pointer of a @{HPMProjectWorkflowEnum} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates workflow objects of a workflow with a given workflow object id	|
|						in a project.																|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowObjectEnum}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowEnumObject													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowEnumObject)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,															// [in] The unique identifier of the project to enumerate workflows for.
																				HPMUInt32 _WorkflowID,															// [in] The identifier of the workflow to get the old workflows for.
																				HPMInt32 _ObjectID,																// [in] The identifier of the workflow object id.
																				const HPMProjectWorkflowEnumObjectProperties *_pWorkflowObjectEnumProperties,	// [in] The properties that sets the conditions of the enumeration.
																				const HPMProjectWorkflowObjectEnum **_pEnum										// [out] Pointer to a pointer of a @{HPMProjectWorkflowObjectEnum} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																								|
|																											|
|	Description:		Creates a new workflow in a project.												|
|																											|
|	Return Value:		Returns an error code. See @{EHPMError}.											|
|																											|
|	Comments:			The workflow will only be deleted if there are no tasks that reference any			|
|						version of it. Otherwise it will remain with										|
|						@{EHPMProjectWorkflowContainerFlag}::EHPMProjectWorkflowContainerFlag_IsDeleted		|
|						set in @{HPMProjectWorkflowSettings}::_mFlags.										|
|																											|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWorkflowProperties},								|
|						@{ProjectWorkflowDelete}															|
|																											|
|	Location:			Function Pointers																	|
|																											|
|	Index:				!name																				|
|						ProjectWorkflowCreate																|
|																											|
|	Managed:			CanBlock																			|
|																											|
\*_________________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowCreate)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to create a new workflow in.
																				const HPMProjectWorkflowProperties *_pProperties,	// [in] The workflow properties for the workflow to create. See @{HPMProjectWorkflowProperties}.
																				HPMUInt32 *_pWorkflowID								// [out] Pointer to a variable that will receive the identifier of the created workflow. If this parameter is not NULL, the function will block, even in non-blocking operating mode.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a workflow in a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ProjectWorkflowCreate}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectWorkflowDelete														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectWorkflowDelete)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,		// [in] The unique identifier of the project to set QA workflow settings on.
																				HPMUInt32 _WorkflowID		// [in] The identifier of the workflow to delete.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Generates list of possible progression states								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Note that all the required fields in										|
|						@{HPMWorkflowProgressionStructure}::m_pProgressionStates					|
|						are included since no task is available, i.e. no check is made if they are 	|
|						filled in or not.															|
|																									|
|						The function will only traverse one level of transitions, i.e.				|
|						no stacked transitions.														|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflows},					|	
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectUtilGetWorkflowProgression											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectUtilGetWorkflowProgression)(	void *_pSession,																	// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,																// [in] The unique identifier of the project to get the workflow progression from.
																							HPMUInt32 _WorkflowID,																// [in] The workflow id to get progression from. 
																							HPMUniqueID _ResourceID,															// [in] The unique identifier of the resource to get progression for.
																							HPMUInt32 _StatusID,																// [in] The identifier of the workflow status to progress from.
																							const HPMWorkflowProgressionStructure **_pWorkflowProgressionStructure				// [out] Pointer to a pointer of a @{HPMWorkflowProgressionStructure} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets statistics settings for a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectStatisticsSettings}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetStatisticsSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetStatisticsSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get statistics settings for.
																						const HPMProjectStatisticsSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectStatisticsSettings} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets statistics settings for a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectStatisticsSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetStatisticsSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetStatisticsSettings)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to set statistics settings on.
																						const HPMProjectStatisticsSettings *_pSettings		// [in] The statistics settings to set on the project. See @{HPMProjectStatisticsSettings}.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets custom columns of a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectCustomColumns}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCustomColumnsGet														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCustomColumnsGet)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get custom columns for.
																					const HPMProjectCustomColumns **_pColumns	// [out] Pointer to a pointer of a @{HPMProjectCustomColumns} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets custom columns of a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectCustomColumns}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCustomColumnsSet														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCustomColumnsSet)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set custom columns on.
																					const HPMProjectCustomColumns *_pColumns	// [in] The custom columns to set on the project. See @{HPMProjectCustomColumns}.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a custom column in the project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectCustomColumnsColumn}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCustomColumnsCreate													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCustomColumnsCreate)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to create the column in.
																					const HPMProjectCustomColumnsColumn *_pColumn	// [in] The custom column to create in the project. See @{HPMProjectCustomColumnsColumn}.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes custom column task data in a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When deleting a column you need to make sure to call						|
|						ProjectCustomColumnsDeleteTaskData for its column hash, otherwise the data	|
|						will be left in the database. 												|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCustomColumnsDeleteTaskData											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCustomColumnsDeleteTaskData)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID, // [in] The unique identifier of the project to delete custom column task data in.
																							HPMUInt32 _ColumnHash	// [in] The column hash of the data to delete.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Moves custom column data to a new column hash in a project.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When a custom column hash changes you must call								|
|						ProjectCustomColumnsRenameTaskData otherwise the old data					|
|						will be left in the database. 												|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCustomColumnsRenameTaskData											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCustomColumnsRenameTaskData)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,		// [in] The unique identifier of the project to rename custom column task data in.
																							HPMUInt32 _ColumnHashFrom,	// [in] The hash of the custom column to move data from.
																							HPMUInt32 _ColumnHashTo		// [in] The hash of the custom column to move data to.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the activated default columns in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectDefaultColumns}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetDefaultActivatedColumns											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetDefaultActivatedColumns)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get active default columns for.
																							const HPMProjectDefaultColumns **_pColumns			// [out] Pointer to a pointer of a @{HPMProjectDefaultColumns} object, representing the returned data.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the activated default columns in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectDefaultColumns}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetDefaultActivatedColumns											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetDefaultActivatedColumns)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to set active default columns for.
																							const HPMProjectDefaultColumns *_pColumns		// [in] The active columns to enable in the project. See @{HPMProjectDefaultColumns}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets settings for a project.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectSettings}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetSettings															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetSettings)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get settings for.
																			const HPMProjectSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectSettings} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets settings for a project.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectSettings}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetSettings															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetSettings)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to set settings on.
																			const HPMProjectSettings *_pSettings	// [in] The settings to set on the project. See @{HPMProjectSettings}.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets email settings for a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectEmailSettings}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetEmailSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetEmailSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get email setting for.
																					const HPMProjectEmailSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectEmailSettings} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets email setting on a project.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectEmailSettings}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetEmailSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetEmailSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set email settings on.
																					const HPMProjectEmailSettings *_pSettings	// [in] The email settings to set on the project. See @{HPMProjectEmailSettings}.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets wall settings for a project when the wall is in non Kanban mode.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWallSettings}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetWallSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetWallSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get wall settings for. Currently only backlog project identifiers are valid here.
																				const HPMProjectWallSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectWallSettings} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets wall setting on a project when the wall is in non Kanban mode.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWallSettings}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetWallSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetWallSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set wall settings on. Currently only backlog project identifiers are valid here.
																				const HPMProjectWallSettings *_pSettings	// [in] The wall settings to set on the project. See @{HPMProjectWallSettings}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets wall settings for a project when the wall in in Kanban mode.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWallSettings}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetKanbanWallSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetKanbanWallSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get wall settings for. Currently only backlog project identifiers are valid here.
																						const HPMProjectWallSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectWallSettings} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets wall setting on a project when the wall is in Kanban mode.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWallSettings}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetKanbanWallSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetKanbanWallSettings)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set wall settings on. Currently only backlog project identifiers are valid here.
																						const HPMProjectWallSettings *_pSettings	// [in] The wall settings to set on the project. See @{HPMProjectWallSettings}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets wall groups for a project.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWallGroups}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetWallGroups														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetWallGroups)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get wall groups for. Currently only backlog project identifiers are valid here.
																				const HPMProjectWallGroups **_pSettings		// [out] Pointer to a pointer of a @{HPMProjectWallGroups} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets wall groups on a project.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectWallGroups}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetWallGroups														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetWallGroups)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to set wall groups on. Currently only backlog project identifiers are valid here.
																				const HPMProjectWallGroups *_pSettings		// [in] The wall groups to set on the project. See @{HPMProjectWallGroups}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets detailed access rules for a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectDetailedAccessRules}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetDetailedAccessRules												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetDetailedAccessRules)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get detailed access rules for. Currently only QA project identifiers are valid here.
																						const HPMProjectDetailedAccessRules **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectDetailedAccessRules} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets detailed access rules on a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectDetailedAccessRules}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetDetailedAccessRules												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetDetailedAccessRules)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to set detailed access rules for. Currently only QA project identifiers are valid here.
																						const HPMProjectDetailedAccessRules *_pSettings		// [in] The detailed access rules to set on the project. See @{HPMProjectDetailedAccessRules}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a report for a report id in a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMReport}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetReport															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetReport)(void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get the report in. 
																		HPMUniqueID _ResourceID,				// [in] The unique identifier of the resource that created the report to get.
																		HPMUniqueID _ReportID,					// [in] The unique identifier of the report to get.
																		const HPMReport **_pSettings			// [out] Pointer to a pointer of a @{HPMReport} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets reports for a project.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMReports}					        |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetReports															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetReports)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get reports for. 
																			HPMUniqueID _ResourceID,				// [in] The unique identifier of the resource to get reports for.
																			const HPMReports **_pSettings			// [out] Pointer to a pointer of a @{HPMReports} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets reports for a project.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Changes made in submitted reports will not show up in the Hansoft client	|
|						for users that are logged in. This will be fixed in a later release.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMReports}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetReports															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetReports)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,				// [in] The unique identifier of the project to set reports for. 
																			HPMUniqueID _ResourceID,			// [in] The unique identifier of the resource to set reports for.
																			const HPMReports *_pSettings		// [in] The reports to set on the project. See @{HPMReports}.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates resources that have created reports.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceEnum}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectEnumReportResources													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectEnumReportResources)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,				// [in] The unique identifier of the project to get resources for.
																					const HPMResourceEnum **_pEnum		// [out] Pointer to a pointer of a @{HPMResourceEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets bug status statistics for a workflow status in a project.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflowStatusStats}         |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetWorkflowStatusStats												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetWorkflowStatusStats)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get workflow status statistics for. 
																					HPMUInt32 _WorkflowID,								// [in] The workflow where the status exist.
																					HPMUInt32 _WorkflowStatusID,						// [in] The identifier of the workflow status to get statistics for.
																					const HPMProjectWorkflowStatusStats **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectWorkflowStatusStats} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets custom trends settings for a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectCustomStatisticsSettings}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetCustomStatisticsSettings											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetCustomStatisticsSettings)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to get custom trends settings for.
																							const HPMProjectCustomStatisticsSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectCustomStatisticsSettings} object, representing the returned data.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets custom trends settings for a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectCustomStatisticsSettings}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetCustomStatisticsSettings											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetCustomStatisticsSettings)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to set custom trends settings for.
																							const HPMProjectCustomStatisticsSettings *_pSettings	// [in] The detailed access rules to set on the project. See @{HPMProjectCustomStatisticsSettings}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Generates a workflow structure from a number of workflows.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflows},					|
|						@{HPMProjectWorkflows}, @{HPMProjectWorkflowStructure}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectUtilGetWorkflowStructure												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectUtilGetWorkflowStructure)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,										// [in] The unique identifier of the project to generate a workflow structure in.
																							HPMUInt32 _WorkflowID,										// [in] Defines the workflow to start generating tasks from. Must be contained in the workflows defined in _pWorkflowStructure.
																							const HPMProjectWorkflowStructure **_pWorkflowStructure		// [out] Pointer to a pointer of a @{HPMProjectWorkflowStructure} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the completion style of a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMProjectTaskCompletionStyle}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetCompletionStyle													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetCompletionStyle)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get the completion style of.
																					HPMUInt32 *_pStyle						// [out,type=EHPMProjectTaskCompletionStyle] Pointer to a variable that receive the completion style. Will be one of @{EHPMProjectTaskCompletionStyle}.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the value of a project custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{GlobalRegisterCustomSettings}, @{ProjectSetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently if the project ID points to a backlog or QA sub project EHPMCustomSettingsType_Admin is not valid for this function.
																						HPMUniqueID _ProjectID,					// [in] The project to get custom settings value for.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue **_pData	// [out] Pointer to a pointer of a @{HPMCustomSettingValue} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a project custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue}					|
|						@{GlobalRegisterCustomSettings}, @{ProjectGetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently if the project ID points to a backlog or QA sub project EHPMCustomSettingsType_Admin is not valid for this function.
																						HPMUniqueID _ProjectID,					// [in] The project to set custom settings value for.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue *_pData		// [in] The custom settings value to set. If @{HPMCustomSettingValue}::m_bIsDefault is set to false when setting a value the value is removed.
																					);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets project SDK internal data.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{ProjectSetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,					// [in] The project to get SDK internal data for.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData **_pData		// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets project SDK internal data.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{ProjectGetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,					// [in] The project to set SDK internal data for.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. If set to NULL the value will be set to its default value. See @{HPMSDKInternalData}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Adds a resource to be a member of a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectResourceProperties}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceAdd															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceAdd)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to add a resource to.
																			HPMUniqueID _ResourceId,							// [in] The unique identifier of the resource to add as a member of the project.
																			const HPMProjectResourceProperties *_pProperties	// [in] The properties of the resource member in this project. See @{HPMProjectResourceProperties}
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Removes a resource from beeing a member of a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceRemove														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceRemove)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,	// [in] The unique identifier of the project to remove a resource from.
																				HPMUniqueID _ResourceId	// [in] The unique identifier of the resource to remove from being a member of the project.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates the resource members of a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectResourceEnum}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceEnum															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceEnum)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to enumerate members in.
																				const HPMProjectResourceEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMProjectResourceEnum} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the properties for a resource in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectResourceProperties}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceGetProperties												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceGetProperties)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get resource properties in.
																						HPMUniqueID _ResourceId,							// [in] The unique identifier of the resource to get properties of.
																						const HPMProjectResourceProperties **_pProperties	// [out] Pointer to a pointer of a @{HPMProjectResourceProperties} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the properties for a resource in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectResourceProperties}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceSetProperties												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceSetProperties)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to set resource properties in.
																						HPMUniqueID _ResourceId,							// [in] The unique identifier of the resource to set properties for.
																						const HPMProjectResourceProperties *_pProperties	// [in] The properties to set for the resource in the project. See @{HPMProjectResourceProperties}.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the value of a project resource custom setting.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{GlobalRegisterCustomSettings}, @{ProjectResourceSetCustomSettingsValue},	|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceGetCustomSettingsValue										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceGetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently only EHPMCustomSettingsType_Admin is valid for this function.
																								HPMUniqueID _ProjectID,					// [in] The project to get custom settings value for. Must be a real project id, and not a backlog or QA project.
																								HPMUniqueID _ResourceID,				// [in] The resource id to get custom settings value for.
																								const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																								const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																								const HPMCustomSettingValue **_pData	// [out] Pointer to a pointer of a @{HPMCustomSettingValue} object, representing the returned data.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a project resource custom setting.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue}					|
|						@{GlobalRegisterCustomSettings}, @{ProjectResourceGetCustomSettingsValue},	|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceSetCustomSettingsValue										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceSetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently only EHPMCustomSettingsType_Admin is valid for this function.
																								HPMUniqueID _ProjectID,					// [in] The project to set custom settings value for. Must be a real project id, and not a backlog or QA project.
																								HPMUniqueID _ResourceID,				// [in] The resource id to set custom settings value for.
																								const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																								const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																								const HPMCustomSettingValue *_pData		// [in] The custom settings value to set. If set to NULL the value will be set to its default value. See @{HPMCustomSettingValue}.
																							);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets project resource SDK internal data.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{ProjectResourceSetSDKInternalData}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceGetSDKInternalData											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceGetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,					// [in] The project to get SDK internal data for. Must be a real project id, and not a backlog or QA project.
																							HPMUniqueID _ResourceID,				// [in] The resource id to get SDK internal data for.
																							const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																							const HPMSDKInternalData **_pData		// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets project resource SDK internal data.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{ProjectResourceGetSDKInternalData}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceSetSDKInternalData											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,					// [in] The project to set SDK internal data for. Must be a real project id, and not a backlog or QA project.
																							HPMUniqueID _ResourceID,				// [in] The resource id to set SDK internal data for.
																							const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																							const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a resource is member of a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectResourceUtilIsMember													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectResourceUtilIsMember)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,		// [in] The unique identifier of the project to check in.
																					HPMUniqueID _ResourceID,	// [in] The resource id to to check for membership.
																					HPMInt32 *_pReturn			// [out,type=bool] Returns 1 if the resource is a member 0 otherwise.
																				);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the unique identifier of the backlog project of a project.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If the backlog project has not been opened before the returned id will be	|
|						set to -1.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMFunctionProjectOpenBacklogProject}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectUtilGetBacklog														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectUtilGetBacklog)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,	// [in] The unique identifier of the project to get the backlog project for.
																					HPMUniqueID *_pReturn	// [out] Returns the unique identifier of the backlog project.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the unique identifier of the QA project of a project.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If the QA project has not been opened before the returned id will be		|
|						set to -1.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMFunctionProjectOpenQAProject}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectUtilGetQA															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectUtilGetQA)(void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ProjectID,	// [in] The unique identifier of the project to get the QA project for.
																			HPMUniqueID *_pReturn	// [out] Returns the unique identifier of the QA project.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a project is archived.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectUtilIsArchived														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectUtilIsArchived)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,	// [in] The unique identifier of the project to check if it is archived.
																				HPMInt32 *_pReturn		// [out,type=bool] Returns 1 if the project is archived 0 otherwise.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the agile priority custom column hash or 0 if not set.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetAgilePriorityCustomColumn											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetAgilePriorityCustomColumn)(void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get the agile priority custom column in.
																							HPMUInt32 *_pData						// [out] Pointer to a variable that will receive the custom column hash.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the agile priority custom column.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetAgilePriorityCustomColumn											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetAgilePriorityCustomColumn)(void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,					// [in] The unique identifier of the task to set the priority for.
																							HPMUInt32 _Data							// [in] The hash of the custom column to set as agile priority column to set.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a custom column.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectCustomColumnsColumn}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetCustomColumn														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetCustomColumn)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to get the custom column in.
																				HPMUInt32 _ColumnHash,									// [in] The hash of the custom column.
																				const HPMProjectCustomColumnsColumn **_pCustomColumn	// [out] Pointer to a pointer of a @{HPMProjectCustomColumnsColumn} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a custom column for a hash value of an old project column.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectCustomColumnsColumn}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetOldCustomColumn													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetOldCustomColumn)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																			   HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get the custom column in.
																			   HPMUInt32 _ColumnHash,								// [in] The hash of a deleted custom column.
																			   const HPMProjectCustomColumnsColumn **_pCustomColumn	// [out] Pointer to a pointer of a @{HPMProjectCustomColumnsColumn} object, representing the returned data.
																			   );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the default activated columns in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						These are the default activated columns in a project that cannot be			|
|						hidden. They are not included in the list returned by						|
|						@{ProjectGetDefaultActivatedColumns}										|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectDefaultColumns},				|
|						@{EHPMProjectGetDefaultActivatedNonHidableColumnsFlag}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetDefaultActivatedNonHidableColumns									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetDefaultActivatedNonHidableColumns)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																									HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get the default activated columns for.
																									HPMUInt32 _Flags,								// [in,type=EHPMProjectGetDefaultActivatedNonHidableColumnsFlag] Flags specifying which columns to get. Can be any combination of @{EHPMProjectGetDefaultActivatedNonHidableColumnsFlag}.
																									const HPMProjectDefaultColumns **_pColumns		// [out] Pointer to a pointer of a @{HPMProjectDefaultColumns} object, representing the returned data.
																									);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets all available default columns in a project.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						The columns in @{ProjectGetDefaultActivatedNonHidableColumns} are not		|
|						included.																	|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectDefaultColumns}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetDefaultAvailableColumns											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetDefaultAvailableColumns)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get all available default columns for.
																							const HPMProjectDefaultColumns **_pColumns			// [out] Pointer to a pointer of a @{HPMProjectDefaultColumns} object, representing the returned data.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar working days in a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMWorkingDays}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarGetWorkingDays												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarGetWorkingDays)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get the calendar working days for.
																						const HPMWorkingDays **_pWorkingDays	// [out] Pointer to a pointer of a @{HPMWorkingDays} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the calendar working days in a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMWorkingDays}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarSetWorkingDays												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarSetWorkingDays)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to set the calendar working days for.
																						const HPMWorkingDays *_pWorkingDays		// [in] The calendar working days to set. See @{HPMWorkingDays}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar custom working days for specific days in a project.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomWorkingDays}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarGetCustomWorkingDays											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarGetCustomWorkingDays)(void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to get custom specific working days for.
																							const HPMCustomWorkingDays **_pChangedWorkingDays	// [out] Pointer to a pointer of a @{HPMCustomWorkingDays} object, representing the returned data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the calendar custom working days for specific days in a project.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMCustomWorkingDays}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarSetCustomWorkingDays											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarSetCustomWorkingDays)(void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,								// [in] The unique identifier of the project to set custom specific working days for.
																							const HPMCustomWorkingDays *_pChangedWorkingDays	// [in] The custom working days. See @{HPMCustomWorkingDays}.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar default working hours for a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMWorkingHours}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarGetWorkingHours												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarGetWorkingHours)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to get the working hours for.
																						const HPMWorkingHours **_pWorkingHours	// [out] Pointer to a pointer of a @{HPMWorkingHours} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the calendar default working hours for a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMWorkingHours}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarSetWorkingHours												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarSetWorkingHours)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to set the working hours for.
																						const HPMWorkingHours *_pWorkingHours	// [in] The default working hours. See @{HPMWorkingHours}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar custom working hours for specific days in a project		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomWorkingHours}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarGetCustomWorkingHours										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarGetCustomWorkingHours)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to get custom working hours for.
																							const HPMCustomWorkingHours **_pCustomWorkingHours		// [out] Pointer to a pointer of a @{HPMCustomWorkingHours} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets calendar custom working hours for specific days in a project			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMCustomWorkingHours}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarSetCustomWorkingHours										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarSetCustomWorkingHours)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,									// [in] The unique identifier of the project to set custom working hours for.
																							const HPMCustomWorkingHours *_pCustomWorkingHours		// [in] The custom working hours to set. See @{HPMCustomWorkingHours}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar holidays for a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMHolidays}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarGetHolidays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarGetHolidays)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,			// [in] The unique identifier of the project to get holidays for.
																					const HPMHolidays **_pHolidays	// [out] Pointer to a pointer of a @{HPMHolidays} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the calendar holidays for a project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMHolidays}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectCalendarSetHolidays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectCalendarSetHolidays)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,			// [in] The unique identifier of the project to set holidays for.
																					const HPMHolidays *_pHolidays	// [in] Holidays to set. See @{HPMHolidays}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the calendar info for a day in a project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCalendarDayInfo}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetCalendarDayInfo													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetCalendarDayInfo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,						// [in] The unique identifier of the project to get the calendar info for a day for.
																					HPMUniqueID _UserID,						// [in] If set to a valid resource id, the calendar info will be valid for that resource. If set to -1 the returned info will be for the project.
																					HPMUInt64 _Date,							// [in] The date to get the calendar info for. Expressed as the number of micro seconds since 1970 UTC.
																					const HPMCalendarDayInfo **_pCalendarInfo	// [out] Pointer to a pointer of a @{HPMCalendarDayInfo} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the view presets for a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectViewPresets}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectGetViewPresets														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectGetViewPresets)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to get view presets for.
																					const HPMProjectViewPresets **_pSettings	// [out] Pointer to a pointer of a @{HPMProjectViewPresets} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the view presets for a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectViewPresets}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetViewPresets														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetViewPresets)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,							// [in] The unique identifier of the project to set view presets for.
																					const HPMProjectViewPresets *_pSettings		// [in] User view presets to set. See @{HPMProjectViewPresets}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Applies the view presets for a resource in a project.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMProjectViewPreset}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectViewPresetApply														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectViewPresetApply)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to apply the view preset in.
																							HPMUniqueID _ResourceID,				// [in] The resource to apply the user view preset for.
																							const HPMProjectViewPreset *_pSettings	// [in] User view preset to apply. See @{HPMProjectViewPreset}.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the timesheet lock for a project.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectSetTimesheetLock														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectSetTimesheetLock)(void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ProjectID,			// [in] The unique identifier of the project to set the timesheet lock in.
																				HPMUInt64 _LockDate,			// [in] The end date that the lock effects. Expressed as the number of microseconds since 1970 UTC.
																				HPMInt32 _bLocked				// [in] Set to 1 if resources cannot change timesheets before _LockDate, 0 otherwise.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Displays a message in the client if the specified user is logged in.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ProjectDisplayUserMessage													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionProjectDisplayUserMessage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ProjectID,					// [in] The unique identifier of the project to display the message in client for. If set to -1 the message will display in all the windows in the client.
																					HPMUniqueID _ResourceID,				// [in] The unique identifier of the resource to display the message in client for if the resource is logged in. If called from a client plugin this user has to be the currently logged in resource.
																					HPMInt32 _MessageType,					// [in,type=EHPMProjectUserMessageType] The type of message to display. Can be one of @{EHPMProjectUserMessageType}.
																					const HPMUntranslatedString *_pMessage	// [in] The message to display.
																				);

#endif
