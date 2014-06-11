
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK resources										|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/5 - Resources										|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		Flags to specify for @{HPMResourceProperties}::m_Flags	|
|																				|
|	See Also:			@{HPMResourceProperties}								|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/
enum EHPMResourceFlag
{
	EHPMResourceFlag_None = 0,
	EHPMResourceFlag_ActiveAccount = 1 << 0,			// The resource account is active. When the account is active the resource can log on to the server, when inactive the resource can not log in.
	EHPMResourceFlag_AdminAccess = 1 << 1,				// The resource has administrative access and is able to manage resources and projects in the database.
	EHPMResourceFlag_ResourceAllocationAccess = 1 << 2,	// The resource has access to resource allocation pane in client.
	EHPMResourceFlag_DocumentManagementAccess = 1 << 3, // The resource has access to document management pane in client.
	EHPMResourceFlag_AuthenticationProvider = 1 << 4,	// For SDK users only: the resource is allowed to provide custom authentication services. The SDK is not allowed to set this flag.
	EHPMResourceFlag_CredentialCheckProvider = 1 << 5,	// For SDK users only: the resource is allowed to provide credential check services. The SDK is not allowed to set this flag.
	EHPMResourceFlag_AvatarManagementAccess = 1 << 6,	// The resource is able to manage resource avatars
	EHPMResourceFlag_SdkChatUser = 1 << 7,				// For SDK users only: the SDK user will be available for chat.
	EHPMResourceFlag_ChatAccess = 1 << 8,				// The resource has access to chat.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		Flags to specify for									|
|						@{HPMResourceProperties}::m_PasswordFlags				|
|																				|
|	See Also:			@{HPMResourceProperties}								|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/
enum EHPMResourcePasswordFlag
{
	EHPMResourcePasswordFlag_None = 0,
	EHPMResourcePasswordFlag_MustChangePasswordNextLogon = 1 << 0,	// The resource must change the password next login.  If this flag is specified together with @{EHPMResourcePasswordFlag}_CannotChangePassword the resource will not be asked to change password next login.
	EHPMResourcePasswordFlag_PasswordNeverExpires = 1 << 1,			// The resources password never expires.
	EHPMResourcePasswordFlag_CannotChangePassword = 1 << 2,			// The resource cannot change its password.
	EHPMResourcePasswordFlag_PasswordDisabled = 1 << 3,				// The resource cannot log in using the built-in Hansoft authentication protocol.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		Flags to specify for									|
|						@{HPMResourceProperties}::m_ResourceType				|
|																				|
|	See Also:			@{HPMResourceProperties}								|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/
enum EHPMResourceType
{
	EHPMResourceType_NewVersionOfSDKRequired,	// The resource type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMResourceType_Normal,					// This resource is a normal resource.
	EHPMResourceType_Ghost,						// This resource is a ghost resource. Ghost resources are not full members of the project and you cannot log in to this account. This resource does not consume a license.
	EHPMResourceType_SDK,						// This is a SDK resource. This resource can only be used by an SDK connecting to the server and cannot be logged in to from the client. This is the only type of resource that an SDK can log in with.
	EHPMResourceType_QAAccount,					// This is a QA resource. This resource can only be used to report and manage bugs. No my work view or project management is available for this user. This resource does not consume a license.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																				|
|																						|
|	Description:		Flags to specify for @{HPMResourceGlobalSettings}::m_Flags		|
|																						|
|	See Also:			@{HPMResourceGlobalSettings}									|
|																						|
|	Location:			Enumerations													|
|																						|
|	Index:				!name															|
|						!enums															|
\*_____________________________________________________________________________________*/
enum EHPMResourceGlobalSettingsFlag
{
	EHPMResourceGlobalSettingsFlag_None = 0,
	EHPMResourceGlobalSettingsFlag_CopyResourceAndMiscOnTaskInsert = 1 << 0,				// When the resource inserts a task resource assignment, duration and budgeted work should be inherited for the previously selected activity.
	EHPMResourceGlobalSettingsFlag_UnlockByDefault = 1 << 1,								// When a new task is created by the resource it should be unlocked.
	EHPMResourceGlobalSettingsFlag_ShowMilestoneLinksOnTasks = 1 << 2,						// Links should be shown between milestones and items in the timeline view.
	EHPMResourceGlobalSettingsFlag_InstantlyEditCreatedTasks = 1 << 3,						// When a new task is created name edit mode should be activated.
	EHPMResourceGlobalSettingsFlag_CommentIndicator = 1 << 4,								// Show an icon beside tasks when they contain a comment.
	EHPMResourceGlobalSettingsFlag_EnterDateManually = 1 << 5,								// Allow the resource to enter dates manually instead of showing the date selection dialog.
	EHPMResourceGlobalSettingsFlag_CopyPasteTaskData = 1 << 6,								// Extra data such as comments, extra columns and delegation should be copied in copy/past operations.
	EHPMResourceGlobalSettingsFlag_ActivityNumberLeftmostColumn = 1 << 7,					// Show the activity number in the leftmost column in gantt.
	EHPMResourceGlobalSettingsFlag_ShowPreSucActivityNumbers = 1 << 8,						// Show predecessor and successor columns.
	EHPMResourceGlobalSettingsFlag_DontTranslateEstimatedIdealDaysToWorkRemaining = 1 << 9,	// Don't translate estimated ideal days to remaining work when moving a task from the backlog to a sprint.
	EHPMResourceGlobalSettingsFlag_HideCompletedTasksInProjectView = 1 << 10,				// Hide completed tasks in the project planning view.
	EHPMResourceGlobalSettingsFlag_HideTasksNotAssignedToMeInProjectView = 1 << 11,			// Hide tasks that are not assigned to the resource in the project planning view.
	EHPMResourceGlobalSettingsFlag_NoFindAutocompletion = 1 << 12,							// Don't show auto completion in 'Find' and 'Find all'.
	EHPMResourceGlobalSettingsFlag_HideSubProjectCompletePercent = 1 << 13,					// Hide sub-project completion percentage.
	EHPMResourceGlobalSettingsFlag_DoNotAutoPreviewFiles = 1 << 14,							// Attachments shouldn't be autopreviewed.
	EHPMResourceGlobalSettingsFlag_MagnifyItemsInTheWallView = 1 << 15,						// Magnify items in the wall view when mouse is over them.
	EHPMResourceGlobalSettingsFlag_SymbolicFindOperators = 1 << 16,							// Operators generated in report editor is symbolic rather than textual. & as apposed to "AND".
	EHPMResourceGlobalSettingsFlag_RightAlignItemText = 1 << 17,							// Right align item name/description text.
	EHPMResourceGlobalSettingsFlag_ShowPastSprintsMilestonesInDropdown = 1 << 18,			// Show past sprints/iterations and milestones/releases in drop down selections.
	EHPMResourceGlobalSettingsFlag_HighlightTasksOnCriticalPathFlags = 1 << 19,				// Highlight tasks on critical path.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Resource lock flags.														|
|																									|
|	See Also:			@{ResourceGetLockFlags}, @{ResourceChangeLockFlags}							|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMResourceLockFlag
{
	EHPMResourceLockFlag_None = 0,
	EHPMResourceLockFlag_Deleted = 1 << 0,		// Resource has been deleted.
	EHPMResourceLockFlag_Locked = 1 << 1,		// Resource has been locked.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		Flags to specify for									|
|						@{HPMResourceGroupProperties}::m_Flags					|
|																				|
|	See Also:			@{HPMResourceGroupProperties}							|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/
enum EHPMResourceGroupFlag
{
	EHPMResourceGroupFlag_None = 0,
	EHPMResourceGroupFlag_ChatVisibleInNewsFeed = 1 << 0,		// Chat messages to the resource group will show up in news feed
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating resources in a database.								|
|																									|
|	See Also:			@{ResourceEnum}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceEnum
{
	HPMUInt32 m_nResources;				// The number of resources in the array.
	const HPMUniqueID *m_pResources;	// Pointer to a list unique database identifiers of resources.
} HPMResourceEnum;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying properties of a resource.								|
|																									|
|	Comments:			When getting the resource properties the password cannot be retrieved for	|
|						security reasons. The password only exists as a hash in the database but	|
|						is not accessible by the SDK or the clients.								|
|																									|
|	See Also:			@{EHPMResourceFlag}, @{EHPMResourceType}, @{EHPMResourcePasswordFlag},		|
|						@{ResourceCreate}, @{ResourceGetProperties}									|
|						@{ResourceSetProperties}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceProperties
{
	const HPMChar *m_pName;							// The name of the resource.
	const HPMChar *m_pSortName;						// If set this name is used for sorting instead of the user name.
	const HPMChar *m_pTitle;						// The title of the resource.
	const HPMChar *m_pEmailAddress;					// The email address of the resource.
	HPMUInt32 m_Flags;								// [type=EHPMResourceFlag,default=EHPMResourceFlag_None] Resource flags. Can be any combination of @{EHPMResourceFlag}.
	HPMUInt32 m_ResourceType;						// [type=EHPMResourceType,default=EHPMResourceType_Normal] Resource type. Can be one of @{EHPMResourceType}.
	HPMUInt32 m_PasswordFlags;						// [type=EHPMResourcePasswordFlag,default=EHPMResourcePasswordFlag_MustChangePasswordNextLogon] Resource password flags. Can be any combination of @{EHPMResourcePasswordFlag}.
	HPMUniqueID m_RemoteID;							// If this resource is a remote resource this is the unique database identifier of that resource in the remote database.
	const HPMChar *m_pRemoteGUID;					// The full GUID of the remote database if the resource is a remote resource.

	HPMUInt32 m_nMemberOfResourceGroups;			// Number of resource groups the resource is a member of. Set to 0 to disable.
	const HPMUniqueID * m_pMemberOfResourceGroups;	// Pointer to a list of unique database ids identifying resource groups. This member can be NULL if m_nMemberOfResourceGroups is 0;
} HPMResourceProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying global settings for a resource.							|
|																									|
|	See Also:			@{EHPMResourceFlag}, @{EHPMResourceType}, @{EHPMResourcePasswordFlag},		|
|						@{ResourceGetGlobalSettings},												|
|						@{ResourceSetGlobalSettings}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceGlobalSettings
{
	HPMUInt32 m_Flags;		// [type=EHPMResourceGlobalSettingsFlag,default=EHPMResourceGlobalSettingsFlag_None] Binary settings. Can be any combination of @{EHPMResourceGlobalSettingsFlag}.
	HPMUInt32 m_DateFormat; // [type=EHPMDateFormat,default=EHPMDateFormat_YYYY_MM_DD_ISO8601] Date format displayed in the resources client. Can be one of @{EHPMDateFormat}.
} HPMResourceGlobalSettings;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for specifying the properties of a resource group.						|
|																									|
|	See Also:			@{ResourceGroupCreate},														|
|						@{ResourceGroupSetProperties},												|
|						@{ResourceGroupGetProperties}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceGroupProperties
{
	const HPMChar *m_pName;			// The name of the resource group
	const HPMChar *m_pSortName;		// If set this name is used for sorting instead of the user group name.
	HPMUInt32 m_Flags;				// [type=EHPMResourceGroupFlag,default=EHPMResourceGroupFlag_None] Resource group flags. Can be any combination of @{EHPMResourceGroupFlag}.
} HPMResourceGroupProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating resource groups in a database.							|
|																									|
|	See Also:			@{ResourceGroupEnum}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceGroupEnum
{
	HPMUInt32 m_nResourceGroups;				// The number of resource groups in the array.
	const HPMUniqueID *m_pResourceGroups;		// Pointer to a list unique database identifiers of resource groups.
} HPMResourceGroupEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for returning the current resource impersonation.						|
|																									|
|	See Also:			@{ResourceGetImpersonate}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceImpersonate
{
	HPMUniqueID m_ResourceID;							// The unique identifier of the resource that is currently impersonated.
	HPMInt32 m_ClientOrigin;							// [type=EHPMDataHistoryClientOrigin,default=EHPMDataHistoryClientOrigin_Unknown] The client origin of the current impersonation. Can be one of @{EHPMDataHistoryClientOrigin}.
	const HPMUntranslatedString *m_pCustomClientOrigin;	// The returned custom client origin. Can be null if not set.
} HPMResourceImpersonate;


#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a resource in the connected database.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If the server run out of licenses the creation of the resource will fail.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceDelete}, @{HPMResourceProperties}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceCreate																|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceCreate)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																		const HPMResourceProperties *_pResourceProperties,	// [in] Properties of the created resource. See @{HPMResourceProperties}.
																		const HPMChar *_pPassword,							// [in] The password of the created resource. Can be any valid UTC-16 string.
																		HPMInt32 _bSetFlags,								// [in] Set to true if you want to set the flags in HPMResourceProperties. If true the function will block even in non-blocking mode.
																		HPMUniqueID *_pResourceID							// [out] The unique database id of the created resource. In nonblocking mode _pResourceID will be filled with a temporary id that can be matched in the change callback. See @{EHPMChangeCallbackOperation_ResourceCreate}.
																	);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a resource in the connected database.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When a resource is deleted from the database the tasks it is assigned to	|
|						will be unassigned.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceCreate}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceDelete																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceDelete)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																		HPMUniqueID _ResourceID		// [in] The unique database id of the resource to delete
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates resources in the database.										|
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
|						ResourceEnum																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceEnum)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																		const HPMResourceEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMResourceEnum} object, representing the returned data.
																	);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Impersonates a resource.													|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Use this function to impersonate users. This can be desirable because by	|
