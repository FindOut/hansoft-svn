
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Authentication									|
|																								|
|	Author:			Haraldur Thorvaldsson														|
|																								|
|	Copyright:		Hansoft AB, 2009															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/9 - Authentication								|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|																								|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Global static parameters for SDK authentication framework.					|
|																									|
|	See Also:			@{AuthenticationClientPluginRegister}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMAuthenticationGlobalParameters
{
	EHPMAuthenticationGlobalParameters_MinimumSessionKeyBits = 128,		// The minimum length of session keys that custom authentication methods may generate.
	EHPMAuthenticationGlobalParameters_MaximumSessionKeyBits = 16384,	// The maximum length of session keys that custom authentication methods may generate.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{AuthenticationClientProtocolEnded} to specify						|
|						the properties of a custom authentication method.							|
|																									|
|	See Also:			@{AuthenticationClientProtocolEnded},										|
|						@{AuthenticationClientPluginRegister}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMAuthenticationPropertiesFlag
{
	EHPMAuthenticationPropertiesFlag_None = 0,
	EHPMAuthenticationPropertiesFlag_AllowUserNameSave = 1 << 0,		// If successful, allow the user name just authenticated to be saved in the local registry?
	EHPMAuthenticationPropertiesFlag_AllowActiveDirectory = 1 << 1,		// Allow AD client side plugin features
	EHPMAuthenticationPropertiesFlag_AllowLDAP = 1 << 2,				// Allow direct authentication with the client side plugin sending the auth integration the username & password.
};


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Enum:																							|
|																									|
|	Description:		Used in @{HPMAuthenticationLoginNameEntry}::m_Flags to specify				|
|						how a particular user login name should be displayed and handed.			|
|																									|
|	See Also:			@{HPMAuthenticationLoginNameEntry},											|
|						@{AuthenticationClientPluginRegister}										|
|																									|
|	Location:			Enumerations																|
|																									|
|	Index:				!name																		|
|						!enums																		|
\*_________________________________________________________________________________________________*/
enum EHPMAuthenticationLoginNameFlag
{
	EHPMAuthenticationLoginNameFlag_None = 0,
	EHPMAuthenticationLoginNameFlag_CanLoginWithoutPassword = 1 << 0,	// This user is currently logged on, that is: authenticated credentials already exist for this user account and no password is needed.
};

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		User login information used in @{AuthenticationClientPluginRegister}.		|
|																									|
|	See Also:			TBD																			|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMAuthenticationLoginNameEntry
{
	const HPMChar *m_pDisplayName;			// The name to show to the user, which the authentication method can use to uniquely identify a user.
	HPMUInt32 m_NameFlags;					// [type=EHPMAuthenticationLoginNameFlag,default=EHPMAuthenticationLoginNameFlag_None] Any combination of @{EHPMAuthenticationLoginNameFlag}.
} HPMAuthenticationLoginNameEntry;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		User login information used in												|
|						@{AuthenticationClientPluginRegister}.										|
|																									|
|	See Also:			@{AuthenticationClientPluginRegister}										|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMAuthenticationClientPluginProperties
{
	const HPMChar *m_pName;											// The human-readable name of the authentication method
	HPMUInt32 m_nLoginNames;										// The number of user login names.
	const HPMAuthenticationLoginNameEntry *m_pLoginNames;			// Pointer to a list of @{HPMAuthenticationLoginNameEntry} that specify login names to display
	const HPMUntranslatedString *m_pNoPasswordText;					// Descriptive text to show for login names that do not require a password (optional).
} HPMAuthenticationClientPluginProperties;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Session key information used in	@{AuthenticationClientProtocolEnded} and	|
|						@{AuthenticationIntegrationProtocolEnded}.									|
|																									|
|	Comments:			Session keys must be between												|
|                       @{EHPMAuthenticationGlobalParameters}_MinimumSessionKeyBits and  			|
|						@{EHPMAuthenticationGlobalParameters}_MaximumSessionKeyBits bits in length. |
|																									|
|	See Also:			@{AuthenticationClientPluginRegister},										|
|						@{HPMFunctionAuthenticationClientProtocolEnded},							|
|						@{HPMFunctionAuthenticationIntegrationProtocolEnded}						|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMAuthenticationSessionKey
{
	HPMUInt32 m_nBytes;					// The number of bytes in the session key, or 0 for no key
	const HPMUInt8 *m_pBytes;			// The bytes of the session key.
} HPMAuthenticationSessionKey;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Error description information used in										|
|						@{HPMFunctionAuthenticationClientProtocolEnded}.								|
|																									|
|	See Also:			@{HPMFunctionAuthenticationClientProtocolEnded}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMAuthenticationErrorDescription
{
	const HPMUntranslatedString* m_pOrigin;		// The origin or source of the error.
	const HPMUntranslatedString *m_pErrorText;	// A textural description of the error.
} HPMAuthenticationErrorDescription;


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Error description information used in										|
|						@{HPMFunctionAuthenticationClientProtocolEnded}.								|
|																									|
|	See Also:			@{HPMFunctionAuthenticationClientProtocolEnded}								|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMAuthenticationErrorDescriptions
{
	HPMUInt32 m_nDescriptions;									// The number of descriptions available.
	const HPMAuthenticationErrorDescription *m_pDescriptions;	// The error descriptions.
} HPMAuthenticationErrorDescriptions;


#ifndef DHPMSdk_OnlyDefinitions

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Registers a client Plugin as an authentication Plugin.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			An Authentication Client PlugIn calls this function to notify its SDK		|
|						Session that it provides Authentication Services, typically just after		|
|						opening the session. The Plugin may later receive							|
|						@{EHPMChangeCallbackOperation}_AuthenticationProtocolBegin callbacks,		|
|						signaling it to start its authentication protocol.							|
|																									|
|						Note that if another Client PlugIn has already registered using the			|
|						same channel, this registration will fail.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{AuthenticationClientPluginUnregister}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationClientPluginRegister											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationClientPluginRegister)(	void *_pSession,													// [in] A connected session. See @{SessionOpen}.
																							const HPMChar *_pChannelName,										// [in] Identifier of the Channel the Plugin uses for authentication communication.
																							const HPMAuthenticationClientPluginProperties *_pMethodProperties	// [in] Authentication method properties.
																						);
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Unregisters a previously registered client authentication Plugin.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{AuthenticationClientPluginRegister}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationClientPluginUnregister										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationClientPluginUnregister)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																								const HPMChar *_pChannelName	// [in] Identifier of the Channel the Plugin uses for authentication communication.
																							);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Notifies that an previously started authentication protocol instance has	|
