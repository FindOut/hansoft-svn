
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Global											|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2006															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/7 - Global										|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|		070716:		Added file descriptor														|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define settings for global statistics.								|
|																									|
|	See Also:			@{GlobalGetStatisticsSettings},												|
|						@{GlobalSetStatisticsSettings}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMGlobalStatisticsSettings
{
	HPMUInt32 m_SamplingFrequency;					// [default=86400] The number of seconds between samplings of global statistics.
	HPMUInt32 m_SecondOfDaySample;					// [default=0] The number of seconds past midnight that sampling of global statistics should start.
	HPMUInt32 m_SamplingFrequencyResource;			// [default=86400] The number of seconds between samplings of global statistics for a resources.
	HPMUInt32 m_SecondOfDaySampleResource;			// [default=0] The number of seconds past midnight that sampling of global statistics for resources should start.
	HPMUInt32 m_SamplingFrequencyResourceGroup;		// [default=86400] The number of seconds between samplings of global statistics for a resource groups.
	HPMUInt32 m_SecondOfDaySampleResourceGroup;		// [default=0] The number of seconds past midnight that sampling of global statistics for resource groups should start.
} HPMGlobalStatisticsSettings;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define global email settings.										|
|																									|
|	See Also:			@{GlobalSetEmailSettings}, @{ProjectGetEmailSettings}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMGlobalEmailSettings
{
	const HPMChar *m_pServer;			// Outgoing SMTP server name.
	HPMInt32 m_Port;					// [default=25] Outgoing SMTP server port.
	const HPMChar *m_pName;				// Name appearing on sent email.
	const HPMChar *m_pEmail;			// Email address appearing on sent email.
	HPMInt32 m_bAuthentication;			// [default=0] If 1 the SMTP server used for outgoing email requires authentication, 0 otherwise.
	const HPMChar *m_pUserName;			// The username used for SMTP authentication.
	const HPMChar *m_pUserPassword;		// The user password used for authentication.
	HPMInt32 m_SecurityProtocol;		// [type=EHPMEmailSecurityProtocol,default=EHPMEmailSecurityProtocol_None] The security protocol used for authentication. See @{EHPMEmailSecurityProtocol}.
} HPMGlobalEmailSettings;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define GUIDs for a database.										|
|																									|
|	See Also:			@{GlobalGetDatabaseGUIDs}													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMDatabaseGUIDs
{
	const HPMChar *m_pGUID;		// The full GUID for the database.
	HPMUInt64 m_ID64;			// [default=0] A 64 bit integer derived from the full GUID. Not guaranteed to be unique, but extremely unlikely not to be.
	HPMUInt32 m_ID32;			// [default=0] A 32 bit integer derived from the full GUID. Not guaranteed to be unique, but highly unlikely not to be.
} HPMDatabaseGUIDs;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to keep a subscription notifications									|
|																									|
|	See Also:			@{GlobalRegisterForDynamicCustomSettingsNotifications},						|
|						@{GlobalRegisterForRightClickNotifications}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
|																									|
|	Managed:			SaveOriginalRet																|
\*_________________________________________________________________________________________________*/
typedef struct HPMNotificationSubscription
{
	HPMInt32 m_Dummy;	// Unused dummy member
} HPMNotificationSubscription;