|						default actions in the task history etc will look like the SDK user will	|
|						have done them. Before calling any functions that is initiated by			|
|						user actions you should call this function.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceImpersonate															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceImpersonate)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceIDToImpersonate,				// [in] The resource that you want to impersonate. Set to -1 to disable impersonation.
																				HPMInt32 _ClientOrigin,								// [in,type=EHPMDataHistoryClientOrigin] Defines a origin that will explain the origin of the operations in task history. Can be one of @{EHPMDataHistoryClientOrigin}.
																				HPMUntranslatedString const *_pCustomClientOrigin	// [in] Defines a custom string that will explain the origin of the operations in task history. Optional.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets properties of a resource.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceProperties}	 				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetProperties														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetProperties)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,							// [in] The resource to get the properties of.
																				const HPMResourceProperties **_pResourceProperties	// [out] Pointer to a pointer of a @{HPMResourceProperties} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets properties of a resource.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceProperties}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetProperties														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetProperties)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,							// [in] The resource to set properties of.
																				const HPMResourceProperties *_pResourceProperties,	// [in]	Pointer to a @{HPMResourceProperties} object representing the properties you want to set on the resource.
																				const HPMChar *_pNewPassword						// [in]	New password to set on the resource. If you don't want to reset the password, pass NULL ("" in C++, .NET and Java) for this parameter.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the global settings of a resource.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						A users global settings are settings that are resource specific and range	|
