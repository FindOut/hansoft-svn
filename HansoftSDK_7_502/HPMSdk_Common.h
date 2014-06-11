
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK common											|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/2 - Common										|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Doc:				HPM SDK Basic Types										|
|																				|
|	Description:		Basic types used in the SDK.							|
|																				|
|		List:				Type~25, Description								|
|			HPMUInt8:		Unsigned 8 bit integer type.						|
|																				|
|			HPMInt8:		Signed 8 bit integer type.							|
|																				|
|			HPMUInt16:		Unsigned 16 bit integer type.						|
|																				|
|			HPMInt16:		Signed 16 bit integer type.							|
|																				|
|			HPMUInt32:		Unsigned 32 bit integer type.						|
|																				|
|			HPMInt32:		Signed 32 bit integer type.							|
|																				|
|			HPMUInt64:		Unsigned 64 bit integer type.						|
|																				|
|			HPMInt64:		Signed 64 bit Integer type.							|
|																				|
|			HPMFP32:		32 bit floating point type.							|
|																				|
|			HPMFP64:		64 bit floating point type.							|
|																				|
|			HPMUniqueID:	Used to specify a unique database identifier.		|
|							Resources, projects, tasks and other items are		|
|							specified with										|
|							this type.											|
|																				|
|			HPMError:		Used as a return type for values. Signed 32 bit		|
|							integer type.										|
|																				|
|			HPMAsciChar:	This is the character type that some basic			|
|							strings use. 8 bit wide.							|
|																				|
|			HPMChar:		This is the character type that most strings use.	|
|							It is. 16 bit wide.									|
|																				|
|			HPMString:		Pointer to a HPMChar string that is used to specify	|
|							strings to the SDK.	All strings in the SDK is		|
|							encoded with UTF-16 encoding.						|
|																				|
|			HPMUserContext: A user context used for specifying context by the	|
|							SDK user.											|
|																				|
|	Comments:			These are the basic types that are used to communicate	|
|						with the SDK.											|
|																				|
|	Location:			Basic Types												|
|																				|
|	Index:				"Basic types"											|
|						"Basic types/HPMUInt8"									|
|						"Basic types/HPMInt8"									|
|						"Basic types/HPMUInt16"									|
|						"Basic types/HPMInt16"									|
|						"Basic types/HPMUInt32"									|
|						"Basic types/HPMInt32"									|
|						"Basic types/HPMUInt64"									|
|						"Basic types/HPMInt64"									|
|						"Basic types/HPMFP32"									|
|						"Basic types/HPMFP64"									|
|						"Basic types/HPMUniqueID"								|
|						"Basic types/HPMError"									|
|						"Basic types/HPMAsciChar"								|
|						"Basic types/HPMChar"									|
|						"Basic types/HPMString"									|
|						HPMUInt8												|
|						HPMInt8													|
|						HPMUInt16												|
|						HPMInt16												|
|						HPMUInt32												|
|						HPMInt32												|
|						HPMUInt64												|
|						HPMInt64												|
|						HPMFP32													|
|						HPMFP64													|
|						HPMUniqueID												|
|						HPMError												|
|						HPMAsciChar												|
|						HPMChar													|
|						HPMString												|
|						HPMUserContext											|
|																				|
|	ManagedTypeMap:		"HPMChar*=HPMString"									|
|																				|
|	ManagedBasicTypes:	HPMUInt8												|
|						HPMInt8													|
|						HPMUInt16												|
|						HPMInt16												|
|						HPMUInt32												|
|						HPMInt32												|
|						HPMUInt64												|
|						HPMInt64												|
|						HPMFP32													|
|						HPMFP64													|
|						HPMError												|
|						HPMUserContext											|
|																				|
|	ManagedComplexTypes:	HPMBoolean											|
|																				|
|	CppTypeMap:			"HPMChar*=HPMString"									|
|																				|
|	CppBasicTypes:		HPMUInt8												|
|						HPMInt8													|
|						HPMUInt16												|
|						HPMInt16												|
|						HPMUInt32												|
|						HPMInt32												|
|						HPMUInt64												|
|						HPMInt64												|
|						HPMFP32													|
|						HPMFP64													|
|						HPMError												|
|						HPMUserContext											|
|																				|
|	JavaTypeMap:		"HPMChar*=HPMString"									|
|																				|
|	JavaNativeTypeMap:	"HPMString=String,jstring,L"							|
|						"HPMInt32=int,jint,I"									|
|						"HPMUInt32=int,jint,I"									|
|						"HPMInt64=long,jlong,J"									|
|						"HPMUInt64=long,jlong,J"								|
|						"HPMUInt8=byte,jbyte,B"									|
|						"HPMInt8=byte,jbyte,B"									|
|						"HPMUInt16=short,jshort,S"								|
|						"HPMInt16=short,jshort,S"								|
|						"HPMFP32=float,jfloat,F"								|
|						"HPMFP64=double,jdouble,D"								|
|																				|
|	JavaBasicTypes:		HPMUInt8												|
|						HPMInt8													|
|						HPMUInt16												|
|						HPMInt16												|
|						HPMUInt32												|
|						HPMInt32												|
|						HPMUInt64												|
|						HPMInt64												|
|						HPMFP32													|
|						HPMFP64													|
\*_____________________________________________________________________________*/


typedef unsigned char HPMUInt8;
typedef signed char HPMInt8;
typedef unsigned short HPMUInt16;
typedef short HPMInt16;
typedef float HPMFP32;
typedef double HPMFP64;
typedef char HPMAsciChar;
typedef void * HPMUserContext;

// Platform specifics
// TEST
/*
SDK Defines available for platform & architecture specific code
	DHPMNix			- For a *nix platform (includes OSX)
	DHPMOSX			- For a MacOSX platform. (So on OSX DHPMOSX AND DHPMNix are defined)
	DHPMWindows		- For a Windows platform
	
	DHPM_x86_64		- For a Amd 64 /x64 architecture
	DHPM_x86		- On a x86 architecture
*/
#if defined(DHPMDocumentation)

	// These are definitions used by HTool when generating code & docs.
	typedef unsigned __int64 HPMUInt64;
	typedef signed __int64 HPMInt64;
	#define DHPMSdkCallingConvention __cdecl
	#define DHPMFarProc FARPROC

	typedef wchar_t HPMSystemChar;
	typedef wchar_t HPMCharType;
	#define HPMSystemCharSize 2
	#define HPMCharSize 2
	#define hpm_str(d_Str) L##d_Str

#elif defined(__GNUC__) || defined(__clang__)
	#define DHPMNix

	#if defined(__APPLE__)
		#define DHPMOSX		
	#endif
	#if defined(__linux__)
		#define DHPMLinux
	#endif

	typedef char HPMSystemChar;
	#define HPMSystemCharSize 1
	#define HPMCharSize 1

#if __cplusplus >= 201103L
	typedef char HPMCharType;
	#define hpm_str(d_Str) u8##d_Str
#else
	typedef char HPMCharType;
	#define hpm_str(d_Str) d_Str
#endif

	#if defined(__x86_64__)
		#define DHPM_x86_64
	#else
		#define DHPM_x86
	#endif

	typedef unsigned int HPMUInt32;
	typedef int HPMInt32;
	typedef unsigned long long HPMUInt64;
	typedef signed long long HPMInt64;	

	#if defined(DHPM_x86)
		#define DHPMSdkCallingConvention __attribute__((cdecl))
	#else		
		#define DHPMSdkCallingConvention
	#endif
	
	#define DHPMFarProc void*

#elif defined(_MSC_VER)	
	#define DHPMWindows

	#ifdef _M_X64
		#define DHPM_x86_64
	#else
		#define DHPM_x86
	#endif
	
	typedef unsigned long HPMUInt32;
	typedef long HPMInt32;
	typedef unsigned __int64 HPMUInt64;
	typedef signed __int64 HPMInt64;
	typedef wchar_t HPMSystemChar;
	#define HPMSystemCharSize 2
	#define HPMCharSize 2
	#define hpm_str(d_Str) L##d_Str

	#define DHPMSdkCallingConvention __cdecl
	#define DHPMFarProc FARPROC

	typedef wchar_t HPMCharType;

#else
	#error "Unsupported compiler"
#endif

typedef HPMInt32 HPMUniqueID;
typedef HPMInt32 HPMError;

#ifdef DHPMSdk_OnlyDefinitions
// This is for type checking in the SDK implementation
typedef struct HPMChar
{
	HPMCharType m_Char;
} HPMChar;
#else
typedef HPMCharType HPMChar;
#endif

typedef struct HPMString
{
	const HPMChar *m_pString;
} HPMString;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		Misc SDK enums.											|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/

#define DHPMSdkDefaultTargetVersion 0x7502
#define DHPMSdkLowestSupportedVersion 0x7502

#if DHPMSdkTargetVersion > 0
#else
#undef DHPMSdkTargetVersion
#define DHPMSdkTargetVersion DHPMSdkDefaultTargetVersion
#endif

