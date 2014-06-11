
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Version Control									|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/8 - Version Control								|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Callback operation value used in											|
|						@{HPMVersionControlCallbackInfo}::m_Operation.								|
|																									|
|	See Also:			@{HPMVersionControlCallbackInfo}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlCallbackOperation
{
	EHPMVersionControlCallbackOperation_NewVersionOfSDKRequired,	// The version control operation did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMVersionControlCallbackOperation_None,						// No operation. Should not occur.
	EHPMVersionControlCallbackOperation_Add,						// A file were added to the database.
	EHPMVersionControlCallbackOperation_Update,						// A file was updated.
	EHPMVersionControlCallbackOperation_Delete,						// A file was deleted.
	EHPMVersionControlCallbackOperation_Rename,						// A file was renamed.
	EHPMVersionControlCallbackOperation_ReAdd,						// A file was added with the same name as a deleted file.
	EHPMVersionControlCallbackOperation_Rollback,					// A file was rolled back.
	EHPMVersionControlCallbackOperation_Undelete,					// A file was undeleted.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Callback file attribute flags used in										|
|						@{HPMVersionControlCallbackInfo}::m_FileAttributes.							|
|																									|
|	See Also:			@{HPMVersionControlCallbackInfo}}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlFileAttributesFlag
{
	EHPMVersionControlFileAttributesFlag_None = 0,
	EHPMVersionControlFileAttributesFlag_Directory = 1 << 0,	// The file is a directory.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Meta data type used in @{HPMVersionControlMetaDataEntry}::m_Type.			|
|																									|
|	See Also:			@{HPMVersionControlMetaDataEntry}											|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlMetaDataType
{
	EHPMVersionControlMetaDataType_NewVersionOfSDKRequired,	// The meta data type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMVersionControlMetaDataType_Unknown,					// Unknown meta data type. Should not occur.
    EHPMVersionControlMetaDataType_String,					// String meta data type.
	EHPMVersionControlMetaDataType_Int,						// Integer meta data type.
	EHPMVersionControlMetaDataType_Float,					// Float meta data type.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Change flags used to specify what was changed when calling					|
|						@{HPMVersionControlChangeDataCallback}										|
|																									|
|	See Also:			@{HPMVersionControlChangeDataCallback}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlCallbackChanged
{
	EHPMVersionControlCallbackChanged_None = 0,
	EHPMVersionControlCallbackChanged_FileContents = 1 << 0,	// The contents of the file was changed.
	EHPMVersionControlCallbackChanged_Resource = 1 << 1,		// The resource name was changed.
	EHPMVersionControlCallbackChanged_Comment = 1 << 2,			// The resource comment was changed.
	EHPMVersionControlCallbackChanged_Date = 1 << 3,			// The date was changed.
	EHPMVersionControlCallbackChanged_MetaData = 1 << 4,		// The meta data entries was changed.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		File info flags used to @{HPMVersionControlFile}::m_Flags					|
|																									|
|	See Also:			@{HPMVersionControlFile}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlFileInfoFlag
{
	EHPMVersionControlFileInfoFlag_None = 0,
	EHPMVersionControlFileInfoFlag_CheckedOutByYou = 1 << 0,				// The file is checked out be the current client (the SDK user).
	EHPMVersionControlFileInfoFlag_CheckedOutByOther = 1 << 1,				// The file is checked out by another client.
	EHPMVersionControlFileInfoFlag_ExistsLocally = 1 << 2,					// The file or directory exists locally.
	EHPMVersionControlFileInfoFlag_ChildrenExistsLocallySome = 1 << 4,		// Some of the files or directories of in the directory exists locally.
	EHPMVersionControlFileInfoFlag_ChildrenExistsLocallyAll = 1 << 5,		// All files and directories in the directory exists locally.
	EHPMVersionControlFileInfoFlag_FileUpToDate = 1 << 6,					// The file is up to date. Only compared with change time of file.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to define access rights in the version control system.					|
|																									|
|	See Also:			@{HPMVersionControlAccessRight}, @{HPMVersionControlFile}					|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlAccessRightFlag
{
	EHPMVersionControlAccessRightFlag_None = 0,
	EHPMVersionControlAccessRightFlag_List = 1 << 0,							// Access rights to list files and directories.
	EHPMVersionControlAccessRightFlag_Read = 1 << 1,							// Access rights to read files.
	EHPMVersionControlAccessRightFlag_Write = 1 << 2,							// Access rights to change files.
	EHPMVersionControlAccessRightFlag_Rename = 1 << 3,							// Access rights to rename files and directories.
	EHPMVersionControlAccessRightFlag_Create = 1 << 4,							// Access rights to create files and directories.
	EHPMVersionControlAccessRightFlag_Delete = 1 << 5,							// Access rights to delete files and directories.
	EHPMVersionControlAccessRightFlag_PermanentDelete = 1 << 6,					// Access rights to permanently delete files and directories.
	EHPMVersionControlAccessRightFlag_Restore = 1 << 7,							// Access rights to restore files and directories.
	EHPMVersionControlAccessRightFlag_WritePermissions = 1 << 8,				// Access rights to change permissions on files and directories.
	EHPMVersionControlAccessRightFlag_ReadPermissions = 1 << 9,					// Access rights to read permissions on files and directories.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to special access users in for granting access rights.					|
|																									|
|	See Also:			@{HPMVersionControlAccessRight}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlSpecialAccessRightObject
{
	EHPMVersionControlSpecialAccessRightObject_NewVersionOfSDKRequired = -65536,	// The action type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this action type.
	EHPMVersionControlSpecialAccessRightObject_Everyone = -2,						// Everyone object.
	EHPMVersionControlSpecialAccessRightObject_Administartors = -3,					// Project administrators object.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to define actions in the version control system.						|
|																									|
|	See Also:			@{HPMVersionControlFileHistoryEntry}, @{HPMVersionControlFile}				|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlVersionAction
{
	EHPMVersionControlVersionAction_NewVersionOfSDKRequired,	// The action type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this action type.
	EHPMVersionControlVersionAction_None,						// No action specified.
	EHPMVersionControlVersionAction_Add,						// A file or directory was added.
	EHPMVersionControlVersionAction_Update,						// A file or directory was updated.
	EHPMVersionControlVersionAction_Delete,						// A file or directory was deleted.
	EHPMVersionControlVersionAction_Rename,						// A file or directory was renamed.
	EHPMVersionControlVersionAction_ReAdd,						// A file or directory was re-added.
	EHPMVersionControlVersionAction_Rollback,					// A file or directory was rolled back.
	EHPMVersionControlVersionAction_Restore,					// A file or directory was restored.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to give information about actions in the version control system.		|
|																									|
|	See Also:			@{HPMVersionControlFileHistoryEntry}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlVersionActionInfo
{
	EHPMVersionControlVersionActionInfo_NewVersionOfSDKRequired,	// The action info did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this action info.
	EHPMVersionControlVersionActionInfo_None,						// No action info specified
	EHPMVersionControlVersionActionInfo_Legacy,						// Legacy action
	EHPMVersionControlVersionActionInfo_Add,						// Default deleted projects directory created
	EHPMVersionControlVersionActionInfo_DirAdd,						// Directory created
	EHPMVersionControlVersionActionInfo_FileAdd,					// File created
	EHPMVersionControlVersionActionInfo_Update,						// File checked in
	EHPMVersionControlVersionActionInfo_Delete,						// File deleted
	EHPMVersionControlVersionActionInfo_Rename,						// Renamed/moved file
	EHPMVersionControlVersionActionInfo_Move,						// Moved to deleted projects
	EHPMVersionControlVersionActionInfo_ReAdd,						// Directory re-added
	EHPMVersionControlVersionActionInfo_FileReAdd,					// File re-added
	EHPMVersionControlVersionActionInfo_Rollback,					// Rolled back to old version
	EHPMVersionControlVersionActionInfo_Undelete,					// File restored
	EHPMVersionControlVersionActionInfo_Create,						// Default global directory created
	EHPMVersionControlVersionActionInfo_SdkAdd,						// Default SDK directory created
	EHPMVersionControlVersionActionInfo_TransCreate,				// Default translations directory created
	EHPMVersionControlVersionActionInfo_ProjectCreate,				// Default projects directory created
	EHPMVersionControlVersionActionInfo_GlobalCreate,				// Default global directory created
	EHPMVersionControlVersionActionInfo_ProjectUpdate,				// Default project folder updated
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to define errors in the version control system.						|
|																									|
|	See Also:			@{HPMChangeCallbackData_VersionControlErrorResponse},						|
|						@{VersionControlErrorToStr}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMVersionControlError
{
	EHPMVersionControlError_NewVersionOfSDKRequired,	// The meta data type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMVersionControlError_Success,					// The operation completed successfully.
	EHPMVersionControlError_Other,						// An unspecified error occurred.
	EHPMVersionControlError_InternalError,				// An internal error occurred.
	EHPMVersionControlError_FileAlreadyExists,			// The file already exists.
	EHPMVersionControlError_Checksum,					// The file failed checksum check.
	EHPMVersionControlError_DiskFull,					// The disk is full.
	EHPMVersionControlError_FileDoesNotExist,			// The file does not exist.
	EHPMVersionControlError_InvalidVersion,				// The version specified was invalid.
	EHPMVersionControlError_FileAlreadyCheckedOut,		// The file was already checked out.
	EHPMVersionControlError_AccessDenied,				// Access to the file was denied.
	EHPMVersionControlError_FileDoesNotExistLocal,		// The file does not exist locally.
	EHPMVersionControlError_FileAlreadyCheckedOutByYou,	// The file is already checked out by you.
	EHPMVersionControlError_CouldNotWriteFileLocal,		// The file could not be written locally.
	EHPMVersionControlError_FileDeleted,				// The file is deleted.
	EHPMVersionControlError_FileNotDeleted,				// The file is not deleted.
	EHPMVersionControlError_CheckedOutSkipped,			// The checkout of the file was skipped.
	EHPMVersionControlError_VersionDoesNotExtist,		// The version does not exist.
	EHPMVersionControlError_NoVersionsWouldRemain,		// No version would remain if the current was deleted.
	EHPMVersionControlError_FileIsAlreadyVersion,		// The file is already the version specified.
	EHPMVersionControlError_CouldNotReadFileLocal,		// The file could not be read locally.
	EHPMVersionControlError_Success_FileUnchanged,		// The operation completed successfully, but the file was unchanged and no operation was performed.
	EHPMVersionControlError_FileAreadyDeleted,			// The file was already deleted.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Specifies a meta data entry used in											|
|						@{HPMVersionControlCallbackInfo}::m_pMetaDataEntries.						|
|																									|
|	See Also:			@{HPMVersionControlCallbackInfo}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlMetaDataEntry
{
	HPMUInt32 m_Type;			// [type=EHPMVersionControlMetaDataType,default=EHPMVersionControlMetaDataType_NewVersionOfSDKRequired] The type of meta data entry. Can be one of @{EHPMVersionControlMetaDataType}.
	const HPMChar *m_pName;		// The name of the meta data entry.
	const HPMChar *m_pData;		// The data of the meta data entry. All data is expressed as a string even if the data type is integer of float.
} HPMVersionControlMetaDataEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a list of files.											|
|																									|
|	See Also:			@{VersionControlSyncFiles}, @{VersionControlCheckOutFiles},					|
|						@{VersionControlGetAccessRights}, @{VersionControlSetAccessRights}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFileList
{
	HPMUInt32 m_nFiles;											// The number of files.
	const HPMString *m_pFiles;									// Pointer to a list of strings that specify the files.
} HPMVersionControlFileList;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a history entry for a file or directory.					|
|																									|
|	See Also:			@{HPMVersionControlFileHistory}, @{EHPMVersionControlVersionAction},		|
|						@{HPMVersionControlMetaDataEntry}, @{EHPMVersionControlFileAttributesFlag}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFileHistoryEntry
{
	HPMUInt64 m_FileAttributes;									// [type=EHPMVersionControlFileAttributesFlag,default=EHPMVersionControlFileAttributesFlag_None] File attributes for the file history entry. Can be any combination of @{EHPMVersionControlFileAttributesFlag}.
	HPMUInt64 m_Version;										// [default=0] The version for the file history entry.
	HPMUInt64 m_Revision;										// [default=0] The revision for the file history entry.

	HPMUInt32 m_Action;											// [type=EHPMVersionControlVersionAction,default=EHPMVersionControlVersionAction_None] The action for the file history entry. Can be one of @{EHPMVersionControlVersionAction}.
	HPMUInt32 m_ActionInfoID;									// [type=EHPMVersionControlVersionActionInfo,default=EHPMVersionControlVersionActionInfo_None] The ID of action information for this file history entry. Can be one of @{EHPMVersionControlVersionActionInfo}.

	HPMUInt64 m_Date;											// [default=0] The date of the change for the file history entry. Expressed as the number of microseconds since 1970 UTC.
	HPMMD5Checksum m_Checksum;									// The checksum for the file history entry.

	const HPMChar *m_pFileName;									// The file name specified for the file history entry.
	const HPMChar *m_pComment;									// The comment specified for the file history entry.
	const HPMChar *m_pUser;										// The user that changed the file.
	const HPMChar *m_pActionInfo;								// A string describing the action for this history entry.
	const HPMChar *m_pActionInfoArg;							// If @{HPMVersionControlFileHistoryEntry}::m_ActionInfoID is set to @{EHPMVersionControlVersionActionInfo}_Rollback 
																// this is the version number of the rollback. If @{HPMVersionControlFileHistoryEntry}::m_ActionInfoID is set to @{EHPMVersionControlVersionActionInfo}_Legacy
																// this is set to the legacy action info string.

	HPMUInt32 m_nMetaDataEntries;								// The number of meta data entries associated with this file.
	const HPMVersionControlMetaDataEntry *m_pMetaDataEntries;	// Pointer to a list of meta data entries associated with this file. See @{HPMVersionControlMetaDataEntry}.
} HPMVersionControlFileHistoryEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify history for a file or directory.							|
|																									|
|	See Also:			@{VersionControlGetFileHistory}, @{HPMVersionControlFileHistoryEntry}		|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFileHistory
{
	HPMUInt32 m_nHistoryEntries;								// The number of history entries for the file.
	const HPMVersionControlFileHistoryEntry *m_pHistoryEntries;	// Pointer to a list of @{HPMVersionControlFileHistoryEntry} specifying the history entries for the file.
} HPMVersionControlFileHistory;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a access right in a list of access rights.					|
|																									|
|	Comments:			The access flags are granted and then rejected, so if an object have		|
|						their right both granted and rejected then it's the rejected rights			|
|						that are applied.															|
|																									|
|	See Also:			@{EHPMVersionControlAccessRightFlag},										|
|						@{EHPMVersionControlSpecialAccessRightObject}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlAccessRight
{
	HPMUniqueID m_Object;										// Specifies a unique identifier pointing to a resource or a project that are to have rights granted or rejected. This obejct can also be one or @{EHPMVersionControlSpecialAccessRightObject} to specify access for special groups of users.
	HPMUInt32 m_Type;											// [type=EHPMResourceGroupingType,default=EHPMResourceGroupingType_Resource] The type of resource to have rights granted or rejected. Can be one of @{EHPMResourceGroupingType}.
	HPMUInt32 m_GrantFlags;										// [type=EHPMVersionControlAccessRightFlag,default=EHPMVersionControlAccessRightFlag_None] The access rights to grant to the object. Can be any combination of @{EHPMVersionControlAccessRightFlag}.
	HPMUInt32 m_RejectFlags;									// [type=EHPMVersionControlAccessRightFlag,default=EHPMVersionControlAccessRightFlag_None] The access rights to reject to the object. Can be any combination of @{EHPMVersionControlAccessRightFlag}.
} HPMVersionControlAccessRight;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a access rights for a file or directory.					|
|																									|
|	Comments:			The access flags are granted and then rejected, so if an object have		|
|						their right both granted and rejected then it's the rejected rights			|
|						that are applied.															|
|																									|
|	See Also:			@{VersionControlGetAccessRights}, @{VersionControlGetAccessRights},			|
|						@{HPMVersionControlAccessRight}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlAccessRights
{
	HPMInt32 m_bInherit;												// [default=1] Set to 1 if access rights should be inherited from the previous folder.
	HPMInt32 m_bUseInheritedRights;										// [default=0] Set to 1 if the inherited access rights should be used.
	HPMUInt32 m_nAccessRights;											// The number of access rights to set on the file.
	const HPMVersionControlAccessRight *m_pAccessRights;				// Pointer to a list of @{HPMVersionControlAccessRight} specifying the access rights for the file.
	HPMUInt32 m_nInheritedAccessRights;									// The number of inherited access rights to set on the file.
	const HPMVersionControlAccessRight *m_pInheritedAccessRights;		// Pointer to a list of @{HPMVersionControlAccessRight} specifying the inherited access rights for the file.
} HPMVersionControlAccessRights;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Information about a file used in @{HPMVersionControlFilesEnum} and			|
|						@{VersionControlEnumFiles}.													|
|																									|
|	See Also:			@{HPMVersionControlFilesEnum}, @{EHPMVersionControlFileAttributesFlag},		|
|						@{EHPMVersionControlVersionAction}, @{EHPMVersionControlFileInfoFlag},		|
|						@{EHPMVersionControlAccessRightFlag}, @{HPMVersionControlMetaDataEntry},	|
|						@{VersionControlEnumFiles}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFile
{
	HPMUInt64 m_FileAttributes;									// [type=EHPMVersionControlFileAttributesFlag,default=EHPMVersionControlFileAttributesFlag_None] The attributes of the file. Will be any combination of @{EHPMVersionControlFileAttributesFlag}.
	HPMUInt64 m_FileID;											// [default=0] The unique identifier of the file.
	HPMUInt64 m_Version;										// [default=0] The version of the file.
	HPMUInt64 m_Revision;										// [default=0] The revision of the file. Can be used to group operations. For example all files in one add operation will have the same revision.
	HPMInt64 m_Size;											// [default=0] The size of the file. If the file is a directory this is the size of all files contained in the directory and its subdirectories.

	HPMUInt32 m_Action;											// [type=EHPMVersionControlVersionAction,default=EHPMVersionControlVersionAction_None] The latest action performed on the file. Can be one of @{EHPMVersionControlVersionAction}.
	HPMUInt32 m_Flags;											// [type=EHPMVersionControlFileInfoFlag,default=EHPMVersionControlFileInfoFlag_None] Flags for the file. Can be combination any of @{EHPMVersionControlFileInfoFlag}.
	HPMUInt32 m_EffectiveAccessRights;							// [type=EHPMVersionControlAccessRightFlag,default=EHPMVersionControlAccessRightFlag_None] Effective access rights for the file. Can be any combination of @{EHPMVersionControlAccessRightFlag}.

	HPMUInt64 m_Date;											// [default=0] The date the file was last changed. Expressed as the number of micro seconds since 1970 UTC.
	HPMMD5Checksum m_Checksum;									// The MD5 checksum of the data in the file.

	const HPMChar *m_pFileName;									// String specifying the name of the file. Not the full path.
	const HPMChar *m_pCheckedOutBy;								// String specifying the resource that has the file checked out.
	const HPMChar *m_pComment;									// String specifying the comment the user specified when doing the latest operation on the file.
	const HPMChar *m_pUser;										// String specifying the client that last changed the file.

	HPMUniqueID m_OriginalCreator;								// The unique ID of the resource that created the file.

	HPMUInt32 m_nMetaDataEntries;								// The number of meta data entries associated with this file.
	const HPMVersionControlMetaDataEntry *m_pMetaDataEntries;	// Pointer to a list of meta data entries associated with this file. See @{HPMVersionControlMetaDataEntry}.

} HPMVersionControlFile;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to return files enumerated with @{VersionControlEnumFiles}.			|
|																									|
|	See Also:			@{VersionControlEnumFiles}, @{HPMVersionControlFile}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFilesEnum
{
	HPMUInt32 m_nFiles;						// The number of files enumerated
	const HPMVersionControlFile *m_pFiles;	// Pointer to a list of files enumerated. See @{HPMVersionControlFile}.
} HPMVersionControlFilesEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a file specification with a path and meta data.				|
|																									|
|	Comments:			Normally when a file specification is specified to a function that change	|
|						a file the metadata is merged with the old metadata. New entries are added,	|
|						entries with the same name are updated, and entries with the same name		|
|						with empty data are deleted.												|
|																									|
|	See Also:			@{HPMVersionControlLocalFilePair}, @{HPMVersionControlCheckInFiles},		|
|						@{HPMVersionControlRenameFiles}, @{HPMVersionControlRevertFiles},			|
|						@{HPMVersionControlDeleteFiles}, @{HPMVersionControlRestoreDeletedFiles}	|
|						@{HPMVersionControlMetaDataEntry}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlFileSpec
{
	const HPMChar *m_pPath;										// The path of the file on the server. Directories are specified with '/' rather than '\'.
	HPMUInt32 m_nMetaDataEntries;								// The number of meta data entries associated with this file.
	const HPMVersionControlMetaDataEntry *m_pMetaDataEntries;	// Pointer to a list of meta data entries associated with this file. See @{HPMVersionControlMetaDataEntry}.
} HPMVersionControlFileSpec;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a file to be added to version control.						|
|																									|
|	See Also:			@{HPMVersionControlAddFiles}, @{HPMVersionControlFileSpec}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlLocalFilePair
{
	HPMVersionControlFileSpec m_FileSpec;	// The file spec specifying the file on the server and the metadata to be associated with the file. See @{HPMVersionControlFileSpec}.
	const HPMChar *m_pLocalPath;			// The local path to the file to add.
	HPMUInt32 m_nFileData;					// You can use this member together with m_pFileData to specify the file data directly from memory if you don't want to point to a file in the file system. m_pLocalPath will be ignored.
	const HPMUInt8 *m_pFileData;			// You can use this member together with m_nFileData to specify the file data directly from memory if you don't want to point to a file in the file system. m_pLocalPath will be ignored.
} HPMVersionControlLocalFilePair;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlAddFiles}.					|
|																									|
|	Comments:			This function lets you send a number of extra bytes that can be anything	|
|						you like. These bytes are later received in the	change callback data		|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}.					|
|																									|
|	See Also:			@{VersionControlAddFiles}, @{HPMVersionControlLocalFilePair},				|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlAddFiles
{
	HPMUInt32 m_nFilesToAdd;								// The number of files to add.
	const HPMVersionControlLocalFilePair *m_pFilesToAdd;	// Pointer to a list of file pairs to add. See @{HPMVersionControlLocalFilePair}.
	const HPMChar *m_pComment;								// Pointer to a string specifying the comment for the operation.
	HPMInt32 m_bDeleteSourceFiles;							// [default=0] Set to 1 to delete the local files after the operation has finished, 0 otherwise.
	HPMUInt32 m_nExtraData;									// The number of extra bytes to send with the operation. See comments section.
	const HPMUInt8 *m_pExtraData;							// Pointer to a buffer of extra bytes to send with the operation. See comments section.
} HPMVersionControlAddFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlCreateDirectories}.			|
|																									|
|	Comments:			This function lets you send a number of extra bytes that can be anything	|
|						you like. These bytes are later received in the	change callback data		|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}.					|
|																									|
|	See Also:			@{VersionControlCreateDirectories}, @{HPMVersionControlFileSpec},			|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlCreateDirectories
{
	HPMUInt32 m_nFiles;							// The number of directories to create.
	const HPMVersionControlFileSpec *m_pFiles;	// Pointer to a list of directories to create.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
	HPMUInt32 m_nExtraData;						// The number of extra bytes to send with the operation. See comments section.
	const HPMUInt8 *m_pExtraData;				// Pointer to a buffer of extra bytes to send with the operation. See comments section.
} HPMVersionControlCreateDirectories;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlCheckInFiles}.				|
|																									|
|	Comments:			This function lets you send a number of extra bytes that can be anything	|
|						you like. These bytes are later received in the	change callback data		|
|						@{HPMChangeCallbackData_VersionControlCheckInFilesResponse}.				|
|																									|
|	See Also:			@{VersionControlCheckInFiles}, @{HPMVersionControlFileSpec},				|
|						@{HPMChangeCallbackData_VersionControlCheckInFilesResponse}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlCheckInFiles
{
	HPMUInt32 m_nFiles;							// The number of files to check in.
	const HPMVersionControlFileSpec *m_pFiles;	// Pointer to a list of files to check in.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
	HPMInt32 m_bRecursive;						// [default=1] Set to 1 if the files should be checked in recursively, 0 otherwise.
	HPMInt32 m_bKeepCheckedOut;					// [default=0] Set to 1 if the files should be kept checked out, 0 otherwise.
	HPMInt32 m_bKeepUnchangedCheckedOut;		// [default=0] Set to 1 if files that are unchanged should be kept checked out, 0 otherwise.
	HPMInt32 m_bDeleteSourceFiles;				// [default=0] Set to 1 to delete the local files after the operation has finished, 0 otherwise.
	HPMUInt32 m_nExtraData;						// The number of extra bytes to send with the operation. See comments section.
	const HPMUInt8 *m_pExtraData;				// Pointer to a buffer of extra bytes to send with the operation. See comments section.
} HPMVersionControlCheckInFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlRenameFiles}.					|
|																									|
|	Comments:			This operation is able to rename and move files and directories.			|
|																									|
|						If several files are specified the operation will move the files to a		|
|						new location. The m_pRenameTo parameter will specify a directory to move	|
|						the files into.																|
|																									|
|						If only one file is specified this operation will rename or move this		|
|						single file and the m_pRenameTo parameter will specify a full path.			|
|																									|
|	See Also:			@{VersionControlRenameFiles}, @{HPMVersionControlFileSpec}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlRenameFiles
{
	HPMUInt32 m_nFiles;							// The number of files to rename.
	const HPMVersionControlFileSpec *m_pFiles;	// Pointer to a list of @{HPMVersionControlFileSpec}, specifying the files to rename.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
	const HPMChar *m_pRenameTo;					// Pointer to a string specifying the path to rename the files to. See comments section.
} HPMVersionControlRenameFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlRevertFiles}.					|
|																									|
|	See Also:			@{VersionControlRevertFiles}, @{HPMString}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlRevertFiles
{
	HPMUInt32 m_nFiles;							// The number of files to revert.
	const HPMString *m_pFiles;					// Pointer to a list of strings specifying the files to revert.
	HPMInt32 m_bRecursive;						// [default=0] Set to 1 to revert files recursively, 0 otherwise.
	HPMInt32 m_bReplaceLocally;					// [default=0] Set to 1 to replace files locally when reverting, 0 otherwise.
	HPMInt32 m_bForceRevert;					// [default=0] Set to 1 to force revert files locally when reverting, 0 otherwise.
} HPMVersionControlRevertFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlDeleteFiles}.					|
|																									|
|	See Also:			@{VersionControlDeleteFiles}, @{HPMVersionControlFileSpec}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlDeleteFiles
{
	HPMUInt32 m_nFiles;							// The number of files to delete.
	const HPMVersionControlFileSpec *m_pFiles;	// Pointer to a list of files to delete.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
	HPMInt32 m_bPermanent;						// [default=0] Set to 1 to permanently delete the files, 0 otherwise. When files are deleted permanently you are not able to later revert them.
	HPMInt32 m_bDeleteLocally;					// [default=1] Set to 1 to delete the files locally, 0 otherwise.
} HPMVersionControlDeleteFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlRestoreDeletedFiles}.			|
|																									|
|	See Also:			@{VersionControlRestoreDeletedFiles}, @{HPMVersionControlFileSpec}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlRestoreDeletedFiles
{
	HPMUInt32 m_nFiles;							// The number of files to restore.
	const HPMVersionControlFileSpec *m_pFiles;	// Pointer to a list of @{HPMVersionControlFileSpec} specifying the files to restore.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
} HPMVersionControlRestoreDeletedFiles;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlDeleteVersions}.				|
|																									|
|	See Also:			@{VersionControlDeleteVersions}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlDeleteVersions
{
	const HPMChar *m_pPath;						// Pointer to a string specifying the path of the file to delete versions on.
	HPMUInt32 m_nVersionsToDelete;				// The number of versions to delete.
	const HPMUInt64 *m_pVersionsToDelete;		// Pointer to a list of versions to delete.
} HPMVersionControlDeleteVersions;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify parameters to @{VersionControlRollbackFile}.				|
|																									|
|	See Also:			@{VersionControlRollbackFile}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlRollbackFile
{
	const HPMChar *m_pPath;						// Pointer to a string specifying the path of the file to roll back.
	const HPMChar *m_pComment;					// Pointer to a string specifying the comment for the operation.
	HPMUInt64 m_FromVersion;					// [default=0] Specifies the version that the file should be reverted to.
} HPMVersionControlRollbackFile;