|						over all projects in a database.											|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceGlobalSettings}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetGlobalSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetGlobalSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,						// [in] The resource to get global settings for.
																					const HPMResourceGlobalSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMResourceGlobalSettings} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the global settings of a resource.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceGlobalSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetGlobalSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetGlobalSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,						// [in] The resource to set global settings for.
																					const HPMResourceGlobalSettings *_pSettings		// [in] Pointer to a @{HPMResourceGlobalSettings} object representing the settings you want to set on the resource.
																				);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the value of a resource custom setting.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{GlobalRegisterCustomSettings}, @{ResourceSetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}.
																						HPMUniqueID _ResourceID,				// [in] The resource to get custom settings value for.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue **_pData	// [out] Pointer to a pointer of a @{HPMCustomSettingValue} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a resource custom setting.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue}					|
|						@{GlobalRegisterCustomSettings}, @{ResourceGetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}.
																						HPMUniqueID _ResourceID,				// [in] The resource to set custom settings value for.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue *_pData		// [in] The custom settings value to set. If set to NULL the value will be set to its default value.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets resource SDK internal data.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{ResourceSetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,				// [in] The resource to get SDK internal data for.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData **_pData		// [out] Pointer to a pointer of a @{HPMSDKInternalData} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets resource SDK internal data.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData}					|
