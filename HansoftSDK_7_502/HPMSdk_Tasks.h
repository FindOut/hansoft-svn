
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK tasks											|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/6 - Tasks											|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Task field identifier used in @{HPMChangeCallbackData_TaskChange},			|
|						@{HPMDataHistoryEntry}::m_FieldID, @{HPMTaskField}::m_FieldID  and			|
|						@{HPMProjectDetailedAccessRuleFunction}::m_FunctionID.						|
|																									|
|	Comments:			The task fields identifiers correspond to the different TaskSetxxx and		|
|						TaskGetxxx functions.														|
|																									|
|	See Also:			@{HPMChangeCallbackData_TaskChange}, 										|
|						@{HPMDataHistoryEntry}, @{HPMProjectDetailedAccessRuleFunction} 			|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskField
{
	EHPMTaskField_NewVersionOfSDKRequired = 0,			// The task field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskField_Container,							// The container a task resides in. Can be for example the project schedule, the backlog project or the QA project. Used: Change callback.
	EHPMTaskField_BacklogCategory,						// The backlog category of the task. Used: Change callback, task history.
	EHPMTaskField_Color,								// The color of the task. Used: Change callback, task history.
	EHPMTaskField_ComplexityPoints,						// The complexity points of the task. Used: Change callback, task history.
	EHPMTaskField_Confidence,							// The confidence of the task. Used: Change callback, task history.
	EHPMTaskField_EstimatedIdealDays,					// The estimated ideal days of the task. Used: Change callback, task history.
	EHPMTaskField_Priority,								// The priority of the task. Used: Change callback, task history.
	EHPMTaskField_Risk,									// The risk of the task. Used: Change callback, task history.
	EHPMTaskField_StartOffset,							// The start offset of the task. Used: Change callback, task history.
	EHPMTaskField_Duration,								// The duration of the task. Used: Change callback, task history.
	EHPMTaskField_ForceSubProject,						// The force sub project status of the task. Used: Change callback, task history.
	EHPMTaskField_BudgetedWork,							// The budgeted work of the task. Used: Change callback, task history.
	EHPMTaskField_LockedType,							// The locked type of the task. Used: Change callback, task history.
	EHPMTaskField_PercentComplete,						// The percent complete of the task. Used: Change callback, task history.
	EHPMTaskField_Status,								// The status of the task. Used: Change callback, task history.
	EHPMTaskField_Type,									// The type of the task. Used: Change callback, task history.
	EHPMTaskField_Unlocked,								// The unlocked status of the task. Used: Change callback, task history.
	EHPMTaskField_VacationOptions,						// The vacations options of the task. Used: Change callback, task history.
	EHPMTaskField_Comment,								// The comments on the task. Used: Task history.
	EHPMTaskField_Description,							// The description of the task. Used: Change callback, task history, access rules.
	EHPMTaskField_Hyperlink,							// The hyper link of the task. Used: Change callback, task history.
	EHPMTaskField_LinkedToMilestone,					// The milestone a task is linked to. Used: Change callback, task history.
	EHPMTaskField_LinkedToSprint,						// The sprint a task is linked to. Used: Change callback, task history.
	EHPMTaskField_LockedBy,								// The user a task is locked by. Used: Change callback.
	EHPMTaskField_OriginallyCreatedBy,					// The originally created/reported by user of a task. Used: Change callback, task history.
	EHPMTaskField_AttachedDocuments,					// The attached documents of a task. Used: Change callback, task history.
	EHPMTaskField_DelegateTo,							// The resources a task is delegated to. Used: Change callback, task history.
	EHPMTaskField_SprintAllocatedResources,				// The resources allocated to a sprint. Used: Change callback, task history.
	EHPMTaskField_Completed,							// The completed status of a task. Used: Change callback, task history.
	EHPMTaskField_TimeZones,							// The time zones of a scheduled task. Used: Change callback, task history.
	EHPMTaskField_VisibleTo,							// The resources a task is visible to. Used: Change callback, task history.
	EHPMTaskField_WorkRemaining,						// The work remaining of the task. Used: Change callback, task history.
	EHPMTaskField_SprintResourceAllocation,				// The resource allocation of resources on a task. Used: Change callback, task history.
	EHPMTaskField_CommentsOptions,						// The comments options set on a task. Used: Change callback, task history.
	EHPMTaskField_WorkflowStatus,						// The workflow status of a task. Used: Change callback, task history.
	EHPMTaskField_LastUpdatedTime,						// The last time a task was updated. Used: Change callback.
	EHPMTaskField_Severity,								// The severity of a task. Used: Change callback, task history.
	EHPMTaskField_DetailedDescription,					// The detailed description for a task. Used: Change callback, task history, access rules.
	EHPMTaskField_UserStoryFlag,						// The user story flag for a task. Used: Change callback, task history.
	EHPMTaskField_SprintResourcesHaveFullRights,		// The sprint resources full rights flag for a task. Used: Change callback, task history.
	EHPMTaskField_ID,									// The id for a task or bug. Used: Change callback.
	EHPMTaskField_StepsToReproduce,						// The steps to reproduce for a task. Used: Change callback, task history, access rules.
	EHPMTaskField_LinkedTo,								// The linked to field of a task. Used: Change callback, task history.

	EHPMTaskField_CustomColumnData,						// Data for a custom column on a task. Used: Task history.
	EHPMTaskField_TimeZoneStart,						// Data for time zone start. Used: Task history.
	EHPMTaskField_TimeZoneEnd,							// Data for time zone end. Used: Task history.
	EHPMTaskField_ResourceAllocationFirst,				// Data for the first allocated resource. Used: Task history.
	EHPMTaskField_ResourceAllocationFirstPercent,		// Data for the percentage resource allocation of the first resource. Used: Task history.
	EHPMTaskField_ResourceAllocationMore,				// Data for the rest of the allocated resources (resource and resource allocation percentage). Used: Task history.

	EHPMTaskField_WallItemColor,						// The color of a task when viewed as wall item. Used: Change callback, task history.
	EHPMTaskField_WallItemPositions,					// The positions of a task when viewed as wall item. Used: Change callback.

	EHPMTaskField_Workflow,								// The workflow set on a task. Used: Change callback, task history.
	EHPMTaskField_LinkedToPipelineTask,					// The pipeline task that this task is linked to. Used: Change callback, task history.
	EHPMTaskField_CreatedPipelineTasks,					// The tasks created by a pipeline task. Used: Change callback.
	EHPMTaskField_CreatedFromWorkflowObject,			// The workflow and workflow object that the pipeline task was created from. Used: Change callback.
	EHPMTaskField_TotalDuration,						// The total duration of a scheduled task calculated from time zones. Used: Change callback, task history.
	EHPMTaskField_DefaultWorkflow,						// The default workflow that will be set on new sub tasks. Used: Change callback, task history.
	EHPMTaskField_FullyCreated,							// The fully created flag. Used: Change callback, task history.

	EHPMTaskField_SprintPriority,						// The sprint priority. Used: Change callback, task history.
	EHPMTaskField_BacklogPriority,						// The main backlog priority. Used: Change callback, task history.
	EHPMTaskField_BugPriority,							// The bug priority. Used: Change callback, task history.
	EHPMTaskField_Archived,								// The archived status. Used: Change callback, task history.
	EHPMTaskField_IdealDaysHistory,						// The ideal days history. Used: Change callback, task history.
	EHPMTaskField_PointsHistory,						// The points history. Used: Change callback, task history.
	EHPMTaskField_Undefined,							// The task field is not defined, used if there is no mapping between column and task field.
	EHPMTaskField_LastUserInterfaceAction,				// The last user interface action on item. Used: Task history, change callback
	EHPMTaskField_WorkRemainingHistory,					// Work remaining history. Used: Task history, change callback
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Task reference field identifier used in										|
|						@{HPMChangeCallbackData_TaskRefChange}.										|
|																									|
|	Comments:			The task fields identifiers correspond to the different TaskRefSetxxx and	|
|						TaskRefGetxxx functions.													|
|																									|
|	See Also:			@{HPMChangeCallbackData_TaskRefChange}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskRefField
{
	EHPMTaskRefField_NewVersionOfSDKRequired = 0,	// The task reference field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskRefField_TaskID,						// The unique identifier of the task the reference is referring to.
	EHPMTaskRefField_TreeLevel,						// The tree level that the task reference is at.
	EHPMTaskRefField_ParentID,						// The unique identifier of the task that is the parent of this task in the tree.
	EHPMTaskRefField_NewlyCreated,					// If the task in newly created and not inspected by the user.
	EHPMTaskRefField_UIDHistory,					// The unique id history of the task. This history is used to keep track of project history when various operations are performed.
	EHPMTaskRefField_ParentIDWorkPriority,			// The unique identifier of the task that is the parent of this task in the work priority list.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Connection type used for @{TaskConnectionSetConnectionType} and				|
|						@{TaskConnectionGetConnectionType}											|
|																									|
|	See Also:			@{TaskConnectionSetConnectionType}, @{TaskConnectionGetConnectionType}		|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskConnectionType
{
	EHPMTaskConnectionType_NewVersionOfSDKRequired,				// The connection type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskConnectionType_EndToStart,							// End to start connection type.
	EHPMTaskConnectionType_EndToEnd,							// End to end connection type.
	EHPMTaskConnectionType_StartToEnd,							// Start to end connection type.
	EHPMTaskConnectionType_StartToStart,						// Start to end connection type.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Task status used for @{TaskGetStatus} and @{TaskSetStatus}.					|
|																									|
|	See Also:			@{TaskGetStatus}, @{TaskSetStatus}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskStatus
{
	EHPMTaskStatus_NewVersionOfSDKRequired,	// The task status type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskStatus_NoStatus,				// The task has no status.
	EHPMTaskStatus_NotDone,					// The task is not done.
	EHPMTaskStatus_InProgress,				// The task is in progress.
	EHPMTaskStatus_Completed,				// The task is completed.
	EHPMTaskStatus_Blocked,					// The task is blocked.
	EHPMTaskStatus_Deleted,					// The task is deleted.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Task locked type used for @{HPMTaskChangeDispositionEntry} and				|
|						@{TaskGetLockedType}.														|
|																									|
|	See Also:			@{HPMTaskChangeDispositionEntry}, @{TaskGetLockedType}						|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskLockedType
{
	EHPMTaskLockedType_NewVersionOfSDKRequired,	// The task locked type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskLockedType_Normal,					// Normal task.
	EHPMTaskLockedType_BacklogItem,				// Locked to be a backlog item.
	EHPMTaskLockedType_SprintItem,				// Locked to be a sprint item.
	EHPMTaskLockedType_QABug,					// Locked to be an QA bug.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Task type used for @{HPMTaskChangeDispositionEntry} and @{TaskGetType}.		|
|																									|
|	See Also:			@{HPMTaskChangeDispositionEntry}, @{TaskGetType}							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskType
{
	EHPMTaskType_NewVersionOfSDKRequired,	// The task type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskType_Planned,					// The task is a planned task.
	EHPMTaskType_Milestone,					// The task is a milestone.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Backlog category used for @{TaskSetBacklogCategory} and						|
|						@{TaskGetBacklogCategory}.													|
|																									|
|	See Also:			@{TaskSetBacklogCategory}, @{TaskGetBacklogCategory}						|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskBacklogCategory
{
	EHPMTaskBacklogCategory_NewVersionOfSDKRequired,	// The backlog category did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskBacklogCategory_None,						// No backlog category (unset).
	EHPMTaskBacklogCategory_Requirement,				// A requirement.
	EHPMTaskBacklogCategory_Enhancement,				// An enhancement.
	EHPMTaskBacklogCategory_TechnologyUpgrade,			// A technology upgrade.
	EHPMTaskBacklogCategory_BugA,						// A "A Bug".
	EHPMTaskBacklogCategory_BugB,						// A "B Bug".
	EHPMTaskBacklogCategory_BugC,						// A "C Bug".
	EHPMTaskBacklogCategory_BugD,						// A "D Bug".
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Backlog category used for @{TaskSetSeverity} and							|
|						@{TaskGetSeverity}.															|
|																									|
|	See Also:			@{TaskSetSeverity}, @{TaskGetSeverity}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskSeverity
{
	EHPMTaskSeverity_NewVersionOfSDKRequired,	// The severity type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this severity type.
	EHPMTaskSeverity_None,						// No severity (unset).
	EHPMTaskSeverity_A,							// Severity type A.
	EHPMTaskSeverity_B,							// Severity type B.
	EHPMTaskSeverity_C,							// Severity type C.
	EHPMTaskSeverity_D,							// Severity type D.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Confidence used for @{TaskSetConfidence} and @{TaskGetConfidence}.			|
|																									|
|	See Also:			@{TaskSetConfidence}, @{TaskGetConfidence}									|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskConfidence
{
	EHPMTaskConfidence_NewVersionOfSDKRequired,	// The confidence level did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskConfidence_None,					// No confidence (unset).
	EHPMTaskConfidence_Low,						// Low confidence.
	EHPMTaskConfidence_Medium,					// Medium confidence.
	EHPMTaskConfidence_High,					// High confidence.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Priority used for data history for deprecated priority.						|
|																									|
|	See Also:			@{HPMDataHistoryEntry}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskPriority
{
	EHPMTaskPriority_NewVersionOfSDKRequired,	// The priority level did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskPriority_None,						// No priority (unset).
	EHPMTaskPriority_Low,						// Low priority.
	EHPMTaskPriority_Medium,					// Medium priority.
	EHPMTaskPriority_High,						// High priority.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Risk used for @{TaskSetRisk} and @{TaskGetRisk}								|
|																									|
|	See Also:			@{TaskSetRisk}, @{TaskGetRisk}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskRisk
{
	EHPMTaskRisk_NewVersionOfSDKRequired,	// The risk level did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskRisk_None,						// No risk (unset).
	EHPMTaskRisk_Low,						// Low risk.
	EHPMTaskRisk_Medium,					// Medium risk.
	EHPMTaskRisk_High,						// High risk.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Last user interface action used for task history.							|
|																									|
|	See Also:			@{VariantDecode_HPMInt32}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskLastUserInterfaceAction
{
	EHPMTaskLastUserInterfaceAction_NewVersionOfSDKRequired,									// The interface action did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMTaskLastUserInterfaceAction_None,														// None.
	EHPMTaskLastUserInterfaceAction_WhenCreating,												// Creating an item.
	EHPMTaskLastUserInterfaceAction_AutoSummary,												// Auto summarizing an item.
	EHPMTaskLastUserInterfaceAction_UndoRedoProjectView,										// When doing undo redo in project view.
	EHPMTaskLastUserInterfaceAction_UndoRedoWallView,											// When doing undo redo in wall view.
	EHPMTaskLastUserInterfaceAction_DraggingWallView,											// When dragging in wall view.
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_ProjectView,						// When setting work remaining from project view.
	EHPMTaskLastUserInterfaceAction_SettingItemStatus_ProjectView,								// When setting item status from project view.
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_LosingFocus_DetailsWindow,			// When setting work remaining when focus is lost in details window.
	EHPMTaskLastUserInterfaceAction_SettingFromWorkRemaining_SettingDirectly_DetailsWindow,		// When setting work remaining when directly inputting in details window.
	EHPMTaskLastUserInterfaceAction_SettingItemStatus_DetailsWindow,							// When setting item status in details window.

};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{HPMTaskVacationOptions}::m_Flags.							|
|																									|
|	Comments:			If @{EHPMTaskVacationOptionsFlag}_WorkDaysValid or							|
|						@{EHPMTaskVacationOptionsFlag}_WorkPassesValid is set the vacation task		|
|						will we counted as a calender modifying task, otherwise it's a vacation		|
|						task.																		|
|																									|
|	See Also:			@{HPMTaskVacationOptions}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskVacationOptionsFlag
{
	EHPMTaskVacationOptionsFlag_None = 0,
	EHPMTaskVacationOptionsFlag_WorkMonday = 1 << 0,			// Work on Mondays.
	EHPMTaskVacationOptionsFlag_WorkTuesday = 1 << 1,			// Work on Tuesdays.
	EHPMTaskVacationOptionsFlag_WorkWednesday = 1 << 2,			// Work on Wednesdays.
	EHPMTaskVacationOptionsFlag_WorkThursday = 1 << 3,			// Work on Thursdays.
	EHPMTaskVacationOptionsFlag_WorkFriday = 1 << 4,			// Work on Fridays.
	EHPMTaskVacationOptionsFlag_WorkSaturday = 1 << 5,			// Work on Saturdays.
	EHPMTaskVacationOptionsFlag_WorkSunday = 1 << 6,			// Work on Sundays.
	EHPMTaskVacationOptionsFlag_IsVacationTask = 1 << 7,		// This task is a vacation/out of office task. If this flag is not set, all other flags are ineffective.
	EHPMTaskVacationOptionsFlag_WorkDaysValid = 1 << 8,			// The work day flags are valid. If this flag is not set the work day flags are ignored.
	EHPMTaskVacationOptionsFlag_WorkPassesValid = 1 << 9,		// Work passes valid. If this flag is not set @{HPMTaskVacationOptions}::m_WorkDays are ignored.
	EHPMTaskVacationOptionsFlag_UnionFreeDays = 1 << 10,		// Overlapping regions will union free days.
	EHPMTaskVacationOptionsFlag_UnionWorkingDays = 1 << 11,		// Overlapping regions will union working days.
	EHPMTaskVacationOptionsFlag_ShortestWorkingHours = 1 << 12,	// Overlapping regions will choose shortest working hours.
	EHPMTaskVacationOptionsFlag_LongestWorkingHours = 1 << 13,	// Overlapping regions will choose longest working hours.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{HPMTaskComment}::m_Flags.									|
|																									|
|	See Also:			@{HPMTaskComment}															|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskCommentFlag
{
	EHPMTaskCommentFlag_None = 0,
	EHPMTaskCommentFlag_IsPosted = 1 << 0,	// The comment is posted.
	EHPMTaskCommentFlag_IsWriting = 1 << 1,	// Someone is writing in the comment.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Link type used for @{HPMTaskLinkedToLink}::m_LinkedToType.					|
|																									|
|	See Also:			@{HPMTaskLinkedToLink}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/

enum EHPMTaskLinkedToLinkType
{
	EHPMTaskLinkedToLinkType_NewVersionOfSDKRequired,	// The linked to type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMTaskLinkedToLinkType_TaskItemOrBug,				// Linked to a task item or bug. The identifier should point to a task reference.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Wall item color used for @{TaskSetWallItemColor} and @{TaskGetWallItemColor}|
|																									|
|	See Also:			@{TaskSetWallItemColor}, @{TaskGetWallItemColor}							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/

enum EHPMTaskWallItemColor
{
	EHPMTaskWallItemColor_NewVersionOfSDKRequired,	// The wall item color did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMTaskWallItemColor_Yellow,					// Yellow wall item color.
	EHPMTaskWallItemColor_Blue,						// Blue wall item color.
	EHPMTaskWallItemColor_Green,					// Green wall item color.
	EHPMTaskWallItemColor_Red,						// Red wall item color.
	EHPMTaskWallItemColor_Magenta,					// Magenta wall item color.
	EHPMTaskWallItemColor_Orange,					// Orange wall item color.
	EHPMTaskWallItemColor_Cyan,						// Cyan wall item color.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		The priorities used in @{TaskGetAgilePriorityCategory},						|
|						@{TaskSetAgilePriorityCategory},											|
|						@{TaskGetSprintPriority}, @{TaskSetSprintPriority},							|
|						@{TaskGetBacklogPriority}, @{TaskSetBacklogPriority},						|
|						@{TaskGetBugPriority} and @{TaskSetBugPriority}								|
|																									|
|	See Also:			@{TaskGetAgilePriorityCategory}, @{TaskSetAgilePriorityCategory},			|
|						@{TaskGetSprintPriority}, @{TaskSetSprintPriority},							|
|						@{TaskGetBacklogPriority}, @{TaskSetBacklogPriority},						|
|						@{TaskGetBugPriority}, @{TaskSetBugPriority}								|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/

enum EHPMTaskAgilePriorityCategory
{
	EHPMTaskAgilePriorityCategory_NewVersionOfSDKRequired,		// The priorty dd not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMTaskAgilePriorityCategory_None,							// The no category.
	EHPMTaskAgilePriorityCategory_VeryLow,						// The very low category.
	EHPMTaskAgilePriorityCategory_Low,							// The low category.
	EHPMTaskAgilePriorityCategory_Medium,						// The medium category.
	EHPMTaskAgilePriorityCategory_High,							// The high category.
	EHPMTaskAgilePriorityCategory_VeryHigh,						// The very high category.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{HPMTaskChangeDispositionEntry}::m_ChangeFlags.				|
|																									|
|																									|
|	See Also:			@{HPMTaskChangeDispositionEntry}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskChangeDispositionEntryChangeFlag
{
	EHPMTaskChangeDispositionEntryChangeFlag_None = 0,
	EHPMTaskChangeDispositionEntryChangeFlag_PreviousRefID = 1 << 0,
	EHPMTaskChangeDispositionEntryChangeFlag_TreeLevel = 1 << 1,

	EHPMTaskChangeDispositionEntryChangeFlag_LinkedToSprint = 1 << 2,
	EHPMTaskChangeDispositionEntryChangeFlag_LinkToMainRealWorkflowItem = 1 << 3,
	EHPMTaskChangeDispositionEntryChangeFlag_TaskType = 1 << 4,
	EHPMTaskChangeDispositionEntryChangeFlag_TaskLockedType = 1 << 5,
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{HPMTaskChangeDisposition}::m_OptionFlags.					|
|																									|
|	See Also:			@{HPMTaskChangeDisposition}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskChangeDispositionOptionFlag
{
	EHPMTaskChangeDispositionOptionFlag_None = 0,
	EHPMTaskChangeDispositionOptionFlag_ChangeWorkPriorityDisposition = 1 << 0,		// Use to true to change the order of the work priority list. In this case only the @{HPMTaskChangeDispositionEntry}::m_PreviousRefID property is valid.
	EHPMTaskChangeDispositionOptionFlag_ReportDebugInfoOnRejection = 1 << 1,	// Use to get a string of the task tree returned for debugging purposes if a rejection occurs for the disposition change. Will only be honored available in debug mode.
	EHPMTaskChangeDispositionOptionFlag_AllowInvalidChanges = 1 << 2,				// Use to allow invalid changes for debug purposes.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{TaskRefConnectionsEnum}.									|
|																									|
|	See Also:			@{TaskRefConnectionsEnum}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskConnectionFlag
{
	EHPMTaskConnectionFlag_None = 0,
	EHPMTaskConnectionFlag_Dependencies = 1 << 0,	// Include connections from the given task reference.
	EHPMTaskConnectionFlag_Dependents = 1 << 1,		// Include connections to the given task reference.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{TaskSetWorkflowStatus}, @{TaskSetStatus} and				|
|						@{TaskSetResourceAllocation}.												|
|																									|
|	See Also:			@{TaskSetWorkflowStatus}, @{TaskSetStatus}, @{TaskSetResourceAllocation}	|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskSetStatusFlag
{
	EHPMTaskSetStatusFlag_None = 0,
	EHPMTaskSetStatusFlag_DoAutoAssignments = 1 << 0,	// Auto assign resources according to workflow rules
	EHPMTaskSetStatusFlag_DoAutoCompletion = 1 << 1,	// Set item status and work remaining according to worklow rules
	EHPMTaskSetStatusFlag_All = 2147483647
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Flags used for @{TaskFind}.													|
|																									|
|	See Also:			@{TaskFind}																	|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTaskFindFlag
{
	EHPMTaskFindFlag_None = 0,
	EHPMTaskFindFlag_ArchivedProjects = 1 << 0,	// Include archived projects in global find.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating tasks or task references in a container.				|
|																									|
|	See Also:			@{TaskEnum}, @{TaskRefEnum}, @{TaskEnumReferences}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskEnum
{
	HPMUInt32 m_nTasks;				// The number of task enumerated.
	const HPMUniqueID *m_pTasks;	// Pointer to a list of unique identifiers pointing to the tasks or task references.
} HPMTaskEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating connected tasks.										|
|																									|
|	See Also:			@{TaskEnum}																	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskConnectionEnum
{
	HPMUInt32 m_nConnectedTasks;			// The number of connected tasks enumerated.
	const HPMUniqueID *m_pConnectedTasks;	// Pointer to a list of unique reference identifiers pointing to the connected task refs.
} HPMTaskConnectionEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating custom column data on a task.							|
|																									|
|	See Also:			@{TaskEnumCustomColumnData}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCustomColumnDataEnum
{
	HPMUInt32 m_nHashes;			// The enumerated column hash values
	const HPMUInt32 *m_pHashes;		// Pointer to a list of column hash values that represent the custom column data that is stored on a task.
} HPMTaskCustomColumnDataEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{HPMTaskCreateUnifiedEntry}.										|
|																									|
|	See Also:			@{HPMTaskCreateUnifiedEntry}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCreateUnifiedReference
{
	HPMInt32 m_bLocalID;				// [default=0] Set to 1 if m_RefID points to a local id. Local ID:s are only valid for tasks specified in the same @{HPMTaskCreateUnified} structure.
	HPMInt32 m_bHasNonSumbittedBetween;	// [default=0] Set to 1 if m_RefID points to a id that has tasks after it that was not included in this create command.
	HPMUniqueID m_RefID;				// The unique ID of the task to link to. Can be both a reference ID and a normal task ID depending on the thing referred to.
} HPMTaskCreateUnifiedReference;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{HPMTaskCreateUnified}. All entries are sanitized on the server,	|
|						and changed to the most appropriate value. If for example the immediate		|
|						parent doesn't exist, the task is created under the next immediate parent	|
|						and so forth.																|
|																									|
|	See Also:			@{HPMTaskCreateUnified}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCreateUnifiedEntry
{
	HPMInt32 m_bIsProxy;									// [default=0] Set to true if this entry is a proxy.
	HPMUniqueID m_LocalID;									// Used to match this entry against against @{HPMChangeCallbackData_TaskCreateUnified}::m_LocalTempRefID. Also used to refer to this task by local id in @{HPMTaskCreateUnifiedReference}.

	HPMUniqueID m_ReuseUniqueRefID;							// Valid for both proxies and normal tasks. If a unique task reference identifier is free and the task originates from that identifier, specify it here. This is used in undo/redo/copy/paste/import/export/etc to be able to keep track of tasks in project history. This is the reference identifier.
	HPMInt32 m_TaskType;									// [type=EHPMTaskType,default=EHPMTaskType_Planned] Should be one of @{EHPMTaskType}. If a type that is invalid in the particular position or type of project this task is created in, the type will be reset to a valid value.
	HPMInt32 m_TaskLockedType;								// [type=EHPMTaskLockedType,default=EHPMTaskLockedType_Normal] Should be one of @{EHPMTaskLockedType}. If a type that is invalid in the particular position or type of project this task is created in, the type will be reset to a valid value.

	HPMUniqueID m_Proxy_ReferToRefTaskID;					// Valid only for proxy tasks, ignored otherwise. This is the task reference unique identifier of the task that the proxy is to refer to. Currently the only supported usage is to create a proxy in a sprint where the proxy points to a task reference in the project backlog.

	HPMUniqueID m_NonProxy_ReuseUniqueID;					// Valid only for normal tasks, ignored otherwise. If the a unique task identifier is free and the task originates from that identifier, specify it here. This is used to preserve task history for the task.
	HPMUInt32 m_NonProxy_ReuseID;							// [default=0] Valid only for normal tasks, ignored otherwise. If the a identifier is free and the task originates from that identifier, specify it here. This is used in undo/redo/copy/paste/import/export/etc to be able to keep the same user id. This is the identifier that is presented as the numeric identifier to the user.
	HPMUInt32 m_NonProxy_WorkflowID;						// [default=0xffffffff] Valid only for normal tasks, ignored otherwise. If this is set to anything else than 0xffffffff this refers to the workflow or pipeline the newly created task should have.
	HPMUInt32 m_NonProxy_bRestoreFromHistory;				// [default=0,type=bool] Restores task properties from change history found on the ID in m_NonProxy_ReuseUniqueID.

	HPMTaskCreateUnifiedReference m_PreviousRefID;			// This should refer to the previous reference of the task you want to insert this task after in the schedule disposition. This is a flat list. If you want to insert it at the top of the list specify -1.
	HPMTaskCreateUnifiedReference m_PreviousWorkPrioRefID;	// This should refer to the previous reference of the task you want to insert this task after in the work priority list. If you want to insert it at the top of the list specify -2.
	HPMUInt32 m_nParentRefIDs;								// The number of parent references this task has.
	const HPMTaskCreateUnifiedReference *m_pParentRefIDs;	// Here you should specify the whole list of parent references for the place where you want to create this task in the schedule disposition. The first entry should be the task closest to the root of the schedule, the last entry the immediate parent of the task you are creating. You must at least specify the closest parent. The whole parent chain is only used if a parent is deleted before the create message reaches the server. If the chain is sent and a parent is deleted, the new task will end up as close as possible to the intended location, otherwise it will end up at the root level.

} HPMTaskCreateUnifiedEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{TaskCreateUnified}.												|
|																									|
|	See Also:			@{TaskCreateUnified}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCreateUnified
{
	HPMUInt32 m_nTasks;							// The number of tasks to create.
	const HPMTaskCreateUnifiedEntry *m_pTasks;	// Link to a list of @{HPMTaskCreateUnifiedEntry} specifying the properties of the tasks you want to create.
} HPMTaskCreateUnified;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{HPMTaskChangeDisposition}. All entries are sanitized				|
|						and changed to the most appropriete value. If for example the immediate		|
|						parent doesn't exist, the task is created under the next immediate parent	|
|						and so forth.																|
|																									|
|	See Also:			@{HPMTaskChangeDisposition}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskChangeDispositionEntry
{
	HPMUniqueID m_TaskRefID;						// The unique reference ID of the task to change disposition for.
	HPMUInt32 m_ChangeFlags;						// [type=EHPMTaskChangeDispositionEntryChangeFlag,default=EHPMTaskChangeDispositionEntryChangeFlag_None] Determines the values you want to set for this task. If the corresponding flag is not set, the values below are ignored. Can be any combination of @{EHPMTaskChangeDispositionEntryChangeFlag}.

	HPMUniqueID m_PreviousRefID;					// The previous ID to set for the of the task ref.
	HPMUInt32 m_TreeLevel;							// [default=0]The tree level to set for the task ref.

	HPMUniqueID m_LinkedToSprint;					// The task reference ID of the sprint to set on the task ID for the task reference id.
	HPMUniqueID m_LinkedToPipelineTask;				// The task ID of the pipeline task to set on the task ID for the task reference id.
	HPMUInt32 m_TaskType;							// [type=EHPMTaskType,default=EHPMTaskType_Planned] The task type to set on the task ID for the task reference id. Can be one of @{EHPMTaskType}.
	HPMUInt32 m_TaskLockedType;						// [type=EHPMTaskLockedType,default=EHPMTaskLockedType_Normal]The task type to set on the task ID for the task reference id. Can be one of @{EHPMTaskLockedType}.

} HPMTaskChangeDispositionEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{TaskChangeDisposition}.											|
|																									|
|	See Also:			@{TaskChangeDisposition}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskChangeDisposition
{
	HPMUInt32 m_OptionFlags;								// [type=EHPMTaskChangeDispositionOptionFlag,default=EHPMTaskChangeDispositionOptionFlag_None] The options for this disposition change. Can be any combination of @{EHPMTaskChangeDispositionOptionFlag}.

	HPMUInt32 m_nTasksToChange;								// The number of tasks to change disposition for.
	const HPMTaskChangeDispositionEntry *m_pTasksToChange;	// Link to a list of @{HPMTaskChangeDispositionEntry} specifying the changes you want to make to the tasks.
} HPMTaskChangeDisposition;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Attached document entry used by												|
|						@{HPMTaskAttachedDocuments}::m_pAttachedDocuments.							|
|																									|
|	See Also:			@{HPMTaskAttachedDocuments}, @{VersionControlUtilPathToFileID}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskAttachedDocumentsEntry
{
	HPMUniqueID m_AddedByResource;	// The resource that attached the document.
	HPMUInt64 m_FileID;				// [default=0] The file id of the document. To get the file id from a file path, use @{VersionControlUtilPathToFileID}.
} HPMTaskAttachedDocumentsEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying attached documents in @{TaskSetAttachedDocuments} and	|
|						@{TaskGetAttachedDocuments}													|
|																									|
|	See Also:			@{TaskSetAttachedDocuments}, @{TaskGetAttachedDocuments},					|
|						@{HPMTaskAttachedDocumentsEntry}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskAttachedDocuments
{
	HPMUInt32 m_nAttachedDocuments;								// The number of attached documents.
	const HPMTaskAttachedDocumentsEntry *m_pAttachedDocuments;	// Pointer to a list of attached documents. See @{HPMTaskAttachedDocumentsEntry}.
} HPMTaskAttachedDocuments;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskResourceAllocation}::m_pResources to specify how much of a	|
|						resource is allocated to a task.											|
|																									|
|	See Also:			@{HPMTaskResourceAllocation}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskResourceAllocationResource
{
	HPMUniqueID m_ResourceID;		// The unique identifier of the resource allocated to the task.
	HPMInt32 m_PercentAllocated;	// [default=100] The number of percent the resource is allocated to the task. 0 - 100.

} HPMTaskResourceAllocationResource;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying resource allocation in @{TaskSetResourceAllocation} and	|
|						@{TaskGetResourceAllocation}.												|
|																									|
|	See Also:			@{TaskSetResourceAllocation}, @{TaskGetResourceAllocation},					|
|						@{HPMTaskResourceAllocationResource}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskResourceAllocation
{
	HPMUInt32 m_nResources;									// The number of resources to allocate to the task
	const HPMTaskResourceAllocationResource *m_pResources;	// Pointer to a list of resources allocated to the task. See @{HPMTaskResourceAllocationResource}.
} HPMTaskResourceAllocation;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a reference to a resource or resource group.				|
|																									|
|	See Also:			@{HPMTaskSprintAllocatedResources}, @{HPMTaskCommentsOptions},				|
|						@{EHPMResourceGroupingType}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceReference
{
	HPMInt32 m_ResourceType;	// [type=EHPMResourceGroupingType,default=EHPMResourceGroupingType_Resource] The type of reference. See @{EHPMResourceGroupingType}.
	HPMUniqueID m_ID;			// The unique identifier of the resource or resource group.
} HPMResourceReference;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying resource allocation in									|
|						@{TaskSetSprintAllocatedResources} and @{TaskGetSprintAllocatedResources}	|
|																									|
|	See Also:			@{TaskSetSprintAllocatedResources}, @{TaskGetSprintAllocatedResources},		|
|						@{HPMResourceReference}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskSprintAllocatedResources
{
	HPMUInt32 m_nResources;						// The number of resources allocated to the sprint.
	const HPMResourceReference *m_pResources;	// Pointer to a list of @{HPMResourceReference} to specify the resources allocated to this sprint.
} HPMTaskSprintAllocatedResources;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying the percent allocation of a resource in					|
|						@{HPMTaskSprintResourceAllocation}.											|
|																									|
|	See Also:			@{HPMTaskSprintResourceAllocation}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskSprintResourceAllocationResource
{
	HPMUniqueID m_ID;				// The unique identifier of the resource to specify the allocated percent for.
	HPMUInt32 m_AllocatedPercent;	// [default=100] The allocated percent of the resource.
} HPMTaskSprintResourceAllocationResource;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetSprintResourceAllocation} and								|
|						@{TaskGetSprintResourceAllocation} to specify the number of percent of a	|
|						resource is allocated to a sprint.											|
|																									|
|	Comments:			Resources not specified here but allocated to the sprint implicitly have	|
|						100 % resource allocation.													|
|																									|
|	See Also:			@{TaskSetSprintResourceAllocation}, @{TaskGetSprintResourceAllocation},		|
|						@{HPMTaskSprintResourceAllocationResource}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskSprintResourceAllocation
{
	HPMUInt32 m_nResources;											// The number of resources to specify allocation for
	const HPMTaskSprintResourceAllocationResource *m_pResources;	// Pointer to a list of @{HPMTaskSprintResourceAllocationResource} to specify the allocated percent of resources.
} HPMTaskSprintResourceAllocation;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskTimeZones} to specify the start and end time of a zone.	|
|																									|
|	See Also:			@{HPMTaskTimeZones}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskTimeZonesZone
{
	HPMUInt64 m_Start;	// [default=0] The start time expressed as micro seconds since 1970 UTC.
	HPMUInt64 m_End;	// [default=0] The end time expressed as micro seconds since 1970 UTC.

} HPMTaskTimeZonesZone;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetTimeZones} and @{TaskGetTimeZones} to specify the			|
|						timezones for a task.														|
|																									|
|	Comments:			The time zones should be specified ordered by start date and should not		|
|						overlap. The zones should also be aligned on days so they start and end		|
|						at midnight.																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskTimeZones
{
	HPMUInt32 m_nZones;						// The number of timezones in the task.
	const HPMTaskTimeZonesZone *m_pZones;	// Pointer to a list of @{HPMTaskTimeZonesZone} specifying the time zones.
} HPMTaskTimeZones;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskRefSetUIDHistory} and @{TaskRefGetUIDHistory} to specify the	|
|						unique identifier history of a task reference.								|
|																									|
|	Comments:			The history is updated when a task is copied etc to keep track of the		|
|						parentage of a task. This allows tasks to be matched in the project			|
|						history. When you copy tasks you should update this member if you want		|
|						the project history to work correctly.										|
|																									|
|						The newest unique id should be at the start of the list so that older		|
|						identifiers remain at the end of the list.									|
|																									|
|	See Also:			@{TaskRefSetUIDHistory}, @{TaskRefGetUIDHistory}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskUIDHistory
{
	HPMUInt32 m_nUIDs;			// The number of unique identifiers in the history.
	const HPMUniqueID *m_pUIDs;	// Pointer to a list of unique identifiers.
} HPMTaskUIDHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskWorkRemainingHistory} to specify a the hours remaining		|
|						of a task on a specific day.												|
|																									|
|	See Also:			@{HPMTaskWorkRemainingHistory}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceAllocationHistoryEntry
{
	HPMUniqueID m_ResourceID;		// The unique identifier of the resource allocated to the task.
	HPMInt32 m_PercentAllocated;	// [default=100] The number of percent the resource is allocated to the task. 0 - 100.
} HPMResourceAllocationHistoryEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskWorkRemainingHistory} to specify a the hours remaining		|
|						of a task on a specific day.												|
|																									|
|	See Also:			@{HPMTaskWorkRemainingHistory}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskWorkRemainingHistoryEntry
{
	HPMUniqueID m_TaskRefID;												// The unique identifier of a task reference that belongs to a sprint.
	HPMFP32 m_nHoursRemaining;												// [default=0.0f] The number of hours that is remaining on the task.
	HPMInt32 m_bResourcesValid;												// [default=0] Specifies whether or not the resource allocation entries are valid.
	HPMUInt32 m_nResourceAllocationEntries;									// The number of resource allocation entries for this history entry. 
	const HPMResourceAllocationHistoryEntry *m_pResourceAllocationEntries;	// Pointer to a list of @{HPMResourceAllocationHistoryEntry} to specify the resource allocation entries for this history entry.
} HPMTaskWorkRemainingHistoryEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetWorkRemainingHistory} and									|
|						@{TaskGetWorkRemainingHistory} to specify the work remaining on				|
|						a number of tasks for a specific date.										|
|																									|
|	See Also:			@{TaskSetWorkRemainingHistory},												|
|						@{TaskGetWorkRemainingHistory},												|
|						@{HPMTaskWorkRemainingHistoryEntry}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskWorkRemainingHistory
{
	HPMUInt32 m_nEntries;								// The number of tasks to specify work remaining for.
	const HPMTaskWorkRemainingHistoryEntry *m_pEntries;	// Pointer to a list of @{HPMTaskWorkRemainingHistoryEntry} to specify work remaining on tasks.
} HPMTaskWorkRemainingHistory;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskEnumWorkRemainingHistoryDays} to enumerate the days that has	|
|						work remaining history specified for on sprint task.						|
|																									|
|	See Also:			@{TaskEnumWorkRemainingHistoryDays}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskWorkRemainingHistoryDaysEnum
{
	HPMUInt32 m_nDays;			// The number of days that has work remaining history specified.
	const HPMUInt32 *m_pDays;	// Pointer to a list of days that has work remaining history specified. The days are expressed as the number of days from the start of the sprint.
} HPMTaskWorkRemainingHistoryDaysEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskIdealDaysHistory} to specify a the ideal days				|
|						of a task on a specific day.												|
|																									|
|	See Also:			@{HPMTaskIdealDaysHistory}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskIdealDaysHistoryEntry
{
	HPMUniqueID m_TaskRefID;												// The unique identifier of a task reference that belongs to a sprint.
	HPMFP32 m_Value;														// [default=0.0f] The number of ideal days that that are completed on the task.
	HPMFP32 m_ValueNotDone;													// [default=0.0f] The number of ideal days that are not completed on the task.
	HPMInt32 m_bResourcesValid;												// [default=0] Specifies whether or not the resource allocation entries are valid.
	HPMUInt32 m_nResourceAllocationEntries;									// The number of resource allocation entries for this history entry. 
	const HPMResourceAllocationHistoryEntry *m_pResourceAllocationEntries;	// Pointer to a list of @{HPMResourceAllocationHistoryEntry} to specify the resource allocation entries for this history entry.
} HPMTaskIdealDaysHistoryEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetIdealDaysHistory} and										|
|						@{TaskGetIdealDaysHistory} to specify the ideal days on						|
|						a number of tasks for a specific date.										|
|																									|
|	See Also:			@{TaskSetIdealDaysHistory},													|
|						@{TaskGetIdealDaysHistory},													|
|						@{HPMTaskIdealDaysHistoryEntry}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskIdealDaysHistory
{
	HPMUInt32 m_nEntries;								// The number of tasks to specify ideal days for.
	const HPMTaskIdealDaysHistoryEntry *m_pEntries;		// Pointer to a list of @{HPMTaskIdealDaysHistoryEntry} to specify work remaining on tasks.
} HPMTaskIdealDaysHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskPointsHistory} to specify points							|
|						of a task on a specific day.												|
|																									|
|	See Also:			@{HPMTaskPointsHistory}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskPointsHistoryEntry
{
	HPMUniqueID m_TaskRefID;												// The unique identifier of a task reference that belongs to a sprint.
	HPMInt32 m_Value;														// [default=0] The number of points that are completed on the task.
	HPMInt32 m_ValueNotDone;												// [default=0] The number of points that are not completed on the task.
	HPMInt32 m_bResourcesValid;												// [default=0] Specifies whether or not the resource allocation entries are valid.
	HPMUInt32 m_nResourceAllocationEntries;									// The number of resource allocation entries for this history entry. 
	const HPMResourceAllocationHistoryEntry *m_pResourceAllocationEntries;	// Pointer to a list of @{HPMResourceAllocationHistoryEntry} to specify the resource allocation entries for this history entry.
} HPMTaskPointsHistoryEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetPointsHistory} and											|
|						@{TaskGetPointsHistory} to specify the points on							|
|						a number of tasks for a specific date.										|
|																									|
|	See Also:			@{TaskSetPointsHistory},													|
|						@{TaskGetPointsHistory},													|
|						@{HPMTaskPointsHistoryEntry}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskPointsHistory
{
	HPMUInt32 m_nEntries;								// The number of tasks to specify points for.
	const HPMTaskPointsHistoryEntry *m_pEntries;		// Pointer to a list of @{HPMTaskPointsHistoryEntry} to specify work remaining on tasks.
} HPMTaskPointsHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskEnumPointsHistoryDays} and									|
|						@{TaskEnumIdealDaysHistoryDays} to enumerate the days that has				|
|						ideal days or points history specified for on sprint task.					|
|																									|
|	See Also:			@{TaskEnumPointsHistoryDays}, @{TaskEnumIdealDaysHistoryDays}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskHistoryDaysEnum
{
	HPMUInt32 m_nDays;			// The number of days that has history specified.
	const HPMUInt32 *m_pDays;	// Pointer to a list of days that history specified. The days are expressed as the number of days from the start of the sprint.
} HPMTaskHistoryDaysEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskGetVacationOptions} and @{TaskGetVacationOptions} to specify	|
|						the vacations options for a task.											|
|																									|
|	See Also:			@{TaskGetVacationOptions}, @{TaskSetVacationOptions}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskVacationOptions
{
	HPMUInt32 m_Flags;			// [type=EHPMTaskVacationOptionsFlag,default=EHPMTaskVacationOptionsFlag_None] Vacation/calender flags. Can be any combination of @{EHPMTaskVacationOptionsFlag}.
	HPMWorkDay m_WorkDays[7];	// Used to specify work passes for the days of the week. See @{HPMWorkDay}.
} HPMTaskVacationOptions;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetLinkedToMilestones} and @{TaskGetLinkedToMilestones}		|
|						to specify the milestones a task is linked to.								|
|																									|
|	See Also:			@{TaskSetLinkedToMilestones}, @{TaskGetLinkedToMilestones}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskLinkedToMilestones
{
	HPMUInt32 m_nMilestones;			// The number of milestones the task is linked to.
	const HPMUniqueID *m_pMilestones;	// Pointer to a list of unique identifiers pointing to the task references of the milestones this task is linked to.
} HPMTaskLinkedToMilestones;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskUtilGetEffectiveLinkedToMilestones} to specify the			|
|						milestones a task is linked to.												|
|																									|
|	See Also:			@{TaskUtilGetEffectiveLinkedToMilestones}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskEffectiveLinkedToMilestones
{
	HPMInt32 m_bInherited;					// [default=0] Set to 1 if the milestones are inherited from parent.
	HPMInt32 m_bInheritedFromBacklog;		// [default=0] Set to 1 if the milestones are inherited from an item in the backlog, when the task is in the scheduled view.
	HPMTaskLinkedToMilestones m_Milestones;	// The effective milestones
} HPMTaskEffectiveLinkedToMilestones;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskLinkedTo}::m_pLinkedTo to specify an object the task is	|
|						linked to.																	|
|																									|
|	See Also:			@{HPMTaskLinkedTo}, @{EHPMTaskLinkedToLinkType}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskLinkedToLink
{
	HPMInt32 m_LinkedToType;		// [type=EHPMTaskLinkedToLinkType,default=EHPMTaskLinkedToLinkType_TaskItemOrBug] The type of link. See @{EHPMTaskLinkedToLinkType}.
	HPMUniqueID m_LinkedTo;			// The identifier of the linked to object.
} HPMTaskLinkedToLink;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetLinkedTo} and @{TaskGetLinkedTo} to						|
|						specify the objects a task is linked to.									|
|																									|
|	See Also:			@{TaskSetLinkedTo}, @{TaskGetLinkedTo}, @{HPMTaskLinkedToLink}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskLinkedTo
{
	HPMUInt32 m_nLinkedTo;					// The number of objects the task is linked to.
	const HPMTaskLinkedToLink *m_pLinkedTo;	// Pointer to a list of @{HPMTaskLinkedToLink} the task is linked to.
} HPMTaskLinkedTo;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for @{TaskSetComment} and @{TaskGetComment} to specify the properties	|
|						of a comment post.															|
|																									|
|	Comments:			The following formatting tags can be used in the message text:				|
|																									|
|						Quotes:																		|
|						&lt;QUOTE&gt;&lt;/QUOTE&gt;													|
|																									|
|						Ordered Lists:																|
|						&lt;OL&gt;																	|
|						&lt;LI&gt;Item 1&lt;/LI&gt;													|
|						&lt;LI&gt;Item 2&lt;/LI&gt;													|
|						&lt;/OL&gt;																	|
|																									|
|						Unordered Lists:															|
|						&lt;UL&gt;																	|
|						&lt;LI&gt;Item 1&lt;/LI&gt;													|
|						&lt;LI&gt;Item 2&lt;/LI&gt;													|
|						&lt;/UL&gt;																	|
|																									|
|						Images:																		|
|						&lt;Image="URL"/&gt;														|
|																									|
|						Link:																		|
|						&lt;URL="URL"&gt;Link Text&lt;/URL&gt;										|
|																									|
|						Color:																		|
|						&lt;COLOR="R,G,B"&gt;Text&lt;/COLOR&gt;										|
|																									|
|						Background Color:															|
|						&lt;BGCOLOR="R,G,B"&gt;Text&lt;/BGCOLOR &gt;								|
|																									|
|						Bold:																		|
|						&lt;BOLD&gt;Text&lt;/BOLD&gt;												|
|																									|
|						Underline:																	|
|						&lt;UNDERLINE&gt;Text&lt;/UNDERLINE&gt;										|
|																									|
|						Italic:																		|
|						&lt;ITALIC&gt;Text&lt;/ITALIC&gt;											|
|																									|
|	See Also:			@{TaskSetComment}, @{TaskGetComment}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskComment
{
	HPMInt32 m_ParentID;						// [default=-1] The identifier of the parent of this post. -1 for root comment.
	HPMUInt32 m_Flags;							// [type=EHPMTaskCommentFlag,default=EHPMTaskCommentFlag_None] Comment flags. Can be any combination of @{EHPMTaskCommentFlag}.
	HPMUInt64 m_PostDate;						// [default=0] The time this comment was posted. Expressed as the number of micro seconds since 1970 UTC.
	HPMUniqueID m_PostedByResourceID;			// The unique identifier of the resource that posted the comment.
	const HPMChar *m_pPostedByResource;			// The name of the resource that posted the comment. This is used if the resource identifier is invalid after the resource has been deleted.
	const HPMChar *m_pMessageText;				// The text contents of the comment post. See comments for supported formatting tags.
} HPMTaskComment;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskEnumComments} to enumerate the comment posts of a task.		|
|																									|
|	See Also:			@{TaskEnumComments}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCommentEnum
{
	HPMUInt32 m_nComments;			// The number of comments the task contains.
	const HPMInt32 *m_pComments;	// Pointer to a list of post identifiers contained in the task.
} HPMTaskCommentEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetCommentsOptions} and @{TaskGetCommentsOptions} to specify	|
|						the task comment options.													|
|																									|
|	See Also:			@{TaskSetCommentsOptions}, @{TaskGetCommentsOptions},						|
|						@{HPMResourceReference}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskCommentsOptions
{
	HPMUInt32 m_nCCNotificationsTo;						// The number of resources or resource groups to CC comment changes of this task to.
	const HPMResourceReference *m_pCCNotificationsTo;	// Pointer to a list of @{HPMResourceReference} that specifies the resources to CC comment changes to.
} HPMTaskCommentsOptions;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskWallPositions} to specify a wall position.					|
|																									|
|	See Also:			@{HPMTaskWallPositions}, @{EHPMWallGroupingType}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/