#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets statistics settings for global statistics.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMGlobalStatisticsSettings}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetStatisticsSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetStatisticsSettings)(	void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																						const HPMGlobalStatisticsSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMGlobalStatisticsSettings} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets statistics settings for global statistics.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMGlobalStatisticsSettings}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetStatisticsSettings													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetStatisticsSettings)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						const HPMGlobalStatisticsSettings *_pSettings		// [in] The statistics settings to set on the project. See @{HPMGlobalStatisticsSettings}.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers custom settings for an integration.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The settings are registered with a string containing a registry describing	|
|						different settings to be customized. For documentation of the format		|
|						see the CustomSettings sample.												|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{GlobalUnregisterCustomSettings},						|
|						@{GlobalGetRegisteredCustomSettings}										|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalRegisterCustomSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalRegisterCustomSettings)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pIdentifier,	// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pData			// [in] The registry describing the custom settings. See the CustomSettings sample for syntax description.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unregisteres custom settings for an integration.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			When custom settings for an integration are unregistered all settings		|
|						values saved for the integration identifier are deleted as well.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree},	@{GlobalRegisterCustomSettings}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalUnregisterCustomSettings												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalUnregisterCustomSettings)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pIdentifier	// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the registered custom settings for an integration.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						The settings are registered with a string containing a registry describing	|
|						different settings to be customized. For documentation of the format		|
|						see the CustomSettings sample.												|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString},							|
|						@{GlobalRegisterCustomSettings}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetRegisteredCustomSettings											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetRegisteredCustomSettings)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pIdentifier,	// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMString **_pData		// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Returns the identifier hash for a custom settings integration identifier.	|
|						This identifier can be used to match identifier hashes in the change		|
|						callbacks.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{GlobalRegisterCustomSettings},						|
|						@{HPMChangeCallbackData_GlobalCustomSettingsChange},						|
|						@{HPMChangeCallbackData_GlobalCustomSettingsUnregister},					|
|						@{HPMChangeCallbackData_GlobalCustomSettingsValueChange},					|
|						@{HPMChangeCallbackData_ProjectCustomSettingsValueChange},					|
|						@{HPMChangeCallbackData_ResourceCustomSettingsValueChange},					|
|						@{HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange}			|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetCustomSettingsIdentifierHash										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetCustomSettingsIdentifierHash)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																								const HPMChar *_pIdentifier,	// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																								HPMUInt32 *_pReturn				// [out] The identifier hash.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the value of a global custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{GlobalRegisterCustomSettings}, @{GlobalSetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently only EHPMCustomSettingsType_Admin is valid for this function.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue **_pData	// [out] Pointer to a pointer of a @{HPMCustomSettingValue} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a global custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{GlobalRegisterCustomSettings}, @{GlobalGetCustomSettingsValue},			|
|						@{EHPMCustomSettingsType}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetCustomSettingsValue												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetCustomSettingsValue)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																						HPMInt32 _SettingType,					// [in,type=EHPMCustomSettingsType] The type of the setting. Can be one of @{EHPMCustomSettingsType}. Currently only EHPMCustomSettingsType_Admin is valid for this function.
																						const HPMChar *_pIdentifier,			// [in] The identifier of the integration. This value is used to isolate the custom settings of different integrations.
																						const HPMChar *_pSettingPath,			// [in] The setting path to get the setting for.
																						const HPMCustomSettingValue *_pData		// [in] The custom settings value to set. If set to NULL the value will be set to its default value. See @{HPMCustomSettingValue}.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers custom settings notifications for an integration.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only a client DLL plugin can register for custom settings notifications.	|
|																									|
|						When a value changes in the custom settings GUI a							|
|						@{HPMChangeCallbackData_DynamicCustomSettingsValueChanged}					|
|						will be sent asynchronously.												|
|																									|
|						The notification subscription is only valid as long as the received			|
|						@{HPMNotificationSubscription} stays in allocated memory.					|
|																									|
|						The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{GlobalRegisterCustomSettings},						|
|						@{HPMChangeCallbackData_DynamicCustomSettingsValueChanged}.					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalRegisterForDynamicCustomSettingsNotifications							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalRegisterForDynamicCustomSettingsNotifications)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																												const HPMChar *_pPathPrefix,						// [in] The prefix of the path that you are interested in notifications from
																												HPMUserContext _UserContext,						// [in]	The user context that will be sent along with any notifications received
																												const HPMNotificationSubscription **_pSubscription	// [out] Pointer to a pointer of a @{HPMNotificationSubscription} object, representing the held subscription. To stop subscribing to the notificatinos, free the returned object.
																											);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Adds a right click menu item to a selection right click menu for			|