typedef struct HPMVersionControlCallbackInfo HPMVersionControlCallbackInfo;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Callback used to notify the SDK about what was changed from a version		|
|						control callback.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMVersionControlCallbackInfo}, @{EHPMVersionControlCallbackChanged}		|
|																									|
|	Location:			Callbacks																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMVersionControlChangeDataCallback)(	const HPMVersionControlCallbackInfo *_pOldData,	// [in] The old callback info sent to the change callback function.
																					const HPMVersionControlCallbackInfo *_pNewData,	// [in] The new callback info to set on the changed file.
																					HPMUInt32 _ChangedProperties					// [in,type=EHPMVersionControlCallbackChanged] The properties that was changed. Can be any of @{EHPMVersionControlCallbackChanged}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Information sent to the version control callback.							|
|																									|
|	See Also:			@{EHPMVersionControlCallbackOperation},										|
|						@{EHPMVersionControlFileAttributesFlag},									|
|						@{HPMVersionControlMetaDataEntry}, @{HPMVersionControlChangeDataCallback}	|
|						@{HPMVersionControlCallback}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMVersionControlCallbackInfo
{
	HPMUInt32 m_Operation;										// [type=EHPMVersionControlCallbackOperation,default=EHPMVersionControlCallbackOperation_None] The operation performed that prompted the callback. Can by one of @{EHPMVersionControlCallbackOperation}.
	HPMUInt32 m_FileAttributes;									// [type=EHPMVersionControlFileAttributesFlag,default=EHPMVersionControlFileAttributesFlag_None] The file attributes of the file in the callback. Can be any combination of @{EHPMVersionControlFileAttributesFlag}.
	HPMUInt64 m_Date;											// [default=0] The date of the file in the callback. Expressed as micro seconds since 1970 UTC.
	const HPMChar *m_pFileName;									// The file name of the file in the callback.
	const HPMChar *m_pResource;									// The resource that performed the operation that prompted the callback.
	const HPMChar *m_pResourceComment;							// The comment specified by the resource that performed the operation that prompted the callback.
	const HPMChar *m_pLocalTemporaryFileName;					// A filename on the local hard drive where the file data of the file in the callback can be found. When calling m_pChangeDataCallback this file name specifies where the modified file can be found if @{EHPMVersionControlCallbackChanged}_FileContents was specified.

	HPMUInt32 m_nMetaDataEntries;								// The number of meta data entries associated with this file.
	const HPMVersionControlMetaDataEntry *m_pMetaDataEntries;	// Pointer to a list of meta data entries associated with this file. See @{HPMVersionControlMetaDataEntry}.
} HPMVersionControlCallbackInfo;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Definition of the callback function called when a file operation in the		|
|						version control is performed on the server.									|
|																									|
|	Return Value:		Currently ignored. You should return 0.										|
|																									|
|	See Also:			@{HPMVersionControlCallbackInfo}, @{VersionControlRegisterCallback},		|
|						@{VersionControlUnregisterCallback}											|
|																									|
|	Location:			Callbacks																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			NoGenerate																	|
\*_________________________________________________________________________________________________*/
typedef HPMInt32 (DHPMSdkCallingConvention *HPMVersionControlCallback)(	void *_pContext,											// [in] The user context specified when registering the callback.
																		const HPMVersionControlCallbackInfo *_pCallback,			// [in] Information about this callback.
																		HPMVersionControlChangeDataCallback _pChangeDataCallback	// [in] A pointer to a function that can be called from the callback to change any of the data associated with the file.
																	);




#ifndef DHPMSdk_OnlyDefinitions


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers a version control callback.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A callback is uniquely identified by the callback function and user			|
|						context, thus you cannot specify the same callback and user context or the	|
|						function will fail and @{EHPMError}_CallbackAlreadyExists will be returned.	|
|																									|
|						Currently not all operations defined in										|
|						@{EHPMVersionControlCallbackOperation} is supported. Only operations that	|
|						add files or change the contents of files will be sent to the callback.		|
|																									|
|						The callback is called from the @{SessionProcess} function.					|
|																									|
|						Before closing the session you must make sure to call						|
|						@{VersionControlUnregisterCallback} for all callbacks.						|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMVersionControlCallback}							|
|						@{VersionControlUnregisterCallback}, @{HPMVersionControlCallbackInfo}		|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlRegisterCallback												|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlRegisterCallback)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMVersionControlCallback _pCallback,	// [in] The callback to call when a version control operation is performed on the server.
																						void *_pContext							// [in] The user context sent to @{HPMVersionControlCallbackInfo}::m_pContext when the callback is called.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unregisters a version control callback.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlRegisterCallback}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlUnregisterCallback											|