typedef struct HPMTaskWallPosition
{
	HPMInt32 m_GroupingType;			// [type=EHPMWallGroupingType,default=EHPMWallGroupingType_CustomGroups] The grouping type this wall position specifies a position for. Can be one of @{EHPMWallGroupingType}.
	HPMUInt32 m_GroupingID;				// [default=0] The identifier within the grouping type specifying the grouping. Only valid when m_GroupingType is EHPMWallGroupingType_DefaultColumn or EHPMWallGroupingType_CustomColumn.
	HPMUniqueID m_GroupingSprintUID;	// The unique identifier of the selected sprint in the main project wall view.

	HPMFP32 m_PositionX;				// [default=500] The horizontal position of the task on the the wall.
	HPMFP32 m_PositionY;				// [default=500] The vertical position of the task on the wall.

	HPMInt32 m_bPositionHasBeenSet;		// [default=0] Set to 1 if the position has been explicitly set.

} HPMTaskWallPosition;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{HPMTaskSummary} to hold summation of custom integer and float		|
|						columns.																	|
|																									|
|	See Also:			@{HPMTaskSummary}, @{EHPMProjectCustomColumnsColumnType}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/

typedef struct HPMTaskCustomSummaryValue
{
	HPMUInt32 m_Hash;						// [default=0] The hash of the column. To calculate the hash of a column you can use @{UtilGetColumnHash}.
	HPMUInt32 m_Type;						// [type=EHPMProjectCustomColumnsColumnType,default=EHPMProjectCustomColumnsColumnType_IntegerNumber] The type of column. Can be @{EHPMProjectCustomColumnsColumnType}_IntegerNumber or @{EHPMProjectCustomColumnsColumnType}_FloatNumber.
	HPMInt32 m_IntegerValue;				// [default=0] If @{HPMTaskCustomSummaryValue}::m_Type is set to @{EHPMProjectCustomColumnsColumnType}_IntegerNumber this holds the value otherwise it is set to 0.
	HPMFP64 m_FloatValue;					// [default=0.0] If @{HPMTaskCustomSummaryValue}::m_Type is set to @{EHPMProjectCustomColumnsColumnType}_FloatNumber this holds the value otherwise it is set to 0.0.
} HPMTaskCustomSummaryValue;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskSetWallPositions} and @{TaskGetWallPositions} to specify		|
|						the task wall positions.													|
|																									|
|	See Also:			@{TaskSetWallPositions}, @{TaskGetWallPositions}, @{HPMTaskWallPosition}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskWallPositions
{
	HPMUInt32 m_nWallPositions;						// The number of wall positions.
	const HPMTaskWallPosition *m_pWallPositions;	// Pointer to a list of @{HPMTaskWallPosition} specifying the wall positions.
} HPMTaskWallPositions;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskRefGetSummary} to hold the summation values for a header.		|
|																									|
|	See Also:			@{HPMTaskCustomSummaryValue}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskSummary
{
	HPMUInt32 m_Completed;											// [default=0] The number of completed tasks.
	HPMUInt32 m_Uncompleted;										// [default=0] The number of uncompleted tasks.
	HPMUInt32 m_AssignedUncompleted;								// [default=0] The number of assigned uncompleted tasks.
	HPMInt32 m_TaskStatus;											// [type=EHPMTaskStatus,default=EHPMTaskStatus_NotDone] The summation of task status. Can be one of @{EHPMTaskStatus}.
	HPMInt32 m_ComplexityPoints;									// [default=0] The summation of complexity points.
	HPMInt32 m_ComplexityPoints_NotDone;							// [default=0] The summation of not done complexity points.
	HPMInt32 m_EarnedValue;											// [default=0] The summation of earned value.
	HPMInt32 m_BudgetedWork;										// [default=0] The summation of budgeted work.
	HPMFP64 m_WorkRemaining;										// [default=0.0] The summation of work remaining.		
	HPMFP64 m_EstimatedIdealDays;									// [default=0.0] The summation of estimated ideal days.
	HPMFP64 m_EstimatedIdealDays_NotDone;							// [default=0.0] The summation of not done estimated ideal days.
	HPMFP64 m_DurationDays;											// [default=0.0] The summation of duration in days.
	HPMFP64 m_DurationDays_NotDone;									// [default=0.0] The summation of not done duration in days;
	HPMUInt32 m_nCustomSummaryValues;								// The number of custom summary values.
	const HPMTaskCustomSummaryValue *m_pCustomSummaryValues;		// Pointer to a list of @{HPMTaskCustomSummaryValue} that holds the summary values for custom columns.
} HPMTaskSummary;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used in @{TaskRefGetMilestoneSummary} to hold the summation values for		|
|						a milestone.																|
|																									|
|	See Also:			@{TaskRefGetMilestoneSummary}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMMilestoneSummary
{
	HPMUInt32 m_Completed;											// [default=0] The number of completed tasks.
	HPMUInt32 m_Uncompleted;										// [default=0] The number of uncompleted tasks.
	HPMUInt32 m_Overdue;											// [default=0] The number of overdue tasks.
	HPMUInt32 m_AssignedUncompleted;								// [default=0] The number of assigned uncompleted tasks.
	HPMUInt32 m_nMilestoneDependantIDs;								// The number of task references that are dependent on this milestone.
	const HPMUniqueID *m_pMilestoneDependantIDs;					// Pointer to a list of unique identifiers pointing to the task references that are dependent on this milestone.
	HPMFP64 m_IdealDays;											// [default=0.0] The summation of ideal days.
	HPMFP64 m_IdealDays_NotDone;									// [default=0.0] The summation of not done ideal days.
	HPMFP64 m_WorkRemaining;										// [default=0.0] The summation of work remaining.
	HPMUInt32 m_Points;												// [default=0] The summation of points.
	HPMUInt32 m_Points_NotDone;										// [default=0] The summation of points not done.
	HPMFP64 m_DurationDays;											// [default=0.0] The summation of duration in days.
	HPMFP64 m_DurationDays_NotDone;									// [default=0.0] The summation of not done duration in days;
	HPMUInt64 m_StartTime;											// [default=0] The milestone start time expressed as micro seconds since 1970 UTC.
} HPMMilestoneSummary;