|						terminated.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only client-side custom authentication Plugins may call this function,		|
|						authentication integration SDK client use the								|
|						@{AuthenticationIntegrationProtocolEnded} function instead.					|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{AuthenticationClientPluginRegister},					|
|						@{AuthenticationIntegrationProtocolEnded}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationClientProtocolEnded											|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationClientProtocolEnded)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																							const HPMChar *_pChannelName,						// [in] The Channel name identifying the Plugin whose protocol has terminated.
																							HPMUInt64 _SessionID,								// [in] If the protocol terminated successfully: the Session ID of the Authentication Integration Client the PlugIn interacted with to complete the protocol.
																							const HPMAuthenticationSessionKey *_pSessionKey,	// [in] If the protocol terminated successfully: the key that should be used to encrypt communication with the server from now on. If the protocol was unsuccessful: an empty key or NULL pointer.
																							const HPMChar *_pUserName,							// [in] If the protocol terminated successfully: the user name of the Hansoft user account that was successfully authenticated.
																							const HPMAuthenticationErrorDescriptions *_pErrorDescriptions,	// [in] If the protocol was unsuccessful: A structure containing an array of error descriptions that will be displayed to the user.
																							HPMUInt32 _Flags									// [in,type=EHPMAuthenticationPropertiesFlag] Any combination of @{EHPMAuthenticationPropertiesFlag}.
																						);