|																									|
|	Managed:			NoGenerate																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlUnregisterCallback)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																							HPMVersionControlCallback _pCallback,	// [in] The callback specified to @{VersionControlRegisterCallback}.
																							void *_pContext							// [in] The user context specified to @{VersionControlRegisterCallback}.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Initializes the version control portion of the SDK.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call this function before using any of the version control			|
|						functions that specify it's needed.											|
|																									|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlInit															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlInit)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																			const HPMChar *_pLocalPath					// [in] The local path where version control files should be stored. This directory will be used to store temporary files as well as the files in the repository.
																		);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a version control error to a string.								|
|																									|
|	Return Value:		Returns a null terminated string describing the error.						|
|																									|
|	See Also:			@{EHPMVersionControlError}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlErrorToStr													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlErrorToStr)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																					HPMInt32 _ErrorCode,			// [in,type=EHPMVersionControlError] The error to get the description for. Must be one of @{EHPMVersionControlError}.
																					const HPMString **_pRetError	// [out] Pointer to a @{HPMString} structure describing the error.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Enumerates files in the version control system.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|						If you don't specify that the function should block it might return			|
|						@{EHPMError}_DataNotYetAvailable and you should wait until the				|
|						@{EHPMChangeCallbackOperation}_VersionControlFileInfoChanged callback is	|
|						returned before calling the function again.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}, @{HPMVersionControlFilesEnum}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlEnumFiles														|
|																									|
|	Managed:			CanBlock RetNotYetAvailable													|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlEnumFiles)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pPath,						// [in] The path in the repository where you want to enum files.
																					HPMInt32 _bBlock,							// [in] Set to true if you want the function to block until a version of the file tree has been retrieved from the server. See comments section.
																					const HPMVersionControlFilesEnum **_pEnum	// [out] Pointer to a @{HPMVersionControlFilesEnum} structure describing the enumerated files.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if a file exists in the version control system.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|						If you don't specify that the function should block it might return			|