#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a number of tasks or proxies in a container.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskCreateUnified},					|
|						@{HPMChangeCallbackData_TaskCreateUnified}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskCreateUnified															|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskCreateUnified)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ContainerID,									// [in] A unique identifier of a container. Can be a project, backlog project or a QA project.
																			const HPMTaskCreateUnified *_pCreateData,					// [in] Pointer to a @{HPMTaskCreateUnified} object specifying the tasks to create.
																			const HPMChangeCallbackData_TaskCreateUnified **_pReturn	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_TaskCreateUnified} object, representing the returned data. If this parameter is not NULL, the function will block.
																		);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Moves a number of tasks into a new project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Use @{HPMTaskCreateUnifiedEntry}::m_NonProxy_ReuseUniqueID to				|
|						specify the tasks to move.													|
|																									|
|						Any proxies attached to the tasks will be deleted.							|
|																									|
|						You cannot move proxies between projects, so it's not valid to specify		|
|						proxies in the HPMTaskCreateUnified struct.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskCreateUnified},					|
|						@{HPMChangeCallbackData_TaskCreateUnified}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskMoveProject																|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskMoveProject)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ContainerID,									// [in] A unique identifier of a container. Can be a project, backlog project or a QA project.
																			const HPMTaskCreateUnified *_pCreateData,					// [in] Pointer to a @{HPMTaskCreateUnified} object specifying the tasks to create.
																			const HPMChangeCallbackData_TaskCreateUnified **_pReturn	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_TaskCreateUnified} object, representing the returned data. If this parameter is not NULL, the function will block.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Changes the disposition of tasks in a container.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The changes must give a correct tree otherwise the changes will be			|