|						@{ResourceGetSDKInternalData}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,				// [in] The resource to set SDK internal data for.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates a resource group in the connected database.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGroupDelete}, @{HPMResourceGroupProperties}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupCreate															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupCreate)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																				const HPMResourceGroupProperties *_pResourceGroupProperties,	// [in] Properties of the created resource group. See @{HPMResourceGroupProperties}.
																				HPMUniqueID *_pResourceGroupID									// [out] The unique id of the created resource.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes a resource group in the connected database.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ResourceGroupCreate}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupDelete															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupDelete)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceGroupID	// [in] The unique id of the resource group to delete
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates resource groups in the database.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceGroupEnum}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupEnum															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupEnum)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																			const HPMResourceGroupEnum **_pEnum	// [out] Pointer to a pointer of a @{HPMResourceGroupEnum} object, representing the returned data.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets properties of a resource group.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMResourceGroupProperties}	 		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupGetProperties													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupGetProperties)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,										// [in] The resource group to get the properties of.
																					const HPMResourceGroupProperties **_pResourceGroupProperties	// [out] Pointer to a pointer of a @{HPMResourceGroupProperties} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets properties of a resource group.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceGroupProperties}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupSetProperties													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupSetProperties)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,									// [in] The resource group to set properties of.
																					const HPMResourceGroupProperties *_pResourceGroupProperties	// [in]	Pointer to a @{HPMResourceGroupProperties} object representing the properties you want to set on the resource group.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the id of the currently logged in resource.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	 														|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetLoggedIn															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetLoggedIn)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID *_pResourceID	// [out] Pointer to a variable that will receive the unique identifier of the resource that is currently logged in.
																			); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets resources that are members of a resource group.						|
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
|						ResourceGroupGetResources													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupGetResources)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceGroupID,		// [in] The resource group to get the members of.
																					const HPMResourceEnum **_pEnum		// [out] Pointer to a pointer of a @{HPMResourceEnum} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a resource from a name.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetResourceFromName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetResourceFromName)(void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pResourceName,	// [in] The name to find a resource for.
																					HPMUniqueID *_pResourceID		// [out] Pointer to a variable that will receive the unique identifier of the resource. Set to -1 if no matching resource is found.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a name from a resource.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetNameFromResource													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetNameFromResource)(void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,			// [in] The resource to get the name of.
																					const HPMString **_pResourceName	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned resource name.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a name from a resource group.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupGetNameFromResourceGroup										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupGetNameFromResourceGroup)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _ResourceGroupID,			// [in] The resource group to get the name of.
																								const HPMString **_pResourceGroupName	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned resource group name.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if an identifier is a resource group.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGroupUtilResourceGroupExists										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGroupUtilResourceGroupExists)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																								HPMUniqueID _ResourceGroupID,			// [in] The identifier to check if it s a resource group.
																								HPMInt32 *_pReturn						// [out,type=bool] Returns 1 if the identifer is a resource group 0 otherwise.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the id of the currently impersonated resource.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMResourceImpersonate}	 							|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetImpersonate														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetImpersonate)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																				HPMResourceImpersonate const **_pResourceImpersonate	// [out] Pointer to a pointer of a @{HPMResourceImpersonate} object, representing the returned impersonation settings.
																				); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the lock flags of a resource.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMResourceLockFlag}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetLockFlags														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetLockFlags)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,	// [in] The unique id of the resource to get the lock flags for.
																				HPMUInt32 *_pLockFlags		// [out,type=EHPMResourceLockFlag] The resource lock flags. See @{EHPMResourceLockFlag}.
																			); 

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Changes the lock flags of a resource.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{EHPMResourceLockFlag}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceChangeLockFlags														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceChangeLockFlags)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,	// [in] The unique id of the resource to get the lock flags for.
																				HPMUInt32 _RemoveFlags,		// [in,type=EHPMResourceLockFlag] The lock flags to remove. See @{EHPMResourceLockFlag}.
																				HPMUInt32 _AddFlags			// [in,type=EHPMResourceLockFlag] The lock flags to add. See @{EHPMResourceLockFlag}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the preferred language of a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMLanguage}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetPreferredLanguage												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetPreferredLanguage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ResourceID,				// [in] The resource to set the preferred language for.
																						const HPMLanguage *_pPreferredLanguage	// [in]	Pointer to a @{HPMLanguage} object representing the preferred language you want to set for the resource.
	);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the preferred language of a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}	 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetPreferredLanguage												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetPreferredLanguage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ResourceID,				// [in] The resource to get the preferred language for.
																						const HPMLanguage **_pPreferredLanguage	// [out] Pointer to a pointer of a @{HPMLanguage} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the last used language of a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMLanguage}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetLastUsedLanguage													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetLastUsedLanguage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ResourceID,				// [in] The resource to set the last used language for.
																						const HPMLanguage *_pPreferredLanguage	// [in]	Pointer to a @{HPMLanguage} object representing the last used language you want to set for the resource.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the last used language of a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}	 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetLastUsedLanguage													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetLastUsedLanguage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ResourceID,				// [in] The resource to get the last used language for.
																						const HPMLanguage **_pPreferredLanguage	// [out] Pointer to a pointer of a @{HPMLanguage} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the last used language of a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Returns the last used language of a resource. If not set returns			|