|						@{EHPMError}_DataNotYetAvailable and you should wait until the				|
|						@{EHPMChangeCallbackOperation}_VersionControlFileInfoChanged callback is	|
|						returned before calling the function again.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlFileExists													|
|																									|
|	Managed:			CanBlock RetNotYetAvailable													|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlFileExists)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pPath,						// [in] The path in the repository that you want to check if it exists.
																					HPMInt32 _bBlock,							// [in] Set to true if you want the function to block until a version of the file tree has been retrieved from the server. See comments section.
																					HPMInt32 *_pExists							// [out,type=HPMBoolean] On return is set to 1 if file exists.
																					);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if there is a pending command in the version control system.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlOperationPending												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlOperationPending)(	void *_pSession,		// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 *_pPending		// [out,type=bool] On return is set to 1 if there is a pending.
																						);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Get information about a file in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|						If you don't specify that the function should block it might return			|
|						@{EHPMError}_DataNotYetAvailable and you should wait until the				|
|						@{EHPMChangeCallbackOperation}_VersionControlFileInfoChanged callback is	|
|						returned before calling the function again.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}, @{HPMVersionControlFile}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlGetFileInfo													|
|																									|
|	Managed:			CanBlock RetNotYetAvailable													|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlGetFileInfo)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pPath,						// [in] The path in the repository to the file or directory to get information about.
																					HPMInt32 _bBlock,							// [in] Set to true if you want the function to block until a version of the file tree has been retrieved from the server. See comments section.
																					const HPMVersionControlFile **_pFileInfo	// [out] Pointer to a @{HPMVersionControlFile} structure describing the file information.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets file history for a file in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|						If you don't specify that the function should block it might return			|