|						rejected.																	|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskChangeDisposition},				|
|						@{HPMChangeCallbackData_TaskChangeDisposition}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskChangeDisposition														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskChangeDisposition)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ContainerID,										// [in] A unique identifier of a container. Can be a main project or backlog project. You cannot change the disposition in QA.
																				const HPMTaskChangeDisposition *_pDispositionChanges,			// [in] Pointer to a @{HPMTaskChangeDisposition} object specifying the tasks to create.
																				const HPMChangeCallbackData_TaskChangeDisposition **_pReturn	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_TaskChangeDisposition} object, representing the returned data. If this parameter is not NULL, the function will block.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a task and the references that points to it.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			This can be used to delete a task by its reference or directly. You can		|
|						also us this function to delete a proxy task. When you send a proxy			|
|						task reference to this function only the proxy will be removed,				|
|						not the task in the main backlog.											|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskDelete																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskDelete)(	void *_pSession,	// [in] A connected session. See @{SessionOpen}.
																	HPMUniqueID _TaskID	// [in] The unique identifier of the task to be deleted. This can be either a task reference identifier or a task identifier.
																);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates tasks in a container.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnum																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnum)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																	HPMUniqueID _ContainerID,		// [in] A unique identifier of a container. Can be a project, backlog project or a QA project.
																	const HPMTaskEnum **_pEnum		// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates tasks references of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Returns all task references that point to the given task. E.g., if the task	|
|						is created  directly in the project only 1 reference will be returned, if	|
|						the task is created in the backlog and is dragged into a sprint 2 will be	|
|						returned (one in the backlog and one in the main project). Also there will	|
|						be 1 reference for every resource the task is assigned to (The my work		|
|						view for that resource).													|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumReferences															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumReferences)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,			// [in] The unique identifier of the task to enum references for.
																			const HPMTaskEnum **_pEnum		// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates connected tasks in a container.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskConnectionEnum}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumConnections															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumConnections)(void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ContainerID,				// [in] A unique identifier of a container. Can be a project, backlog project or a QA project.
																			const HPMTaskConnectionEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMTaskConnectionEnum} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the main task reference of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			This will return the main reference of a task. This is the task reference	|
|						found in the main project, backlog project or QA project.					|
|																									|
|	See Also:			@{HPMSdkFunctions} 															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetMainReference														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetMainReference)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,			// [in] The unique identifier of the task to get the main reference of.
																				HPMUniqueID *_pMainRefID		// [out] Pointer to a variable that will receive the unique reference identifier of the main task reference.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the proxy of a task if it exists.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			This function will return the reference unique identifier of the proxy of	|
