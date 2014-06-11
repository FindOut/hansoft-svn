
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	File:			Hansoft Project Manager SDK Localization									|
|																								|
|	Author:			Erik Olofsson																|
|																								|
|	Copyright:		Hansoft AB, 2009															|
|																								|
|	Contents:		Hansoft Project Manager SDK													|
|																								|
|	Location:		/Hansoft PM SDK/Reference/10 - Localization									|
|																								|
|	Section:		Reference																	|
|																								|
|	History:																					|
|																								|
\*_____________________________________________________________________________________________*/


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Defines a language.															|
|																									|
|	See Also:			@{ResourceSetPreferredLanguage}, @{ResourceGetPreferredLanguage},			|
|						@{ResourceSetLastUsedLanguage}, @{ResourceGetLastUsedLanguage},				|
|						@{ResourceGetEffectiveLanguage}												|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMLanguage
{
	HPMUInt16 m_LanguageID;						// [default=0x0809] The identifier of the base language. A language ID corresponds to the locale IDs that have been assigned by Microsoft. The default language, English - United Kingdom, is e.g. 0x0809
	const HPMChar *m_pCustomLanguageID;			// The id of the custom language if the base language has been extended.
} HPMLanguage;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a list of languages.			           						|
|																									|
|	See Also:			@{HPMLanguage}, @{LocalizationGetLanguages}									|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMLanguages
{
	HPMUInt32 m_nLanguages;				// The number of languages available to this application
	const HPMLanguage *m_pLanguages;	// Pointer to a list of languages available to this application. See @{HPMLanguage}.

} HPMLanguages;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define an untranslated string.           							|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMUntranslatedStringParamListEntry
{	
	const HPMVariantData *m_pVariantData;	// A variant to specify the data. Use the VariantDecode_* and VariantEncode_* functions to manipulate this member. Valid types are HPMInt32, HPMUInt32, HPMInt64, HPMUInt64, HPMFP32, HPMFP64, HPMString, HPMUntranslatedString
} HPMUntranslatedStringParamListEntry;

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Class:																							|
|																									|
|	Description:		Used to define a number of parameters to an untranslated string.			|
|																									|
|	See Also:			@{VariantEncode_HPMInt32},													|
|																									|
|	Location:			Structures																	|
|																									|
|	Index:				!name																		|
\*_________________________________________________________________________________________________*/
typedef struct HPMUntranslatedStringParamList
{
	HPMUInt32 m_nParams;											// The number of frequency entries.
	const HPMUntranslatedStringParamListEntry *m_pParams;			// Pointer to a list of @{HPMUntranslatedStringParamListEntry} that specifies parameters for a untranslated string.
} HPMUntranslatedStringParamList;


#ifndef DHPMSdk_OnlyDefinitions


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets all the localisation languages that are available to the SDK			|
|						application.																|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguages}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationGetLanguages													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationGetLanguages)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																					const HPMLanguages **_pLanguages		// [out] Pointer to a pointer of a @{HPMLanguages} object, representing the returned data.
																				);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the name of a localisation language.									|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationGetLanguageName													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationGetLanguageName)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																				const HPMLanguage *_pLanguage,			// [in] The language to get the name of.
																				const HPMString **_pLanguageName		// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																			);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Translates an untranslated string into readable format.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}, @{HPMUntranslatedString}	|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationTranslateString													|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationTranslateString)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																						const HPMLanguage *_pLanguage,						// [in] The language to translate the string into.
																						const HPMUntranslatedString *_pUntranslatedString,	// [in] The string to translate.
																						const HPMString **_pTranslatedString				// [out] Pointer to a pointer of a @{HPMString} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Gets the default Hansoft language. Currently this is UK English.			|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMLanguage}							|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationGetDefaultLanguage												|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationGetDefaultLanguage)(	void *_pSession,				// [in] A connected session. See @{SessionOpen}.
																						const HPMLanguage **_pLanguage	// [out] Pointer to a pointer of a @{HPMLanguage} object, representing the returned data.
																					);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Puts a normal string into an untranslated string. This string cannot not be	|
|						translated into other languages later, but is the same for all languages.	|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMUntranslatedString}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationCreateUntranslatedStringFromString								|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationCreateUntranslatedStringFromString)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																										const HPMChar *_pString,							// [in] The string to put in the untranslated string.
																										const HPMUntranslatedString **_pUntranslatedString	// [out] Pointer to a pointer of a @{HPMUntranslatedString} object, representing the returned data.
																									);

/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Puts a translation identifier into an untranslated string.					|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			The returned object must be freed with @{ObjectFree} or a memory			|
|						leak will result.															|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMUntranslatedString},				|
|						@{LocalizationGetTranslationIDFromFullTranslationID}						|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationCreateUntranslatedStringFromTranslationID						|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationCreateUntranslatedStringFromTranslationID)(	void *_pSession,									// [in] A connected session. See @{SessionOpen}.
																												HPMUInt32 _TranslationID,							// [in] The translation ID to put into the untranslated string.
																												HPMUntranslatedStringParamList const *_pParams,		// [in] Specifies a number of paramaters that should be used as params to the untranslated string.
																												const HPMUntranslatedString **_pUntranslatedString	// [out] Pointer to a pointer of a @{HPMUntranslatedString} object, representing the returned data.
																											);


/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*\
|	Function:																						|
|																									|
|	Description:		Converts a full translation ID into an translation ID.						|
|																									|
|	Return Value:		Returns an error code. See @{EHPMError}.									|
|																									|
|	Comments:			A full translation ID is a string that uniquely identifies a translation	|
|						element in the translation. A translation ID is a hash of this string		|
|						that is used internally to store translation IDs.							|
|																									|
|	See Also:			@{HPMSdkFunctions}, @{ObjectFree}, @{HPMUntranslatedString}					|
|																									|
|	Location:			Function Pointers															|
|																									|
|	Index:				!name																		|
|						LocalizationGetTranslationIDFromFullTranslationID							|
\*_________________________________________________________________________________________________*/
typedef HPMError (DHPMSdkCallingConvention *HPMFunctionLocalizationGetTranslationIDFromFullTranslationID)(	void *_pSession,						// [in] A connected session. See @{SessionOpen}.
																											const HPMChar *_pFullTranslationID,		// [in] The string identifying the full translation ID.
																											HPMUInt32 *_pTranslationID				// [out] Pointer to a variable representing the returned data.
																										);

#endif