|						@{EHPMError}_DataNotYetAvailable and you should wait until the				|
|						@{EHPMChangeCallbackOperation}_VersionControlGetFileHistoryResponse			|
|						callback is	called before calling the function again.						|
|																									|
|						If the server denied access to reading the file history the function will	|
|						return @{EHPMError}_AccessDenied.											|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}, @{HPMVersionControlFileHistory}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlGetFileHistory												|
|																									|
|	Managed:			CanBlock RetNotYetAvailable													|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlGetFileHistory)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pPath,									// [in] The path of the file to get file history for.
																						HPMInt32 _bBlock,										// [in] Set to 1 to block until the file history has been received from the server. See Return Value section.
																						const HPMVersionControlFileHistory **_pFileHistory		// [out] Pointer to a pointer of a @{HPMVersionControlFileHistory} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets access rights for files in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|						If you don't specify that the function should block it might return			|
|						@{EHPMError}_DataNotYetAvailable and you should wait until the				|
|						@{EHPMChangeCallbackOperation}_VersionControlGetAccessRightsResponse		|
|						callback is	called before calling the function again.						|
|																									|
|						If the server denied access to reading the access rights the function will	|
|						return @{EHPMError}_AccessDenied.											|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}, @{HPMVersionControlFileList}		|
|						@{HPMVersionControlAccessRights}, @{VersionControlSetAccessRights}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlGetAccessRights												|
|																									|
|	Managed:			CanBlock RetNotYetAvailable													|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlGetAccessRights)(	void *_pSession,										// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pPath,									// [in] The path of the file to get access rights for.
																						HPMInt32 _bBlock,										// [in] Set to 1 to block until the access rights has been received from the server. See Return Value section.
																						const HPMVersionControlAccessRights **_pAccessRights	// [out] Pointer to a pointer of a @{HPMVersionControlAccessRights} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Creates directories in the version control system.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
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
|						The directories are automatically committed after creation.					|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlCreateDirectories},										|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlCreateDirectories												|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlCreateDirectories)(	void *_pSession,														// [in] A connected session. See @{SessionOpen}.
																							const HPMVersionControlCreateDirectories *_pFiles,						// [in] Pointer to a @{HPMVersionControlCreateDirectories} structure specifying the parameters for the add files operation.
																							const HPMChangeCallbackData_VersionControlAddFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlAddFilesResponse} object specifying the result of this operation. See comments section.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Adds files to the version control system.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
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
|						@{HPMVersionControlAddFiles},												|
|						@{HPMChangeCallbackData_VersionControlAddFilesResponse}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlAddFiles														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlAddFiles)(	void *_pSession,														// [in] A connected session. See @{SessionOpen}.
																				const HPMVersionControlAddFiles *_pFiles,								// [in] Pointer to a @{HPMVersionControlAddFiles} structure specifying the parameters for the add files operation.
																				const HPMChangeCallbackData_VersionControlAddFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlAddFilesResponse} object specifying the result of this operation. See comments section.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Syncronizes files in the version control system to the local file system	|