|						a task. This is useful to find the proxy in the sprint backlog of a			|
|						project backlog item.														|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetProxy																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetProxy)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,			// [in] The unique identifier of the task to get the proxy of.
																		HPMUniqueID *_pProxyID			// [out] Pointer to a variable that will receive the unique reference identifier of the proxy for this task.
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the container a task resides in.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You can determine the type of the container with @{UtilIsIDProject},		|
|						@{UtilIsIDBacklogProject} and @{UtilIsIDQAProject}.							|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{UtilIsIDProject}, @{UtilIsIDBacklogProject},			|
|						@{UtilIsIDQAProject}														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetContainer															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetContainer)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,			// [in] The unique identifier of the task to get the container of.
																			HPMUniqueID *_pContainerID		// [out] Pointer to a variable that will receive the unique identifier of the container.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates the custom column data set on a task.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskCustomColumnDataEnum}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumCustomColumnData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumCustomColumnData)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,							// [in] The unique identifier of the task to enum custom column data for.
																					const HPMTaskCustomColumnDataEnum **_pEnum		// [out] Pointer to a pointer of a @{HPMTaskCustomColumnDataEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the backlog category of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskBacklogCategory}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetBacklogCategory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetBacklogCategory)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to to set the backlog category of.
																				HPMInt32 _Data			// [in,type=EHPMTaskBacklogCategory] The backlog category to set on the task. Can be one of @{EHPMTaskBacklogCategory}.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the backlog category of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskBacklogCategory}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetBacklogCategory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetBacklogCategory)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the backlog category of.
																				HPMInt32 *_pData		// [out,type=EHPMTaskBacklogCategory] Pointer to a variable that receive the backlog category. Will be one of @{EHPMTaskBacklogCategory}.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the color of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetColor																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetColor)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the color of.
																		HPMUInt32 _Data			// [in] The color to set on the task. Expressed as 0x00BBGGRR.
																	); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the color of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetColor																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetColor)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the color of.
																		HPMUInt32 *_pData		// [out] Pointer to a variable that receive the color. Expressed as 0x00BBGGRR.
																	); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the fully created flag on a task. This means that the task will		|
|						start showing in the client GUI. Do not set this until you have set all		|
|						other properties of the task you are creating.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{TaskGetFullyCreated}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetFullyCreated															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetFullyCreated)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID		// [in] The unique identifier of the task to set fully created.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the fully created flag of a task. When this flag is set the task		|
|						has all properties correctly set after creation.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{TaskSetFullyCreated}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetFullyCreated															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetFullyCreated)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the color of.
																				HPMInt32 *_pData		// [out,type=bool] Pointer to a variable that receive the fully created flag.
																			); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the wall item color of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskWallItemColor}	 							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWallItemColor														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWallItemColor)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the wall item color of.
																				HPMInt32 _Data			// [in,type=EHPMTaskWallItemColor] The wall item color to set on the task. Can be one of @{EHPMTaskWallItemColor}.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the color of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskWallItemColor}	 							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWallItemColor														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWallItemColor)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the wall item color of.
																				HPMInt32 *_pData		// [out,type=EHPMTaskWallItemColor] Pointer to a variable that receive the wall item color. Can be one of @{EHPMTaskWallItemColor}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the complexity points of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetComplexityPoints														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetComplexityPoints)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set complexity points on.
																					HPMInt32 _Data			// [in] The complexity points to set on the task. Range is 0 to 1000000.
																				); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the complexity points of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetComplexityPoints														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetComplexityPoints)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the complexity points of.
																					HPMInt32 *_pData		// [out] Pointer to a variable that receive the complexity points. Range is 0 to 1000000.
																				);  
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the confidence of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskConfidence}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetConfidence															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetConfidence)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,		// [in] The unique identifier of the task to set the confidence on.
																			HPMInt32 _Data				// [in,type=EHPMTaskConfidence] The confidence to set on the task. Can be one of @{EHPMTaskConfidence}.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the confidence of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskConfidence}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetConfidence															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetConfidence)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get confidence points of.
																			HPMInt32 *_pData		// [out,type=EHPMTaskConfidence] Pointer to a variable that receive the confidence. Will be one of @{EHPMTaskConfidence}.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the estimated ideal days of a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetEstimatedIdealDays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetEstimatedIdealDays)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set estimated ideal days on.
																					HPMFP64 _Data			// [in] The number of estimated ideal days to set on the task.
																				); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the estimated ideal days of a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetEstimatedIdealDays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetEstimatedIdealDays)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get estimated ideal days on.
																					HPMFP64 *_pData			// [out] Pointer to a variable that will receive the number of estimated ideal days.
																				); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the risk of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskRisk}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetRisk																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetRisk)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the risk on.
																		HPMInt32 _Data			// [in,type=EHPMTaskRisk] The risk to set on the task. Can be one of @{EHPMTaskRisk}.
																	); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the risk of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskRisk}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetRisk																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetRisk)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the risk of.
																		HPMInt32 *_pData		// [out,type=EHPMTaskRisk] Pointer to a variable that will receive the risk. Will be one of @{EHPMTaskRisk}.
																	); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the start offset of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Used to offset start dates of tasks to be able to have many tasks on a		|
|						single day.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetStartOffset															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetStartOffset)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the start offset of.
																			HPMInt32 _Data			// [in] The number of hours to offset the task from its start date.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the start offset of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Used to offset start dates of tasks to be able to have many tasks on a		|
|						single day.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetStartOffset															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetStartOffset)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get start offset of.
																			HPMInt32 *_pData		// [out] Pointer to a variable that will receive the number of hours to offset the task from its start date.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the hour duration of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Used to specify the hour duration of a task to be able to have many tasks	|
|						on a single day.															|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetDuration																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetDuration)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the hour duration of.
																			HPMInt32 _Data			// [in] The duration of the task expressed in hours.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the hour duration of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Used to specify the hour duration of a task to be able to have many tasks	|
|						on a single day.															|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetDuration																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetDuration)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the hour duration of.
																			HPMInt32 *_pData		// [out] Pointer to a variable that will receive the duration of the task expressed in hours.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the force sub project flag on a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetForceSubProject														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetForceSubProject)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the force sub project flag on.
																				HPMInt32 _Data			// [in,type=bool] The force sub project flag state to set on the task.
 																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the force sub project flag on a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetForceSubProject														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetForceSubProject)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the force sub project flag of.
																				HPMInt32 *_pData		// [out,type=bool] Pointer to a variable that will receive the sub project flag state.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the budgeted work of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetBudgetedWork															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetBudgetedWork)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set budgeted work on.
																				HPMInt32 _Data			// [in] The number of hours of budgeted work to set on the task.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the budgeted work of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetBudgetedWork															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetBudgetedWork)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get budgeted work of.
																				HPMInt32 *_pData		// [out] Pointer to a variable that will receive the number of hours of budgeted work.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the locked type of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskLockedType}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLockedType															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLockedType)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the locked type of.
																			HPMInt32 *_pData		// [out,type=EHPMTaskLockedType] Pointer to a variable that will receive the locked type. Will be one of @{EHPMTaskLockedType}.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the percent complete of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetPercentComplete														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetPercentComplete)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the percent complete on.
																				HPMInt32 _Data			// [in] The number of percent complete to set the task to. Range is 0 to 100.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the percent complete of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetPercentComplete														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetPercentComplete)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the percent complete of.
																				HPMInt32 *_pData		// [out] Pointer to a variable that will receive the number of percent complete the task is. Range is 0 to 100.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the status of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskStatus}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetStatus																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetStatus)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set the status on.
																		HPMInt32 _Data,								// [in,type=EHPMTaskStatus] The status to set on the task. Can be one of @{EHPMTaskStatus}.
																		HPMInt32 _bGotoWorkflowStatus,				// [in] If set to 1 and @{HPMProjectWorkflowObject}::m_WorkflowStatus_WorkflowStatusOnItemStatusChange has a progression set for the status specified in ${TaskSetStatus}._Data the workflow status will progress. This function will block even in non-blocking mode if this parameter is 1.
																		HPMInt32 _SetStatusFlags					// [in,type=EHPMTaskSetStatusFlag] The flags to use for workflow status changes if _bGotoWorkflowStatus is 1.
																	); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the status of a task													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskStatus}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetStatus																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetStatus)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the status of.
																		HPMInt32 *_pData		// [out,type=EHPMTaskStatus] Pointer to a variable that will receive the status. Will be one of @{EHPMTaskStatus}.
																	); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the type of a task.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskType}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetType																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetType)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the type of.
																		HPMInt32 *_pData		// [out,type=EHPMTaskType] Pointer to a variable that will receive the type. Will be one of @{EHPMTaskType}.
																	); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the description of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMString}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetDescription															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetDescription)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the description on.
																			const HPMChar *_pData	// [in] Pointer to the @{HPMChar} to set as description.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the description of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetDescription															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetDescription)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,		// [in] The unique identifier of the task to get the description of.
																			const HPMString **_pData	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the hyperlink of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetHyperlink															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetHyperlink)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,		// [in] The unique identifier of the task to set the hyperlink on.
																			const HPMChar *_Data		// [in] Pointer to the @{HPMChar} to set as hyperlink.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the hyperlink of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetHyperlink															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetHyperlink)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,		// [in] The unique identifier of the task to get the hyperlink of.
																			const HPMString **_pData	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the sprint a task is linked to.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			From version 5.309 this function is only available in the QA project.		|
|						Use @{TaskChangeDisposition} in the other projects instead.					|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetLinkedToSprint														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLinkedToSprint)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to link to a sprint.
																				HPMUniqueID _Data		// [in] The unique task reference identifier of the sprint to link the task to.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the sprint a task is linked to.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLinkedToSprint														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLinkedToSprint)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the linked sprint of.
																				HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique reference identifier of the sprint this task is linked to.
																			);  
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the resource that has a task locked.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A task should be locked when the resource is working on an area in the		|
|						schedule.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetLockedBy																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLockedBy)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the resource that has locked this task on.
																			HPMUniqueID _Data		// [in] The unique identifier of the resource to set as the resource that has locked this task.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the resource that has a task locked.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A task should be locked when the resource is working on an area in the		|
|						schedule.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLockedBy																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLockedBy)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the resource that has locked this task for.
																			HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the resource that has locked this task.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the originally created/reported by user of a task.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetOriginallyCreatedBy													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetOriginallyCreatedBy)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the owner on.
																					HPMUniqueID _Data		// [in] The unique identifier of the originally created/reported by resource to set.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the originally created/reported by user of a task.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetOriginallyCreatedBy													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetOriginallyCreatedBy)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the owner of.
																					HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the originally created/reported by resource.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																																												|
|																																															|
|	Description:		Sets the data for a custom column on a task.																														|
|																																															|
|	Return Value:		Returns an error code. See @{EHPMError}.																															|
|																																															|
|	See Also:			@{HPMSdkFunctions}, @{HPMString}																																	|
|																																															|
|	Comments:			Depending on the type of the custom column the data is generated differently:																						|
|																																															|
|		EHPMProjectCustomColumnsColumnType_Text:					Set the data directly as a string.																						|
|		EHPMProjectCustomColumnsColumnType_Hyperlink:				Set the data directly as a string containing the hyperlink.																|
|		EHPMProjectCustomColumnsColumnType_DropList:				Use the @{HPMProjectCustomColumnsColumnDropListItem}::m_Id corresponding to drop list item you want to set and			|
|																	format that integer as a string.																						|
|		EHPMProjectCustomColumnsColumnType_IntegerNumber:			Format the data as a 64 bit signed integer.																				|
|		EHPMProjectCustomColumnsColumnType_FloatNumber:				Format the data as a 64 bit floating point number.																		|
|		EHPMProjectCustomColumnsColumnType_DateTime:				Use @{UtilEncodeCustomColumnDateTimeValue} to encode the data into a string.											|
|		EHPMProjectCustomColumnsColumnType_MultiLineText:			Set the data directly as a string with \r\n as line separator.															|
|		EHPMProjectCustomColumnsColumnType_Resources:				Use @{UtilEncodeCustomColumnResourcesValue} to encode the data.															|
|		EHPMProjectCustomColumnsColumnType_AccumulatedTime:			Format the data as a 64 bit floating point number representing the number of hours.										|
|		EHPMProjectCustomColumnsColumnType_MultiSelectionDropList:	Use the @{HPMProjectCustomColumnsColumnDropListItem}::m_Id corresponding to drop list items you want to set and			|
|																	format those integers as strings separated by ;																			|
|		EHPMProjectCustomColumnsColumnType_DateTimeWithTime:		Use @{UtilEncodeCustomColumnDateTimeValue} to encode the data into the number of micro seconds since 1970 UTC.			|
|																	The value will be rounded down to the second.																			|
|																																															|
|																																															|
|	Location:			Function Pointers																																					|
|																																															|
|	Index:				!name																																								|
|						TaskSetCustomColumnData																																				|
\*_________________________________________________________________________________________________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCustomColumnData)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set custom column data on.
																					HPMUInt32 _ColumnHash,				// [in] The column hash of the column to set custom column data for.
																					const HPMChar *_pData,				// [in] Pointer to the @{HPMChar} to set as column data.
																					HPMInt32 _bDoAutoAssignments		// [in] This parameter is only valid if the type of the custom column is @{EHPMProjectCustomColumnsColumnType}::_DropList. If set to 1 the auto assignments in @{HPMProjectCustomColumnsColumnDropListItem}::m_pAutoAssignResources that are defined for a specific drop list item status are done. This function will block even in non-blocking mode if this parameter is 1.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																																												|
|																																															|
|																																															|
|																																															|
|	Description:		Gets the data for a custom column on a task.																														|
|																																															|
|	Return Value:		Returns an error code. See @{EHPMError}.																															|
|																																															|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory leak will result.																					|
|																																															|
|						Depending on the type of the custom column the data is interpreted differently:																						|
|																																															|
|		EHPMProjectCustomColumnsColumnType_Text:					Use the data directly as a string.																						|
|		EHPMProjectCustomColumnsColumnType_Hyperlink:				Use the data directly as a string containing the hyperlink.																|
|		EHPMProjectCustomColumnsColumnType_DropList:				Parse the data as an integer and this integer will correspond to @{HPMProjectCustomColumnsColumnDropListItem}::m_Id.	|
|		EHPMProjectCustomColumnsColumnType_IntegerNumber:			Parse the data as a 64 bit signed integer.																				|
|		EHPMProjectCustomColumnsColumnType_FloatNumber:				Parse the data as a 64 bit floating point number.																		|
|		EHPMProjectCustomColumnsColumnType_DateTime:				Use @{UtilDecodeCustomColumnDateTimeValue} to decode the data into the number of micro seconds since 1970. Always		|
|																	display as is without timezone conversion.																				|
|		EHPMProjectCustomColumnsColumnType_MultiLineText:			Use the data directly as a string with \r\n as line separator.															|
|		EHPMProjectCustomColumnsColumnType_Resources:				Use @{UtilDecodeCustomColumnResourcesValue} to decode the data.															|
|		EHPMProjectCustomColumnsColumnType_AccumulatedTime:			Parse the data as a 64 bit floating point number representing the number of hours.										|
|		EHPMProjectCustomColumnsColumnType_MultiSelectionDropList:	Parse the string as integers separated by ; and these integers till correspond											|
|																	to @{HPMProjectCustomColumnsColumnDropListItem}::m_Id.																	|
|		EHPMProjectCustomColumnsColumnType_DateTimeWithTime:		Use @{UtilDecodeCustomColumnDateTimeValue} to decode the data into the number of micro seconds since 1970 UTC.			|
|																	The value has a precision of a second.																					|
|																																															|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}																														|
|																																															|
|	Location:			Function Pointers																																					|
|																																															|
|	Index:				!name																																								|
|						TaskGetCustomColumnData																																				|
\*_________________________________________________________________________________________________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCustomColumnData)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,		// [in] The unique identifier of the task to get custom column data of.
																					HPMUInt32 _ColumnHash,		// [in] The column hash of the column to get custom column data for.
																					const HPMString **_pData	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																				);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																																												|
|																																															|
|	Description:		Sets the last resource comment read time for a resource on a task.																									|
|																																															|
|	Return Value:		Returns an error code. See @{EHPMError}.																															|
|																																															|
|	See Also:			@{HPMSdkFunctions}																																					|
|																																															|
|	Location:			Function Pointers																																					|
|																																															|
|	Index:				!name																																								|
|						TaskSetLastResourceCommentReadTime																																	|
\*_________________________________________________________________________________________________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLastResourceCommentReadTime)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,		// [in] The unique identifier of the task to set comment last read time on.
																							HPMUniqueID _ResourceID,	// [in] The unique identifier of the resource to set comment last read time for.
																							HPMUInt64 _Data				// [in] The time the resource last read comments for a task. Expressed as the number of micro seconds since 1970 UTC.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																																												|