|						preferred language.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetEffectiveLanguage												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetEffectiveLanguage)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ResourceID,				// [in] The resource to get the effective language for.
																						const HPMLanguage **_pPreferredLanguage	// [out] Pointer to a pointer of a @{HPMLanguage} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the date a resource was deleted.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}									 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetDeletedDate														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetDeletedDate)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,	// [in] The resource to get the deleted date for.
																				HPMUInt64 *_pDeletedDate	// [out] Pointer to a variable representing the returned data. This is the number of micro seconds since 1970 UTC.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the date a resource was undeleted.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{UtilGetResourceUndeleteTimeOut} 						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetUndeletedDate													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetUndeletedDate)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,	// [in] The resource to get the undeleted date for.
																					HPMUInt64 *_pUndeletedDate	// [out] Pointer to a variable representing the returned data. This is the number of micro seconds since 1970 UTC.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes timesheet data up to an end date.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceTimesheetPeriodDataDelete											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceTimesheetPeriodDataDelete)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ResourceID,	// [in] The resource to delete timesheet data for.
																							HPMUInt64 _EndDate			// [in] The end date up to which timesheet data will be deleted. Expressed as the number of micro seconds since 1970 UTC.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a resource can be deleted. Returns 1 if the resource can be		|
|						deleted, 0 otherwise.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A deleted resource has a timeout period before it can be undeleted. You		|
|						can get the timeout period with @{UtilGetResourceUndeleteTimeOut}.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{UtilGetResourceUndeleteTimeOut}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceUtilCanBeDeleted													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceUtilCanBeDeleted)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,	// [in] The resource to check if it can be deleted.
																					HPMInt32 *_pReturn			// [out,type=bool] Returns 1 if the identifer con be deleted 0 otherwise.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Expands a resource definition list into resources.							|
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
|						ResourceUtilExpandResources												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceUtilExpandResources)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMUniqueID _ProjectID, 							// [in] The project ID this is in reference to. Can be set to -1 to expand resources in a global context
																						HPMInt32 _bIncludeGhosts,							// [in] Set to 1 to include ghost resources in the expansion.
																						HPMInt32 _bIncludeQAResources, 						// [in] Set to 1 to include QA resources in the expansion. If _ProjectID points to a QA project QA resources will always be included even if this is set to 0.
																						HPMResourceDefinitionList const *_pResourceList, 	// [in] The resource definition list to expand.
																						HPMResourceDefinitionList const **_pResult			// [out] The expanded resources. Will be a list of EHPMResourceGroupingType_Resource resources.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the chat online status for the currently logged in SDK resource.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetChatOnlineStatus													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetChatOnlineStatus)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMInt32 _ChatStatus		// [in,type=EHPMChatOnlineStatus] The new status. Will be one of @{EHPMChatOnlineStatus}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the chat online status for a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetChatOnlineStatus													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetChatOnlineStatus)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,	// [in] The resource to get the chat online status for.
																					HPMInt32 *_pChatStatus		// [out,type=EHPMChatOnlineStatus] Pointer to a variable that will receive the status. Will be one of @{EHPMChatOnlineStatus}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the do not disturb flag for a resource.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetDoNotDisturb														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetDoNotDisturb)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,	// [in] The resource to get the do not disturb flag for.
																					HPMInt32 _bDoNotDisturb		// [in] The new status.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the do not disturb flag for a resource.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetDoNotDisturb														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetDoNotDisturb)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,	// [in] The resource to get the do not disturb flag.
																					HPMInt32 *_pbDoNotDisturb	// [out,type=bool] Pointer to a variable that will receive the do not disturb flag.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets/submits a chat message for a resource.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The message is routed to the connected users defined in the chat room plus	|
