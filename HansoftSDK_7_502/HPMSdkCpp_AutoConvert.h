template <>
class TCCppConvert<HPMUntranslatedString, NInternal_C::HPMUntranslatedString>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMUntranslatedString const &_From, NInternal_C::HPMUntranslatedString &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMUntranslatedString, HPMUntranslatedString>
{
public:
	static void Convert(NInternal_C::HPMUntranslatedString const &_From, HPMUntranslatedString &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMUntranslatedString, const NInternal_C::HPMUntranslatedString *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMUntranslatedString const &_From, const NInternal_C::HPMUntranslatedString * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMUntranslatedString* , HPMUntranslatedString>
{
public:
	static void Convert(const NInternal_C::HPMUntranslatedString * const &_From, HPMUntranslatedString &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMResourceDefinition, NInternal_C::HPMResourceDefinition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceDefinition const &_From, NInternal_C::HPMResourceDefinition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceDefinition, HPMResourceDefinition>
{
public:
	static void Convert(NInternal_C::HPMResourceDefinition const &_From, HPMResourceDefinition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMResourceDefinitionList, NInternal_C::HPMResourceDefinitionList>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceDefinition> m_Resources;
	};
	
	static void Convert(HPMResourceDefinitionList const &_From, NInternal_C::HPMResourceDefinitionList &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceDefinitionList, HPMResourceDefinitionList>
{
public:
	static void Convert(NInternal_C::HPMResourceDefinitionList const &_From, HPMResourceDefinitionList &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkPass, NInternal_C::HPMWorkPass>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkPass const &_From, NInternal_C::HPMWorkPass &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Start, _To.m_Start, _Context);
		CppConvert(_From.m_End, _To.m_End, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkPass, HPMWorkPass>
{
public:
	static void Convert(NInternal_C::HPMWorkPass const &_From, HPMWorkPass &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Start, _To.m_Start, _Context);
		CppConvertReverse(_From.m_End, _To.m_End, _Context);
	}
};

template <>
class TCCppConvert<HPMWorkDay, NInternal_C::HPMWorkDay>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkDay const &_From, NInternal_C::HPMWorkDay &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkPasses[i], _To.m_WorkPasses[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkDay, HPMWorkDay>
{
public:
	static void Convert(NInternal_C::HPMWorkDay const &_From, HPMWorkDay &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkPasses[i], _To.m_WorkPasses[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkingDays, NInternal_C::HPMWorkingDays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkingDays const &_From, NInternal_C::HPMWorkingDays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_bWorkDay[i], _To.m_bWorkDay[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkingDays, HPMWorkingDays>
{
public:
	static void Convert(NInternal_C::HPMWorkingDays const &_From, HPMWorkingDays &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_bWorkDay[i], _To.m_bWorkDay[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomWorkDay, NInternal_C::HPMCustomWorkDay>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomWorkDay const &_From, NInternal_C::HPMCustomWorkDay &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_bWorkDay, _To.m_bWorkDay, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomWorkDay, HPMCustomWorkDay>
{
public:
	static void Convert(NInternal_C::HPMCustomWorkDay const &_From, HPMCustomWorkDay &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_bWorkDay, _To.m_bWorkDay, _Context);
	}
};

template <>
class TCCppConvert<HPMCustomWorkingDays, NInternal_C::HPMCustomWorkingDays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMCustomWorkDay> m_ChangedDays;
	};
	
	static void Convert(HPMCustomWorkingDays const &_From, NInternal_C::HPMCustomWorkingDays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ChangedDays.size();
			pLocal->m_ChangedDays.resize(nMembers);
			_To.m_nChangedDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pChangedDays = &(*pLocal->m_ChangedDays.begin());
			else
				_To.m_pChangedDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ChangedDays[i], pLocal->m_ChangedDays[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomWorkingDays, HPMCustomWorkingDays>
{
public:
	static void Convert(NInternal_C::HPMCustomWorkingDays const &_From, HPMCustomWorkingDays &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nChangedDays;
			_To.m_ChangedDays.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pChangedDays[i], _To.m_ChangedDays[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomWorkHoursDay, NInternal_C::HPMCustomWorkHoursDay>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomWorkHoursDay const &_From, NInternal_C::HPMCustomWorkHoursDay &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkPasses[i], _To.m_WorkPasses[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomWorkHoursDay, HPMCustomWorkHoursDay>
{
public:
	static void Convert(NInternal_C::HPMCustomWorkHoursDay const &_From, HPMCustomWorkHoursDay &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkPasses[i], _To.m_WorkPasses[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomWorkingHours, NInternal_C::HPMCustomWorkingHours>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMCustomWorkHoursDay> m_ChangedDays;
	};
	
	static void Convert(HPMCustomWorkingHours const &_From, NInternal_C::HPMCustomWorkingHours &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ChangedDays.size();
			pLocal->m_ChangedDays.resize(nMembers);
			_To.m_nChangedDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pChangedDays = &(*pLocal->m_ChangedDays.begin());
			else
				_To.m_pChangedDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ChangedDays[i], pLocal->m_ChangedDays[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomWorkingHours, HPMCustomWorkingHours>
{
public:
	static void Convert(NInternal_C::HPMCustomWorkingHours const &_From, HPMCustomWorkingHours &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nChangedDays;
			_To.m_ChangedDays.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pChangedDays[i], _To.m_ChangedDays[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkingHours, NInternal_C::HPMWorkingHours>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkingHours const &_From, NInternal_C::HPMWorkingHours &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkDays[i], _To.m_WorkDays[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkingHours, HPMWorkingHours>
{
public:
	static void Convert(NInternal_C::HPMWorkingHours const &_From, HPMWorkingHours &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkDays[i], _To.m_WorkDays[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMHoliday, NInternal_C::HPMHoliday>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMHoliday const &_From, NInternal_C::HPMHoliday &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMHoliday, HPMHoliday>
{
public:
	static void Convert(NInternal_C::HPMHoliday const &_From, HPMHoliday &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
	}
};

template <>
class TCCppConvert<HPMHolidayYear, NInternal_C::HPMHolidayYear>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMHoliday> m_Days;
	};
	
	static void Convert(HPMHolidayYear const &_From, NInternal_C::HPMHolidayYear &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Year, _To.m_Year, _Context);
		{
			size_t nMembers = _From.m_Days.size();
			pLocal->m_Days.resize(nMembers);
			_To.m_nDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDays = &(*pLocal->m_Days.begin());
			else
				_To.m_pDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Days[i], pLocal->m_Days[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMHolidayYear, HPMHolidayYear>
{
public:
	static void Convert(NInternal_C::HPMHolidayYear const &_From, HPMHolidayYear &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Year, _To.m_Year, _Context);
		{
			size_t nMembers = _From.m_nDays;
			_To.m_Days.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDays[i], _To.m_Days[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMHolidays, NInternal_C::HPMHolidays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMHolidayYear> m_Years;
	};
	
	static void Convert(HPMHolidays const &_From, NInternal_C::HPMHolidays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Country, _To.m_pCountry, _Context);
		{
			size_t nMembers = _From.m_Years.size();
			pLocal->m_Years.resize(nMembers);
			_To.m_nYears = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pYears = &(*pLocal->m_Years.begin());
			else
				_To.m_pYears = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Years[i], pLocal->m_Years[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMHolidays, HPMHolidays>
{
public:
	static void Convert(NInternal_C::HPMHolidays const &_From, HPMHolidays &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pCountry, _To.m_Country, _Context);
		{
			size_t nMembers = _From.m_nYears;
			_To.m_Years.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pYears[i], _To.m_Years[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCalendarDayInfo, NInternal_C::HPMCalendarDayInfo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCalendarDayInfo const &_From, NInternal_C::HPMCalendarDayInfo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bWorkingDay, _To.m_bWorkingDay, _Context);
		CppConvert(_From.m_bHoliday, _To.m_bHoliday, _Context);
		CppConvert(_From.m_bCompensatedHoliday, _To.m_bCompensatedHoliday, _Context);
		CppConvert(_From.m_WorkingHours, _To.m_WorkingHours, _Context);
		CppConvert(_From.m_bOriginatesFromVacationTask, _To.m_bOriginatesFromVacationTask, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCalendarDayInfo, HPMCalendarDayInfo>
{
public:
	static void Convert(NInternal_C::HPMCalendarDayInfo const &_From, HPMCalendarDayInfo &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bWorkingDay, _To.m_bWorkingDay, _Context);
		CppConvertReverse(_From.m_bHoliday, _To.m_bHoliday, _Context);
		CppConvertReverse(_From.m_bCompensatedHoliday, _To.m_bCompensatedHoliday, _Context);
		CppConvertReverse(_From.m_WorkingHours, _To.m_WorkingHours, _Context);
		CppConvertReverse(_From.m_bOriginatesFromVacationTask, _To.m_bOriginatesFromVacationTask, _Context);
	}
};

template <>
class TCCppConvert<HPMMD5Checksum, NInternal_C::HPMMD5Checksum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMMD5Checksum const &_From, NInternal_C::HPMMD5Checksum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = 16;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Checksum[i], _To.m_Checksum[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMMD5Checksum, HPMMD5Checksum>
{
public:
	static void Convert(NInternal_C::HPMMD5Checksum const &_From, HPMMD5Checksum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = 16;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_Checksum[i], _To.m_Checksum[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomSettingValue, NInternal_C::HPMCustomSettingValue>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomSettingValue const &_From, NInternal_C::HPMCustomSettingValue &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bIsDefault, _To.m_bIsDefault, _Context);
		CppConvert(_From.m_bSecretValue, _To.m_bSecretValue, _Context);
		CppConvert(_From.m_Value, _To.m_pValue, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomSettingValue, HPMCustomSettingValue>
{
public:
	static void Convert(NInternal_C::HPMCustomSettingValue const &_From, HPMCustomSettingValue &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bIsDefault, _To.m_bIsDefault, _Context);
		CppConvertReverse(_From.m_bSecretValue, _To.m_bSecretValue, _Context);
		CppConvertReverse(_From.m_pValue, _To.m_Value, _Context);
	}
};

template <>
class TCCppConvert<HPMSDKInternalData, NInternal_C::HPMSDKInternalData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Data;
	};
	
	static void Convert(HPMSDKInternalData const &_From, NInternal_C::HPMSDKInternalData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bSecret, _To.m_bSecret, _Context);
		{
			size_t nMembers = _From.m_Data.size();
			pLocal->m_Data.resize(nMembers);
			_To.m_nData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pData = &(*pLocal->m_Data.begin());
			else
				_To.m_pData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Data[i], pLocal->m_Data[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMSDKInternalData, HPMSDKInternalData>
{
public:
	static void Convert(NInternal_C::HPMSDKInternalData const &_From, HPMSDKInternalData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bSecret, _To.m_bSecret, _Context);
		{
			size_t nMembers = _From.m_nData;
			_To.m_Data.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pData[i], _To.m_Data[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomStatisticsField, NInternal_C::HPMCustomStatisticsField>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomStatisticsField const &_From, NInternal_C::HPMCustomStatisticsField &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomStatisticsField, HPMCustomStatisticsField>
{
public:
	static void Convert(NInternal_C::HPMCustomStatisticsField const &_From, HPMCustomStatisticsField &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};

template <>
class TCCppConvert<HPMVariantData, NInternal_C::HPMVariantData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMVariantData const &_From, NInternal_C::HPMVariantData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVariantData, HPMVariantData>
{
public:
	static void Convert(NInternal_C::HPMVariantData const &_From, HPMVariantData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMVariantData, const NInternal_C::HPMVariantData *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMVariantData const &_From, const NInternal_C::HPMVariantData * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMVariantData* , HPMVariantData>
{
public:
	static void Convert(const NInternal_C::HPMVariantData * const &_From, HPMVariantData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMTaskField, NInternal_C::HPMTaskField>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskField const &_From, NInternal_C::HPMTaskField &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskField, HPMTaskField>
{
public:
	static void Convert(NInternal_C::HPMTaskField const &_From, HPMTaskField &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskFieldData, NInternal_C::HPMTaskFieldData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskFieldData const &_From, NInternal_C::HPMTaskFieldData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_TaskField, _To.m_TaskField, _Context);
		CppConvert(_From.m_VariantData, _To.m_pVariantData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskFieldData, HPMTaskFieldData>
{
public:
	static void Convert(NInternal_C::HPMTaskFieldData const &_From, HPMTaskFieldData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_TaskField, _To.m_TaskField, _Context);
		CppConvertReverse(_From.m_pVariantData, _To.m_VariantData, _Context);
	}
};

template <>
class TCCppConvert<HPMColumn, NInternal_C::HPMColumn>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMColumn const &_From, NInternal_C::HPMColumn &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ColumnType, _To.m_ColumnType, _Context);
		CppConvert(_From.m_ColumnID, _To.m_ColumnID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMColumn, HPMColumn>
{
public:
	static void Convert(NInternal_C::HPMColumn const &_From, HPMColumn &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ColumnType, _To.m_ColumnType, _Context);
		CppConvertReverse(_From.m_ColumnID, _To.m_ColumnID, _Context);
	}
};

template <>
class TCCppConvert<HPMColumnData, NInternal_C::HPMColumnData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_DataItems;
	};
	
	static void Convert(HPMColumnData const &_From, NInternal_C::HPMColumnData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_DataItems.size();
			pLocal->m_DataItems.resize(nMembers);
			_To.m_nDataItems = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDataItems = &(*pLocal->m_DataItems.begin());
			else
				_To.m_pDataItems = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_DataItems[i], pLocal->m_DataItems[i], _Context);
			}
		}
		CppConvert(_From.m_bFirstItemIsNotSet, _To.m_bFirstItemIsNotSet, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMColumnData, HPMColumnData>
{
public:
	static void Convert(NInternal_C::HPMColumnData const &_From, HPMColumnData &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nDataItems;
			_To.m_DataItems.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDataItems[i], _To.m_DataItems[i], _Context);
			}
		}
		CppConvertReverse(_From.m_bFirstItemIsNotSet, _To.m_bFirstItemIsNotSet, _Context);
	}
};

template <>
class TCCppConvert<HPMColumnDescription, NInternal_C::HPMColumnDescription>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMColumnDescription const &_From, NInternal_C::HPMColumnDescription &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_CriteriaDataType, _To.m_CriteriaDataType, _Context);
		CppConvert(_From.m_bFloatingPoint, _To.m_bFloatingPoint, _Context);
		CppConvert(_From.m_bReadOnly, _To.m_bReadOnly, _Context);
		CppConvert(_From.m_TaskFieldID, _To.m_TaskFieldID, _Context);
		CppConvert(_From.m_MinValue, _To.m_MinValue, _Context);
		CppConvert(_From.m_MaxValue, _To.m_MaxValue, _Context);
		CppConvert(_From.m_MaxDecimals, _To.m_MaxDecimals, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMColumnDescription, HPMColumnDescription>
{
public:
	static void Convert(NInternal_C::HPMColumnDescription const &_From, HPMColumnDescription &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_CriteriaDataType, _To.m_CriteriaDataType, _Context);
		CppConvertReverse(_From.m_bFloatingPoint, _To.m_bFloatingPoint, _Context);
		CppConvertReverse(_From.m_bReadOnly, _To.m_bReadOnly, _Context);
		CppConvertReverse(_From.m_TaskFieldID, _To.m_TaskFieldID, _Context);
		CppConvertReverse(_From.m_MinValue, _To.m_MinValue, _Context);
		CppConvertReverse(_From.m_MaxValue, _To.m_MaxValue, _Context);
		CppConvertReverse(_From.m_MaxDecimals, _To.m_MaxDecimals, _Context);
	}
};

template <>
class TCCppConvert<HPMColumnTextOptions, NInternal_C::HPMColumnTextOptions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMColumnTextOptions const &_From, NInternal_C::HPMColumnTextOptions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bForDisplay, _To.m_bForDisplay, _Context);
		CppConvert(_From.m_bMyWork, _To.m_bMyWork, _Context);
		CppConvert(_From.m_bDisplayUnits, _To.m_bDisplayUnits, _Context);
		CppConvert(_From.m_bExpandResources, _To.m_bExpandResources, _Context);
		CppConvert(_From.m_bOnlyFirstResource, _To.m_bOnlyFirstResource, _Context);
		CppConvert(_From.m_bNeedFullProjectPath, _To.m_bNeedFullProjectPath, _Context);
		CppConvert(_From.m_bNeedSprintInSubProjectPath, _To.m_bNeedSprintInSubProjectPath, _Context);
		CppConvert(_From.m_bSeparateSubProjectPath, _To.m_bSeparateSubProjectPath, _Context);
		CppConvert(_From.m_ForResource, _To.m_ForResource, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMColumnTextOptions, HPMColumnTextOptions>
{
public:
	static void Convert(NInternal_C::HPMColumnTextOptions const &_From, HPMColumnTextOptions &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bForDisplay, _To.m_bForDisplay, _Context);
		CppConvertReverse(_From.m_bMyWork, _To.m_bMyWork, _Context);
		CppConvertReverse(_From.m_bDisplayUnits, _To.m_bDisplayUnits, _Context);
		CppConvertReverse(_From.m_bExpandResources, _To.m_bExpandResources, _Context);
		CppConvertReverse(_From.m_bOnlyFirstResource, _To.m_bOnlyFirstResource, _Context);
		CppConvertReverse(_From.m_bNeedFullProjectPath, _To.m_bNeedFullProjectPath, _Context);
		CppConvertReverse(_From.m_bNeedSprintInSubProjectPath, _To.m_bNeedSprintInSubProjectPath, _Context);
		CppConvertReverse(_From.m_bSeparateSubProjectPath, _To.m_bSeparateSubProjectPath, _Context);
		CppConvertReverse(_From.m_ForResource, _To.m_ForResource, _Context);
	}
};

template <>
class TCCppConvert<HPMCustomColumnInfo, NInternal_C::HPMCustomColumnInfo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomColumnInfo const &_From, NInternal_C::HPMCustomColumnInfo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ColumnType, _To.m_ColumnType, _Context);
		CppConvert(_From.m_ColumnID, _To.m_ColumnID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomColumnInfo, HPMCustomColumnInfo>
{
public:
	static void Convert(NInternal_C::HPMCustomColumnInfo const &_From, HPMCustomColumnInfo &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ColumnType, _To.m_ColumnType, _Context);
		CppConvertReverse(_From.m_ColumnID, _To.m_ColumnID, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCondition, NInternal_C::HPMFindCondition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCondition const &_From, NInternal_C::HPMFindCondition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_SelectionType, _To.m_SelectionType, _Context);
		CppConvert(_From.m_SelectionID, _To.m_SelectionID, _Context);
		CppConvert(_From.m_Column, _To.m_Column, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCondition, HPMFindCondition>
{
public:
	static void Convert(NInternal_C::HPMFindCondition const &_From, HPMFindCondition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_SelectionType, _To.m_SelectionType, _Context);
		CppConvertReverse(_From.m_SelectionID, _To.m_SelectionID, _Context);
		CppConvertReverse(_From.m_Column, _To.m_Column, _Context);
	}
};

template <>
class TCCppConvert<HPMFindContextData, NInternal_C::HPMFindContextData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindContextData const &_From, NInternal_C::HPMFindContextData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindContextData, HPMFindContextData>
{
public:
	static void Convert(NInternal_C::HPMFindContextData const &_From, HPMFindContextData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMFindContextData, const NInternal_C::HPMFindContextData *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindContextData const &_From, const NInternal_C::HPMFindContextData * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMFindContextData* , HPMFindContextData>
{
public:
	static void Convert(const NInternal_C::HPMFindContextData * const &_From, HPMFindContextData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMFindContext, NInternal_C::HPMFindContext>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMFindCondition> m_Conditions;
		std::vector<NInternal_C::HPMUniqueID> m_Milestones;
		std::vector<NInternal_C::HPMUniqueID> m_PipelinesAndWorkflows;
	};
	
	static void Convert(HPMFindContext const &_From, NInternal_C::HPMFindContext &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Conditions.size();
			pLocal->m_Conditions.resize(nMembers);
			_To.m_nConditions = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pConditions = &(*pLocal->m_Conditions.begin());
			else
				_To.m_pConditions = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Conditions[i], pLocal->m_Conditions[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Milestones.size();
			pLocal->m_Milestones.resize(nMembers);
			_To.m_nMilestones = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMilestones = &(*pLocal->m_Milestones.begin());
			else
				_To.m_pMilestones = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Milestones[i], pLocal->m_Milestones[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_PipelinesAndWorkflows.size();
			pLocal->m_PipelinesAndWorkflows.resize(nMembers);
			_To.m_nPipelinesAndWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pPipelinesAndWorkflows = &(*pLocal->m_PipelinesAndWorkflows.begin());
			else
				_To.m_pPipelinesAndWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_PipelinesAndWorkflows[i], pLocal->m_PipelinesAndWorkflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindContext, HPMFindContext>
{
public:
	static void Convert(NInternal_C::HPMFindContext const &_From, HPMFindContext &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nConditions;
			_To.m_Conditions.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pConditions[i], _To.m_Conditions[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nMilestones;
			_To.m_Milestones.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMilestones[i], _To.m_Milestones[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nPipelinesAndWorkflows;
			_To.m_PipelinesAndWorkflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pPipelinesAndWorkflows[i], _To.m_PipelinesAndWorkflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkflowObjectIdentifier, NInternal_C::HPMWorkflowObjectIdentifier>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkflowObjectIdentifier const &_From, NInternal_C::HPMWorkflowObjectIdentifier &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkflowObjectIdentifier, HPMWorkflowObjectIdentifier>
{
public:
	static void Convert(NInternal_C::HPMWorkflowObjectIdentifier const &_From, HPMWorkflowObjectIdentifier &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMWorkflowStatusTransitInfo, NInternal_C::HPMWorkflowStatusTransitInfo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkflowStatusTransitInfo const &_From, NInternal_C::HPMWorkflowStatusTransitInfo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Time, _To.m_Time, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkflowStatusTransitInfo, HPMWorkflowStatusTransitInfo>
{
public:
	static void Convert(NInternal_C::HPMWorkflowStatusTransitInfo const &_From, HPMWorkflowStatusTransitInfo &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Time, _To.m_Time, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaDataListItem, NInternal_C::HPMFindCriteriaDataListItem>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaDataListItem const &_From, NInternal_C::HPMFindCriteriaDataListItem &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		CppConvert(_From.m_Data, _To.m_Data, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaDataListItem, HPMFindCriteriaDataListItem>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaDataListItem const &_From, HPMFindCriteriaDataListItem &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		CppConvertReverse(_From.m_Data, _To.m_Data, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaData, NInternal_C::HPMFindCriteriaData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaData const &_From, NInternal_C::HPMFindCriteriaData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaData, HPMFindCriteriaData>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaData const &_From, HPMFindCriteriaData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaData, const NInternal_C::HPMFindCriteriaData *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaData const &_From, const NInternal_C::HPMFindCriteriaData * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMFindCriteriaData* , HPMFindCriteriaData>
{
public:
	static void Convert(const NInternal_C::HPMFindCriteriaData * const &_From, HPMFindCriteriaData &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaConnection, NInternal_C::HPMFindCriteriaConnection>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaConnection const &_From, NInternal_C::HPMFindCriteriaConnection &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		CppConvert(_From.m_ConnectFrom, _To.m_ConnectFrom, _Context);
		CppConvert(_From.m_ConnectTo, _To.m_ConnectTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaConnection, HPMFindCriteriaConnection>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaConnection const &_From, HPMFindCriteriaConnection &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		CppConvertReverse(_From.m_ConnectFrom, _To.m_ConnectFrom, _Context);
		CppConvertReverse(_From.m_ConnectTo, _To.m_ConnectTo, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteria, NInternal_C::HPMFindCriteria>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMFindCriteriaConnection> m_ConnectedToCriterias;
	};
	
	static void Convert(HPMFindCriteria const &_From, NInternal_C::HPMFindCriteria &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		CppConvert(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvert(_From.m_PositionY, _To.m_PositionY, _Context);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_CriteriaString, _To.m_CriteriaString, _Context);
		CppConvert(_From.m_CriteriaData, _To.m_pCriteriaData, _Context);
		{
			size_t nMembers = _From.m_ConnectedToCriterias.size();
			pLocal->m_ConnectedToCriterias.resize(nMembers);
			_To.m_nConnectedToCriterias = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pConnectedToCriterias = &(*pLocal->m_ConnectedToCriterias.begin());
			else
				_To.m_pConnectedToCriterias = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ConnectedToCriterias[i], pLocal->m_ConnectedToCriterias[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteria, HPMFindCriteria>
{
public:
	static void Convert(NInternal_C::HPMFindCriteria const &_From, HPMFindCriteria &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		CppConvertReverse(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvertReverse(_From.m_PositionY, _To.m_PositionY, _Context);
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_CriteriaString, _To.m_CriteriaString, _Context);
		CppConvertReverse(_From.m_pCriteriaData, _To.m_CriteriaData, _Context);
		{
			size_t nMembers = _From.m_nConnectedToCriterias;
			_To.m_ConnectedToCriterias.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pConnectedToCriterias[i], _To.m_ConnectedToCriterias[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMFindCriteriaDataHeader, NInternal_C::HPMFindCriteriaDataHeader>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaDataHeader const &_From, NInternal_C::HPMFindCriteriaDataHeader &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Column, _To.m_Column, _Context);
		CppConvert(_From.m_Operator, _To.m_Operator, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaDataHeader, HPMFindCriteriaDataHeader>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaDataHeader const &_From, HPMFindCriteriaDataHeader &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Column, _To.m_Column, _Context);
		CppConvertReverse(_From.m_Operator, _To.m_Operator, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeText, NInternal_C::HPMFindCriteriaTypeText>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaTypeText const &_From, NInternal_C::HPMFindCriteriaTypeText &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		CppConvert(_From.m_Text, _To.m_Text, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeText, HPMFindCriteriaTypeText>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeText const &_From, HPMFindCriteriaTypeText &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		CppConvertReverse(_From.m_Text, _To.m_Text, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeInteger, NInternal_C::HPMFindCriteriaTypeInteger>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaTypeInteger const &_From, NInternal_C::HPMFindCriteriaTypeInteger &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		CppConvert(_From.m_Number, _To.m_Number, _Context);
		CppConvert(_From.m_ToNumber, _To.m_ToNumber, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeInteger, HPMFindCriteriaTypeInteger>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeInteger const &_From, HPMFindCriteriaTypeInteger &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		CppConvertReverse(_From.m_Number, _To.m_Number, _Context);
		CppConvertReverse(_From.m_ToNumber, _To.m_ToNumber, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeFloat, NInternal_C::HPMFindCriteriaTypeFloat>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaTypeFloat const &_From, NInternal_C::HPMFindCriteriaTypeFloat &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		CppConvert(_From.m_Number, _To.m_Number, _Context);
		CppConvert(_From.m_ToNumber, _To.m_ToNumber, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeFloat, HPMFindCriteriaTypeFloat>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeFloat const &_From, HPMFindCriteriaTypeFloat &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		CppConvertReverse(_From.m_Number, _To.m_Number, _Context);
		CppConvertReverse(_From.m_ToNumber, _To.m_ToNumber, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeGeneralCondition, NInternal_C::HPMFindCriteriaTypeGeneralCondition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaTypeGeneralCondition const &_From, NInternal_C::HPMFindCriteriaTypeGeneralCondition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeGeneralCondition, HPMFindCriteriaTypeGeneralCondition>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeGeneralCondition const &_From, HPMFindCriteriaTypeGeneralCondition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeDate, NInternal_C::HPMFindCriteriaTypeDate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMFindCriteriaTypeDate const &_From, NInternal_C::HPMFindCriteriaTypeDate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_ToDate, _To.m_ToDate, _Context);
		CppConvert(_From.m_Range, _To.m_Range, _Context);
		CppConvert(_From.m_Text, _To.m_Text, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeDate, HPMFindCriteriaTypeDate>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeDate const &_From, HPMFindCriteriaTypeDate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_ToDate, _To.m_ToDate, _Context);
		CppConvertReverse(_From.m_Range, _To.m_Range, _Context);
		CppConvertReverse(_From.m_Text, _To.m_Text, _Context);
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeDroplist, NInternal_C::HPMFindCriteriaTypeDroplist>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMFindCriteriaDataListItem> m_ListItems;
	};
	
	static void Convert(HPMFindCriteriaTypeDroplist const &_From, NInternal_C::HPMFindCriteriaTypeDroplist &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		{
			size_t nMembers = _From.m_ListItems.size();
			pLocal->m_ListItems.resize(nMembers);
			_To.m_nListItems = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pListItems = &(*pLocal->m_ListItems.begin());
			else
				_To.m_pListItems = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ListItems[i], pLocal->m_ListItems[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeDroplist, HPMFindCriteriaTypeDroplist>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeDroplist const &_From, HPMFindCriteriaTypeDroplist &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		{
			size_t nMembers = _From.m_nListItems;
			_To.m_ListItems.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pListItems[i], _To.m_ListItems[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMFindCriteriaTypeMultiSelectDroplist, NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMFindCriteriaDataListItem> m_ListItems;
	};
	
	static void Convert(HPMFindCriteriaTypeMultiSelectDroplist const &_From, NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Header, _To.m_Header, _Context);
		{
			size_t nMembers = _From.m_ListItems.size();
			pLocal->m_ListItems.resize(nMembers);
			_To.m_nListItems = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pListItems = &(*pLocal->m_ListItems.begin());
			else
				_To.m_pListItems = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ListItems[i], pLocal->m_ListItems[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist, HPMFindCriteriaTypeMultiSelectDroplist>
{
public:
	static void Convert(NInternal_C::HPMFindCriteriaTypeMultiSelectDroplist const &_From, HPMFindCriteriaTypeMultiSelectDroplist &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Header, _To.m_Header, _Context);
		{
			size_t nMembers = _From.m_nListItems;
			_To.m_ListItems.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pListItems[i], _To.m_ListItems[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMReportEmailProperties, NInternal_C::HPMReportEmailProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMReportEmailProperties const &_From, NInternal_C::HPMReportEmailProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_PeriodicityType, _To.m_PeriodicityType, _Context);
		CppConvert(_From.m_DayOfWeek, _To.m_DayOfWeek, _Context);
		CppConvert(_From.m_HourOfDay, _To.m_HourOfDay, _Context);
		CppConvert(_From.m_RecipientList, _To.m_RecipientList, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMReportEmailProperties, HPMReportEmailProperties>
{
public:
	static void Convert(NInternal_C::HPMReportEmailProperties const &_From, HPMReportEmailProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_PeriodicityType, _To.m_PeriodicityType, _Context);
		CppConvertReverse(_From.m_DayOfWeek, _To.m_DayOfWeek, _Context);
		CppConvertReverse(_From.m_HourOfDay, _To.m_HourOfDay, _Context);
		CppConvertReverse(_From.m_RecipientList, _To.m_RecipientList, _Context);
	}
};

template <>
class TCCppConvert<HPMReportSortGroupProperties, NInternal_C::HPMReportSortGroupProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMReportSortGroupProperties const &_From, NInternal_C::HPMReportSortGroupProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Column, _To.m_Column, _Context);
		CppConvert(_From.m_OrderType, _To.m_OrderType, _Context);
		CppConvert(_From.m_bDescending, _To.m_bDescending, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMReportSortGroupProperties, HPMReportSortGroupProperties>
{
public:
	static void Convert(NInternal_C::HPMReportSortGroupProperties const &_From, HPMReportSortGroupProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Column, _To.m_Column, _Context);
		CppConvertReverse(_From.m_OrderType, _To.m_OrderType, _Context);
		CppConvertReverse(_From.m_bDescending, _To.m_bDescending, _Context);
	}
};

template <>
class TCCppConvert<HPMReport, NInternal_C::HPMReport>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMColumn> m_ColumnsShowing;
		std::vector<NInternal_C::HPMReportSortGroupProperties> m_SortColumns;
		std::vector<NInternal_C::HPMFindCriteria> m_FindCriterias;
	};
	
	static void Convert(HPMReport const &_From, NInternal_C::HPMReport &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ReportID, _To.m_ReportID, _Context);
		CppConvert(_From.m_ReportGUID, _To.m_ReportGUID, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_Icon, _To.m_Icon, _Context);
		{
			size_t nMembers = _From.m_ColumnsShowing.size();
			pLocal->m_ColumnsShowing.resize(nMembers);
			_To.m_nColumnsShowing = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pColumnsShowing = &(*pLocal->m_ColumnsShowing.begin());
			else
				_To.m_pColumnsShowing = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ColumnsShowing[i], pLocal->m_ColumnsShowing[i], _Context);
			}
		}
		CppConvert(_From.m_EmailProperties, _To.m_EmailProperties, _Context);
		CppConvert(_From.m_ShareResourceList, _To.m_ShareResourceList, _Context);
		{
			size_t nMembers = _From.m_SortColumns.size();
			pLocal->m_SortColumns.resize(nMembers);
			_To.m_nSortColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSortColumns = &(*pLocal->m_SortColumns.begin());
			else
				_To.m_pSortColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_SortColumns[i], pLocal->m_SortColumns[i], _Context);
			}
		}
		CppConvert(_From.m_GroupByColumnMain, _To.m_GroupByColumnMain, _Context);
		CppConvert(_From.m_GroupByColumnSub, _To.m_GroupByColumnSub, _Context);
		{
			size_t nMembers = _From.m_FindCriterias.size();
			pLocal->m_FindCriterias.resize(nMembers);
			_To.m_nFindCriterias = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFindCriterias = &(*pLocal->m_FindCriterias.begin());
			else
				_To.m_pFindCriterias = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FindCriterias[i], pLocal->m_FindCriterias[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMReport, HPMReport>
{
public:
	static void Convert(NInternal_C::HPMReport const &_From, HPMReport &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ReportID, _To.m_ReportID, _Context);
		CppConvertReverse(_From.m_ReportGUID, _To.m_ReportGUID, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_Icon, _To.m_Icon, _Context);
		{
			size_t nMembers = _From.m_nColumnsShowing;
			_To.m_ColumnsShowing.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pColumnsShowing[i], _To.m_ColumnsShowing[i], _Context);
			}
		}
		CppConvertReverse(_From.m_EmailProperties, _To.m_EmailProperties, _Context);
		CppConvertReverse(_From.m_ShareResourceList, _To.m_ShareResourceList, _Context);
		{
			size_t nMembers = _From.m_nSortColumns;
			_To.m_SortColumns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSortColumns[i], _To.m_SortColumns[i], _Context);
			}
		}
		CppConvertReverse(_From.m_GroupByColumnMain, _To.m_GroupByColumnMain, _Context);
		CppConvertReverse(_From.m_GroupByColumnSub, _To.m_GroupByColumnSub, _Context);
		{
			size_t nMembers = _From.m_nFindCriterias;
			_To.m_FindCriterias.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFindCriterias[i], _To.m_FindCriterias[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMReports, NInternal_C::HPMReports>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMReport> m_Reports;
	};
	
	static void Convert(HPMReports const &_From, NInternal_C::HPMReports &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Reports.size();
			pLocal->m_Reports.resize(nMembers);
			_To.m_nReports = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pReports = &(*pLocal->m_Reports.begin());
			else
				_To.m_pReports = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Reports[i], pLocal->m_Reports[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMReports, HPMReports>
{
public:
	static void Convert(NInternal_C::HPMReports const &_From, HPMReports &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nReports;
			_To.m_Reports.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pReports[i], _To.m_Reports[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkflowProgressionState, NInternal_C::HPMWorkflowProgressionState>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskField> m_RequiredFields;
	};
	
	static void Convert(HPMWorkflowProgressionState const &_From, NInternal_C::HPMWorkflowProgressionState &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_StatusID, _To.m_StatusID, _Context);
		{
			size_t nMembers = _From.m_RequiredFields.size();
			pLocal->m_RequiredFields.resize(nMembers);
			_To.m_nRequiredFields = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pRequiredFields = &(*pLocal->m_RequiredFields.begin());
			else
				_To.m_pRequiredFields = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_RequiredFields[i], pLocal->m_RequiredFields[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkflowProgressionState, HPMWorkflowProgressionState>
{
public:
	static void Convert(NInternal_C::HPMWorkflowProgressionState const &_From, HPMWorkflowProgressionState &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_StatusID, _To.m_StatusID, _Context);
		{
			size_t nMembers = _From.m_nRequiredFields;
			_To.m_RequiredFields.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pRequiredFields[i], _To.m_RequiredFields[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMWorkflowProgressionStructure, NInternal_C::HPMWorkflowProgressionStructure>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMWorkflowProgressionState> m_ProgressionStates;
	};
	
	static void Convert(HPMWorkflowProgressionStructure const &_From, NInternal_C::HPMWorkflowProgressionStructure &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ProgressionStates.size();
			pLocal->m_ProgressionStates.resize(nMembers);
			_To.m_nProgressionStates = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pProgressionStates = &(*pLocal->m_ProgressionStates.begin());
			else
				_To.m_pProgressionStates = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ProgressionStates[i], pLocal->m_ProgressionStates[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkflowProgressionStructure, HPMWorkflowProgressionStructure>
{
public:
	static void Convert(NInternal_C::HPMWorkflowProgressionStructure const &_From, HPMWorkflowProgressionStructure &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nProgressionStates;
			_To.m_ProgressionStates.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pProgressionStates[i], _To.m_ProgressionStates[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCommunicationChannelPacket, NInternal_C::HPMCommunicationChannelPacket>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Bytes;
	};
	
	static void Convert(HPMCommunicationChannelPacket const &_From, NInternal_C::HPMCommunicationChannelPacket &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Bytes.size();
			pLocal->m_Bytes.resize(nMembers);
			_To.m_nBytes = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pBytes = &(*pLocal->m_Bytes.begin());
			else
				_To.m_pBytes = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Bytes[i], pLocal->m_Bytes[i], _Context);
			}
		}
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCommunicationChannelPacket, HPMCommunicationChannelPacket>
{
public:
	static void Convert(NInternal_C::HPMCommunicationChannelPacket const &_From, HPMCommunicationChannelPacket &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nBytes;
			_To.m_Bytes.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pBytes[i], _To.m_Bytes[i], _Context);
			}
		}
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
	}
};

template <>
class TCCppConvert<HPMTimesheetConfigRow, NInternal_C::HPMTimesheetConfigRow>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTimesheetConfigRow const &_From, NInternal_C::HPMTimesheetConfigRow &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_RowID, _To.m_RowID, _Context);
		CppConvert(_From.m_RowName, _To.m_pRowName, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTimesheetConfigRow, HPMTimesheetConfigRow>
{
public:
	static void Convert(NInternal_C::HPMTimesheetConfigRow const &_From, HPMTimesheetConfigRow &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_RowID, _To.m_RowID, _Context);
		CppConvertReverse(_From.m_pRowName, _To.m_RowName, _Context);
	}
};

template <>
class TCCppConvert<HPMTimesheetActivity, NInternal_C::HPMTimesheetActivity>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTimesheetActivity const &_From, NInternal_C::HPMTimesheetActivity &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_RowID, _To.m_RowID, _Context);
		CppConvert(_From.m_ActivityID, _To.m_ActivityID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_Started, _To.m_Started, _Context);
		CppConvert(_From.m_Duration, _To.m_Duration, _Context);
		CppConvert(_From.m_Comment, _To.m_Comment, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTimesheetActivity, HPMTimesheetActivity>
{
public:
	static void Convert(NInternal_C::HPMTimesheetActivity const &_From, HPMTimesheetActivity &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_RowID, _To.m_RowID, _Context);
		CppConvertReverse(_From.m_ActivityID, _To.m_ActivityID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_Started, _To.m_Started, _Context);
		CppConvertReverse(_From.m_Duration, _To.m_Duration, _Context);
		CppConvertReverse(_From.m_Comment, _To.m_Comment, _Context);
	}
};

template <>
class TCCppConvert<HPMTimesheetDay, NInternal_C::HPMTimesheetDay>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTimesheetActivity> m_Activities;
	};
	
	static void Convert(HPMTimesheetDay const &_From, NInternal_C::HPMTimesheetDay &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DayID, _To.m_DayID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Day, _To.m_Day, _Context);
		{
			size_t nMembers = _From.m_Activities.size();
			pLocal->m_Activities.resize(nMembers);
			_To.m_nActivities = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pActivities = &(*pLocal->m_Activities.begin());
			else
				_To.m_pActivities = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Activities[i], pLocal->m_Activities[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTimesheetDay, HPMTimesheetDay>
{
public:
	static void Convert(NInternal_C::HPMTimesheetDay const &_From, HPMTimesheetDay &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_DayID, _To.m_DayID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Day, _To.m_Day, _Context);
		{
			size_t nMembers = _From.m_nActivities;
			_To.m_Activities.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pActivities[i], _To.m_Activities[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMUniqueEnum, NInternal_C::HPMUniqueEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_IDs;
	};
	
	static void Convert(HPMUniqueEnum const &_From, NInternal_C::HPMUniqueEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_IDs.size();
			pLocal->m_IDs.resize(nMembers);
			_To.m_nIDs = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pIDs = &(*pLocal->m_IDs.begin());
			else
				_To.m_pIDs = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_IDs[i], pLocal->m_IDs[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMUniqueEnum, HPMUniqueEnum>
{
public:
	static void Convert(NInternal_C::HPMUniqueEnum const &_From, HPMUniqueEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nIDs;
			_To.m_IDs.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pIDs[i], _To.m_IDs[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTimesheetConfig, NInternal_C::HPMTimesheetConfig>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTimesheetConfigRow> m_Rows;
	};
	
	static void Convert(HPMTimesheetConfig const &_From, NInternal_C::HPMTimesheetConfig &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DefaultActivityType, _To.m_DefaultActivityType, _Context);
		CppConvert(_From.m_DefaultStarted, _To.m_DefaultStarted, _Context);
		CppConvert(_From.m_DefaultDuration, _To.m_DefaultDuration, _Context);
		CppConvert(_From.m_bHideStartFinish, _To.m_bHideStartFinish, _Context);
		{
			size_t nMembers = _From.m_Rows.size();
			pLocal->m_Rows.resize(nMembers);
			_To.m_nRows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pRows = &(*pLocal->m_Rows.begin());
			else
				_To.m_pRows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Rows[i], pLocal->m_Rows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTimesheetConfig, HPMTimesheetConfig>
{
public:
	static void Convert(NInternal_C::HPMTimesheetConfig const &_From, HPMTimesheetConfig &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_DefaultActivityType, _To.m_DefaultActivityType, _Context);
		CppConvertReverse(_From.m_DefaultStarted, _To.m_DefaultStarted, _Context);
		CppConvertReverse(_From.m_DefaultDuration, _To.m_DefaultDuration, _Context);
		CppConvertReverse(_From.m_bHideStartFinish, _To.m_bHideStartFinish, _Context);
		{
			size_t nMembers = _From.m_nRows;
			_To.m_Rows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pRows[i], _To.m_Rows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMDynamicCustomSettingsContext, NInternal_C::HPMDynamicCustomSettingsContext>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDynamicCustomSettingsContext const &_From, NInternal_C::HPMDynamicCustomSettingsContext &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDynamicCustomSettingsContext, HPMDynamicCustomSettingsContext>
{
public:
	static void Convert(NInternal_C::HPMDynamicCustomSettingsContext const &_From, HPMDynamicCustomSettingsContext &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMDynamicCustomSettingsContext, const NInternal_C::HPMDynamicCustomSettingsContext *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDynamicCustomSettingsContext const &_From, const NInternal_C::HPMDynamicCustomSettingsContext * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMDynamicCustomSettingsContext* , HPMDynamicCustomSettingsContext>
{
public:
	static void Convert(const NInternal_C::HPMDynamicCustomSettingsContext * const &_From, HPMDynamicCustomSettingsContext &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMRightClickContext, NInternal_C::HPMRightClickContext>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMRightClickContext const &_From, NInternal_C::HPMRightClickContext &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMRightClickContext, HPMRightClickContext>
{
public:
	static void Convert(NInternal_C::HPMRightClickContext const &_From, HPMRightClickContext &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMRightClickContext, const NInternal_C::HPMRightClickContext *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMRightClickContext const &_From, const NInternal_C::HPMRightClickContext * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMRightClickContext* , HPMRightClickContext>
{
public:
	static void Convert(const NInternal_C::HPMRightClickContext * const &_From, HPMRightClickContext &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMDynamicCustomSettingsValue, NInternal_C::HPMDynamicCustomSettingsValue>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDynamicCustomSettingsValue const &_From, NInternal_C::HPMDynamicCustomSettingsValue &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Path, _To.m_pPath, _Context);
		CppConvert(_From.m_Value, _To.m_pValue, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDynamicCustomSettingsValue, HPMDynamicCustomSettingsValue>
{
public:
	static void Convert(NInternal_C::HPMDynamicCustomSettingsValue const &_From, HPMDynamicCustomSettingsValue &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pPath, _To.m_Path, _Context);
		CppConvertReverse(_From.m_pValue, _To.m_Value, _Context);
	}
};

template <>
class TCCppConvert<HPMDynamicCustomSettingsValues, NInternal_C::HPMDynamicCustomSettingsValues>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMDynamicCustomSettingsValue> m_Values;
	};
	
	static void Convert(HPMDynamicCustomSettingsValues const &_From, NInternal_C::HPMDynamicCustomSettingsValues &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Values.size();
			pLocal->m_Values.resize(nMembers);
			_To.m_nValues = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pValues = &(*pLocal->m_Values.begin());
			else
				_To.m_pValues = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Values[i], pLocal->m_Values[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDynamicCustomSettingsValues, HPMDynamicCustomSettingsValues>
{
public:
	static void Convert(NInternal_C::HPMDynamicCustomSettingsValues const &_From, HPMDynamicCustomSettingsValues &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nValues;
			_To.m_Values.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pValues[i], _To.m_Values[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMDynamicCustomSettingsPaths, NInternal_C::HPMDynamicCustomSettingsPaths>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_Paths;
	};
	
	static void Convert(HPMDynamicCustomSettingsPaths const &_From, NInternal_C::HPMDynamicCustomSettingsPaths &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Paths.size();
			pLocal->m_Paths.resize(nMembers);
			_To.m_nPaths = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pPaths = &(*pLocal->m_Paths.begin());
			else
				_To.m_pPaths = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Paths[i], pLocal->m_Paths[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDynamicCustomSettingsPaths, HPMDynamicCustomSettingsPaths>
{
public:
	static void Convert(NInternal_C::HPMDynamicCustomSettingsPaths const &_From, HPMDynamicCustomSettingsPaths &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nPaths;
			_To.m_Paths.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pPaths[i], _To.m_Paths[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChatRoom, NInternal_C::HPMChatRoom>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChatRoom const &_From, NInternal_C::HPMChatRoom &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChatResource1, _To.m_ChatResource1, _Context);
		CppConvert(_From.m_ChatResource2, _To.m_ChatResource2, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChatRoom, HPMChatRoom>
{
public:
	static void Convert(NInternal_C::HPMChatRoom const &_From, HPMChatRoom &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ChatResource1, _To.m_ChatResource1, _Context);
		CppConvertReverse(_From.m_ChatResource2, _To.m_ChatResource2, _Context);
	}
};

template <>
class TCCppConvert<HPMChatMessage, NInternal_C::HPMChatMessage>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChatMessage const &_From, NInternal_C::HPMChatMessage &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		CppConvert(_From.m_Message, _To.m_pMessage, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChatMessage, HPMChatMessage>
{
public:
	static void Convert(NInternal_C::HPMChatMessage const &_From, HPMChatMessage &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		CppConvertReverse(_From.m_pMessage, _To.m_Message, _Context);
	}
};

template <>
class TCCppConvert<HPMLastAssignedInWorkflowStatus, NInternal_C::HPMLastAssignedInWorkflowStatus>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMLastAssignedInWorkflowStatus const &_From, NInternal_C::HPMLastAssignedInWorkflowStatus &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
		CppConvert(_From.m_LastAssignedList, _To.m_LastAssignedList, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMLastAssignedInWorkflowStatus, HPMLastAssignedInWorkflowStatus>
{
public:
	static void Convert(NInternal_C::HPMLastAssignedInWorkflowStatus const &_From, HPMLastAssignedInWorkflowStatus &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
		CppConvertReverse(_From.m_LastAssignedList, _To.m_LastAssignedList, _Context);
	}
};

template <>
class TCCppConvert<HPMLastAssignedInWorkflowStatuses, NInternal_C::HPMLastAssignedInWorkflowStatuses>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMLastAssignedInWorkflowStatus> m_LastAssignedList;
	};
	
	static void Convert(HPMLastAssignedInWorkflowStatuses const &_From, NInternal_C::HPMLastAssignedInWorkflowStatuses &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_LastAssignedList.size();
			pLocal->m_LastAssignedList.resize(nMembers);
			_To.m_nLastAssignedList = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pLastAssignedList = &(*pLocal->m_LastAssignedList.begin());
			else
				_To.m_pLastAssignedList = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_LastAssignedList[i], pLocal->m_LastAssignedList[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMLastAssignedInWorkflowStatuses, HPMLastAssignedInWorkflowStatuses>
{
public:
	static void Convert(NInternal_C::HPMLastAssignedInWorkflowStatuses const &_From, HPMLastAssignedInWorkflowStatuses &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nLastAssignedList;
			_To.m_LastAssignedList.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pLastAssignedList[i], _To.m_LastAssignedList[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMLanguage, NInternal_C::HPMLanguage>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMLanguage const &_From, NInternal_C::HPMLanguage &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvert(_From.m_CustomLanguageID, _To.m_pCustomLanguageID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMLanguage, HPMLanguage>
{
public:
	static void Convert(NInternal_C::HPMLanguage const &_From, HPMLanguage &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvertReverse(_From.m_pCustomLanguageID, _To.m_CustomLanguageID, _Context);
	}
};

template <>
class TCCppConvert<HPMLanguages, NInternal_C::HPMLanguages>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMLanguage> m_Languages;
	};
	
	static void Convert(HPMLanguages const &_From, NInternal_C::HPMLanguages &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Languages.size();
			pLocal->m_Languages.resize(nMembers);
			_To.m_nLanguages = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pLanguages = &(*pLocal->m_Languages.begin());
			else
				_To.m_pLanguages = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Languages[i], pLocal->m_Languages[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMLanguages, HPMLanguages>
{
public:
	static void Convert(NInternal_C::HPMLanguages const &_From, HPMLanguages &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nLanguages;
			_To.m_Languages.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pLanguages[i], _To.m_Languages[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMUntranslatedStringParamListEntry, NInternal_C::HPMUntranslatedStringParamListEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMUntranslatedStringParamListEntry const &_From, NInternal_C::HPMUntranslatedStringParamListEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_VariantData, _To.m_pVariantData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMUntranslatedStringParamListEntry, HPMUntranslatedStringParamListEntry>
{
public:
	static void Convert(NInternal_C::HPMUntranslatedStringParamListEntry const &_From, HPMUntranslatedStringParamListEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pVariantData, _To.m_VariantData, _Context);
	}
};

template <>
class TCCppConvert<HPMUntranslatedStringParamList, NInternal_C::HPMUntranslatedStringParamList>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUntranslatedStringParamListEntry> m_Params;
	};
	
	static void Convert(HPMUntranslatedStringParamList const &_From, NInternal_C::HPMUntranslatedStringParamList &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Params.size();
			pLocal->m_Params.resize(nMembers);
			_To.m_nParams = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pParams = &(*pLocal->m_Params.begin());
			else
				_To.m_pParams = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Params[i], pLocal->m_Params[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMUntranslatedStringParamList, HPMUntranslatedStringParamList>
{
public:
	static void Convert(NInternal_C::HPMUntranslatedStringParamList const &_From, HPMUntranslatedStringParamList &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nParams;
			_To.m_Params.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pParams[i], _To.m_Params[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalStatisticsSettingsChange, NInternal_C::HPMChangeCallbackData_GlobalStatisticsSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalStatisticsSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalStatisticsSettingsChange, HPMChangeCallbackData_GlobalStatisticsSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalStatisticsSettingsChange const &_From, HPMChangeCallbackData_GlobalStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalServerNameChange, NInternal_C::HPMChangeCallbackData_GlobalServerNameChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalServerNameChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalServerNameChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalServerNameChange, HPMChangeCallbackData_GlobalServerNameChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalServerNameChange const &_From, HPMChangeCallbackData_GlobalServerNameChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange, NInternal_C::HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange, HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange const &_From, HPMChangeCallbackData_GlobalDocumentAttachmentLimitChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_AuthenticationProtocolBegin, NInternal_C::HPMChangeCallbackData_AuthenticationProtocolBegin>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_AuthenticationProtocolBegin const &_From, NInternal_C::HPMChangeCallbackData_AuthenticationProtocolBegin &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Identifier, _To.m_pIdentifier, _Context);
		CppConvert(_From.m_UserName, _To.m_pUserName, _Context);
		CppConvert(_From.m_Password, _To.m_pPassword, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_AuthenticationProtocolBegin, HPMChangeCallbackData_AuthenticationProtocolBegin>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_AuthenticationProtocolBegin const &_From, HPMChangeCallbackData_AuthenticationProtocolBegin &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pIdentifier, _To.m_Identifier, _Context);
		CppConvertReverse(_From.m_pUserName, _To.m_UserName, _Context);
		CppConvertReverse(_From.m_pPassword, _To.m_Password, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CommunicationChannelPacketReceived, NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketReceived>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CommunicationChannelPacketReceived const &_From, NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketReceived &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
		CppConvert(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvert(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvert(_From.m_Packet, _To.m_Packet, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketReceived, HPMChangeCallbackData_CommunicationChannelPacketReceived>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketReceived const &_From, HPMChangeCallbackData_CommunicationChannelPacketReceived &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
		CppConvertReverse(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvertReverse(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvertReverse(_From.m_Packet, _To.m_Packet, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CommunicationChannelPacketDropped, NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketDropped>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CommunicationChannelPacketDropped const &_From, NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketDropped &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
		CppConvert(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvert(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvert(_From.m_Packet, _To.m_Packet, _Context);
		CppConvert(_From.m_Reason, _To.m_Reason, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketDropped, HPMChangeCallbackData_CommunicationChannelPacketDropped>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CommunicationChannelPacketDropped const &_From, HPMChangeCallbackData_CommunicationChannelPacketDropped &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
		CppConvertReverse(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvertReverse(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvertReverse(_From.m_Packet, _To.m_Packet, _Context);
		CppConvertReverse(_From.m_Reason, _To.m_Reason, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CommunicationChannelRegisterFailed, NInternal_C::HPMChangeCallbackData_CommunicationChannelRegisterFailed>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CommunicationChannelRegisterFailed const &_From, NInternal_C::HPMChangeCallbackData_CommunicationChannelRegisterFailed &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
		CppConvert(_From.m_Reason, _To.m_Reason, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CommunicationChannelRegisterFailed, HPMChangeCallbackData_CommunicationChannelRegisterFailed>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CommunicationChannelRegisterFailed const &_From, HPMChangeCallbackData_CommunicationChannelRegisterFailed &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
		CppConvertReverse(_From.m_Reason, _To.m_Reason, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CommunicationChannelsChanged, NInternal_C::HPMChangeCallbackData_CommunicationChannelsChanged>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CommunicationChannelsChanged const &_From, NInternal_C::HPMChangeCallbackData_CommunicationChannelsChanged &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CommunicationChannelsChanged, HPMChangeCallbackData_CommunicationChannelsChanged>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CommunicationChannelsChanged const &_From, HPMChangeCallbackData_CommunicationChannelsChanged &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_AuthenticationResolveCredentials, NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentials>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_AuthenticationResolveCredentials const &_From, NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentials &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
		CppConvert(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvert(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvert(_From.m_UserName, _To.m_pUserName, _Context);
		CppConvert(_From.m_Password, _To.m_pPassword, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentials, HPMChangeCallbackData_AuthenticationResolveCredentials>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentials const &_From, HPMChangeCallbackData_AuthenticationResolveCredentials &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
		CppConvertReverse(_From.m_ToSessionID, _To.m_ToSessionID, _Context);
		CppConvertReverse(_From.m_FromSessionID, _To.m_FromSessionID, _Context);
		CppConvertReverse(_From.m_pUserName, _To.m_UserName, _Context);
		CppConvertReverse(_From.m_pPassword, _To.m_Password, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_AuthenticationResolveCredentialsResponse, NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_AuthenticationResolveCredentialsResponse const &_From, NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_UserName, _To.m_pUserName, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_AuthSessionID, _To.m_AuthSessionID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse, HPMChangeCallbackData_AuthenticationResolveCredentialsResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_AuthenticationResolveCredentialsResponse const &_From, HPMChangeCallbackData_AuthenticationResolveCredentialsResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pUserName, _To.m_UserName, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_AuthSessionID, _To.m_AuthSessionID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceCreate, NInternal_C::HPMChangeCallbackData_ResourceCreate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceCreate const &_From, NInternal_C::HPMChangeCallbackData_ResourceCreate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_TemporaryResourceID, _To.m_TemporaryResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceCreate, HPMChangeCallbackData_ResourceCreate>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceCreate const &_From, HPMChangeCallbackData_ResourceCreate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_TemporaryResourceID, _To.m_TemporaryResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceDelete, NInternal_C::HPMChangeCallbackData_ResourceDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceDelete const &_From, NInternal_C::HPMChangeCallbackData_ResourceDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceDelete, HPMChangeCallbackData_ResourceDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceDelete const &_From, HPMChangeCallbackData_ResourceDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourcePropertiesChange, NInternal_C::HPMChangeCallbackData_ResourcePropertiesChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourcePropertiesChange const &_From, NInternal_C::HPMChangeCallbackData_ResourcePropertiesChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourcePropertiesChange, HPMChangeCallbackData_ResourcePropertiesChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourcePropertiesChange const &_From, HPMChangeCallbackData_ResourcePropertiesChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceGlobalSettingsChange, NInternal_C::HPMChangeCallbackData_ResourceGlobalSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceGlobalSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceGlobalSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceGlobalSettingsChange, HPMChangeCallbackData_ResourceGlobalSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceGlobalSettingsChange const &_From, HPMChangeCallbackData_ResourceGlobalSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceLicenseViolation, NInternal_C::HPMChangeCallbackData_ResourceLicenseViolation>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceLicenseViolation const &_From, NInternal_C::HPMChangeCallbackData_ResourceLicenseViolation &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ViolationReason, _To.m_ViolationReason, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceLicenseViolation, HPMChangeCallbackData_ResourceLicenseViolation>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceLicenseViolation const &_From, HPMChangeCallbackData_ResourceLicenseViolation &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ViolationReason, _To.m_ViolationReason, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceLockFlagsChange, NInternal_C::HPMChangeCallbackData_ResourceLockFlagsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceLockFlagsChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceLockFlagsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceLockFlagsChange, HPMChangeCallbackData_ResourceLockFlagsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceLockFlagsChange const &_From, HPMChangeCallbackData_ResourceLockFlagsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourcePreferredLanguageChange, NInternal_C::HPMChangeCallbackData_ResourcePreferredLanguageChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourcePreferredLanguageChange const &_From, NInternal_C::HPMChangeCallbackData_ResourcePreferredLanguageChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvert(_From.m_CustomLanguageID, _To.m_pCustomLanguageID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourcePreferredLanguageChange, HPMChangeCallbackData_ResourcePreferredLanguageChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourcePreferredLanguageChange const &_From, HPMChangeCallbackData_ResourcePreferredLanguageChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvertReverse(_From.m_pCustomLanguageID, _To.m_CustomLanguageID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceLastUsedLanguageChange, NInternal_C::HPMChangeCallbackData_ResourceLastUsedLanguageChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceLastUsedLanguageChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceLastUsedLanguageChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvert(_From.m_CustomLanguageID, _To.m_pCustomLanguageID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceLastUsedLanguageChange, HPMChangeCallbackData_ResourceLastUsedLanguageChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceLastUsedLanguageChange const &_From, HPMChangeCallbackData_ResourceLastUsedLanguageChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_LanguageID, _To.m_LanguageID, _Context);
		CppConvertReverse(_From.m_pCustomLanguageID, _To.m_CustomLanguageID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceGroupsChange, NInternal_C::HPMChangeCallbackData_ResourceGroupsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceGroupsChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceGroupsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceGroupsChange, HPMChangeCallbackData_ResourceGroupsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceGroupsChange const &_From, HPMChangeCallbackData_ResourceGroupsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectViewPresetsChange, NInternal_C::HPMChangeCallbackData_ProjectViewPresetsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectViewPresetsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectViewPresetsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectViewPresetsChange, HPMChangeCallbackData_ProjectViewPresetsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectViewPresetsChange const &_From, HPMChangeCallbackData_ProjectViewPresetsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectViewPresetsApplied, NInternal_C::HPMChangeCallbackData_ProjectViewPresetsApplied>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectViewPresetsApplied const &_From, NInternal_C::HPMChangeCallbackData_ProjectViewPresetsApplied &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectViewPresetsApplied, HPMChangeCallbackData_ProjectViewPresetsApplied>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectViewPresetsApplied const &_From, HPMChangeCallbackData_ProjectViewPresetsApplied &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceTimesheetWeekDataChange, NInternal_C::HPMChangeCallbackData_ResourceTimesheetWeekDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceTimesheetWeekDataChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceTimesheetWeekDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Year, _To.m_Year, _Context);
		CppConvert(_From.m_Week, _To.m_Week, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceTimesheetWeekDataChange, HPMChangeCallbackData_ResourceTimesheetWeekDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceTimesheetWeekDataChange const &_From, HPMChangeCallbackData_ResourceTimesheetWeekDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Year, _To.m_Year, _Context);
		CppConvertReverse(_From.m_Week, _To.m_Week, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalTimesheetConfigChange, NInternal_C::HPMChangeCallbackData_GlobalTimesheetConfigChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalTimesheetConfigChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalTimesheetConfigChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalTimesheetConfigChange, HPMChangeCallbackData_GlobalTimesheetConfigChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalTimesheetConfigChange const &_From, HPMChangeCallbackData_GlobalTimesheetConfigChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete, NInternal_C::HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete const &_From, NInternal_C::HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete, HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete const &_From, HPMChangeCallbackData_ResourceTimesheetPeriodDataDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectTimesheetLockChange, NInternal_C::HPMChangeCallbackData_ProjectTimesheetLockChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectTimesheetLockChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectTimesheetLockChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectTimesheetLockChange, HPMChangeCallbackData_ProjectTimesheetLockChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectTimesheetLockChange const &_From, HPMChangeCallbackData_ProjectTimesheetLockChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceGetTimesheetDayResponse, NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceGetTimesheetDayResponse const &_From, NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_Day, _To.m_Day, _Context);
		CppConvert(_From.m_CurrentHighestRowID, _To.m_CurrentHighestRowID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse, HPMChangeCallbackData_ResourceGetTimesheetDayResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceGetTimesheetDayResponse const &_From, HPMChangeCallbackData_ResourceGetTimesheetDayResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_Day, _To.m_Day, _Context);
		CppConvertReverse(_From.m_CurrentHighestRowID, _To.m_CurrentHighestRowID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TimesheetGetDateRangeResponse, NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTimesheetDay> m_TimesheetDays;
	};
	
	static void Convert(HPMChangeCallbackData_TimesheetGetDateRangeResponse const &_From, NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		{
			size_t nMembers = _From.m_TimesheetDays.size();
			pLocal->m_TimesheetDays.resize(nMembers);
			_To.m_nTimesheetDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTimesheetDays = &(*pLocal->m_TimesheetDays.begin());
			else
				_To.m_pTimesheetDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_TimesheetDays[i], pLocal->m_TimesheetDays[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse, HPMChangeCallbackData_TimesheetGetDateRangeResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TimesheetGetDateRangeResponse const &_From, HPMChangeCallbackData_TimesheetGetDateRangeResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		{
			size_t nMembers = _From.m_nTimesheetDays;
			_To.m_TimesheetDays.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTimesheetDays[i], _To.m_TimesheetDays[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TimesheetRowChange, NInternal_C::HPMChangeCallbackData_TimesheetRowChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TimesheetRowChange const &_From, NInternal_C::HPMChangeCallbackData_TimesheetRowChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_DayID, _To.m_DayID, _Context);
		CppConvert(_From.m_RowID, _To.m_RowID, _Context);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TimesheetRowChange, HPMChangeCallbackData_TimesheetRowChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TimesheetRowChange const &_From, HPMChangeCallbackData_TimesheetRowChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_DayID, _To.m_DayID, _Context);
		CppConvertReverse(_From.m_RowID, _To.m_RowID, _Context);
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectDisplayUserMessage, NInternal_C::HPMChangeCallbackData_ProjectDisplayUserMessage>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectDisplayUserMessage const &_From, NInternal_C::HPMChangeCallbackData_ProjectDisplayUserMessage &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_MessageType, _To.m_MessageType, _Context);
		CppConvert(_From.m_Message, _To.m_pMessage, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectDisplayUserMessage, HPMChangeCallbackData_ProjectDisplayUserMessage>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectDisplayUserMessage const &_From, HPMChangeCallbackData_ProjectDisplayUserMessage &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_MessageType, _To.m_MessageType, _Context);
		CppConvertReverse(_From.m_pMessage, _To.m_Message, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_IDNoLongerExists, NInternal_C::HPMChangeCallbackData_IDNoLongerExists>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_IDNoLongerExists const &_From, NInternal_C::HPMChangeCallbackData_IDNoLongerExists &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_IDNoLongerExists, HPMChangeCallbackData_IDNoLongerExists>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_IDNoLongerExists const &_From, HPMChangeCallbackData_IDNoLongerExists &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ChatMessage, NInternal_C::HPMChangeCallbackData_ChatMessage>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ChatMessage const &_From, NInternal_C::HPMChangeCallbackData_ChatMessage &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
		CppConvert(_From.m_Message, _To.m_Message, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ChatMessage, HPMChangeCallbackData_ChatMessage>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ChatMessage const &_From, HPMChangeCallbackData_ChatMessage &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
		CppConvertReverse(_From.m_Message, _To.m_Message, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ChatMessageLastID, NInternal_C::HPMChangeCallbackData_ChatMessageLastID>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ChatMessageLastID const &_From, NInternal_C::HPMChangeCallbackData_ChatMessageLastID &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_LastChatID, _To.m_LastChatID, _Context);
		CppConvert(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ChatMessageLastID, HPMChangeCallbackData_ChatMessageLastID>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ChatMessageLastID const &_From, HPMChangeCallbackData_ChatMessageLastID &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_LastChatID, _To.m_LastChatID, _Context);
		CppConvertReverse(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ChatMessageLastReadID, NInternal_C::HPMChangeCallbackData_ChatMessageLastReadID>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ChatMessageLastReadID const &_From, NInternal_C::HPMChangeCallbackData_ChatMessageLastReadID &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_LastReadChatID, _To.m_LastReadChatID, _Context);
		CppConvert(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ChatMessageLastReadID, HPMChangeCallbackData_ChatMessageLastReadID>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ChatMessageLastReadID const &_From, HPMChangeCallbackData_ChatMessageLastReadID &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_LastReadChatID, _To.m_LastReadChatID, _Context);
		CppConvertReverse(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ChatOnlineStatusChange, NInternal_C::HPMChangeCallbackData_ChatOnlineStatusChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ChatOnlineStatusChange const &_From, NInternal_C::HPMChangeCallbackData_ChatOnlineStatusChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Status, _To.m_Status, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ChatOnlineStatusChange, HPMChangeCallbackData_ChatOnlineStatusChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ChatOnlineStatusChange const &_From, HPMChangeCallbackData_ChatOnlineStatusChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Status, _To.m_Status, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceDoNotDisturbChange, NInternal_C::HPMChangeCallbackData_ResourceDoNotDisturbChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceDoNotDisturbChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceDoNotDisturbChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_bIsDoNotDisturb, _To.m_bIsDoNotDisturb, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceDoNotDisturbChange, HPMChangeCallbackData_ResourceDoNotDisturbChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceDoNotDisturbChange const &_From, HPMChangeCallbackData_ResourceDoNotDisturbChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_bIsDoNotDisturb, _To.m_bIsDoNotDisturb, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalEmailSettingsChange, NInternal_C::HPMChangeCallbackData_GlobalEmailSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalEmailSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalEmailSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalEmailSettingsChange, HPMChangeCallbackData_GlobalEmailSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalEmailSettingsChange const &_From, HPMChangeCallbackData_GlobalEmailSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCreate, NInternal_C::HPMChangeCallbackData_ProjectCreate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCreate const &_From, NInternal_C::HPMChangeCallbackData_ProjectCreate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_TemporaryProjectID, _To.m_TemporaryProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCreate, HPMChangeCallbackData_ProjectCreate>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCreate const &_From, HPMChangeCallbackData_ProjectCreate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_TemporaryProjectID, _To.m_TemporaryProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectDelete, NInternal_C::HPMChangeCallbackData_ProjectDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectDelete const &_From, NInternal_C::HPMChangeCallbackData_ProjectDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectDelete, HPMChangeCallbackData_ProjectDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectDelete const &_From, HPMChangeCallbackData_ProjectDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectPropertiesChange, NInternal_C::HPMChangeCallbackData_ProjectPropertiesChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectPropertiesChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectPropertiesChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectPropertiesChange, HPMChangeCallbackData_ProjectPropertiesChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectPropertiesChange const &_From, HPMChangeCallbackData_ProjectPropertiesChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectSettingsChange, HPMChangeCallbackData_ProjectSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectSettingsChange const &_From, HPMChangeCallbackData_ProjectSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectStatisticsSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectStatisticsSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectStatisticsSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectStatisticsSettingsChange, HPMChangeCallbackData_ProjectStatisticsSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectStatisticsSettingsChange const &_From, HPMChangeCallbackData_ProjectStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWorkflowChange, NInternal_C::HPMChangeCallbackData_ProjectWorkflowChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWorkflowChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectWorkflowChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWorkflowChange, HPMChangeCallbackData_ProjectWorkflowChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWorkflowChange const &_From, HPMChangeCallbackData_ProjectWorkflowChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWorkflowCreate, NInternal_C::HPMChangeCallbackData_ProjectWorkflowCreate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWorkflowCreate const &_From, NInternal_C::HPMChangeCallbackData_ProjectWorkflowCreate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWorkflowCreate, HPMChangeCallbackData_ProjectWorkflowCreate>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWorkflowCreate const &_From, HPMChangeCallbackData_ProjectWorkflowCreate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_WorkflowUpdateData, NInternal_C::HPMChangeCallbackData_WorkflowUpdateData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_WorkflowUpdateData const &_From, NInternal_C::HPMChangeCallbackData_WorkflowUpdateData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowOldID, _To.m_WorkflowOldID, _Context);
		CppConvert(_From.m_WorkflowNewID, _To.m_WorkflowNewID, _Context);
		CppConvert(_From.m_bReferencesChanged, _To.m_bReferencesChanged, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_WorkflowUpdateData, HPMChangeCallbackData_WorkflowUpdateData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_WorkflowUpdateData const &_From, HPMChangeCallbackData_WorkflowUpdateData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowOldID, _To.m_WorkflowOldID, _Context);
		CppConvertReverse(_From.m_WorkflowNewID, _To.m_WorkflowNewID, _Context);
		CppConvertReverse(_From.m_bReferencesChanged, _To.m_bReferencesChanged, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWorkflowDelete, NInternal_C::HPMChangeCallbackData_ProjectWorkflowDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_WorkflowUpdateData> m_Workflows;
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWorkflowDelete const &_From, NInternal_C::HPMChangeCallbackData_ProjectWorkflowDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_Workflows.size();
			pLocal->m_Workflows.resize(nMembers);
			_To.m_nWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflows = &(*pLocal->m_Workflows.begin());
			else
				_To.m_pWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Workflows[i], pLocal->m_Workflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWorkflowDelete, HPMChangeCallbackData_ProjectWorkflowDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWorkflowDelete const &_From, HPMChangeCallbackData_ProjectWorkflowDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_nWorkflows;
			_To.m_Workflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflows[i], _To.m_Workflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_WorkflowsDeletedData, NInternal_C::HPMChangeCallbackData_WorkflowsDeletedData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_WorkflowsDeletedData const &_From, NInternal_C::HPMChangeCallbackData_WorkflowsDeletedData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_WorkflowsDeletedData, HPMChangeCallbackData_WorkflowsDeletedData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_WorkflowsDeletedData const &_From, HPMChangeCallbackData_WorkflowsDeletedData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalWorkflowsDeleted, NInternal_C::HPMChangeCallbackData_GlobalWorkflowsDeleted>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_WorkflowsDeletedData> m_DeletedWorkflows;
	};
	
	static void Convert(HPMChangeCallbackData_GlobalWorkflowsDeleted const &_From, NInternal_C::HPMChangeCallbackData_GlobalWorkflowsDeleted &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		{
			size_t nMembers = _From.m_DeletedWorkflows.size();
			pLocal->m_DeletedWorkflows.resize(nMembers);
			_To.m_nDeletedWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDeletedWorkflows = &(*pLocal->m_DeletedWorkflows.begin());
			else
				_To.m_pDeletedWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_DeletedWorkflows[i], pLocal->m_DeletedWorkflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalWorkflowsDeleted, HPMChangeCallbackData_GlobalWorkflowsDeleted>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalWorkflowsDeleted const &_From, HPMChangeCallbackData_GlobalWorkflowsDeleted &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		{
			size_t nMembers = _From.m_nDeletedWorkflows;
			_To.m_DeletedWorkflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDeletedWorkflows[i], _To.m_DeletedWorkflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectReportsChange, NInternal_C::HPMChangeCallbackData_ProjectReportsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectReportsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectReportsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectReportsChange, HPMChangeCallbackData_ProjectReportsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectReportsChange const &_From, HPMChangeCallbackData_ProjectReportsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange, NInternal_C::HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange, HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange const &_From, HPMChangeCallbackData_ProjectAgilePriorityCustomColumnChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalReportsChange, NInternal_C::HPMChangeCallbackData_GlobalReportsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalReportsChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalReportsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalReportsChange, HPMChangeCallbackData_GlobalReportsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalReportsChange const &_From, HPMChangeCallbackData_GlobalReportsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWorkflowStatusStatsChange, NInternal_C::HPMChangeCallbackData_ProjectWorkflowStatusStatsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWorkflowStatusStatsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectWorkflowStatusStatsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
		CppConvert(_From.m_WorkflowStatusID, _To.m_WorkflowStatusID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWorkflowStatusStatsChange, HPMChangeCallbackData_ProjectWorkflowStatusStatsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWorkflowStatusStatsChange const &_From, HPMChangeCallbackData_ProjectWorkflowStatusStatsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
		CppConvertReverse(_From.m_WorkflowStatusID, _To.m_WorkflowStatusID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWorkflowNewVersion, NInternal_C::HPMChangeCallbackData_ProjectWorkflowNewVersion>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_WorkflowUpdateData> m_Workflows;
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWorkflowNewVersion const &_From, NInternal_C::HPMChangeCallbackData_ProjectWorkflowNewVersion &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_Workflows.size();
			pLocal->m_Workflows.resize(nMembers);
			_To.m_nWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflows = &(*pLocal->m_Workflows.begin());
			else
				_To.m_pWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Workflows[i], pLocal->m_Workflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWorkflowNewVersion, HPMChangeCallbackData_ProjectWorkflowNewVersion>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWorkflowNewVersion const &_From, HPMChangeCallbackData_ProjectWorkflowNewVersion &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_nWorkflows;
			_To.m_Workflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflows[i], _To.m_Workflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_FieldUpdateData, NInternal_C::HPMChangeCallbackData_FieldUpdateData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_FieldUpdateData const &_From, NInternal_C::HPMChangeCallbackData_FieldUpdateData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_FieldUpdateData, HPMChangeCallbackData_FieldUpdateData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_FieldUpdateData const &_From, HPMChangeCallbackData_FieldUpdateData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskUpdateData, NInternal_C::HPMChangeCallbackData_TaskUpdateData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_FieldUpdateData> m_Fields;
	};
	
	static void Convert(HPMChangeCallbackData_TaskUpdateData const &_From, NInternal_C::HPMChangeCallbackData_TaskUpdateData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		{
			size_t nMembers = _From.m_Fields.size();
			pLocal->m_Fields.resize(nMembers);
			_To.m_nFields = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFields = &(*pLocal->m_Fields.begin());
			else
				_To.m_pFields = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Fields[i], pLocal->m_Fields[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskUpdateData, HPMChangeCallbackData_TaskUpdateData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskUpdateData const &_From, HPMChangeCallbackData_TaskUpdateData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		{
			size_t nMembers = _From.m_nFields;
			_To.m_Fields.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFields[i], _To.m_Fields[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion, NInternal_C::HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_TaskUpdateData> m_Tasks;
	};
	
	static void Convert(HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion const &_From, NInternal_C::HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_Tasks.size();
			pLocal->m_Tasks.resize(nMembers);
			_To.m_nTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasks = &(*pLocal->m_Tasks.begin());
			else
				_To.m_pTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Tasks[i], pLocal->m_Tasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion, HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion const &_From, HPMChangeCallbackData_TaskUpdatePipelineWorkflowToNewestVersion &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_nTasks;
			_To.m_Tasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasks[i], _To.m_Tasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectEmailSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectEmailSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectEmailSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectEmailSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectEmailSettingsChange, HPMChangeCallbackData_ProjectEmailSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectEmailSettingsChange const &_From, HPMChangeCallbackData_ProjectEmailSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectOpenBacklogProject, NInternal_C::HPMChangeCallbackData_ProjectOpenBacklogProject>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectOpenBacklogProject const &_From, NInternal_C::HPMChangeCallbackData_ProjectOpenBacklogProject &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_bSuccess, _To.m_bSuccess, _Context);
		CppConvert(_From.m_BacklogProjectID, _To.m_BacklogProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectOpenBacklogProject, HPMChangeCallbackData_ProjectOpenBacklogProject>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectOpenBacklogProject const &_From, HPMChangeCallbackData_ProjectOpenBacklogProject &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_bSuccess, _To.m_bSuccess, _Context);
		CppConvertReverse(_From.m_BacklogProjectID, _To.m_BacklogProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectOpenQAProject, NInternal_C::HPMChangeCallbackData_ProjectOpenQAProject>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectOpenQAProject const &_From, NInternal_C::HPMChangeCallbackData_ProjectOpenQAProject &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_bSuccess, _To.m_bSuccess, _Context);
		CppConvert(_From.m_QAProjectID, _To.m_QAProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectOpenQAProject, HPMChangeCallbackData_ProjectOpenQAProject>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectOpenQAProject const &_From, HPMChangeCallbackData_ProjectOpenQAProject &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_bSuccess, _To.m_bSuccess, _Context);
		CppConvertReverse(_From.m_QAProjectID, _To.m_QAProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange, HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange const &_From, HPMChangeCallbackData_ProjectHistoryAutoSaveSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomColumnsChange, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomColumnsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsChange, HPMChangeCallbackData_ProjectCustomColumnsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsChange const &_From, HPMChangeCallbackData_ProjectCustomColumnsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomColumnsCreate, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsCreate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomColumnsCreate const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsCreate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsCreate, HPMChangeCallbackData_ProjectCustomColumnsCreate>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsCreate const &_From, HPMChangeCallbackData_ProjectCustomColumnsCreate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData, HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData const &_From, HPMChangeCallbackData_ProjectCustomColumnsDeleteTaskData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ColumnHashFrom, _To.m_ColumnHashFrom, _Context);
		CppConvert(_From.m_ColumnHashTo, _To.m_ColumnHashTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData, HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData const &_From, HPMChangeCallbackData_ProjectCustomColumnsRenameTaskData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ColumnHashFrom, _To.m_ColumnHashFrom, _Context);
		CppConvertReverse(_From.m_ColumnHashTo, _To.m_ColumnHashTo, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectActiveDefaultColumnsChange, NInternal_C::HPMChangeCallbackData_ProjectActiveDefaultColumnsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectActiveDefaultColumnsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectActiveDefaultColumnsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectActiveDefaultColumnsChange, HPMChangeCallbackData_ProjectActiveDefaultColumnsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectActiveDefaultColumnsChange const &_From, HPMChangeCallbackData_ProjectActiveDefaultColumnsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWallSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectWallSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWallSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectWallSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWallSettingsChange, HPMChangeCallbackData_ProjectWallSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWallSettingsChange const &_From, HPMChangeCallbackData_ProjectWallSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectWallGroupsChange, NInternal_C::HPMChangeCallbackData_ProjectWallGroupsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectWallGroupsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectWallGroupsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectWallGroupsChange, HPMChangeCallbackData_ProjectWallGroupsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectWallGroupsChange const &_From, HPMChangeCallbackData_ProjectWallGroupsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectDetailedAccessRulesChange, NInternal_C::HPMChangeCallbackData_ProjectDetailedAccessRulesChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectDetailedAccessRulesChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectDetailedAccessRulesChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectDetailedAccessRulesChange, HPMChangeCallbackData_ProjectDetailedAccessRulesChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectDetailedAccessRulesChange const &_From, HPMChangeCallbackData_ProjectDetailedAccessRulesChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange, NInternal_C::HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange, HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange const &_From, HPMChangeCallbackData_ProjectCustomStatisticsSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectResourceAdd, NInternal_C::HPMChangeCallbackData_ProjectResourceAdd>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectResourceAdd const &_From, NInternal_C::HPMChangeCallbackData_ProjectResourceAdd &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectResourceAdd, HPMChangeCallbackData_ProjectResourceAdd>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectResourceAdd const &_From, HPMChangeCallbackData_ProjectResourceAdd &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectResourceRemove, NInternal_C::HPMChangeCallbackData_ProjectResourceRemove>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectResourceRemove const &_From, NInternal_C::HPMChangeCallbackData_ProjectResourceRemove &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectResourceRemove, HPMChangeCallbackData_ProjectResourceRemove>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectResourceRemove const &_From, HPMChangeCallbackData_ProjectResourceRemove &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectResourcePropertiesChange, NInternal_C::HPMChangeCallbackData_ProjectResourcePropertiesChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectResourcePropertiesChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectResourcePropertiesChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectResourcePropertiesChange, HPMChangeCallbackData_ProjectResourcePropertiesChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectResourcePropertiesChange const &_From, HPMChangeCallbackData_ProjectResourcePropertiesChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskCreateUnifiedTask, NInternal_C::HPMChangeCallbackData_TaskCreateUnifiedTask>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskCreateUnifiedTask const &_From, NInternal_C::HPMChangeCallbackData_TaskCreateUnifiedTask &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bIsProxy, _To.m_bIsProxy, _Context);
		CppConvert(_From.m_LocalID, _To.m_LocalID, _Context);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskCreateUnifiedTask, HPMChangeCallbackData_TaskCreateUnifiedTask>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskCreateUnifiedTask const &_From, HPMChangeCallbackData_TaskCreateUnifiedTask &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bIsProxy, _To.m_bIsProxy, _Context);
		CppConvertReverse(_From.m_LocalID, _To.m_LocalID, _Context);
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskCreateUnified, NInternal_C::HPMChangeCallbackData_TaskCreateUnified>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_TaskCreateUnifiedTask> m_Tasks;
	};
	
	static void Convert(HPMChangeCallbackData_TaskCreateUnified const &_From, NInternal_C::HPMChangeCallbackData_TaskCreateUnified &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_Tasks.size();
			pLocal->m_Tasks.resize(nMembers);
			_To.m_nTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasks = &(*pLocal->m_Tasks.begin());
			else
				_To.m_pTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Tasks[i], pLocal->m_Tasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskCreateUnified, HPMChangeCallbackData_TaskCreateUnified>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskCreateUnified const &_From, HPMChangeCallbackData_TaskCreateUnified &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_nTasks;
			_To.m_Tasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasks[i], _To.m_Tasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangeDisposition, NInternal_C::HPMChangeCallbackData_TaskChangeDisposition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_TasksRejected;
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangeDisposition const &_From, NInternal_C::HPMChangeCallbackData_TaskChangeDisposition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_bChangeWorkPriorityDisposition, _To.m_bChangeWorkPriorityDisposition, _Context);
		CppConvert(_From.m_bDispositionChangedRejected, _To.m_bDispositionChangedRejected, _Context);
		CppConvert(_From.m_RejectedDebugData, _To.m_pRejectedDebugData, _Context);
		{
			size_t nMembers = _From.m_TasksRejected.size();
			pLocal->m_TasksRejected.resize(nMembers);
			_To.m_nTasksRejected = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasksRejected = &(*pLocal->m_TasksRejected.begin());
			else
				_To.m_pTasksRejected = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_TasksRejected[i], pLocal->m_TasksRejected[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangeDisposition, HPMChangeCallbackData_TaskChangeDisposition>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangeDisposition const &_From, HPMChangeCallbackData_TaskChangeDisposition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_bChangeWorkPriorityDisposition, _To.m_bChangeWorkPriorityDisposition, _Context);
		CppConvertReverse(_From.m_bDispositionChangedRejected, _To.m_bDispositionChangedRejected, _Context);
		CppConvertReverse(_From.m_pRejectedDebugData, _To.m_RejectedDebugData, _Context);
		{
			size_t nMembers = _From.m_nTasksRejected;
			_To.m_TasksRejected.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasksRejected[i], _To.m_TasksRejected[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskDelete, NInternal_C::HPMChangeCallbackData_TaskDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskDelete const &_From, NInternal_C::HPMChangeCallbackData_TaskDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskDelete, HPMChangeCallbackData_TaskDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskDelete const &_From, HPMChangeCallbackData_TaskDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskCreateComment, NInternal_C::HPMChangeCallbackData_TaskCreateComment>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskCreateComment const &_From, NInternal_C::HPMChangeCallbackData_TaskCreateComment &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_PostID, _To.m_PostID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskCreateComment, HPMChangeCallbackData_TaskCreateComment>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskCreateComment const &_From, HPMChangeCallbackData_TaskCreateComment &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_PostID, _To.m_PostID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskCommentSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_TaskCommentSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskCommentSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_TaskCommentSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_PostID, _To.m_PostID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskCommentSDKInternalDataChange, HPMChangeCallbackData_TaskCommentSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskCommentSDKInternalDataChange const &_From, HPMChangeCallbackData_TaskCommentSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_PostID, _To.m_PostID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskEditComment, NInternal_C::HPMChangeCallbackData_TaskEditComment>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskEditComment const &_From, NInternal_C::HPMChangeCallbackData_TaskEditComment &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_PostID, _To.m_PostID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskEditComment, HPMChangeCallbackData_TaskEditComment>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskEditComment const &_From, HPMChangeCallbackData_TaskEditComment &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_PostID, _To.m_PostID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskDeleteComment, NInternal_C::HPMChangeCallbackData_TaskDeleteComment>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskDeleteComment const &_From, NInternal_C::HPMChangeCallbackData_TaskDeleteComment &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_PostID, _To.m_PostID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskDeleteComment, HPMChangeCallbackData_TaskDeleteComment>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskDeleteComment const &_From, HPMChangeCallbackData_TaskDeleteComment &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_PostID, _To.m_PostID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskCommentPosted, NInternal_C::HPMChangeCallbackData_TaskCommentPosted>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskCommentPosted const &_From, NInternal_C::HPMChangeCallbackData_TaskCommentPosted &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_PostID, _To.m_PostID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskCommentPosted, HPMChangeCallbackData_TaskCommentPosted>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskCommentPosted const &_From, HPMChangeCallbackData_TaskCommentPosted &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_PostID, _To.m_PostID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChange, NInternal_C::HPMChangeCallbackData_TaskChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChange const &_From, NInternal_C::HPMChangeCallbackData_TaskChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_FieldChanged, _To.m_FieldChanged, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChange, HPMChangeCallbackData_TaskChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChange const &_From, HPMChangeCallbackData_TaskChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_FieldChanged, _To.m_FieldChanged, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskLastExitWorkflowStatusChange, NInternal_C::HPMChangeCallbackData_TaskLastExitWorkflowStatusChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskLastExitWorkflowStatusChange const &_From, NInternal_C::HPMChangeCallbackData_TaskLastExitWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskLastExitWorkflowStatusChange, HPMChangeCallbackData_TaskLastExitWorkflowStatusChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskLastExitWorkflowStatusChange const &_From, HPMChangeCallbackData_TaskLastExitWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange, NInternal_C::HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange const &_From, NInternal_C::HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange, HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange const &_From, HPMChangeCallbackData_TaskLastEnterWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange, NInternal_C::HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange const &_From, NInternal_C::HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange, HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange const &_From, HPMChangeCallbackData_TaskLastAssignedInWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangeCustomColumnData, NInternal_C::HPMChangeCallbackData_TaskChangeCustomColumnData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangeCustomColumnData const &_From, NInternal_C::HPMChangeCallbackData_TaskChangeCustomColumnData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangeCustomColumnData, HPMChangeCallbackData_TaskChangeCustomColumnData>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangeCustomColumnData const &_From, HPMChangeCallbackData_TaskChangeCustomColumnData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_ColumnHash, _To.m_ColumnHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime, NInternal_C::HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime const &_From, NInternal_C::HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime, HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime const &_From, HPMChangeCallbackData_TaskChangeLastResourceCommentReadTime &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangeWorkRemainingHistory, NInternal_C::HPMChangeCallbackData_TaskChangeWorkRemainingHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangeWorkRemainingHistory const &_From, NInternal_C::HPMChangeCallbackData_TaskChangeWorkRemainingHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangeWorkRemainingHistory, HPMChangeCallbackData_TaskChangeWorkRemainingHistory>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangeWorkRemainingHistory const &_From, HPMChangeCallbackData_TaskChangeWorkRemainingHistory &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangePointsHistory, NInternal_C::HPMChangeCallbackData_TaskChangePointsHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangePointsHistory const &_From, NInternal_C::HPMChangeCallbackData_TaskChangePointsHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangePointsHistory, HPMChangeCallbackData_TaskChangePointsHistory>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangePointsHistory const &_From, HPMChangeCallbackData_TaskChangePointsHistory &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskChangeIdealDaysHistory, NInternal_C::HPMChangeCallbackData_TaskChangeIdealDaysHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskChangeIdealDaysHistory const &_From, NInternal_C::HPMChangeCallbackData_TaskChangeIdealDaysHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskChangeIdealDaysHistory, HPMChangeCallbackData_TaskChangeIdealDaysHistory>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskChangeIdealDaysHistory const &_From, HPMChangeCallbackData_TaskChangeIdealDaysHistory &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_DayInSprint, _To.m_DayInSprint, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskRefChange, NInternal_C::HPMChangeCallbackData_TaskRefChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskRefChange const &_From, NInternal_C::HPMChangeCallbackData_TaskRefChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_FieldChanged, _To.m_FieldChanged, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskRefChange, HPMChangeCallbackData_TaskRefChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskRefChange const &_From, HPMChangeCallbackData_TaskRefChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_FieldChanged, _To.m_FieldChanged, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskRefDelete, NInternal_C::HPMChangeCallbackData_TaskRefDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskRefDelete const &_From, NInternal_C::HPMChangeCallbackData_TaskRefDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskRefDelete, HPMChangeCallbackData_TaskRefDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskRefDelete const &_From, HPMChangeCallbackData_TaskRefDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskRefConnect, NInternal_C::HPMChangeCallbackData_TaskRefConnect>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskRefConnect const &_From, NInternal_C::HPMChangeCallbackData_TaskRefConnect &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_LocalTempConnectionID, _To.m_LocalTempConnectionID, _Context);
		CppConvert(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
		CppConvert(_From.m_TaskRefIDFrom, _To.m_TaskRefIDFrom, _Context);
		CppConvert(_From.m_TaskRefIDTo, _To.m_TaskRefIDTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskRefConnect, HPMChangeCallbackData_TaskRefConnect>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskRefConnect const &_From, HPMChangeCallbackData_TaskRefConnect &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_LocalTempConnectionID, _To.m_LocalTempConnectionID, _Context);
		CppConvertReverse(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
		CppConvertReverse(_From.m_TaskRefIDFrom, _To.m_TaskRefIDFrom, _Context);
		CppConvertReverse(_From.m_TaskRefIDTo, _To.m_TaskRefIDTo, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskConnectionDelete, NInternal_C::HPMChangeCallbackData_TaskConnectionDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskConnectionDelete const &_From, NInternal_C::HPMChangeCallbackData_TaskConnectionDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskConnectionDelete, HPMChangeCallbackData_TaskConnectionDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskConnectionDelete const &_From, HPMChangeCallbackData_TaskConnectionDelete &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskConnectionChangeType, NInternal_C::HPMChangeCallbackData_TaskConnectionChangeType>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskConnectionChangeType const &_From, NInternal_C::HPMChangeCallbackData_TaskConnectionChangeType &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskConnectionChangeType, HPMChangeCallbackData_TaskConnectionChangeType>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskConnectionChangeType const &_From, HPMChangeCallbackData_TaskConnectionChangeType &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskConnectionChangeLeadLagTime, NInternal_C::HPMChangeCallbackData_TaskConnectionChangeLeadLagTime>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskConnectionChangeLeadLagTime const &_From, NInternal_C::HPMChangeCallbackData_TaskConnectionChangeLeadLagTime &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskConnectionChangeLeadLagTime, HPMChangeCallbackData_TaskConnectionChangeLeadLagTime>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskConnectionChangeLeadLagTime const &_From, HPMChangeCallbackData_TaskConnectionChangeLeadLagTime &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ConnectionID, _To.m_ConnectionID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_DataHistoryReceived, NInternal_C::HPMChangeCallbackData_DataHistoryReceived>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_DataHistoryReceived const &_From, NInternal_C::HPMChangeCallbackData_DataHistoryReceived &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_UniqueIdentifier, _To.m_UniqueIdentifier, _Context);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvert(_From.m_DataIdent0, _To.m_DataIdent0, _Context);
		CppConvert(_From.m_DataIdent1, _To.m_DataIdent1, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_DataHistoryReceived, HPMChangeCallbackData_DataHistoryReceived>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_DataHistoryReceived const &_From, HPMChangeCallbackData_DataHistoryReceived &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_UniqueIdentifier, _To.m_UniqueIdentifier, _Context);
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvertReverse(_From.m_DataIdent0, _To.m_DataIdent0, _Context);
		CppConvertReverse(_From.m_DataIdent1, _To.m_DataIdent1, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ChatHistoryReceived, NInternal_C::HPMChangeCallbackData_ChatHistoryReceived>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ChatHistoryReceived const &_From, NInternal_C::HPMChangeCallbackData_ChatHistoryReceived &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_UniqueIdentifier, _To.m_UniqueIdentifier, _Context);
		CppConvert(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ChatHistoryReceived, HPMChangeCallbackData_ChatHistoryReceived>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ChatHistoryReceived const &_From, HPMChangeCallbackData_ChatHistoryReceived &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_UniqueIdentifier, _To.m_UniqueIdentifier, _Context);
		CppConvertReverse(_From.m_ChatRoom, _To.m_ChatRoom, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CalendarChangeHolidays, NInternal_C::HPMChangeCallbackData_CalendarChangeHolidays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CalendarChangeHolidays const &_From, NInternal_C::HPMChangeCallbackData_CalendarChangeHolidays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CalendarChangeHolidays, HPMChangeCallbackData_CalendarChangeHolidays>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CalendarChangeHolidays const &_From, HPMChangeCallbackData_CalendarChangeHolidays &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CalendarChangeCustomWorkingHours, NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingHours>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CalendarChangeCustomWorkingHours const &_From, NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingHours &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingHours, HPMChangeCallbackData_CalendarChangeCustomWorkingHours>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingHours const &_From, HPMChangeCallbackData_CalendarChangeCustomWorkingHours &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CalendarChangeWorkingHours, NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingHours>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CalendarChangeWorkingHours const &_From, NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingHours &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingHours, HPMChangeCallbackData_CalendarChangeWorkingHours>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingHours const &_From, HPMChangeCallbackData_CalendarChangeWorkingHours &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CalendarChangeCustomWorkingDays, NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingDays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CalendarChangeCustomWorkingDays const &_From, NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingDays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingDays, HPMChangeCallbackData_CalendarChangeCustomWorkingDays>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CalendarChangeCustomWorkingDays const &_From, HPMChangeCallbackData_CalendarChangeCustomWorkingDays &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CalendarChangeWorkingDays, NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingDays>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_CalendarChangeWorkingDays const &_From, NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingDays &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingDays, HPMChangeCallbackData_CalendarChangeWorkingDays>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CalendarChangeWorkingDays const &_From, HPMChangeCallbackData_CalendarChangeWorkingDays &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlAllCommandsFinished, NInternal_C::HPMChangeCallbackData_VersionControlAllCommandsFinished>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlAllCommandsFinished const &_From, NInternal_C::HPMChangeCallbackData_VersionControlAllCommandsFinished &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlAllCommandsFinished, HPMChangeCallbackData_VersionControlAllCommandsFinished>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlAllCommandsFinished const &_From, HPMChangeCallbackData_VersionControlAllCommandsFinished &_To, CCppConvertContext &_Context)
	{
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlFileInfoChanged, NInternal_C::HPMChangeCallbackData_VersionControlFileInfoChanged>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlFileInfoChanged const &_From, NInternal_C::HPMChangeCallbackData_VersionControlFileInfoChanged &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlFileInfoChanged, HPMChangeCallbackData_VersionControlFileInfoChanged>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlFileInfoChanged const &_From, HPMChangeCallbackData_VersionControlFileInfoChanged &_To, CCppConvertContext &_Context)
	{
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlFileTreeAvailable, NInternal_C::HPMChangeCallbackData_VersionControlFileTreeAvailable>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlFileTreeAvailable const &_From, NInternal_C::HPMChangeCallbackData_VersionControlFileTreeAvailable &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlFileTreeAvailable, HPMChangeCallbackData_VersionControlFileTreeAvailable>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlFileTreeAvailable const &_From, HPMChangeCallbackData_VersionControlFileTreeAvailable &_To, CCppConvertContext &_Context)
	{
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete, NInternal_C::HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_FilesToDelete;
		std::vector<NInternal_C::HPMString> m_FilesToOverwrite;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete const &_From, NInternal_C::HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_FilesToDelete.size();
			pLocal->m_FilesToDelete.resize(nMembers);
			_To.m_nFilesToDelete = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilesToDelete = &(*pLocal->m_FilesToDelete.begin());
			else
				_To.m_pFilesToDelete = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FilesToDelete[i], pLocal->m_FilesToDelete[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_FilesToOverwrite.size();
			pLocal->m_FilesToOverwrite.resize(nMembers);
			_To.m_nFilesToOverwrite = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilesToOverwrite = &(*pLocal->m_FilesToOverwrite.begin());
			else
				_To.m_pFilesToOverwrite = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FilesToOverwrite[i], pLocal->m_FilesToOverwrite[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete, HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete const &_From, HPMChangeCallbackData_VersionControlWarnFileOverwriteDelete &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFilesToDelete;
			_To.m_FilesToDelete.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilesToDelete[i], _To.m_FilesToDelete[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nFilesToOverwrite;
			_To.m_FilesToOverwrite.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilesToOverwrite[i], _To.m_FilesToOverwrite[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync, NInternal_C::HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_FilesToDelete;
		std::vector<NInternal_C::HPMString> m_FilesToOverwrite;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync const &_From, NInternal_C::HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_FilesToDelete.size();
			pLocal->m_FilesToDelete.resize(nMembers);
			_To.m_nFilesToDelete = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilesToDelete = &(*pLocal->m_FilesToDelete.begin());
			else
				_To.m_pFilesToDelete = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FilesToDelete[i], pLocal->m_FilesToDelete[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_FilesToOverwrite.size();
			pLocal->m_FilesToOverwrite.resize(nMembers);
			_To.m_nFilesToOverwrite = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilesToOverwrite = &(*pLocal->m_FilesToOverwrite.begin());
			else
				_To.m_pFilesToOverwrite = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FilesToOverwrite[i], pLocal->m_FilesToOverwrite[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync, HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync const &_From, HPMChangeCallbackData_VersionControlWarnCheckOutShouldSync &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFilesToDelete;
			_To.m_FilesToDelete.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilesToDelete[i], _To.m_FilesToDelete[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nFilesToOverwrite;
			_To.m_FilesToOverwrite.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilesToOverwrite[i], _To.m_FilesToOverwrite[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlErrorResponse, NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlErrorResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_File, _To.m_pFile, _Context);
		CppConvert(_From.m_FileID, _To.m_FileID, _Context);
		CppConvert(_From.m_Error, _To.m_Error, _Context);
		CppConvert(_From.m_CustomError, _To.m_pCustomError, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse, HPMChangeCallbackData_VersionControlErrorResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse const &_From, HPMChangeCallbackData_VersionControlErrorResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pFile, _To.m_File, _Context);
		CppConvertReverse(_From.m_FileID, _To.m_FileID, _Context);
		CppConvertReverse(_From.m_Error, _To.m_Error, _Context);
		CppConvertReverse(_From.m_pCustomError, _To.m_CustomError, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlSyncFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_NotSyncedBecauseCheckedOut;
		std::vector<NInternal_C::HPMString> m_LocalFiles;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlSyncFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_NotSyncedBecauseCheckedOut.size();
			pLocal->m_NotSyncedBecauseCheckedOut.resize(nMembers);
			_To.m_nNotSyncedBecauseCheckedOut = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pNotSyncedBecauseCheckedOut = &(*pLocal->m_NotSyncedBecauseCheckedOut.begin());
			else
				_To.m_pNotSyncedBecauseCheckedOut = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_NotSyncedBecauseCheckedOut[i], pLocal->m_NotSyncedBecauseCheckedOut[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_LocalFiles.size();
			pLocal->m_LocalFiles.resize(nMembers);
			_To.m_nLocalFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pLocalFiles = &(*pLocal->m_LocalFiles.begin());
			else
				_To.m_pLocalFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_LocalFiles[i], pLocal->m_LocalFiles[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse, HPMChangeCallbackData_VersionControlSyncFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlSyncFilesResponse const &_From, HPMChangeCallbackData_VersionControlSyncFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nNotSyncedBecauseCheckedOut;
			_To.m_NotSyncedBecauseCheckedOut.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pNotSyncedBecauseCheckedOut[i], _To.m_NotSyncedBecauseCheckedOut[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nLocalFiles;
			_To.m_LocalFiles.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pLocalFiles[i], _To.m_LocalFiles[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlAddFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_AlreadyExists;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlAddFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_AlreadyExists.size();
			pLocal->m_AlreadyExists.resize(nMembers);
			_To.m_nAlreadyExists = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAlreadyExists = &(*pLocal->m_AlreadyExists.begin());
			else
				_To.m_pAlreadyExists = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AlreadyExists[i], pLocal->m_AlreadyExists[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse, HPMChangeCallbackData_VersionControlAddFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlAddFilesResponse const &_From, HPMChangeCallbackData_VersionControlAddFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nAlreadyExists;
			_To.m_AlreadyExists.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAlreadyExists[i], _To.m_AlreadyExists[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_DeleteErrors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_DeleteSucceeded;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_AlreadyExists;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_DeleteErrors.size();
			pLocal->m_DeleteErrors.resize(nMembers);
			_To.m_nDeleteErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDeleteErrors = &(*pLocal->m_DeleteErrors.begin());
			else
				_To.m_pDeleteErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_DeleteErrors[i], pLocal->m_DeleteErrors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_DeleteSucceeded.size();
			pLocal->m_DeleteSucceeded.resize(nMembers);
			_To.m_nDeleteSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDeleteSucceeded = &(*pLocal->m_DeleteSucceeded.begin());
			else
				_To.m_pDeleteSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_DeleteSucceeded[i], pLocal->m_DeleteSucceeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_AlreadyExists.size();
			pLocal->m_AlreadyExists.resize(nMembers);
			_To.m_nAlreadyExists = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAlreadyExists = &(*pLocal->m_AlreadyExists.begin());
			else
				_To.m_pAlreadyExists = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AlreadyExists[i], pLocal->m_AlreadyExists[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse, HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse const &_From, HPMChangeCallbackData_VersionControlUploadAvatarFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nDeleteErrors;
			_To.m_DeleteErrors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDeleteErrors[i], _To.m_DeleteErrors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nDeleteSucceeded;
			_To.m_DeleteSucceeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDeleteSucceeded[i], _To.m_DeleteSucceeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nAlreadyExists;
			_To.m_AlreadyExists.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAlreadyExists[i], _To.m_AlreadyExists[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlCheckInFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlCheckInFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
		CppConvert(_From.m_nSkippedFiles, _To.m_nSkippedFiles, _Context);
		CppConvert(_From.m_bForceReverted, _To.m_bForceReverted, _Context);
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse, HPMChangeCallbackData_VersionControlCheckInFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlCheckInFilesResponse const &_From, HPMChangeCallbackData_VersionControlCheckInFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
		CppConvertReverse(_From.m_nSkippedFiles, _To.m_nSkippedFiles, _Context);
		CppConvertReverse(_From.m_bForceReverted, _To.m_bForceReverted, _Context);
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlCheckOutFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_AlreadyCheckedOut;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlCheckOutFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_AlreadyCheckedOut.size();
			pLocal->m_AlreadyCheckedOut.resize(nMembers);
			_To.m_nAlreadyCheckedOut = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAlreadyCheckedOut = &(*pLocal->m_AlreadyCheckedOut.begin());
			else
				_To.m_pAlreadyCheckedOut = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AlreadyCheckedOut[i], pLocal->m_AlreadyCheckedOut[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse, HPMChangeCallbackData_VersionControlCheckOutFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlCheckOutFilesResponse const &_From, HPMChangeCallbackData_VersionControlCheckOutFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nAlreadyCheckedOut;
			_To.m_AlreadyCheckedOut.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAlreadyCheckedOut[i], _To.m_AlreadyCheckedOut[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlRenameResponse, NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlRenameResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse, HPMChangeCallbackData_VersionControlRenameResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlRenameResponse const &_From, HPMChangeCallbackData_VersionControlRenameResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlDeleteFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlDeleteFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse, HPMChangeCallbackData_VersionControlDeleteFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlDeleteFilesResponse const &_From, HPMChangeCallbackData_VersionControlDeleteFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse, NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse, HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse const &_From, HPMChangeCallbackData_VersionControlRestoreDeletedFilesResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlSetAccessRightsResponse, NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlSetAccessRightsResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse, HPMChangeCallbackData_VersionControlSetAccessRightsResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlSetAccessRightsResponse const &_From, HPMChangeCallbackData_VersionControlSetAccessRightsResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlRollbackFileResponse, NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlRollbackFileResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse, HPMChangeCallbackData_VersionControlRollbackFileResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlRollbackFileResponse const &_From, HPMChangeCallbackData_VersionControlRollbackFileResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlDeleteVersionsResponse, NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Errors;
		std::vector<NInternal_C::HPMChangeCallbackData_VersionControlErrorResponse> m_Succeeded;
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlDeleteVersionsResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Errors.size();
			pLocal->m_Errors.resize(nMembers);
			_To.m_nErrors = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pErrors = &(*pLocal->m_Errors.begin());
			else
				_To.m_pErrors = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Errors[i], pLocal->m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Succeeded.size();
			pLocal->m_Succeeded.resize(nMembers);
			_To.m_nSucceeded = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSucceeded = &(*pLocal->m_Succeeded.begin());
			else
				_To.m_pSucceeded = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Succeeded[i], pLocal->m_Succeeded[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse, HPMChangeCallbackData_VersionControlDeleteVersionsResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlDeleteVersionsResponse const &_From, HPMChangeCallbackData_VersionControlDeleteVersionsResponse &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nErrors;
			_To.m_Errors.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pErrors[i], _To.m_Errors[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSucceeded;
			_To.m_Succeeded.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSucceeded[i], _To.m_Succeeded[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlGetAccessRightsResponse, NInternal_C::HPMChangeCallbackData_VersionControlGetAccessRightsResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlGetAccessRightsResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlGetAccessRightsResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_File, _To.m_pFile, _Context);
		CppConvert(_From.m_bAccessDenied, _To.m_bAccessDenied, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlGetAccessRightsResponse, HPMChangeCallbackData_VersionControlGetAccessRightsResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlGetAccessRightsResponse const &_From, HPMChangeCallbackData_VersionControlGetAccessRightsResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pFile, _To.m_File, _Context);
		CppConvertReverse(_From.m_bAccessDenied, _To.m_bAccessDenied, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_VersionControlGetFileHistoryResponse, NInternal_C::HPMChangeCallbackData_VersionControlGetFileHistoryResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_VersionControlGetFileHistoryResponse const &_From, NInternal_C::HPMChangeCallbackData_VersionControlGetFileHistoryResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_File, _To.m_pFile, _Context);
		CppConvert(_From.m_bAccessDenied, _To.m_bAccessDenied, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_VersionControlGetFileHistoryResponse, HPMChangeCallbackData_VersionControlGetFileHistoryResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_VersionControlGetFileHistoryResponse const &_From, HPMChangeCallbackData_VersionControlGetFileHistoryResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pFile, _To.m_File, _Context);
		CppConvertReverse(_From.m_bAccessDenied, _To.m_bAccessDenied, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalCustomSettingsChange, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalCustomSettingsChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsChange, HPMChangeCallbackData_GlobalCustomSettingsChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsChange const &_From, HPMChangeCallbackData_GlobalCustomSettingsChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalCustomSettingsUnregister, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsUnregister>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalCustomSettingsUnregister const &_From, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsUnregister &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsUnregister, HPMChangeCallbackData_GlobalCustomSettingsUnregister>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsUnregister const &_From, HPMChangeCallbackData_GlobalCustomSettingsUnregister &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalCustomSettingsValueChange, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsValueChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalCustomSettingsValueChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvert(_From.m_SettingsPath, _To.m_pSettingsPath, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsValueChange, HPMChangeCallbackData_GlobalCustomSettingsValueChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalCustomSettingsValueChange const &_From, HPMChangeCallbackData_GlobalCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvertReverse(_From.m_pSettingsPath, _To.m_SettingsPath, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectCustomSettingsValueChange, NInternal_C::HPMChangeCallbackData_ProjectCustomSettingsValueChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectCustomSettingsValueChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvert(_From.m_SettingsPath, _To.m_pSettingsPath, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectCustomSettingsValueChange, HPMChangeCallbackData_ProjectCustomSettingsValueChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectCustomSettingsValueChange const &_From, HPMChangeCallbackData_ProjectCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvertReverse(_From.m_pSettingsPath, _To.m_SettingsPath, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange, NInternal_C::HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvert(_From.m_SettingsPath, _To.m_pSettingsPath, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange, HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange const &_From, HPMChangeCallbackData_ProjectResourceCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvertReverse(_From.m_pSettingsPath, _To.m_SettingsPath, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceCustomSettingsValueChange, NInternal_C::HPMChangeCallbackData_ResourceCustomSettingsValueChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceCustomSettingsValueChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvert(_From.m_SettingsPath, _To.m_pSettingsPath, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceCustomSettingsValueChange, HPMChangeCallbackData_ResourceCustomSettingsValueChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceCustomSettingsValueChange const &_From, HPMChangeCallbackData_ResourceCustomSettingsValueChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
		CppConvertReverse(_From.m_pSettingsPath, _To.m_SettingsPath, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_GlobalSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_GlobalSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_GlobalSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_GlobalSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_GlobalSDKInternalDataChange, HPMChangeCallbackData_GlobalSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_GlobalSDKInternalDataChange const &_From, HPMChangeCallbackData_GlobalSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_ProjectSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectSDKInternalDataChange, HPMChangeCallbackData_ProjectSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectSDKInternalDataChange const &_From, HPMChangeCallbackData_ProjectSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ProjectResourceSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_ProjectResourceSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ProjectResourceSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_ProjectResourceSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ProjectResourceSDKInternalDataChange, HPMChangeCallbackData_ProjectResourceSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ProjectResourceSDKInternalDataChange const &_From, HPMChangeCallbackData_ProjectResourceSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ResourceSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_ResourceSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ResourceSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_ResourceSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ResourceSDKInternalDataChange, HPMChangeCallbackData_ResourceSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ResourceSDKInternalDataChange const &_From, HPMChangeCallbackData_ResourceSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_TaskSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_TaskSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskSDKInternalDataChange, HPMChangeCallbackData_TaskSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskSDKInternalDataChange const &_From, HPMChangeCallbackData_TaskSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskID, _To.m_TaskID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_TaskRefSDKInternalDataChange, NInternal_C::HPMChangeCallbackData_TaskRefSDKInternalDataChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_TaskRefSDKInternalDataChange const &_From, NInternal_C::HPMChangeCallbackData_TaskRefSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvert(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvert(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_TaskRefSDKInternalDataChange, HPMChangeCallbackData_TaskRefSDKInternalDataChange>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_TaskRefSDKInternalDataChange const &_From, HPMChangeCallbackData_TaskRefSDKInternalDataChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bChangeInitiatedFromThisSession, _To.m_bChangeInitiatedFromThisSession, _Context);
		CppConvertReverse(_From.m_ChangedByResourceID, _To.m_ChangedByResourceID, _Context);
		CppConvertReverse(_From.m_ChangedByImpersonatedResourceID, _To.m_ChangedByImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_IdentifierHash, _To.m_IdentifierHash, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ClientExecuteURL, NInternal_C::HPMChangeCallbackData_ClientExecuteURL>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ClientExecuteURL const &_From, NInternal_C::HPMChangeCallbackData_ClientExecuteURL &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_URL, _To.m_pURL, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ClientExecuteURL, HPMChangeCallbackData_ClientExecuteURL>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ClientExecuteURL const &_From, HPMChangeCallbackData_ClientExecuteURL &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pURL, _To.m_URL, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_DynamicCustomSettingsValueChanged, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValueChanged>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_DynamicCustomSettingsValueChanged const &_From, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValueChanged &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DynamicContext, _To.m_pDynamicContext, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_bTemporary, _To.m_bTemporary, _Context);
		CppConvert(_From.m_Path, _To.m_pPath, _Context);
		CppConvert(_From.m_Value, _To.m_pValue, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValueChanged, HPMChangeCallbackData_DynamicCustomSettingsValueChanged>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValueChanged const &_From, HPMChangeCallbackData_DynamicCustomSettingsValueChanged &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pDynamicContext, _To.m_DynamicContext, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_bTemporary, _To.m_bTemporary, _Context);
		CppConvertReverse(_From.m_pPath, _To.m_Path, _Context);
		CppConvertReverse(_From.m_pValue, _To.m_Value, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse const &_From, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DynamicContext, _To.m_pDynamicContext, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_Values, _To.m_Values, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse, HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse const &_From, HPMChangeCallbackData_DynamicCustomSettingsValuesRequestResponse &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pDynamicContext, _To.m_DynamicContext, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_Values, _To.m_Values, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_DynamicCustomSettingsNotification, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsNotification>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_TabIdentifiers;
	};
	
	static void Convert(HPMChangeCallbackData_DynamicCustomSettingsNotification const &_From, NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsNotification &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DynamicContext, _To.m_pDynamicContext, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvert(_From.m_Notification, _To.m_Notification, _Context);
		CppConvert(_From.m_CustomNotification, _To.m_CustomNotification, _Context);
		{
			size_t nMembers = _From.m_TabIdentifiers.size();
			pLocal->m_TabIdentifiers.resize(nMembers);
			_To.m_nTabIdentifiers = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTabIdentifiers = &(*pLocal->m_TabIdentifiers.begin());
			else
				_To.m_pTabIdentifiers = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_TabIdentifiers[i], pLocal->m_TabIdentifiers[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsNotification, HPMChangeCallbackData_DynamicCustomSettingsNotification>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_DynamicCustomSettingsNotification const &_From, HPMChangeCallbackData_DynamicCustomSettingsNotification &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pDynamicContext, _To.m_DynamicContext, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_SettingsType, _To.m_SettingsType, _Context);
		CppConvertReverse(_From.m_Notification, _To.m_Notification, _Context);
		CppConvertReverse(_From.m_CustomNotification, _To.m_CustomNotification, _Context);
		{
			size_t nMembers = _From.m_nTabIdentifiers;
			_To.m_TabIdentifiers.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTabIdentifiers[i], _To.m_TabIdentifiers[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_CustomTaskStatusNotification, NInternal_C::HPMChangeCallbackData_CustomTaskStatusNotification>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_SelectedTasks;
	};
	
	static void Convert(HPMChangeCallbackData_CustomTaskStatusNotification const &_From, NInternal_C::HPMChangeCallbackData_CustomTaskStatusNotification &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DynamicContext, _To.m_pDynamicContext, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_Notification, _To.m_Notification, _Context);
		{
			size_t nMembers = _From.m_SelectedTasks.size();
			pLocal->m_SelectedTasks.resize(nMembers);
			_To.m_nSelectedTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSelectedTasks = &(*pLocal->m_SelectedTasks.begin());
			else
				_To.m_pSelectedTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_SelectedTasks[i], pLocal->m_SelectedTasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_CustomTaskStatusNotification, HPMChangeCallbackData_CustomTaskStatusNotification>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_CustomTaskStatusNotification const &_From, HPMChangeCallbackData_CustomTaskStatusNotification &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pDynamicContext, _To.m_DynamicContext, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_Notification, _To.m_Notification, _Context);
		{
			size_t nMembers = _From.m_nSelectedTasks;
			_To.m_SelectedTasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSelectedTasks[i], _To.m_SelectedTasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_RightClickDisplayTaskMenu, NInternal_C::HPMChangeCallbackData_RightClickDisplayTaskMenu>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_SelectedTasks;
	};
	
	static void Convert(HPMChangeCallbackData_RightClickDisplayTaskMenu const &_From, NInternal_C::HPMChangeCallbackData_RightClickDisplayTaskMenu &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_RightClickContext, _To.m_pRightClickContext, _Context);
		CppConvert(_From.m_bMenuDisplayed, _To.m_bMenuDisplayed, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_SelectedTasks.size();
			pLocal->m_SelectedTasks.resize(nMembers);
			_To.m_nSelectedTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSelectedTasks = &(*pLocal->m_SelectedTasks.begin());
			else
				_To.m_pSelectedTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_SelectedTasks[i], pLocal->m_SelectedTasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_RightClickDisplayTaskMenu, HPMChangeCallbackData_RightClickDisplayTaskMenu>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_RightClickDisplayTaskMenu const &_From, HPMChangeCallbackData_RightClickDisplayTaskMenu &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pRightClickContext, _To.m_RightClickContext, _Context);
		CppConvertReverse(_From.m_bMenuDisplayed, _To.m_bMenuDisplayed, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		{
			size_t nMembers = _From.m_nSelectedTasks;
			_To.m_SelectedTasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSelectedTasks[i], _To.m_SelectedTasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu, NInternal_C::HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu const &_From, NInternal_C::HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_RightClickContext, _To.m_pRightClickContext, _Context);
		CppConvert(_From.m_bMenuDisplayed, _To.m_bMenuDisplayed, _Context);
		CppConvert(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvert(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvert(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvert(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu, HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu const &_From, HPMChangeCallbackData_RightClickDisplayWorkflowStepMenu &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pRightClickContext, _To.m_RightClickContext, _Context);
		CppConvertReverse(_From.m_bMenuDisplayed, _To.m_bMenuDisplayed, _Context);
		CppConvertReverse(_From.m_UserContext, _To.m_UserContext, _Context);
		CppConvertReverse(_From.m_ProjectID, _To.m_ProjectID, _Context);
		CppConvertReverse(_From.m_WorkflowID, _To.m_WorkflowID, _Context);
		CppConvertReverse(_From.m_WorkflowObjectID, _To.m_WorkflowObjectID, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_RightClickMenuItemSelected, NInternal_C::HPMChangeCallbackData_RightClickMenuItemSelected>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_RightClickMenuItemSelected const &_From, NInternal_C::HPMChangeCallbackData_RightClickMenuItemSelected &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_UniqueName, _To.m_pUniqueName, _Context);
		CppConvert(_From.m_MenuItemContext, _To.m_MenuItemContext, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_RightClickMenuItemSelected, HPMChangeCallbackData_RightClickMenuItemSelected>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_RightClickMenuItemSelected const &_From, HPMChangeCallbackData_RightClickMenuItemSelected &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pUniqueName, _To.m_UniqueName, _Context);
		CppConvertReverse(_From.m_MenuItemContext, _To.m_MenuItemContext, _Context);
	}
};

template <>
class TCCppConvert<HPMChangeCallbackData_ClientSyncDone, NInternal_C::HPMChangeCallbackData_ClientSyncDone>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMChangeCallbackData_ClientSyncDone const &_From, NInternal_C::HPMChangeCallbackData_ClientSyncDone &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMChangeCallbackData_ClientSyncDone, HPMChangeCallbackData_ClientSyncDone>
{
public:
	static void Convert(NInternal_C::HPMChangeCallbackData_ClientSyncDone const &_From, HPMChangeCallbackData_ClientSyncDone &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
	}
};

template <>
class TCCppConvert<HPMResourceEnum, NInternal_C::HPMResourceEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_Resources;
	};
	
	static void Convert(HPMResourceEnum const &_From, NInternal_C::HPMResourceEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceEnum, HPMResourceEnum>
{
public:
	static void Convert(NInternal_C::HPMResourceEnum const &_From, HPMResourceEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMResourceProperties, NInternal_C::HPMResourceProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_MemberOfResourceGroups;
	};
	
	static void Convert(HPMResourceProperties const &_From, NInternal_C::HPMResourceProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_SortName, _To.m_pSortName, _Context);
		CppConvert(_From.m_Title, _To.m_pTitle, _Context);
		CppConvert(_From.m_EmailAddress, _To.m_pEmailAddress, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_ResourceType, _To.m_ResourceType, _Context);
		CppConvert(_From.m_PasswordFlags, _To.m_PasswordFlags, _Context);
		CppConvert(_From.m_RemoteID, _To.m_RemoteID, _Context);
		CppConvert(_From.m_RemoteGUID, _To.m_pRemoteGUID, _Context);
		{
			size_t nMembers = _From.m_MemberOfResourceGroups.size();
			pLocal->m_MemberOfResourceGroups.resize(nMembers);
			_To.m_nMemberOfResourceGroups = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMemberOfResourceGroups = &(*pLocal->m_MemberOfResourceGroups.begin());
			else
				_To.m_pMemberOfResourceGroups = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MemberOfResourceGroups[i], pLocal->m_MemberOfResourceGroups[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceProperties, HPMResourceProperties>
{
public:
	static void Convert(NInternal_C::HPMResourceProperties const &_From, HPMResourceProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_pSortName, _To.m_SortName, _Context);
		CppConvertReverse(_From.m_pTitle, _To.m_Title, _Context);
		CppConvertReverse(_From.m_pEmailAddress, _To.m_EmailAddress, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_ResourceType, _To.m_ResourceType, _Context);
		CppConvertReverse(_From.m_PasswordFlags, _To.m_PasswordFlags, _Context);
		CppConvertReverse(_From.m_RemoteID, _To.m_RemoteID, _Context);
		CppConvertReverse(_From.m_pRemoteGUID, _To.m_RemoteGUID, _Context);
		{
			size_t nMembers = _From.m_nMemberOfResourceGroups;
			_To.m_MemberOfResourceGroups.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMemberOfResourceGroups[i], _To.m_MemberOfResourceGroups[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMResourceGlobalSettings, NInternal_C::HPMResourceGlobalSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceGlobalSettings const &_From, NInternal_C::HPMResourceGlobalSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_DateFormat, _To.m_DateFormat, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceGlobalSettings, HPMResourceGlobalSettings>
{
public:
	static void Convert(NInternal_C::HPMResourceGlobalSettings const &_From, HPMResourceGlobalSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_DateFormat, _To.m_DateFormat, _Context);
	}
};

template <>
class TCCppConvert<HPMResourceGroupProperties, NInternal_C::HPMResourceGroupProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceGroupProperties const &_From, NInternal_C::HPMResourceGroupProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_SortName, _To.m_pSortName, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceGroupProperties, HPMResourceGroupProperties>
{
public:
	static void Convert(NInternal_C::HPMResourceGroupProperties const &_From, HPMResourceGroupProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_pSortName, _To.m_SortName, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
	}
};

template <>
class TCCppConvert<HPMResourceGroupEnum, NInternal_C::HPMResourceGroupEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_ResourceGroups;
	};
	
	static void Convert(HPMResourceGroupEnum const &_From, NInternal_C::HPMResourceGroupEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ResourceGroups.size();
			pLocal->m_ResourceGroups.resize(nMembers);
			_To.m_nResourceGroups = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResourceGroups = &(*pLocal->m_ResourceGroups.begin());
			else
				_To.m_pResourceGroups = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ResourceGroups[i], pLocal->m_ResourceGroups[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceGroupEnum, HPMResourceGroupEnum>
{
public:
	static void Convert(NInternal_C::HPMResourceGroupEnum const &_From, HPMResourceGroupEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResourceGroups;
			_To.m_ResourceGroups.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResourceGroups[i], _To.m_ResourceGroups[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMResourceImpersonate, NInternal_C::HPMResourceImpersonate>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceImpersonate const &_From, NInternal_C::HPMResourceImpersonate &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_ClientOrigin, _To.m_ClientOrigin, _Context);
		CppConvert(_From.m_CustomClientOrigin, _To.m_pCustomClientOrigin, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceImpersonate, HPMResourceImpersonate>
{
public:
	static void Convert(NInternal_C::HPMResourceImpersonate const &_From, HPMResourceImpersonate &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_ClientOrigin, _To.m_ClientOrigin, _Context);
		CppConvertReverse(_From.m_pCustomClientOrigin, _To.m_CustomClientOrigin, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectEnum, NInternal_C::HPMProjectEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_Projects;
	};
	
	static void Convert(HPMProjectEnum const &_From, NInternal_C::HPMProjectEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Projects.size();
			pLocal->m_Projects.resize(nMembers);
			_To.m_nProjects = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pProjects = &(*pLocal->m_Projects.begin());
			else
				_To.m_pProjects = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Projects[i], pLocal->m_Projects[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectEnum, HPMProjectEnum>
{
public:
	static void Convert(NInternal_C::HPMProjectEnum const &_From, HPMProjectEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nProjects;
			_To.m_Projects.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pProjects[i], _To.m_Projects[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectProperties, NInternal_C::HPMProjectProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectProperties const &_From, NInternal_C::HPMProjectProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_NiceName, _To.m_pNiceName, _Context);
		CppConvert(_From.m_SortName, _To.m_pSortName, _Context);
		CppConvert(_From.m_bArchivedStatus, _To.m_bArchivedStatus, _Context);
		CppConvert(_From.m_ProjectMethod, _To.m_ProjectMethod, _Context);
		CppConvert(_From.m_CompletionStyle, _To.m_CompletionStyle, _Context);
		CppConvert(_From.m_DefaultEditorMode, _To.m_DefaultEditorMode, _Context);
		CppConvert(_From.m_AgileTemplate, _To.m_AgileTemplate, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectProperties, HPMProjectProperties>
{
public:
	static void Convert(NInternal_C::HPMProjectProperties const &_From, HPMProjectProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_pNiceName, _To.m_NiceName, _Context);
		CppConvertReverse(_From.m_pSortName, _To.m_SortName, _Context);
		CppConvertReverse(_From.m_bArchivedStatus, _To.m_bArchivedStatus, _Context);
		CppConvertReverse(_From.m_ProjectMethod, _To.m_ProjectMethod, _Context);
		CppConvertReverse(_From.m_CompletionStyle, _To.m_CompletionStyle, _Context);
		CppConvertReverse(_From.m_DefaultEditorMode, _To.m_DefaultEditorMode, _Context);
		CppConvertReverse(_From.m_AgileTemplate, _To.m_AgileTemplate, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectSettings, NInternal_C::HPMProjectSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectSettings const &_From, NInternal_C::HPMProjectSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_ParentTaskDisplayDepth, _To.m_ParentTaskDisplayDepth, _Context);
		CppConvert(_From.m_SprintPredictionMethod, _To.m_SprintPredictionMethod, _Context);
		CppConvert(_From.m_SprintDefaultLength, _To.m_SprintDefaultLength, _Context);
		CppConvert(_From.m_EstimatedHours, _To.m_EstimatedHours, _Context);
		CppConvert(_From.m_ColumnForPriorityInToDoList, _To.m_ColumnForPriorityInToDoList, _Context);
		CppConvert(_From.m_CustomColumnHashForTimeSpentColumnInToDolist, _To.m_CustomColumnHashForTimeSpentColumnInToDolist, _Context);
		CppConvert(_From.m_bNewSprintsHaveNoMembers, _To.m_bNewSprintsHaveNoMembers, _Context);
		CppConvert(_From.m_WorkflowDesignation, _To.m_pWorkflowDesignation, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectSettings, HPMProjectSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectSettings const &_From, HPMProjectSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_ParentTaskDisplayDepth, _To.m_ParentTaskDisplayDepth, _Context);
		CppConvertReverse(_From.m_SprintPredictionMethod, _To.m_SprintPredictionMethod, _Context);
		CppConvertReverse(_From.m_SprintDefaultLength, _To.m_SprintDefaultLength, _Context);
		CppConvertReverse(_From.m_EstimatedHours, _To.m_EstimatedHours, _Context);
		CppConvertReverse(_From.m_ColumnForPriorityInToDoList, _To.m_ColumnForPriorityInToDoList, _Context);
		CppConvertReverse(_From.m_CustomColumnHashForTimeSpentColumnInToDolist, _To.m_CustomColumnHashForTimeSpentColumnInToDolist, _Context);
		CppConvertReverse(_From.m_bNewSprintsHaveNoMembers, _To.m_bNewSprintsHaveNoMembers, _Context);
		CppConvertReverse(_From.m_pWorkflowDesignation, _To.m_WorkflowDesignation, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectHistoryAutoSaveSettings, NInternal_C::HPMProjectHistoryAutoSaveSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectHistoryAutoSaveSettings const &_From, NInternal_C::HPMProjectHistoryAutoSaveSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_DayOfWeek, _To.m_DayOfWeek, _Context);
		CppConvert(_From.m_HourOfDay, _To.m_HourOfDay, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectHistoryAutoSaveSettings, HPMProjectHistoryAutoSaveSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectHistoryAutoSaveSettings const &_From, HPMProjectHistoryAutoSaveSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_DayOfWeek, _To.m_DayOfWeek, _Context);
		CppConvertReverse(_From.m_HourOfDay, _To.m_HourOfDay, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectCustomColumnsColumnDropListItem, NInternal_C::HPMProjectCustomColumnsColumnDropListItem>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceDefinition> m_AutoAssignResources;
	};
	
	static void Convert(HPMProjectCustomColumnsColumnDropListItem const &_From, NInternal_C::HPMProjectCustomColumnsColumnDropListItem &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_Icon, _To.m_Icon, _Context);
		CppConvert(_From.m_Id, _To.m_Id, _Context);
		{
			size_t nMembers = _From.m_AutoAssignResources.size();
			pLocal->m_AutoAssignResources.resize(nMembers);
			_To.m_nAutoAssignResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAutoAssignResources = &(*pLocal->m_AutoAssignResources.begin());
			else
				_To.m_pAutoAssignResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AutoAssignResources[i], pLocal->m_AutoAssignResources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomColumnsColumnDropListItem, HPMProjectCustomColumnsColumnDropListItem>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomColumnsColumnDropListItem const &_From, HPMProjectCustomColumnsColumnDropListItem &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_Icon, _To.m_Icon, _Context);
		CppConvertReverse(_From.m_Id, _To.m_Id, _Context);
		{
			size_t nMembers = _From.m_nAutoAssignResources;
			_To.m_AutoAssignResources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAutoAssignResources[i], _To.m_AutoAssignResources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectCustomColumnsColumnSDKData, NInternal_C::HPMProjectCustomColumnsColumnSDKData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Value;
	};
	
	static void Convert(HPMProjectCustomColumnsColumnSDKData const &_From, NInternal_C::HPMProjectCustomColumnsColumnSDKData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Key, _To.m_pKey, _Context);
		{
			size_t nMembers = _From.m_Value.size();
			pLocal->m_Value.resize(nMembers);
			_To.m_nValue = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pValue = &(*pLocal->m_Value.begin());
			else
				_To.m_pValue = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Value[i], pLocal->m_Value[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomColumnsColumnSDKData, HPMProjectCustomColumnsColumnSDKData>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomColumnsColumnSDKData const &_From, HPMProjectCustomColumnsColumnSDKData &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pKey, _To.m_Key, _Context);
		{
			size_t nMembers = _From.m_nValue;
			_To.m_Value.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pValue[i], _To.m_Value[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectCustomColumnsColumn, NInternal_C::HPMProjectCustomColumnsColumn>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectCustomColumnsColumnDropListItem> m_DropListItems;
		std::vector<NInternal_C::HPMProjectCustomColumnsColumnSDKData> m_SDKData;
	};
	
	static void Convert(HPMProjectCustomColumnsColumn const &_From, NInternal_C::HPMProjectCustomColumnsColumn &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Hash, _To.m_Hash, _Context);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_AccessRights, _To.m_AccessRights, _Context);
		CppConvert(_From.m_Unit, _To.m_pUnit, _Context);
		{
			size_t nMembers = _From.m_DropListItems.size();
			pLocal->m_DropListItems.resize(nMembers);
			_To.m_nDropListItems = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDropListItems = &(*pLocal->m_DropListItems.begin());
			else
				_To.m_pDropListItems = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_DropListItems[i], pLocal->m_DropListItems[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_SDKData.size();
			pLocal->m_SDKData.resize(nMembers);
			_To.m_nSDKData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSDKData = &(*pLocal->m_SDKData.begin());
			else
				_To.m_pSDKData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_SDKData[i], pLocal->m_SDKData[i], _Context);
			}
		}
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomColumnsColumn, HPMProjectCustomColumnsColumn>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomColumnsColumn const &_From, HPMProjectCustomColumnsColumn &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Hash, _To.m_Hash, _Context);
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_AccessRights, _To.m_AccessRights, _Context);
		CppConvertReverse(_From.m_pUnit, _To.m_Unit, _Context);
		{
			size_t nMembers = _From.m_nDropListItems;
			_To.m_DropListItems.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDropListItems[i], _To.m_DropListItems[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nSDKData;
			_To.m_SDKData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSDKData[i], _To.m_SDKData[i], _Context);
			}
		}
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectCustomColumns, NInternal_C::HPMProjectCustomColumns>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectCustomColumnsColumn> m_ShowingColumns;
		std::vector<NInternal_C::HPMProjectCustomColumnsColumn> m_HiddenColumns;
	};
	
	static void Convert(HPMProjectCustomColumns const &_From, NInternal_C::HPMProjectCustomColumns &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ShowingColumns.size();
			pLocal->m_ShowingColumns.resize(nMembers);
			_To.m_nShowingColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pShowingColumns = &(*pLocal->m_ShowingColumns.begin());
			else
				_To.m_pShowingColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ShowingColumns[i], pLocal->m_ShowingColumns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_HiddenColumns.size();
			pLocal->m_HiddenColumns.resize(nMembers);
			_To.m_nHiddenColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pHiddenColumns = &(*pLocal->m_HiddenColumns.begin());
			else
				_To.m_pHiddenColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_HiddenColumns[i], pLocal->m_HiddenColumns[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomColumns, HPMProjectCustomColumns>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomColumns const &_From, HPMProjectCustomColumns &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nShowingColumns;
			_To.m_ShowingColumns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pShowingColumns[i], _To.m_ShowingColumns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nHiddenColumns;
			_To.m_HiddenColumns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pHiddenColumns[i], _To.m_HiddenColumns[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectDefaultColumns, NInternal_C::HPMProjectDefaultColumns>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_Columns;
	};
	
	static void Convert(HPMProjectDefaultColumns const &_From, NInternal_C::HPMProjectDefaultColumns &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Columns.size();
			pLocal->m_Columns.resize(nMembers);
			_To.m_nColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pColumns = &(*pLocal->m_Columns.begin());
			else
				_To.m_pColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Columns[i], pLocal->m_Columns[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectDefaultColumns, HPMProjectDefaultColumns>
{
public:
	static void Convert(NInternal_C::HPMProjectDefaultColumns const &_From, HPMProjectDefaultColumns &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nColumns;
			_To.m_Columns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pColumns[i], _To.m_Columns[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectEmailSettings, NInternal_C::HPMProjectEmailSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectEmailSettings const &_From, NInternal_C::HPMProjectEmailSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceScheduleUpdated_Enable, _To.m_ResourceScheduleUpdated_Enable, _Context);
		CppConvert(_From.m_ResourceScheduleUpdated_nMinutesAfterUpdate, _To.m_ResourceScheduleUpdated_nMinutesAfterUpdate, _Context);
		CppConvert(_From.m_ResourceScheduleUpdated_bIncludeComment, _To.m_ResourceScheduleUpdated_bIncludeComment, _Context);
		CppConvert(_From.m_BeforeAMilestone_Enable, _To.m_BeforeAMilestone_Enable, _Context);
		CppConvert(_From.m_BeforeAMilestone_nDaysBefore0, _To.m_BeforeAMilestone_nDaysBefore0, _Context);
		CppConvert(_From.m_BeforeAMilestone_nDaysBefore1, _To.m_BeforeAMilestone_nDaysBefore1, _Context);
		CppConvert(_From.m_BeforeAMilestone_WhenToSend, _To.m_BeforeAMilestone_WhenToSend, _Context);
		CppConvert(_From.m_ProjectReport_Enable, _To.m_ProjectReport_Enable, _Context);
		CppConvert(_From.m_ProjectReport_PeriodicityType, _To.m_ProjectReport_PeriodicityType, _Context);
		CppConvert(_From.m_ProjectReport_WhenToSendWeekDay, _To.m_ProjectReport_WhenToSendWeekDay, _Context);
		CppConvert(_From.m_ProjectReport_WhenToSendHourOfDay, _To.m_ProjectReport_WhenToSendHourOfDay, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ProjectReport_SendToEmailsExtra[i], _To.m_ProjectReport_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvert(_From.m_WhenATaskIsCompleted_Enable, _To.m_WhenATaskIsCompleted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WhenATaskIsCompleted_SendToEmailsExtra[i], _To.m_WhenATaskIsCompleted_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvert(_From.m_WhenACommentIsPosted_Enable, _To.m_WhenACommentIsPosted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WhenACommentIsPosted_SendToEmailsExtra[i], _To.m_WhenACommentIsPosted_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvert(_From.m_WhenAPredcessorIsCompleted_Enable, _To.m_WhenAPredcessorIsCompleted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WhenAPredcessorIsCompleted_SendToEmailsExtra[i], _To.m_WhenAPredcessorIsCompleted_SendToEmailsExtra[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectEmailSettings, HPMProjectEmailSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectEmailSettings const &_From, HPMProjectEmailSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceScheduleUpdated_Enable, _To.m_ResourceScheduleUpdated_Enable, _Context);
		CppConvertReverse(_From.m_ResourceScheduleUpdated_nMinutesAfterUpdate, _To.m_ResourceScheduleUpdated_nMinutesAfterUpdate, _Context);
		CppConvertReverse(_From.m_ResourceScheduleUpdated_bIncludeComment, _To.m_ResourceScheduleUpdated_bIncludeComment, _Context);
		CppConvertReverse(_From.m_BeforeAMilestone_Enable, _To.m_BeforeAMilestone_Enable, _Context);
		CppConvertReverse(_From.m_BeforeAMilestone_nDaysBefore0, _To.m_BeforeAMilestone_nDaysBefore0, _Context);
		CppConvertReverse(_From.m_BeforeAMilestone_nDaysBefore1, _To.m_BeforeAMilestone_nDaysBefore1, _Context);
		CppConvertReverse(_From.m_BeforeAMilestone_WhenToSend, _To.m_BeforeAMilestone_WhenToSend, _Context);
		CppConvertReverse(_From.m_ProjectReport_Enable, _To.m_ProjectReport_Enable, _Context);
		CppConvertReverse(_From.m_ProjectReport_PeriodicityType, _To.m_ProjectReport_PeriodicityType, _Context);
		CppConvertReverse(_From.m_ProjectReport_WhenToSendWeekDay, _To.m_ProjectReport_WhenToSendWeekDay, _Context);
		CppConvertReverse(_From.m_ProjectReport_WhenToSendHourOfDay, _To.m_ProjectReport_WhenToSendHourOfDay, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_ProjectReport_SendToEmailsExtra[i], _To.m_ProjectReport_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WhenATaskIsCompleted_Enable, _To.m_WhenATaskIsCompleted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WhenATaskIsCompleted_SendToEmailsExtra[i], _To.m_WhenATaskIsCompleted_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WhenACommentIsPosted_Enable, _To.m_WhenACommentIsPosted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WhenACommentIsPosted_SendToEmailsExtra[i], _To.m_WhenACommentIsPosted_SendToEmailsExtra[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WhenAPredcessorIsCompleted_Enable, _To.m_WhenAPredcessorIsCompleted_Enable, _Context);
		{
			size_t nMembers = 3;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WhenAPredcessorIsCompleted_SendToEmailsExtra[i], _To.m_WhenAPredcessorIsCompleted_SendToEmailsExtra[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowRequiredField, NInternal_C::HPMProjectWorkflowRequiredField>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowRequiredField const &_From, NInternal_C::HPMProjectWorkflowRequiredField &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowRequiredField, HPMProjectWorkflowRequiredField>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowRequiredField const &_From, HPMProjectWorkflowRequiredField &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowConnection, NInternal_C::HPMProjectWorkflowConnection>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowConnection const &_From, NInternal_C::HPMProjectWorkflowConnection &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ConnectedToUID, _To.m_ConnectedToUID, _Context);
		CppConvert(_From.m_ConnectFrom, _To.m_ConnectFrom, _Context);
		CppConvert(_From.m_ConnectTo, _To.m_ConnectTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowConnection, HPMProjectWorkflowConnection>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowConnection const &_From, HPMProjectWorkflowConnection &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ConnectedToUID, _To.m_ConnectedToUID, _Context);
		CppConvertReverse(_From.m_ConnectFrom, _To.m_ConnectFrom, _Context);
		CppConvertReverse(_From.m_ConnectTo, _To.m_ConnectTo, _Context);
	}
};

template <>
class TCCppConvert<HPMWorkflowStatusChange, NInternal_C::HPMWorkflowStatusChange>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMWorkflowStatusChange const &_From, NInternal_C::HPMWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ItemStatus, _To.m_ItemStatus, _Context);
		CppConvert(_From.m_GotoStatus, _To.m_GotoStatus, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMWorkflowStatusChange, HPMWorkflowStatusChange>
{
public:
	static void Convert(NInternal_C::HPMWorkflowStatusChange const &_From, HPMWorkflowStatusChange &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ItemStatus, _To.m_ItemStatus, _Context);
		CppConvertReverse(_From.m_GotoStatus, _To.m_GotoStatus, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowObject, NInternal_C::HPMProjectWorkflowObject>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceDefinition> m_Resources;
		std::vector<NInternal_C::HPMProjectWorkflowConnection> m_ConnectedToObjects;
		std::vector<NInternal_C::HPMProjectWorkflowRequiredField> m_RequiredFields;
		std::vector<NInternal_C::HPMWorkflowStatusChange> m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet;
		std::vector<NInternal_C::HPMResourceDefinition> m_WorkflowStatus_EmailNotifications;
		std::vector<NInternal_C::HPMTaskFieldData> m_WorkflowStatus_DefaultTaskValues;
	};
	
	static void Convert(HPMProjectWorkflowObject const &_From, NInternal_C::HPMProjectWorkflowObject &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ObjectID, _To.m_ObjectID, _Context);
		CppConvert(_From.m_ObjectType, _To.m_ObjectType, _Context);
		CppConvert(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvert(_From.m_PositionY, _To.m_PositionY, _Context);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ConnectedToObjects.size();
			pLocal->m_ConnectedToObjects.resize(nMembers);
			_To.m_nConnectedToObjects = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pConnectedToObjects = &(*pLocal->m_ConnectedToObjects.begin());
			else
				_To.m_pConnectedToObjects = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ConnectedToObjects[i], pLocal->m_ConnectedToObjects[i], _Context);
			}
		}
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = _From.m_RequiredFields.size();
			pLocal->m_RequiredFields.resize(nMembers);
			_To.m_nRequiredFields = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pRequiredFields = &(*pLocal->m_RequiredFields.begin());
			else
				_To.m_pRequiredFields = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_RequiredFields[i], pLocal->m_RequiredFields[i], _Context);
			}
		}
		CppConvert(_From.m_WorkflowStatus_Name, _To.m_WorkflowStatus_pName, _Context);
		CppConvert(_From.m_WorkflowStatus_GoToWorkflowStatusWhenAssigned, _To.m_WorkflowStatus_GoToWorkflowStatusWhenAssigned, _Context);
		{
			size_t nMembers = _From.m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet.size();
			pLocal->m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet.resize(nMembers);
			_To.m_WorkflowStatus_nGotoWorkflowStatusWhenItemStatusSet = (unsigned int)nMembers;
			if (nMembers)
				_To.m_WorkflowStatus_pGotoWorkflowStatusWhenItemStatusSet = &(*pLocal->m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet.begin());
			else
				_To.m_WorkflowStatus_pGotoWorkflowStatusWhenItemStatusSet = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet[i], pLocal->m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet[i], _Context);
			}
		}
		CppConvert(_From.m_WorkflowStatus_AssignToResourcesAssignedInThisStatus, _To.m_WorkflowStatus_AssignToResourcesAssignedInThisStatus, _Context);
		CppConvert(_From.m_WorkflowStatus_Icon, _To.m_WorkflowStatus_Icon, _Context);
		{
			size_t nMembers = _From.m_WorkflowStatus_EmailNotifications.size();
			pLocal->m_WorkflowStatus_EmailNotifications.resize(nMembers);
			_To.m_WorkflowStatus_nEmailNotifications = (unsigned int)nMembers;
			if (nMembers)
				_To.m_WorkflowStatus_pEmailNotifications = &(*pLocal->m_WorkflowStatus_EmailNotifications.begin());
			else
				_To.m_WorkflowStatus_pEmailNotifications = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkflowStatus_EmailNotifications[i], pLocal->m_WorkflowStatus_EmailNotifications[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_WorkflowStatus_DefaultTaskValues.size();
			pLocal->m_WorkflowStatus_DefaultTaskValues.resize(nMembers);
			_To.m_WorkflowStatus_nDefaultTaskValues = (unsigned int)nMembers;
			if (nMembers)
				_To.m_WorkflowStatus_pDefaultTaskValues = &(*pLocal->m_WorkflowStatus_DefaultTaskValues.begin());
			else
				_To.m_WorkflowStatus_pDefaultTaskValues = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkflowStatus_DefaultTaskValues[i], pLocal->m_WorkflowStatus_DefaultTaskValues[i], _Context);
			}
		}
		CppConvert(_From.m_WorkflowStatus_SelectedWorklfowID, _To.m_WorkflowStatus_SelectedWorklfowID, _Context);
		CppConvert(_From.m_TaktTimeDays, _To.m_TaktTimeDays, _Context);
		CppConvert(_From.m_TaktTimeHours, _To.m_TaktTimeHours, _Context);
		CppConvert(_From.m_MaxWIPItems, _To.m_MaxWIPItems, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowObject, HPMProjectWorkflowObject>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowObject const &_From, HPMProjectWorkflowObject &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ObjectID, _To.m_ObjectID, _Context);
		CppConvertReverse(_From.m_ObjectType, _To.m_ObjectType, _Context);
		CppConvertReverse(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvertReverse(_From.m_PositionY, _To.m_PositionY, _Context);
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nConnectedToObjects;
			_To.m_ConnectedToObjects.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pConnectedToObjects[i], _To.m_ConnectedToObjects[i], _Context);
			}
		}
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = _From.m_nRequiredFields;
			_To.m_RequiredFields.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pRequiredFields[i], _To.m_RequiredFields[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WorkflowStatus_pName, _To.m_WorkflowStatus_Name, _Context);
		CppConvertReverse(_From.m_WorkflowStatus_GoToWorkflowStatusWhenAssigned, _To.m_WorkflowStatus_GoToWorkflowStatusWhenAssigned, _Context);
		{
			size_t nMembers = _From.m_WorkflowStatus_nGotoWorkflowStatusWhenItemStatusSet;
			_To.m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkflowStatus_pGotoWorkflowStatusWhenItemStatusSet[i], _To.m_WorkflowStatus_GotoWorkflowStatusWhenItemStatusSet[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WorkflowStatus_AssignToResourcesAssignedInThisStatus, _To.m_WorkflowStatus_AssignToResourcesAssignedInThisStatus, _Context);
		CppConvertReverse(_From.m_WorkflowStatus_Icon, _To.m_WorkflowStatus_Icon, _Context);
		{
			size_t nMembers = _From.m_WorkflowStatus_nEmailNotifications;
			_To.m_WorkflowStatus_EmailNotifications.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkflowStatus_pEmailNotifications[i], _To.m_WorkflowStatus_EmailNotifications[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_WorkflowStatus_nDefaultTaskValues;
			_To.m_WorkflowStatus_DefaultTaskValues.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkflowStatus_pDefaultTaskValues[i], _To.m_WorkflowStatus_DefaultTaskValues[i], _Context);
			}
		}
		CppConvertReverse(_From.m_WorkflowStatus_SelectedWorklfowID, _To.m_WorkflowStatus_SelectedWorklfowID, _Context);
		CppConvertReverse(_From.m_TaktTimeDays, _To.m_TaktTimeDays, _Context);
		CppConvertReverse(_From.m_TaktTimeHours, _To.m_TaktTimeHours, _Context);
		CppConvertReverse(_From.m_MaxWIPItems, _To.m_MaxWIPItems, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowProperties, NInternal_C::HPMProjectWorkflowProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowProperties const &_From, NInternal_C::HPMProjectWorkflowProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_WorkflowType, _To.m_WorkflowType, _Context);
		CppConvert(_From.m_Icon, _To.m_Icon, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowProperties, HPMProjectWorkflowProperties>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowProperties const &_From, HPMProjectWorkflowProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_WorkflowType, _To.m_WorkflowType, _Context);
		CppConvertReverse(_From.m_Icon, _To.m_Icon, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowSettings, NInternal_C::HPMProjectWorkflowSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectWorkflowObject> m_WorkflowObjects;
	};
	
	static void Convert(HPMProjectWorkflowSettings const &_From, NInternal_C::HPMProjectWorkflowSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Identifier, _To.m_Identifier, _Context);
		CppConvert(_From.m_NewestWorkflowVersionID, _To.m_NewestWorkflowVersionID, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_Properties, _To.m_Properties, _Context);
		CppConvert(_From.m_CreatedByResource, _To.m_CreatedByResource, _Context);
		CppConvert(_From.m_ResourceList, _To.m_ResourceList, _Context);
		{
			size_t nMembers = _From.m_WorkflowObjects.size();
			pLocal->m_WorkflowObjects.resize(nMembers);
			_To.m_nWorkflowObjects = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflowObjects = &(*pLocal->m_WorkflowObjects.begin());
			else
				_To.m_pWorkflowObjects = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkflowObjects[i], pLocal->m_WorkflowObjects[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowSettings, HPMProjectWorkflowSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowSettings const &_From, HPMProjectWorkflowSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Identifier, _To.m_Identifier, _Context);
		CppConvertReverse(_From.m_NewestWorkflowVersionID, _To.m_NewestWorkflowVersionID, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_Properties, _To.m_Properties, _Context);
		CppConvertReverse(_From.m_CreatedByResource, _To.m_CreatedByResource, _Context);
		CppConvertReverse(_From.m_ResourceList, _To.m_ResourceList, _Context);
		{
			size_t nMembers = _From.m_nWorkflowObjects;
			_To.m_WorkflowObjects.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflowObjects[i], _To.m_WorkflowObjects[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflows, NInternal_C::HPMProjectWorkflows>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectWorkflowSettings> m_Workflows;
	};
	
	static void Convert(HPMProjectWorkflows const &_From, NInternal_C::HPMProjectWorkflows &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Workflows.size();
			pLocal->m_Workflows.resize(nMembers);
			_To.m_nWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflows = &(*pLocal->m_Workflows.begin());
			else
				_To.m_pWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Workflows[i], pLocal->m_Workflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflows, HPMProjectWorkflows>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflows const &_From, HPMProjectWorkflows &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nWorkflows;
			_To.m_Workflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflows[i], _To.m_Workflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWallSettings, NInternal_C::HPMProjectWallSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMColumn> m_ShowTaskColumns;
	};
	
	static void Convert(HPMProjectWallSettings const &_From, NInternal_C::HPMProjectWallSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = _From.m_ShowTaskColumns.size();
			pLocal->m_ShowTaskColumns.resize(nMembers);
			_To.m_nShowTaskColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pShowTaskColumns = &(*pLocal->m_ShowTaskColumns.begin());
			else
				_To.m_pShowTaskColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ShowTaskColumns[i], pLocal->m_ShowTaskColumns[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWallSettings, HPMProjectWallSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectWallSettings const &_From, HPMProjectWallSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = _From.m_nShowTaskColumns;
			_To.m_ShowTaskColumns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pShowTaskColumns[i], _To.m_ShowTaskColumns[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectDetailedAccessRuleFunction, NInternal_C::HPMProjectDetailedAccessRuleFunction>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectDetailedAccessRuleFunction const &_From, NInternal_C::HPMProjectDetailedAccessRuleFunction &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FunctionType, _To.m_FunctionType, _Context);
		CppConvert(_From.m_FunctionID, _To.m_FunctionID, _Context);
		CppConvert(_From.m_FunctionSubID, _To.m_FunctionSubID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectDetailedAccessRuleFunction, HPMProjectDetailedAccessRuleFunction>
{
public:
	static void Convert(NInternal_C::HPMProjectDetailedAccessRuleFunction const &_From, HPMProjectDetailedAccessRuleFunction &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FunctionType, _To.m_FunctionType, _Context);
		CppConvertReverse(_From.m_FunctionID, _To.m_FunctionID, _Context);
		CppConvertReverse(_From.m_FunctionSubID, _To.m_FunctionSubID, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectDetailedAccessRule, NInternal_C::HPMProjectDetailedAccessRule>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceDefinition> m_Resources;
		std::vector<NInternal_C::HPMProjectDetailedAccessRuleFunction> m_Functions;
	};
	
	static void Convert(HPMProjectDetailedAccessRule const &_From, NInternal_C::HPMProjectDetailedAccessRule &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_RuleType, _To.m_RuleType, _Context);
		CppConvert(_From.m_CreatedByResource, _To.m_CreatedByResource, _Context);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Functions.size();
			pLocal->m_Functions.resize(nMembers);
			_To.m_nFunctions = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFunctions = &(*pLocal->m_Functions.begin());
			else
				_To.m_pFunctions = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Functions[i], pLocal->m_Functions[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectDetailedAccessRule, HPMProjectDetailedAccessRule>
{
public:
	static void Convert(NInternal_C::HPMProjectDetailedAccessRule const &_From, HPMProjectDetailedAccessRule &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_RuleType, _To.m_RuleType, _Context);
		CppConvertReverse(_From.m_CreatedByResource, _To.m_CreatedByResource, _Context);
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nFunctions;
			_To.m_Functions.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFunctions[i], _To.m_Functions[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectDetailedAccessRules, NInternal_C::HPMProjectDetailedAccessRules>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectDetailedAccessRule> m_Rules;
	};
	
	static void Convert(HPMProjectDetailedAccessRules const &_From, NInternal_C::HPMProjectDetailedAccessRules &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Rules.size();
			pLocal->m_Rules.resize(nMembers);
			_To.m_nRules = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pRules = &(*pLocal->m_Rules.begin());
			else
				_To.m_pRules = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Rules[i], pLocal->m_Rules[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectDetailedAccessRules, HPMProjectDetailedAccessRules>
{
public:
	static void Convert(NInternal_C::HPMProjectDetailedAccessRules const &_From, HPMProjectDetailedAccessRules &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nRules;
			_To.m_Rules.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pRules[i], _To.m_Rules[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWallGroup, NInternal_C::HPMProjectWallGroup>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWallGroup const &_From, NInternal_C::HPMProjectWallGroup &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvert(_From.m_GroupingID, _To.m_GroupingID, _Context);
		CppConvert(_From.m_GroupingSprintUID, _To.m_GroupingSprintUID, _Context);
		CppConvert(_From.m_ValueAssignID, _To.m_ValueAssignID, _Context);
		CppConvert(_From.m_GroupName, _To.m_pGroupName, _Context);
		CppConvert(_From.m_RectLeft, _To.m_RectLeft, _Context);
		CppConvert(_From.m_RectTop, _To.m_RectTop, _Context);
		CppConvert(_From.m_RectRight, _To.m_RectRight, _Context);
		CppConvert(_From.m_RectBottom, _To.m_RectBottom, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWallGroup, HPMProjectWallGroup>
{
public:
	static void Convert(NInternal_C::HPMProjectWallGroup const &_From, HPMProjectWallGroup &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvertReverse(_From.m_GroupingID, _To.m_GroupingID, _Context);
		CppConvertReverse(_From.m_GroupingSprintUID, _To.m_GroupingSprintUID, _Context);
		CppConvertReverse(_From.m_ValueAssignID, _To.m_ValueAssignID, _Context);
		CppConvertReverse(_From.m_pGroupName, _To.m_GroupName, _Context);
		CppConvertReverse(_From.m_RectLeft, _To.m_RectLeft, _Context);
		CppConvertReverse(_From.m_RectTop, _To.m_RectTop, _Context);
		CppConvertReverse(_From.m_RectRight, _To.m_RectRight, _Context);
		CppConvertReverse(_From.m_RectBottom, _To.m_RectBottom, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWallGroups, NInternal_C::HPMProjectWallGroups>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectWallGroup> m_Groups;
	};
	
	static void Convert(HPMProjectWallGroups const &_From, NInternal_C::HPMProjectWallGroups &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Groups.size();
			pLocal->m_Groups.resize(nMembers);
			_To.m_nGroups = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pGroups = &(*pLocal->m_Groups.begin());
			else
				_To.m_pGroups = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Groups[i], pLocal->m_Groups[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWallGroups, HPMProjectWallGroups>
{
public:
	static void Convert(NInternal_C::HPMProjectWallGroups const &_From, HPMProjectWallGroups &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nGroups;
			_To.m_Groups.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pGroups[i], _To.m_Groups[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectStatisticsSettings, NInternal_C::HPMProjectStatisticsSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectStatisticsSettings const &_From, NInternal_C::HPMProjectStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_SamplingFrequency, _To.m_SamplingFrequency, _Context);
		CppConvert(_From.m_SecondOfDaySample, _To.m_SecondOfDaySample, _Context);
		CppConvert(_From.m_SamplingFrequencyResource, _To.m_SamplingFrequencyResource, _Context);
		CppConvert(_From.m_SecondOfDaySampleResource, _To.m_SecondOfDaySampleResource, _Context);
		CppConvert(_From.m_SamplingFrequencyResourceGroup, _To.m_SamplingFrequencyResourceGroup, _Context);
		CppConvert(_From.m_SecondOfDaySampleResourceGroup, _To.m_SecondOfDaySampleResourceGroup, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectStatisticsSettings, HPMProjectStatisticsSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectStatisticsSettings const &_From, HPMProjectStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_SamplingFrequency, _To.m_SamplingFrequency, _Context);
		CppConvertReverse(_From.m_SecondOfDaySample, _To.m_SecondOfDaySample, _Context);
		CppConvertReverse(_From.m_SamplingFrequencyResource, _To.m_SamplingFrequencyResource, _Context);
		CppConvertReverse(_From.m_SecondOfDaySampleResource, _To.m_SecondOfDaySampleResource, _Context);
		CppConvertReverse(_From.m_SamplingFrequencyResourceGroup, _To.m_SamplingFrequencyResourceGroup, _Context);
		CppConvertReverse(_From.m_SecondOfDaySampleResourceGroup, _To.m_SecondOfDaySampleResourceGroup, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectResourceEnum, NInternal_C::HPMProjectResourceEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_Resources;
	};
	
	static void Convert(HPMProjectResourceEnum const &_From, NInternal_C::HPMProjectResourceEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectResourceEnum, HPMProjectResourceEnum>
{
public:
	static void Convert(NInternal_C::HPMProjectResourceEnum const &_From, HPMProjectResourceEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectResourceProperties, NInternal_C::HPMProjectResourceProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectResourceProperties const &_From, NInternal_C::HPMProjectResourceProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectResourceProperties, HPMProjectResourceProperties>
{
public:
	static void Convert(NInternal_C::HPMProjectResourceProperties const &_From, HPMProjectResourceProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectCustomStatisticsSampler, NInternal_C::HPMProjectCustomStatisticsSampler>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMCustomStatisticsField> m_Fields;
	};
	
	static void Convert(HPMProjectCustomStatisticsSampler const &_From, NInternal_C::HPMProjectCustomStatisticsSampler &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_SamplerID, _To.m_SamplerID, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_CreatedBy, _To.m_CreatedBy, _Context);
		{
			size_t nMembers = _From.m_Fields.size();
			pLocal->m_Fields.resize(nMembers);
			_To.m_nFields = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFields = &(*pLocal->m_Fields.begin());
			else
				_To.m_pFields = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Fields[i], pLocal->m_Fields[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomStatisticsSampler, HPMProjectCustomStatisticsSampler>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomStatisticsSampler const &_From, HPMProjectCustomStatisticsSampler &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_SamplerID, _To.m_SamplerID, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_CreatedBy, _To.m_CreatedBy, _Context);
		{
			size_t nMembers = _From.m_nFields;
			_To.m_Fields.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFields[i], _To.m_Fields[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectCustomStatisticsSettings, NInternal_C::HPMProjectCustomStatisticsSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectCustomStatisticsSampler> m_StatisticsSamplers;
	};
	
	static void Convert(HPMProjectCustomStatisticsSettings const &_From, NInternal_C::HPMProjectCustomStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_NextSamplerID, _To.m_NextSamplerID, _Context);
		{
			size_t nMembers = _From.m_StatisticsSamplers.size();
			pLocal->m_StatisticsSamplers.resize(nMembers);
			_To.m_nStatisticsSamplers = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pStatisticsSamplers = &(*pLocal->m_StatisticsSamplers.begin());
			else
				_To.m_pStatisticsSamplers = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_StatisticsSamplers[i], pLocal->m_StatisticsSamplers[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectCustomStatisticsSettings, HPMProjectCustomStatisticsSettings>
{
public:
	static void Convert(NInternal_C::HPMProjectCustomStatisticsSettings const &_From, HPMProjectCustomStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_NextSamplerID, _To.m_NextSamplerID, _Context);
		{
			size_t nMembers = _From.m_nStatisticsSamplers;
			_To.m_StatisticsSamplers.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pStatisticsSamplers[i], _To.m_StatisticsSamplers[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowEnum, NInternal_C::HPMProjectWorkflowEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_Workflows;
	};
	
	static void Convert(HPMProjectWorkflowEnum const &_From, NInternal_C::HPMProjectWorkflowEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Workflows.size();
			pLocal->m_Workflows.resize(nMembers);
			_To.m_nWorkflows = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflows = &(*pLocal->m_Workflows.begin());
			else
				_To.m_pWorkflows = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Workflows[i], pLocal->m_Workflows[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowEnum, HPMProjectWorkflowEnum>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowEnum const &_From, HPMProjectWorkflowEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nWorkflows;
			_To.m_Workflows.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflows[i], _To.m_Workflows[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowObjectEnum, NInternal_C::HPMProjectWorkflowObjectEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_WorkflowObjects;
	};
	
	static void Convert(HPMProjectWorkflowObjectEnum const &_From, NInternal_C::HPMProjectWorkflowObjectEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_WorkflowObjects.size();
			pLocal->m_WorkflowObjects.resize(nMembers);
			_To.m_nWorkflowObjects = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWorkflowObjects = &(*pLocal->m_WorkflowObjects.begin());
			else
				_To.m_pWorkflowObjects = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkflowObjects[i], pLocal->m_WorkflowObjects[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowObjectEnum, HPMProjectWorkflowObjectEnum>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowObjectEnum const &_From, HPMProjectWorkflowObjectEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nWorkflowObjects;
			_To.m_WorkflowObjects.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWorkflowObjects[i], _To.m_WorkflowObjects[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowStructureTask, NInternal_C::HPMProjectWorkflowStructureTask>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskFieldData> m_TaskDefaultValues;
	};
	
	static void Convert(HPMProjectWorkflowStructureTask const &_From, NInternal_C::HPMProjectWorkflowStructureTask &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowIdentifier, _To.m_WorkflowIdentifier, _Context);
		CppConvert(_From.m_TaskDescription, _To.m_pTaskDescription, _Context);
		CppConvert(_From.m_TaskTreeLevel, _To.m_TaskTreeLevel, _Context);
		CppConvert(_From.m_TaskAllocatedResources, _To.m_TaskAllocatedResources, _Context);
		{
			size_t nMembers = _From.m_TaskDefaultValues.size();
			pLocal->m_TaskDefaultValues.resize(nMembers);
			_To.m_nTaskDefaultValues = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTaskDefaultValues = &(*pLocal->m_TaskDefaultValues.begin());
			else
				_To.m_pTaskDefaultValues = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_TaskDefaultValues[i], pLocal->m_TaskDefaultValues[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowStructureTask, HPMProjectWorkflowStructureTask>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowStructureTask const &_From, HPMProjectWorkflowStructureTask &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowIdentifier, _To.m_WorkflowIdentifier, _Context);
		CppConvertReverse(_From.m_pTaskDescription, _To.m_TaskDescription, _Context);
		CppConvertReverse(_From.m_TaskTreeLevel, _To.m_TaskTreeLevel, _Context);
		CppConvertReverse(_From.m_TaskAllocatedResources, _To.m_TaskAllocatedResources, _Context);
		{
			size_t nMembers = _From.m_nTaskDefaultValues;
			_To.m_TaskDefaultValues.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTaskDefaultValues[i], _To.m_TaskDefaultValues[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowStructure, NInternal_C::HPMProjectWorkflowStructure>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectWorkflowStructureTask> m_Tasks;
	};
	
	static void Convert(HPMProjectWorkflowStructure const &_From, NInternal_C::HPMProjectWorkflowStructure &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Tasks.size();
			pLocal->m_Tasks.resize(nMembers);
			_To.m_nTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasks = &(*pLocal->m_Tasks.begin());
			else
				_To.m_pTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Tasks[i], pLocal->m_Tasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowStructure, HPMProjectWorkflowStructure>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowStructure const &_From, HPMProjectWorkflowStructure &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nTasks;
			_To.m_Tasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasks[i], _To.m_Tasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowStatusStats, NInternal_C::HPMProjectWorkflowStatusStats>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowStatusStats const &_From, NInternal_C::HPMProjectWorkflowStatusStats &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_StateChanges, _To.m_StateChanges, _Context);
		CppConvert(_From.m_TotalTimeSpan, _To.m_TotalTimeSpan, _Context);
		CppConvert(_From.m_ContributingTasks, _To.m_ContributingTasks, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowStatusStats, HPMProjectWorkflowStatusStats>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowStatusStats const &_From, HPMProjectWorkflowStatusStats &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_StateChanges, _To.m_StateChanges, _Context);
		CppConvertReverse(_From.m_TotalTimeSpan, _To.m_TotalTimeSpan, _Context);
		CppConvertReverse(_From.m_ContributingTasks, _To.m_ContributingTasks, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowEnumWorkflowProperties, NInternal_C::HPMProjectWorkflowEnumWorkflowProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowEnumWorkflowProperties const &_From, NInternal_C::HPMProjectWorkflowEnumWorkflowProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowEnumWorkflowType, _To.m_WorkflowEnumWorkflowType, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowEnumWorkflowProperties, HPMProjectWorkflowEnumWorkflowProperties>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowEnumWorkflowProperties const &_From, HPMProjectWorkflowEnumWorkflowProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowEnumWorkflowType, _To.m_WorkflowEnumWorkflowType, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectWorkflowEnumObjectProperties, NInternal_C::HPMProjectWorkflowEnumObjectProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMProjectWorkflowEnumObjectProperties const &_From, NInternal_C::HPMProjectWorkflowEnumObjectProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_WorkflowEnumObjectType, _To.m_WorkflowEnumObjectType, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectWorkflowEnumObjectProperties, HPMProjectWorkflowEnumObjectProperties>
{
public:
	static void Convert(NInternal_C::HPMProjectWorkflowEnumObjectProperties const &_From, HPMProjectWorkflowEnumObjectProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_WorkflowEnumObjectType, _To.m_WorkflowEnumObjectType, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectViewPreset, NInternal_C::HPMProjectViewPreset>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceDefinition> m_Resources;
		std::vector<NInternal_C::HPMColumn> m_Columns;
		std::vector<NInternal_C::HPMColumn> m_ColumnsOrder;
		std::vector<NInternal_C::HPMColumn> m_ItemSettingsColumns;
		std::vector<NInternal_C::HPMColumn> m_ItemSettingsColumnsOrder;
	};
	
	static void Convert(HPMProjectViewPreset const &_From, NInternal_C::HPMProjectViewPreset &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_Columns.size();
			pLocal->m_Columns.resize(nMembers);
			_To.m_nColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pColumns = &(*pLocal->m_Columns.begin());
			else
				_To.m_pColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Columns[i], pLocal->m_Columns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ColumnsOrder.size();
			pLocal->m_ColumnsOrder.resize(nMembers);
			_To.m_nColumnsOrder = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pColumnsOrder = &(*pLocal->m_ColumnsOrder.begin());
			else
				_To.m_pColumnsOrder = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ColumnsOrder[i], pLocal->m_ColumnsOrder[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ItemSettingsColumns.size();
			pLocal->m_ItemSettingsColumns.resize(nMembers);
			_To.m_nItemSettingsColumns = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pItemSettingsColumns = &(*pLocal->m_ItemSettingsColumns.begin());
			else
				_To.m_pItemSettingsColumns = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ItemSettingsColumns[i], pLocal->m_ItemSettingsColumns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_ItemSettingsColumnsOrder.size();
			pLocal->m_ItemSettingsColumnsOrder.resize(nMembers);
			_To.m_nItemSettingsColumnsOrder = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pItemSettingsColumnsOrder = &(*pLocal->m_ItemSettingsColumnsOrder.begin());
			else
				_To.m_pItemSettingsColumnsOrder = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ItemSettingsColumnsOrder[i], pLocal->m_ItemSettingsColumnsOrder[i], _Context);
			}
		}
		CppConvert(_From.m_ShowOptions, _To.m_ShowOptions, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectViewPreset, HPMProjectViewPreset>
{
public:
	static void Convert(NInternal_C::HPMProjectViewPreset const &_From, HPMProjectViewPreset &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nColumns;
			_To.m_Columns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pColumns[i], _To.m_Columns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nColumnsOrder;
			_To.m_ColumnsOrder.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pColumnsOrder[i], _To.m_ColumnsOrder[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nItemSettingsColumns;
			_To.m_ItemSettingsColumns.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pItemSettingsColumns[i], _To.m_ItemSettingsColumns[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nItemSettingsColumnsOrder;
			_To.m_ItemSettingsColumnsOrder.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pItemSettingsColumnsOrder[i], _To.m_ItemSettingsColumnsOrder[i], _Context);
			}
		}
		CppConvertReverse(_From.m_ShowOptions, _To.m_ShowOptions, _Context);
	}
};

template <>
class TCCppConvert<HPMProjectViewPresets, NInternal_C::HPMProjectViewPresets>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMProjectViewPreset> m_Presets;
	};
	
	static void Convert(HPMProjectViewPresets const &_From, NInternal_C::HPMProjectViewPresets &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Presets.size();
			pLocal->m_Presets.resize(nMembers);
			_To.m_nPresets = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pPresets = &(*pLocal->m_Presets.begin());
			else
				_To.m_pPresets = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Presets[i], pLocal->m_Presets[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMProjectViewPresets, HPMProjectViewPresets>
{
public:
	static void Convert(NInternal_C::HPMProjectViewPresets const &_From, HPMProjectViewPresets &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nPresets;
			_To.m_Presets.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pPresets[i], _To.m_Presets[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskEnum, NInternal_C::HPMTaskEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_Tasks;
	};
	
	static void Convert(HPMTaskEnum const &_From, NInternal_C::HPMTaskEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Tasks.size();
			pLocal->m_Tasks.resize(nMembers);
			_To.m_nTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasks = &(*pLocal->m_Tasks.begin());
			else
				_To.m_pTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Tasks[i], pLocal->m_Tasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskEnum, HPMTaskEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskEnum const &_From, HPMTaskEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nTasks;
			_To.m_Tasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasks[i], _To.m_Tasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskConnectionEnum, NInternal_C::HPMTaskConnectionEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_ConnectedTasks;
	};
	
	static void Convert(HPMTaskConnectionEnum const &_From, NInternal_C::HPMTaskConnectionEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_ConnectedTasks.size();
			pLocal->m_ConnectedTasks.resize(nMembers);
			_To.m_nConnectedTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pConnectedTasks = &(*pLocal->m_ConnectedTasks.begin());
			else
				_To.m_pConnectedTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ConnectedTasks[i], pLocal->m_ConnectedTasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskConnectionEnum, HPMTaskConnectionEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskConnectionEnum const &_From, HPMTaskConnectionEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nConnectedTasks;
			_To.m_ConnectedTasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pConnectedTasks[i], _To.m_ConnectedTasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskCustomColumnDataEnum, NInternal_C::HPMTaskCustomColumnDataEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_Hashes;
	};
	
	static void Convert(HPMTaskCustomColumnDataEnum const &_From, NInternal_C::HPMTaskCustomColumnDataEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Hashes.size();
			pLocal->m_Hashes.resize(nMembers);
			_To.m_nHashes = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pHashes = &(*pLocal->m_Hashes.begin());
			else
				_To.m_pHashes = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Hashes[i], pLocal->m_Hashes[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCustomColumnDataEnum, HPMTaskCustomColumnDataEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskCustomColumnDataEnum const &_From, HPMTaskCustomColumnDataEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nHashes;
			_To.m_Hashes.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pHashes[i], _To.m_Hashes[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskCreateUnifiedReference, NInternal_C::HPMTaskCreateUnifiedReference>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskCreateUnifiedReference const &_From, NInternal_C::HPMTaskCreateUnifiedReference &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bLocalID, _To.m_bLocalID, _Context);
		CppConvert(_From.m_bHasNonSumbittedBetween, _To.m_bHasNonSumbittedBetween, _Context);
		CppConvert(_From.m_RefID, _To.m_RefID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCreateUnifiedReference, HPMTaskCreateUnifiedReference>
{
public:
	static void Convert(NInternal_C::HPMTaskCreateUnifiedReference const &_From, HPMTaskCreateUnifiedReference &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bLocalID, _To.m_bLocalID, _Context);
		CppConvertReverse(_From.m_bHasNonSumbittedBetween, _To.m_bHasNonSumbittedBetween, _Context);
		CppConvertReverse(_From.m_RefID, _To.m_RefID, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskCreateUnifiedEntry, NInternal_C::HPMTaskCreateUnifiedEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskCreateUnifiedReference> m_ParentRefIDs;
	};
	
	static void Convert(HPMTaskCreateUnifiedEntry const &_From, NInternal_C::HPMTaskCreateUnifiedEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bIsProxy, _To.m_bIsProxy, _Context);
		CppConvert(_From.m_LocalID, _To.m_LocalID, _Context);
		CppConvert(_From.m_ReuseUniqueRefID, _To.m_ReuseUniqueRefID, _Context);
		CppConvert(_From.m_TaskType, _To.m_TaskType, _Context);
		CppConvert(_From.m_TaskLockedType, _To.m_TaskLockedType, _Context);
		CppConvert(_From.m_Proxy_ReferToRefTaskID, _To.m_Proxy_ReferToRefTaskID, _Context);
		CppConvert(_From.m_NonProxy_ReuseUniqueID, _To.m_NonProxy_ReuseUniqueID, _Context);
		CppConvert(_From.m_NonProxy_ReuseID, _To.m_NonProxy_ReuseID, _Context);
		CppConvert(_From.m_NonProxy_WorkflowID, _To.m_NonProxy_WorkflowID, _Context);
		CppConvert(_From.m_NonProxy_bRestoreFromHistory, _To.m_NonProxy_bRestoreFromHistory, _Context);
		CppConvert(_From.m_PreviousRefID, _To.m_PreviousRefID, _Context);
		CppConvert(_From.m_PreviousWorkPrioRefID, _To.m_PreviousWorkPrioRefID, _Context);
		{
			size_t nMembers = _From.m_ParentRefIDs.size();
			pLocal->m_ParentRefIDs.resize(nMembers);
			_To.m_nParentRefIDs = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pParentRefIDs = &(*pLocal->m_ParentRefIDs.begin());
			else
				_To.m_pParentRefIDs = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ParentRefIDs[i], pLocal->m_ParentRefIDs[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCreateUnifiedEntry, HPMTaskCreateUnifiedEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskCreateUnifiedEntry const &_From, HPMTaskCreateUnifiedEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bIsProxy, _To.m_bIsProxy, _Context);
		CppConvertReverse(_From.m_LocalID, _To.m_LocalID, _Context);
		CppConvertReverse(_From.m_ReuseUniqueRefID, _To.m_ReuseUniqueRefID, _Context);
		CppConvertReverse(_From.m_TaskType, _To.m_TaskType, _Context);
		CppConvertReverse(_From.m_TaskLockedType, _To.m_TaskLockedType, _Context);
		CppConvertReverse(_From.m_Proxy_ReferToRefTaskID, _To.m_Proxy_ReferToRefTaskID, _Context);
		CppConvertReverse(_From.m_NonProxy_ReuseUniqueID, _To.m_NonProxy_ReuseUniqueID, _Context);
		CppConvertReverse(_From.m_NonProxy_ReuseID, _To.m_NonProxy_ReuseID, _Context);
		CppConvertReverse(_From.m_NonProxy_WorkflowID, _To.m_NonProxy_WorkflowID, _Context);
		CppConvertReverse(_From.m_NonProxy_bRestoreFromHistory, _To.m_NonProxy_bRestoreFromHistory, _Context);
		CppConvertReverse(_From.m_PreviousRefID, _To.m_PreviousRefID, _Context);
		CppConvertReverse(_From.m_PreviousWorkPrioRefID, _To.m_PreviousWorkPrioRefID, _Context);
		{
			size_t nMembers = _From.m_nParentRefIDs;
			_To.m_ParentRefIDs.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pParentRefIDs[i], _To.m_ParentRefIDs[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskCreateUnified, NInternal_C::HPMTaskCreateUnified>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskCreateUnifiedEntry> m_Tasks;
	};
	
	static void Convert(HPMTaskCreateUnified const &_From, NInternal_C::HPMTaskCreateUnified &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Tasks.size();
			pLocal->m_Tasks.resize(nMembers);
			_To.m_nTasks = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasks = &(*pLocal->m_Tasks.begin());
			else
				_To.m_pTasks = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Tasks[i], pLocal->m_Tasks[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCreateUnified, HPMTaskCreateUnified>
{
public:
	static void Convert(NInternal_C::HPMTaskCreateUnified const &_From, HPMTaskCreateUnified &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nTasks;
			_To.m_Tasks.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasks[i], _To.m_Tasks[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskChangeDispositionEntry, NInternal_C::HPMTaskChangeDispositionEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskChangeDispositionEntry const &_From, NInternal_C::HPMTaskChangeDispositionEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_ChangeFlags, _To.m_ChangeFlags, _Context);
		CppConvert(_From.m_PreviousRefID, _To.m_PreviousRefID, _Context);
		CppConvert(_From.m_TreeLevel, _To.m_TreeLevel, _Context);
		CppConvert(_From.m_LinkedToSprint, _To.m_LinkedToSprint, _Context);
		CppConvert(_From.m_LinkedToPipelineTask, _To.m_LinkedToPipelineTask, _Context);
		CppConvert(_From.m_TaskType, _To.m_TaskType, _Context);
		CppConvert(_From.m_TaskLockedType, _To.m_TaskLockedType, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskChangeDispositionEntry, HPMTaskChangeDispositionEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskChangeDispositionEntry const &_From, HPMTaskChangeDispositionEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_ChangeFlags, _To.m_ChangeFlags, _Context);
		CppConvertReverse(_From.m_PreviousRefID, _To.m_PreviousRefID, _Context);
		CppConvertReverse(_From.m_TreeLevel, _To.m_TreeLevel, _Context);
		CppConvertReverse(_From.m_LinkedToSprint, _To.m_LinkedToSprint, _Context);
		CppConvertReverse(_From.m_LinkedToPipelineTask, _To.m_LinkedToPipelineTask, _Context);
		CppConvertReverse(_From.m_TaskType, _To.m_TaskType, _Context);
		CppConvertReverse(_From.m_TaskLockedType, _To.m_TaskLockedType, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskChangeDisposition, NInternal_C::HPMTaskChangeDisposition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskChangeDispositionEntry> m_TasksToChange;
	};
	
	static void Convert(HPMTaskChangeDisposition const &_From, NInternal_C::HPMTaskChangeDisposition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_OptionFlags, _To.m_OptionFlags, _Context);
		{
			size_t nMembers = _From.m_TasksToChange.size();
			pLocal->m_TasksToChange.resize(nMembers);
			_To.m_nTasksToChange = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pTasksToChange = &(*pLocal->m_TasksToChange.begin());
			else
				_To.m_pTasksToChange = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_TasksToChange[i], pLocal->m_TasksToChange[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskChangeDisposition, HPMTaskChangeDisposition>
{
public:
	static void Convert(NInternal_C::HPMTaskChangeDisposition const &_From, HPMTaskChangeDisposition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_OptionFlags, _To.m_OptionFlags, _Context);
		{
			size_t nMembers = _From.m_nTasksToChange;
			_To.m_TasksToChange.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pTasksToChange[i], _To.m_TasksToChange[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskAttachedDocumentsEntry, NInternal_C::HPMTaskAttachedDocumentsEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskAttachedDocumentsEntry const &_From, NInternal_C::HPMTaskAttachedDocumentsEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_AddedByResource, _To.m_AddedByResource, _Context);
		CppConvert(_From.m_FileID, _To.m_FileID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskAttachedDocumentsEntry, HPMTaskAttachedDocumentsEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskAttachedDocumentsEntry const &_From, HPMTaskAttachedDocumentsEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_AddedByResource, _To.m_AddedByResource, _Context);
		CppConvertReverse(_From.m_FileID, _To.m_FileID, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskAttachedDocuments, NInternal_C::HPMTaskAttachedDocuments>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskAttachedDocumentsEntry> m_AttachedDocuments;
	};
	
	static void Convert(HPMTaskAttachedDocuments const &_From, NInternal_C::HPMTaskAttachedDocuments &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_AttachedDocuments.size();
			pLocal->m_AttachedDocuments.resize(nMembers);
			_To.m_nAttachedDocuments = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAttachedDocuments = &(*pLocal->m_AttachedDocuments.begin());
			else
				_To.m_pAttachedDocuments = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AttachedDocuments[i], pLocal->m_AttachedDocuments[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskAttachedDocuments, HPMTaskAttachedDocuments>
{
public:
	static void Convert(NInternal_C::HPMTaskAttachedDocuments const &_From, HPMTaskAttachedDocuments &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nAttachedDocuments;
			_To.m_AttachedDocuments.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAttachedDocuments[i], _To.m_AttachedDocuments[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskResourceAllocationResource, NInternal_C::HPMTaskResourceAllocationResource>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskResourceAllocationResource const &_From, NInternal_C::HPMTaskResourceAllocationResource &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_PercentAllocated, _To.m_PercentAllocated, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskResourceAllocationResource, HPMTaskResourceAllocationResource>
{
public:
	static void Convert(NInternal_C::HPMTaskResourceAllocationResource const &_From, HPMTaskResourceAllocationResource &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_PercentAllocated, _To.m_PercentAllocated, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskResourceAllocation, NInternal_C::HPMTaskResourceAllocation>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskResourceAllocationResource> m_Resources;
	};
	
	static void Convert(HPMTaskResourceAllocation const &_From, NInternal_C::HPMTaskResourceAllocation &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskResourceAllocation, HPMTaskResourceAllocation>
{
public:
	static void Convert(NInternal_C::HPMTaskResourceAllocation const &_From, HPMTaskResourceAllocation &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMResourceReference, NInternal_C::HPMResourceReference>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceReference const &_From, NInternal_C::HPMResourceReference &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceType, _To.m_ResourceType, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceReference, HPMResourceReference>
{
public:
	static void Convert(NInternal_C::HPMResourceReference const &_From, HPMResourceReference &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceType, _To.m_ResourceType, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskSprintAllocatedResources, NInternal_C::HPMTaskSprintAllocatedResources>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceReference> m_Resources;
	};
	
	static void Convert(HPMTaskSprintAllocatedResources const &_From, NInternal_C::HPMTaskSprintAllocatedResources &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskSprintAllocatedResources, HPMTaskSprintAllocatedResources>
{
public:
	static void Convert(NInternal_C::HPMTaskSprintAllocatedResources const &_From, HPMTaskSprintAllocatedResources &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskSprintResourceAllocationResource, NInternal_C::HPMTaskSprintResourceAllocationResource>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskSprintResourceAllocationResource const &_From, NInternal_C::HPMTaskSprintResourceAllocationResource &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
		CppConvert(_From.m_AllocatedPercent, _To.m_AllocatedPercent, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskSprintResourceAllocationResource, HPMTaskSprintResourceAllocationResource>
{
public:
	static void Convert(NInternal_C::HPMTaskSprintResourceAllocationResource const &_From, HPMTaskSprintResourceAllocationResource &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
		CppConvertReverse(_From.m_AllocatedPercent, _To.m_AllocatedPercent, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskSprintResourceAllocation, NInternal_C::HPMTaskSprintResourceAllocation>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskSprintResourceAllocationResource> m_Resources;
	};
	
	static void Convert(HPMTaskSprintResourceAllocation const &_From, NInternal_C::HPMTaskSprintResourceAllocation &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Resources.size();
			pLocal->m_Resources.resize(nMembers);
			_To.m_nResources = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResources = &(*pLocal->m_Resources.begin());
			else
				_To.m_pResources = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Resources[i], pLocal->m_Resources[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskSprintResourceAllocation, HPMTaskSprintResourceAllocation>
{
public:
	static void Convert(NInternal_C::HPMTaskSprintResourceAllocation const &_From, HPMTaskSprintResourceAllocation &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nResources;
			_To.m_Resources.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResources[i], _To.m_Resources[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskTimeZonesZone, NInternal_C::HPMTaskTimeZonesZone>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskTimeZonesZone const &_From, NInternal_C::HPMTaskTimeZonesZone &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Start, _To.m_Start, _Context);
		CppConvert(_From.m_End, _To.m_End, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskTimeZonesZone, HPMTaskTimeZonesZone>
{
public:
	static void Convert(NInternal_C::HPMTaskTimeZonesZone const &_From, HPMTaskTimeZonesZone &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Start, _To.m_Start, _Context);
		CppConvertReverse(_From.m_End, _To.m_End, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskTimeZones, NInternal_C::HPMTaskTimeZones>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskTimeZonesZone> m_Zones;
	};
	
	static void Convert(HPMTaskTimeZones const &_From, NInternal_C::HPMTaskTimeZones &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Zones.size();
			pLocal->m_Zones.resize(nMembers);
			_To.m_nZones = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pZones = &(*pLocal->m_Zones.begin());
			else
				_To.m_pZones = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Zones[i], pLocal->m_Zones[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskTimeZones, HPMTaskTimeZones>
{
public:
	static void Convert(NInternal_C::HPMTaskTimeZones const &_From, HPMTaskTimeZones &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nZones;
			_To.m_Zones.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pZones[i], _To.m_Zones[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskUIDHistory, NInternal_C::HPMTaskUIDHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_UIDs;
	};
	
	static void Convert(HPMTaskUIDHistory const &_From, NInternal_C::HPMTaskUIDHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_UIDs.size();
			pLocal->m_UIDs.resize(nMembers);
			_To.m_nUIDs = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pUIDs = &(*pLocal->m_UIDs.begin());
			else
				_To.m_pUIDs = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_UIDs[i], pLocal->m_UIDs[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskUIDHistory, HPMTaskUIDHistory>
{
public:
	static void Convert(NInternal_C::HPMTaskUIDHistory const &_From, HPMTaskUIDHistory &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nUIDs;
			_To.m_UIDs.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pUIDs[i], _To.m_UIDs[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMResourceAllocationHistoryEntry, NInternal_C::HPMResourceAllocationHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMResourceAllocationHistoryEntry const &_From, NInternal_C::HPMResourceAllocationHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_PercentAllocated, _To.m_PercentAllocated, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMResourceAllocationHistoryEntry, HPMResourceAllocationHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMResourceAllocationHistoryEntry const &_From, HPMResourceAllocationHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_PercentAllocated, _To.m_PercentAllocated, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskWorkRemainingHistoryEntry, NInternal_C::HPMTaskWorkRemainingHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceAllocationHistoryEntry> m_ResourceAllocationEntries;
	};
	
	static void Convert(HPMTaskWorkRemainingHistoryEntry const &_From, NInternal_C::HPMTaskWorkRemainingHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_nHoursRemaining, _To.m_nHoursRemaining, _Context);
		CppConvert(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_ResourceAllocationEntries.size();
			pLocal->m_ResourceAllocationEntries.resize(nMembers);
			_To.m_nResourceAllocationEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResourceAllocationEntries = &(*pLocal->m_ResourceAllocationEntries.begin());
			else
				_To.m_pResourceAllocationEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ResourceAllocationEntries[i], pLocal->m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskWorkRemainingHistoryEntry, HPMTaskWorkRemainingHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskWorkRemainingHistoryEntry const &_From, HPMTaskWorkRemainingHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_nHoursRemaining, _To.m_nHoursRemaining, _Context);
		CppConvertReverse(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_nResourceAllocationEntries;
			_To.m_ResourceAllocationEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResourceAllocationEntries[i], _To.m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskWorkRemainingHistory, NInternal_C::HPMTaskWorkRemainingHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskWorkRemainingHistoryEntry> m_Entries;
	};
	
	static void Convert(HPMTaskWorkRemainingHistory const &_From, NInternal_C::HPMTaskWorkRemainingHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Entries.size();
			pLocal->m_Entries.resize(nMembers);
			_To.m_nEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pEntries = &(*pLocal->m_Entries.begin());
			else
				_To.m_pEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Entries[i], pLocal->m_Entries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskWorkRemainingHistory, HPMTaskWorkRemainingHistory>
{
public:
	static void Convert(NInternal_C::HPMTaskWorkRemainingHistory const &_From, HPMTaskWorkRemainingHistory &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nEntries;
			_To.m_Entries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pEntries[i], _To.m_Entries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskWorkRemainingHistoryDaysEnum, NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_Days;
	};
	
	static void Convert(HPMTaskWorkRemainingHistoryDaysEnum const &_From, NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Days.size();
			pLocal->m_Days.resize(nMembers);
			_To.m_nDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDays = &(*pLocal->m_Days.begin());
			else
				_To.m_pDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Days[i], pLocal->m_Days[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum, HPMTaskWorkRemainingHistoryDaysEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskWorkRemainingHistoryDaysEnum const &_From, HPMTaskWorkRemainingHistoryDaysEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nDays;
			_To.m_Days.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDays[i], _To.m_Days[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskIdealDaysHistoryEntry, NInternal_C::HPMTaskIdealDaysHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceAllocationHistoryEntry> m_ResourceAllocationEntries;
	};
	
	static void Convert(HPMTaskIdealDaysHistoryEntry const &_From, NInternal_C::HPMTaskIdealDaysHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_Value, _To.m_Value, _Context);
		CppConvert(_From.m_ValueNotDone, _To.m_ValueNotDone, _Context);
		CppConvert(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_ResourceAllocationEntries.size();
			pLocal->m_ResourceAllocationEntries.resize(nMembers);
			_To.m_nResourceAllocationEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResourceAllocationEntries = &(*pLocal->m_ResourceAllocationEntries.begin());
			else
				_To.m_pResourceAllocationEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ResourceAllocationEntries[i], pLocal->m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskIdealDaysHistoryEntry, HPMTaskIdealDaysHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskIdealDaysHistoryEntry const &_From, HPMTaskIdealDaysHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_Value, _To.m_Value, _Context);
		CppConvertReverse(_From.m_ValueNotDone, _To.m_ValueNotDone, _Context);
		CppConvertReverse(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_nResourceAllocationEntries;
			_To.m_ResourceAllocationEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResourceAllocationEntries[i], _To.m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskIdealDaysHistory, NInternal_C::HPMTaskIdealDaysHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskIdealDaysHistoryEntry> m_Entries;
	};
	
	static void Convert(HPMTaskIdealDaysHistory const &_From, NInternal_C::HPMTaskIdealDaysHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Entries.size();
			pLocal->m_Entries.resize(nMembers);
			_To.m_nEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pEntries = &(*pLocal->m_Entries.begin());
			else
				_To.m_pEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Entries[i], pLocal->m_Entries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskIdealDaysHistory, HPMTaskIdealDaysHistory>
{
public:
	static void Convert(NInternal_C::HPMTaskIdealDaysHistory const &_From, HPMTaskIdealDaysHistory &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nEntries;
			_To.m_Entries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pEntries[i], _To.m_Entries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskPointsHistoryEntry, NInternal_C::HPMTaskPointsHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceAllocationHistoryEntry> m_ResourceAllocationEntries;
	};
	
	static void Convert(HPMTaskPointsHistoryEntry const &_From, NInternal_C::HPMTaskPointsHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvert(_From.m_Value, _To.m_Value, _Context);
		CppConvert(_From.m_ValueNotDone, _To.m_ValueNotDone, _Context);
		CppConvert(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_ResourceAllocationEntries.size();
			pLocal->m_ResourceAllocationEntries.resize(nMembers);
			_To.m_nResourceAllocationEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pResourceAllocationEntries = &(*pLocal->m_ResourceAllocationEntries.begin());
			else
				_To.m_pResourceAllocationEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ResourceAllocationEntries[i], pLocal->m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskPointsHistoryEntry, HPMTaskPointsHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMTaskPointsHistoryEntry const &_From, HPMTaskPointsHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_TaskRefID, _To.m_TaskRefID, _Context);
		CppConvertReverse(_From.m_Value, _To.m_Value, _Context);
		CppConvertReverse(_From.m_ValueNotDone, _To.m_ValueNotDone, _Context);
		CppConvertReverse(_From.m_bResourcesValid, _To.m_bResourcesValid, _Context);
		{
			size_t nMembers = _From.m_nResourceAllocationEntries;
			_To.m_ResourceAllocationEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pResourceAllocationEntries[i], _To.m_ResourceAllocationEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskPointsHistory, NInternal_C::HPMTaskPointsHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskPointsHistoryEntry> m_Entries;
	};
	
	static void Convert(HPMTaskPointsHistory const &_From, NInternal_C::HPMTaskPointsHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Entries.size();
			pLocal->m_Entries.resize(nMembers);
			_To.m_nEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pEntries = &(*pLocal->m_Entries.begin());
			else
				_To.m_pEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Entries[i], pLocal->m_Entries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskPointsHistory, HPMTaskPointsHistory>
{
public:
	static void Convert(NInternal_C::HPMTaskPointsHistory const &_From, HPMTaskPointsHistory &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nEntries;
			_To.m_Entries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pEntries[i], _To.m_Entries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskHistoryDaysEnum, NInternal_C::HPMTaskHistoryDaysEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt32> m_Days;
	};
	
	static void Convert(HPMTaskHistoryDaysEnum const &_From, NInternal_C::HPMTaskHistoryDaysEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Days.size();
			pLocal->m_Days.resize(nMembers);
			_To.m_nDays = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDays = &(*pLocal->m_Days.begin());
			else
				_To.m_pDays = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Days[i], pLocal->m_Days[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskHistoryDaysEnum, HPMTaskHistoryDaysEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskHistoryDaysEnum const &_From, HPMTaskHistoryDaysEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nDays;
			_To.m_Days.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDays[i], _To.m_Days[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskVacationOptions, NInternal_C::HPMTaskVacationOptions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskVacationOptions const &_From, NInternal_C::HPMTaskVacationOptions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WorkDays[i], _To.m_WorkDays[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskVacationOptions, HPMTaskVacationOptions>
{
public:
	static void Convert(NInternal_C::HPMTaskVacationOptions const &_From, HPMTaskVacationOptions &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		{
			size_t nMembers = 7;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_WorkDays[i], _To.m_WorkDays[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskLinkedToMilestones, NInternal_C::HPMTaskLinkedToMilestones>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_Milestones;
	};
	
	static void Convert(HPMTaskLinkedToMilestones const &_From, NInternal_C::HPMTaskLinkedToMilestones &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Milestones.size();
			pLocal->m_Milestones.resize(nMembers);
			_To.m_nMilestones = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMilestones = &(*pLocal->m_Milestones.begin());
			else
				_To.m_pMilestones = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Milestones[i], pLocal->m_Milestones[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskLinkedToMilestones, HPMTaskLinkedToMilestones>
{
public:
	static void Convert(NInternal_C::HPMTaskLinkedToMilestones const &_From, HPMTaskLinkedToMilestones &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nMilestones;
			_To.m_Milestones.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMilestones[i], _To.m_Milestones[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskEffectiveLinkedToMilestones, NInternal_C::HPMTaskEffectiveLinkedToMilestones>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskEffectiveLinkedToMilestones const &_From, NInternal_C::HPMTaskEffectiveLinkedToMilestones &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bInherited, _To.m_bInherited, _Context);
		CppConvert(_From.m_bInheritedFromBacklog, _To.m_bInheritedFromBacklog, _Context);
		CppConvert(_From.m_Milestones, _To.m_Milestones, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskEffectiveLinkedToMilestones, HPMTaskEffectiveLinkedToMilestones>
{
public:
	static void Convert(NInternal_C::HPMTaskEffectiveLinkedToMilestones const &_From, HPMTaskEffectiveLinkedToMilestones &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bInherited, _To.m_bInherited, _Context);
		CppConvertReverse(_From.m_bInheritedFromBacklog, _To.m_bInheritedFromBacklog, _Context);
		CppConvertReverse(_From.m_Milestones, _To.m_Milestones, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskLinkedToLink, NInternal_C::HPMTaskLinkedToLink>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskLinkedToLink const &_From, NInternal_C::HPMTaskLinkedToLink &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_LinkedToType, _To.m_LinkedToType, _Context);
		CppConvert(_From.m_LinkedTo, _To.m_LinkedTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskLinkedToLink, HPMTaskLinkedToLink>
{
public:
	static void Convert(NInternal_C::HPMTaskLinkedToLink const &_From, HPMTaskLinkedToLink &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_LinkedToType, _To.m_LinkedToType, _Context);
		CppConvertReverse(_From.m_LinkedTo, _To.m_LinkedTo, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskLinkedTo, NInternal_C::HPMTaskLinkedTo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskLinkedToLink> m_LinkedTo;
	};
	
	static void Convert(HPMTaskLinkedTo const &_From, NInternal_C::HPMTaskLinkedTo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_LinkedTo.size();
			pLocal->m_LinkedTo.resize(nMembers);
			_To.m_nLinkedTo = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pLinkedTo = &(*pLocal->m_LinkedTo.begin());
			else
				_To.m_pLinkedTo = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_LinkedTo[i], pLocal->m_LinkedTo[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskLinkedTo, HPMTaskLinkedTo>
{
public:
	static void Convert(NInternal_C::HPMTaskLinkedTo const &_From, HPMTaskLinkedTo &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nLinkedTo;
			_To.m_LinkedTo.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pLinkedTo[i], _To.m_LinkedTo[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskComment, NInternal_C::HPMTaskComment>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskComment const &_From, NInternal_C::HPMTaskComment &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ParentID, _To.m_ParentID, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_PostDate, _To.m_PostDate, _Context);
		CppConvert(_From.m_PostedByResourceID, _To.m_PostedByResourceID, _Context);
		CppConvert(_From.m_PostedByResource, _To.m_pPostedByResource, _Context);
		CppConvert(_From.m_MessageText, _To.m_pMessageText, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskComment, HPMTaskComment>
{
public:
	static void Convert(NInternal_C::HPMTaskComment const &_From, HPMTaskComment &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ParentID, _To.m_ParentID, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_PostDate, _To.m_PostDate, _Context);
		CppConvertReverse(_From.m_PostedByResourceID, _To.m_PostedByResourceID, _Context);
		CppConvertReverse(_From.m_pPostedByResource, _To.m_PostedByResource, _Context);
		CppConvertReverse(_From.m_pMessageText, _To.m_MessageText, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskCommentEnum, NInternal_C::HPMTaskCommentEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMInt32> m_Comments;
	};
	
	static void Convert(HPMTaskCommentEnum const &_From, NInternal_C::HPMTaskCommentEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Comments.size();
			pLocal->m_Comments.resize(nMembers);
			_To.m_nComments = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pComments = &(*pLocal->m_Comments.begin());
			else
				_To.m_pComments = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Comments[i], pLocal->m_Comments[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCommentEnum, HPMTaskCommentEnum>
{
public:
	static void Convert(NInternal_C::HPMTaskCommentEnum const &_From, HPMTaskCommentEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nComments;
			_To.m_Comments.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pComments[i], _To.m_Comments[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskCommentsOptions, NInternal_C::HPMTaskCommentsOptions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMResourceReference> m_CCNotificationsTo;
	};
	
	static void Convert(HPMTaskCommentsOptions const &_From, NInternal_C::HPMTaskCommentsOptions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_CCNotificationsTo.size();
			pLocal->m_CCNotificationsTo.resize(nMembers);
			_To.m_nCCNotificationsTo = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pCCNotificationsTo = &(*pLocal->m_CCNotificationsTo.begin());
			else
				_To.m_pCCNotificationsTo = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_CCNotificationsTo[i], pLocal->m_CCNotificationsTo[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCommentsOptions, HPMTaskCommentsOptions>
{
public:
	static void Convert(NInternal_C::HPMTaskCommentsOptions const &_From, HPMTaskCommentsOptions &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nCCNotificationsTo;
			_To.m_CCNotificationsTo.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pCCNotificationsTo[i], _To.m_CCNotificationsTo[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskWallPosition, NInternal_C::HPMTaskWallPosition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskWallPosition const &_From, NInternal_C::HPMTaskWallPosition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvert(_From.m_GroupingID, _To.m_GroupingID, _Context);
		CppConvert(_From.m_GroupingSprintUID, _To.m_GroupingSprintUID, _Context);
		CppConvert(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvert(_From.m_PositionY, _To.m_PositionY, _Context);
		CppConvert(_From.m_bPositionHasBeenSet, _To.m_bPositionHasBeenSet, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskWallPosition, HPMTaskWallPosition>
{
public:
	static void Convert(NInternal_C::HPMTaskWallPosition const &_From, HPMTaskWallPosition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_GroupingType, _To.m_GroupingType, _Context);
		CppConvertReverse(_From.m_GroupingID, _To.m_GroupingID, _Context);
		CppConvertReverse(_From.m_GroupingSprintUID, _To.m_GroupingSprintUID, _Context);
		CppConvertReverse(_From.m_PositionX, _To.m_PositionX, _Context);
		CppConvertReverse(_From.m_PositionY, _To.m_PositionY, _Context);
		CppConvertReverse(_From.m_bPositionHasBeenSet, _To.m_bPositionHasBeenSet, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskCustomSummaryValue, NInternal_C::HPMTaskCustomSummaryValue>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMTaskCustomSummaryValue const &_From, NInternal_C::HPMTaskCustomSummaryValue &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Hash, _To.m_Hash, _Context);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_IntegerValue, _To.m_IntegerValue, _Context);
		CppConvert(_From.m_FloatValue, _To.m_FloatValue, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskCustomSummaryValue, HPMTaskCustomSummaryValue>
{
public:
	static void Convert(NInternal_C::HPMTaskCustomSummaryValue const &_From, HPMTaskCustomSummaryValue &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Hash, _To.m_Hash, _Context);
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_IntegerValue, _To.m_IntegerValue, _Context);
		CppConvertReverse(_From.m_FloatValue, _To.m_FloatValue, _Context);
	}
};

template <>
class TCCppConvert<HPMTaskWallPositions, NInternal_C::HPMTaskWallPositions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskWallPosition> m_WallPositions;
	};
	
	static void Convert(HPMTaskWallPositions const &_From, NInternal_C::HPMTaskWallPositions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_WallPositions.size();
			pLocal->m_WallPositions.resize(nMembers);
			_To.m_nWallPositions = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pWallPositions = &(*pLocal->m_WallPositions.begin());
			else
				_To.m_pWallPositions = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_WallPositions[i], pLocal->m_WallPositions[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskWallPositions, HPMTaskWallPositions>
{
public:
	static void Convert(NInternal_C::HPMTaskWallPositions const &_From, HPMTaskWallPositions &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nWallPositions;
			_To.m_WallPositions.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pWallPositions[i], _To.m_WallPositions[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMTaskSummary, NInternal_C::HPMTaskSummary>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMTaskCustomSummaryValue> m_CustomSummaryValues;
	};
	
	static void Convert(HPMTaskSummary const &_From, NInternal_C::HPMTaskSummary &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Completed, _To.m_Completed, _Context);
		CppConvert(_From.m_Uncompleted, _To.m_Uncompleted, _Context);
		CppConvert(_From.m_AssignedUncompleted, _To.m_AssignedUncompleted, _Context);
		CppConvert(_From.m_TaskStatus, _To.m_TaskStatus, _Context);
		CppConvert(_From.m_ComplexityPoints, _To.m_ComplexityPoints, _Context);
		CppConvert(_From.m_ComplexityPoints_NotDone, _To.m_ComplexityPoints_NotDone, _Context);
		CppConvert(_From.m_EarnedValue, _To.m_EarnedValue, _Context);
		CppConvert(_From.m_BudgetedWork, _To.m_BudgetedWork, _Context);
		CppConvert(_From.m_WorkRemaining, _To.m_WorkRemaining, _Context);
		CppConvert(_From.m_EstimatedIdealDays, _To.m_EstimatedIdealDays, _Context);
		CppConvert(_From.m_EstimatedIdealDays_NotDone, _To.m_EstimatedIdealDays_NotDone, _Context);
		CppConvert(_From.m_DurationDays, _To.m_DurationDays, _Context);
		CppConvert(_From.m_DurationDays_NotDone, _To.m_DurationDays_NotDone, _Context);
		{
			size_t nMembers = _From.m_CustomSummaryValues.size();
			pLocal->m_CustomSummaryValues.resize(nMembers);
			_To.m_nCustomSummaryValues = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pCustomSummaryValues = &(*pLocal->m_CustomSummaryValues.begin());
			else
				_To.m_pCustomSummaryValues = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_CustomSummaryValues[i], pLocal->m_CustomSummaryValues[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMTaskSummary, HPMTaskSummary>
{
public:
	static void Convert(NInternal_C::HPMTaskSummary const &_From, HPMTaskSummary &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Completed, _To.m_Completed, _Context);
		CppConvertReverse(_From.m_Uncompleted, _To.m_Uncompleted, _Context);
		CppConvertReverse(_From.m_AssignedUncompleted, _To.m_AssignedUncompleted, _Context);
		CppConvertReverse(_From.m_TaskStatus, _To.m_TaskStatus, _Context);
		CppConvertReverse(_From.m_ComplexityPoints, _To.m_ComplexityPoints, _Context);
		CppConvertReverse(_From.m_ComplexityPoints_NotDone, _To.m_ComplexityPoints_NotDone, _Context);
		CppConvertReverse(_From.m_EarnedValue, _To.m_EarnedValue, _Context);
		CppConvertReverse(_From.m_BudgetedWork, _To.m_BudgetedWork, _Context);
		CppConvertReverse(_From.m_WorkRemaining, _To.m_WorkRemaining, _Context);
		CppConvertReverse(_From.m_EstimatedIdealDays, _To.m_EstimatedIdealDays, _Context);
		CppConvertReverse(_From.m_EstimatedIdealDays_NotDone, _To.m_EstimatedIdealDays_NotDone, _Context);
		CppConvertReverse(_From.m_DurationDays, _To.m_DurationDays, _Context);
		CppConvertReverse(_From.m_DurationDays_NotDone, _To.m_DurationDays_NotDone, _Context);
		{
			size_t nMembers = _From.m_nCustomSummaryValues;
			_To.m_CustomSummaryValues.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pCustomSummaryValues[i], _To.m_CustomSummaryValues[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMMilestoneSummary, NInternal_C::HPMMilestoneSummary>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUniqueID> m_MilestoneDependantIDs;
	};
	
	static void Convert(HPMMilestoneSummary const &_From, NInternal_C::HPMMilestoneSummary &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Completed, _To.m_Completed, _Context);
		CppConvert(_From.m_Uncompleted, _To.m_Uncompleted, _Context);
		CppConvert(_From.m_Overdue, _To.m_Overdue, _Context);
		CppConvert(_From.m_AssignedUncompleted, _To.m_AssignedUncompleted, _Context);
		{
			size_t nMembers = _From.m_MilestoneDependantIDs.size();
			pLocal->m_MilestoneDependantIDs.resize(nMembers);
			_To.m_nMilestoneDependantIDs = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMilestoneDependantIDs = &(*pLocal->m_MilestoneDependantIDs.begin());
			else
				_To.m_pMilestoneDependantIDs = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MilestoneDependantIDs[i], pLocal->m_MilestoneDependantIDs[i], _Context);
			}
		}
		CppConvert(_From.m_IdealDays, _To.m_IdealDays, _Context);
		CppConvert(_From.m_IdealDays_NotDone, _To.m_IdealDays_NotDone, _Context);
		CppConvert(_From.m_WorkRemaining, _To.m_WorkRemaining, _Context);
		CppConvert(_From.m_Points, _To.m_Points, _Context);
		CppConvert(_From.m_Points_NotDone, _To.m_Points_NotDone, _Context);
		CppConvert(_From.m_DurationDays, _To.m_DurationDays, _Context);
		CppConvert(_From.m_DurationDays_NotDone, _To.m_DurationDays_NotDone, _Context);
		CppConvert(_From.m_StartTime, _To.m_StartTime, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMMilestoneSummary, HPMMilestoneSummary>
{
public:
	static void Convert(NInternal_C::HPMMilestoneSummary const &_From, HPMMilestoneSummary &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Completed, _To.m_Completed, _Context);
		CppConvertReverse(_From.m_Uncompleted, _To.m_Uncompleted, _Context);
		CppConvertReverse(_From.m_Overdue, _To.m_Overdue, _Context);
		CppConvertReverse(_From.m_AssignedUncompleted, _To.m_AssignedUncompleted, _Context);
		{
			size_t nMembers = _From.m_nMilestoneDependantIDs;
			_To.m_MilestoneDependantIDs.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMilestoneDependantIDs[i], _To.m_MilestoneDependantIDs[i], _Context);
			}
		}
		CppConvertReverse(_From.m_IdealDays, _To.m_IdealDays, _Context);
		CppConvertReverse(_From.m_IdealDays_NotDone, _To.m_IdealDays_NotDone, _Context);
		CppConvertReverse(_From.m_WorkRemaining, _To.m_WorkRemaining, _Context);
		CppConvertReverse(_From.m_Points, _To.m_Points, _Context);
		CppConvertReverse(_From.m_Points_NotDone, _To.m_Points_NotDone, _Context);
		CppConvertReverse(_From.m_DurationDays, _To.m_DurationDays, _Context);
		CppConvertReverse(_From.m_DurationDays_NotDone, _To.m_DurationDays_NotDone, _Context);
		CppConvertReverse(_From.m_StartTime, _To.m_StartTime, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlMetaDataEntry, NInternal_C::HPMVersionControlMetaDataEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMVersionControlMetaDataEntry const &_From, NInternal_C::HPMVersionControlMetaDataEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_Data, _To.m_pData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlMetaDataEntry, HPMVersionControlMetaDataEntry>
{
public:
	static void Convert(NInternal_C::HPMVersionControlMetaDataEntry const &_From, HPMVersionControlMetaDataEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_pData, _To.m_Data, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlFileList, NInternal_C::HPMVersionControlFileList>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_Files;
	};
	
	static void Convert(HPMVersionControlFileList const &_From, NInternal_C::HPMVersionControlFileList &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFileList, HPMVersionControlFileList>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFileList const &_From, HPMVersionControlFileList &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlFileHistoryEntry, NInternal_C::HPMVersionControlFileHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlMetaDataEntry> m_MetaDataEntries;
	};
	
	static void Convert(HPMVersionControlFileHistoryEntry const &_From, NInternal_C::HPMVersionControlFileHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvert(_From.m_Version, _To.m_Version, _Context);
		CppConvert(_From.m_Revision, _To.m_Revision, _Context);
		CppConvert(_From.m_Action, _To.m_Action, _Context);
		CppConvert(_From.m_ActionInfoID, _To.m_ActionInfoID, _Context);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_Checksum, _To.m_Checksum, _Context);
		CppConvert(_From.m_FileName, _To.m_pFileName, _Context);
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_User, _To.m_pUser, _Context);
		CppConvert(_From.m_ActionInfo, _To.m_pActionInfo, _Context);
		CppConvert(_From.m_ActionInfoArg, _To.m_pActionInfoArg, _Context);
		{
			size_t nMembers = _From.m_MetaDataEntries.size();
			pLocal->m_MetaDataEntries.resize(nMembers);
			_To.m_nMetaDataEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMetaDataEntries = &(*pLocal->m_MetaDataEntries.begin());
			else
				_To.m_pMetaDataEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MetaDataEntries[i], pLocal->m_MetaDataEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFileHistoryEntry, HPMVersionControlFileHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFileHistoryEntry const &_From, HPMVersionControlFileHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvertReverse(_From.m_Version, _To.m_Version, _Context);
		CppConvertReverse(_From.m_Revision, _To.m_Revision, _Context);
		CppConvertReverse(_From.m_Action, _To.m_Action, _Context);
		CppConvertReverse(_From.m_ActionInfoID, _To.m_ActionInfoID, _Context);
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_Checksum, _To.m_Checksum, _Context);
		CppConvertReverse(_From.m_pFileName, _To.m_FileName, _Context);
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_pUser, _To.m_User, _Context);
		CppConvertReverse(_From.m_pActionInfo, _To.m_ActionInfo, _Context);
		CppConvertReverse(_From.m_pActionInfoArg, _To.m_ActionInfoArg, _Context);
		{
			size_t nMembers = _From.m_nMetaDataEntries;
			_To.m_MetaDataEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMetaDataEntries[i], _To.m_MetaDataEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlFileHistory, NInternal_C::HPMVersionControlFileHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileHistoryEntry> m_HistoryEntries;
	};
	
	static void Convert(HPMVersionControlFileHistory const &_From, NInternal_C::HPMVersionControlFileHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_HistoryEntries.size();
			pLocal->m_HistoryEntries.resize(nMembers);
			_To.m_nHistoryEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pHistoryEntries = &(*pLocal->m_HistoryEntries.begin());
			else
				_To.m_pHistoryEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_HistoryEntries[i], pLocal->m_HistoryEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFileHistory, HPMVersionControlFileHistory>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFileHistory const &_From, HPMVersionControlFileHistory &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nHistoryEntries;
			_To.m_HistoryEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pHistoryEntries[i], _To.m_HistoryEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlAccessRight, NInternal_C::HPMVersionControlAccessRight>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMVersionControlAccessRight const &_From, NInternal_C::HPMVersionControlAccessRight &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Object, _To.m_Object, _Context);
		CppConvert(_From.m_Type, _To.m_Type, _Context);
		CppConvert(_From.m_GrantFlags, _To.m_GrantFlags, _Context);
		CppConvert(_From.m_RejectFlags, _To.m_RejectFlags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlAccessRight, HPMVersionControlAccessRight>
{
public:
	static void Convert(NInternal_C::HPMVersionControlAccessRight const &_From, HPMVersionControlAccessRight &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Object, _To.m_Object, _Context);
		CppConvertReverse(_From.m_Type, _To.m_Type, _Context);
		CppConvertReverse(_From.m_GrantFlags, _To.m_GrantFlags, _Context);
		CppConvertReverse(_From.m_RejectFlags, _To.m_RejectFlags, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlAccessRights, NInternal_C::HPMVersionControlAccessRights>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlAccessRight> m_AccessRights;
		std::vector<NInternal_C::HPMVersionControlAccessRight> m_InheritedAccessRights;
	};
	
	static void Convert(HPMVersionControlAccessRights const &_From, NInternal_C::HPMVersionControlAccessRights &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_bInherit, _To.m_bInherit, _Context);
		CppConvert(_From.m_bUseInheritedRights, _To.m_bUseInheritedRights, _Context);
		{
			size_t nMembers = _From.m_AccessRights.size();
			pLocal->m_AccessRights.resize(nMembers);
			_To.m_nAccessRights = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pAccessRights = &(*pLocal->m_AccessRights.begin());
			else
				_To.m_pAccessRights = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_AccessRights[i], pLocal->m_AccessRights[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_InheritedAccessRights.size();
			pLocal->m_InheritedAccessRights.resize(nMembers);
			_To.m_nInheritedAccessRights = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pInheritedAccessRights = &(*pLocal->m_InheritedAccessRights.begin());
			else
				_To.m_pInheritedAccessRights = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_InheritedAccessRights[i], pLocal->m_InheritedAccessRights[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlAccessRights, HPMVersionControlAccessRights>
{
public:
	static void Convert(NInternal_C::HPMVersionControlAccessRights const &_From, HPMVersionControlAccessRights &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_bInherit, _To.m_bInherit, _Context);
		CppConvertReverse(_From.m_bUseInheritedRights, _To.m_bUseInheritedRights, _Context);
		{
			size_t nMembers = _From.m_nAccessRights;
			_To.m_AccessRights.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pAccessRights[i], _To.m_AccessRights[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nInheritedAccessRights;
			_To.m_InheritedAccessRights.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pInheritedAccessRights[i], _To.m_InheritedAccessRights[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlFile, NInternal_C::HPMVersionControlFile>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlMetaDataEntry> m_MetaDataEntries;
	};
	
	static void Convert(HPMVersionControlFile const &_From, NInternal_C::HPMVersionControlFile &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvert(_From.m_FileID, _To.m_FileID, _Context);
		CppConvert(_From.m_Version, _To.m_Version, _Context);
		CppConvert(_From.m_Revision, _To.m_Revision, _Context);
		CppConvert(_From.m_Size, _To.m_Size, _Context);
		CppConvert(_From.m_Action, _To.m_Action, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_EffectiveAccessRights, _To.m_EffectiveAccessRights, _Context);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_Checksum, _To.m_Checksum, _Context);
		CppConvert(_From.m_FileName, _To.m_pFileName, _Context);
		CppConvert(_From.m_CheckedOutBy, _To.m_pCheckedOutBy, _Context);
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_User, _To.m_pUser, _Context);
		CppConvert(_From.m_OriginalCreator, _To.m_OriginalCreator, _Context);
		{
			size_t nMembers = _From.m_MetaDataEntries.size();
			pLocal->m_MetaDataEntries.resize(nMembers);
			_To.m_nMetaDataEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMetaDataEntries = &(*pLocal->m_MetaDataEntries.begin());
			else
				_To.m_pMetaDataEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MetaDataEntries[i], pLocal->m_MetaDataEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFile, HPMVersionControlFile>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFile const &_From, HPMVersionControlFile &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvertReverse(_From.m_FileID, _To.m_FileID, _Context);
		CppConvertReverse(_From.m_Version, _To.m_Version, _Context);
		CppConvertReverse(_From.m_Revision, _To.m_Revision, _Context);
		CppConvertReverse(_From.m_Size, _To.m_Size, _Context);
		CppConvertReverse(_From.m_Action, _To.m_Action, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_EffectiveAccessRights, _To.m_EffectiveAccessRights, _Context);
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_Checksum, _To.m_Checksum, _Context);
		CppConvertReverse(_From.m_pFileName, _To.m_FileName, _Context);
		CppConvertReverse(_From.m_pCheckedOutBy, _To.m_CheckedOutBy, _Context);
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_pUser, _To.m_User, _Context);
		CppConvertReverse(_From.m_OriginalCreator, _To.m_OriginalCreator, _Context);
		{
			size_t nMembers = _From.m_nMetaDataEntries;
			_To.m_MetaDataEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMetaDataEntries[i], _To.m_MetaDataEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlFilesEnum, NInternal_C::HPMVersionControlFilesEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFile> m_Files;
	};
	
	static void Convert(HPMVersionControlFilesEnum const &_From, NInternal_C::HPMVersionControlFilesEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFilesEnum, HPMVersionControlFilesEnum>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFilesEnum const &_From, HPMVersionControlFilesEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlFileSpec, NInternal_C::HPMVersionControlFileSpec>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlMetaDataEntry> m_MetaDataEntries;
	};
	
	static void Convert(HPMVersionControlFileSpec const &_From, NInternal_C::HPMVersionControlFileSpec &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Path, _To.m_pPath, _Context);
		{
			size_t nMembers = _From.m_MetaDataEntries.size();
			pLocal->m_MetaDataEntries.resize(nMembers);
			_To.m_nMetaDataEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMetaDataEntries = &(*pLocal->m_MetaDataEntries.begin());
			else
				_To.m_pMetaDataEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MetaDataEntries[i], pLocal->m_MetaDataEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlFileSpec, HPMVersionControlFileSpec>
{
public:
	static void Convert(NInternal_C::HPMVersionControlFileSpec const &_From, HPMVersionControlFileSpec &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pPath, _To.m_Path, _Context);
		{
			size_t nMembers = _From.m_nMetaDataEntries;
			_To.m_MetaDataEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMetaDataEntries[i], _To.m_MetaDataEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlLocalFilePair, NInternal_C::HPMVersionControlLocalFilePair>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_FileData;
	};
	
	static void Convert(HPMVersionControlLocalFilePair const &_From, NInternal_C::HPMVersionControlLocalFilePair &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_FileSpec, _To.m_FileSpec, _Context);
		CppConvert(_From.m_LocalPath, _To.m_pLocalPath, _Context);
		{
			size_t nMembers = _From.m_FileData.size();
			pLocal->m_FileData.resize(nMembers);
			_To.m_nFileData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFileData = &(*pLocal->m_FileData.begin());
			else
				_To.m_pFileData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FileData[i], pLocal->m_FileData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlLocalFilePair, HPMVersionControlLocalFilePair>
{
public:
	static void Convert(NInternal_C::HPMVersionControlLocalFilePair const &_From, HPMVersionControlLocalFilePair &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_FileSpec, _To.m_FileSpec, _Context);
		CppConvertReverse(_From.m_pLocalPath, _To.m_LocalPath, _Context);
		{
			size_t nMembers = _From.m_nFileData;
			_To.m_FileData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFileData[i], _To.m_FileData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlAddFiles, NInternal_C::HPMVersionControlAddFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlLocalFilePair> m_FilesToAdd;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMVersionControlAddFiles const &_From, NInternal_C::HPMVersionControlAddFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_FilesToAdd.size();
			pLocal->m_FilesToAdd.resize(nMembers);
			_To.m_nFilesToAdd = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilesToAdd = &(*pLocal->m_FilesToAdd.begin());
			else
				_To.m_pFilesToAdd = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FilesToAdd[i], pLocal->m_FilesToAdd[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_bDeleteSourceFiles, _To.m_bDeleteSourceFiles, _Context);
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlAddFiles, HPMVersionControlAddFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlAddFiles const &_From, HPMVersionControlAddFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFilesToAdd;
			_To.m_FilesToAdd.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilesToAdd[i], _To.m_FilesToAdd[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_bDeleteSourceFiles, _To.m_bDeleteSourceFiles, _Context);
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlCreateDirectories, NInternal_C::HPMVersionControlCreateDirectories>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileSpec> m_Files;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMVersionControlCreateDirectories const &_From, NInternal_C::HPMVersionControlCreateDirectories &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlCreateDirectories, HPMVersionControlCreateDirectories>
{
public:
	static void Convert(NInternal_C::HPMVersionControlCreateDirectories const &_From, HPMVersionControlCreateDirectories &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlCheckInFiles, NInternal_C::HPMVersionControlCheckInFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileSpec> m_Files;
		std::vector<NInternal_C::HPMUInt8> m_ExtraData;
	};
	
	static void Convert(HPMVersionControlCheckInFiles const &_From, NInternal_C::HPMVersionControlCheckInFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_bRecursive, _To.m_bRecursive, _Context);
		CppConvert(_From.m_bKeepCheckedOut, _To.m_bKeepCheckedOut, _Context);
		CppConvert(_From.m_bKeepUnchangedCheckedOut, _To.m_bKeepUnchangedCheckedOut, _Context);
		CppConvert(_From.m_bDeleteSourceFiles, _To.m_bDeleteSourceFiles, _Context);
		{
			size_t nMembers = _From.m_ExtraData.size();
			pLocal->m_ExtraData.resize(nMembers);
			_To.m_nExtraData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pExtraData = &(*pLocal->m_ExtraData.begin());
			else
				_To.m_pExtraData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_ExtraData[i], pLocal->m_ExtraData[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlCheckInFiles, HPMVersionControlCheckInFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlCheckInFiles const &_From, HPMVersionControlCheckInFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_bRecursive, _To.m_bRecursive, _Context);
		CppConvertReverse(_From.m_bKeepCheckedOut, _To.m_bKeepCheckedOut, _Context);
		CppConvertReverse(_From.m_bKeepUnchangedCheckedOut, _To.m_bKeepUnchangedCheckedOut, _Context);
		CppConvertReverse(_From.m_bDeleteSourceFiles, _To.m_bDeleteSourceFiles, _Context);
		{
			size_t nMembers = _From.m_nExtraData;
			_To.m_ExtraData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pExtraData[i], _To.m_ExtraData[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlRenameFiles, NInternal_C::HPMVersionControlRenameFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileSpec> m_Files;
	};
	
	static void Convert(HPMVersionControlRenameFiles const &_From, NInternal_C::HPMVersionControlRenameFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_RenameTo, _To.m_pRenameTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlRenameFiles, HPMVersionControlRenameFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlRenameFiles const &_From, HPMVersionControlRenameFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_pRenameTo, _To.m_RenameTo, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlRevertFiles, NInternal_C::HPMVersionControlRevertFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMString> m_Files;
	};
	
	static void Convert(HPMVersionControlRevertFiles const &_From, NInternal_C::HPMVersionControlRevertFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_bRecursive, _To.m_bRecursive, _Context);
		CppConvert(_From.m_bReplaceLocally, _To.m_bReplaceLocally, _Context);
		CppConvert(_From.m_bForceRevert, _To.m_bForceRevert, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlRevertFiles, HPMVersionControlRevertFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlRevertFiles const &_From, HPMVersionControlRevertFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_bRecursive, _To.m_bRecursive, _Context);
		CppConvertReverse(_From.m_bReplaceLocally, _To.m_bReplaceLocally, _Context);
		CppConvertReverse(_From.m_bForceRevert, _To.m_bForceRevert, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlDeleteFiles, NInternal_C::HPMVersionControlDeleteFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileSpec> m_Files;
	};
	
	static void Convert(HPMVersionControlDeleteFiles const &_From, NInternal_C::HPMVersionControlDeleteFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_bPermanent, _To.m_bPermanent, _Context);
		CppConvert(_From.m_bDeleteLocally, _To.m_bDeleteLocally, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlDeleteFiles, HPMVersionControlDeleteFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlDeleteFiles const &_From, HPMVersionControlDeleteFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_bPermanent, _To.m_bPermanent, _Context);
		CppConvertReverse(_From.m_bDeleteLocally, _To.m_bDeleteLocally, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlRestoreDeletedFiles, NInternal_C::HPMVersionControlRestoreDeletedFiles>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlFileSpec> m_Files;
	};
	
	static void Convert(HPMVersionControlRestoreDeletedFiles const &_From, NInternal_C::HPMVersionControlRestoreDeletedFiles &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Files.size();
			pLocal->m_Files.resize(nMembers);
			_To.m_nFiles = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFiles = &(*pLocal->m_Files.begin());
			else
				_To.m_pFiles = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Files[i], pLocal->m_Files[i], _Context);
			}
		}
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlRestoreDeletedFiles, HPMVersionControlRestoreDeletedFiles>
{
public:
	static void Convert(NInternal_C::HPMVersionControlRestoreDeletedFiles const &_From, HPMVersionControlRestoreDeletedFiles &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFiles;
			_To.m_Files.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFiles[i], _To.m_Files[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlDeleteVersions, NInternal_C::HPMVersionControlDeleteVersions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt64> m_VersionsToDelete;
	};
	
	static void Convert(HPMVersionControlDeleteVersions const &_From, NInternal_C::HPMVersionControlDeleteVersions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Path, _To.m_pPath, _Context);
		{
			size_t nMembers = _From.m_VersionsToDelete.size();
			pLocal->m_VersionsToDelete.resize(nMembers);
			_To.m_nVersionsToDelete = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pVersionsToDelete = &(*pLocal->m_VersionsToDelete.begin());
			else
				_To.m_pVersionsToDelete = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_VersionsToDelete[i], pLocal->m_VersionsToDelete[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlDeleteVersions, HPMVersionControlDeleteVersions>
{
public:
	static void Convert(NInternal_C::HPMVersionControlDeleteVersions const &_From, HPMVersionControlDeleteVersions &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pPath, _To.m_Path, _Context);
		{
			size_t nMembers = _From.m_nVersionsToDelete;
			_To.m_VersionsToDelete.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pVersionsToDelete[i], _To.m_VersionsToDelete[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMVersionControlRollbackFile, NInternal_C::HPMVersionControlRollbackFile>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMVersionControlRollbackFile const &_From, NInternal_C::HPMVersionControlRollbackFile &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Path, _To.m_pPath, _Context);
		CppConvert(_From.m_Comment, _To.m_pComment, _Context);
		CppConvert(_From.m_FromVersion, _To.m_FromVersion, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlRollbackFile, HPMVersionControlRollbackFile>
{
public:
	static void Convert(NInternal_C::HPMVersionControlRollbackFile const &_From, HPMVersionControlRollbackFile &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pPath, _To.m_Path, _Context);
		CppConvertReverse(_From.m_pComment, _To.m_Comment, _Context);
		CppConvertReverse(_From.m_FromVersion, _To.m_FromVersion, _Context);
	}
};

template <>
class TCCppConvert<HPMVersionControlCallbackInfo, NInternal_C::HPMVersionControlCallbackInfo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMVersionControlMetaDataEntry> m_MetaDataEntries;
	};
	
	static void Convert(HPMVersionControlCallbackInfo const &_From, NInternal_C::HPMVersionControlCallbackInfo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Operation, _To.m_Operation, _Context);
		CppConvert(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvert(_From.m_Date, _To.m_Date, _Context);
		CppConvert(_From.m_FileName, _To.m_pFileName, _Context);
		CppConvert(_From.m_Resource, _To.m_pResource, _Context);
		CppConvert(_From.m_ResourceComment, _To.m_pResourceComment, _Context);
		CppConvert(_From.m_LocalTemporaryFileName, _To.m_pLocalTemporaryFileName, _Context);
		{
			size_t nMembers = _From.m_MetaDataEntries.size();
			pLocal->m_MetaDataEntries.resize(nMembers);
			_To.m_nMetaDataEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pMetaDataEntries = &(*pLocal->m_MetaDataEntries.begin());
			else
				_To.m_pMetaDataEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_MetaDataEntries[i], pLocal->m_MetaDataEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMVersionControlCallbackInfo, HPMVersionControlCallbackInfo>
{
public:
	static void Convert(NInternal_C::HPMVersionControlCallbackInfo const &_From, HPMVersionControlCallbackInfo &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Operation, _To.m_Operation, _Context);
		CppConvertReverse(_From.m_FileAttributes, _To.m_FileAttributes, _Context);
		CppConvertReverse(_From.m_Date, _To.m_Date, _Context);
		CppConvertReverse(_From.m_pFileName, _To.m_FileName, _Context);
		CppConvertReverse(_From.m_pResource, _To.m_Resource, _Context);
		CppConvertReverse(_From.m_pResourceComment, _To.m_ResourceComment, _Context);
		CppConvertReverse(_From.m_pLocalTemporaryFileName, _To.m_LocalTemporaryFileName, _Context);
		{
			size_t nMembers = _From.m_nMetaDataEntries;
			_To.m_MetaDataEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pMetaDataEntries[i], _To.m_MetaDataEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMDataHistoryEntryFilter, NInternal_C::HPMDataHistoryEntryFilter>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryEntryFilter const &_From, NInternal_C::HPMDataHistoryEntryFilter &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_EntryType, _To.m_EntryType, _Context);
		CppConvert(_From.m_EntryKind, _To.m_EntryKind, _Context);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryEntryFilter, HPMDataHistoryEntryFilter>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryEntryFilter const &_From, HPMDataHistoryEntryFilter &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_EntryType, _To.m_EntryType, _Context);
		CppConvertReverse(_From.m_EntryKind, _To.m_EntryKind, _Context);
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryFilter, NInternal_C::HPMDataHistoryFilter>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMDataHistoryFilter> m_Filters;
	};
	
	static void Convert(HPMDataHistoryFilter const &_From, NInternal_C::HPMDataHistoryFilter &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_EntryFilter, _To.m_EntryFilter, _Context);
		{
			size_t nMembers = _From.m_Filters.size();
			pLocal->m_Filters.resize(nMembers);
			_To.m_nFilters = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFilters = &(*pLocal->m_Filters.begin());
			else
				_To.m_pFilters = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Filters[i], pLocal->m_Filters[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryFilter, HPMDataHistoryFilter>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryFilter const &_From, HPMDataHistoryFilter &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_EntryFilter, _To.m_EntryFilter, _Context);
		{
			size_t nMembers = _From.m_nFilters;
			_To.m_Filters.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFilters[i], _To.m_Filters[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMDataHistoryTimePosition, NInternal_C::HPMDataHistoryTimePosition>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTimePosition const &_From, NInternal_C::HPMDataHistoryTimePosition &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Time, _To.m_Time, _Context);
		CppConvert(_From.m_Position, _To.m_Position, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTimePosition, HPMDataHistoryTimePosition>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTimePosition const &_From, HPMDataHistoryTimePosition &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Time, _To.m_Time, _Context);
		CppConvertReverse(_From.m_Position, _To.m_Position, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryGetHistoryParameters, NInternal_C::HPMDataHistoryGetHistoryParameters>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryGetHistoryParameters const &_From, NInternal_C::HPMDataHistoryGetHistoryParameters &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DataID, _To.m_DataID, _Context);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvert(_From.m_DataIdent0, _To.m_DataIdent0, _Context);
		CppConvert(_From.m_DataIdent1, _To.m_DataIdent1, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
		CppConvert(_From.m_MaxEntries, _To.m_MaxEntries, _Context);
		CppConvert(_From.m_Start, _To.m_Start, _Context);
		CppConvert(_From.m_End, _To.m_End, _Context);
		CppConvert(_From.m_Filter, _To.m_Filter, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryGetHistoryParameters, HPMDataHistoryGetHistoryParameters>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryGetHistoryParameters const &_From, HPMDataHistoryGetHistoryParameters &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_DataID, _To.m_DataID, _Context);
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvertReverse(_From.m_DataIdent0, _To.m_DataIdent0, _Context);
		CppConvertReverse(_From.m_DataIdent1, _To.m_DataIdent1, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
		CppConvertReverse(_From.m_MaxEntries, _To.m_MaxEntries, _Context);
		CppConvertReverse(_From.m_Start, _To.m_Start, _Context);
		CppConvertReverse(_From.m_End, _To.m_End, _Context);
		CppConvertReverse(_From.m_Filter, _To.m_Filter, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryEntry, NInternal_C::HPMDataHistoryEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryEntry const &_From, NInternal_C::HPMDataHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Time, _To.m_Time, _Context);
		CppConvert(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvert(_From.m_Resource, _To.m_Resource, _Context);
		CppConvert(_From.m_ObjectID, _To.m_ObjectID, _Context);
		CppConvert(_From.m_NonImpersonatedResourceID, _To.m_NonImpersonatedResourceID, _Context);
		CppConvert(_From.m_NonImpersonatedResource, _To.m_NonImpersonatedResource, _Context);
		CppConvert(_From.m_EntryType, _To.m_EntryType, _Context);
		CppConvert(_From.m_EntryKind, _To.m_EntryKind, _Context);
		CppConvert(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvert(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvert(_From.m_Origin, _To.m_Origin, _Context);
		CppConvert(_From.m_ClientOrigin, _To.m_ClientOrigin, _Context);
		CppConvert(_From.m_ClientCustomOrigin, _To.m_pClientCustomOrigin, _Context);
		CppConvert(_From.m_bHasDataRecorded, _To.m_bHasDataRecorded, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryEntry, HPMDataHistoryEntry>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryEntry const &_From, HPMDataHistoryEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Time, _To.m_Time, _Context);
		CppConvertReverse(_From.m_ResourceID, _To.m_ResourceID, _Context);
		CppConvertReverse(_From.m_Resource, _To.m_Resource, _Context);
		CppConvertReverse(_From.m_ObjectID, _To.m_ObjectID, _Context);
		CppConvertReverse(_From.m_NonImpersonatedResourceID, _To.m_NonImpersonatedResourceID, _Context);
		CppConvertReverse(_From.m_NonImpersonatedResource, _To.m_NonImpersonatedResource, _Context);
		CppConvertReverse(_From.m_EntryType, _To.m_EntryType, _Context);
		CppConvertReverse(_From.m_EntryKind, _To.m_EntryKind, _Context);
		CppConvertReverse(_From.m_FieldID, _To.m_FieldID, _Context);
		CppConvertReverse(_From.m_FieldData, _To.m_FieldData, _Context);
		CppConvertReverse(_From.m_Origin, _To.m_Origin, _Context);
		CppConvertReverse(_From.m_ClientOrigin, _To.m_ClientOrigin, _Context);
		CppConvertReverse(_From.m_pClientCustomOrigin, _To.m_ClientCustomOrigin, _Context);
		CppConvertReverse(_From.m_bHasDataRecorded, _To.m_bHasDataRecorded, _Context);
	}
};

template <>
class TCCppConvert<HPMStatisticsMultiFrequencyEntry, NInternal_C::HPMStatisticsMultiFrequencyEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMStatisticsMultiFrequencyEntry const &_From, NInternal_C::HPMStatisticsMultiFrequencyEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_UniqueID, _To.m_UniqueID, _Context);
		CppConvert(_From.m_Frequency, _To.m_Frequency, _Context);
		CppConvert(_From.m_FrequencyFP, _To.m_FrequencyFP, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMStatisticsMultiFrequencyEntry, HPMStatisticsMultiFrequencyEntry>
{
public:
	static void Convert(NInternal_C::HPMStatisticsMultiFrequencyEntry const &_From, HPMStatisticsMultiFrequencyEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_UniqueID, _To.m_UniqueID, _Context);
		CppConvertReverse(_From.m_Frequency, _To.m_Frequency, _Context);
		CppConvertReverse(_From.m_FrequencyFP, _To.m_FrequencyFP, _Context);
	}
};

template <>
class TCCppConvert<HPMStatisticsMultiFrequency, NInternal_C::HPMStatisticsMultiFrequency>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMStatisticsMultiFrequencyEntry> m_FrequencyEntries;
	};
	
	static void Convert(HPMStatisticsMultiFrequency const &_From, NInternal_C::HPMStatisticsMultiFrequency &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_FrequencyEntries.size();
			pLocal->m_FrequencyEntries.resize(nMembers);
			_To.m_nFrequencyEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFrequencyEntries = &(*pLocal->m_FrequencyEntries.begin());
			else
				_To.m_pFrequencyEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FrequencyEntries[i], pLocal->m_FrequencyEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMStatisticsMultiFrequency, HPMStatisticsMultiFrequency>
{
public:
	static void Convert(NInternal_C::HPMStatisticsMultiFrequency const &_From, HPMStatisticsMultiFrequency &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFrequencyEntries;
			_To.m_FrequencyEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFrequencyEntries[i], _To.m_FrequencyEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskCreated, NInternal_C::HPMDataHistoryTaskCreated>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskCreated const &_From, NInternal_C::HPMDataHistoryTaskCreated &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Container, _To.m_Container, _Context);
		CppConvert(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskCreated, HPMDataHistoryTaskCreated>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskCreated const &_From, HPMDataHistoryTaskCreated &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Container, _To.m_Container, _Context);
		CppConvertReverse(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskRestoredFromHistory, NInternal_C::HPMDataHistoryTaskRestoredFromHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskRestoredFromHistory const &_From, NInternal_C::HPMDataHistoryTaskRestoredFromHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Container, _To.m_Container, _Context);
		CppConvert(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskRestoredFromHistory, HPMDataHistoryTaskRestoredFromHistory>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskRestoredFromHistory const &_From, HPMDataHistoryTaskRestoredFromHistory &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Container, _To.m_Container, _Context);
		CppConvertReverse(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskMoved, NInternal_C::HPMDataHistoryTaskMoved>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskMoved const &_From, NInternal_C::HPMDataHistoryTaskMoved &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ContainerFrom, _To.m_ContainerFrom, _Context);
		CppConvert(_From.m_ContainerTo, _To.m_ContainerTo, _Context);
		CppConvert(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvert(_From.m_ID, _To.m_ID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskMoved, HPMDataHistoryTaskMoved>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskMoved const &_From, HPMDataHistoryTaskMoved &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ContainerFrom, _To.m_ContainerFrom, _Context);
		CppConvertReverse(_From.m_ContainerTo, _To.m_ContainerTo, _Context);
		CppConvertReverse(_From.m_TaskMainReferenceID, _To.m_TaskMainReferenceID, _Context);
		CppConvertReverse(_From.m_ID, _To.m_ID, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskProxyCreated, NInternal_C::HPMDataHistoryTaskProxyCreated>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskProxyCreated const &_From, NInternal_C::HPMDataHistoryTaskProxyCreated &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Container, _To.m_Container, _Context);
		CppConvert(_From.m_TaskReferenceID, _To.m_TaskReferenceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskProxyCreated, HPMDataHistoryTaskProxyCreated>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskProxyCreated const &_From, HPMDataHistoryTaskProxyCreated &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Container, _To.m_Container, _Context);
		CppConvertReverse(_From.m_TaskReferenceID, _To.m_TaskReferenceID, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskProxyDeleted, NInternal_C::HPMDataHistoryTaskProxyDeleted>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskProxyDeleted const &_From, NInternal_C::HPMDataHistoryTaskProxyDeleted &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Container, _To.m_Container, _Context);
		CppConvert(_From.m_TaskReferenceID, _To.m_TaskReferenceID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskProxyDeleted, HPMDataHistoryTaskProxyDeleted>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskProxyDeleted const &_From, HPMDataHistoryTaskProxyDeleted &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_Container, _To.m_Container, _Context);
		CppConvertReverse(_From.m_TaskReferenceID, _To.m_TaskReferenceID, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistoryTaskRenameCustomColumn, NInternal_C::HPMDataHistoryTaskRenameCustomColumn>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDataHistoryTaskRenameCustomColumn const &_From, NInternal_C::HPMDataHistoryTaskRenameCustomColumn &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_HashFrom, _To.m_HashFrom, _Context);
		CppConvert(_From.m_HashTo, _To.m_HashTo, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistoryTaskRenameCustomColumn, HPMDataHistoryTaskRenameCustomColumn>
{
public:
	static void Convert(NInternal_C::HPMDataHistoryTaskRenameCustomColumn const &_From, HPMDataHistoryTaskRenameCustomColumn &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_HashFrom, _To.m_HashFrom, _Context);
		CppConvertReverse(_From.m_HashTo, _To.m_HashTo, _Context);
	}
};

template <>
class TCCppConvert<HPMStatisticsCustomStatisticsFrequencyEntry, NInternal_C::HPMStatisticsCustomStatisticsFrequencyEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMInt32> m_FieldData;
	};
	
	static void Convert(HPMStatisticsCustomStatisticsFrequencyEntry const &_From, NInternal_C::HPMStatisticsCustomStatisticsFrequencyEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_FieldData.size();
			pLocal->m_FieldData.resize(nMembers);
			_To.m_nFieldData = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFieldData = &(*pLocal->m_FieldData.begin());
			else
				_To.m_pFieldData = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FieldData[i], pLocal->m_FieldData[i], _Context);
			}
		}
		CppConvert(_From.m_Frequency, _To.m_Frequency, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMStatisticsCustomStatisticsFrequencyEntry, HPMStatisticsCustomStatisticsFrequencyEntry>
{
public:
	static void Convert(NInternal_C::HPMStatisticsCustomStatisticsFrequencyEntry const &_From, HPMStatisticsCustomStatisticsFrequencyEntry &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFieldData;
			_To.m_FieldData.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFieldData[i], _To.m_FieldData[i], _Context);
			}
		}
		CppConvertReverse(_From.m_Frequency, _To.m_Frequency, _Context);
	}
};

template <>
class TCCppConvert<HPMStatisticsCustomStatisticsFrequency, NInternal_C::HPMStatisticsCustomStatisticsFrequency>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMCustomStatisticsField> m_Fields;
		std::vector<NInternal_C::HPMStatisticsCustomStatisticsFrequencyEntry> m_FrequencyEntries;
	};
	
	static void Convert(HPMStatisticsCustomStatisticsFrequency const &_From, NInternal_C::HPMStatisticsCustomStatisticsFrequency &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Fields.size();
			pLocal->m_Fields.resize(nMembers);
			_To.m_nFields = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFields = &(*pLocal->m_Fields.begin());
			else
				_To.m_pFields = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Fields[i], pLocal->m_Fields[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_FrequencyEntries.size();
			pLocal->m_FrequencyEntries.resize(nMembers);
			_To.m_nFrequencyEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pFrequencyEntries = &(*pLocal->m_FrequencyEntries.begin());
			else
				_To.m_pFrequencyEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_FrequencyEntries[i], pLocal->m_FrequencyEntries[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMStatisticsCustomStatisticsFrequency, HPMStatisticsCustomStatisticsFrequency>
{
public:
	static void Convert(NInternal_C::HPMStatisticsCustomStatisticsFrequency const &_From, HPMStatisticsCustomStatisticsFrequency &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nFields;
			_To.m_Fields.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFields[i], _To.m_Fields[i], _Context);
			}
		}
		{
			size_t nMembers = _From.m_nFrequencyEntries;
			_To.m_FrequencyEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pFrequencyEntries[i], _To.m_FrequencyEntries[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCustomChoiceValue, NInternal_C::HPMCustomChoiceValue>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomChoiceValue const &_From, NInternal_C::HPMCustomChoiceValue &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ValueType, _To.m_ValueType, _Context);
		CppConvert(_From.m_UniqueID, _To.m_UniqueID, _Context);
		CppConvert(_From.m_UniqueID2, _To.m_UniqueID2, _Context);
		CppConvert(_From.m_IntValue, _To.m_IntValue, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomChoiceValue, HPMCustomChoiceValue>
{
public:
	static void Convert(NInternal_C::HPMCustomChoiceValue const &_From, HPMCustomChoiceValue &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_ValueType, _To.m_ValueType, _Context);
		CppConvertReverse(_From.m_UniqueID, _To.m_UniqueID, _Context);
		CppConvertReverse(_From.m_UniqueID2, _To.m_UniqueID2, _Context);
		CppConvertReverse(_From.m_IntValue, _To.m_IntValue, _Context);
	}
};

template <>
class TCCppConvert<HPMCommunicationChannelData, NInternal_C::HPMCommunicationChannelData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Bytes;
	};
	
	static void Convert(HPMCommunicationChannelData const &_From, NInternal_C::HPMCommunicationChannelData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Bytes.size();
			pLocal->m_Bytes.resize(nMembers);
			_To.m_nBytes = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pBytes = &(*pLocal->m_Bytes.begin());
			else
				_To.m_pBytes = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Bytes[i], pLocal->m_Bytes[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCommunicationChannelData, HPMCommunicationChannelData>
{
public:
	static void Convert(NInternal_C::HPMCommunicationChannelData const &_From, HPMCommunicationChannelData &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nBytes;
			_To.m_Bytes.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pBytes[i], _To.m_Bytes[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCommunicationChannelProperties, NInternal_C::HPMCommunicationChannelProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCommunicationChannelProperties const &_From, NInternal_C::HPMCommunicationChannelProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_ChannelName, _To.m_pChannelName, _Context);
		CppConvert(_From.m_OwnerSessionID, _To.m_OwnerSessionID, _Context);
		CppConvert(_From.m_DatabaseGUID, _To.m_pDatabaseGUID, _Context);
		CppConvert(_From.m_Description, _To.m_pDescription, _Context);
		CppConvert(_From.m_ChannelData, _To.m_ChannelData, _Context);
		CppConvert(_From.m_Flags, _To.m_Flags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCommunicationChannelProperties, HPMCommunicationChannelProperties>
{
public:
	static void Convert(NInternal_C::HPMCommunicationChannelProperties const &_From, HPMCommunicationChannelProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pChannelName, _To.m_ChannelName, _Context);
		CppConvertReverse(_From.m_OwnerSessionID, _To.m_OwnerSessionID, _Context);
		CppConvertReverse(_From.m_pDatabaseGUID, _To.m_DatabaseGUID, _Context);
		CppConvertReverse(_From.m_pDescription, _To.m_Description, _Context);
		CppConvertReverse(_From.m_ChannelData, _To.m_ChannelData, _Context);
		CppConvertReverse(_From.m_Flags, _To.m_Flags, _Context);
	}
};

template <>
class TCCppConvert<HPMCommunicationChannelEnum, NInternal_C::HPMCommunicationChannelEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMCommunicationChannelProperties> m_Channels;
	};
	
	static void Convert(HPMCommunicationChannelEnum const &_From, NInternal_C::HPMCommunicationChannelEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Channels.size();
			pLocal->m_Channels.resize(nMembers);
			_To.m_nChannels = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pChannels = &(*pLocal->m_Channels.begin());
			else
				_To.m_pChannels = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Channels[i], pLocal->m_Channels[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCommunicationChannelEnum, HPMCommunicationChannelEnum>
{
public:
	static void Convert(NInternal_C::HPMCommunicationChannelEnum const &_From, HPMCommunicationChannelEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nChannels;
			_To.m_Channels.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pChannels[i], _To.m_Channels[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCredentialResolutionSessionIDsEnum, NInternal_C::HPMCredentialResolutionSessionIDsEnum>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt64> m_SessionIDs;
	};
	
	static void Convert(HPMCredentialResolutionSessionIDsEnum const &_From, NInternal_C::HPMCredentialResolutionSessionIDsEnum &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_SessionIDs.size();
			pLocal->m_SessionIDs.resize(nMembers);
			_To.m_nSessionIDs = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pSessionIDs = &(*pLocal->m_SessionIDs.begin());
			else
				_To.m_pSessionIDs = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_SessionIDs[i], pLocal->m_SessionIDs[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCredentialResolutionSessionIDsEnum, HPMCredentialResolutionSessionIDsEnum>
{
public:
	static void Convert(NInternal_C::HPMCredentialResolutionSessionIDsEnum const &_From, HPMCredentialResolutionSessionIDsEnum &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nSessionIDs;
			_To.m_SessionIDs.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pSessionIDs[i], _To.m_SessionIDs[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCertificateData, NInternal_C::HPMCertificateData>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Bytes;
	};
	
	static void Convert(HPMCertificateData const &_From, NInternal_C::HPMCertificateData &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Bytes.size();
			pLocal->m_Bytes.resize(nMembers);
			_To.m_nBytes = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pBytes = &(*pLocal->m_Bytes.begin());
			else
				_To.m_pBytes = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Bytes[i], pLocal->m_Bytes[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCertificateData, HPMCertificateData>
{
public:
	static void Convert(NInternal_C::HPMCertificateData const &_From, HPMCertificateData &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nBytes;
			_To.m_Bytes.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pBytes[i], _To.m_Bytes[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMCertificateSettings, NInternal_C::HPMCertificateSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCertificateSettings const &_From, NInternal_C::HPMCertificateSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_VerificationFlags, _To.m_VerificationFlags, _Context);
		CppConvert(_From.m_PublicCertificateData, _To.m_PublicCertificateData, _Context);
		CppConvert(_From.m_PrivateKeyData, _To.m_PrivateKeyData, _Context);
		CppConvert(_From.m_CRLData, _To.m_CRLData, _Context);
		CppConvert(_From.m_CACertificateData, _To.m_CACertificateData, _Context);
		CppConvert(_From.m_CAStoreLocation, _To.m_CAStoreLocation, _Context);
		CppConvert(_From.m_PathToCRLs, _To.m_PathToCRLs, _Context);
		CppConvert(_From.m_VerificationDepth, _To.m_VerificationDepth, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCertificateSettings, HPMCertificateSettings>
{
public:
	static void Convert(NInternal_C::HPMCertificateSettings const &_From, HPMCertificateSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_VerificationFlags, _To.m_VerificationFlags, _Context);
		CppConvertReverse(_From.m_PublicCertificateData, _To.m_PublicCertificateData, _Context);
		CppConvertReverse(_From.m_PrivateKeyData, _To.m_PrivateKeyData, _Context);
		CppConvertReverse(_From.m_CRLData, _To.m_CRLData, _Context);
		CppConvertReverse(_From.m_CACertificateData, _To.m_CACertificateData, _Context);
		CppConvertReverse(_From.m_CAStoreLocation, _To.m_CAStoreLocation, _Context);
		CppConvertReverse(_From.m_PathToCRLs, _To.m_PathToCRLs, _Context);
		CppConvertReverse(_From.m_VerificationDepth, _To.m_VerificationDepth, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistory, NInternal_C::HPMDataHistory>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMDataHistoryEntry> m_HistoryEntries;
	};
	
	static void Convert(HPMDataHistory const &_From, NInternal_C::HPMDataHistory &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_HistoryEntries.size();
			pLocal->m_HistoryEntries.resize(nMembers);
			_To.m_nHistoryEntries = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pHistoryEntries = &(*pLocal->m_HistoryEntries.begin());
			else
				_To.m_pHistoryEntries = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_HistoryEntries[i], pLocal->m_HistoryEntries[i], _Context);
			}
		}
		CppConvert(_From.m_Delivered, _To.m_Delivered, _Context);
		CppConvert(_From.m_Earliest, _To.m_Earliest, _Context);
		CppConvert(_From.m_Latests, _To.m_Latests, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDataHistory, HPMDataHistory>
{
public:
	static void Convert(NInternal_C::HPMDataHistory const &_From, HPMDataHistory &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
		{
			size_t nMembers = _From.m_nHistoryEntries;
			_To.m_HistoryEntries.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pHistoryEntries[i], _To.m_HistoryEntries[i], _Context);
			}
		}
		CppConvertReverse(_From.m_Delivered, _To.m_Delivered, _Context);
		CppConvertReverse(_From.m_Earliest, _To.m_Earliest, _Context);
		CppConvertReverse(_From.m_Latests, _To.m_Latests, _Context);
	}
};

template <>
class TCCppConvert<HPMDataHistory, const NInternal_C::HPMDataHistory *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMDataHistoryEntry> m_HistoryEntries;
	};
	
	static void Convert(HPMDataHistory const &_From, const NInternal_C::HPMDataHistory * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMDataHistory* , HPMDataHistory>
{
public:
	static void Convert(const NInternal_C::HPMDataHistory * const &_From, HPMDataHistory &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMCustomTaskStatusDialogValues, NInternal_C::HPMCustomTaskStatusDialogValues>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMCustomTaskStatusDialogValues const &_From, NInternal_C::HPMCustomTaskStatusDialogValues &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Title, _To.m_pTitle, _Context);
		CppConvert(_From.m_InfoText, _To.m_pInfoText, _Context);
		CppConvert(_From.m_ButtonLabel, _To.m_pButtonLabel, _Context);
		CppConvert(_From.m_CancelLabel, _To.m_pCancelLabel, _Context);
		CppConvert(_From.m_SelectionActionText, _To.m_pSelectionActionText, _Context);
		CppConvert(_From.m_OptionalTextHeading, _To.m_pOptionalTextHeading, _Context);
		CppConvert(_From.m_OptionalText, _To.m_pOptionalText, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMCustomTaskStatusDialogValues, HPMCustomTaskStatusDialogValues>
{
public:
	static void Convert(NInternal_C::HPMCustomTaskStatusDialogValues const &_From, HPMCustomTaskStatusDialogValues &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pTitle, _To.m_Title, _Context);
		CppConvertReverse(_From.m_pInfoText, _To.m_InfoText, _Context);
		CppConvertReverse(_From.m_pButtonLabel, _To.m_ButtonLabel, _Context);
		CppConvertReverse(_From.m_pCancelLabel, _To.m_CancelLabel, _Context);
		CppConvertReverse(_From.m_pSelectionActionText, _To.m_SelectionActionText, _Context);
		CppConvertReverse(_From.m_pOptionalTextHeading, _To.m_OptionalTextHeading, _Context);
		CppConvertReverse(_From.m_pOptionalText, _To.m_OptionalText, _Context);
	}
};

template <>
class TCCppConvert<HPMSessionInfo, NInternal_C::HPMSessionInfo>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMSessionInfo const &_From, NInternal_C::HPMSessionInfo &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Address, _To.m_pAddress, _Context);
		CppConvert(_From.m_Port, _To.m_Port, _Context);
		CppConvert(_From.m_Database, _To.m_pDatabase, _Context);
		CppConvert(_From.m_ResourceName, _To.m_pResourceName, _Context);
		CppConvert(_From.m_SessionID, _To.m_SessionID, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMSessionInfo, HPMSessionInfo>
{
public:
	static void Convert(NInternal_C::HPMSessionInfo const &_From, HPMSessionInfo &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pAddress, _To.m_Address, _Context);
		CppConvertReverse(_From.m_Port, _To.m_Port, _Context);
		CppConvertReverse(_From.m_pDatabase, _To.m_Database, _Context);
		CppConvertReverse(_From.m_pResourceName, _To.m_ResourceName, _Context);
		CppConvertReverse(_From.m_SessionID, _To.m_SessionID, _Context);
	}
};

template <>
class TCCppConvert<HPMSessionLock, NInternal_C::HPMSessionLock>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMSessionLock const &_From, NInternal_C::HPMSessionLock &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMSessionLock, HPMSessionLock>
{
public:
	static void Convert(NInternal_C::HPMSessionLock const &_From, HPMSessionLock &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMSessionLock, const NInternal_C::HPMSessionLock *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMSessionLock const &_From, const NInternal_C::HPMSessionLock * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMSessionLock* , HPMSessionLock>
{
public:
	static void Convert(const NInternal_C::HPMSessionLock * const &_From, HPMSessionLock &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

template <>
class TCCppConvert<HPMAuthenticationLoginNameEntry, NInternal_C::HPMAuthenticationLoginNameEntry>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMAuthenticationLoginNameEntry const &_From, NInternal_C::HPMAuthenticationLoginNameEntry &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_DisplayName, _To.m_pDisplayName, _Context);
		CppConvert(_From.m_NameFlags, _To.m_NameFlags, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMAuthenticationLoginNameEntry, HPMAuthenticationLoginNameEntry>
{
public:
	static void Convert(NInternal_C::HPMAuthenticationLoginNameEntry const &_From, HPMAuthenticationLoginNameEntry &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pDisplayName, _To.m_DisplayName, _Context);
		CppConvertReverse(_From.m_NameFlags, _To.m_NameFlags, _Context);
	}
};

template <>
class TCCppConvert<HPMAuthenticationClientPluginProperties, NInternal_C::HPMAuthenticationClientPluginProperties>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMAuthenticationLoginNameEntry> m_LoginNames;
	};
	
	static void Convert(HPMAuthenticationClientPluginProperties const &_From, NInternal_C::HPMAuthenticationClientPluginProperties &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		{
			size_t nMembers = _From.m_LoginNames.size();
			pLocal->m_LoginNames.resize(nMembers);
			_To.m_nLoginNames = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pLoginNames = &(*pLocal->m_LoginNames.begin());
			else
				_To.m_pLoginNames = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_LoginNames[i], pLocal->m_LoginNames[i], _Context);
			}
		}
		CppConvert(_From.m_NoPasswordText, _To.m_pNoPasswordText, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMAuthenticationClientPluginProperties, HPMAuthenticationClientPluginProperties>
{
public:
	static void Convert(NInternal_C::HPMAuthenticationClientPluginProperties const &_From, HPMAuthenticationClientPluginProperties &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		{
			size_t nMembers = _From.m_nLoginNames;
			_To.m_LoginNames.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pLoginNames[i], _To.m_LoginNames[i], _Context);
			}
		}
		CppConvertReverse(_From.m_pNoPasswordText, _To.m_NoPasswordText, _Context);
	}
};

template <>
class TCCppConvert<HPMAuthenticationSessionKey, NInternal_C::HPMAuthenticationSessionKey>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMUInt8> m_Bytes;
	};
	
	static void Convert(HPMAuthenticationSessionKey const &_From, NInternal_C::HPMAuthenticationSessionKey &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Bytes.size();
			pLocal->m_Bytes.resize(nMembers);
			_To.m_nBytes = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pBytes = &(*pLocal->m_Bytes.begin());
			else
				_To.m_pBytes = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Bytes[i], pLocal->m_Bytes[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMAuthenticationSessionKey, HPMAuthenticationSessionKey>
{
public:
	static void Convert(NInternal_C::HPMAuthenticationSessionKey const &_From, HPMAuthenticationSessionKey &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nBytes;
			_To.m_Bytes.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pBytes[i], _To.m_Bytes[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMAuthenticationErrorDescription, NInternal_C::HPMAuthenticationErrorDescription>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMAuthenticationErrorDescription const &_From, NInternal_C::HPMAuthenticationErrorDescription &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Origin, _To.m_pOrigin, _Context);
		CppConvert(_From.m_ErrorText, _To.m_pErrorText, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMAuthenticationErrorDescription, HPMAuthenticationErrorDescription>
{
public:
	static void Convert(NInternal_C::HPMAuthenticationErrorDescription const &_From, HPMAuthenticationErrorDescription &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pOrigin, _To.m_Origin, _Context);
		CppConvertReverse(_From.m_pErrorText, _To.m_ErrorText, _Context);
	}
};

template <>
class TCCppConvert<HPMAuthenticationErrorDescriptions, NInternal_C::HPMAuthenticationErrorDescriptions>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
		std::vector<NInternal_C::HPMAuthenticationErrorDescription> m_Descriptions;
	};
	
	static void Convert(HPMAuthenticationErrorDescriptions const &_From, NInternal_C::HPMAuthenticationErrorDescriptions &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		{
			size_t nMembers = _From.m_Descriptions.size();
			pLocal->m_Descriptions.resize(nMembers);
			_To.m_nDescriptions = (unsigned int)nMembers;
			if (nMembers)
				_To.m_pDescriptions = &(*pLocal->m_Descriptions.begin());
			else
				_To.m_pDescriptions = 0;
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvert(_From.m_Descriptions[i], pLocal->m_Descriptions[i], _Context);
			}
		}
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMAuthenticationErrorDescriptions, HPMAuthenticationErrorDescriptions>
{
public:
	static void Convert(NInternal_C::HPMAuthenticationErrorDescriptions const &_From, HPMAuthenticationErrorDescriptions &_To, CCppConvertContext &_Context)
	{
		{
			size_t nMembers = _From.m_nDescriptions;
			_To.m_Descriptions.resize(nMembers);
			for (size_t i = 0; i < nMembers; ++i)
			{
				CppConvertReverse(_From.m_pDescriptions[i], _To.m_Descriptions[i], _Context);
			}
		}
	}
};

template <>
class TCCppConvert<HPMGlobalStatisticsSettings, NInternal_C::HPMGlobalStatisticsSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMGlobalStatisticsSettings const &_From, NInternal_C::HPMGlobalStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_SamplingFrequency, _To.m_SamplingFrequency, _Context);
		CppConvert(_From.m_SecondOfDaySample, _To.m_SecondOfDaySample, _Context);
		CppConvert(_From.m_SamplingFrequencyResource, _To.m_SamplingFrequencyResource, _Context);
		CppConvert(_From.m_SecondOfDaySampleResource, _To.m_SecondOfDaySampleResource, _Context);
		CppConvert(_From.m_SamplingFrequencyResourceGroup, _To.m_SamplingFrequencyResourceGroup, _Context);
		CppConvert(_From.m_SecondOfDaySampleResourceGroup, _To.m_SecondOfDaySampleResourceGroup, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMGlobalStatisticsSettings, HPMGlobalStatisticsSettings>
{
public:
	static void Convert(NInternal_C::HPMGlobalStatisticsSettings const &_From, HPMGlobalStatisticsSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_SamplingFrequency, _To.m_SamplingFrequency, _Context);
		CppConvertReverse(_From.m_SecondOfDaySample, _To.m_SecondOfDaySample, _Context);
		CppConvertReverse(_From.m_SamplingFrequencyResource, _To.m_SamplingFrequencyResource, _Context);
		CppConvertReverse(_From.m_SecondOfDaySampleResource, _To.m_SecondOfDaySampleResource, _Context);
		CppConvertReverse(_From.m_SamplingFrequencyResourceGroup, _To.m_SamplingFrequencyResourceGroup, _Context);
		CppConvertReverse(_From.m_SecondOfDaySampleResourceGroup, _To.m_SecondOfDaySampleResourceGroup, _Context);
	}
};

template <>
class TCCppConvert<HPMGlobalEmailSettings, NInternal_C::HPMGlobalEmailSettings>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMGlobalEmailSettings const &_From, NInternal_C::HPMGlobalEmailSettings &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_Server, _To.m_pServer, _Context);
		CppConvert(_From.m_Port, _To.m_Port, _Context);
		CppConvert(_From.m_Name, _To.m_pName, _Context);
		CppConvert(_From.m_Email, _To.m_pEmail, _Context);
		CppConvert(_From.m_bAuthentication, _To.m_bAuthentication, _Context);
		CppConvert(_From.m_UserName, _To.m_pUserName, _Context);
		CppConvert(_From.m_UserPassword, _To.m_pUserPassword, _Context);
		CppConvert(_From.m_SecurityProtocol, _To.m_SecurityProtocol, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMGlobalEmailSettings, HPMGlobalEmailSettings>
{
public:
	static void Convert(NInternal_C::HPMGlobalEmailSettings const &_From, HPMGlobalEmailSettings &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pServer, _To.m_Server, _Context);
		CppConvertReverse(_From.m_Port, _To.m_Port, _Context);
		CppConvertReverse(_From.m_pName, _To.m_Name, _Context);
		CppConvertReverse(_From.m_pEmail, _To.m_Email, _Context);
		CppConvertReverse(_From.m_bAuthentication, _To.m_bAuthentication, _Context);
		CppConvertReverse(_From.m_pUserName, _To.m_UserName, _Context);
		CppConvertReverse(_From.m_pUserPassword, _To.m_UserPassword, _Context);
		CppConvertReverse(_From.m_SecurityProtocol, _To.m_SecurityProtocol, _Context);
	}
};

template <>
class TCCppConvert<HPMDatabaseGUIDs, NInternal_C::HPMDatabaseGUIDs>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMDatabaseGUIDs const &_From, NInternal_C::HPMDatabaseGUIDs &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
		CppConvert(_From.m_GUID, _To.m_pGUID, _Context);
		CppConvert(_From.m_ID64, _To.m_ID64, _Context);
		CppConvert(_From.m_ID32, _To.m_ID32, _Context);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMDatabaseGUIDs, HPMDatabaseGUIDs>
{
public:
	static void Convert(NInternal_C::HPMDatabaseGUIDs const &_From, HPMDatabaseGUIDs &_To, CCppConvertContext &_Context)
	{
		CppConvertReverse(_From.m_pGUID, _To.m_GUID, _Context);
		CppConvertReverse(_From.m_ID64, _To.m_ID64, _Context);
		CppConvertReverse(_From.m_ID32, _To.m_ID32, _Context);
	}
};

template <>
class TCCppConvert<HPMNotificationSubscription, NInternal_C::HPMNotificationSubscription>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMNotificationSubscription const &_From, NInternal_C::HPMNotificationSubscription &_To, CCppConvertContext &_Context)
	{
		CLocal *pLocal = new CLocal;
		_Context.InsertLocalData(pLocal);
	}
};
template <>
class TCCppConvertReverse<NInternal_C::HPMNotificationSubscription, HPMNotificationSubscription>
{
public:
	static void Convert(NInternal_C::HPMNotificationSubscription const &_From, HPMNotificationSubscription &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)&_From);
	}
};

template <>
class TCCppConvert<HPMNotificationSubscription, const NInternal_C::HPMNotificationSubscription *>
{
public:
	class CLocal : public CCppConvertContext::CLocalData
	{
	public:
	};
	
	static void Convert(HPMNotificationSubscription const &_From, const NInternal_C::HPMNotificationSubscription * &_To, CCppConvertContext &_Context)
	{
		_To = _From.GetOriginalObject();
	}
};
template <>
class TCCppConvertReverse<const NInternal_C::HPMNotificationSubscription* , HPMNotificationSubscription>
{
public:
	static void Convert(const NInternal_C::HPMNotificationSubscription * const &_From, HPMNotificationSubscription &_To, CCppConvertContext &_Context)
	{
		_To.SetOriginalObject(_Context.m_pSDKFunctions, _Context.m_pSession, (void *)_From);
	}
};