|																																															|
|	Description:		Gets the last resource comment read time for a resource on a task.																									|
|																																															|
|	Return Value:		Returns an error code. See @{EHPMError}.																															|
|																																															|
|	See Also:			@{HPMSdkFunctions}																																					|
|																																															|
|	Location:			Function Pointers																																					|
|																																															|
|	Index:				!name																																								|
|						TaskGetLastResourceCommentReadTime																																	|
\*_________________________________________________________________________________________________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastResourceCommentReadTime)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,		// [in] The unique identifier of the task to get comment last read time for.
																							HPMUniqueID _ResourceID,	// [in] The unique identifier of the resource to get comment last read time for.
																							HPMUInt64 *_pData			// [out] Pointer to a variable that will receive the time comments was last read for the task and resource. Expressed as the number of micro seconds since 1970 UTC.
																						);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the attached documents on a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			To attach a document, the document must first be created it in the version	|
|						control system.	Every task that has an attachment will have its own			|
|						directory where the actual files are stored. The path is different if		|
|						the task is created in the backlog, the main schedule or in QA. The ID		|
|						of a task is retrieved with @{TaskGetID}:									|
|																									|
|						Backlog dir path:		Project/[Project Name]/Attachments/Backlog_[ID]		|
|						Main schedule dir path:	Project/[Project Name]/Attachments/General_[ID]		|
|						QA dir path:			Project/[Project Name]/Attachments/Bug_[ID]			|
|																									|
|						To get the correct attachment path, use @{TaskGetAttachmentPath}.			|
|																									|
|						The sequence to attach a document is as follows:							|
|																									|
|						Initialize version control with @{VersionControlInit}.						|
|																									|
|						Create the attachment directory (see above) for the task that documents		|
|						should be attached to with @{VersionControlCreateDirectories}.				|
|																									|
|						Add the file(s) that are going to be attached with							|
|						@{VersionControlAddFiles}.													|
|																									|
|						Get the file IDs of the files that were added in step 3. with				|
|						@{VersionControlUtilPathToFileID}.											|
|																									|
|						Attach the file(s) with @{TaskSetAttachedDocuments}.						|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskAttachedDocuments}, @{VersionControlInit},		|
|						@{VersionControlCreateDirectories}, @{VersionControlAddFiles},				|
|						@{VersionControlUtilPathToFileID}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetAttachedDocuments													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetAttachedDocuments)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set attached documents on.
																					const HPMTaskAttachedDocuments *_pData		// [in] Pointer to a @{HPMTaskAttachedDocuments} specifying the documents to attach to the task.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the attached documents on a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskAttachedDocuments}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetAttachedDocuments													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetAttachedDocuments)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get attached documents of.
																					const HPMTaskAttachedDocuments **_pData		// [out] Pointer to a pointer of a @{HPMTaskAttachedDocuments} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the resources a task is delegated to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The task and its parent tasks will be delegated.							|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetDelegateTo															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetDelegateTo)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,								// [in] The unique identifier of the task to set delegated resources on.
																			const HPMResourceDefinitionList *_pResourceList		// [out] Pointer to a @{HPMResourceDefinitionList} object specifying the resources to delegate the task to.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the resources a task is delegated to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceDefinitionList}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetDelegateTo															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetDelegateTo)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,								// [in] The unique identifier of the task to get delegated resources of.
																			const HPMResourceDefinitionList **_pResourceList	// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the resource allocation of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskResourceAllocation}	 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetResourceAllocation													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetResourceAllocation)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set resource allocation on.
																					const HPMTaskResourceAllocation *_pData,	// [in] Pointer to a @{HPMTaskResourceAllocation} object specifying the resource allocation to set on the task.
																					HPMInt32 _bGotoWorkflowStatusWhenAssigned,	// [in] If set to 1 and @{HPMProjectWorkflowObject}::m_WorkflowStatus_GoToWorkflowStatusWhenAssigned is set the status will progress. This function will block even in non-blocking mode if this parameter is 1.
																					HPMInt32 _SetStatusFlags					// [in,type=EHPMTaskSetStatusFlag] The flags to use for workflow status changes if _bGotoWorkflowStatusWhenAssigned is 1.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the resource allocation of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskResourceAllocation}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetResourceAllocation													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetResourceAllocation)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get resource allocation of.
																					const HPMTaskResourceAllocation **_pData	// [out] Pointer to a pointer of a @{HPMTaskResourceAllocation} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the resources allocated to a sprint.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskSprintAllocatedResources}	 					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSprintAllocatedResources												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSprintAllocatedResources)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the sprint task to set allocated resources on.
																							const HPMTaskSprintAllocatedResources *_pData	// [in] Pointer to a @{HPMTaskSprintAllocatedResources} specifying the resources to allocate to the sprint task.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the resources allocated to a sprint.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskSprintAllocatedResources}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSprintAllocatedResources												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSprintAllocatedResources)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the sprint task to get the allocated resources of.
																							const HPMTaskSprintAllocatedResources **_pData	// [out] Pointer to a pointer of a @{HPMTaskSprintAllocatedResources} object, representing the returned data.
																						 );
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets resource allocation of individual resources on a sprint.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskSprintResourceAllocation}	 					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSprintResourceAllocation												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSprintResourceAllocation)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the sprint task to set individual resource allocation on.
																							const HPMTaskSprintResourceAllocation *_pData	// [in] Pointer to a @{HPMTaskSprintResourceAllocation} object specifying the individual resource allocation for the sprint task.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets resource allocation of individual resources on a sprint.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskSprintResourceAllocation}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSprintResourceAllocation												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSprintResourceAllocation)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the sprint task to get individual resource allocation of.
																							const HPMTaskSprintResourceAllocation **_pData	// [out] Pointer to a pointer of a @{HPMTaskSprintResourceAllocation} object, representing the returned data.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the completed flag on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetCompleted															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCompleted)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the completed flag on.
																			HPMInt32 _bCompleted,				// [in] The state of the completed flag.
																			HPMInt32 _bSendCompletedMessage		// [in] If set to 1 a completed notification will be sent to those registered to receive notifications about this task.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the completed flag of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetCompleted															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCompleted)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the completed flag of.
																			HPMInt32 *_pCompleted	// [out,type=bool] Pointer to a variable that will receive the completed flag.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the time zones of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskTimeZones}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetTimeZones															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetTimeZones)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the time zones on.
																			const HPMTaskTimeZones *_pData,		// [in] Pointer to a @{HPMTaskTimeZones} object specifying the time zones to set on the task.
																			HPMInt32 _bSendChangeNotifications	// [in] Set to 1 to send email notifications that the task changed.
																		);  
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the time zones of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskTimeZones}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetTimeZones															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetTimeZones)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the time zones of.
																			const HPMTaskTimeZones **_pData		// [out] Pointer to a pointer of a @{HPMTaskTimeZones} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the total duration of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetTotalDuration														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetTotalDuration)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the total duration of.
																				HPMUInt32 *_pData		// [out] Pointer to a variable that will receive the total duration of the task. Calculated from time zones.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the resources a task is visible to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The visibility will be effective on the task and its children.				|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceDefinitionList}	 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetVisibleTo															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetVisibleTo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set the resources it is visible to.
																			const HPMResourceDefinitionList *_pData		// [in] Pointer to @{HPMResourceDefinitionList} object specifying the resources and resource groups the task is visible to.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the resources a task is visible to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceDefinitionList}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetVisibleTo															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetVisibleTo)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,							// [in] The unique identifier of the task to get the resources it is visible to.
																			const HPMResourceDefinitionList **_pData		// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the severity of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskSeverity}	 									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSeverity																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSeverity)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the severity of.
																			HPMInt32 _Data						// [in,type=EHPMTaskSeverity] The severity to set on the task. Can be one of @{EHPMTaskSeverity}.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the severity of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskSeverity}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSeverity																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSeverity)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the severity of.
																			HPMInt32 *_pData					// [out,type=EHPMTaskSeverity] Pointer to a variable that will receive the severity. Will be one of @{EHPMTaskSeverity}.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the workflow status of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}						 									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWorkflowStatus														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWorkflowStatus)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the workflow status for.
																				HPMInt32 _Data,						// [in] The status workflow status to set for the task. This value identifies a status in the @{HPMProjectWorkflowSettings} for the project. The value should point to a @{HPMProjectWorkflowObject}::m_ObjectID that has m_ObjectType set to @{EHPMProjectWorkflowObjectType}_WorkflowStatus.
																				HPMInt32 _Flags						// [in,type=EHPMTaskSetStatusFlag] Controls if the auto assignents that are controlled by the flags in @{HPMProjectWorkflowObject}::m_Flags will be done. This function will block even in non-blocking mode if this parameter is not EHPMTaskSetStatusFlag_None.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the workflow status of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWorkflowStatus														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWorkflowStatus)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the workflow status of.
																				HPMInt32 *_pData					// [out] Pointer to a variable that will receive the workflow status. This value identifies a status in the @{HPMProjectWorkflowSettings} for the project. The value should point to a @{HPMProjectWorkflowObject}::m_ObjectID that has m_ObjectType set to @{EHPMProjectWorkflowObjectType}_WorkflowStatus.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the user story flag of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}						 									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetUserStoryFlag														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetUserStoryFlag)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the user story flag of.
																				HPMInt32 _bData						// [in] The value of the user story flag to set. Can be 0 or 1.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the user story flag of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetUserStoryFlag														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetUserStoryFlag)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the user story flag of.
																				HPMInt32 *_pData					// [out,type=bool] Pointer to a variable that will receive the user story flag. Can be 0 or 1.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the last updated time of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The last updated time of a task is automatically handled by the server.		|
|						This function exists if you need to override the automatically set			|
|						last updated time of a task.												|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetLastUpdatedTime														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLastUpdatedTime)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the last updated time of.
																				HPMUInt64 _Data						// [in] The last updated time to set. Expressed as the number of micro seconds since 1970 UTC.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the last updated time of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLastUpdatedTime														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastUpdatedTime)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the last updated time of.
																				HPMUInt64 *_pData					// [out] Pointer to a variable that will receive the last updated time. Expressed as the number of micro seconds since 1970 UTC.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the full rights flag for resources of a sprint.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSprintResourcesHaveFullRights										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSprintResourcesHaveFullRights)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the full rights flag on. This identifier should point to a sprint task.
																								HPMInt32 _bData						// [in] The flag to set. If 1 all resources in a sprint will be able to create and delete tasks freely irrespective of being main project managers.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the full rights flag for resources of a sprint.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSprintResourcesHaveFullRights										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSprintResourcesHaveFullRights)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the full rights flag on. This identifier should point to a sprint task.
																								HPMInt32 *_pData					// [out,type=bool] Pointer to a variable that will receive the full rights flag.
																							);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the detailed description of a task.									|
|																									|
|	Comments:			In the main project and backlog this function sets the user story text.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMString}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetDetailedDescription													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetDetailedDescription)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the detailed description of.
																					const HPMChar *_Data				// [in] Pointer to the @{HPMChar} to set as detailed description/user story.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the detailed description of a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			In the main project and backlog this function gets the user story text.		|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetDetailedDescription													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetDetailedDescription)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the detailed description/user story of.
																					const HPMString **_pData			// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the steps to reproduce of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMString}		 									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetStepsToReproduce														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetStepsToReproduce)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the steps to reproduce on.
																					const HPMChar *_Data				// [in] Pointer to the @{HPMChar} to set as steps to reproduce.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the steps to reproduce of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetStepsToReproduce														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetStepsToReproduce)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the steps to reproduce of.
																					const HPMString **_pData			// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the attachment path for task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The attachment path for a task is where documents that are attached			|
|						to a task should be put.													|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetAttachmentPath														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetAttachmentPath)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the attachment path for.
																				const HPMString **_pData			// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the task or bug id.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Comments:			The id of a task can uniquely identify a task in a project. This			|