#if !defined(DHPMDocumentation) && (DHPMSdkTargetVersion < 0x7500 || DHPMSdkTargetVersion > DHPMSdkDefaultTargetVersion || DHPMSdkTargetVersion < DHPMSdkLowestSupportedVersion)
#error "SDK target version out of range"
#endif

enum EHPMSDK
{
	EHPMSDK_Version = DHPMSdkTargetVersion // The version of the SDK.
};

enum EHPMSDKAdvanced
{
	EHPMSDKAdvanced_LowestSupportedVersion = DHPMSdkLowestSupportedVersion
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																		|
|																				|
|	Description:		One of these values will always be returned when		|
|						calling	a function in the SDK.							|
|																				|
|	Location:			Enumerations											|
|																				|
|	Index:				!name													|
|						!enums													|
\*_____________________________________________________________________________*/
enum EHPMError
{
	EHPMError_NoError = 0,								// Indicates that the function was successful.
	EHPMError_DllNotFound,								// The SDK dll could not be found in the current path.
	EHPMError_DllInvalid,								// The SDK dll did not contain the expected functions. This could be due to an old dll being used with a new SDK header file.
	EHPMError_NewVersionOfSDKRequired,					// This operation cannot be performed with this version of the SDK, you need to recompile your program with the newest version of the SDK.
	EHPMError_CouldNotConnectToHost,					// The connection to the server was unsuccessful.
	EHPMError_GeneralLoginError,						// Unspecified login error.
	EHPMError_FailedToConnectToDatabase,				// Internal error occurred when trying to login to the database on the server.
	EHPMError_DatabaseDoesNotExist,						// The database specified does not exist on the server.
	EHPMError_DatabaseNotOnline,						// The database specified is not online and cannot be connected to.
	EHPMError_PasswordOrResourceInvalid,				// The resource was not found or the password was incorrect when logging in.
	EHPMError_LicenseInvalid,							// The license has expired, too many resources have been created on the server or the SDK module is not enabled in the license.
	EHPMError_SyncError,								// An error occurred when the client was downloading the database.
	EHPMError_OtherError,								// Unspecified error.
	EHPMError_ConnectionLost,							// The connection to the server has been lost, it's up to the user of the SDK to try to connect again.
	EHPMError_InvalidID,								// The unique identifier specified to the function is not valid.
	EHPMError_PasswordRequired,							// A password must be specified at least one character long.
	EHPMError_CallbackAlreadyExists,					// The callback with the same function pointer and context has already been registered.
	EHPMError_CallbackDoesNotExist,						// The specified callback does not exist.
	EHPMError_BlockTimeout,								// A blocking operation timed out. This usually happens if the connection to the server was lost, it could also happen if an operation takes longer that 120 seconds to process on the server. When this happens you should not assume that the function finished or did not finish.
	EHPMError_ResourceNotMemberOfProject,				// The resource specified was not a member of the project where the operation was performed. This usually happens when you try to set a resource to some task property and the resource isn't a member of that project.
	EHPMError_DataNotYetAvailable,						// The data requested was not yet available. You should wait for a callback signifying that the data is available or poll the function until the requested data is returned.
	EHPMError_ConversionNotSupported,					// The data cannot be retrieved in the requested format because the conversion isn't supported.
	EHPMError_IndexOutOfRange,							// The index supplied to the function was out of range.
	EHPMError_FunctionalityNotInitialized,				// The function called needs to have its functionality initialized before this function can be called.
	EHPMError_AlreadyInitialized,						// The functionality has already been initialized.
	EHPMError_OperationAlreadyInProgress,				// An operation is already in progress and you must wait until it is finished before calling this function.
	EHPMError_AccessDenied,								// Access was denied by the server.
	EHPMError_FileDoesNotExist,							// The file does not exist.
	EHPMError_LicenseViolation,							// The command would have caused a license violation and was aborted.
	EHPMError_ParseError,								// Failed to parse the string that was sent into the function. Additional information might be available through @{UtilGetLastErrorDescription}.
	EHPMError_InvalidCustomSettingsType,				// The custom settings type specified was not valid for this function.
	EHPMError_NotAvailableInClientSDK,					// The called functions is not available in the client SDK.
	EHPMError_OnlyAvailableInClientSDK,					// The called functions is only available in the client SDK.
	EHPMError_Deprecated,								// The function called has been deprecated in this version of the SDK. Check SDK release notes for more information.
	EHPMError_OnlyAvailableInQAProject,					// The called function is only available for items residing in a QA project.
	EHPMError_InvalidSessionKeySize,					// The session key provided is too large or too small.
	EHPMError_InvalidIdentifier,						// The authentication method identifier provided is invalid (empty or too long).
	EHPMError_SessionPoolNotInitialized,				// The session pool could not be initialized.
	EHPMError_SessionPoolSessionNotAvailable,			// No available sessions in the session pool.
	EHPMError_SessionPoolNotAllowed,					// This operation is not allowed on a virtual session.
	EHPMError_SessionPoolNotAvailableInClientSDK,		// The session pool is not available in the client SDK.
	EHPMError_LoginDisabled,							// The login for the resource has been disabled.
	EHPMError_Partitioned,								// Unable to complete authentication due to network problems
	EHPMError_WorkingDirectoryNotAvailableInClientSDK,	// The working directory is not available in the client SDK.
	EHPMError_NewVersionOfServerRequired,				// The application was developed with a version of the SDK, that requires that the server is updated to a newer version.
	EHPMError_IDNoLongerExists,							// The identifier specified in the command never existed or has been deleted since the command was sent to server.
	EHPMError_NotValidOnTaskWithProxy,					// The operation cannot be performed on a task that has a proxy.
	EHPMError_FullIdentifierNotAvailaibleInTranslation,	// The full translation identifier is not available in the translation.
	EHPMError_IdentifierNotAvailaibleInTranslation,		// The translation identifier is not available in the translation.
	EHPMError_SDKNotAllowedToSetAuthOrCredential,		// The SDK is not allowed to set authentication provider or credential check provider
	EHPMError_ImageFormatNotSupported,					// Image format not supported by SDK. 
	EHPMError_CropAreaOutOfBounds,						// The specified crop area is larger than the original image.
	EHPMError_NoVersionControlHistory,					// No version control history exist.
	EHPMError_TimeZoneOrder,							// Not possible to set timezone start before or equal to previous timezone end or to set timezone end before timezone start.
	EHPMError_ServerTimedOut,							// Connection to server timed out.
	EHPMError_CouldNotLoadImpDll,						// Could not load downloaded SDK implementation dll.
	EHPMError_SecureConnectionRefused,					// Secure connection refused.
	EHPMError_SecureConnectionNotTrusted,				// Secure connection not trusted.
	EHPMError_Certificate,								// Certificate error. A more detailed description can be found with @{UtilGetLastErrorDescription}.
	EHPMError_ServerDoesNotSupportSecureConnection,		// Server does not support SSL.
	EHPMError_CertificateSettingsNotApplicableInClientSDK,	// The certificate settings are not applicable in the client SDK.
	EHPMError_DateTimeOutOfRange,						// The provided date time parameter is out of range.
	EHPMError_CouldNotCreateSDKInterface,				// Could not create the SDK interface from the downloaded SDK implementation dll.
	EHPMError_ServerVersionMismatch,					// A version mismatch was found in the SDK implementation dll.
	EHPMError_ServerDoesNotSupportPlatform,				// The server does not support your SDK platform or architechture.
	EHPMError_ServerTimeMismatch,						// The server time differs a lot from time the time on this computer. Connection is not allowed.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Date formats. Currently only used for										|
|						@{HPMResourceGlobalSettings}::m_DateFormat									|
|																									|
|	See Also:			@{HPMResourceGlobalSettings}, @{EHPMResourceGlobalSettingsFlag}				|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMDateFormat
{
	EHPMDateFormat_NewVersionOfSDKRequired,	// The date format did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this format.
	EHPMDateFormat_YYYY_MM_DD_ISO8601,		// ISO 8601 format
	EHPMDateFormat_MM_DD_YYYY,				// MM-DD-YYYY format
	EHPMDateFormat_DD_MM_YYYY,				// DD-MM-YYYY format
	EHPMDateFormat_YYYY_MMM_DD,				// YYYY-MMM-DD format
	EHPMDateFormat_MMM_DD_YYYY,				// MMM-DD-YYYY format
	EHPMDateFormat_DD_MMM_YYYY,				// DD-MMM-YYYY format
	EHPMDateFormat_WEEKDAY_YY_MM_DD,		// Weekday-YY-MM-YY format
	EHPMDateFormat_WEEKDAY_MM_DD_YY,		// Weekday-MM-DD-YY format
	EHPMDateFormat_WEEKDAY_DD_MM_YY,		// Weekday-DD-MM-YY format
	EHPMDateFormat_FromLanguage,			// The date format is taken from the current set language
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Periodicity type. This enum specifies different types of periodicity. Used	|
|						by @{HPMProjectHistoryAutoSaveSettings} and @{HPMProjectEmailSettings}.		|
|																									|
|	See Also:			@{HPMProjectHistoryAutoSaveSettings}, @{HPMProjectEmailSettings}			|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMPeriodicityType
{
	EHPMPeriodicityType_NewVersionOfSDKRequired, 	// The periodicity type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMPeriodicityType_Never,						// Disabled.
	EHPMPeriodicityType_Daily,						// Daily periodicity.
	EHPMPeriodicityType_Weekly,						// Weekly periodicity.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Wall grouping mode. Used by @{HPMTaskWallPosition}.							|
|																									|
|	See Also:			@{HPMTaskWallPosition}														|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMWallGroupingType
{
	EHPMWallGroupingType_NewVersionOfSDKRequired,	// The grouping type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this grouping type.
	EHPMWallGroupingType_DefaultColumn,				// The specified grouping is one of the @{EHPMProjectDefaultColumn} enum.
	EHPMWallGroupingType_CustomColumn,				// The specified grouping is the hash of a custom column.
	EHPMWallGroupingType_CustomGroups,				// The specified grouping is a custom grouping.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Resource grouping type type used for										|
|						@{HPMResourceDefinition}::m_Type, @{HPMResourceReference}::m_ResourceType	|
|																									|
|	See Also:			@{HPMResourceDefinition}, @{HPMProjectDetailedAccessRule},					|
|						@{HPMProjectWorkflowObject}													|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMResourceGroupingType
{
	EHPMResourceGroupingType_NewVersionOfSDKRequired,	// The resource grouping type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this grouping type.
	EHPMResourceGroupingType_Resource,					// The resource grouping is a resource.
	EHPMResourceGroupingType_ResourceGroup,				// The resource grouping is a resource group.
	EHPMResourceGroupingType_AllProjectMembers,			// The resource grouping is all members of the project.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Custom settings type used for												|
|						@{GlobalGetCustomSettingsValue}, @{ProjectGetCustomSettingsValue},			|
|						@{ResourceGetCustomSettingsValue}, @{ProjectResourceGetCustomSettingsValue},|
|						@{GlobalSetCustomSettingsValue}, @{ProjectSetCustomSettingsValue},			|
|						@{ResourceSetCustomSettingsValue} and										|
|						@{ProjectResourceSetCustomSettingsValue}									|
|																									|
|	See Also:			@{GlobalGetCustomSettingsValue}, @{ProjectGetCustomSettingsValue},			|
|						@{ResourceGetCustomSettingsValue}, @{ProjectResourceGetCustomSettingsValue},|
|						@{GlobalSetCustomSettingsValue}, @{ProjectSetCustomSettingsValue},			|
|						@{ResourceSetCustomSettingsValue}, @{ProjectResourceSetCustomSettingsValue}	|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMCustomSettingsType
{
	EHPMCustomSettingsType_NewVersionOfSDKRequired,		// The setting type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this settings type.
	EHPMCustomSettingsType_Admin,						// The setting refers to the administrative settings.
	EHPMCustomSettingsType_Normal,						// The setting refers to the normal settings. For a resource this is personal options. For a project this is the settings that main project managers can set from the project view.
	EHPMCustomSettingsType_Custom,						// The setting refers to a custom dialog initiated directly from a client dll.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Report view type used for													|
|						@{HPMReport}::m_ViewType													|
|																									|
|	See Also:			@{HPMReport}																|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMReportViewType
{
	EHPMReportViewType_NewVersionOfSDKRequired,			// The view type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this view type.
	EHPMReportViewType_BugsReportedByMe,				// View bugs reported by me.
	EHPMReportViewType_AllBugsInProject,				// View all bugs in project.
	EHPMReportViewType_MyWork,							// View my work.  
	EHPMReportViewType_ScheduleMainProject,				// View project as task scheduling.
	EHPMReportViewType_GlobalResourceAllocation,		// View resource allocation.
	EHPMReportViewType_GlobalFind,						// View global find in all projects.
	EHPMReportViewType_ProjectHistory,					// View project history.
	EHPMReportViewType_AgileMainProject,				// View project as agile.
	EHPMReportViewType_AgileBacklog,					// View agile backlog.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Report flags used for														|
|						@{HPMReport}::m_Flags														|
|																									|
|	See Also:			@{HPMReport}																|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMReportFlag
{
	EHPMReportFlag_None = 0,
	EHPMReportFlag_ContinueToFindWhileInReportMode = 1 << 3,		// When the report is active users can continue to use Find.

};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Column type used for @{HPMColumn}::m_ColumnType								|
|																									|
|	See Also:			@{EHPMProjectDefaultColumn}, @{HPMColumn}									|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMColumnType
{
	EHPMColumnType_NewVersionOfSDKRequired,		// The column type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this column type.
	EHPMColumnType_DefaultColumn,				// The specified column is one of the @{EHPMProjectDefaultColumn} enum.
	EHPMColumnType_CustomColumn,				// The specified column is the hash of a custom column.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Selection type used for	@{HPMFindCondition}::m_Type							|
|																									|
|	See Also:			@{HPMFindCondition}															|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFindSelectionType
{
	EHPMFindSelectionType_NewVersionOfSDKRequired,	// The selection type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this selection type.
	EHPMFindSelectionType_Column,						// The specified column is the hash of a custom column.
	EHPMFindSelectionType_Fixed,						// The specified column us one of @{EHPMFilterType} enum.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Filter type used for @{HPMFindCondition}::m_SelectionID						|
|																									|
|	See Also:			@{HPMFindCondition}															|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMFilterType
{
	EHPMFilterType_NewVersionOfSDKRequired,					// The filter type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this filter type.
	EHPMFilterType_None,									// No filter.
	EHPMFilterType_Incompleted,								// Scheduled tasks with status 'Incomplete'
	EHPMFilterType_Completed,								// Scheduled tasks with status 'Completed'.
	EHPMFilterType_InProgress,								// Scheduled tasks with status 'In progress'.
	EHPMFilterType_Overdue,									// Scheduled tasks with status 'Overdue'.
	EHPMFilterType_NotStartedYet,							// Scheduled tasks with status 'Not started yet'.
	EHPMFilterType_ResourcesOverallocation,					// Resource allocation zones that are over allocated.
	EHPMFilterType_ResourcesUnderallocation,				// Resource allocation zones that are under allocated.
	EHPMFilterType_ResourcesGaps,							// Resource allocation zones that have planning gaps.
	EHPMFilterType_ResourcesWorkingNow,						// Resource allocation zones that are allocated now.
	EHPMFilterType_ResourcesFreeNow,						// Resource allocation zones that are not allocated now.
	EHPMFilterType_OutOfOffice,								// Resource allocation zones that are out of office.
	EHPMFilterType_NotAssigned,								// Tasks/items that are not assigned.
	EHPMFilterType_MilestoneOverdue,						// Tasks/items that are milestone overdue.
	EHPMFilterType_AreMilestone,							// All milestones.
	EHPMFilterType_AreMilestonePast,						// Past milestones.
	EHPMFilterType_AreMilestoneFuture,						// Future milestones.
	EHPMFilterType_AreSprints,								// All sprints.
	EHPMFilterType_AreBacklogItems,							// All backlog items.
	EHPMFilterType_HaveAgileStatusNotDone,					// Agile items with status 'Not done'.
	EHPMFilterType_HaveAgileStatusInProgress,				// Agile items with status 'In progress'.
	EHPMFilterType_HaveAgileStatusCompleted,				// Agile items with status 'Completed'.
	EHPMFilterType_HaveAgileStatusBlocked,					// Agile items with status 'Blocked'.
	EHPMFilterType_HaveAgileStatusDeleted,					// Agile items with status 'Deleted'. 
	EHPMFilterType_VacationTasks,							// Vacation tasks.
	EHPMFilterType_UserStories,								// Items with status user stories.
	EHPMFilterType_AssignedToMe,							// Bugs assigned to me.
	EHPMFilterType_CanStartNow,								// Tasks that can start now.
	EHPMFilterType_IsOngoingWork,							// Tasks that are ongoing.
	EHPMFilterType_IsArchived,								// Tasks that are archived.
	EHPMFilterType_IsDeleted,								// Tasks that are deleted.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Icons used in lists.														|
|																									|
|	See Also:			@{HPMReport}, @{HPMProjectWorkflowObject},									|
|						@{HPMProjectWorkflowProperties},											|
|						@{HPMProjectCustomColumnsColumnDropListItem}								|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMListIcon
{
	EHPMListIcon_NewVersionOfSDKRequired,	// The bug status icon did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this status icon.
	EHPMListIcon_Default,					// Default icon. Currently resolves to @{EHPMListIcon}_RedDot.
	EHPMListIcon_WhiteBox,					// White box icon.
	EHPMListIcon_GreenBox,					// Green box icon.
	EHPMListIcon_YellowBox,					// Yellow box icon.
	EHPMListIcon_RedBox,					// Red box icon.
	EHPMListIcon_BlueBox,					// Blue box icon.
	EHPMListIcon_MagentaBox,				// Magenta box icon.
	EHPMListIcon_OrangeBox,					// Orange box icon.
	EHPMListIcon_Check,						// Check mark icon.
	EHPMListIcon_RedDot,					// Red dot icon.
	EHPMListIcon_BlueFace,					// Blue face icon.
	EHPMListIcon_GreyFace,					// Grey face icon.
	EHPMListIcon_OrangeFace,				// Orange face icon.
	EHPMListIcon_GoldFace,					// Gold face icon.
	EHPMListIcon_Locked,					// Locked icon.
	EHPMListIcon_Unlocked,					// Unlocked icon.
	EHPMListIcon_ReOpenBug,					// Re-open bug icon.
	EHPMListIcon_NewBug,					// New bug icon.
	EHPMListIcon_AssignedBug,				// Assigned bug icon.
	EHPMListIcon_FixedBug,					// Fixed bug icon.
	EHPMListIcon_VerifiedBug,				// Verified bug icon.
	EHPMListIcon_ClosedBug,					// Closed bug icon.
	EHPMListIcon_Group,						// Group icon.
	EHPMListIcon_GreyGroup,					// Grey group icon.
	EHPMListIcon_LightGreyGroup,			// Light grey icon.
	EHPMListIcon_GreenCircle,				// Green circle icon.
	EHPMListIcon_YellowCircle,				// Yellow circle icon.
	EHPMListIcon_RedCircle,					// Red circle icon.
	EHPMListIcon_BlueCircle,				// Blue circle icon.
	EHPMListIcon_MagentaCircle,				// Magenta circle icon.
	EHPMListIcon_OrangeCircle,				// Orange circle icon.
	EHPMListIcon_YesBox,					// Yes box icon.
	EHPMListIcon_NoBox,						// No box icon.
	EHPMListIcon_QuestionBox,				// Question box icon.
	EHPMListIcon_Project,					// Project icon.
	EHPMListIcon_DeletedResource,			// Deleted resource icon.
	EHPMListIcon_Workflow,					// Workflow icon.
	EHPMListIcon_Progress,					// Progress icon.
	EHPMListIcon_Step,						// Step icon.
	EHPMListIcon_Pipeline,					// Pipeline icon.
	EHPMListIcon_Report,					// Report icon.
	EHPMListIcon_VeryHighPriorityBox,		// Very high priority box icon.
	EHPMListIcon_HighPriorityBox,			// High priority box icon.
	EHPMListIcon_MediumPriorityBox,			// Medium priority box icon.
	EHPMListIcon_LowPriorityBox,			// Low priority box icon.
	EHPMListIcon_VeryLowPriorityBox,		// Very low priority icon.
	EHPMListIcon_DisabledBox,				// Disabled box icon.
	EHPMListIcon_Plus,						// Plus icon.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Sort group order used for													|
|						@{HPMReportSortGroupProperties}::m_OrderType								|
|																									|
|	See Also:			@{HPMReportSortGroupProperties}												|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMReportSortGroupOrderType
{
	EHPMReportSortGroupOrderType_NewVersionOfSDKRequired,		// The sort/group order type did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMReportSortGroupOrderType_None,							// Use if @{HPMReportSortGroupProperties} has no sort group/criteria.
	EHPMReportSortGroupOrderType_Primary,						// Use if @{HPMReportSortGroupProperties} is the primary sort/group criteria.
	EHPMReportSortGroupOrderType_Secondary,						// Use if @{HPMReportSortGroupProperties} is the secondary sort/group criteria.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		The timesheet field type.													|
|																									|
|	See Also:			@{HPMChangeCallbackData_TimesheetRowChange}									|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMTimesheetField
{
	EHPMTimesheetField_NewVersionOfSDKRequired,	// The field did not exist when this SDK was created. Upgrade to a newer version of the SDK to be able to use this type.
	EHPMTimesheetField_DayID,					// Day id field.
	EHPMTimesheetField_HighestRowID,			// Highest row id field.
	EHPMTimesheetField_ActivityTypeID,			// Activity type id field.
	EHPMTimesheetField_ProjectID,				// Project id field.
	EHPMTimesheetField_TaskID,					// Task id field.
	EHPMTimesheetField_StartedTime,				// Started time field.
	EHPMTimesheetField_FinishedTime,			// Finished time field.
	EHPMTimesheetField_DurationTime,			// Duration time field.
	EHPMTimesheetField_Comment,					// Comment field.
	EHPMTimesheetField_Deleted,					// Is deleted field.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used to specify optional parameters.										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMOptionalBoolean
{
	EHPMOptionalBoolean_NotSet = 0,			// The value is not set.
	EHPMOptionalBoolean_On = 1,				// The value is true/on/set.
	EHPMOptionalBoolean_Off = 2,			// The value is false/off/not set.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define an untranslated string.           							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet SaveOriginalRetCanBeNull									|
\*_________________________________________________________________________________________________*/
typedef struct HPMUntranslatedString
{	
	HPMInt32 m_Dummy;			// [default=-1] Dummy variable. Not used
} HPMUntranslatedString;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define lists of resources.											|
|																									|
|	See Also:			@{EHPMResourceGroupingType}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceDefinition
{
	HPMInt32 m_GroupingType;		// [type=EHPMResourceGroupingType,default=EHPMResourceGroupingType_Resource] The grouping type. Can be one of @{EHPMResourceGroupingType}.
	HPMUniqueID m_ID;				// The unique identifier of the resource or resource group.
} HPMResourceDefinition;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a list of resources.										|
|																									|
|	See Also:			@{HPMResourceDefinition}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMResourceDefinitionList
{
	HPMUInt32 m_nResources;						// The number of resources defined.
	const HPMResourceDefinition *m_pResources;	// Pointer to a list of resources to define. See @{HPMResourceDefinition}.
} HPMResourceDefinitionList;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines a work pass.														|
|																									|
|	Comments:			Times are defined as 1 + Half hours since midnight. To disable the pass set	|
|						both start and end to 0.													|
|																									|
|	See Also:			@{HPMWorkDay}, @{HPMCustomWorkHoursDay}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkPass
{
	HPMUInt32 m_Start;	// [default=0] The start of the pass.
	HPMUInt32 m_End;	// [default=0] The end of the pass.
} HPMWorkPass;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines a work Day.															|
|																									|
|	Comments:			A work day is defined as three work passes.									|
|																									|
|	See Also:			@{HPMWorkPass}, @{HPMTaskVacationOptions}, @{HPMWorkingHours}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkDay
{
	HPMWorkPass m_WorkPasses[3]; // You can set up to three work passes for a day. See @{HPMWorkPass} for details on work passes.
} HPMWorkDay;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Working days used in in @{ProjectCalendarGetWorkingDays},					|
|						@{ProjectCalendarSetWorkingDays}											|
|																									|
|	See Also:			@{ProjectCalendarGetWorkingDays}, @{ProjectCalendarSetWorkingDays}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkingDays
{
	HPMInt32 m_bWorkDay[7];		// [default=1] The working week. m_bWorkDay[0] is Monday. A day is a working day if set to 1, a non working day if set to 0.
} HPMWorkingDays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Work day status for a specific date.										|
|																									|
|	See Also:			@{HPMCustomWorkingDays}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomWorkDay
{
	HPMUInt64 m_Date;				// [default=0] The specific date for the working day status. Expressed as the number of micro seconds since 1970 UTC.
	HPMInt32 m_bWorkDay;			// [default=0] Set to 1 if this day is a working day, 0 otherwise.
} HPMCustomWorkDay;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Changed working days used in in @{ProjectCalendarGetCustomWorkingDays},		|
|						@{ProjectCalendarSetCustomWorkingDays}										|
|																									|
|	See Also:			@{ProjectCalendarGetCustomWorkingDays},										|
|						@{ProjectCalendarSetCustomWorkingDays}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomWorkingDays
{
	HPMUInt32 m_nChangedDays;					// The number of days to specify changed working day status for.
	const HPMCustomWorkDay *m_pChangedDays;		// Pointer to a list of @{HPMCustomWorkDay} to specify changed working day status for.
} HPMCustomWorkingDays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Changed working hours for a specific date.									|
|																									|
|	See Also:			@{HPMCustomWorkingHours}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomWorkHoursDay
{
	HPMUInt64 m_Date;				// [default=0] The specific date for the working hours. Expressed as the number of micro seconds since 1970 UTC.
	HPMWorkPass m_WorkPasses[3];	// You can set up to three work passes for a day. See @{HPMWorkPass} for details on work passes.
} HPMCustomWorkHoursDay;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Specific days to set working hours for used in								|
|						@{ProjectCalendarGetCustomWorkingHours},									|
|						@{ProjectCalendarSetCustomWorkingHours}										|
|																									|
|	See Also:			@{ProjectCalendarGetCustomWorkingHours},									|
|						@{ProjectCalendarSetCustomWorkingHours}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomWorkingHours
{
	HPMUInt32 m_nChangedDays;							// The number of days with changed working hours.
	const HPMCustomWorkHoursDay *m_pChangedDays;		// Pointer to a list of @{HPMCustomWorkHoursDay} to specify changed working hours for.
} HPMCustomWorkingHours;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Working days used in @{ProjectCalendarGetWorkingDays},						|
|						@{ProjectCalendarSetWorkingDays}											|
|																									|
|	See Also:			@{ProjectCalendarGetWorkingDays}, @{ProjectCalendarSetWorkingDays}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkingHours
{
	HPMWorkDay m_WorkDays[7];	// Used to specify work passes for the days of the week. See @{HPMWorkDay}.
} HPMWorkingHours;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Holiday definition.															|
|																									|
|	See Also:			@{HPMHolidayYear}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMHoliday
{
	HPMUInt64 m_Date;						// [default=0] The date to set a holiday for. Expressed as the number of micro seconds since 1970 UTC.
	const HPMUntranslatedString *m_pName;	// The name of the holiday.
} HPMHoliday;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Year that has number of holidays defined.									|
|																									|
|	See Also:			@{HPMHolidays}																|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMHolidayYear
{
	HPMInt32 m_Year;			// [default=1970] The year to set holidays for.
	HPMUInt32 m_nDays;			// The number of holidays.
	const HPMHoliday *m_pDays;	// Pointer to a list of @{HPMHoliday} to set as holidays.
} HPMHolidayYear;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Holidays used in @{ProjectCalendarGetHolidays},								|
|						@{ProjectCalendarSetHolidays}												|
|																									|
|	See Also:			@{ProjectCalendarGetHolidays}, @{ProjectCalendarSetHolidays}				|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMHolidays
{
	const HPMUntranslatedString *m_pCountry;	// The name of the country where the holidays are celebrated.
	HPMUInt32 m_nYears;							// The number of years that holidays are defined for. 
	const HPMHolidayYear *m_pYears;				// Pointer to a list of @{HPMHolidayYear} to holidays for.
} HPMHolidays;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Calendar information used in @{ProjectGetCalendarDayInfo}					|
|																									|
|	See Also:			@{ProjectGetCalendarDayInfo}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCalendarDayInfo
{
	HPMInt32 m_bWorkingDay;					// [default=0] Set to 1 if day is a working day, 0 otherwise.
	HPMInt32 m_bHoliday;					// [default=0] Set to 1 if day is a holiday, 0 otherwise.
	HPMInt32 m_bCompensatedHoliday;			// [default=0] Set to 1 if day is a compensated, 0 otherwise.
	HPMInt32 m_WorkingHours;				// [default=0] The number of working hours, expressed as half hours.
	HPMInt32 m_bOriginatesFromVacationTask;	// [default=0] If a vacation task has affected the calendar in any way for this day this will be set to 1, 0 otherwise.
} HPMCalendarDayInfo;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines a MD5 checksum.														|
|																									|
|	See Also:			@{HPMVersionControlFile}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMMD5Checksum
{
	HPMUInt8 m_Checksum[16];	// [default=0] The MD5 checksum data
} HPMMD5Checksum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines the value of a custom setting.										|
|																									|
|	See Also:			@{GlobalGetCustomSettingsValue}, @{GlobalSetCustomSettingsValue}			|
|						@{ResourceGetCustomSettingsValue}, @{ResourceSetCustomSettingsValue}		|
|						@{ProjectGetCustomSettingsValue}, @{ProjectSetCustomSettingsValue}			|
|						@{ProjectResourceGetCustomSettingsValue},									|
|						@{ProjectResourceSetCustomSettingsValue}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomSettingValue
{
	HPMInt32 m_bIsDefault;		// [default=0] Set to true when the requested value is the default value. If set to false when setting a value, the value is removed.
	HPMInt32 m_bSecretValue;	// [default=0] If set the value will only be sent to the server and other SDK clients, not to normal clients. Not valid when getting values.
	const HPMChar *m_pValue;	// The value of the custom setting to get or set.
} HPMCustomSettingValue;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines SDK internal data.													|
|																									|
|	See Also:			@{GlobalGetSDKInternalData}, @{GlobalSetSDKInternalData}					|
|						@{ResourceGetSDKInternalData}, @{ResourceSetSDKInternalData}				|
|						@{ProjectGetSDKInternalData}, @{ProjectSetSDKInternalData}					|
|						@{ProjectResourceGetSDKInternalData},										|
|						@{ProjectResourceSetSDKInternalData},										|
|						@{TaskGetSDKInternalData}, @{TaskSetSDKInternalData}						|
|						@{TaskGetCommentSDKInternalData}, @{TaskSetCommentSDKInternalData}			|
|						@{TaskRefGetSDKInternalData}, @{TaskRefSetSDKInternalData}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMSDKInternalData
{
	HPMInt32 m_bSecret;			// [default=0] If set the data will only be sent to the server and other SDK clients, not to normal clients. Not valid when getting data.
	HPMUInt32 m_nData;			// The number of bytes of data defined.
	const HPMUInt8 *m_pData;	// The data defined.
} HPMSDKInternalData;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a statistics field.											|
|																									|
|	See Also:			@{HPMProjectCustomStatisticsSampler}, @{HPMProjectCustomStatisticsSampler},	|
|						@{EHPMStatisticsField}, @{HPMStatisticsCustomStatisticsFrequency}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomStatisticsField
{
	HPMInt32 m_FieldID;				// [type=EHPMStatisticsField,default=EHPMStatisticsField_WorkRemaining] The field ID. Can be one of @{EHPMStatisticsField}. @{EHPMStatisticsField}_CustomStatisticsSampler is not valid for this member.
	HPMUInt32 m_FieldData;			// [default=0] Extra data to identify the field. If m_FieldID is @{EHPMStatisticsField}_CustomColumn this parameter should be the column hash for the custom column. 
} HPMCustomStatisticsField;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to represent variant data.												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMVariantData
{	
	HPMInt32 m_Dummy;			// [default=-1] Dummy variable. Not used
} HPMVariantData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a task field.												|
|																									|
|	See Also:			@{HPMVariantData}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskField
{
	HPMInt32 m_FieldID;						// [type=EHPMTaskField,default=EHPMTaskField_Undefined] The field to specify data for. Can be one of @{EHPMTaskField}.
	HPMUInt32 m_FieldData;					// [default=0] The field data to specify data for. If m_FieldID is @{EHPMTaskField}_CustomColumnData this member is the column hash of the custom column data.
} HPMTaskField;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the data for a task field.									|
|																									|
|	See Also:			@{HPMVariantData}															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTaskFieldData
{
	HPMTaskField m_TaskField;				// The task field type.
	const HPMVariantData *m_pVariantData;	// A variant to specify the data. Use the VariantDecode_* and VariantEncode_* functions to manipulate this member.
} HPMTaskFieldData;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a column.													|
|																									|
|	See Also:			@{EHPMColumnType}, @{HPMFindCriteriaDataHeader}								|
|						@{HPMReportSortGroupProperties}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMColumn
{
	HPMInt32 m_ColumnType;		// [type=EHPMColumnType,default=EHPMColumnType_DefaultColumn] Column identification type. Cane be one of @{EHPMColumnType}.
	HPMUInt32 m_ColumnID;		// [default=0] If m_ColumnType is @{EHPMColumnType}_DefaultColumn this value can be one of @{EHPMProjectDefaultColumn}, otherwise if m_ColumnType is @{EHPMColumnType}_CustomColumn it's the hash of the custom column. This together with m_ColumnType defines the order of the columns.
} HPMColumn;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to hold the data items returned from @{UtilGetColumnData}.				|
|																									|
|	See Also:			@{UtilGetColumnData}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMColumnData
{
	HPMUInt32 m_nDataItems;			// The number of data items.
	const HPMUInt32 *m_pDataItems;	// Pointer to a list of data items. 
	HPMInt32 m_bFirstItemIsNotSet;	// [default=0] Set to true when the first item in the list is the 'Not set' item
} HPMColumnData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to hold the data items returned from @{UtilGetColumnDescription}.		|
|																									|
|	See Also:			@{UtilGetColumnDescription}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMColumnDescription
{
	HPMInt32 m_Type;				// [type=EHPMValueType,default=EHPMValueType_Undefined] The type of the column. Will be one of @{EHPMValueType}.
	HPMInt32 m_CriteriaDataType;	// [type=EHPMFindCriteriaDataType,default=EHPMFindCriteriaDataType_Invalid] The criteria data type of the column. Will be one of @{EHPMFindCriteriaDataType}.
	HPMInt32 m_bFloatingPoint;		// [default=0] Set to 1 if this is a floating point column, 0 otherwise.
	HPMInt32 m_bReadOnly;			// [default=0] Set to 1 if this is read only, 0 otherwise.
	HPMInt32 m_TaskFieldID;			// [type=EHPMTaskField,default=EHPMTaskField_Undefined] The corresponding task field in @{EHPMTaskField}.
	HPMInt64 m_MinValue;			// [default=0] The min value of this column. Both m_MinValue and m_MaxValue set to 0 if not applicable.
	HPMInt64 m_MaxValue;			// [default=0] The max value of this column. Both m_MinValue and m_MaxValue set to 0 if not applicable.
	HPMInt32 m_MaxDecimals;			// [default=0] The max number of decimals for this column. Set to 0 for integers and for floating point columns that has infinite decimals.
} HPMColumnDescription;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Column text options used in	@{TaskRefGetColumnText}.						|
|																									|
|	See Also:			@{TaskRefGetColumnText}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMColumnTextOptions
{
	HPMInt32 m_bForDisplay;					// [default=1] Set to 1 if this text is for display, 0 if intended for search.
	HPMInt32 m_bMyWork;						// [default=0] Set to 1 if this is intended for my work.
	HPMInt32 m_bDisplayUnits;				// [default=1] Set to 1 to display units where applicable.
	HPMInt32 m_bExpandResources;			// [default=0] Set to 1 to expand resource groups to resources in Resource, Resource tag, Originally created by and CC comments to columns.
	HPMInt32 m_bOnlyFirstResource;			// [default=0] Set to 1 to only show first resource in Resource, Resource tag, Originally created by and CC comments to columns.
	HPMInt32 m_bNeedFullProjectPath;		// [default=0] Set to 1 to display full project path.
	HPMInt32 m_bNeedSprintInSubProjectPath; // [default=0] If set to 1 subproject path ends with the first encountered sprint.
	HPMInt32 m_bSeparateSubProjectPath;		// [default=0] If set to 1 subproject path is displayed with description.
	HPMUniqueID m_ForResource;				// Set to resource that this text will be displayed for.
} HPMColumnTextOptions;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a column.													|
|																									|
|	See Also:			@{EHPMColumnType}, @{HPMFindCriteriaDataHeader}								|
|						@{HPMReportSortGroupProperties}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCustomColumnInfo
{
	HPMInt32 m_ColumnType;		// [type=EHPMColumnType,default=EHPMColumnType_DefaultColumn] Column identification type. Cane be one of @{EHPMColumnType}.
	HPMInt32 m_ColumnID;		// [default=0] If m_ColumnType is @{EHPMColumnType}_DefaultColumn this value can be one of @{EHPMProjectDefaultColumn}, otherwise if m_ColumnType is @{EHPMColumnType}_CustomColumn it's the hash of the custom column. This together with m_ColumnType defines the order of the columns.
} HPMCustomColumnInfo;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																																						|
|																																								|
|	Description:		Holds filter conditions in @{HPMFindContext}.																							|
|																																								|
|																																								|
|	Location:			Structures																																|
|																																								|
|	Index:				!name																																	|
\*_____________________________________________________________________________________________________________________________________________________________*/
typedef struct HPMFindCondition
{
	HPMInt32 m_SelectionType;		// [type=EHPMFindSelectionType,default=EHPMFindSelectionType_Column] Can be one of @{EHPMFindSelectionType}.
	HPMInt32 m_SelectionID;			// [default=0] If m_SelctionType is @{EHPMFindSelectionType}_Fixed this value can be one of @{EHPMFilterType}, otherwise if m_SelctionType is @{EHPMFindSelectionType}_Column it is the hash of the custom column.
	HPMColumn m_Column;				// Column type.
} HPMFindCondition;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to store a compiled find context.										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindContextData
{
	HPMInt32 m_Dummy;			// [default=-1] Dummy variable. Not used
} HPMFindContextData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Find context used in @{UtilPrepareFindContext}.								|
|																									|
|	See Also:			@{UtilPrepareFindContext}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindContext
{
	HPMUInt32 m_nConditions;						// Number of find conditions.
	const HPMFindCondition *m_pConditions;			// Pointer to a list of find conditions. See @{HPMFindCondition}.
	HPMUInt32 m_nMilestones;						// The number of milestones that the find results should be tagged to.
	const HPMUniqueID *m_pMilestones;				// Pointer to a list of unique identifiers pointing to the milestones that the find results should be tagged to.
	HPMUInt32 m_nPipelinesAndWorkflows;				// The number of pipelines and workflows that the find results should be tagged to.
	const HPMUniqueID *m_pPipelinesAndWorkflows;	// Pointer to a list of unique identifiers pointing to the pipelines and workflows that the find results should be tagged to.
} HPMFindContext;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to specify a workflow id together with an workflow object id to		|
|						identify an workflow and a workflow object together.						|
|																									|
|	See Also:			@{TaskGetCreatedFromWorkflowObject}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkflowObjectIdentifier
{
	HPMUInt32 m_WorkflowID;			// [default=0] The workflow identifier.
	HPMUInt32 m_WorkflowObjectID;	// [default=0] The workflow object identifier.
} HPMWorkflowObjectIdentifier;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Holds information about the last enter or exit from a workflow status.		|
|																									|
|	See Also:			@{TaskGetLastExitWorkflowStatus}, @{TaskGetLastEnterWorkflowStatus}			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMWorkflowStatusTransitInfo
{
	HPMUniqueID m_ResourceID;			// The unique identifier of the resource that last exited the status.
	HPMUInt64 m_Time;					// [default=0] The time when the status was last exited or entered. Expressed as the number of micro seconds since 1970 UTC.
} HPMWorkflowStatusTransitInfo;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define an item in a find criteria item list.						|
|																									|
|	See Also:			@{HPMFindCriteriaTypeDroplist}, @{HPMFindCriteriaTypeMultiSelectDroplist}	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaDataListItem
{
	HPMInt32 m_ID;						// [default=1] The ID for the item. The type of id is dependent on the column type set in @{HPMFindCriteriaDataHeader}::m_ColumnID.
	HPMUInt32 m_Data;					// [default=0] Optional data field for the list item. Currently set to 0 for all types except when @{HPMFindCriteriaDataHeader}::m_ColumnID is set to @{EHPMProjectDefaultColumn}_PipelineAndWorkflow. It is then set to @{HPMProjectWorkflowObject}::m_ObjectID;
} HPMFindCriteriaDataListItem;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to represent criteria data. Use the CriteriaDataEncode_* and			|
|						CriteriaDataDecode_* to manipulate it.										|
|																									|
|	See Also:			@{HPMFindCriteria}.															|
|																									|
|	Comments:			Use @{UtilGetFindCriteriaDataTypeFromData} to determine which				|
|						CriteriaDataDecode_* function to use.										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaData
{	
	HPMInt32 m_Dummy;			// [default=0] Dummy variable. Not used
} HPMFindCriteriaData;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a connection between find criteria.							|
|																									|
|	See Also:			@{HPMFindCriteria}.															|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaConnection
{
	HPMUInt32 m_ID;				// [default=0] The unique identifier of the find criteria this find criteria is connected to.
	HPMInt32 m_ConnectFrom;		// [default=0] The site on the start object that the connection is made from. See @{EHPMFindCriteriaConnectionSite}.
	HPMInt32 m_ConnectTo;		// [default=0] The site on the end object that the connection is made to. See @{EHPMFindCriteriaConnectionSite}.
} HPMFindCriteriaConnection;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines a find criteria.													|
|																									|
|	See Also:			@{HPMFindCriteriaConnection}, @{HPMFindCriteriaData}, 						|
|						@{UtilGetFindCriteriaDataTypeFromData},										|
|						@{UtilGetFindCriteriaDataTypeFromColumn}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteria
{
	HPMUInt32 m_ID;													// [default=1] The unique id of the find criteria.
	HPMInt32 m_PositionX;											// [default=0] The X position this object is displayed on when editing the find criteria.
	HPMInt32 m_PositionY;											// [default=0] The Y position this object is displayed on when editing the find criteria.
	HPMInt32 m_Type;												// [type=EHPMFindCriteriaType,default=EHPMFindCriteriaType_Criteria] Type of find criteria. See @{EHPMFindCriteriaType}
	HPMUInt32 m_Flags;												// [type=EHPMFindCriteriaFlag,default=EHPMFindCriteriaFlag_None] Flags for find criteria options. See @{EHPMFindCriteriaFlag}.
	const HPMChar *m_CriteriaString;								// The string that defines the criteria, e.g. Resources: "John Smith".
	const HPMFindCriteriaData *m_pCriteriaData;						// The criteria data. Use the CriteriaDataDecode_* and CriteriaDataEncode_* functions to manipulate this member.
	HPMUInt32 m_nConnectedToCriterias;								// Number of find criteria this find criteria is connected to.
	const HPMFindCriteriaConnection *m_pConnectedToCriterias;		// Pointer to a list of find criteria for this find criteria is connected to. See @{HPMFindCriteriaConnection}.
} HPMFindCriteria;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		The header for the different criteria types.								|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData},									|
|						@{HPMFindCriteriaTypeText},													|
|						@{HPMFindCriteriaTypeInteger},												|
|						@{HPMFindCriteriaTypeFloat},												|
|						@{HPMFindCriteriaTypeGeneralCondition},										|
|						@{HPMFindCriteriaTypeDate},													|
|						@{HPMFindCriteriaTypeDroplist},												|
|						@{HPMFindCriteriaTypeMultiSelectDroplist},									|
|						@{HPMFindCriteriaDataListItem}												|
|																									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaDataHeader
{
	HPMColumn m_Column;			// The column used in the find criteria.
	HPMInt32 m_Operator;		// [type=EHPMFindCriteriaOperator,default=EHPMFindCriteriaOperator_NoOperator] The operator for the find criteria. Can be one of @{EHPMFindCriteriaOperator}.
} HPMFindCriteriaDataHeader;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of a text type.								|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaDataHeader},							|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeText},							|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeText}							|											
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeText
{
	HPMFindCriteriaDataHeader m_Header;		// The find criteria data header.	
	const HPMChar *m_Text;					// The text to use for the condition.
} HPMFindCriteriaTypeText;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of an integer type.							|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData}, @{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger},						|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger}						|							
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeInteger
{
	HPMFindCriteriaDataHeader m_Header;	// The find criteria data header.	
	HPMInt64 m_Number;					// [default=0] The number to use in the condition.
	HPMInt64 m_ToNumber;				// [default=0] The number to use as the end if the condition is a range. m_Number will be used as the starting point.
} HPMFindCriteriaTypeInteger;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of a float type.								|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData}, @{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat},							|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat}							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeFloat
{
	HPMFindCriteriaDataHeader m_Header;	// The find criteria data header.	
	HPMFP64	m_Number;					// [default=0.0] The number to use in the condition.
	HPMFP64	m_ToNumber;					// [default=0.0] The number to use as the end if the condition is a range. m_Number will be used as the starting point.
} HPMFindCriteriaTypeFloat;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of a general condition type.					|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData}, @{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition},				|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition}				|											
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeGeneralCondition
{
	HPMFindCriteriaDataHeader m_Header;	 // The find criteria data header.	
} HPMFindCriteriaTypeGeneralCondition;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of a date type.								|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData}, @{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeDate},							|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeDate}							|											
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeDate
{
	HPMFindCriteriaDataHeader m_Header;	// The find criteria data header.	
	HPMUInt64 m_Date;					// [default=0] The date to use in the condition.
	HPMUInt64 m_ToDate;					// [default=0] The date to use as the end if the condition is a range. m_Date will be used as the starting point.
	HPMInt32 m_Range;					// [default=0] If @{HPMFindCriteriaDataHeader}::m_Operator is one of the operators containing a condition with X days, weeks, months or years, this will be set to the X number.
	const HPMChar *m_Text;				// If @{HPMFindCriteriaDataHeader}::m_Operator is @{EHPMFindCriteriaOperator}::_Contains this is set to the free text to use in the condition
} HPMFindCriteriaTypeDate;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is a of a droplist type							|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData}, @{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist},						|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist}						|											
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeDroplist
{
	HPMFindCriteriaDataHeader m_Header;					// The find criteria data header.	
	HPMUInt32 m_nListItems;								// The number of list items.
	const HPMFindCriteriaDataListItem *m_pListItems;	// Pointer to a list of list items for this criteria. See @{HPMFindCriteriaDataListItem}.	
} HPMFindCriteriaTypeDroplist;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used if the find criteria is of a multi select droplist type.				|
|						The items together with the													|
|						@{HPMFindCriteriaDataHeader}::m_Operator sets the condition.				|
|																									|
|	See Also:			@{HPMFindCriteria}, @{HPMFindCriteriaData},	@{HPMFindCriteriaDataHeader},	|
|						@{CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist},			|
|						@{CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist}			|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMFindCriteriaTypeMultiSelectDroplist
{
	HPMFindCriteriaDataHeader m_Header;					// The find criteria data header.	
	HPMUInt32 m_nListItems;								// The number of list items.
	const HPMFindCriteriaDataListItem *m_pListItems;	// Pointer to a list of list items for this criteria. See @{HPMFindCriteriaDataListItem}.
} HPMFindCriteriaTypeMultiSelectDroplist;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																																						|
|																																								|
|	Description:		Defines email properties in @{HPMReport}.																								|
|																																								|
|																																								|
|	Location:			Structures																																|
|																																								|
|	Index:				!name																																	|
\*_____________________________________________________________________________________________________________________________________________________________*/
typedef struct HPMReportEmailProperties
{
	HPMInt32 m_PeriodicityType;						// [type=EHPMPeriodicityType,default=EHPMPeriodicityType_Never] The periodicity of when to send project reports. Can be one of @{EHPMPeriodicityType}.
	HPMInt32 m_DayOfWeek;							// [default=0] The weekday to send the project report. 0 -> 6 = Mon -> Sunday. Only valid if @{HPMReportEmailProperties}::m_PeriodicityType is set to @{EHPMPeriodicityType}_Weekly.
	HPMInt32 m_HourOfDay;							// [default=0] The number of half hours past midnight to send project reports. 0 -> 47 (number of half hours from midnight).
	HPMResourceDefinitionList m_RecipientList;		// List of resources that will receive the email. See @{HPMResourceDefinitionList}. 
} HPMReportEmailProperties;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																																						|
|																																								|
|	Description:		Defines sorting and grouping properties in @{HPMReport}.																				|
|																																								|
|																																								|
|	Location:			Structures																																|
|																																								|
|	Index:				!name																																	|
\*_____________________________________________________________________________________________________________________________________________________________*/
typedef struct HPMReportSortGroupProperties
{
	HPMColumn m_Column;				// The column used for sorting.
	HPMInt32 m_OrderType;			// [type=EHPMReportSortGroupOrderType,default=EHPMReportSortGroupOrderType_None] The order type of the sorting or grouping. Can be one of @{EHPMReportSortGroupOrderType}.
	HPMInt32 m_bDescending;			// [default=0] Set if the report should be sorted in descending order, otherwise it will be sorted in ascending order. Not used for grouping.
} HPMReportSortGroupProperties;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a report in @{HPMReports}.									|
|																									|
|																									|
|	See Also:			@{HPMReportEmailProperties},												|
|						@{HPMResourceDefinitionList}, @{HPMReportSortGroupProperties},				|
|						@{HPMColumn}, @{HPMFindCriteria}											|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMReport
{
	HPMUniqueID m_ReportID;											// The unique identifier of this report.
	HPMUInt64 m_ReportGUID;											// [default=0] A GUID that is unique across all resources and projects. Set to zero to generate a new GUID automatically when creating a new report.
	const HPMChar *m_pName;											// The name of the report.	
	HPMUniqueID m_ProjectID;										// The project this report was created in.
	HPMUniqueID	m_ResourceID;										// Resource ID of user that created report.
	HPMUInt32 m_Flags;												// [type=EHPMReportFlag,default=EHPMReportFlag_None] Flags for different view options. See @{EHPMReportFlag}.
	HPMUInt32 m_Icon;												// [type=EHPMListIcon,default=EHPMListIcon_Default] Icon for the reports. Can be one of @{EHPMListIcon}.

	HPMUInt32 m_nColumnsShowing;									// Number of columns showing for this report.
	const HPMColumn *m_pColumnsShowing;								// Pointer to a list of columns showing for this report. See @{HPMColumn}.

	HPMReportEmailProperties m_EmailProperties;						// Email properties for this report. See @{HPMReportEmailProperties}.
	HPMResourceDefinitionList m_ShareResourceList;					// List of resources that this report is shared with. See @{HPMResourceDefinitionList}.

	HPMUInt32 m_nSortColumns;										// Number of sort columns.
	const HPMReportSortGroupProperties *m_pSortColumns;				// Pointer to a list of sort columns. See @{HPMReportSortGroupProperties}.
	HPMReportSortGroupProperties m_GroupByColumnMain;				// The main column used for grouping. The column criteria data type has to be @{EHPMFindCriteriaDataType}_List or @{EHPMFindCriteriaDataType}_ConditionalList. See @{UtilGetFindCriteriaDataTypeFromColumn}.
	HPMReportSortGroupProperties m_GroupByColumnSub;				// The sub column used for grouping. The column criteria data type has to be @{EHPMFindCriteriaDataType}_List or @{EHPMFindCriteriaDataType}_ConditionalList. See @{UtilGetFindCriteriaDataTypeFromColumn}.
	HPMUInt32 m_nFindCriterias;										// Number of find criterias for this report.
	const HPMFindCriteria *m_pFindCriterias;						// Pointer to a list of find criterias for this report. See @{HPMFindCriteria}.
} HPMReport;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the reports for a project.           						|
|																									|
|	See Also:			@{HPMReport}, @{ProjectGetReports},	@{ProjectSetReports},					|
|						@{GlobalGetReports}, @{GlobalSetReports}						        	|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMReports
{
	HPMUInt32 m_nReports;			// The number of reports for this project. 
	const HPMReport *m_pReports;	// Pointer to a list of reports for this project. See @{HPMReport}.

} HPMReports;

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
typedef struct HPMWorkflowProgressionState
{
	HPMUInt32 m_StatusID;									// [default=0] The status ID of the state.
	HPMUInt32 m_nRequiredFields;							// The number of required fields that need to be filled in to reach this state.
	const HPMTaskField *m_pRequiredFields;					// Pointer to a list of the required fields that need to be set to reach this state.
} HPMWorkflowProgressionState;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																										|
|																												|
|	Description:		Used for defining a workflow progression structure obtained from a workflow, status		|
|						and resource.																			|
|																												|
|	See Also:			@{HPMWorkflowProgressionState}, @{HPMFunctionProjectUtilGetWorkflowProgression}			|
|																												|
|	Location:			Structures																				|
|																												|
|	Index:				!name																					|
\*_____________________________________________________________________________________________________________*/
typedef struct HPMWorkflowProgressionStructure
{
	HPMUInt32 m_nProgressionStates;									// The number of reachable states the workflow progression structure.
	const HPMWorkflowProgressionState *m_pProgressionStates;		// Pointer to a list of states defining the workflow progression. See @{HPMWorkflowProgressionState}.
} HPMWorkflowProgressionStructure;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to store SDK named communication channel packets						|
|																									|
|	See Also:			@{CommunicationChannelSendPacket},											|
|						@{EHPMChangeCallbackOperation}_CommunicationChannelPacketReceived			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMCommunicationChannelPacket
{
	HPMUInt32 m_nBytes;				// The number of bytes of data to send or receive.
	const HPMUInt8 *m_pBytes;		// The data to send or receive.
	HPMUInt32 m_Flags;				// [type=EHPMPacketFlag,default=EHPMPacketFlag_None] Settings for the packet.  Can be any combination of @{EHPMPacketFlag}.
} HPMCommunicationChannelPacket;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Definition of a non project time row for timesheets.        				|
|																									|
|	See Also:			@{HPMTimesheetConfig}														|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTimesheetConfigRow
{
	HPMUInt32 m_RowID;							// [default=0] The activity identifier of the row. 
	const HPMUntranslatedString *m_pRowName;	// The name of the row.
} HPMTimesheetConfigRow;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure that holds timesheet data posts.									|
|																									|
|	See Also:			@{HPMChangeCallbackData_ResourceGetTimesheetDayResponse},					|
|						@{HPMChangeCallbackData_TimesheetGetDateRangeResponse}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTimesheetActivity
{
	HPMInt32 m_RowID;			// The row id of the activity.
	HPMInt32 m_ActivityID;		// The activity id of the activity. 
	HPMUniqueID m_ProjectID;	// The unique identifier of the project for activities in projects.
	HPMUniqueID m_TaskID;		// The unique identifier of the task task activities.
	HPMUInt32 m_Started;		// [default=0] The start time of the activity.  Expressed in seconds since midnight. The max value is 86340.
	HPMUInt32 m_Duration;		// [default=0] The duration time of the activity. Expressed in seconds. The max value is 86340.
	const HPMChar *m_Comment;	// Comment describing the activity.
} HPMTimesheetActivity;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Structure that holds timesheet data for a timesheet day.					|
|																									|
|	See Also:			@{HPMChangeCallbackData_ResourceGetTimesheetDayResponse},					|
|						@{HPMChangeCallbackData_TimesheetGetDateRangeResponse}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTimesheetDay
{
	HPMUniqueID m_DayID;						// The unique identifier of the timesheet day.
	HPMUniqueID m_ResourceID;					// The unique identifier of the resource the timesheet day data is reported for.
	HPMUInt64 m_Day;							// The day that the data is reported for. Expressed as the number of microseconds since 1970 UTC.
	HPMUInt32 m_nActivities;					// The number of timesheet activities.
	const HPMTimesheetActivity *m_pActivities;	// Pointer to a list of @{HPMTimesheetActivity} timesheet activities.
} HPMTimesheetDay;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used for enumerating unique id's in a database.								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMUniqueEnum
{
	HPMUInt32 m_nIDs;				// The number of unique id's in the array.
	const HPMUniqueID *m_pIDs;		// Pointer to a list unique database identifiers.
} HPMUniqueEnum;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to configure and customize timesheets.	           						|
|																									|
|	See Also:			@{GlobalSetTimesheetConfig}, @{GlobalGetTimesheetConfig}					|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMTimesheetConfig
{
	HPMInt32 m_DefaultActivityType;			// [default=0] The default activity type for new rows. One of the available @{HPMTimesheetConfigRow}::m_RowIDs.
	HPMUInt32 m_DefaultStarted;				// [default=28800] The default started time for new rows. Expressed in seconds since midnight. The max value is 86340.
	HPMUInt32 m_DefaultDuration;			// [default=0] The default duration time for new rows. Expressed in seconds. The max value is 86340.
	HPMInt32 m_bHideStartFinish;			// [default=0] Set to 1 to hide start and finish when reporting time.
	HPMUInt32 m_nRows;						// The number of number of rows available in non project time.
	const HPMTimesheetConfigRow *m_pRows;	// Pointer to a list of @{HPMTimesheetConfigRow} non project time rows.
} HPMTimesheetConfig;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to identify a dynamic custom settings context.							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMDynamicCustomSettingsContext
{
	HPMInt32 m_Dummy;	// Unused dummy member
} HPMDynamicCustomSettingsContext;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to identify a right click context.										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMRightClickContext
{
	HPMInt32 m_Dummy;	// Unused dummy member
} HPMRightClickContext;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define the value of a dynamic custom setting.						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDynamicCustomSettingsValue
{
	const HPMChar *m_pPath;		// The path of the value.
	const HPMChar *m_pValue;	// The value.
} HPMDynamicCustomSettingsValue;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define several dynamic custom setting values.						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDynamicCustomSettingsValues
{
	HPMInt32 m_nValues;								// The number of custom settings values.
	const HPMDynamicCustomSettingsValue *m_pValues;	// Pointer to a list of custom settings values. See @{HPMDynamicCustomSettingsValue}.
} HPMDynamicCustomSettingsValues;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define paths of dynamic custom settings.							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDynamicCustomSettingsPaths
{
	HPMInt32 m_nPaths;			// The number of custom settings value paths.
	const HPMString *m_pPaths;	// Pointer to a list of custom settings value paths. See @{HPMString}.
} HPMDynamicCustomSettingsPaths;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define and identify a chat room.									|
|																									|
|	Comments:			The two resources in the chat room identifies the chat room and is used for	|
|						routing the chat message. If the chat room is used for resource group		|
|						communication, set m_ChatResource1.m_GroupingType to						|
|						@{EHPMResourceGroupingType}_ResourceGroup and m_ChatResource1.m_ID to		|
|						the id of the resource group. m_ChatResource2 is not used for resource		|
|						group chats. 																|
|																									|
|	See Also:			@{HPMResourceDefinition}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChatRoom
{
	HPMResourceDefinition m_ChatResource1;		// Resource or resource group in the chat room. See @{HPMResourceDefinition}.
	HPMResourceDefinition m_ChatResource2;		// Resource or resource group in the chat room. See @{HPMResourceDefinition}.
} HPMChatRoom;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to store historic chat messages.										|
|																									|
|	See Also:			@{VariantDecode_HPMChatMessage}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMChatMessage
{
	HPMInt64 m_ID;				// The id of the chat message.
	const HPMChar *m_pMessage;	// The chat message. See the comments section on @{HPMTaskComment} for supported text formatting tags.
} HPMChatMessage;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to store historic chat messages.										|
|																									|
|	See Also:			@{VariantDecode_HPMChatMessage}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMLastAssignedInWorkflowStatus
{
	HPMUInt32 m_WorkflowID;
	HPMUInt32 m_WorkflowObjectID;
	HPMResourceDefinitionList m_LastAssignedList;
} HPMLastAssignedInWorkflowStatus;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to store historic chat messages.										|
|																									|
|	See Also:			@{VariantDecode_HPMChatMessage}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMLastAssignedInWorkflowStatuses
{
	HPMUInt32 m_nLastAssignedList;						// The number of resources defined.
	const HPMLastAssignedInWorkflowStatus *m_pLastAssignedList;	// Pointer to a list of resources to define. See @{HPMLastAssignedInWorkflowStatus}.
} HPMLastAssignedInWorkflowStatuses;