|						path specified in @{VersionControlInit}.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlSyncFilesResponse callback.	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlFileList},												|
|						@{HPMChangeCallbackData_VersionControlSyncFilesResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlSyncFiles														|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlSyncFiles)(	void *_pSession,														// [in] A connected session. See @{SessionOpen}.
																					const HPMVersionControlFileList *_pFiles,								// [in] Pointer to a @{HPMVersionControlFileList} structure specifying the parameters for the sync files operation.
																					HPMInt32 _Version,														// [in] The version of the file to download. If you want the latest version set this parameter to -1. If this parameter is not -1 the file will be downloaded to the temp directory.
																					const HPMChangeCallbackData_VersionControlSyncFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlSyncFilesResponse} object specifying the result of this operation. See comments section.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks out files in the version control system.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlCheckOutFilesResponse			|
|						callback.																	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlFileList},												|
|						@{HPMChangeCallbackData_VersionControlCheckOutFilesResponse}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlCheckOutFiles													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlCheckOutFiles)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																						const HPMVersionControlFileList *_pFiles,									// [in] Pointer to a @{HPMVersionControlFileList} structure specifying the files to check out.
																						HPMInt32 _bRecursive,														// [in] Set to 1 to specify that the check out operation should be recursive, 0 otherwise.
																						HPMInt32 _bAlwaysAskOverwrite,												// [in] Set to 1 to get a @{HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync} notification even if the file is exactly the same as another file in the file history.
																						const HPMChangeCallbackData_VersionControlCheckOutFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlCheckOutFilesResponse} object specifying the result of this operation. See comments section.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks in files to the version control system.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlCheckInFilesResponse callback.	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlCheckInFiles},											|