|						all currently connected SDK sessions.										|
|																									|
|						If the chat is a resource group chat the sending resource must be a			|
|						member of the resource group.												|
|																									|
|						It is possible to chat with an SDK user if the 								|
|						@{EHPMResourceFlag}_SdkChatUser property is set on the SDK user.			|
|																									|
|						If the @{EHPMResourceGroupFlag}_ChatVisibleInNewsFeed property is set on	|
|						a resource group, chat messages to that resource group will also be			|
|						added to the news feed.														|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChatRoom}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSendChatMessage														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSendChatMessage)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,		// [in] The resource to send the chat message from.
																					HPMChatRoom const *_pChatRoom,	// [in] The chat room identifier to send the message to. See @{HPMChatRoom}.
																					HPMChar const *_pMessage		// [in] Pointer to the @{HPMChar} chat message to submit.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the last read chat message id for a resource.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChatRoom}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceSetLastReadChatID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceSetLastReadChatID)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,		// [in] The resource to set last read message id for.
																					HPMChatRoom const *_pChatRoom,	// [in] The chat room identifier to set last read message id in. See @{HPMChatRoom}.
																					HPMInt64 _ID					// [in] The last read id to set.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the last read chat message id for a resource.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChatRoom}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetLastReadChatID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetLastReadChatID)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMUniqueID _ResourceID,		// [in] The resource to get last read message id for.
																					HPMChatRoom const *_pChatRoom,	// [in] The chat room identifier to get last read message id in. See @{HPMChatRoom}.
																					HPMInt64 *_pID					// [out] Pointer to the returned last read id.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Uploads an avatar image for a resource.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The avatar images are stored in the version control system under			|