/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Notifies that an authentication protocol with a remote client				|
|						authentication protocol has terminated.
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			Only authentication	integration SDK clients may call this function,			|
|						client-side authentication Plugins use the									|
|						@{AuthenticationClientProtocolEnded} function instead.						|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{CommunicationChannelRegister}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationIntegrationProtocolEnded										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationIntegrationProtocolEnded)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																								const HPMChar *_pChannelName,						// [in] The Channel name used by the protocol that has terminated. The session must have registered this channel.
																								const HPMAuthenticationSessionKey *_pSessionKey,	// [in] If the protocol terminated successfully: the key that should be used to encrypt communication with the server from now on. If the protocol was unsuccessful: an empty key or NULL pointer.
																								HPMUniqueID _UserID,								// [in] If the protocol terminated successfully: the User (resource) ID of the Hansoft user account that was successfully authenticated.
																								HPMUInt64 _SessionID								// [in] The Session ID of the Authentication PlugIn the Authentication Integration interacted with to complete the protocol.
																						);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Determines the Hansoft user account associated with user credentials,		|
|						if the credentials are valid. The caller passes in a list containing the	|
|                       Session IDs of the SDK client sessions and servers to which the request 	|
|						should be forwarded. If any of them succeed, the User's User ID is returned.|
|						If the user is a guest user through a share then its local/guest User ID is |
|						returned.																	|
|																									|
|						Session IDs are obtained via @{CommunicationChannelEnum}. Only 				|
|						Session IDs of channels with the 											|
|						@{EHPMChannelFlag}_SupportsResolveCredentials flag set may be used. 		|
|						If any of the sessions passed in are invalid, the call fails.	 			|
|																									|
|						If you specify a non-NULL pointer to the _pResult parameter this function	|
|						will block and the result of the operation will be returned. The returned	|
|						result must be freed with @{ObjectFree} or a memory leak will result.		|
|																									|
|						If you specify a NULL pointer to the _pResult parameter this function		|
|						will not block and when the operation is finished you will receive a		|
|						@{EHPMChangeCallbackOperation}_AuthenticationResolveCredentialsResponse 	|
|						callback.																	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{CommunicationChannelEnum},							|
|						@{AuthenticationResolveCredentialsEnded}									|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationResolveCredentials											|
|																									|
|	Managed:			CanBlock																	|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationResolveCredentials)(	void *_pSession,																	// [in] A connected session. See @{SessionOpen}.
																							const HPMChar *_pUserName,															// [in] The user name to check.
																							const HPMChar *_pPassword,															// [in] The password to check.
																							const HPMCredentialResolutionSessionIDsEnum *_pSessionIDs,							// [in] The session(s) that should perform the check
																							const HPMChangeCallbackData_AuthenticationResolveCredentialsResponse **_pResult		// [out] Pointer to a pointer of a @{HPMChangeCallbackData_AuthenticationResolveCredentialsResponse} object specifying the result of this operation. See comments section.
																							);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Called by a custom authentication integration client to notify that 		|
|						credentials resolution processing has terminated.							|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	See Also:			@{HPMSdkFunctions},															|
|						@{EHPMChangeCallbackOperation}_AuthenticationResolveCredentials				|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						AuthenticationResolveCredentialsEnded										|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionAuthenticationResolveCredentialsEnded)(	void *_pSession,							// [in] A connected session. See @{SessionOpen}.
																								HPMUInt64 _FromSessionID,					// [in] The identifier of the SDK session that requested the credentials resolution.
																								const HPMChar *_pUserName,					// [in] The user name that was checked.
																								HPMUniqueID _UserID,						// [in] If the credentials were successfully validated: the User (resource) ID of the credential's Hansoft user account. Otherwise, zero (0). 
																								const HPMChar *_pErrorMessage				// [in] If the credentials were not validated: an explanation of the failure or NULL.
																							);



#endif