|						@{HPMChangeCallbackData_VersionControlCheckInFilesResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlCheckInFiles													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlCheckInFiles)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																					const HPMVersionControlCheckInFiles *_pFiles,								// [in] Pointer to a @{HPMVersionControlCheckInFiles} structure specifying the parameters for the check in files operation.
																					const HPMChangeCallbackData_VersionControlCheckInFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlCheckInFilesResponse} object specifying the result of this operation. See comments section.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Renames files in the version control system.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlRenameResponse callback.		|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlRenameFiles},											|
|						@{HPMChangeCallbackData_VersionControlRenameResponse}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlRenameFiles													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlRenameFiles)(	void *_pSession,													// [in] A connected session. See @{SessionOpen}.
																					const HPMVersionControlRenameFiles *_pFiles,						// [in] Pointer to a @{HPMVersionControlRenameFiles} structure specifying the parameters for the rename files operation.
																					const HPMChangeCallbackData_VersionControlRenameResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlRenameResponse} object specifying the result of this operation. See comments section.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Reverts checked out files in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlCheckInFilesResponse callback.	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlRevertFiles},											|
|						@{HPMChangeCallbackData_VersionControlCheckInFilesResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlRevertFiles													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlRevertFiles)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																					const HPMVersionControlRevertFiles *_pFiles,								// [in] Pointer to a @{HPMVersionControlRevertFiles} structure specifying the parameters for the revert files operation.
																					const HPMChangeCallbackData_VersionControlCheckInFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlCheckInFilesResponse} object specifying the result of this operation. See comments section.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes files in the version control system.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlDeleteFilesResponse callback.	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlDeleteFiles},											|
