#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLanguages LocalizationGetLanguages()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMLanguages *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationGetLanguages(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLanguages Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLanguages&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString LocalizationGetLanguageName(HPMLanguage const &_Language)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMLanguage Language;
	NInternal::CppConvert(_Language, Language, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationGetLanguageName(m_pSession, &Language, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString LocalizationTranslateString(HPMLanguage const &_Language, HPMUntranslatedString const &_UntranslatedString)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMLanguage Language;
	NInternal::CppConvert(_Language, Language, CppData);
	const NInternal_C::HPMUntranslatedString *UntranslatedString = _UntranslatedString.GetOriginalObject();
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationTranslateString(m_pSession, &Language, UntranslatedString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLanguage LocalizationGetDefaultLanguage()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMLanguage *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationGetDefaultLanguage(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLanguage Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLanguage&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUntranslatedString LocalizationCreateUntranslatedStringFromString(HPMString const &_String)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString String;
	NInternal::CppConvert(_String, String, CppData);
	const NInternal_C::HPMUntranslatedString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationCreateUntranslatedStringFromString(m_pSession, String.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMUntranslatedString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUntranslatedString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUntranslatedString LocalizationCreateUntranslatedStringFromTranslationID(HPMUInt32 _TranslationID, HPMUntranslatedStringParamList const &_Params)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt32 TranslationID;
	NInternal::CppConvert(_TranslationID, TranslationID, CppData);
	NInternal_C::HPMUntranslatedStringParamList Params;
	NInternal::CppConvert(_Params, Params, CppData);
	const NInternal_C::HPMUntranslatedString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.LocalizationCreateUntranslatedStringFromTranslationID(m_pSession, TranslationID, &Params, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMUntranslatedString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUntranslatedString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 LocalizationGetTranslationIDFromFullTranslationID(HPMString const &_FullTranslationID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString FullTranslationID;
	NInternal::CppConvert(_FullTranslationID, FullTranslationID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.LocalizationGetTranslationIDFromFullTranslationID(m_pSession, FullTranslationID.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ResourceCreate(HPMResourceProperties const &_ResourceProperties, HPMString const &_Password, bool _bSetFlags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMResourceProperties ResourceProperties;
	NInternal::CppConvert(_ResourceProperties, ResourceProperties, CppData);
	NInternal_C::HPMString Password;
	NInternal::CppConvert(_Password, Password, CppData);
	NInternal_C::HPMInt32 bSetFlags;
	NInternal::CppConvert(_bSetFlags, bSetFlags, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ResourceCreate(m_pSession, &ResourceProperties, Password.m_pString, bSetFlags, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceDelete(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	HPMError Error = m_SDKFunctions.ResourceDelete(m_pSession, ResourceID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceEnum ResourceEnum()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMResourceEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceEnum(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceImpersonate(HPMUniqueID const &_ResourceIDToImpersonate, EHPMDataHistoryClientOrigin _ClientOrigin, HPMUntranslatedString const &_CustomClientOrigin)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceIDToImpersonate;
	NInternal::CppConvert(_ResourceIDToImpersonate, ResourceIDToImpersonate, CppData);
	NInternal_C::HPMInt32 ClientOrigin;
	NInternal::CppConvert(_ClientOrigin, ClientOrigin, CppData);
	const NInternal_C::HPMUntranslatedString *CustomClientOrigin = _CustomClientOrigin.GetOriginalObject();
	HPMError Error = m_SDKFunctions.ResourceImpersonate(m_pSession, ResourceIDToImpersonate, ClientOrigin, CustomClientOrigin);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceProperties ResourceGetProperties(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMResourceProperties *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetProperties(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceProperties Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceProperties&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetProperties(HPMUniqueID const &_ResourceID, HPMResourceProperties const &_ResourceProperties, HPMString const &_NewPassword)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMResourceProperties ResourceProperties;
	NInternal::CppConvert(_ResourceProperties, ResourceProperties, CppData);
	NInternal_C::HPMString NewPassword;
	NInternal::CppConvert(_NewPassword, NewPassword, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetProperties(m_pSession, ResourceID, &ResourceProperties, NewPassword.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceGlobalSettings ResourceGetGlobalSettings(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMResourceGlobalSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetGlobalSettings(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceGlobalSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceGlobalSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetGlobalSettings(HPMUniqueID const &_ResourceID, HPMResourceGlobalSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMResourceGlobalSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetGlobalSettings(m_pSession, ResourceID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomSettingValue ResourceGetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMString const &_SettingPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	const NInternal_C::HPMCustomSettingValue *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetCustomSettingsValue(m_pSession, SettingType, ResourceID, Identifier.m_pString, SettingPath.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomSettingValue Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomSettingValue&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMString const &_SettingPath, HPMCustomSettingValue const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	NInternal_C::HPMCustomSettingValue Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetCustomSettingsValue(m_pSession, SettingType, ResourceID, Identifier.m_pString, SettingPath.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData ResourceGetSDKInternalData(HPMUniqueID const &_ResourceID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetSDKInternalData(m_pSession, ResourceID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetSDKInternalData(HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetSDKInternalData(m_pSession, ResourceID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ResourceGroupCreate(HPMResourceGroupProperties const &_ResourceGroupProperties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMResourceGroupProperties ResourceGroupProperties;
	NInternal::CppConvert(_ResourceGroupProperties, ResourceGroupProperties, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGroupCreate(m_pSession, &ResourceGroupProperties, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceGroupDelete(HPMUniqueID const &_ResourceGroupID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceGroupID;
	NInternal::CppConvert(_ResourceGroupID, ResourceGroupID, CppData);
	HPMError Error = m_SDKFunctions.ResourceGroupDelete(m_pSession, ResourceGroupID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceGroupEnum ResourceGroupEnum()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMResourceGroupEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGroupEnum(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceGroupEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceGroupEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceGroupProperties ResourceGroupGetProperties(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMResourceGroupProperties *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGroupGetProperties(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceGroupProperties Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceGroupProperties&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceGroupSetProperties(HPMUniqueID const &_ResourceID, HPMResourceGroupProperties const &_ResourceGroupProperties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMResourceGroupProperties ResourceGroupProperties;
	NInternal::CppConvert(_ResourceGroupProperties, ResourceGroupProperties, CppData);
	HPMError Error = m_SDKFunctions.ResourceGroupSetProperties(m_pSession, ResourceID, &ResourceGroupProperties);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ResourceGetLoggedIn()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetLoggedIn(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceEnum ResourceGroupGetResources(HPMUniqueID const &_ResourceGroupID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceGroupID;
	NInternal::CppConvert(_ResourceGroupID, ResourceGroupID, CppData);
	const NInternal_C::HPMResourceEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGroupGetResources(m_pSession, ResourceGroupID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ResourceGetResourceFromName(HPMString const &_ResourceName)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ResourceName;
	NInternal::CppConvert(_ResourceName, ResourceName, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetResourceFromName(m_pSession, ResourceName.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString ResourceGetNameFromResource(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetNameFromResource(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString ResourceGroupGetNameFromResourceGroup(HPMUniqueID const &_ResourceGroupID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceGroupID;
	NInternal::CppConvert(_ResourceGroupID, ResourceGroupID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGroupGetNameFromResourceGroup(m_pSession, ResourceGroupID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool ResourceGroupUtilResourceGroupExists(HPMUniqueID const &_ResourceGroupID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceGroupID;
	NInternal::CppConvert(_ResourceGroupID, ResourceGroupID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGroupUtilResourceGroupExists(m_pSession, ResourceGroupID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceImpersonate ResourceGetImpersonate()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMResourceImpersonate *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetImpersonate(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceImpersonate Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceImpersonate&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMResourceLockFlag ResourceGetLockFlags(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetLockFlags(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMResourceLockFlag Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceChangeLockFlags(HPMUniqueID const &_ResourceID, EHPMResourceLockFlag _RemoveFlags, EHPMResourceLockFlag _AddFlags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt32 RemoveFlags;
	NInternal::CppConvert(_RemoveFlags, RemoveFlags, CppData);
	NInternal_C::HPMUInt32 AddFlags;
	NInternal::CppConvert(_AddFlags, AddFlags, CppData);
	HPMError Error = m_SDKFunctions.ResourceChangeLockFlags(m_pSession, ResourceID, RemoveFlags, AddFlags);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetPreferredLanguage(HPMUniqueID const &_ResourceID, HPMLanguage const &_PreferredLanguage)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMLanguage PreferredLanguage;
	NInternal::CppConvert(_PreferredLanguage, PreferredLanguage, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetPreferredLanguage(m_pSession, ResourceID, &PreferredLanguage);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLanguage ResourceGetPreferredLanguage(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMLanguage *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetPreferredLanguage(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLanguage Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLanguage&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetLastUsedLanguage(HPMUniqueID const &_ResourceID, HPMLanguage const &_PreferredLanguage)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMLanguage PreferredLanguage;
	NInternal::CppConvert(_PreferredLanguage, PreferredLanguage, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetLastUsedLanguage(m_pSession, ResourceID, &PreferredLanguage);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLanguage ResourceGetLastUsedLanguage(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMLanguage *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetLastUsedLanguage(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLanguage Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLanguage&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLanguage ResourceGetEffectiveLanguage(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMLanguage *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetEffectiveLanguage(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLanguage Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLanguage&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 ResourceGetDeletedDate(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetDeletedDate(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 ResourceGetUndeletedDate(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetUndeletedDate(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceTimesheetPeriodDataDelete(HPMUniqueID const &_ResourceID, HPMUInt64 _EndDate)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 EndDate;
	NInternal::CppConvert(_EndDate, EndDate, CppData);
	HPMError Error = m_SDKFunctions.ResourceTimesheetPeriodDataDelete(m_pSession, ResourceID, EndDate);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool ResourceUtilCanBeDeleted(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceUtilCanBeDeleted(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList ResourceUtilExpandResources(HPMUniqueID const &_ProjectID, bool _bIncludeGhosts, bool _bIncludeQAResources, HPMResourceDefinitionList const &_ResourceList)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 bIncludeGhosts;
	NInternal::CppConvert(_bIncludeGhosts, bIncludeGhosts, CppData);
	NInternal_C::HPMInt32 bIncludeQAResources;
	NInternal::CppConvert(_bIncludeQAResources, bIncludeQAResources, CppData);
	NInternal_C::HPMResourceDefinitionList ResourceList;
	NInternal::CppConvert(_ResourceList, ResourceList, CppData);
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceUtilExpandResources(m_pSession, ProjectID, bIncludeGhosts, bIncludeQAResources, &ResourceList, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetChatOnlineStatus(EHPMChatOnlineStatus _ChatStatus)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 ChatStatus;
	NInternal::CppConvert(_ChatStatus, ChatStatus, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetChatOnlineStatus(m_pSession, ChatStatus);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMChatOnlineStatus ResourceGetChatOnlineStatus(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetChatOnlineStatus(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMChatOnlineStatus Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetDoNotDisturb(HPMUniqueID const &_ResourceID, bool _bDoNotDisturb)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 bDoNotDisturb;
	NInternal::CppConvert(_bDoNotDisturb, bDoNotDisturb, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetDoNotDisturb(m_pSession, ResourceID, bDoNotDisturb);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool ResourceGetDoNotDisturb(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetDoNotDisturb(m_pSession, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSendChatMessage(HPMUniqueID const &_ResourceID, HPMChatRoom const &_ChatRoom, HPMString const &_Message)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMChatRoom ChatRoom;
	NInternal::CppConvert(_ChatRoom, ChatRoom, CppData);
	NInternal_C::HPMString Message;
	NInternal::CppConvert(_Message, Message, CppData);
	HPMError Error = m_SDKFunctions.ResourceSendChatMessage(m_pSession, ResourceID, &ChatRoom, Message.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceSetLastReadChatID(HPMUniqueID const &_ResourceID, HPMChatRoom const &_ChatRoom, HPMInt64 _ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMChatRoom ChatRoom;
	NInternal::CppConvert(_ChatRoom, ChatRoom, CppData);
	NInternal_C::HPMInt64 ID;
	NInternal::CppConvert(_ID, ID, CppData);
	HPMError Error = m_SDKFunctions.ResourceSetLastReadChatID(m_pSession, ResourceID, &ChatRoom, ID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt64 ResourceGetLastReadChatID(HPMUniqueID const &_ResourceID, HPMChatRoom const &_ChatRoom)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMChatRoom ChatRoom;
	NInternal::CppConvert(_ChatRoom, ChatRoom, CppData);
	NInternal_C::HPMInt64 NativeRet;
	HPMError Error = m_SDKFunctions.ResourceGetLastReadChatID(m_pSession, ResourceID, &ChatRoom, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceUploadAvatar(HPMUniqueID const &_ResourceID, HPMString const &_Path, HPMUInt32 _XOffset, HPMUInt32 _YOffset, HPMUInt32 _Size)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	NInternal_C::HPMUInt32 XOffset;
	NInternal::CppConvert(_XOffset, XOffset, CppData);
	NInternal_C::HPMUInt32 YOffset;
	NInternal::CppConvert(_YOffset, YOffset, CppData);
	NInternal_C::HPMUInt32 Size;
	NInternal::CppConvert(_Size, Size, CppData);
	HPMError Error = m_SDKFunctions.ResourceUploadAvatar(m_pSession, ResourceID, Path.m_pString, XOffset, YOffset, Size, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse ResourceUploadAvatarBlock(HPMUniqueID const &_ResourceID, HPMString const &_Path, HPMUInt32 _XOffset, HPMUInt32 _YOffset, HPMUInt32 _Size)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	NInternal_C::HPMUInt32 XOffset;
	NInternal::CppConvert(_XOffset, XOffset, CppData);
	NInternal_C::HPMUInt32 YOffset;
	NInternal::CppConvert(_YOffset, YOffset, CppData);
	NInternal_C::HPMUInt32 Size;
	NInternal::CppConvert(_Size, Size, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceUploadAvatar(m_pSession, ResourceID, Path.m_pString, XOffset, YOffset, Size, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ResourceGetTimesheetDay(HPMUniqueID const &_ResourceID, HPMUInt64 _Day)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 Day;
	NInternal::CppConvert(_Day, Day, CppData);
	HPMError Error = m_SDKFunctions.ResourceGetTimesheetDay(m_pSession, ResourceID, Day, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_ResourceGetTimesheetDayResponse ResourceGetTimesheetDayBlock(HPMUniqueID const &_ResourceID, HPMUInt64 _Day)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 Day;
	NInternal::CppConvert(_Day, Day, CppData);
	const NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ResourceGetTimesheetDay(m_pSession, ResourceID, Day, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_ResourceGetTimesheetDayResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectCreate(HPMProjectProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMProjectProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectCreate(m_pSession, &Properties, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectDelete(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	HPMError Error = m_SDKFunctions.ProjectDelete(m_pSession, ProjectID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectEnum ProjectEnum()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMProjectEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectEnum(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectEnum ProjectEnumNonArchived()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMProjectEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectEnumNonArchived(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectProperties ProjectGetProperties(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectProperties *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetProperties(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectProperties Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectProperties&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetProperties(HPMUniqueID const &_ProjectID, HPMProjectProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetProperties(m_pSession, ProjectID, &Properties);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectOpenBacklogProject(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectOpenBacklogProject(m_pSession, ProjectID, 0, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectOpenBacklogProjectBlock(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectOpenBacklogProject(m_pSession, ProjectID, 1, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectOpenQAProject(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectOpenQAProject(m_pSession, ProjectID, 0, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectOpenQAProjectBlock(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectOpenQAProject(m_pSession, ProjectID, 1, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectHistoryAutoSaveSettings ProjectGetHistoryAutoSaveSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectHistoryAutoSaveSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetHistoryAutoSaveSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectHistoryAutoSaveSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectHistoryAutoSaveSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetHistoryAutoSaveSettings(HPMUniqueID const &_ProjectID, HPMProjectHistoryAutoSaveSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectHistoryAutoSaveSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetHistoryAutoSaveSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowObject ProjectWorkflowGetObject(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMUInt32 _ObjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 ObjectID;
	NInternal::CppConvert(_ObjectID, ObjectID, CppData);
	const NInternal_C::HPMProjectWorkflowObject *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowGetObject(m_pSession, ProjectID, WorkflowID, ObjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowObject Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowObject&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowSettings ProjectWorkflowGetSettings(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	const NInternal_C::HPMProjectWorkflowSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowGetSettings(m_pSession, ProjectID, WorkflowID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectWorkflowSetSettings(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMProjectWorkflowSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMProjectWorkflowSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectWorkflowSetSettings(m_pSession, ProjectID, WorkflowID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectWorkflowSetLatestVersion(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	HPMError Error = m_SDKFunctions.ProjectWorkflowSetLatestVersion(m_pSession, ProjectID, WorkflowID, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowSettings ProjectWorkflowSetLatestVersionBlock(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	const NInternal_C::HPMProjectWorkflowSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowSetLatestVersion(m_pSession, ProjectID, WorkflowID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 ProjectWorkflowGetNewestVersion(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectWorkflowGetNewestVersion(m_pSession, ProjectID, WorkflowID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowEnum ProjectWorkflowEnum(HPMUniqueID const &_ProjectID, bool _bOnlyNewestVersions)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 bOnlyNewestVersions;
	NInternal::CppConvert(_bOnlyNewestVersions, bOnlyNewestVersions, CppData);
	const NInternal_C::HPMProjectWorkflowEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowEnum(m_pSession, ProjectID, bOnlyNewestVersions, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowEnum ProjectWorkflowEnumWorkflow(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMProjectWorkflowEnumWorkflowProperties const &_WorkflowEnumProperties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMProjectWorkflowEnumWorkflowProperties WorkflowEnumProperties;
	NInternal::CppConvert(_WorkflowEnumProperties, WorkflowEnumProperties, CppData);
	const NInternal_C::HPMProjectWorkflowEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowEnumWorkflow(m_pSession, ProjectID, WorkflowID, &WorkflowEnumProperties, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowObjectEnum ProjectWorkflowEnumObject(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMInt32 _ObjectID, HPMProjectWorkflowEnumObjectProperties const &_WorkflowObjectEnumProperties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 ObjectID;
	NInternal::CppConvert(_ObjectID, ObjectID, CppData);
	NInternal_C::HPMProjectWorkflowEnumObjectProperties WorkflowObjectEnumProperties;
	NInternal::CppConvert(_WorkflowObjectEnumProperties, WorkflowObjectEnumProperties, CppData);
	const NInternal_C::HPMProjectWorkflowObjectEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectWorkflowEnumObject(m_pSession, ProjectID, WorkflowID, ObjectID, &WorkflowObjectEnumProperties, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowObjectEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowObjectEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectWorkflowCreate(HPMUniqueID const &_ProjectID, HPMProjectWorkflowProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectWorkflowProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	HPMError Error = m_SDKFunctions.ProjectWorkflowCreate(m_pSession, ProjectID, &Properties, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 ProjectWorkflowCreateBlock(HPMUniqueID const &_ProjectID, HPMProjectWorkflowProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectWorkflowProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectWorkflowCreate(m_pSession, ProjectID, &Properties, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectWorkflowDelete(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	HPMError Error = m_SDKFunctions.ProjectWorkflowDelete(m_pSession, ProjectID, WorkflowID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkflowProgressionStructure ProjectUtilGetWorkflowProgression(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMUniqueID const &_ResourceID, HPMUInt32 _StatusID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt32 StatusID;
	NInternal::CppConvert(_StatusID, StatusID, CppData);
	const NInternal_C::HPMWorkflowProgressionStructure *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectUtilGetWorkflowProgression(m_pSession, ProjectID, WorkflowID, ResourceID, StatusID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkflowProgressionStructure Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkflowProgressionStructure&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectStatisticsSettings ProjectGetStatisticsSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectStatisticsSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetStatisticsSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectStatisticsSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectStatisticsSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetStatisticsSettings(HPMUniqueID const &_ProjectID, HPMProjectStatisticsSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectStatisticsSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetStatisticsSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomColumns ProjectCustomColumnsGet(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectCustomColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCustomColumnsGet(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCustomColumnsSet(HPMUniqueID const &_ProjectID, HPMProjectCustomColumns const &_Columns)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectCustomColumns Columns;
	NInternal::CppConvert(_Columns, Columns, CppData);
	HPMError Error = m_SDKFunctions.ProjectCustomColumnsSet(m_pSession, ProjectID, &Columns);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCustomColumnsCreate(HPMUniqueID const &_ProjectID, HPMProjectCustomColumnsColumn const &_Column)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectCustomColumnsColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	HPMError Error = m_SDKFunctions.ProjectCustomColumnsCreate(m_pSession, ProjectID, &Column);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCustomColumnsDeleteTaskData(HPMUniqueID const &_ProjectID, HPMUInt32 _ColumnHash)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnHash;
	NInternal::CppConvert(_ColumnHash, ColumnHash, CppData);
	HPMError Error = m_SDKFunctions.ProjectCustomColumnsDeleteTaskData(m_pSession, ProjectID, ColumnHash);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCustomColumnsRenameTaskData(HPMUniqueID const &_ProjectID, HPMUInt32 _ColumnHashFrom, HPMUInt32 _ColumnHashTo)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnHashFrom;
	NInternal::CppConvert(_ColumnHashFrom, ColumnHashFrom, CppData);
	NInternal_C::HPMUInt32 ColumnHashTo;
	NInternal::CppConvert(_ColumnHashTo, ColumnHashTo, CppData);
	HPMError Error = m_SDKFunctions.ProjectCustomColumnsRenameTaskData(m_pSession, ProjectID, ColumnHashFrom, ColumnHashTo);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectDefaultColumns ProjectGetDefaultActivatedColumns(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectDefaultColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetDefaultActivatedColumns(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectDefaultColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectDefaultColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetDefaultActivatedColumns(HPMUniqueID const &_ProjectID, HPMProjectDefaultColumns const &_Columns)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectDefaultColumns Columns;
	NInternal::CppConvert(_Columns, Columns, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetDefaultActivatedColumns(m_pSession, ProjectID, &Columns);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectSettings ProjectGetSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetSettings(HPMUniqueID const &_ProjectID, HPMProjectSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectEmailSettings ProjectGetEmailSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectEmailSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetEmailSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectEmailSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectEmailSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetEmailSettings(HPMUniqueID const &_ProjectID, HPMProjectEmailSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectEmailSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetEmailSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWallSettings ProjectGetWallSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectWallSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetWallSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWallSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWallSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetWallSettings(HPMUniqueID const &_ProjectID, HPMProjectWallSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectWallSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetWallSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWallSettings ProjectGetKanbanWallSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectWallSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetKanbanWallSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWallSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWallSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetKanbanWallSettings(HPMUniqueID const &_ProjectID, HPMProjectWallSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectWallSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetKanbanWallSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWallGroups ProjectGetWallGroups(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectWallGroups *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetWallGroups(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWallGroups Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWallGroups&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetWallGroups(HPMUniqueID const &_ProjectID, HPMProjectWallGroups const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectWallGroups Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetWallGroups(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectDetailedAccessRules ProjectGetDetailedAccessRules(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectDetailedAccessRules *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetDetailedAccessRules(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectDetailedAccessRules Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectDetailedAccessRules&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetDetailedAccessRules(HPMUniqueID const &_ProjectID, HPMProjectDetailedAccessRules const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectDetailedAccessRules Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetDetailedAccessRules(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMReport ProjectGetReport(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMUniqueID const &_ReportID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUniqueID ReportID;
	NInternal::CppConvert(_ReportID, ReportID, CppData);
	const NInternal_C::HPMReport *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetReport(m_pSession, ProjectID, ResourceID, ReportID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMReport Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMReport&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMReports ProjectGetReports(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMReports *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetReports(m_pSession, ProjectID, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMReports Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMReports&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetReports(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMReports const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMReports Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetReports(m_pSession, ProjectID, ResourceID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceEnum ProjectEnumReportResources(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMResourceEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectEnumReportResources(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowStatusStats ProjectGetWorkflowStatusStats(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID, HPMUInt32 _WorkflowStatusID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 WorkflowStatusID;
	NInternal::CppConvert(_WorkflowStatusID, WorkflowStatusID, CppData);
	const NInternal_C::HPMProjectWorkflowStatusStats *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetWorkflowStatusStats(m_pSession, ProjectID, WorkflowID, WorkflowStatusID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowStatusStats Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowStatusStats&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomStatisticsSettings ProjectGetCustomStatisticsSettings(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectCustomStatisticsSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetCustomStatisticsSettings(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomStatisticsSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomStatisticsSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetCustomStatisticsSettings(HPMUniqueID const &_ProjectID, HPMProjectCustomStatisticsSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectCustomStatisticsSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetCustomStatisticsSettings(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowStructure ProjectUtilGetWorkflowStructure(HPMUniqueID const &_ProjectID, HPMUInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	const NInternal_C::HPMProjectWorkflowStructure *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectUtilGetWorkflowStructure(m_pSession, ProjectID, WorkflowID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowStructure Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowStructure&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMProjectTaskCompletionStyle ProjectGetCompletionStyle(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectGetCompletionStyle(m_pSession, ProjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMProjectTaskCompletionStyle Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomSettingValue ProjectGetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ProjectID, HPMString const &_Identifier, HPMString const &_SettingPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	const NInternal_C::HPMCustomSettingValue *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetCustomSettingsValue(m_pSession, SettingType, ProjectID, Identifier.m_pString, SettingPath.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomSettingValue Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomSettingValue&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ProjectID, HPMString const &_Identifier, HPMString const &_SettingPath, HPMCustomSettingValue const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	NInternal_C::HPMCustomSettingValue Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetCustomSettingsValue(m_pSession, SettingType, ProjectID, Identifier.m_pString, SettingPath.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData ProjectGetSDKInternalData(HPMUniqueID const &_ProjectID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetSDKInternalData(m_pSession, ProjectID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetSDKInternalData(HPMUniqueID const &_ProjectID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetSDKInternalData(m_pSession, ProjectID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectResourceAdd(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceId, HPMProjectResourceProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceId;
	NInternal::CppConvert(_ResourceId, ResourceId, CppData);
	NInternal_C::HPMProjectResourceProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	HPMError Error = m_SDKFunctions.ProjectResourceAdd(m_pSession, ProjectID, ResourceId, &Properties);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectResourceRemove(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceId)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceId;
	NInternal::CppConvert(_ResourceId, ResourceId, CppData);
	HPMError Error = m_SDKFunctions.ProjectResourceRemove(m_pSession, ProjectID, ResourceId);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectResourceEnum ProjectResourceEnum(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectResourceEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectResourceEnum(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectResourceEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectResourceEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectResourceProperties ProjectResourceGetProperties(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceId)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceId;
	NInternal::CppConvert(_ResourceId, ResourceId, CppData);
	const NInternal_C::HPMProjectResourceProperties *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectResourceGetProperties(m_pSession, ProjectID, ResourceId, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectResourceProperties Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectResourceProperties&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectResourceSetProperties(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceId, HPMProjectResourceProperties const &_Properties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceId;
	NInternal::CppConvert(_ResourceId, ResourceId, CppData);
	NInternal_C::HPMProjectResourceProperties Properties;
	NInternal::CppConvert(_Properties, Properties, CppData);
	HPMError Error = m_SDKFunctions.ProjectResourceSetProperties(m_pSession, ProjectID, ResourceId, &Properties);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomSettingValue ProjectResourceGetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMString const &_SettingPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	const NInternal_C::HPMCustomSettingValue *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectResourceGetCustomSettingsValue(m_pSession, SettingType, ProjectID, ResourceID, Identifier.m_pString, SettingPath.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomSettingValue Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomSettingValue&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectResourceSetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMString const &_SettingPath, HPMCustomSettingValue const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	NInternal_C::HPMCustomSettingValue Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ProjectResourceSetCustomSettingsValue(m_pSession, SettingType, ProjectID, ResourceID, Identifier.m_pString, SettingPath.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData ProjectResourceGetSDKInternalData(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectResourceGetSDKInternalData(m_pSession, ProjectID, ResourceID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectResourceSetSDKInternalData(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ProjectResourceSetSDKInternalData(m_pSession, ProjectID, ResourceID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool ProjectResourceUtilIsMember(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectResourceUtilIsMember(m_pSession, ProjectID, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectUtilGetBacklog(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectUtilGetBacklog(m_pSession, ProjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID ProjectUtilGetQA(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.ProjectUtilGetQA(m_pSession, ProjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool ProjectUtilIsArchived(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectUtilIsArchived(m_pSession, ProjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 ProjectGetAgilePriorityCustomColumn(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.ProjectGetAgilePriorityCustomColumn(m_pSession, ProjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetAgilePriorityCustomColumn(HPMUniqueID const &_ProjectID, HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetAgilePriorityCustomColumn(m_pSession, ProjectID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomColumnsColumn ProjectGetCustomColumn(HPMUniqueID const &_ProjectID, HPMUInt32 _ColumnHash)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnHash;
	NInternal::CppConvert(_ColumnHash, ColumnHash, CppData);
	const NInternal_C::HPMProjectCustomColumnsColumn *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetCustomColumn(m_pSession, ProjectID, ColumnHash, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomColumnsColumn Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomColumnsColumn&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomColumnsColumn ProjectGetOldCustomColumn(HPMUniqueID const &_ProjectID, HPMUInt32 _ColumnHash)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnHash;
	NInternal::CppConvert(_ColumnHash, ColumnHash, CppData);
	const NInternal_C::HPMProjectCustomColumnsColumn *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetOldCustomColumn(m_pSession, ProjectID, ColumnHash, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomColumnsColumn Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomColumnsColumn&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectDefaultColumns ProjectGetDefaultActivatedNonHidableColumns(HPMUniqueID const &_ProjectID, EHPMProjectGetDefaultActivatedNonHidableColumnsFlag _Flags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	const NInternal_C::HPMProjectDefaultColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetDefaultActivatedNonHidableColumns(m_pSession, ProjectID, Flags, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectDefaultColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectDefaultColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectDefaultColumns ProjectGetDefaultAvailableColumns(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectDefaultColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetDefaultAvailableColumns(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectDefaultColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectDefaultColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkingDays ProjectCalendarGetWorkingDays(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMWorkingDays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCalendarGetWorkingDays(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkingDays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkingDays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCalendarSetWorkingDays(HPMUniqueID const &_ProjectID, HPMWorkingDays const &_WorkingDays)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMWorkingDays WorkingDays;
	NInternal::CppConvert(_WorkingDays, WorkingDays, CppData);
	HPMError Error = m_SDKFunctions.ProjectCalendarSetWorkingDays(m_pSession, ProjectID, &WorkingDays);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomWorkingDays ProjectCalendarGetCustomWorkingDays(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMCustomWorkingDays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCalendarGetCustomWorkingDays(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomWorkingDays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomWorkingDays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCalendarSetCustomWorkingDays(HPMUniqueID const &_ProjectID, HPMCustomWorkingDays const &_ChangedWorkingDays)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMCustomWorkingDays ChangedWorkingDays;
	NInternal::CppConvert(_ChangedWorkingDays, ChangedWorkingDays, CppData);
	HPMError Error = m_SDKFunctions.ProjectCalendarSetCustomWorkingDays(m_pSession, ProjectID, &ChangedWorkingDays);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkingHours ProjectCalendarGetWorkingHours(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMWorkingHours *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCalendarGetWorkingHours(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkingHours Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkingHours&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCalendarSetWorkingHours(HPMUniqueID const &_ProjectID, HPMWorkingHours const &_WorkingHours)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMWorkingHours WorkingHours;
	NInternal::CppConvert(_WorkingHours, WorkingHours, CppData);
	HPMError Error = m_SDKFunctions.ProjectCalendarSetWorkingHours(m_pSession, ProjectID, &WorkingHours);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomWorkingHours ProjectCalendarGetCustomWorkingHours(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMCustomWorkingHours *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCalendarGetCustomWorkingHours(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomWorkingHours Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomWorkingHours&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCalendarSetCustomWorkingHours(HPMUniqueID const &_ProjectID, HPMCustomWorkingHours const &_CustomWorkingHours)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMCustomWorkingHours CustomWorkingHours;
	NInternal::CppConvert(_CustomWorkingHours, CustomWorkingHours, CppData);
	HPMError Error = m_SDKFunctions.ProjectCalendarSetCustomWorkingHours(m_pSession, ProjectID, &CustomWorkingHours);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMHolidays ProjectCalendarGetHolidays(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMHolidays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectCalendarGetHolidays(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMHolidays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMHolidays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectCalendarSetHolidays(HPMUniqueID const &_ProjectID, HPMHolidays const &_Holidays)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMHolidays Holidays;
	NInternal::CppConvert(_Holidays, Holidays, CppData);
	HPMError Error = m_SDKFunctions.ProjectCalendarSetHolidays(m_pSession, ProjectID, &Holidays);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCalendarDayInfo ProjectGetCalendarDayInfo(HPMUniqueID const &_ProjectID, HPMUniqueID const &_UserID, HPMUInt64 _Date)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID UserID;
	NInternal::CppConvert(_UserID, UserID, CppData);
	NInternal_C::HPMUInt64 Date;
	NInternal::CppConvert(_Date, Date, CppData);
	const NInternal_C::HPMCalendarDayInfo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetCalendarDayInfo(m_pSession, ProjectID, UserID, Date, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCalendarDayInfo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCalendarDayInfo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectViewPresets ProjectGetViewPresets(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMProjectViewPresets *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ProjectGetViewPresets(m_pSession, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectViewPresets Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectViewPresets&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetViewPresets(HPMUniqueID const &_ProjectID, HPMProjectViewPresets const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMProjectViewPresets Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetViewPresets(m_pSession, ProjectID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectViewPresetApply(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMProjectViewPreset const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMProjectViewPreset Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.ProjectViewPresetApply(m_pSession, ProjectID, ResourceID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectSetTimesheetLock(HPMUniqueID const &_ProjectID, HPMUInt64 _LockDate, bool _bLocked)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt64 LockDate;
	NInternal::CppConvert(_LockDate, LockDate, CppData);
	NInternal_C::HPMInt32 bLocked;
	NInternal::CppConvert(_bLocked, bLocked, CppData);
	HPMError Error = m_SDKFunctions.ProjectSetTimesheetLock(m_pSession, ProjectID, LockDate, bLocked);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void ProjectDisplayUserMessage(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, EHPMProjectUserMessageType _MessageType, HPMUntranslatedString const &_Message)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMInt32 MessageType;
	NInternal::CppConvert(_MessageType, MessageType, CppData);
	const NInternal_C::HPMUntranslatedString *Message = _Message.GetOriginalObject();
	HPMError Error = m_SDKFunctions.ProjectDisplayUserMessage(m_pSession, ProjectID, ResourceID, MessageType, Message);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskCreateUnified(HPMUniqueID const &_ContainerID, HPMTaskCreateUnified const &_CreateData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskCreateUnified CreateData;
	NInternal::CppConvert(_CreateData, CreateData, CppData);
	HPMError Error = m_SDKFunctions.TaskCreateUnified(m_pSession, ContainerID, &CreateData, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_TaskCreateUnified TaskCreateUnifiedBlock(HPMUniqueID const &_ContainerID, HPMTaskCreateUnified const &_CreateData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskCreateUnified CreateData;
	NInternal::CppConvert(_CreateData, CreateData, CppData);
	const NInternal_C::HPMChangeCallbackData_TaskCreateUnified *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskCreateUnified(m_pSession, ContainerID, &CreateData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_TaskCreateUnified Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_TaskCreateUnified&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskMoveProject(HPMUniqueID const &_ContainerID, HPMTaskCreateUnified const &_CreateData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskCreateUnified CreateData;
	NInternal::CppConvert(_CreateData, CreateData, CppData);
	HPMError Error = m_SDKFunctions.TaskMoveProject(m_pSession, ContainerID, &CreateData, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_TaskCreateUnified TaskMoveProjectBlock(HPMUniqueID const &_ContainerID, HPMTaskCreateUnified const &_CreateData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskCreateUnified CreateData;
	NInternal::CppConvert(_CreateData, CreateData, CppData);
	const NInternal_C::HPMChangeCallbackData_TaskCreateUnified *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskMoveProject(m_pSession, ContainerID, &CreateData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_TaskCreateUnified Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_TaskCreateUnified&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskChangeDisposition(HPMUniqueID const &_ContainerID, HPMTaskChangeDisposition const &_DispositionChanges)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskChangeDisposition DispositionChanges;
	NInternal::CppConvert(_DispositionChanges, DispositionChanges, CppData);
	HPMError Error = m_SDKFunctions.TaskChangeDisposition(m_pSession, ContainerID, &DispositionChanges, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_TaskChangeDisposition TaskChangeDispositionBlock(HPMUniqueID const &_ContainerID, HPMTaskChangeDisposition const &_DispositionChanges)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	NInternal_C::HPMTaskChangeDisposition DispositionChanges;
	NInternal::CppConvert(_DispositionChanges, DispositionChanges, CppData);
	const NInternal_C::HPMChangeCallbackData_TaskChangeDisposition *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskChangeDisposition(m_pSession, ContainerID, &DispositionChanges, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_TaskChangeDisposition Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_TaskChangeDisposition&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskDelete(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	HPMError Error = m_SDKFunctions.TaskDelete(m_pSession, TaskID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskEnum(HPMUniqueID const &_ContainerID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnum(m_pSession, ContainerID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskEnumReferences(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumReferences(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskConnectionEnum TaskEnumConnections(HPMUniqueID const &_ContainerID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	const NInternal_C::HPMTaskConnectionEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumConnections(m_pSession, ContainerID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskConnectionEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskConnectionEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetMainReference(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetMainReference(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetProxy(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetProxy(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetContainer(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetContainer(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskCustomColumnDataEnum TaskEnumCustomColumnData(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskCustomColumnDataEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumCustomColumnData(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskCustomColumnDataEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskCustomColumnDataEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetBacklogCategory(HPMUniqueID const &_TaskID, EHPMTaskBacklogCategory _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetBacklogCategory(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskBacklogCategory TaskGetBacklogCategory(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetBacklogCategory(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskBacklogCategory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetColor(HPMUniqueID const &_TaskID, HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetColor(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 TaskGetColor(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetColor(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetFullyCreated(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	HPMError Error = m_SDKFunctions.TaskSetFullyCreated(m_pSession, TaskID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetFullyCreated(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetFullyCreated(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWallItemColor(HPMUniqueID const &_TaskID, EHPMTaskWallItemColor _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWallItemColor(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskWallItemColor TaskGetWallItemColor(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetWallItemColor(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskWallItemColor Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetComplexityPoints(HPMUniqueID const &_TaskID, HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetComplexityPoints(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetComplexityPoints(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetComplexityPoints(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetConfidence(HPMUniqueID const &_TaskID, EHPMTaskConfidence _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetConfidence(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskConfidence TaskGetConfidence(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetConfidence(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskConfidence Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetEstimatedIdealDays(HPMUniqueID const &_TaskID, HPMFP64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMFP64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetEstimatedIdealDays(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFP64 TaskGetEstimatedIdealDays(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMFP64 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetEstimatedIdealDays(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMFP64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFP64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetRisk(HPMUniqueID const &_TaskID, EHPMTaskRisk _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetRisk(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskRisk TaskGetRisk(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetRisk(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskRisk Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetStartOffset(HPMUniqueID const &_TaskID, HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetStartOffset(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetStartOffset(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetStartOffset(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetDuration(HPMUniqueID const &_TaskID, HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetDuration(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetDuration(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetDuration(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetForceSubProject(HPMUniqueID const &_TaskID, bool _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetForceSubProject(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetForceSubProject(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetForceSubProject(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetBudgetedWork(HPMUniqueID const &_TaskID, HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetBudgetedWork(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetBudgetedWork(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetBudgetedWork(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskLockedType TaskGetLockedType(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLockedType(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskLockedType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetPercentComplete(HPMUniqueID const &_TaskID, HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetPercentComplete(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetPercentComplete(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetPercentComplete(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetStatus(HPMUniqueID const &_TaskID, EHPMTaskStatus _Data, bool _bGotoWorkflowStatus, EHPMTaskSetStatusFlag _SetStatusFlags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	NInternal_C::HPMInt32 bGotoWorkflowStatus;
	NInternal::CppConvert(_bGotoWorkflowStatus, bGotoWorkflowStatus, CppData);
	NInternal_C::HPMInt32 SetStatusFlags;
	NInternal::CppConvert(_SetStatusFlags, SetStatusFlags, CppData);
	HPMError Error = m_SDKFunctions.TaskSetStatus(m_pSession, TaskID, Data, bGotoWorkflowStatus, SetStatusFlags);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskStatus TaskGetStatus(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetStatus(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskStatus Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskType TaskGetType(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetType(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetDescription(HPMUniqueID const &_TaskID, HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetDescription(m_pSession, TaskID, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetDescription(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetDescription(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetHyperlink(HPMUniqueID const &_TaskID, HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetHyperlink(m_pSession, TaskID, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetHyperlink(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetHyperlink(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLinkedToSprint(HPMUniqueID const &_TaskID, HPMUniqueID const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLinkedToSprint(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetLinkedToSprint(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLinkedToSprint(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLockedBy(HPMUniqueID const &_TaskID, HPMUniqueID const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLockedBy(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetLockedBy(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLockedBy(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetOriginallyCreatedBy(HPMUniqueID const &_TaskID, HPMUniqueID const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetOriginallyCreatedBy(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetOriginallyCreatedBy(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetOriginallyCreatedBy(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCustomColumnData(HPMUniqueID const &_TaskID, HPMUInt32 _ColumnHash, HPMString const &_Data, bool _bDoAutoAssignments)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 ColumnHash;
	NInternal::CppConvert(_ColumnHash, ColumnHash, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	NInternal_C::HPMInt32 bDoAutoAssignments;
	NInternal::CppConvert(_bDoAutoAssignments, bDoAutoAssignments, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCustomColumnData(m_pSession, TaskID, ColumnHash, Data.m_pString, bDoAutoAssignments);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetCustomColumnData(HPMUniqueID const &_TaskID, HPMUInt32 _ColumnHash)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 ColumnHash;
	NInternal::CppConvert(_ColumnHash, ColumnHash, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetCustomColumnData(m_pSession, TaskID, ColumnHash, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLastResourceCommentReadTime(HPMUniqueID const &_TaskID, HPMUniqueID const &_ResourceID, HPMUInt64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLastResourceCommentReadTime(m_pSession, TaskID, ResourceID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 TaskGetLastResourceCommentReadTime(HPMUniqueID const &_TaskID, HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLastResourceCommentReadTime(m_pSession, TaskID, ResourceID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetAttachedDocuments(HPMUniqueID const &_TaskID, HPMTaskAttachedDocuments const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskAttachedDocuments Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetAttachedDocuments(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskAttachedDocuments TaskGetAttachedDocuments(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskAttachedDocuments *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetAttachedDocuments(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskAttachedDocuments Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskAttachedDocuments&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetDelegateTo(HPMUniqueID const &_TaskID, HPMResourceDefinitionList const &_ResourceList)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMResourceDefinitionList ResourceList;
	NInternal::CppConvert(_ResourceList, ResourceList, CppData);
	HPMError Error = m_SDKFunctions.TaskSetDelegateTo(m_pSession, TaskID, &ResourceList);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList TaskGetDelegateTo(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetDelegateTo(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetResourceAllocation(HPMUniqueID const &_TaskID, HPMTaskResourceAllocation const &_Data, bool _bGotoWorkflowStatusWhenAssigned, EHPMTaskSetStatusFlag _SetStatusFlags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskResourceAllocation Data;
	NInternal::CppConvert(_Data, Data, CppData);
	NInternal_C::HPMInt32 bGotoWorkflowStatusWhenAssigned;
	NInternal::CppConvert(_bGotoWorkflowStatusWhenAssigned, bGotoWorkflowStatusWhenAssigned, CppData);
	NInternal_C::HPMInt32 SetStatusFlags;
	NInternal::CppConvert(_SetStatusFlags, SetStatusFlags, CppData);
	HPMError Error = m_SDKFunctions.TaskSetResourceAllocation(m_pSession, TaskID, &Data, bGotoWorkflowStatusWhenAssigned, SetStatusFlags);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskResourceAllocation TaskGetResourceAllocation(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskResourceAllocation *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetResourceAllocation(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskResourceAllocation Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskResourceAllocation&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSprintAllocatedResources(HPMUniqueID const &_TaskID, HPMTaskSprintAllocatedResources const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskSprintAllocatedResources Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSprintAllocatedResources(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskSprintAllocatedResources TaskGetSprintAllocatedResources(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskSprintAllocatedResources *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetSprintAllocatedResources(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskSprintAllocatedResources Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskSprintAllocatedResources&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSprintResourceAllocation(HPMUniqueID const &_TaskID, HPMTaskSprintResourceAllocation const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskSprintResourceAllocation Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSprintResourceAllocation(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskSprintResourceAllocation TaskGetSprintResourceAllocation(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskSprintResourceAllocation *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetSprintResourceAllocation(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskSprintResourceAllocation Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskSprintResourceAllocation&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCompleted(HPMUniqueID const &_TaskID, bool _bCompleted, bool _bSendCompletedMessage)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 bCompleted;
	NInternal::CppConvert(_bCompleted, bCompleted, CppData);
	NInternal_C::HPMInt32 bSendCompletedMessage;
	NInternal::CppConvert(_bSendCompletedMessage, bSendCompletedMessage, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCompleted(m_pSession, TaskID, bCompleted, bSendCompletedMessage);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetCompleted(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetCompleted(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetTimeZones(HPMUniqueID const &_TaskID, HPMTaskTimeZones const &_Data, bool _bSendChangeNotifications)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskTimeZones Data;
	NInternal::CppConvert(_Data, Data, CppData);
	NInternal_C::HPMInt32 bSendChangeNotifications;
	NInternal::CppConvert(_bSendChangeNotifications, bSendChangeNotifications, CppData);
	HPMError Error = m_SDKFunctions.TaskSetTimeZones(m_pSession, TaskID, &Data, bSendChangeNotifications);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskTimeZones TaskGetTimeZones(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskTimeZones *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetTimeZones(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskTimeZones Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskTimeZones&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 TaskGetTotalDuration(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetTotalDuration(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetVisibleTo(HPMUniqueID const &_TaskID, HPMResourceDefinitionList const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMResourceDefinitionList Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetVisibleTo(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList TaskGetVisibleTo(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetVisibleTo(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSeverity(HPMUniqueID const &_TaskID, EHPMTaskSeverity _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSeverity(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskSeverity TaskGetSeverity(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetSeverity(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskSeverity Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWorkflowStatus(HPMUniqueID const &_TaskID, HPMInt32 _Data, EHPMTaskSetStatusFlag _Flags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	NInternal_C::HPMInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWorkflowStatus(m_pSession, TaskID, Data, Flags);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetWorkflowStatus(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetWorkflowStatus(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetUserStoryFlag(HPMUniqueID const &_TaskID, bool _bData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 bData;
	NInternal::CppConvert(_bData, bData, CppData);
	HPMError Error = m_SDKFunctions.TaskSetUserStoryFlag(m_pSession, TaskID, bData);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetUserStoryFlag(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetUserStoryFlag(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLastUpdatedTime(HPMUniqueID const &_TaskID, HPMUInt64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLastUpdatedTime(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 TaskGetLastUpdatedTime(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLastUpdatedTime(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSprintResourcesHaveFullRights(HPMUniqueID const &_TaskID, bool _bData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 bData;
	NInternal::CppConvert(_bData, bData, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSprintResourcesHaveFullRights(m_pSession, TaskID, bData);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetSprintResourcesHaveFullRights(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetSprintResourcesHaveFullRights(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetDetailedDescription(HPMUniqueID const &_TaskID, HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetDetailedDescription(m_pSession, TaskID, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetDetailedDescription(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetDetailedDescription(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetStepsToReproduce(HPMUniqueID const &_TaskID, HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetStepsToReproduce(m_pSession, TaskID, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetStepsToReproduce(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetStepsToReproduce(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskGetAttachmentPath(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetAttachmentPath(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskGetID(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetID(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWorkRemaining(HPMUniqueID const &_TaskID, HPMFP32 _nHoursRemaining)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMFP32 nHoursRemaining;
	NInternal::CppConvert(_nHoursRemaining, nHoursRemaining, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWorkRemaining(m_pSession, TaskID, nHoursRemaining);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFP32 TaskGetWorkRemaining(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMFP32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetWorkRemaining(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMFP32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFP32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWorkRemainingHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint, HPMTaskWorkRemainingHistory const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	NInternal_C::HPMTaskWorkRemainingHistory Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWorkRemainingHistory(m_pSession, TaskID, DayInSprint, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskWorkRemainingHistory TaskGetWorkRemainingHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	const NInternal_C::HPMTaskWorkRemainingHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetWorkRemainingHistory(m_pSession, TaskID, DayInSprint, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskWorkRemainingHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskWorkRemainingHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskWorkRemainingHistoryDaysEnum TaskEnumWorkRemainingHistoryDays(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumWorkRemainingHistoryDays(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskWorkRemainingHistoryDaysEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetIdealDaysHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint, HPMTaskIdealDaysHistory const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	NInternal_C::HPMTaskIdealDaysHistory Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetIdealDaysHistory(m_pSession, TaskID, DayInSprint, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskIdealDaysHistory TaskGetIdealDaysHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	const NInternal_C::HPMTaskIdealDaysHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetIdealDaysHistory(m_pSession, TaskID, DayInSprint, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskIdealDaysHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskIdealDaysHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskHistoryDaysEnum TaskEnumIdealDaysHistoryDays(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskHistoryDaysEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumIdealDaysHistoryDays(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskHistoryDaysEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskHistoryDaysEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetPointsHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint, HPMTaskPointsHistory const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	NInternal_C::HPMTaskPointsHistory Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetPointsHistory(m_pSession, TaskID, DayInSprint, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskPointsHistory TaskGetPointsHistory(HPMUniqueID const &_TaskID, HPMUInt32 _DayInSprint)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 DayInSprint;
	NInternal::CppConvert(_DayInSprint, DayInSprint, CppData);
	const NInternal_C::HPMTaskPointsHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetPointsHistory(m_pSession, TaskID, DayInSprint, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskPointsHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskPointsHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskHistoryDaysEnum TaskEnumPointsHistoryDays(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskHistoryDaysEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumPointsHistoryDays(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskHistoryDaysEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskHistoryDaysEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetVacationOptions(HPMUniqueID const &_TaskID, HPMTaskVacationOptions const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskVacationOptions Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetVacationOptions(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskVacationOptions TaskGetVacationOptions(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskVacationOptions *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetVacationOptions(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskVacationOptions Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskVacationOptions&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLinkedToMilestones(HPMUniqueID const &_TaskID, HPMTaskLinkedToMilestones const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskLinkedToMilestones Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLinkedToMilestones(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskLinkedToMilestones TaskGetLinkedToMilestones(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskLinkedToMilestones *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLinkedToMilestones(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskLinkedToMilestones Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskLinkedToMilestones&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetLinkedTo(HPMUniqueID const &_TaskID, HPMTaskLinkedTo const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskLinkedTo Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetLinkedTo(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskLinkedTo TaskGetLinkedTo(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskLinkedTo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLinkedTo(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskLinkedTo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskLinkedTo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCommentsOptions(HPMUniqueID const &_TaskID, HPMTaskCommentsOptions const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskCommentsOptions Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCommentsOptions(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskCommentsOptions TaskGetCommentsOptions(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskCommentsOptions *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetCommentsOptions(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskCommentsOptions Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskCommentsOptions&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskCreateComment(HPMUniqueID const &_TaskID, HPMTaskComment const &_Comment)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskComment Comment;
	NInternal::CppConvert(_Comment, Comment, CppData);
	HPMError Error = m_SDKFunctions.TaskCreateComment(m_pSession, TaskID, &Comment, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskCreateCommentBlock(HPMUniqueID const &_TaskID, HPMTaskComment const &_Comment)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskComment Comment;
	NInternal::CppConvert(_Comment, Comment, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskCreateComment(m_pSession, TaskID, &Comment, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskDeleteComment(HPMUniqueID const &_TaskID, HPMInt32 _PostID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	HPMError Error = m_SDKFunctions.TaskDeleteComment(m_pSession, TaskID, PostID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetComment(HPMUniqueID const &_TaskID, HPMInt32 _PostID, HPMTaskComment const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	NInternal_C::HPMTaskComment Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetComment(m_pSession, TaskID, PostID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskComment TaskGetComment(HPMUniqueID const &_TaskID, HPMInt32 _PostID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	const NInternal_C::HPMTaskComment *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetComment(m_pSession, TaskID, PostID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskComment Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskComment&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskCommentEnum TaskEnumComments(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskCommentEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskEnumComments(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskCommentEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskCommentEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskNotifyCommentPosted(HPMUniqueID const &_TaskID, HPMInt32 _PostID, bool _bEdit)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	NInternal_C::HPMInt32 bEdit;
	NInternal::CppConvert(_bEdit, bEdit, CppData);
	HPMError Error = m_SDKFunctions.TaskNotifyCommentPosted(m_pSession, TaskID, PostID, bEdit);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWallPositions(HPMUniqueID const &_TaskID, HPMTaskWallPositions const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskWallPositions Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWallPositions(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskWallPositions TaskGetWallPositions(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskWallPositions *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetWallPositions(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskWallPositions Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskWallPositions&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData TaskGetSDKInternalData(HPMUniqueID const &_TaskID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetSDKInternalData(m_pSession, TaskID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSDKInternalData(HPMUniqueID const &_TaskID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSDKInternalData(m_pSession, TaskID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData TaskGetCommentSDKInternalData(HPMUniqueID const &_TaskID, HPMInt32 _PostID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetCommentSDKInternalData(m_pSession, TaskID, PostID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCommentSDKInternalData(HPMUniqueID const &_TaskID, HPMInt32 _PostID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCommentSDKInternalData(m_pSession, TaskID, PostID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetWorkflow(HPMUniqueID const &_TaskID, HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetWorkflow(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 TaskGetWorkflow(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetWorkflow(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetDefaultWorkflow(HPMUniqueID const &_TaskID, HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetDefaultWorkflow(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 TaskGetDefaultWorkflow(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetDefaultWorkflow(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetArchived(HPMUniqueID const &_TaskID, bool _bArchived)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 bArchived;
	NInternal::CppConvert(_bArchived, bArchived, CppData);
	HPMError Error = m_SDKFunctions.TaskSetArchived(m_pSession, TaskID, bArchived);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskGetArchived(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetArchived(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskPipelineGetTaskRef(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskPipelineGetTaskRef(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskRefGetColumnText(HPMUniqueID const &_TaskRefID, HPMColumn const &_Column, HPMColumnTextOptions const &_ColumnTextOptions)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	NInternal_C::HPMColumnTextOptions ColumnTextOptions;
	NInternal::CppConvert(_ColumnTextOptions, ColumnTextOptions, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefGetColumnText(m_pSession, TaskRefID, &Column, &ColumnTextOptions, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList TaskGetLastAssignedInWorkflowStatus(HPMUniqueID const &_TaskID, HPMUInt32 _WorkflowID, HPMUInt32 _StatusID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 StatusID;
	NInternal::CppConvert(_StatusID, StatusID, CppData);
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLastAssignedInWorkflowStatus(m_pSession, TaskID, WorkflowID, StatusID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMLastAssignedInWorkflowStatuses TaskGetLastAssignedInWorkflowStatuses(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMLastAssignedInWorkflowStatuses *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLastAssignedInWorkflowStatuses(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMLastAssignedInWorkflowStatuses Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMLastAssignedInWorkflowStatuses&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkflowStatusTransitInfo TaskGetLastEnterWorkflowStatus(HPMUniqueID const &_TaskID, HPMUInt32 _WorkflowID, HPMUInt32 _StatusID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 StatusID;
	NInternal::CppConvert(_StatusID, StatusID, CppData);
	const NInternal_C::HPMWorkflowStatusTransitInfo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLastEnterWorkflowStatus(m_pSession, TaskID, WorkflowID, StatusID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkflowStatusTransitInfo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkflowStatusTransitInfo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkflowStatusTransitInfo TaskGetLastExitWorkflowStatus(HPMUniqueID const &_TaskID, HPMUInt32 _WorkflowID, HPMUInt32 _StatusID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 StatusID;
	NInternal::CppConvert(_StatusID, StatusID, CppData);
	const NInternal_C::HPMWorkflowStatusTransitInfo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetLastExitWorkflowStatus(m_pSession, TaskID, WorkflowID, StatusID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkflowStatusTransitInfo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkflowStatusTransitInfo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskGetLinkedToPipelineTask(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetLinkedToPipelineTask(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCreatedPipelineTasks(HPMUniqueID const &_TaskID, HPMTaskEnum const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMTaskEnum Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCreatedPipelineTasks(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskGetCreatedPipelineTasks(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetCreatedPipelineTasks(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetCreatedFromWorkflowObject(HPMUniqueID const &_TaskID, HPMWorkflowObjectIdentifier const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMWorkflowObjectIdentifier Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetCreatedFromWorkflowObject(m_pSession, TaskID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkflowObjectIdentifier TaskGetCreatedFromWorkflowObject(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMWorkflowObjectIdentifier *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskGetCreatedFromWorkflowObject(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkflowObjectIdentifier Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkflowObjectIdentifier&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkflowProgressionStructure TaskUtilGetWorkflowProgression(HPMUniqueID const &_TaskID, HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMWorkflowProgressionStructure *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskUtilGetWorkflowProgression(m_pSession, TaskID, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkflowProgressionStructure Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkflowProgressionStructure&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskUtilGetWorkflowProgressionFromTaskStatusChange(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID, HPMInt32 _OldWorkflowStatus, EHPMTaskStatus _TaskStatus)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 OldWorkflowStatus;
	NInternal::CppConvert(_OldWorkflowStatus, OldWorkflowStatus, CppData);
	NInternal_C::HPMInt32 TaskStatus;
	NInternal::CppConvert(_TaskStatus, TaskStatus, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskUtilGetWorkflowProgressionFromTaskStatusChange(m_pSession, ProjectID, WorkflowID, OldWorkflowStatus, TaskStatus, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData TaskRefGetSDKInternalData(HPMUniqueID const &_TaskRefID, HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefGetSDKInternalData(m_pSession, TaskRefID, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskRefSetSDKInternalData(HPMUniqueID const &_TaskRefID, HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskRefSetSDKInternalData(m_pSession, TaskRefID, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString TaskRefUtilGetSubProjectPath(HPMUniqueID const &_TaskRefID, bool _bIncludeProxyPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 bIncludeProxyPath;
	NInternal::CppConvert(_bIncludeProxyPath, bIncludeProxyPath, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetSubProjectPath(m_pSession, TaskRefID, bIncludeProxyPath, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskRefUtilEnumChildren(HPMUniqueID const &_TaskRefID, bool _bIncludeAllChildren)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 bIncludeAllChildren;
	NInternal::CppConvert(_bIncludeAllChildren, bIncludeAllChildren, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefUtilEnumChildren(m_pSession, TaskRefID, bIncludeAllChildren, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskRefUtilEnumPipelineProgression(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefUtilEnumPipelineProgression(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetParent(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetParent(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetNext(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetNext(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetNextSibling(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetNextSibling(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetPrevSibling(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetPrevSibling(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetNextAtSameOrLowerLevel(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetNextAtSameOrLowerLevel(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefUtilGetPrevAtSameOrLowerLevel(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilGetPrevAtSameOrLowerLevel(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskRefUtilMoveInTree(HPMUniqueID const &_TaskRefID, HPMUniqueID const &_ParentTaskRefID, HPMUniqueID const &_InsertAfterTaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID ParentTaskRefID;
	NInternal::CppConvert(_ParentTaskRefID, ParentTaskRefID, CppData);
	NInternal_C::HPMUniqueID InsertAfterTaskRefID;
	NInternal::CppConvert(_InsertAfterTaskRefID, InsertAfterTaskRefID, CppData);
	HPMError Error = m_SDKFunctions.TaskRefUtilMoveInTree(m_pSession, TaskRefID, ParentTaskRefID, InsertAfterTaskRefID, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_TaskChangeDisposition TaskRefUtilMoveInTreeBlock(HPMUniqueID const &_TaskRefID, HPMUniqueID const &_ParentTaskRefID, HPMUniqueID const &_InsertAfterTaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID ParentTaskRefID;
	NInternal::CppConvert(_ParentTaskRefID, ParentTaskRefID, CppData);
	NInternal_C::HPMUniqueID InsertAfterTaskRefID;
	NInternal::CppConvert(_InsertAfterTaskRefID, InsertAfterTaskRefID, CppData);
	const NInternal_C::HPMChangeCallbackData_TaskChangeDisposition *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefUtilMoveInTree(m_pSession, TaskRefID, ParentTaskRefID, InsertAfterTaskRefID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_TaskChangeDisposition Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_TaskChangeDisposition&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskRefUtilTraceTree(HPMUniqueID const &_RootTaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID RootTaskRefID;
	NInternal::CppConvert(_RootTaskRefID, RootTaskRefID, CppData);
	HPMError Error = m_SDKFunctions.TaskRefUtilTraceTree(m_pSession, RootTaskRefID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskRefUtilIsCompleted(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilIsCompleted(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskRefUtilHasChildren(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilHasChildren(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskRefUtilCanStartNow(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilCanStartNow(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskUtilOneTaskRefHasChildren(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskUtilOneTaskRefHasChildren(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefGetTask(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetTask(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefGetContainer(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetContainer(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskRefEnum(HPMUniqueID const &_ContainerID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ContainerID;
	NInternal::CppConvert(_ContainerID, ContainerID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefEnum(m_pSession, ContainerID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefConnect(HPMUniqueID const &_TaskRefIDFrom, HPMUniqueID const &_TaskRefIDTo)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefIDFrom;
	NInternal::CppConvert(_TaskRefIDFrom, TaskRefIDFrom, CppData);
	NInternal_C::HPMUniqueID TaskRefIDTo;
	NInternal::CppConvert(_TaskRefIDTo, TaskRefIDTo, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefConnect(m_pSession, TaskRefIDFrom, TaskRefIDTo, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskRefGetTreeLevel(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetTreeLevel(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefGetPreviousID(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetPreviousID(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskRefGetPreviousWorkPriorityID(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetPreviousWorkPriorityID(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskRefClearNewlyCreated(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	HPMError Error = m_SDKFunctions.TaskRefClearNewlyCreated(m_pSession, TaskRefID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskRefGetNewlyCreated(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefGetNewlyCreated(m_pSession, TaskRefID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskRefSetUIDHistory(HPMUniqueID const &_TaskRefID, HPMTaskUIDHistory const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMTaskUIDHistory Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskRefSetUIDHistory(m_pSession, TaskRefID, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskUIDHistory TaskRefGetUIDHistory(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	const NInternal_C::HPMTaskUIDHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefGetUIDHistory(m_pSession, TaskRefID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskUIDHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskUIDHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskConnectionDelete(HPMUniqueID const &_ConnectionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	HPMError Error = m_SDKFunctions.TaskConnectionDelete(m_pSession, ConnectionID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskConnectionSetConnectionType(HPMUniqueID const &_ConnectionID, EHPMTaskConnectionType _Type)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMInt32 Type;
	NInternal::CppConvert(_Type, Type, CppData);
	HPMError Error = m_SDKFunctions.TaskConnectionSetConnectionType(m_pSession, ConnectionID, Type);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskConnectionType TaskConnectionGetConnectionType(HPMUniqueID const &_ConnectionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskConnectionGetConnectionType(m_pSession, ConnectionID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskConnectionType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskConnectionSetLeadLagTime(HPMUniqueID const &_ConnectionID, HPMInt32 _Time)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMInt32 Time;
	NInternal::CppConvert(_Time, Time, CppData);
	HPMError Error = m_SDKFunctions.TaskConnectionSetLeadLagTime(m_pSession, ConnectionID, Time);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 TaskConnectionGetLeadLagTime(HPMUniqueID const &_ConnectionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskConnectionGetLeadLagTime(m_pSession, ConnectionID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskConnectionGetConnectFrom(HPMUniqueID const &_ConnectionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskConnectionGetConnectFrom(m_pSession, ConnectionID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID TaskConnectionGetConnectTo(HPMUniqueID const &_ConnectionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ConnectionID;
	NInternal::CppConvert(_ConnectionID, ConnectionID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.TaskConnectionGetConnectTo(m_pSession, ConnectionID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskUpdatePipelineWorkflowToNewestVersion(HPMTaskEnum const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMTaskEnum Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskUpdatePipelineWorkflowToNewestVersion(m_pSession, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskFind(HPMFindContextData const &_FindContext, EHPMTaskFindFlag _Flags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindContextData *FindContext = _FindContext.GetOriginalObject();
	if (!FindContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskFind(m_pSession, FindContext, Flags, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool TaskRefUtilIsInFindContext(HPMUniqueID const &_TaskRefID, HPMFindContextData const &_FindContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	const NInternal_C::HPMFindContextData *FindContext = _FindContext.GetOriginalObject();
	if (!FindContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskRefUtilIsInFindContext(m_pSession, TaskRefID, FindContext, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskSummary TaskRefGetSummary(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	const NInternal_C::HPMTaskSummary *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefGetSummary(m_pSession, TaskRefID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskSummary Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskSummary&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskAgilePriorityCategory TaskGetBacklogPriority(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetBacklogPriority(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskAgilePriorityCategory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetBacklogPriority(HPMUniqueID const &_TaskID, EHPMTaskAgilePriorityCategory _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetBacklogPriority(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskAgilePriorityCategory TaskGetSprintPriority(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetSprintPriority(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskAgilePriorityCategory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetSprintPriority(HPMUniqueID const &_TaskID, EHPMTaskAgilePriorityCategory _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetSprintPriority(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskAgilePriorityCategory TaskGetBugPriority(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetBugPriority(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskAgilePriorityCategory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetBugPriority(HPMUniqueID const &_TaskID, EHPMTaskAgilePriorityCategory _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetBugPriority(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMTaskAgilePriorityCategory TaskGetAgilePriorityCategory(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.TaskGetAgilePriorityCategory(m_pSession, TaskID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMTaskAgilePriorityCategory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskSetAgilePriorityCategory(HPMUniqueID const &_TaskID, EHPMTaskAgilePriorityCategory _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.TaskSetAgilePriorityCategory(m_pSession, TaskID, Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TaskUtilUpdateAgilePriority(HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	HPMError Error = m_SDKFunctions.TaskUtilUpdateAgilePriority(m_pSession, ProjectID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMMilestoneSummary TaskRefGetMilestoneSummary(HPMUniqueID const &_TaskRefID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	const NInternal_C::HPMMilestoneSummary *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefGetMilestoneSummary(m_pSession, TaskRefID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMMilestoneSummary Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMMilestoneSummary&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskConnectionEnum TaskRefConnectionsEnum(HPMUniqueID const &_TaskRefID, EHPMTaskConnectionFlag _Flags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskRefID;
	NInternal::CppConvert(_TaskRefID, TaskRefID, CppData);
	NInternal_C::HPMUInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	const NInternal_C::HPMTaskConnectionEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskRefConnectionsEnum(m_pSession, TaskRefID, Flags, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskConnectionEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskConnectionEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEnum TaskUtilSprintTaskRefEnum(HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	const NInternal_C::HPMTaskEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskUtilSprintTaskRefEnum(m_pSession, TaskID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskEffectiveLinkedToMilestones TaskUtilGetEffectiveLinkedToMilestones(HPMUniqueID const &_TaskID, bool _bForceInherited)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 bForceInherited;
	NInternal::CppConvert(_bForceInherited, bForceInherited, CppData);
	const NInternal_C::HPMTaskEffectiveLinkedToMilestones *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TaskUtilGetEffectiveLinkedToMilestones(m_pSession, TaskID, bForceInherited, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskEffectiveLinkedToMilestones Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskEffectiveLinkedToMilestones&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlInit(HPMString const &_LocalPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString LocalPath;
	NInternal::CppConvert(_LocalPath, LocalPath, CppData);
	HPMError Error = m_SDKFunctions.VersionControlInit(m_pSession, LocalPath.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString VersionControlErrorToStr(EHPMVersionControlError _ErrorCode)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 ErrorCode;
	NInternal::CppConvert(_ErrorCode, ErrorCode, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlErrorToStr(m_pSession, ErrorCode, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFilesEnum VersionControlEnumFiles(HPMString const &_Path, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFilesEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlEnumFiles(m_pSession, Path.m_pString, 0, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMVersionControlFilesEnum();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFilesEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFilesEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFilesEnum VersionControlEnumFilesBlock(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFilesEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlEnumFiles(m_pSession, Path.m_pString, 1, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFilesEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFilesEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMBoolean VersionControlFileExists(HPMString const &_Path, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VersionControlFileExists(m_pSession, Path.m_pString, 0, &NativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;;
			return HPMBoolean();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMBoolean Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMBoolean VersionControlFileExistsBlock(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VersionControlFileExists(m_pSession, Path.m_pString, 1, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMBoolean Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool VersionControlOperationPending()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VersionControlOperationPending(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFile VersionControlGetFileInfo(HPMString const &_Path, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFile *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetFileInfo(m_pSession, Path.m_pString, 0, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMVersionControlFile();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFile Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFile&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFile VersionControlGetFileInfoBlock(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFile *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetFileInfo(m_pSession, Path.m_pString, 1, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFile Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFile&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFileHistory VersionControlGetFileHistory(HPMString const &_Path, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFileHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetFileHistory(m_pSession, Path.m_pString, 0, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMVersionControlFileHistory();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFileHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFileHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlFileHistory VersionControlGetFileHistoryBlock(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlFileHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetFileHistory(m_pSession, Path.m_pString, 1, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlFileHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlFileHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlAccessRights VersionControlGetAccessRights(HPMString const &_Path, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlAccessRights *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetAccessRights(m_pSession, Path.m_pString, 0, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMVersionControlAccessRights();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlAccessRights Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlAccessRights&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVersionControlAccessRights VersionControlGetAccessRightsBlock(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	const NInternal_C::HPMVersionControlAccessRights *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlGetAccessRights(m_pSession, Path.m_pString, 1, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVersionControlAccessRights Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVersionControlAccessRights&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlCreateDirectories(HPMVersionControlCreateDirectories const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlCreateDirectories Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlCreateDirectories(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlAddFilesResponse VersionControlCreateDirectoriesBlock(HPMVersionControlCreateDirectories const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlCreateDirectories Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlCreateDirectories(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlAddFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlAddFiles(HPMVersionControlAddFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlAddFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlAddFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlAddFilesResponse VersionControlAddFilesBlock(HPMVersionControlAddFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlAddFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlAddFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlAddFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlSyncFiles(HPMVersionControlFileList const &_Files, HPMInt32 _Version)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMInt32 Version;
	NInternal::CppConvert(_Version, Version, CppData);
	HPMError Error = m_SDKFunctions.VersionControlSyncFiles(m_pSession, &Files, Version, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlSyncFilesResponse VersionControlSyncFilesBlock(HPMVersionControlFileList const &_Files, HPMInt32 _Version)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMInt32 Version;
	NInternal::CppConvert(_Version, Version, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlSyncFiles(m_pSession, &Files, Version, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlSyncFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlCheckOutFiles(HPMVersionControlFileList const &_Files, bool _bRecursive, bool _bAlwaysAskOverwrite)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMInt32 bRecursive;
	NInternal::CppConvert(_bRecursive, bRecursive, CppData);
	NInternal_C::HPMInt32 bAlwaysAskOverwrite;
	NInternal::CppConvert(_bAlwaysAskOverwrite, bAlwaysAskOverwrite, CppData);
	HPMError Error = m_SDKFunctions.VersionControlCheckOutFiles(m_pSession, &Files, bRecursive, bAlwaysAskOverwrite, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlCheckOutFilesResponse VersionControlCheckOutFilesBlock(HPMVersionControlFileList const &_Files, bool _bRecursive, bool _bAlwaysAskOverwrite)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMInt32 bRecursive;
	NInternal::CppConvert(_bRecursive, bRecursive, CppData);
	NInternal_C::HPMInt32 bAlwaysAskOverwrite;
	NInternal::CppConvert(_bAlwaysAskOverwrite, bAlwaysAskOverwrite, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlCheckOutFiles(m_pSession, &Files, bRecursive, bAlwaysAskOverwrite, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlCheckOutFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlCheckInFiles(HPMVersionControlCheckInFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlCheckInFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlCheckInFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlCheckInFilesResponse VersionControlCheckInFilesBlock(HPMVersionControlCheckInFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlCheckInFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlCheckInFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlCheckInFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlRenameFiles(HPMVersionControlRenameFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRenameFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlRenameFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlRenameResponse VersionControlRenameFilesBlock(HPMVersionControlRenameFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRenameFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlRenameFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlRenameResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlRevertFiles(HPMVersionControlRevertFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRevertFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlRevertFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlCheckInFilesResponse VersionControlRevertFilesBlock(HPMVersionControlRevertFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRevertFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlRevertFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlCheckInFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlDeleteFiles(HPMVersionControlDeleteFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlDeleteFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlDeleteFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlDeleteFilesResponse VersionControlDeleteFilesBlock(HPMVersionControlDeleteFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlDeleteFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlDeleteFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlDeleteFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlRestoreDeletedFiles(HPMVersionControlRestoreDeletedFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRestoreDeletedFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlRestoreDeletedFiles(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse VersionControlRestoreDeletedFilesBlock(HPMVersionControlRestoreDeletedFiles const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRestoreDeletedFiles Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlRestoreDeletedFiles(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlDeleteVersions(HPMVersionControlDeleteVersions const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlDeleteVersions Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlDeleteVersions(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlDeleteVersionsResponse VersionControlDeleteVersionsBlock(HPMVersionControlDeleteVersions const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlDeleteVersions Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlDeleteVersions(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlDeleteVersionsResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlRollbackFile(HPMVersionControlRollbackFile const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRollbackFile Files;
	NInternal::CppConvert(_Files, Files, CppData);
	HPMError Error = m_SDKFunctions.VersionControlRollbackFile(m_pSession, &Files, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlRollbackFileResponse VersionControlRollbackFileBlock(HPMVersionControlRollbackFile const &_Files)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlRollbackFile Files;
	NInternal::CppConvert(_Files, Files, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlRollbackFile(m_pSession, &Files, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlRollbackFileResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlSetAccessRights(HPMVersionControlFileList const &_Files, HPMVersionControlAccessRights const &_AccessRights, bool _bResetSubFiles)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMVersionControlAccessRights AccessRights;
	NInternal::CppConvert(_AccessRights, AccessRights, CppData);
	NInternal_C::HPMInt32 bResetSubFiles;
	NInternal::CppConvert(_bResetSubFiles, bResetSubFiles, CppData);
	HPMError Error = m_SDKFunctions.VersionControlSetAccessRights(m_pSession, &Files, &AccessRights, bResetSubFiles, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_VersionControlSetAccessRightsResponse VersionControlSetAccessRightsBlock(HPMVersionControlFileList const &_Files, HPMVersionControlAccessRights const &_AccessRights, bool _bResetSubFiles)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMVersionControlFileList Files;
	NInternal::CppConvert(_Files, Files, CppData);
	NInternal_C::HPMVersionControlAccessRights AccessRights;
	NInternal::CppConvert(_AccessRights, AccessRights, CppData);
	NInternal_C::HPMInt32 bResetSubFiles;
	NInternal::CppConvert(_bResetSubFiles, bResetSubFiles, CppData);
	const NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlSetAccessRights(m_pSession, &Files, &AccessRights, bResetSubFiles, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_VersionControlSetAccessRightsResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 VersionControlUtilPathToFileID(HPMString const &_Path)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Path;
	NInternal::CppConvert(_Path, Path, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.VersionControlUtilPathToFileID(m_pSession, Path.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString VersionControlUtilFileIDToPath(HPMUInt64 _FileID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt64 FileID;
	NInternal::CppConvert(_FileID, FileID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VersionControlUtilFileIDToPath(m_pSession, FileID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool VersionControlUtilIsInitialized()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VersionControlUtilIsInitialized(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void VersionControlSetLocalPath(HPMString const &_LocalPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString LocalPath;
	NInternal::CppConvert(_LocalPath, LocalPath, CppData);
	HPMError Error = m_SDKFunctions.VersionControlSetLocalPath(m_pSession, LocalPath.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSessionInfo SessionGetInfo()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMSessionInfo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.SessionGetInfo(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSessionInfo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSessionInfo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSessionLock SessionLock()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMSessionLock *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.SessionLock(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSessionLock Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSessionLock&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 UtilGetColumnHash(HPMProjectCustomColumnsColumn const &_Column)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMProjectCustomColumnsColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetColumnHash(m_pSession, &Column, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDValid(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDValid(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDTask(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDTask(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDTaskRef(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDTaskRef(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDProject(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDProject(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDBacklogProject(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDBacklogProject(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDQAProject(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDQAProject(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsIDResource(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsIDResource(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomChoiceValue UtilDecodeCustomChoiceValue(HPMString const &_Value)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Value;
	NInternal::CppConvert(_Value, Value, CppData);
	const NInternal_C::HPMCustomChoiceValue *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilDecodeCustomChoiceValue(m_pSession, Value.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomChoiceValue Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomChoiceValue&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList UtilDecodeCustomColumnResourcesValue(HPMString const &_Value)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Value;
	NInternal::CppConvert(_Value, Value, CppData);
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilDecodeCustomColumnResourcesValue(m_pSession, Value.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilEncodeCustomColumnResourcesValue(HPMResourceDefinitionList const &_Resources, HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMResourceDefinitionList Resources;
	NInternal::CppConvert(_Resources, Resources, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilEncodeCustomColumnResourcesValue(m_pSession, &Resources, ProjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 UtilDecodeCustomColumnDateTimeValue(HPMString const &_Value)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Value;
	NInternal::CppConvert(_Value, Value, CppData);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.UtilDecodeCustomColumnDateTimeValue(m_pSession, Value.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilEncodeCustomColumnDateTimeValue(HPMUInt64 _DateTime)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt64 DateTime;
	NInternal::CppConvert(_DateTime, DateTime, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilEncodeCustomColumnDateTimeValue(m_pSession, DateTime, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID UtilGetRealProjectIDFromProjectID(HPMUniqueID const &_ID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ID;
	NInternal::CppConvert(_ID, ID, CppData);
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetRealProjectIDFromProjectID(m_pSession, ID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilGetLastErrorDescription()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetLastErrorDescription(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistory ChatHistoryGetHistory(HPMChatRoom const &_ChatRoom, HPMUInt64 _StartTime, HPMUInt64 _EndTime, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMChatRoom ChatRoom;
	NInternal::CppConvert(_ChatRoom, ChatRoom, CppData);
	NInternal_C::HPMUInt64 StartTime;
	NInternal::CppConvert(_StartTime, StartTime, CppData);
	NInternal_C::HPMUInt64 EndTime;
	NInternal::CppConvert(_EndTime, EndTime, CppData);
	const NInternal_C::HPMDataHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.ChatHistoryGetHistory(m_pSession, &ChatRoom, StartTime, EndTime, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMDataHistory();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistory DataHistoryGetHistory(HPMDataHistoryGetHistoryParameters const &_Parameters, bool &_bDataNotYetAvailable)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMDataHistoryGetHistoryParameters Parameters;
	NInternal::CppConvert(_Parameters, Parameters, CppData);
	const NInternal_C::HPMDataHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.DataHistoryGetHistory(m_pSession, &Parameters, &pNativeRet);
	_bDataNotYetAvailable = false;
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		if (Error == NInternal_C::EHPMError_DataNotYetAvailable)
		{
			_bDataNotYetAvailable = true;
			return HPMDataHistory();
		}
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData DataHistoryGetEntryData(HPMDataHistory const &_History, HPMUInt32 _Index)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDataHistory *History = _History.GetOriginalObject();
	if (!History)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUInt32 Index;
	NInternal::CppConvert(_Index, Index, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.DataHistoryGetEntryData(m_pSession, History, Index, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void DataHistorySetMaxCacheEntries(HPMUInt32 _MaxCacheEntries)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt32 MaxCacheEntries;
	NInternal::CppConvert(_MaxCacheEntries, MaxCacheEntries, CppData);
	HPMError Error = m_SDKFunctions.DataHistorySetMaxCacheEntries(m_pSession, MaxCacheEntries);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 VariantDecode_HPMInt32(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMInt32(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 VariantDecode_HPMUInt32(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMUInt32(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt64 VariantDecode_HPMInt64(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMInt64 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMInt64(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 VariantDecode_HPMUInt64(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMUInt64(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFP32 VariantDecode_HPMFP32(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMFP32 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMFP32(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMFP32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFP32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFP64 VariantDecode_HPMFP64(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMFP64 NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMFP64(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMFP64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFP64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUniqueID VariantDecode_HPMUniqueID(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUniqueID NativeRet;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMUniqueID(m_pSession, VariantData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUniqueID Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUniqueID&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString VariantDecode_HPMString(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMString(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskLinkedToMilestones VariantDecode_HPMTaskLinkedToMilestones(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskLinkedToMilestones *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskLinkedToMilestones(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskLinkedToMilestones Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskLinkedToMilestones&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList VariantDecode_HPMTaskDelegateTo(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskDelegateTo(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskSprintAllocatedResources VariantDecode_HPMTaskSprintAllocatedResources(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskSprintAllocatedResources *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskSprintAllocatedResources(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskSprintAllocatedResources Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskSprintAllocatedResources&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMResourceDefinitionList VariantDecode_HPMTaskVisibleTo(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMResourceDefinitionList *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskVisibleTo(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMResourceDefinitionList Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMResourceDefinitionList&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskResourceAllocation VariantDecode_HPMTaskResourceAllocation(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskResourceAllocation *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskResourceAllocation(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskResourceAllocation Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskResourceAllocation&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMStatisticsMultiFrequency VariantDecode_HPMStatisticsMultiFrequency(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMStatisticsMultiFrequency *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMStatisticsMultiFrequency(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMStatisticsMultiFrequency Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMStatisticsMultiFrequency&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMStatisticsCustomStatisticsFrequency VariantDecode_HPMStatisticsCustomStatisticsFrequency(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMStatisticsCustomStatisticsFrequency *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMStatisticsCustomStatisticsFrequency(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMStatisticsCustomStatisticsFrequency Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMStatisticsCustomStatisticsFrequency&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskAttachedDocuments VariantDecode_HPMTaskAttachedDocuments(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskAttachedDocuments *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskAttachedDocuments(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskAttachedDocuments Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskAttachedDocuments&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskVacationOptions VariantDecode_HPMTaskVacationOptions(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskVacationOptions *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskVacationOptions(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskVacationOptions Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskVacationOptions&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskCommentsOptions VariantDecode_HPMTaskCommentsOptions(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskCommentsOptions *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskCommentsOptions(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskCommentsOptions Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskCommentsOptions&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskLinkedTo VariantDecode_HPMTaskLinkedTo(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskLinkedTo *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskLinkedTo(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskLinkedTo Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskLinkedTo&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskSprintResourceAllocation VariantDecode_HPMTaskSprintResourceAllocation(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskSprintResourceAllocation *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskSprintResourceAllocation(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskSprintResourceAllocation Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskSprintResourceAllocation&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskCreated VariantDecode_HPMDataHistoryTaskCreated(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskCreated *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskCreated(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskCreated Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskCreated&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskRestoredFromHistory VariantDecode_HPMDataHistoryTaskRestoredFromHistory(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskRestoredFromHistory *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskRestoredFromHistory(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskRestoredFromHistory Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskRestoredFromHistory&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskMoved VariantDecode_HPMDataHistoryTaskMoved(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskMoved *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskMoved(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskMoved Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskMoved&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskRenameCustomColumn VariantDecode_HPMDataHistoryTaskRenameCustomColumn(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskRenameCustomColumn *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskRenameCustomColumn(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskRenameCustomColumn Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskRenameCustomColumn&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskProxyCreated VariantDecode_HPMDataHistoryTaskProxyCreated(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskProxyCreated *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskProxyCreated(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskProxyCreated Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskProxyCreated&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDataHistoryTaskProxyDeleted VariantDecode_HPMDataHistoryTaskProxyDeleted(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMDataHistoryTaskProxyDeleted *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMDataHistoryTaskProxyDeleted(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDataHistoryTaskProxyDeleted Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDataHistoryTaskProxyDeleted&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskTimeZones VariantDecode_HPMTaskTimeZones(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMTaskTimeZones *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMTaskTimeZones(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskTimeZones Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskTimeZones&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChatMessage VariantDecode_HPMChatMessage(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMChatMessage *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMChatMessage(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChatMessage Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChatMessage&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomColumns VariantDecode_HPMProjectCustomColumns(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMProjectCustomColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMProjectCustomColumns(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectCustomColumnsColumn VariantDecode_HPMProjectCustomColumnsColumn(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMProjectCustomColumnsColumn *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMProjectCustomColumnsColumn(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectCustomColumnsColumn Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectCustomColumnsColumn&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectWorkflowSettings VariantDecode_HPMProjectWorkflowSettings(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMProjectWorkflowSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMProjectWorkflowSettings(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectWorkflowSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectWorkflowSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMHolidays VariantDecode_HPMHolidays(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMHolidays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMHolidays(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMHolidays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMHolidays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkingDays VariantDecode_HPMWorkingDays(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMWorkingDays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMWorkingDays(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkingDays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkingDays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomWorkingDays VariantDecode_HPMCustomWorkingDays(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMCustomWorkingDays *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMCustomWorkingDays(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomWorkingDays Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomWorkingDays&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMWorkingHours VariantDecode_HPMWorkingHours(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMWorkingHours *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMWorkingHours(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMWorkingHours Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMWorkingHours&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomWorkingHours VariantDecode_HPMCustomWorkingHours(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMCustomWorkingHours *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMCustomWorkingHours(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomWorkingHours Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomWorkingHours&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMProjectDefaultColumns VariantDecode_HPMProjectDefaultColumns(HPMVariantData const &_VariantData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMVariantData *VariantData = _VariantData.GetOriginalObject();
	if (!VariantData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMProjectDefaultColumns *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantDecode_HPMProjectDefaultColumns(m_pSession, VariantData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMProjectDefaultColumns Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMProjectDefaultColumns&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMInt32(HPMInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMInt32(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMUInt32(HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMUInt32(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMInt64(HPMInt64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMInt64(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMUInt64(HPMUInt64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMUInt64(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMFP32(HPMFP32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFP32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMFP32(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMFP64(HPMFP64 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFP64 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMFP64(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMUniqueID(HPMUniqueID const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMUniqueID(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMString(HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMString(m_pSession, Data.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_HPMUntranslatedString(HPMUntranslatedString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMUntranslatedString *Data = _Data.GetOriginalObject();
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_HPMUntranslatedString(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMVariantData VariantEncode_EHPMTaskStatus(EHPMTaskStatus _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMVariantData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.VariantEncode_EHPMTaskStatus(m_pSession, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMVariantData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMVariantData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeText CriteriaDataDecode_HPMTaskFindCriteriaTypeText(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeText *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeText(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeText Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeText&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeInteger CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeInteger *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeInteger(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeInteger Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeInteger&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeFloat CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeFloat *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeFloat(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeFloat Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeFloat&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeGeneralCondition CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeGeneralCondition *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeGeneralCondition(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeGeneralCondition Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeGeneralCondition&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeDate CriteriaDataDecode_HPMTaskFindCriteriaTypeDate(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeDate *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeDate(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeDate Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeDate&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeDroplist CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeDroplist *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeDroplist(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeDroplist Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeDroplist&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaTypeMultiSelectDroplist CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	const NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataDecode_HPMTaskFindCriteriaTypeMultiSelectDroplist(m_pSession, CriteriaData, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaTypeMultiSelectDroplist Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeText(HPMFindCriteriaTypeText const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeText Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeText(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger(HPMFindCriteriaTypeInteger const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeInteger Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeInteger(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat(HPMFindCriteriaTypeFloat const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeFloat Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeFloat(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition(HPMFindCriteriaTypeGeneralCondition const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeGeneralCondition Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeGeneralCondition(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeDate(HPMFindCriteriaTypeDate const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeDate Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeDate(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist(HPMFindCriteriaTypeDroplist const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeDroplist Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeDroplist(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindCriteriaData CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist(HPMFindCriteriaTypeMultiSelectDroplist const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMFindCriteriaData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CriteriaDataEncode_HPMTaskFindCriteriaTypeMultiSelectDroplist(m_pSession, &Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindCriteriaData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindCriteriaData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void CommunicationChannelRegister(HPMString const &_ChannelName, EHPMChannelFlag _Flags, HPMCommunicationChannelData const &_ChannelData, HPMString const &_Description)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	NInternal_C::HPMUInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	NInternal_C::HPMCommunicationChannelData ChannelData;
	NInternal::CppConvert(_ChannelData, ChannelData, CppData);
	NInternal_C::HPMString Description;
	NInternal::CppConvert(_Description, Description, CppData);
	HPMError Error = m_SDKFunctions.CommunicationChannelRegister(m_pSession, ChannelName.m_pString, Flags, &ChannelData, Description.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void CommunicationChannelUnregister(HPMString const &_ChannelName)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	HPMError Error = m_SDKFunctions.CommunicationChannelUnregister(m_pSession, ChannelName.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCommunicationChannelEnum CommunicationChannelEnum(HPMString const &_ChannelName)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	const NInternal_C::HPMCommunicationChannelEnum *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.CommunicationChannelEnum(m_pSession, ChannelName.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCommunicationChannelEnum Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCommunicationChannelEnum&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void CommunicationChannelSendPacket(HPMString const &_ChannelName, HPMUInt64 _SessionID, HPMCommunicationChannelPacket const &_Packet)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	NInternal_C::HPMUInt64 SessionID;
	NInternal::CppConvert(_SessionID, SessionID, CppData);
	NInternal_C::HPMCommunicationChannelPacket Packet;
	NInternal::CppConvert(_Packet, Packet, CppData);
	HPMError Error = m_SDKFunctions.CommunicationChannelSendPacket(m_pSession, ChannelName.m_pString, SessionID, &Packet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilGetHansoftURL(HPMString const &_URLSuffix)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString URLSuffix;
	NInternal::CppConvert(_URLSuffix, URLSuffix, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetHansoftURL(m_pSession, URLSuffix.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMFindCriteriaDataType UtilGetFindCriteriaDataTypeFromData(HPMFindCriteriaData const &_CriteriaData)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMFindCriteriaData *CriteriaData = _CriteriaData.GetOriginalObject();
	if (!CriteriaData)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetFindCriteriaDataTypeFromData(m_pSession, CriteriaData, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMFindCriteriaDataType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMFindCriteriaDataType UtilGetFindCriteriaDataTypeFromColumn(HPMColumn const &_Column)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetFindCriteriaDataTypeFromColumn(m_pSession, &Column, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMFindCriteriaDataType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMReport UtilConvertFindStringToReport(HPMString const &_FindString, HPMUniqueID const &_ProjectID, EHPMReportViewType _FindViewType)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString FindString;
	NInternal::CppConvert(_FindString, FindString, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 FindViewType;
	NInternal::CppConvert(_FindViewType, FindViewType, CppData);
	const NInternal_C::HPMReport *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilConvertFindStringToReport(m_pSession, FindString.m_pString, ProjectID, FindViewType, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMReport Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMReport&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilConvertReportToFindString(HPMReport const &_Report, HPMUniqueID const &_ProjectID, EHPMReportViewType _FindViewType)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMReport Report;
	NInternal::CppConvert(_Report, Report, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 FindViewType;
	NInternal::CppConvert(_FindViewType, FindViewType, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilConvertReportToFindString(m_pSession, &Report, ProjectID, FindViewType, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUntranslatedString UtilGetColumnName(EHPMProjectDefaultColumn _ColumnType)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt32 ColumnType;
	NInternal::CppConvert(_ColumnType, ColumnType, CppData);
	const NInternal_C::HPMUntranslatedString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetColumnName(m_pSession, ColumnType, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMUntranslatedString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUntranslatedString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMFindContextData UtilPrepareFindContext(HPMString const &_FindString, HPMUniqueID const &_ProjectID, EHPMReportViewType _FindViewType, HPMFindContext const &_FindContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString FindString;
	NInternal::CppConvert(_FindString, FindString, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 FindViewType;
	NInternal::CppConvert(_FindViewType, FindViewType, CppData);
	NInternal_C::HPMFindContext FindContext;
	NInternal::CppConvert(_FindContext, FindContext, CppData);
	const NInternal_C::HPMFindContextData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilPrepareFindContext(m_pSession, FindString.m_pString, ProjectID, FindViewType, &FindContext, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMFindContextData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMFindContextData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void UtilUpdateFindContext(HPMString const &_FindString, HPMFindContextData const &_FindContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString FindString;
	NInternal::CppConvert(_FindString, FindString, CppData);
	const NInternal_C::HPMFindContextData *FindContext = _FindContext.GetOriginalObject();
	if (!FindContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	HPMError Error = m_SDKFunctions.UtilUpdateFindContext(m_pSession, FindString.m_pString, FindContext);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMColumnDescription UtilGetColumnDescription(HPMColumn const &_Column)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	const NInternal_C::HPMColumnDescription *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetColumnDescription(m_pSession, &Column, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMColumnDescription Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMColumnDescription&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTaskField UtilColumnToTaskField(HPMColumn const &_Column)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMColumn Column;
	NInternal::CppConvert(_Column, Column, CppData);
	const NInternal_C::HPMTaskField *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilColumnToTaskField(m_pSession, &Column, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTaskField Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTaskField&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMColumn UtilTaskFieldToColumn(HPMTaskField const &_TaskField)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMTaskField TaskField;
	NInternal::CppConvert(_TaskField, TaskField, CppData);
	const NInternal_C::HPMColumn *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilTaskFieldToColumn(m_pSession, &TaskField, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMColumn Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMColumn&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUntranslatedString UtilGetColumnDataItemFormatted(HPMUniqueID const &_ProjectID, EHPMProjectDefaultColumn _ColumnID, HPMUInt32 _Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnID;
	NInternal::CppConvert(_ColumnID, ColumnID, CppData);
	NInternal_C::HPMUInt32 Data;
	NInternal::CppConvert(_Data, Data, CppData);
	const NInternal_C::HPMUntranslatedString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetColumnDataItemFormatted(m_pSession, ProjectID, ColumnID, Data, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMUntranslatedString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUntranslatedString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
bool UtilIsColumnReadOnly(EHPMProjectDefaultColumn _ColumnID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt32 ColumnID;
	NInternal::CppConvert(_ColumnID, ColumnID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilIsColumnReadOnly(m_pSession, ColumnID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	bool Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMColumnData UtilGetColumnData(HPMUniqueID const &_ProjectID, EHPMProjectDefaultColumn _ColumnID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUInt32 ColumnID;
	NInternal::CppConvert(_ColumnID, ColumnID, CppData);
	const NInternal_C::HPMColumnData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetColumnData(m_pSession, ProjectID, ColumnID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMColumnData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMColumnData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt64 UtilGetResourceUndeleteTimeOut()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt64 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetResourceUndeleteTimeOut(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUntranslatedString UtilGetWorkflowObjectName(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID, HPMInt32 _ObjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 ObjectID;
	NInternal::CppConvert(_ObjectID, ObjectID, CppData);
	const NInternal_C::HPMUntranslatedString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowObjectName(m_pSession, ProjectID, WorkflowID, ObjectID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMUntranslatedString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUntranslatedString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilGetWorkflowObjectIDFromName(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID, HPMLanguage const &_Language, HPMString const &_Name)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMLanguage Language;
	NInternal::CppConvert(_Language, Language, CppData);
	NInternal_C::HPMString Name;
	NInternal::CppConvert(_Name, Name, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowObjectIDFromName(m_pSession, ProjectID, WorkflowID, &Language, Name.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString UtilGetWorkflowName(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowName(m_pSession, ProjectID, WorkflowID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilTaskCommentExists(HPMUniqueID const &_TaskID, HPMInt32 _PostID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	NInternal_C::HPMInt32 PostID;
	NInternal::CppConvert(_PostID, PostID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilTaskCommentExists(m_pSession, TaskID, PostID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilGlobalReportExists(HPMUniqueID const &_ResourceID, HPMUniqueID const &_ReportID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUniqueID ReportID;
	NInternal::CppConvert(_ReportID, ReportID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGlobalReportExists(m_pSession, ResourceID, ReportID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilProjectReportExists(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMUniqueID const &_ReportID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUniqueID ReportID;
	NInternal::CppConvert(_ReportID, ReportID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilProjectReportExists(m_pSession, ProjectID, ResourceID, ReportID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilWorkflowObjectExists(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID, HPMInt32 _ObjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 ObjectID;
	NInternal::CppConvert(_ObjectID, ObjectID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilWorkflowObjectExists(m_pSession, ProjectID, WorkflowID, ObjectID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilWorkflowExists(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilWorkflowExists(m_pSession, ProjectID, WorkflowID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 UtilGetWorkflowIDFromName(HPMUniqueID const &_ProjectID, HPMString const &_Name, EHPMWorkflowReturnType _WorkflowReturnType)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMString Name;
	NInternal::CppConvert(_Name, Name, CppData);
	NInternal_C::HPMUInt32 WorkflowReturnType;
	NInternal::CppConvert(_WorkflowReturnType, WorkflowReturnType, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowIDFromName(m_pSession, ProjectID, Name.m_pString, WorkflowReturnType, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMWorkflowType UtilGetWorkflowType(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowType(m_pSession, ProjectID, WorkflowID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMWorkflowType Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
EHPMProjectWorkflowContainerFlag UtilGetWorkflowContainerFlags(HPMUniqueID const &_ProjectID, HPMInt32 _WorkflowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMInt32 WorkflowID;
	NInternal::CppConvert(_WorkflowID, WorkflowID, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.UtilGetWorkflowContainerFlags(m_pSession, ProjectID, WorkflowID, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	EHPMProjectWorkflowContainerFlag Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void DebugCheckHeap()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	HPMError Error = m_SDKFunctions.DebugCheckHeap(m_pSession);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetActivityID(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMInt32 _ActivityID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMInt32 ActivityID;
	NInternal::CppConvert(_ActivityID, ActivityID, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetActivityID(m_pSession, DayID, RowID, ActivityID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetProjectID(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMUniqueID const &_ProjectID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetProjectID(m_pSession, DayID, RowID, ProjectID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetTaskID(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMUniqueID const &_TaskID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMUniqueID TaskID;
	NInternal::CppConvert(_TaskID, TaskID, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetTaskID(m_pSession, DayID, RowID, TaskID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetStartedTime(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMUInt32 _StartedTime)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMUInt32 StartedTime;
	NInternal::CppConvert(_StartedTime, StartedTime, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetStartedTime(m_pSession, DayID, RowID, StartedTime);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetDurationTime(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMUInt32 _DurationTime)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMUInt32 DurationTime;
	NInternal::CppConvert(_DurationTime, DurationTime, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetDurationTime(m_pSession, DayID, RowID, DurationTime);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowSetComment(HPMUniqueID const &_DayID, HPMUInt32 _RowID, HPMString const &_Comment)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	NInternal_C::HPMString Comment;
	NInternal::CppConvert(_Comment, Comment, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowSetComment(m_pSession, DayID, RowID, Comment.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetRowDelete(HPMUniqueID const &_DayID, HPMUInt32 _RowID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID DayID;
	NInternal::CppConvert(_DayID, DayID, CppData);
	NInternal_C::HPMUInt32 RowID;
	NInternal::CppConvert(_RowID, RowID, CppData);
	HPMError Error = m_SDKFunctions.TimesheetRowDelete(m_pSession, DayID, RowID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void TimesheetGetDateRange(EHPMTimesheetRequestType _Type, HPMUniqueEnum const &_IDs, HPMUInt64 _StartDate, HPMUInt64 _FinishDate)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 Type;
	NInternal::CppConvert(_Type, Type, CppData);
	NInternal_C::HPMUniqueEnum IDs;
	NInternal::CppConvert(_IDs, IDs, CppData);
	NInternal_C::HPMUInt64 StartDate;
	NInternal::CppConvert(_StartDate, StartDate, CppData);
	NInternal_C::HPMUInt64 FinishDate;
	NInternal::CppConvert(_FinishDate, FinishDate, CppData);
	HPMError Error = m_SDKFunctions.TimesheetGetDateRange(m_pSession, Type, &IDs, StartDate, FinishDate, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_TimesheetGetDateRangeResponse TimesheetGetDateRangeBlock(EHPMTimesheetRequestType _Type, HPMUniqueEnum const &_IDs, HPMUInt64 _StartDate, HPMUInt64 _FinishDate)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 Type;
	NInternal::CppConvert(_Type, Type, CppData);
	NInternal_C::HPMUniqueEnum IDs;
	NInternal::CppConvert(_IDs, IDs, CppData);
	NInternal_C::HPMUInt64 StartDate;
	NInternal::CppConvert(_StartDate, StartDate, CppData);
	NInternal_C::HPMUInt64 FinishDate;
	NInternal::CppConvert(_FinishDate, FinishDate, CppData);
	const NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.TimesheetGetDateRange(m_pSession, Type, &IDs, StartDate, FinishDate, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_TimesheetGetDateRangeResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void SessionSetConnectionLostTimeout(HPMFP64 _Timeout)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMFP64 Timeout;
	NInternal::CppConvert(_Timeout, Timeout, CppData);
	HPMError Error = m_SDKFunctions.SessionSetConnectionLostTimeout(m_pSession, Timeout);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString SessionGetDisconnectReason()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.SessionGetDisconnectReason(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationClientPluginRegister(HPMString const &_ChannelName, HPMAuthenticationClientPluginProperties const &_MethodProperties)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	NInternal_C::HPMAuthenticationClientPluginProperties MethodProperties;
	NInternal::CppConvert(_MethodProperties, MethodProperties, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationClientPluginRegister(m_pSession, ChannelName.m_pString, &MethodProperties);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationClientPluginUnregister(HPMString const &_ChannelName)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationClientPluginUnregister(m_pSession, ChannelName.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationClientProtocolEnded(HPMString const &_ChannelName, HPMUInt64 _SessionID, HPMAuthenticationSessionKey const &_SessionKey, HPMString const &_UserName, HPMAuthenticationErrorDescriptions const &_ErrorDescriptions, EHPMAuthenticationPropertiesFlag _Flags)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	NInternal_C::HPMUInt64 SessionID;
	NInternal::CppConvert(_SessionID, SessionID, CppData);
	NInternal_C::HPMAuthenticationSessionKey SessionKey;
	NInternal::CppConvert(_SessionKey, SessionKey, CppData);
	NInternal_C::HPMString UserName;
	NInternal::CppConvert(_UserName, UserName, CppData);
	NInternal_C::HPMAuthenticationErrorDescriptions ErrorDescriptions;
	NInternal::CppConvert(_ErrorDescriptions, ErrorDescriptions, CppData);
	NInternal_C::HPMUInt32 Flags;
	NInternal::CppConvert(_Flags, Flags, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationClientProtocolEnded(m_pSession, ChannelName.m_pString, SessionID, &SessionKey, UserName.m_pString, &ErrorDescriptions, Flags);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationIntegrationProtocolEnded(HPMString const &_ChannelName, HPMAuthenticationSessionKey const &_SessionKey, HPMUniqueID const &_UserID, HPMUInt64 _SessionID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString ChannelName;
	NInternal::CppConvert(_ChannelName, ChannelName, CppData);
	NInternal_C::HPMAuthenticationSessionKey SessionKey;
	NInternal::CppConvert(_SessionKey, SessionKey, CppData);
	NInternal_C::HPMUniqueID UserID;
	NInternal::CppConvert(_UserID, UserID, CppData);
	NInternal_C::HPMUInt64 SessionID;
	NInternal::CppConvert(_SessionID, SessionID, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationIntegrationProtocolEnded(m_pSession, ChannelName.m_pString, &SessionKey, UserID, SessionID);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationResolveCredentials(HPMString const &_UserName, HPMString const &_Password, HPMCredentialResolutionSessionIDsEnum const &_SessionIDs)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString UserName;
	NInternal::CppConvert(_UserName, UserName, CppData);
	NInternal_C::HPMString Password;
	NInternal::CppConvert(_Password, Password, CppData);
	NInternal_C::HPMCredentialResolutionSessionIDsEnum SessionIDs;
	NInternal::CppConvert(_SessionIDs, SessionIDs, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationResolveCredentials(m_pSession, UserName.m_pString, Password.m_pString, &SessionIDs, 0);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMChangeCallbackData_AuthenticationResolveCredentialsResponse AuthenticationResolveCredentialsBlock(HPMString const &_UserName, HPMString const &_Password, HPMCredentialResolutionSessionIDsEnum const &_SessionIDs)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString UserName;
	NInternal::CppConvert(_UserName, UserName, CppData);
	NInternal_C::HPMString Password;
	NInternal::CppConvert(_Password, Password, CppData);
	NInternal_C::HPMCredentialResolutionSessionIDsEnum SessionIDs;
	NInternal::CppConvert(_SessionIDs, SessionIDs, CppData);
	const NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.AuthenticationResolveCredentials(m_pSession, UserName.m_pString, Password.m_pString, &SessionIDs, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMChangeCallbackData_AuthenticationResolveCredentialsResponse Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void AuthenticationResolveCredentialsEnded(HPMUInt64 _FromSessionID, HPMString const &_UserName, HPMUniqueID const &_UserID, HPMString const &_ErrorMessage)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUInt64 FromSessionID;
	NInternal::CppConvert(_FromSessionID, FromSessionID, CppData);
	NInternal_C::HPMString UserName;
	NInternal::CppConvert(_UserName, UserName, CppData);
	NInternal_C::HPMUniqueID UserID;
	NInternal::CppConvert(_UserID, UserID, CppData);
	NInternal_C::HPMString ErrorMessage;
	NInternal::CppConvert(_ErrorMessage, ErrorMessage, CppData);
	HPMError Error = m_SDKFunctions.AuthenticationResolveCredentialsEnded(m_pSession, FromSessionID, UserName.m_pString, UserID, ErrorMessage.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMGlobalStatisticsSettings GlobalGetStatisticsSettings()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMGlobalStatisticsSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetStatisticsSettings(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMGlobalStatisticsSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMGlobalStatisticsSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetStatisticsSettings(HPMGlobalStatisticsSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMGlobalStatisticsSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetStatisticsSettings(m_pSession, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalRegisterCustomSettings(HPMString const &_Identifier, HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalRegisterCustomSettings(m_pSession, Identifier.m_pString, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalUnregisterCustomSettings(HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	HPMError Error = m_SDKFunctions.GlobalUnregisterCustomSettings(m_pSession, Identifier.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString GlobalGetRegisteredCustomSettings(HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetRegisteredCustomSettings(m_pSession, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 GlobalGetCustomSettingsIdentifierHash(HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.GlobalGetCustomSettingsIdentifierHash(m_pSession, Identifier.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMCustomSettingValue GlobalGetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMString const &_Identifier, HPMString const &_SettingPath)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	const NInternal_C::HPMCustomSettingValue *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetCustomSettingsValue(m_pSession, SettingType, Identifier.m_pString, SettingPath.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMCustomSettingValue Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMCustomSettingValue&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetCustomSettingsValue(EHPMCustomSettingsType _SettingType, HPMString const &_Identifier, HPMString const &_SettingPath, HPMCustomSettingValue const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 SettingType;
	NInternal::CppConvert(_SettingType, SettingType, CppData);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMString SettingPath;
	NInternal::CppConvert(_SettingPath, SettingPath, CppData);
	NInternal_C::HPMCustomSettingValue Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetCustomSettingsValue(m_pSession, SettingType, Identifier.m_pString, SettingPath.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMNotificationSubscription GlobalRegisterForDynamicCustomSettingsNotifications(HPMString const &_PathPrefix, HPMUserContext _UserContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString PathPrefix;
	NInternal::CppConvert(_PathPrefix, PathPrefix, CppData);
	NInternal_C::HPMUserContext UserContext;
	NInternal::CppConvert(_UserContext, UserContext, CppData);
	const NInternal_C::HPMNotificationSubscription *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalRegisterForDynamicCustomSettingsNotifications(m_pSession, PathPrefix.m_pString, UserContext, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMNotificationSubscription Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMNotificationSubscription&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalAddRightClickMenuItem(HPMRightClickContext const &_RightClickContext, HPMString const &_ParentUniqueName, HPMString const &_UniqueName, HPMUntranslatedString const &_ItemName, HPMUserContext _UserContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMRightClickContext *RightClickContext = _RightClickContext.GetOriginalObject();
	if (!RightClickContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMString ParentUniqueName;
	NInternal::CppConvert(_ParentUniqueName, ParentUniqueName, CppData);
	NInternal_C::HPMString UniqueName;
	NInternal::CppConvert(_UniqueName, UniqueName, CppData);
	const NInternal_C::HPMUntranslatedString *ItemName = _ItemName.GetOriginalObject();
	NInternal_C::HPMUserContext UserContext;
	NInternal::CppConvert(_UserContext, UserContext, CppData);
	HPMError Error = m_SDKFunctions.GlobalAddRightClickMenuItem(m_pSession, RightClickContext, ParentUniqueName.m_pString, UniqueName.m_pString, ItemName, UserContext);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMNotificationSubscription GlobalRegisterForRightClickNotifications(HPMUserContext _UserContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUserContext UserContext;
	NInternal::CppConvert(_UserContext, UserContext, CppData);
	const NInternal_C::HPMNotificationSubscription *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalRegisterForRightClickNotifications(m_pSession, UserContext, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMNotificationSubscription Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMNotificationSubscription&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalDisplayCustomSettingsDialog(HPMUniqueID const &_ProjectID, HPMUniqueID const &_ResourceID, HPMString const &_DialogSpec, HPMString const &_InitialValues)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ProjectID;
	NInternal::CppConvert(_ProjectID, ProjectID, CppData);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMString DialogSpec;
	NInternal::CppConvert(_DialogSpec, DialogSpec, CppData);
	NInternal_C::HPMString InitialValues;
	NInternal::CppConvert(_InitialValues, InitialValues, CppData);
	HPMError Error = m_SDKFunctions.GlobalDisplayCustomSettingsDialog(m_pSession, ProjectID, ResourceID, DialogSpec.m_pString, InitialValues.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalCancelCustomSettingsDialog(HPMDynamicCustomSettingsContext const &_DynamicContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDynamicCustomSettingsContext *DynamicContext = _DynamicContext.GetOriginalObject();
	if (!DynamicContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	HPMError Error = m_SDKFunctions.GlobalCancelCustomSettingsDialog(m_pSession, DynamicContext);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMNotificationSubscription GlobalRegisterForCustomTaskStatusNotifications(HPMString const &_PathPrefix, HPMUserContext _UserContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString PathPrefix;
	NInternal::CppConvert(_PathPrefix, PathPrefix, CppData);
	NInternal_C::HPMUserContext UserContext;
	NInternal::CppConvert(_UserContext, UserContext, CppData);
	const NInternal_C::HPMNotificationSubscription *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalRegisterForCustomTaskStatusNotifications(m_pSession, PathPrefix.m_pString, UserContext, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMNotificationSubscription Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMNotificationSubscription&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalDisplayCustomTaskStatusDialog(HPMCustomTaskStatusDialogValues const &_DialogValues, bool _bAddToDoTasks, HPMProjectEnum const &_Projects)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMCustomTaskStatusDialogValues DialogValues;
	NInternal::CppConvert(_DialogValues, DialogValues, CppData);
	NInternal_C::HPMInt32 bAddToDoTasks;
	NInternal::CppConvert(_bAddToDoTasks, bAddToDoTasks, CppData);
	NInternal_C::HPMProjectEnum Projects;
	NInternal::CppConvert(_Projects, Projects, CppData);
	HPMError Error = m_SDKFunctions.GlobalDisplayCustomTaskStatusDialog(m_pSession, &DialogValues, bAddToDoTasks, &Projects);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalCancelCustomTaskStatusDialog(HPMDynamicCustomSettingsContext const &_DynamicContext)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDynamicCustomSettingsContext *DynamicContext = _DynamicContext.GetOriginalObject();
	if (!DynamicContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	HPMError Error = m_SDKFunctions.GlobalCancelCustomTaskStatusDialog(m_pSession, DynamicContext);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalAddTasksCustomTaskStatusDialog(HPMDynamicCustomSettingsContext const &_DynamicContext, HPMTaskEnum const &_Tasks)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDynamicCustomSettingsContext *DynamicContext = _DynamicContext.GetOriginalObject();
	if (!DynamicContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMTaskEnum Tasks;
	NInternal::CppConvert(_Tasks, Tasks, CppData);
	HPMError Error = m_SDKFunctions.GlobalAddTasksCustomTaskStatusDialog(m_pSession, DynamicContext, &Tasks);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalRequestDynamicCustomSettingsValues(HPMDynamicCustomSettingsContext const &_DynamicContext, HPMUserContext _UserContext, HPMDynamicCustomSettingsPaths const &_SettingPaths)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDynamicCustomSettingsContext *DynamicContext = _DynamicContext.GetOriginalObject();
	if (!DynamicContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMUserContext UserContext;
	NInternal::CppConvert(_UserContext, UserContext, CppData);
	NInternal_C::HPMDynamicCustomSettingsPaths SettingPaths;
	NInternal::CppConvert(_SettingPaths, SettingPaths, CppData);
	HPMError Error = m_SDKFunctions.GlobalRequestDynamicCustomSettingsValues(m_pSession, DynamicContext, UserContext, &SettingPaths);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetDynamicCustomSettingsValues(HPMDynamicCustomSettingsContext const &_DynamicContext, HPMDynamicCustomSettingsValues const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDynamicCustomSettingsContext *DynamicContext = _DynamicContext.GetOriginalObject();
	if (!DynamicContext)
	{
		ThrowSDKException(EHPMError(EHPMError_OtherError));
	}
	NInternal_C::HPMDynamicCustomSettingsValues Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetDynamicCustomSettingsValues(m_pSession, DynamicContext, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMUInt32 GlobalGetSDKInternalDataIdentifierHash(HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMUInt32 NativeRet;
	HPMError Error = m_SDKFunctions.GlobalGetSDKInternalDataIdentifierHash(m_pSession, Identifier.m_pString, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMUInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMUInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMSDKInternalData GlobalGetSDKInternalData(HPMString const &_Identifier)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	const NInternal_C::HPMSDKInternalData *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetSDKInternalData(m_pSession, Identifier.m_pString, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMSDKInternalData Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMSDKInternalData&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetSDKInternalData(HPMString const &_Identifier, HPMSDKInternalData const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Identifier;
	NInternal::CppConvert(_Identifier, Identifier, CppData);
	NInternal_C::HPMSDKInternalData Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetSDKInternalData(m_pSession, Identifier.m_pString, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMString GlobalGetServerInternetName()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMString *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetServerInternetName(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMString Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMString&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetServerInternetName(HPMString const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMString Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetServerInternetName(m_pSession, Data.m_pString);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMDatabaseGUIDs GlobalGetDatabaseGUIDs()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMDatabaseGUIDs *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetDatabaseGUIDs(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMDatabaseGUIDs Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMDatabaseGUIDs&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalWorkflowsRemoveDeleted()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	HPMError Error = m_SDKFunctions.GlobalWorkflowsRemoveDeleted(m_pSession);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMReport GlobalGetReport(HPMUniqueID const &_ResourceID, HPMUniqueID const &_ReportID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMUniqueID ReportID;
	NInternal::CppConvert(_ReportID, ReportID, CppData);
	const NInternal_C::HPMReport *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetReport(m_pSession, ResourceID, ReportID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMReport Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMReport&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMReports GlobalGetReports(HPMUniqueID const &_ResourceID)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	const NInternal_C::HPMReports *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetReports(m_pSession, ResourceID, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMReports Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMReports&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetReports(HPMUniqueID const &_ResourceID, HPMReports const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMUniqueID ResourceID;
	NInternal::CppConvert(_ResourceID, ResourceID, CppData);
	NInternal_C::HPMReports Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetReports(m_pSession, ResourceID, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetDocumentAttachmentLimit(HPMInt64 _SizeLimitInBytes)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt64 SizeLimitInBytes;
	NInternal::CppConvert(_SizeLimitInBytes, SizeLimitInBytes, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetDocumentAttachmentLimit(m_pSession, SizeLimitInBytes);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt64 GlobalGetDocumentAttachmentLimit()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt64 NativeRet;
	HPMError Error = m_SDKFunctions.GlobalGetDocumentAttachmentLimit(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetCommentThumbnailDimensionInPixels(HPMInt32 _MaxPixel)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 MaxPixel;
	NInternal::CppConvert(_MaxPixel, MaxPixel, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetCommentThumbnailDimensionInPixels(m_pSession, MaxPixel);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt32 GlobalGetCommentThumbnailDimensionInPixels()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMInt32 NativeRet;
	HPMError Error = m_SDKFunctions.GlobalGetCommentThumbnailDimensionInPixels(m_pSession, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt32 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt32&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMInt64 GlobalGetChatMessageLastID(HPMChatRoom const &_ChatRoom)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMChatRoom ChatRoom;
	NInternal::CppConvert(_ChatRoom, ChatRoom, CppData);
	NInternal_C::HPMInt64 NativeRet;
	HPMError Error = m_SDKFunctions.GlobalGetChatMessageLastID(m_pSession, &ChatRoom, &NativeRet);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
	HPMInt64 Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMInt64&)NativeRet, Ret, CppData);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetTimesheetConfig(HPMTimesheetConfig const &_Data)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMTimesheetConfig Data;
	NInternal::CppConvert(_Data, Data, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetTimesheetConfig(m_pSession, &Data);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMTimesheetConfig GlobalGetTimesheetConfig()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMTimesheetConfig *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetTimesheetConfig(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMTimesheetConfig Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMTimesheetConfig&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
HPMGlobalEmailSettings GlobalGetEmailSettings()
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	const NInternal_C::HPMGlobalEmailSettings *pNativeRet = 0;
	HPMError Error = m_SDKFunctions.GlobalGetEmailSettings(m_pSession, &pNativeRet);
	if (Error)
	{
		if (pNativeRet)
			m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
		ThrowSDKException(EHPMError(Error));
	}
	HPMGlobalEmailSettings Ret;
	NInternal::CppConvertReverse((const NInternal_C::HPMGlobalEmailSettings&)(*pNativeRet), Ret, CppData);
	m_SDKFunctions.ObjectFree(m_pSession, pNativeRet, nullptr);
#ifdef DHansoftSDKSupportMoveSemantic
	return std::move(Ret);
#else
	return Ret;
#endif
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
#if ((!defined(DHPMSdk_OnlyDefinitions)))
void GlobalSetEmailSettings(HPMGlobalEmailSettings const &_Settings)
{
	NInternal::CCppConvertContext CppData(&m_SDKFunctions, m_pSession);
	NInternal_C::HPMGlobalEmailSettings Settings;
	NInternal::CppConvert(_Settings, Settings, CppData);
	HPMError Error = m_SDKFunctions.GlobalSetEmailSettings(m_pSession, &Settings);
	if (Error)
	{
		ThrowSDKException(EHPMError(Error));
	}
}

#endif // ((!defined(DHPMSdk_OnlyDefinitions)))