|						identifier is the identifier presented in the UI. This identifier can only	|
|						be set when creating tasks and should not be set unless you want a copy		|
|						operation to preserve the id. If you specify an id that already exists		|
|						it will be ignored and an automatic id will be used.						|
|																									|
|						The identifier only uniquely identifies a task in a project. Within the		|
|						same project however the backlog, main schedule and QA projects can have	|
|						tasks with the same identifier.												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetID																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetID)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																	HPMUniqueID _TaskID,				// [in] The unique identifier of the task/bug to get the id of.
																	HPMInt32 *_pData					// [out] Pointer to a variable that will receive the user id.
																);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the work remaining on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWorkRemaining														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWorkRemaining)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set work remaining on.
																				HPMFP32 _nHoursRemaining			// [in] The number of hours work that remains on the task. Set this value to infinity to indicate that the number of hours remaining is not set.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the work remaining of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWorkRemaining														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWorkRemaining)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,			// [in] The unique identifier of the task to get the remaining work on.
																				HPMFP32 *_pHoursRemaining		// [out] Pointer to a variable that will receive the number of hours remaining work for the task. The value will be infinity to indicate that the number of hours remaining is not set.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the work remaining history of a task on a specific day in the sprint.	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskWorkRemainingHistory}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWorkRemainingHistory													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWorkRemainingHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,						// [in] The unique identifier of task to set the work remaining history on.
																						HPMUInt32 _DayInSprint,						// [in] The day in the sprint to set the work remaining history for.
																						const HPMTaskWorkRemainingHistory *_pData	// [in] Pointer to a @{HPMTaskWorkRemainingHistory} object specifying the work remaining history.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the work remaining history of a task on a specific day in the sprint.	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskWorkRemainingHistory}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWorkRemainingHistory													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWorkRemainingHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get the work remaining history for.
																						HPMUInt32 _DayInSprint,						// [in] The day in the sprint to get the work remaining history for.
																						const HPMTaskWorkRemainingHistory **_pData	// [out] Pointer to a pointer of a @{HPMTaskWorkRemainingHistory} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates the days in a sprint that has work remaining history on them.	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskWorkRemainingHistoryDaysEnum}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumWorkRemainingHistoryDays											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumWorkRemainingHistoryDays)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,								// [in] The unique identifier of the task to enumerate work remaining history days for.
																							const HPMTaskWorkRemainingHistoryDaysEnum **_pData	// [out] Pointer to a pointer of a @{HPMTaskWorkRemainingHistoryDaysEnum} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the ideal history of a task on a specific day in the sprint.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskIdealDaysHistory}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetIdealDaysHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetIdealDaysHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of task to set the ideal days history on.
																					HPMUInt32 _DayInSprint,						// [in] The day in the sprint to set the ideal days history for.
																					const HPMTaskIdealDaysHistory *_pData		// [in] Pointer to a @{HPMTaskIdealDaysHistory} object specifying the ideal days history.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets ideal days history of a task on a specific day in the sprint.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskIdealDaysHistory}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetIdealDaysHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetIdealDaysHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get the ideal days history for.
																					HPMUInt32 _DayInSprint,						// [in] The day in the sprint to get the ideal days history for.
																					const HPMTaskIdealDaysHistory **_pData		// [out] Pointer to a pointer of a @{HPMTaskIdealDaysHistory} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates the days in a sprint that has ideal days history on them.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskHistoryDaysEnum}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumIdealDaysHistoryDays												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumIdealDaysHistoryDays)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,								// [in] The unique identifier of the task to enumerate points history days for.
																						const HPMTaskHistoryDaysEnum **_pData				// [out] Pointer to a pointer of a @{HPMTaskHistoryDaysEnum} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the points history of a task on a specific day in the sprint.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskPointsHistory}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetPointsHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetPointsHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,						// [in] The unique identifier of task to set the points history on.
																				HPMUInt32 _DayInSprint,						// [in] The day in the sprint to set the points history for.
																				const HPMTaskPointsHistory *_pData			// [in] Pointer to a @{HPMTaskPointsHistory} object specifying the points history.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the points history of a task on a specific day in the sprint.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskPointsHistory}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetPointsHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetPointsHistory)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get the points history for.
																				HPMUInt32 _DayInSprint,						// [in] The day in the sprint to get the points history for.
																				const HPMTaskPointsHistory **_pData			// [out] Pointer to a pointer of a @{HPMTaskPointsHistory} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates the days in a sprint that has points history on them.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskHistoryDaysEnum}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumPointsHistoryDays													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumPointsHistoryDays)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,								// [in] The unique identifier of the task to enumerate points history days for.
																					const HPMTaskHistoryDaysEnum **_pData				// [out] Pointer to a pointer of a @{HPMTaskHistoryDaysEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the vacation options of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskVacationOptions}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetVacationOptions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetVacationOptions)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set vacation options on.
																				const HPMTaskVacationOptions *_pData	// [in] Pointer to a @{HPMTaskVacationOptions} object specifying the vacation options.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the vacation options of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskVacationOptions}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetVacationOptions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetVacationOptions)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier to get vacation options for.
																				const HPMTaskVacationOptions **_pData	// [out] Pointer to a pointer of a @{HPMTaskVacationOptions} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the milestones a task is linked to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskLinkedToMilestones}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetLinkedToMilestones													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLinkedToMilestones)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set linked milestones on.
																					const HPMTaskLinkedToMilestones *_pData		// [in] Pointer to a @{HPMTaskLinkedToMilestones} object specifying the milestones the task should be linked to.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the milestones a task is linked to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskLinkedToMilestones}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLinkedToMilestones													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLinkedToMilestones)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get linked milestones for.
																					const HPMTaskLinkedToMilestones **_pData	// [out] Pointer to a pointer of a @{HPMTaskLinkedToMilestones} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the objects a task is linked to.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskLinkedTo}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetLinkedTo																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetLinkedTo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set linked objects on.
																			const HPMTaskLinkedTo *_pData				// [in] Pointer to a @{HPMTaskLinkedTo} object specifying the objects the task should be linked to.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the objects a task is linked to.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskLinkedTo}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLinkedTo																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLinkedTo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,						// [in] The unique identifier of the task to get linked objects for.
																			const HPMTaskLinkedTo **_pData				// [out] Pointer to a pointer of a @{HPMTaskLinkedTo} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the comment options of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskCommentsOptions}	 							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetCommentsOptions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCommentsOptions)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set comments options on.
																				const HPMTaskCommentsOptions *_pData	// [in] Pointer to a @{HPMTaskCommentsOptions} object specifying the comment options to set.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the comment options of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskCommentsOptions}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetCommentsOptions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCommentsOptions)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get comments options for.
																				const HPMTaskCommentsOptions **_pData	// [out] Pointer to a pointer of a @{HPMTaskCommentsOptions} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a comment post on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Set _ParentpostID to -1 for the first post.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskCreateComment															|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskCreateComment)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,				// [in] The unique identifier of the task to create a comment post on.
																			HPMTaskComment const *_pComment,	// [in] The comment to create. See @{HPMTaskComment}. Leave m_PostDate at 0 to use the servers current time
																			HPMInt32 *_pReturnedPostID			// [out] The post identifier of the create task. This function will block even in non-blocking mode if this parameter is not NULL.
																		); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a comment post on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskDeleteComment															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskDeleteComment)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to delete a comment post on.
																			HPMInt32 _PostID		// [in] The post identifier of the post to delete.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets a comment post on a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskComment}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetComment																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetComment)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,			// [in] The unique identifier of the task to set comment data on.
																		HPMInt32 _PostID,				// [in] The post identifier of the post to set comment data on.
																		const HPMTaskComment *_pData	// [in] Pointer to a @{HPMTaskComment} object specifying the comment data.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a comment post on a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskComment}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetComment																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetComment)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,			// [in] The unique identifier of the task to get comment data for.
																		HPMInt32 _PostID,				// [in] The post identifier of the post to get comment data for.
																		const HPMTaskComment **_pData	// [out] Pointer to a pointer of a @{HPMTaskComment} object, representing the returned data.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates comment posts on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskCommentEnum}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskEnumComments															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskEnumComments)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,					// [in] The unique identifier of the task to enumerate comment posts for.
																			const HPMTaskCommentEnum **_pComments	// [out] Pointer to a pointer of a @{HPMTaskCommentEnum} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Notifies resources set to receive notifications when a post is posted.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskNotifyCommentPosted														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskNotifyCommentPosted)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,	// [in] The unique identifier of the task to notify about a posted comment.
																					HPMInt32 _PostID,		// [in] The post identifier of the posted comment.
																					HPMInt32 _bEdit			// [in] Set to 1 to indicate that a comment post was edited and not posted.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the wall positions for a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskWallPositions}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWallPositions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWallPositions)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,						// [in] The unique identifier of the task to set the wall positions for.
																				const HPMTaskWallPositions *_pData			// [in] Pointer to a @{HPMTaskWallPositions} object specifying the wall positions for the task.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the wall positions for a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskWallPositions}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWallPositions														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWallPositions)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set the wall positions for.
																				const HPMTaskWallPositions **_pData		// [out] Pointer to a pointer of a @{HPMTaskWallPositions} object, representing the returned data.
																			);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets task SDK internal data.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{TaskSetSDKInternalData}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSDKInternalData														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSDKInternalData)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get SDK internal data for.
																				const HPMChar *_pIdentifier,		// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																				const HPMSDKInternalData **_pData	// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets task SDK internal data.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{TaskGetSDKInternalData}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSDKInternalData														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set SDK internal data for.
																				const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																				const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets task comment SDK internal data.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{TaskSetCommentSDKInternalData}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetCommentSDKInternalData												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCommentSDKInternalData)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get commment SDK internal data for.
																						HPMInt32 _PostID,					// [in] The post id of the comment to get comment SDK internal data for.
																						const HPMChar *_pIdentifier,		// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																						const HPMSDKInternalData **_pData	// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets task comment SDK internal data.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{TaskGetCommentSDKInternalData}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetCommentSDKInternalData												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCommentSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set comment SDK internal data for.
																						HPMInt32 _PostID,						// [in] The post id of the comment to set comment SDK internal data for.
																						const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																						const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the workflow on a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{TaskUpdatePipelineWorkflowToNewestVersion}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetWorkflow																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetWorkflow)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to set the workflow on.
																			HPMUInt32 _Data			// [in] The identifier of the workflow to set on the task.
																		); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the workflow set on a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetWorkflow																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetWorkflow)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the linked sprint of.
																			HPMUInt32 *_pData		// [out] Pointer to a variable that will receive the identifier of the workflow that is set on this task. Is 0xffffffff if no workflow is set.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the default workflow or pipeline on a task.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetDefaultWorkflow														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetDefaultWorkflow)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task. The sub items created under this task will have the default workflow or pipeline set. 
																				HPMUInt32 _Data			// [in] The identifier of the default workflow or pipeline to set on the task.
																			); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the default workflow or pipeline set on a task.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetDefaultWorkflow														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetDefaultWorkflow)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task. The sub items created under this task will have the default workflow or pipeline set. 
																				HPMUInt32 *_pData		// [out] Pointer to a variable that will receive the identifier of the default workflow or pipeline that is set on this task.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the archived status of on a sub project.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetArchived																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetArchived)(void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the sub project.
																		HPMInt32 _bArchived		// [in] The archived status to set on the sub project. Set to 1 if the sub project should be archived, 0 otherwise.
																		); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the archived status of a sub project.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetArchived																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetArchived)(void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskID,	// [in] The unique identifier of the sub project.
																		HPMInt32 *_pArchived	// [out,type=bool] Pointer to a variable that will receive the archived status of the sub project. 1 if the sub project is archived, 0 otherwise.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the pipeline task reference of a task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskPipelineGetTaskRef														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskPipelineGetTaskRef)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the pipeline reference of.
																				HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the task reference.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the text representation of a column for a task reference.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMColumn}, @{HPMColumnTextOptions}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetColumnText														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetColumnText)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,								// [in] The unique identifier of the task reference to get column text for.
																				const HPMColumn *_pColumn,							// [in] The column to get text for.
																				const HPMColumnTextOptions *_pColumnTextOptions,	// [in] The text column options.
																				const HPMString **_pData							// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a list of resources that were last assigned to a specific status in a	|
|						workflow.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceDefinitionList}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLastAssignedInWorkflowStatus											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastAssignedInWorkflowStatus)(void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,								// [in] The unique identifier of the task the workflow is set on.
																							HPMUInt32 _WorkflowID,								// [in] The identifier of the workflow containing the status.
																							HPMUInt32 _StatusID,								// [in] The identifier of the workflow status where the resources were last assigned.
																							const HPMResourceDefinitionList **_pResourceList	// [out] Pointer to a pointer of a @{HPMResourceDefinitionList} object, representing the returned data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a list of resources that are assigned for all workflows and statuses	|
|						for a task																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLastAssignedInWorkflowStatuses}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLastAssignedInWorkflowStatuses										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastAssignedInWorkflowStatuses)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskID,											// [in] The unique identifier of the task the workflows are set on.	
																								const HPMLastAssignedInWorkflowStatuses **_pLastAssignedList	// [out] Pointer to a pointer of a @{HPMLastAssignedInWorkflowStatuses} object, representing the returned data.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets last entered info for a specific status in a workflow.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMWorkflowStatusTransitInfo}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLastEnterWorkflowStatus												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastEnterWorkflowStatus)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,									// [in] The unique identifier of the task the workflow is set on.
																						HPMUInt32 _WorkflowID,									// [in] The identifier of the workflow containing the status.
																						HPMUInt32 _StatusID,									// [in] The identifier of the workflow status we want last enter info for.
																						const HPMWorkflowStatusTransitInfo **_pLastEnterInfo	// [out] Pointer to a pointer of a @{HPMWorkflowStatusTransitInfo} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets last exit info for a specific status in a workflow.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMWorkflowStatusTransitInfo}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLastExitWorkflowStatus												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLastExitWorkflowStatus)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,								// [in] The unique identifier of the task the workflow is set on.
																						HPMUInt32 _WorkflowID,								// [in] The identifier of the workflow containing the status.
																						HPMUInt32 _StatusID,								// [in] The identifier of the workflow status we want last exit info for.
																						const HPMWorkflowStatusTransitInfo **_pLastExitInfo	// [out] Pointer to a pointer of a @{HPMWorkflowStatusTransitInfo} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the pipeline task that automatically created this task.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetLinkedToPipelineTask												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetLinkedToPipelineTask)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,	// [in] The unique identifier of the task to get the created by pipeline task on.
																						HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the pipeline task that created this task.
																					);  

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the tasks that have been automatically created by this task as part of	|
|						a pipeline.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskEnum}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetCreatedPipelineTasks													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCreatedPipelineTasks)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,				// [in] The unique identifier of the task to set the tasks it has created on.
																						const HPMTaskEnum *_pData			// [in] Pointer to a @{HPMTaskEnum} object specifying the tasks that were created by this task.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the tasks that have been automatically created by this task as part of	|
|						a pipeline.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetCreatedPipelineTasks													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCreatedPipelineTasks)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,				// [in] The unique identifier of the task to get the tasks it has created.
																						const HPMTaskEnum **_pData			// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the workflow object identifier that this task was created from as		|
|						part of an automatically created workflow.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMWorkflowObjectIdentifier}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetCreatedFromWorkflowObject											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetCreatedFromWorkflowObject)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the task to set the workflow identifier of.
																							const HPMWorkflowObjectIdentifier *_pData		// [in] Pointer to a @{HPMWorkflowObjectIdentifier} object specifying the workflow object the task was created from.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the workflow object identifier that this task was created from as		|
|						part of an automatically created workflow.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMWorkflowObjectIdentifier}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetCreatedFromWorkflowObject											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetCreatedFromWorkflowObject)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,							// [in] The unique identifier of the task to get the workflow identifier of.
																							const HPMWorkflowObjectIdentifier **_pData		// [out] Pointer to a pointer of a @{HPMWorkflowObjectIdentifier} object, representing the returned data.
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
|						Note that only the required fields in										|
|						@{HPMWorkflowProgressionStructure}::m_pProgressionStates					|
|						that need to be filled to reach that state are included.					|
|						That means that if @{HPMWorkflowProgressionStructure}::m_nProgressionStates	|
|						is greater than zero, this state cannot be reached without filling in       |
|						the listed fields.															|
|																									|
|						The function will only traverse one level of transitions, i.e.				|
|						no stacked transitions.														|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMProjectWorkflows},					|	
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUtilGetWorkflowProgression												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUtilGetWorkflowProgression)(	void *_pSession,																	// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,																// [in] The unique identifier of the task to get the workflow progression for.	
																						HPMUniqueID _ResourceID,															// [in] The unique identifier of the resource to get progression for.
																						const HPMWorkflowProgressionStructure **_pWorkflowProgressionStructure				// [out] Pointer to a pointer of a @{HPMWorkflowProgressionStructure} object, representing the returned data.
																						);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																							|
|																										|
|	Description:		Gets workflow progression status for task in the workflow specified				|
|						according to a task status.														|
|																										|
|	Return Value:		Returns an error code. See @{EHPMError}.										|
|																										|
|	Comments:			The workflow status will progress only if the workflow for the supplied			|
|						workflow id has																	|
|						@{HPMProjectWorkflowObject}::m_WorkflowStatus_WorkflowStatusOnItemStatusChange	|
|						set for the status specified.													|
|																										|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}												|
|																										|
|	Location:			Function Pointers																|
|																										|
|	Index:				!name																			|
|						TaskUtilGetWorkflowProgressionFromTaskStatusChange								|
\*_____________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUtilGetWorkflowProgressionFromTaskStatusChange)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																											HPMUniqueID _ProjectID,			// [in] The unique identifier of the project to get workflow progress for.
																											HPMInt32 _WorkflowID,			// [in] The workflow id to use for getting workflow progression.
																											HPMInt32 _OldWorkflowStatus,	// [in] The old workflow status.
																											HPMInt32 _TaskStatus,			// [in,type=EHPMTaskStatus] The task status that the task was changed to.
																											HPMInt32 *_pNewStatus			// [out] The new status resulting from the workflow progression. If -1 no progression resulted.
																										);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets task reference SDK internal data.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{TaskRefSetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetSDKInternalData)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,				// [in] The unique identifier of the task reference to get SDK internal data for.
																					const HPMChar *_pIdentifier,		// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData **_pData	// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets resource SDK internal data.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{TaskRefGetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefSetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to set SDK internal data for.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the sub project path.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetSubProjectPath												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetSubProjectPath)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get the sub project path for.
																						HPMInt32 _bIncludeProxyPath,			// [in] If set to 1 if the subproject path will contain the proxy path, otherwise set to 0.
 																						const HPMString **_pData				// [out] Pointer to a pointer of a @{HPMString} object, representing the returned sub project path.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates children task references of a parent task reference.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilEnumChildren														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilEnumChildren)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get children task references for. If the project id is used you will get a correct list of sorted task references in the root of the project.
																					HPMInt32 _bIncludeAllChildren,			// [in] If set to 1 if the children on all levels below parent will be returned and if set to 0 just the children on the level below will be returned.
																					const HPMTaskEnum **_pEnum				// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates not completed pipeline task references of a parent task id.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilEnumPipelineProgression											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilEnumPipelineProgression)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get progression task references for.
																							const HPMTaskEnum **_pEnum				// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the parent task reference of a task reference id.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetParent														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetParent)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get parent for.
																				HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the parent task reference. Returns the project id if the reference id is root.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the successor task reference of a task reference id.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetNext															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetNext)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get successor for.
																			HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the successor task reference.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the successor sibling task reference of a task reference id.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetNextSibling													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetNextSibling)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get successor for.
																					HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the successor task reference.
																				);
	
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the predecessor sibling task reference of a task reference id.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetPrevSibling													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetPrevSibling)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get successor for.
																					HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the predecessor task reference.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the successor task reference at the same or lower level as a task		|