|						the	main schedule, backlog, QA and My Work sections or to the workflow		|
|						steps in the workflow editor depending on the @{HPMRightClickContext}.		|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only a client DLL plugin can add right click items.							|
|																									|
|						The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalAddRightClickMenuItem													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalAddRightClickMenuItem)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						HPMRightClickContext const *_pRightClickContext,	// [in] The right click menu context.
																						HPMChar const *_pParentUniqueName,					// [in] The unique name of the parent menu item where this item should be added under.
																						HPMChar const *_pUniqueName,						// [in] The unique name of this right click menu item.
																						HPMUntranslatedString const *_pItemName,			// [in] The display name for this menu item.
																						HPMUserContext _UserContext							// [in] The user context sent to @{HPMChangeCallbackData_RightClickMenuItemSelected}
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers right click notifications for an integration.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only a client DLL plugin can register for right click notifications.		|
|																									|
|						On right click a															|
|						@{HPMChangeCallbackData_RightClickDisplayTaskMenu} or a						|
|						@{HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu} will be sent		|
|						depending on the context. A new menu item can then be added with			|
|						@{GlobalAddRightClickMenuItem}.												|
|																									|
|						When a menu item is selected a												|
|						@{HPMChangeCallbackData_RightClickMenuItemSelected}	notification will		|
|						be sent asynchronously.														|
|																									|
|						The notification subscription is only valid as long as the received			|
|						@{HPMNotificationSubscription} stays in allocated memory.					|
|																									|
|						The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{HPMChangeCallbackData_RightClickMenuItemSelected},						|
|						@{HPMChangeCallbackData_RightClickDisplayTaskMenu},							|
|						@{HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu},					|
|						@{GlobalAddRightClickMenuItem}												|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalRegisterForRightClickNotifications									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalRegisterForRightClickNotifications)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																									HPMUserContext _UserContext,						// [in]	The user context that will be sent along with any notifications received
																									const HPMNotificationSubscription **_pSubscription	// [out] Pointer to a pointer of a @{HPMNotificationSubscription} object, representing the held subscription. To stop subscribing to the notificatinos, free the returned object.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Displays a custom settings dialog.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only a client DLL plugin can display a custom settings dialog.				|
|																									|
|						The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalDisplayCustomSettingsDialog											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalDisplayCustomSettingsDialog)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																							HPMUniqueID _ProjectID,			// [in] The project that this dialog should be displayed for. Can be unset.
																							HPMUniqueID _ResourceID,		// [in] The resource this dialog should be displayed for. Can be unset.
																							HPMChar const *_pDialogSpec,	// [in] The format of the settings are in the same format as for @{GlobalRegisterCustomSettings}.
																							HPMChar const *_pInitialValues	// [in] The initial values for the settings.
																						);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Cancels a custom settings dialog.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only a client DLL plugin can display a custom settings dialog.				|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{GlobalDisplayCustomSettingsDialog},										|
|						@{HPMChangeCallbackData_DynamicCustomSettingsNotification}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalCancelCustomSettingsDialog											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalCancelCustomSettingsDialog)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																							HPMDynamicCustomSettingsContext const *_pDynamicContext		// [in] The dynamic context of the dialog to close
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers custom task status notifications for an integration.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only a client DLL plugin can register for custom task status notifications.	|
|																									|
|						The notification subscription is only valid as long as the received			|
|						@{HPMNotificationSubscription} stays in allocated memory.					|
|																									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalRegisterForCustomTaskStatusNotifications								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalRegisterForCustomTaskStatusNotifications)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																										const HPMChar *_pPathPrefix,						// [in] The prefix of the path that you are interested in notifications from
																										HPMUserContext _UserContext,						// [in]	The user context that will be sent along with any notifications received
																										const HPMNotificationSubscription **_pSubscription	// [out] Pointer to a pointer of a @{HPMNotificationSubscription} object, representing the held subscription. To stop subscribing to the notificatinos, free the returned object.
																										);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Displays a custom task status dialog.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						Only a client DLL plugin can display a custom task status dialog.			|
|																									|
|						The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalDisplayCustomTaskStatusDialog											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalDisplayCustomTaskStatusDialog)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							HPMCustomTaskStatusDialogValues const *_pDialogValues,	// [in] Dialog values.
																							HPMInt32 _bAddToDoTasks,								// [in] If set all tasks from the currently logged in user's To Do list will be added to the dialog. Only tasks from projects that are not in the _pProjects will be added
																							HPMProjectEnum const *_pProjects							// [in] List of allowed projects in the dialog, i.e. To Do tasks from other projects will not be added to dialog. If empty all To Do tasks will be added.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Cancels a custom task status dialog.										|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only a client DLL plugin can display a custom task status dialog.			|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{GlobalDisplayCustomTaskStatusDialog},										|