|						Global/[ResourceID]															|
|																									|
|						The original image is cropped according to the offsets and size and			|
|						is stored with the name Avatar.PNG. Resized versions of the original are	|
|						stored as Avatar_[size].PNG.												|
|																									|
|						Any previously uploaded avatar images are deleted.							|
|																									|
|						You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlAddFilesResponse callback.		|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|						The files are automatically committed after creation.						|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceUploadAvatar														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceUploadAvatar)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,		// [in] The resource to upload the avatar image for.
																				const HPMChar *_pPath,			// [in] The local path to the avatar image.
																				HPMUInt32 _XOffset,				// [in] The x offset within the image where the avatar image begins.
																				HPMUInt32 _YOffset,				// [in] The y offset within the image where the avatar image begins.
																				HPMUInt32 _Size,				// [in] The vertical and horizontal pixel length of the avatar image.
																				const HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse} object specifying the result of this operation. See comments section.
																			);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets a timesheet period report for a resource.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_ResourceGetTimesheetReportResponse			|
|						callback.																	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree},											|
|						@{HPMChangeCallbackData_ResourceGetTimesheetDayResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						ResourceGetTimesheetDay														|
|																									|
|	Managed:			CanBlock																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionResourceGetTimesheetDay)(void *_pSession,														// [in] A connected session. See @{SessionOpen}.
																				HPMUniqueID _ResourceID,												// [in] The resource to get the timesheet report for for.
																				HPMUInt64 _Day,															// [in] The day to get the timesheet report for. Expressed as the number of microseconds since 1970 UTC.
																				const HPMChangeCallbackData_ResourceGetTimesheetDayResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_ResourceGetTimesheetDayResponse} object, representing the returned data. This function will block even in non-blocking mode if this parameter is not NULL.
																				);


#endif