|						@{HPMChangeCallbackData_VersionControlDeleteFilesResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlDeleteFiles													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlDeleteFiles)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																					const HPMVersionControlDeleteFiles *_pFiles,								// [in] Pointer to a @{HPMVersionControlDeleteFiles} structure specifying the parameters for the delete files operation.
																					const HPMChangeCallbackData_VersionControlDeleteFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlDeleteFilesResponse} object specifying the result of this operation. See comments section.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Restores deleted files in the version control system.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlRestoreDeletedFilesResponse	|
|						callback.																	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlRestoreDeletedFiles},									|
|						@{HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlRestoreDeletedFiles											|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlRestoreDeletedFiles)(	void *_pSession,																	// [in] A connected session. See @{SessionOpen}.
																							const HPMVersionControlRestoreDeletedFiles *_pFiles,								// [in] Pointer to a @{HPMVersionControlRestoreDeletedFiles} structure specifying the parameters for the restore deleted files operation.
																							const HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse} object specifying the result of this operation. See comments section. 
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Deletes versions on a file in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlDeleteVersionsResponse			|
|						callback.																	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlDeleteVersions},											|
|						@{HPMChangeCallbackData_VersionControlDeleteVersionsResponse}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlDeleteVersions												|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlDeleteVersions)(	void *_pSession,															// [in] A connected session. See @{SessionOpen}.
																						const HPMVersionControlDeleteVersions *_pFiles,								// [in] Pointer to a @{HPMVersionControlDeleteVersions} structure specifying the parameters for the delete versions operation.
																						const HPMChangeCallbackData_VersionControlDeleteVersionsResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlDeleteVersionsResponse} object specifying the result of this operation. See comments section.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Roll backs a file to a previous version in the version control system.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlRollbackFileResponse callback.	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlRollbackFile},											|
|						@{HPMChangeCallbackData_VersionControlRollbackFileResponse}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlRollbackFile													|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlRollbackFile)(	void *_pSession,																// [in] A connected session. See @{SessionOpen}.
																						const HPMVersionControlRollbackFile *_pFiles,								// [in] Pointer to a @{HPMVersionControlRollbackFile} structure specifying the parameters for the rollback file operation.
																						const HPMChangeCallbackData_VersionControlRollbackFileResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlRollbackFileResponse} object specifying the result of this operation. See comments section.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets access rights for files in the version control system.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_VersionControlSetAccessRightsResponse		|
|						callback.																	|
|																									|
|						Only one operation can be in flight at the same time on the same client		|
|						and you should wait until other operations are finished before calling this	|
|						function. If another operation is in progress this function will return		|
|						@{EHPMError}_OperationAlreadyInProgress.									|
|																									|
|	See Also:			@{ObjectFree}, @{HPMSdkFunctions}, @{VersionControlInit},					|
|						@{HPMVersionControlFileList}, @{HPMVersionControlAccessRights},				|
|						@{VersionControlGetAccessRights},											|
|						@{HPMChangeCallbackData_VersionControlSetAccessRightsResponse}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlSetAccessRights												|
|																									|
|	Managed:			CanBlock																	|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlSetAccessRights)(	void *_pSession,																// [in] A connected session. See @{SessionOpen}.
																						const HPMVersionControlFileList *_pFiles,										// [in] Pointer to a @{HPMVersionControlFileList} structure specifying the files to set access rights on.
																						const HPMVersionControlAccessRights *_pAccessRights,							// [in] Pointer to a @{HPMVersionControlAccessRights} structure specifying the access rights to set on the files.
																						HPMInt32 _bResetSubFiles,														// [in] Set to 1 to reset the sub files and directories of the files specified in this operation to inherit the these access rights and remove any other access rights, 0 otherwise.
																						const HPMChangeCallbackData_VersionControlSetAccessRightsResponse **_pResult	// [out] Pointer to a pointer of a @{HPMChangeCallbackData_VersionControlSetAccessRightsResponse} object specifying the result of this operation. See comments section.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a file path to a file id.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{VersionControlInit}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlUtilPathToFileID												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlUtilPathToFileID)(void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pPath,		// [in] The path to the file to get file id for.
																						HPMUInt64 *_pFileID			// [out] Pointer to a variable that will receive the  file id for the file in the file path. Set to 0xffffffffffffffff if no file was found.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a file id to a file path.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			You must call @{VersionControlInit} before using this function or the		|
|						function will fail and return @{EHPMError}_FunctionalityNotInitialized.		|
|																									|
|						The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlUtilFileIDToPath												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlUtilFileIDToPath)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						HPMUInt64 _FileID,			// [in] The file id to get the path for.
																						const HPMString **_pPath	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Checks if the version control functionality is initialized.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}	, @{VersionControlInit} 								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlUtilIsInitialized												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlUtilIsInitialized)(void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 *_pIsInitialized	// [out,type=bool] Pointer to a variable that will receive the version control initialized status. 1 if initialized, 0 otherwise.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the local path where version control files are stored.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						VersionControlSetLocalPath													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionVersionControlSetLocalPath)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pLocalPath					// [in] The local path where version control files should be stored. This directory will be used to store temporary files as well as the files in the repository.
																					);

#endif