|						@{HPMChangeCallbackData_CustomTaskStatusNotification}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalCancelCustomTaskStatusDialog											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalCancelCustomTaskStatusDialog)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																							HPMDynamicCustomSettingsContext const *_pDynamicContext		// [in] The dynamic context of the dialog to close
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Add tasks to a custom task status dialog.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only a client DLL plugin can display a custom task status dialog.			|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{GlobalDisplayCustomTaskStatusDialog},										|
|						@{HPMChangeCallbackData_CustomTaskStatusNotification}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalAddTasksCustomTaskStatusDialog										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalAddTasksCustomTaskStatusDialog)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																								HPMDynamicCustomSettingsContext const *_pDynamicContext,	// [in] The dynamic context of the dialog to close
																								HPMTaskEnum const *_pTasks									// [in] The  list of task ids to add to the dialog.
																							);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Requests the dynamic value of a custom setting.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Requests the dynamic value of a custom setting. This value will be returned	|
|						asynchronously through														|
|						@{HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse}			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|						@{HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse},		|
|						@{HPMChangeCallbackData_DynamicCustomSettingsNotification}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalRequestDynamicCustomSettingsValues									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalRequestDynamicCustomSettingsValues)(	void *_pSession,											// [in] A connected session. See @{SessionOpen}.
																									HPMDynamicCustomSettingsContext const *_pDynamicContext,	// [in] The dynamic custom settings context obtained through @{HPMChangeCallbackData_DynamicCustomSettingsNotification}::m_pDynamicContext or @{HPMChangeCallbackData_DynamicCustomSettingsValueChanged}::m_pDynamicContext.
																									HPMUserContext _UserContext,								// [in]	The user context that will be sent along with any notifications received.
																									const HPMDynamicCustomSettingsPaths *_pSettingPaths			// [in] The paths to request custom settings for.
																								);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a global custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The ClientPluginCpp sample contains a demo of the functionality.			|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMCustomSettingValue},				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetDynamicCustomSettingsValues										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetDynamicCustomSettingsValues)(	void *_pSession,												// [in] A connected session. See @{SessionOpen}.
																								HPMDynamicCustomSettingsContext const *_pDynamicContext,		// [in] The dynamic custom settings context obtained through @{HPMChangeCallbackData_DynamicCustomSettingsNotification}::m_pDynamicContext or @{HPMChangeCallbackData_DynamicCustomSettingsValueChanged}::m_pDynamicContext.
																								const HPMDynamicCustomSettingsValues *_pData					// [in] The custom settings values to set.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Returns the identifier hash for a SDK internal data identifier.				|
|						This identifier can be used to match identifier hashes in the change		|
|						callbacks.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{HPMChangeCallbackData_GlobalSDKInternalDataChange},						|
|						@{HPMChangeCallbackData_ProjectSDKInternalDataChange},						|
|						@{HPMChangeCallbackData_ResourceSDKInternalDataChange},						|
|						@{HPMChangeCallbackData_ProjectResourceSDKInternalDataChange},				|
|						@{HPMChangeCallbackData_TaskSDKInternalDataChange},							|
|						@{HPMChangeCallbackData_TaskRefSDKInternalDataChange},						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetSDKInternalDataIdentifierHash										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetSDKInternalDataIdentifierHash)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																									const HPMChar *_pIdentifier,	// [in] The identifier of the SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																									HPMUInt32 *_pReturn				// [out] The identifier hash.
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets global SDK internal data.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{GlobalSetSDKInternalData}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData **_pData		// [out] Pointer to a pointer of a @{HPMCustomSettingValue} object, representing the returned data.
																				);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the value of a global custom setting.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMSDKInternalData},					|
|						@{GlobalGetSDKInternalData}													|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetSDKInternalData													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetSDKInternalData)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMChar *_pIdentifier,			// [in] The identifier of SDK internal data. This value is used to isolate the SDK internal data of different integrations.
																					const HPMSDKInternalData *_pData		// [in] The SDK internal data to set. See @{HPMSDKInternalData}.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the server internet name.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|						The server internet name is used to generate URLs that point to the server.	|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMString}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetServerInternetName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetServerInternetName)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						const HPMString **_pData	// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																					);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the server internet name.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The server internet name is used to generate URLs that point to the server.	|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetServerInternetName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetServerInternetName)(	void *_pSession,			// [in] A connected session. See @{SessionOpen}.
																						const HPMChar *_pData		// [in] The internet name to set for the server.
																					);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the GUIDs for the database. Useful to uniquely identify a database in	|