|						reference id.																|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetNextAtSameOrLowerLevel										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetNextAtSameOrLowerLevel)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get successor for.
																								HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the successor task reference. 
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the predecessor task reference at the same or lower level as a task	|
|						reference id.																|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilGetPrevAtSameOrLowerLevel										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilGetPrevAtSameOrLowerLevel)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get predecessor for.
																								HPMUniqueID *_pTaskRefID				// [out] Pointer to a variable that will receive the unique identifier of the successor task reference. 
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Moves a task in a task tree.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilMoveInTree														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilMoveInTree)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,											// [in] The unique identifier of the task reference to move.
																				HPMUniqueID _ParentTaskRefID,									// [in] The unique identifier of the parent task reference to insert after.
																				HPMUniqueID _InsertAfterTaskRefID,								// [in] The unique identifier of the task reference to insert after. If set to -1 the task ref to insert will be inserted as the last child of the parent task ref.
																				const HPMChangeCallbackData_TaskChangeDisposition **_pReturn	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_TaskChangeDisposition} object, representing the returned data. If this parameter is not NULL, the function will block.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Traces the task tree.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Tracing is only available when debugging is enabled.					    |		
|																									|
|	See Also:			@{HPMSdkFunctions}, @{SessionOpen}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilTraceTree														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilTraceTree)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _RootTaskRefID		// [in] The unique identifier of the task reference that is root of the tree that will be traced.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the completion of a task by calculating the completion from its		|
|						children. If a leaf item is sent in the completion of the task is used.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilIsCompleted														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilIsCompleted)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,	// [in] The unique identifier of the task reference to check for completion on.
																				HPMInt32 *_pReturn		// [out,type=bool] Returns 1 if complete 0 otherwise.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a task ref has children.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilHasChildren														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilHasChildren)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,	// [in] The unique identifier of the task reference to do children check for.
																				HPMInt32 *_pReturn		// [out,type=bool] Returns 1 if task has children 0 otherwise.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if work can be started on a task ref.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilCanStartNow														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilCanStartNow)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,	// [in] The unique identifier of the task reference to check if work can be started on.
																				HPMInt32 *_pReturn		// [out,type=bool] Returns 1 if work can be started, 0 otherwise.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if any of the task refs of a task has children.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUtilOneTaskRefHasChildren												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUtilOneTaskRefHasChildren)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,	// [in] The unique identifier of the task whose task references are checked for children.
																						HPMInt32 *_pReturn		// [out,type=bool] Returns 1 if one of the task refs of a task has children 0 otherwise.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the task a task reference points to.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetTask																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetTask)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskRefID,	// [in] The unique identifier of the task reference to get the task unique identifier for.
																		HPMUniqueID *_pTaskID	// [out] Pointer to a variable that will receive the unique identifier of the task a task reference points to.
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the container a task reference points to.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetContainer															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetContainer)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,		// [in] The unique identifier of the task reference to get the container for.
																				HPMUniqueID *_pTaskID		// [out] Pointer to a variable that will receive the unique identifier of the container. Can be a project, resource, backlog project or a QA project.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates task references in a container.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefEnum																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefEnum)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ContainerID,	// [in] A unique identifier of a container. Can be a project, resource, backlog project or a QA project.
																		const HPMTaskEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Connects two task references.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefConnect																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefConnect)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _TaskRefIDFrom,	// [in] The unique identifier of the task reference to create a connection from.
																		HPMUniqueID _TaskRefIDTo,	// [in] The unique identifier of the task reference to create a connection to.
																		HPMUniqueID *_pConnectionID	// [out] Pointer to a variable that will receive the unique identifier of the created connection. In non-blocking mode the unique identifier will be a temporary value that you can match against the @{HPMChangeCallbackData_TaskRefConnect}::m_LocalTempConnectionID.
																	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the tree level of a task.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetTreeLevel															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetTreeLevel)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,		// [in] The unique identifier of the task reference to get the tree level for.
																				HPMInt32 *_pData			// [out] Pointer to a variable that will receive the tree level.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deprecated, use @{TaskChangeDisposition} instead.							|
|																									|
|						Gets the previous task reference of a task reference.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetPreviousID														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetPreviousID)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID, // [in] The unique identifier of the task reference to get the previous task reference for.
																				HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the task reference set as previous.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the previous task reference of a task reference in the work priority	|	
|						list.																		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetPreviousWorkPriorityID											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetPreviousWorkPriorityID)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _TaskRefID, // [in] The unique identifier of the task reference to get the previous task reference for.
																							HPMUniqueID *_pData		// [out] Pointer to a variable that will receive the unique identifier of the task reference set as previous.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Clears the newly created flag of a task reference.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefClearNewlyCreated													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefClearNewlyCreated)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID	// [in] The unique identifier of the task reference to clear the newly created flag on.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the newly created flag of a task reference.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetNewlyCreated														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetNewlyCreated)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,	// [in] The unique identifier of the task reference to get the newly create flag for.
																				HPMInt32 *_pData		// [out,type=bool] Pointer to a variable that will receive the state of the newly create flag.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the unique identification history of a task reference.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskUIDHistory}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefSetUIDHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefSetUIDHistory)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,			// [in] The unique identifier of the task reference to set the unique identifier history for.
																				const HPMTaskUIDHistory *_pData	// [in] Pointer to a @{HPMTaskUIDHistory} object specifying the unique identifier history.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the unique identification history of a task reference.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskUIDHistory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetUIDHistory														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetUIDHistory)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,				// [in] The unique identifier of the task reference to get the unique identifier history for.
																				const HPMTaskUIDHistory **_pData	// [out] Pointer to a pointer of a @{HPMTaskUIDHistory} object, representing the returned data.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a task connection.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionDelete														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionDelete)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ConnectionID	// [in] The unique identifier of the connection to delete.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the type of a task connection.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskConnectionType}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionSetConnectionType												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionSetConnectionType)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ConnectionID,	// [in] The unique identifier of the connection to set the type of.
																							HPMInt32 _Type				// [in,type=EHPMTaskConnectionType] The type to set. Can be one of @{EHPMTaskConnectionType}.
																						); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the type of a task connection.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskConnectionType}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionGetConnectionType												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionGetConnectionType)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ConnectionID,	// [in] The unique identifier of the task to get the type of.
																							HPMInt32 *_pType			// [out,type=EHPMTaskConnectionType] Pointer to a variable that will receive the type. Will be one of @{EHPMTaskConnectionType}.
																						); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the lead/lag time of a task connection.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionSetLeadLagTime												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionSetLeadLagTime)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ConnectionID,	// [in] The unique identifier of the connection to set the lead/lag time on.
																						HPMInt32 _Time				// [in] The number of days lead/lag time to set.
																					); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the lead lag time of a task connection.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionGetLeadLagTime												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionGetLeadLagTime)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ConnectionID,		// [in] The unique identifier of the connection to get the lead/lag time for.
																						HPMInt32 *_pTime				// [out] Pointer to a variable that will receive the number of days of lead/lag time.
																					); 
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the task reference a task connection is connected from.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{TaskConnectionGetConnectTo}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionGetConnectFrom												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionGetConnectFrom)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ConnectionID,		// [in] The unique identifier of the connection to get the the connected from task reference on.
																						HPMUniqueID *_pRefID			// [out] Pointer to a variable that will receive the unique identifier of the task reference the connection is connected from.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the task reference a task connection is connected to.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{TaskConnectionGetConnectFrom}	 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskConnectionGetConnectTo													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskConnectionGetConnectTo)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ConnectionID,	// [in] The unique identifier of the connection to get the connected to task reference on.
																					HPMUniqueID *_pRefID		// [out] Pointer to a variable that will receive the unique identifier of the task reference the connection is connected to.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Updates all tasks to the newest version of the workflow.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Call this function on the task ID of a main pipeline task to create,		|
|						delete, or update the properties of the subtasks that makes up the tasks	|
|						of a pipeline workflow.														|
|																									|
|						This function takes care of all that is needed to either create the			|
|						sub-pipeline tasks the first time a pipeline workflow is set on a task,		|
|						or when you want to upgrade the task to the latest version of the pipeline.	|
|						The update deletes previously autocreated sub-pipeline tasks if they have	|
|						been removed from the workflow, creates new sub-pipeline tasks and updates	|
|						the properties such as name and the position in the task tree on already	|
|						existing tasks.																|
|																									|
|						If the user has created tasks within the pipeline those tasks will be		|
|						moved outside of the pipeline in the event of the sub-pipeline task they	|
|						were created under is deleted as the result of being deleted in the			|
|						workflow. The same thing happens if the flag in the workflow to allow		|
|						creation of sub tasks is removed.											|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskEnum}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUpdatePipelineWorkflowToNewestVersion									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUpdatePipelineWorkflowToNewestVersion)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																									const HPMTaskEnum *_pData			// [in] Pointer to a @{HPMTaskEnum} object specifying the tasks that will be updated with the newest version of the workflow.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a list of task ids given a prepared find context.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMTaskEnum},							|
|						@{HPMFindContextData}														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskFind																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskFind)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																	const HPMFindContextData *_pFindContext,			// [in] The prepared find context to use for the find.
																	HPMUInt32 _Flags,									// [in,type=EHPMTaskFindFlag] Flags specifying find options. Can be any combination of @{EHPMTaskFindFlag}.
																	const HPMTaskEnum **_pEnum							// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned data.
																);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a task ref is included in a prepared find context.				|
|																									|
|	Return Value:		Returns 1 if the task reference is included in the find context				|
|						0 otherwise.																|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMFindContextData}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefUtilIsInFindContext													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefUtilIsInFindContext)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,						// [in] The unique identifier of the task ref to check if it passes through a find context.
																					const HPMFindContextData *_pFindContext,	// [in] The find context to check the task ref in.
																					HPMInt32 *_pPasses							// [out,type=bool] Set to 1 if task ref is in the find context, 0 otherwise.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the computed sums for a parent task.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskSummary}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetSummary															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetSummary)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get summation for.
																			const HPMTaskSummary **_pTaskSummary	// [out] Pointer to a pointer of a @{HPMTaskSummary} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the backlog priority of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetBacklogPriority														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetBacklogPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get the priority for.
																				HPMInt32 *_pData						// [out,type=EHPMTaskAgilePriorityCategory] Pointer to a variable that will receive the priority. Will be one of @{EHPMTaskAgilePriorityCategory}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the backlog priority of a task.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetBacklogPriority														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetBacklogPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set the priority for.
																				HPMInt32 _Data							// [in,type=EHPMTaskAgilePriorityCategory] The priority to set. Can be one of @{EHPMTaskAgilePriorityCategory}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the sprint priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetSprintPriority														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetSprintPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get the priority for.
																				HPMInt32 *_pData						// [out,type=EHPMTaskAgilePriorityCategory] Pointer to a variable that will receive the priority. Will be one of @{EHPMTaskAgilePriorityCategory}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the sprint priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetSprintPriority														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetSprintPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set the priority for.
																				HPMInt32 _Data							// [in,type=EHPMTaskAgilePriorityCategory] The priority to set. Can be one of @{EHPMTaskAgilePriorityCategory}.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the bug priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetBugPriority															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetBugPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get the priority for.
																			HPMInt32 *_pData						// [out,type=EHPMTaskAgilePriorityCategory] Pointer to a variable that will receive the priority. Will be one of @{EHPMTaskAgilePriorityCategory}.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the bug priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetBugPriority															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetBugPriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set the priority for.
																			HPMInt32 _Data							// [in,type=EHPMTaskAgilePriorityCategory] The priority to set. Can be one of @{EHPMTaskAgilePriorityCategory}.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the agile priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Gets priority based on the task's container, so it does not work for		|
|						committed tasks. Use @{TaskGetBacklogPriority},								|
|						@{TaskGetSprintPriority} or @{TaskGetBugPriority} instead.					|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskGetAgilePriorityCategory												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskGetAgilePriorityCategory)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,					// [in] The unique identifier of the task to get the priority for.
																						HPMInt32 *_pData						// [out,type=EHPMTaskAgilePriorityCategory] Pointer to a variable that will receive the priority. Will be one of @{EHPMTaskAgilePriorityCategory}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the agile priority of a task.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Sets priority based on the task's container, so it does not work for		|
|						committed tasks. Use @{TaskSetBacklogPriority},								|
|						@{TaskSetSprintPriority} or @{TaskSetBugPriority} instead.					|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskSetAgilePriorityCategory												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskSetAgilePriorityCategory)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _TaskID,					// [in] The unique identifier of the task to set the priority for.
																						HPMInt32 _Data							// [in,type=EHPMTaskAgilePriorityCategory] The priority to set. Can be one of @{EHPMTaskAgilePriorityCategory}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Updates the priority order in a project according to the agile priority		|
|						status.																		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMTaskAgilePriorityCategory}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUtilUpdateAgilePriority													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUtilUpdateAgilePriority)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID					// [in] The unique identifier of the project to update the priority order in.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the computed sums for a milestone.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMMilestoneSummary}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefGetMilestoneSummary													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefGetMilestoneSummary)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskRefID,							// [in] The unique identifier of the milestone task reference to get summation for.
																					const HPMMilestoneSummary **_pMilestoneSummary	// [out] Pointer to a pointer of a @{HPMMilestoneSummary} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets all connections to/from a task reference.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskConnectionEnum}, @{EHPMTaskConnectionFlag}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskRefConnectionsEnum														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskRefConnectionsEnum)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _TaskRefID,					// [in] The unique identifier of the task reference to get connections for.
																				HPMUInt32 _Flags,						// [in,type=EHPMTaskConnectionFlag] Flags specifying which type of connections to return. Can be any combination of @{EHPMTaskConnectionFlag}.
																				const HPMTaskConnectionEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMTaskConnectionEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates all task references, including QA bugs that are committed to a	|
|						sprint.																		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskEnum}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUtilSprintTaskRefEnum													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionTaskUtilSprintTaskRefEnum)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _TaskID,					// [in] The unique identifier of the sprint to get committed tasks for.
																					const HPMTaskEnum **_pEnum				// [out] Pointer to a pointer of a @{HPMTaskEnum} object, representing the returned task ref enum data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Returns the effective release tags for the task.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMTaskEffectiveLinkedToMilestones}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						TaskUtilGetEffectiveLinkedToMilestones										|
\*_________________________________________________________________________________________________*/
typedef HPMError(DHPMSdkCallingConvention *HPMFunctionTaskUtilGetEffectiveLinkedToMilestones)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _TaskID,								// [in] The unique identifier of the task to get the effective release tags for.
																								HPMInt32 _bForceInherited,							// [in] Forces the calculation to disregard any explicitly set milestones on _TaskID. Useful for getting the list of milestones a task would inherit from if the task was set to inherit.
																								const HPMTaskEffectiveLinkedToMilestones **_pData	// [out] Pointer to a pointer of a @{HPMTaskEffectiveLinkedToMilestones} object, representing the returned data.
																							);


#endif