|						i.e. integrations.															|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMDatabaseGUIDs}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetDatabaseGUIDs														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetDatabaseGUIDs)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																				const HPMDatabaseGUIDs **_pData		// [out] Pointer to a pointer of a @{HPMDatabaseGUIDs} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Removes all workflows in all projects that have been deleted.				|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}											|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalWorkflowsRemoveDeleted												|
|																									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalWorkflowsRemoveDeleted)(	void *_pSession						// [in] A connected session. See @{SessionOpen}.
																					 );

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets global report for report id.									        |
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMReport}							    |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetReport																|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetReport)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ResourceID,				// [in] The unique identifier of the resource that created the report to get.
																			HPMUniqueID _ReportID,					// [in] The unique identifier of the report to get.
																			const HPMReport **_pReport				// [out] Pointer to a pointer of a @{HPMReport} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets global reports.												        |
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMReports}						    |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetReports															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetReports)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ResourceID,				// [in] The unique identifier of the resource to get reports for.
																			const HPMReports **_pSettings			// [out] Pointer to a pointer of a @{HPMReports} object, representing the returned data.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets global reports.														|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Changes made in submitted reports will not show up in the Hansoft client	|
|						for users that are logged in. This will be fixed in a later release.		|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMReports}								            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetReports															|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetReports)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																			HPMUniqueID _ResourceID,			// [in] The unique identifier of the resource to set reports for.	
																			const HPMReports *_pSettings		// [in] The reports to set on the resource. See @{HPMReports}.
																		);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the document attachment file size limit.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}												            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetDocumentAttachmentLimit											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetDocumentAttachmentLimit)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																							HPMInt64 _SizeLimitInBytes			// [in] The size limit in bytes.	
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the document attachment file size limit.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}												            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetDocumentAttachmentLimit											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetDocumentAttachmentLimit)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																							HPMInt64 *_pSizeLimitInBytes		// [out] The size limit in bytes.	
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the maximum height and width (in pixels) of thumbnails for images		|
|						in comments. 							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}															|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetCommentThumbnailDimensionInPixels									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetCommentThumbnailDimensionInPixels)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																									HPMInt32 _MaxPixel					// [in] Max height and width of pixels. Zero means no thumbnails are generated	
																								);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the comment images thumbnail max size.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}												            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetCommentThumbnailDimensionInPixels									|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetCommentThumbnailDimensionInPixels)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																									HPMInt32 *_pMaxPixel				// [out] Max height and width of pixels.	
																									);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the last chat message id in a chat room.								|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMChatRoom}								            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetChatMessageLastID													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetChatMessageLastID)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					HPMChatRoom const *_pChatRoom,		// [in] The chat room identifier to get last chat id for. See @{HPMChatRoom}.
																					HPMInt64 *_pMessageID				// [out] The last message id in the chat room.	
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the timesheet configuration.											|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}												            |
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetTimesheetConfig													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetTimesheetConfig)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					const HPMTimesheetConfig *_pData	// [in] The timesheet configuration to set. See @{HPMTimesheetConfig}.	
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the timesheet configuration.											|
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
|						GlobalGetTimesheetConfig													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetTimesheetConfig)(	void *_pSession,					// [in] A connected session. See @{SessionOpen}.
																					const HPMTimesheetConfig **_pData	// [out] Pointer to a pointer of a @{HPMTimesheetConfig} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the global email settings.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMGlobalEmailSettings}				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalGetEmailSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalGetEmailSettings)(void *_pSession,								// [in] A connected session. See @{SessionOpen}.
																			const HPMGlobalEmailSettings **_pSettings	// [out] Pointer to a pointer of a @{HPMGlobalEmailSettings} object, representing the returned data.
																			);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Sets the global email settings.												|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{HPMGlobalEmailSettings}								|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						GlobalSetEmailSettings														|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionGlobalSetEmailSettings)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																				const HPMGlobalEmailSettings *_pSettings		// [in] The global email settings. See @{HPMGlobalEmailSettings}.
																				);

#endif
