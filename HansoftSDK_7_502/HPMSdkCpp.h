

#ifndef DInc_HPMSdkCpp_H
#define DInc_HPMSdkCpp_H

#ifndef DNew
#define DNew new
#endif

#include <string>
#include <list>
#include <vector>
#include <stdexcept>


#if __cplusplus >= 201103L || defined(_MSC_VER) && _MSC_VER >= 1700
#include <atomic>
typedef std::atomic<unsigned int> atomic_unsigned_int;
#else

class atomic_unsigned_int
{
	unsigned int m_Count;
public:
	atomic_unsigned_int(unsigned int _Count);
	unsigned int operator ++();
	unsigned int operator --();
};
#endif

#if defined(__clang__) || defined(__GNUC__)
#include <stdint.h>
#endif

#if _MSC_VER >= 1600 || __cplusplus >= 201103L
#define DHansoftSDKSupportMoveSemantic
#else
#ifndef nullptr
#define nullptr 0
#endif
#endif

namespace HPMSdk
{
	namespace NInternal_C
	{
		#include "HPMSdk.h"
	}

 #ifdef _MSC_VER
	typedef signed __int8 HPMInt8;
	typedef unsigned __int8 HPMUInt8;
	typedef signed __int16 HPMInt16;
	typedef unsigned __int16 HPMUInt16;
	typedef signed __int32 HPMInt32;
	typedef unsigned __int32 HPMUInt32;
	typedef signed __int64 HPMInt64;
	typedef unsigned __int64 HPMUInt64;
#elif defined(__clang__) || defined(__GNUC__)
    typedef int8_t HPMInt8;
	typedef uint8_t HPMUInt8;
	typedef int16_t HPMInt16;
	typedef uint16_t HPMUInt16;
	typedef int32_t HPMInt32;
	typedef uint32_t HPMUInt32;
	typedef int64_t HPMInt64;
	typedef uint64_t HPMUInt64;
#else
#error "Not implemented"
#endif
    
	typedef float HPMFP32;
	typedef double HPMFP64;
	typedef HPMInt32 HPMError;
	typedef std::basic_string<NInternal_C::HPMCharType> HPMString;
	typedef std::basic_string<NInternal_C::HPMSystemChar> HPMSystemString;
	typedef void * HPMUserContext;
	typedef bool HPMBoolean;

	class HPMUniqueID
	{
	public:
		typedef HPMInt32 CBasicType;
		HPMInt32 m_ID;
		HPMUniqueID()
		{
			m_ID = -1;
		}

		bool IsValid() const
		{
			return m_ID >= 0;
		}

		HPMUniqueID(HPMInt32 _Conv)
		{
			m_ID = _Conv;
		}

		void operator = (HPMInt32 _Conv)
		{
			m_ID = _Conv;
		}

		operator HPMInt32 () const
		{
			return m_ID;
		}

		bool operator < (const HPMUniqueID &_Other) const
		{
			return m_ID < _Other.m_ID;
		}
		bool operator > (const HPMUniqueID &_Other) const
		{
			return m_ID > _Other.m_ID;
		}
		bool operator <= (const HPMUniqueID &_Other) const
		{
			return m_ID <= _Other.m_ID;
		}
		bool operator >= (const HPMUniqueID &_Other) const
		{
			return m_ID >= _Other.m_ID;
		}
		bool operator == (const HPMUniqueID &_Other) const
		{
			return m_ID == _Other.m_ID;
		}
		bool operator != (const HPMUniqueID &_Other) const
		{
			return m_ID != _Other.m_ID;
		}
	};


	class HPMHelper_RefOriginalObjectRef
	{
		HPMHelper_RefOriginalObjectRef(HPMHelper_RefOriginalObjectRef const &_Other);
		HPMHelper_RefOriginalObjectRef &operator =(HPMHelper_RefOriginalObjectRef const &_Other);
#ifdef DHansoftSDKSupportMoveSemantic
		HPMHelper_RefOriginalObjectRef(HPMHelper_RefOriginalObjectRef &&_Other);
		HPMHelper_RefOriginalObjectRef &operator =(HPMHelper_RefOriginalObjectRef &&_Other);
#endif
	public:
		atomic_unsigned_int m_RefCount;
		void *m_pObject;
		NInternal_C::HPMSdkFunctions *m_pSDKFunctions;
		void *m_pSession;

		HPMHelper_RefOriginalObjectRef(NInternal_C::HPMSdkFunctions *_pSDKFunctions, void *_pSession, void *_pObject)
			: m_RefCount(0)
		{
			
			m_pObject = _pObject;
			m_pSDKFunctions = _pSDKFunctions;
			m_pSession = _pSession;
			AddRef();
		}
		~HPMHelper_RefOriginalObjectRef()
		{
		}

		int Compare(void *_pObject)
		{
			if (!_pObject)
				return -2;
			NInternal_C::HPMInt32 Return; 
			NInternal_C::HPMError Error = m_pSDKFunctions->ObjectCompare(m_pSession, m_pObject, _pObject, &Return);
			if (Error == NInternal_C::EHPMError_ConversionNotSupported)
				return -2;
			else
				return Return;
		}

		void AddRef()
		{
			if ((++m_RefCount) == 1)
			{
				if (m_pObject)
					m_pSDKFunctions->ObjectAddRef(m_pSession, m_pObject);
			}
		}
		bool Free()
		{
			if ((--m_RefCount) == 0)
			{
				if (m_pObject)
				{
					m_pSDKFunctions->ObjectFree(m_pSession, m_pObject, 0);
					m_pObject = 0;
				}
				return true;
			}
			return false;
		}
	};

	class HPMHelper_RefOriginalObject
	{
	public:
		HPMHelper_RefOriginalObjectRef *m_pRef;
		HPMHelper_RefOriginalObject()
		{
			m_pRef = 0;
		}
		HPMHelper_RefOriginalObject(const HPMHelper_RefOriginalObject &_Other)
		{
			m_pRef = _Other.m_pRef;
			if (m_pRef)
				++m_pRef->m_RefCount;
		}
		HPMHelper_RefOriginalObject & operator = (const HPMHelper_RefOriginalObject &_Other)
		{
			FreeOld();
			m_pRef = _Other.m_pRef;
			if (m_pRef)
				++m_pRef->m_RefCount;
			return *this;
		}
#ifdef DHansoftSDKSupportMoveSemantic
		HPMHelper_RefOriginalObject(HPMHelper_RefOriginalObject &&_Other)
		{
			m_pRef = _Other.m_pRef;
			_Other.m_pRef = 0;
		}
		HPMHelper_RefOriginalObject & operator = (HPMHelper_RefOriginalObject &&_Other)
		{
			FreeOld();
			m_pRef = _Other.m_pRef;
			_Other.m_pRef = 0;
			return *this;
		}
#endif

		void FreeOld()
		{
			if (m_pRef)
			{
				if (m_pRef->Free())
					delete m_pRef;
				m_pRef = 0;
			}
		}

		~HPMHelper_RefOriginalObject()
		{
			FreeOld();
		}
	};

#include "HPMSdkCpp_AutoEnums.h"

	class HPMSdkException : std::runtime_error
	{
	public:
		HPMSdkException(EHPMError _Error) : std::runtime_error("Hansoft SDK numbered exception")
		{
			m_Error = _Error;
		}
		HPMSdkException(EHPMError _Error, HPMString const &_ExtendedError) : std::runtime_error("Hansoft SDK numbered exception")
		{
			m_Error = _Error;
			m_ExtendedError = _ExtendedError;
		}
        
		~HPMSdkException() throw()
		{           
		}
#ifdef DHansoftSDKSupportMoveSemantic
		HPMSdkException(HPMSdkException &&_Other)
			: std::runtime_error(std::move((std::runtime_error &)_Other))
			, m_Error(_Other.m_Error)
			, m_ExtendedError(_Other.m_ExtendedError)
		{
		}
#endif
		EHPMError m_Error;
		HPMString m_ExtendedError;

		EHPMError GetError() const
		{
			return m_Error;
		}

		HPMString const &GetExtendedError() const
		{
			return m_ExtendedError;
		}

		HPMString GetAsString() const;

	};
	
#ifdef DHansoftSDKSupportMoveSemantic
			
#define DImplementSDKException(d_Name) \
	class HPMSdkException_##d_Name : public HPMSdkException \
	{ \
		public: \
		HPMSdkException_##d_Name() \
			: HPMSdkException(EHPMError_##d_Name) \
		{ \
		} \
		HPMSdkException_##d_Name(HPMString const &_ExtendedError) \
			: HPMSdkException(EHPMError_##d_Name, _ExtendedError) \
		{ \
		} \
		HPMSdkException_##d_Name(HPMSdkException_##d_Name &&_Other) \
			: HPMSdkException(std::move((HPMSdkException &)_Other)) \
		{ \
		} \
	};
			
#else
			
#define DImplementSDKException(d_Name) \
	class HPMSdkException_##d_Name : public HPMSdkException \
	{ \
		public: \
		HPMSdkException_##d_Name() \
			: HPMSdkException(EHPMError_##d_Name) \
		{ \
		} \
		HPMSdkException_##d_Name(HPMString const &_ExtendedError) \
			: HPMSdkException(EHPMError_##d_Name, _ExtendedError) \
		{ \
		} \
	};
			
#endif
			
	DImplementSDKException(DllNotFound);
	DImplementSDKException(DllInvalid);
	DImplementSDKException(NewVersionOfSDKRequired);
	DImplementSDKException(CouldNotConnectToHost);
	DImplementSDKException(GeneralLoginError);
	DImplementSDKException(FailedToConnectToDatabase);
	DImplementSDKException(DatabaseDoesNotExist);
	DImplementSDKException(DatabaseNotOnline);
	DImplementSDKException(PasswordOrResourceInvalid);
	DImplementSDKException(LicenseInvalid);
	DImplementSDKException(SyncError);
	DImplementSDKException(OtherError);
	DImplementSDKException(ConnectionLost);
	DImplementSDKException(InvalidID);
	DImplementSDKException(PasswordRequired);
	DImplementSDKException(CallbackAlreadyExists);
	DImplementSDKException(CallbackDoesNotExist);
	DImplementSDKException(BlockTimeout);
	DImplementSDKException(ResourceNotMemberOfProject);
	DImplementSDKException(DataNotYetAvailable);
	DImplementSDKException(ConversionNotSupported);
	DImplementSDKException(IndexOutOfRange);
	DImplementSDKException(FunctionalityNotInitialized);
	DImplementSDKException(AlreadyInitialized);
	DImplementSDKException(OperationAlreadyInProgress);
	DImplementSDKException(AccessDenied);
	DImplementSDKException(FileDoesNotExist);
	DImplementSDKException(LicenseViolation);
	DImplementSDKException(ParseError);
	DImplementSDKException(InvalidCustomSettingsType);
	DImplementSDKException(NotAvailableInClientSDK);
	DImplementSDKException(OnlyAvailableInClientSDK);
	DImplementSDKException(Deprecated);
	DImplementSDKException(OnlyAvailableInQAProject);
	DImplementSDKException(InvalidSessionKeySize);
	DImplementSDKException(InvalidIdentifier);
	DImplementSDKException(SessionPoolNotInitialized);
	DImplementSDKException(SessionPoolSessionNotAvailable);
	DImplementSDKException(SessionPoolNotAllowed);
	DImplementSDKException(SessionPoolNotAvailableInClientSDK);
	DImplementSDKException(LoginDisabled);
	DImplementSDKException(Partitioned);
	DImplementSDKException(WorkingDirectoryNotAvailableInClientSDK);
	DImplementSDKException(NewVersionOfServerRequired);
	DImplementSDKException(IDNoLongerExists);
	DImplementSDKException(NotValidOnTaskWithProxy);
	DImplementSDKException(FullIdentifierNotAvailaibleInTranslation);
	DImplementSDKException(IdentifierNotAvailaibleInTranslation);
	DImplementSDKException(SDKNotAllowedToSetAuthOrCredential);
	DImplementSDKException(ImageFormatNotSupported);
	DImplementSDKException(CropAreaOutOfBounds);
	DImplementSDKException(NoVersionControlHistory);
	DImplementSDKException(TimeZoneOrder);
	DImplementSDKException(ServerTimedOut);
	DImplementSDKException(CouldNotLoadImpDll);
	DImplementSDKException(SecureConnectionRefused);
	DImplementSDKException(SecureConnectionNotTrusted);
	DImplementSDKException(Certificate);
	DImplementSDKException(ServerDoesNotSupportSecureConnection);
	DImplementSDKException(CertificateSettingsNotApplicableInClientSDK);
	DImplementSDKException(DateTimeOutOfRange);
	DImplementSDKException(CouldNotCreateSDKInterface);
	DImplementSDKException(ServerVersionMismatch);
	DImplementSDKException(ServerDoesNotSupportPlatform);
	DImplementSDKException(ServerTimeMismatch);
	
			
#undef DImplementSDKException
			
#define DImplementThrowSDKException(d_Name) \
		if (_Error == EHPMError_##d_Name) \
			throw HPMSdkException_##d_Name(_ExtendedError);

	static inline void ThrowSDKException(EHPMError _Error, HPMString const &_ExtendedError)
	{
		DImplementThrowSDKException(DllNotFound);
		DImplementThrowSDKException(DllInvalid);
		DImplementThrowSDKException(NewVersionOfSDKRequired);
		DImplementThrowSDKException(CouldNotConnectToHost);
		DImplementThrowSDKException(GeneralLoginError);
		DImplementThrowSDKException(FailedToConnectToDatabase);
		DImplementThrowSDKException(DatabaseDoesNotExist);
		DImplementThrowSDKException(DatabaseNotOnline);
		DImplementThrowSDKException(PasswordOrResourceInvalid);
		DImplementThrowSDKException(LicenseInvalid);
		DImplementThrowSDKException(SyncError);
		DImplementThrowSDKException(OtherError);
		DImplementThrowSDKException(ConnectionLost);
		DImplementThrowSDKException(InvalidID);
		DImplementThrowSDKException(PasswordRequired);
		DImplementThrowSDKException(CallbackAlreadyExists);
		DImplementThrowSDKException(CallbackDoesNotExist);
		DImplementThrowSDKException(BlockTimeout);
		DImplementThrowSDKException(ResourceNotMemberOfProject);
		DImplementThrowSDKException(DataNotYetAvailable);
		DImplementThrowSDKException(ConversionNotSupported);
		DImplementThrowSDKException(IndexOutOfRange);
		DImplementThrowSDKException(FunctionalityNotInitialized);
		DImplementThrowSDKException(AlreadyInitialized);
		DImplementThrowSDKException(OperationAlreadyInProgress);
		DImplementThrowSDKException(AccessDenied);
		DImplementThrowSDKException(FileDoesNotExist);
		DImplementThrowSDKException(LicenseViolation);
		DImplementThrowSDKException(ParseError);
		DImplementThrowSDKException(InvalidCustomSettingsType);
		DImplementThrowSDKException(NotAvailableInClientSDK);
		DImplementThrowSDKException(OnlyAvailableInClientSDK);
		DImplementThrowSDKException(Deprecated);
		DImplementThrowSDKException(OnlyAvailableInQAProject);
		DImplementThrowSDKException(InvalidSessionKeySize);
		DImplementThrowSDKException(InvalidIdentifier);
		DImplementThrowSDKException(SessionPoolNotInitialized);
		DImplementThrowSDKException(SessionPoolSessionNotAvailable);
		DImplementThrowSDKException(SessionPoolNotAllowed);
		DImplementThrowSDKException(SessionPoolNotAvailableInClientSDK);
		DImplementThrowSDKException(LoginDisabled);
		DImplementThrowSDKException(Partitioned);
		DImplementThrowSDKException(WorkingDirectoryNotAvailableInClientSDK);
		DImplementThrowSDKException(NewVersionOfServerRequired);
		DImplementThrowSDKException(IDNoLongerExists);
		DImplementThrowSDKException(NotValidOnTaskWithProxy);
		DImplementThrowSDKException(FullIdentifierNotAvailaibleInTranslation);
		DImplementThrowSDKException(IdentifierNotAvailaibleInTranslation);
		DImplementThrowSDKException(SDKNotAllowedToSetAuthOrCredential);
		DImplementThrowSDKException(ImageFormatNotSupported);
		DImplementThrowSDKException(CropAreaOutOfBounds);
		DImplementThrowSDKException(NoVersionControlHistory);
		DImplementThrowSDKException(TimeZoneOrder);
		DImplementThrowSDKException(ServerTimedOut);
		DImplementThrowSDKException(CouldNotLoadImpDll);
		DImplementThrowSDKException(SecureConnectionRefused);
		DImplementThrowSDKException(SecureConnectionNotTrusted);
		DImplementThrowSDKException(Certificate);
		DImplementThrowSDKException(ServerDoesNotSupportSecureConnection);
		DImplementThrowSDKException(CertificateSettingsNotApplicableInClientSDK);
		DImplementThrowSDKException(DateTimeOutOfRange);
		DImplementThrowSDKException(CouldNotCreateSDKInterface);
		DImplementThrowSDKException(ServerVersionMismatch);
		DImplementThrowSDKException(ServerDoesNotSupportPlatform);
		DImplementThrowSDKException(ServerTimeMismatch);
		
		// Fallback if we don't know about the error number
		throw HPMSdkException(_Error, _ExtendedError);
	}
			
	static inline void ThrowSDKException(EHPMError _Error)
	{
		return ThrowSDKException(_Error, HPMString());
	}

	typedef std::runtime_error HPMSdkCppException;

#include "HPMSdkCpp_AutoClasses.h"

	namespace NInternal
	{
		class CCppConvertContext
		{
			CCppConvertContext(CCppConvertContext const &_Other);
			CCppConvertContext &operator =(CCppConvertContext const &_Other);
#ifdef DHansoftSDKSupportMoveSemantic
			CCppConvertContext(CCppConvertContext &&_Other);
			CCppConvertContext &operator =(CCppConvertContext &&_Other);
#endif
		public:

			NInternal_C::HPMSdkFunctions *m_pSDKFunctions;
			void *m_pSession;

			CCppConvertContext(NInternal_C::HPMSdkFunctions *_pSDKFunctions, void *_pSession)
			{
				m_pSDKFunctions = _pSDKFunctions;
				m_pSession = _pSession;
			}

			class CLocalData
			{
			public:
				virtual ~CLocalData()
				{
				}
			};

			typedef std::list<CLocalData *>::iterator CNativeDataIter;
			std::list<CLocalData *> m_NativeData;

			~CCppConvertContext()
			{
				for (CNativeDataIter Iter = m_NativeData.begin(); Iter != m_NativeData.end(); ++Iter)
				{
					delete *Iter;
				}
			}

			void InsertLocalData(CLocalData *_pData)
			{
				m_NativeData.push_front(_pData);
			}

		};


		template <typename t_CConvert0, typename t_CConvert1>
		class TCCppConvert
		{
		public:
			static void Convert(t_CConvert0 const &_From, t_CConvert1 &_To, CCppConvertContext &_Context)
			{
				_To = static_cast<t_CConvert1>(_From);
			}
		};

		template <typename t_CConvert0, typename t_CConvert1>
		class TCCppConvertReverse
		{
		public:
			static void Convert(t_CConvert0 const &_From, t_CConvert1 &_To, CCppConvertContext &_Context)
			{
				_To = static_cast<t_CConvert1>(_From);
			}
		};

		template <typename t_CConvert0>
		class TCCppConvertReverse<t_CConvert0, bool>
		{
		public:
			static void Convert(t_CConvert0 const &_From, bool &_To, CCppConvertContext &_Context)
			{
				_To = _From != 0;
			}
		};

		typedef std::vector<bool>::reference CBoolVectorRef;

#if _MSC_VER
		template <typename t_CConvert0>
		class TCCppConvertReverse<t_CConvert0, CBoolVectorRef>
		{
		public:
			static void Convert(t_CConvert0 const &_From, CBoolVectorRef &_To, CCppConvertContext &_Context)
			{
				_To = _From != 0;
			}
		};
#elif defined(DHansoftSDKSupportMoveSemantic)
		template <typename t_CConvert0>
		class TCCppConvertReverse<t_CConvert0, CBoolVectorRef>
		{
		public:
			static void Convert(t_CConvert0 const &_From, CBoolVectorRef &&_To, CCppConvertContext &_Context)
			{
				_To = _From != 0;
			}
        };
#else
		template <typename t_CConvert0>
		class TCCppConvertReverse<t_CConvert0, CBoolVectorRef>
		{
		public:
			static void Convert(t_CConvert0 const &_From, CBoolVectorRef const &_To, CCppConvertContext &_Context)
			{
				const_cast<CBoolVectorRef &>(_To) = _From != 0;
			}
		};
#endif
        
		template <typename t_CConvert0, typename t_CConvert1>
		void CppConvert(t_CConvert0 const &_From, t_CConvert1 &_To, CCppConvertContext &_Context)
		{
			TCCppConvert<t_CConvert0, t_CConvert1>::Convert(_From, _To, _Context);
		}
        
		template <typename t_CConvert0, typename t_CConvert1>
		void CppConvertReverse(t_CConvert0 const & _From, t_CConvert1 &_To, CCppConvertContext &_Context)
		{
			TCCppConvertReverse<t_CConvert0, t_CConvert1>::Convert(_From, _To, _Context);
		}


#if defined(__clang__) || defined(__GNUC__)
#ifdef DHansoftSDKSupportMoveSemantic
        template <typename t_CConvert0>
		void CppConvertReverse(t_CConvert0 const & _From, CBoolVectorRef&& _To, CCppConvertContext &_Context)
		{
			TCCppConvertReverse<t_CConvert0, CBoolVectorRef>::Convert(_From, std::move(_To), _Context);
		}
        
        template <typename t_CConvert0, typename t_CConvert1>
		void CppConvertReverse(t_CConvert0 const & _From, t_CConvert1 &&_To, CCppConvertContext &_Context)
		{
			TCCppConvertReverse<t_CConvert0, t_CConvert1>::Convert(_From, std::move(_To), _Context);
		}
#else
        template <typename t_CConvert0>
		void CppConvertReverse(t_CConvert0 const & _From, CBoolVectorRef const & _To, CCppConvertContext &_Context)
		{
			TCCppConvertReverse<t_CConvert0, CBoolVectorRef>::Convert(_From, _To, _Context);
		}
#endif
#endif
		#define DImplementConvertBasicType(_Type)\
			template <>\
			class TCCppConvert<_Type , NInternal_C::_Type>\
			{\
			public:\
				static void Convert(_Type const &_From, NInternal_C::_Type &_To, CCppConvertContext &_Context)\
				{\
					_To = _From;\
				}\
			};\
			template <>\
			class TCCppConvertReverse<NInternal_C::_Type , _Type>\
			{\
			public:\
				static void Convert(NInternal_C::_Type const &_From, _Type &_To, CCppConvertContext &_Context)\
				{\
					_To = _From;\
				}\
			};

			DImplementConvertBasicType(HPMUInt8);
			DImplementConvertBasicType(HPMUInt16);
			DImplementConvertBasicType(HPMUInt32);
			DImplementConvertBasicType(HPMUInt64);
			DImplementConvertBasicType(HPMInt8);
			DImplementConvertBasicType(HPMInt16);
			DImplementConvertBasicType(HPMInt32);
			DImplementConvertBasicType(HPMInt64);
			DImplementConvertBasicType(HPMFP32);
			DImplementConvertBasicType(HPMFP64);
		#undef DImplementConvertBasicType


		template <>
		class TCCppConvert<HPMString, NInternal_C::HPMString>
		{
		public:
			class CLocal : public CCppConvertContext::CLocalData
			{
			public:
				HPMString m_String;
			};

			static void Convert(HPMString const &_From, NInternal_C::HPMString &_To, CCppConvertContext &_Context)
			{
				CLocal *pLocal = DNew CLocal;
				pLocal->m_String = _From;
				_To.m_pString = pLocal->m_String.c_str();
				_Context.InsertLocalData(pLocal);
			}
		};

		template <>
		class TCCppConvert<HPMUniqueID, NInternal_C::HPMUniqueID>
		{
		public:
			class CLocal : public CCppConvertContext::CLocalData
			{
			public:
			};

			static void Convert(HPMUniqueID const &_From, NInternal_C::HPMUniqueID &_To, CCppConvertContext &_Context)
			{
				_To = _From.m_ID;
			}
		};

		template <>
		class TCCppConvert<HPMString, const NInternal_C::HPMCharType *>
		{
		public:
			class CLocal : public CCppConvertContext::CLocalData
			{
			public:
				HPMString m_String;
			};

			static void Convert(HPMString const &_From, const NInternal_C::HPMCharType * &_To, CCppConvertContext &_Context)
			{
				CLocal *pLocal = DNew CLocal;
				pLocal->m_String = _From;
				_To = pLocal->m_String.c_str();
				_Context.InsertLocalData(pLocal);
			}
		};

		template <>
		class TCCppConvertReverse<NInternal_C::HPMString, HPMString>
		{
		public:

			static void Convert(NInternal_C::HPMString const &_From, HPMString &_To, CCppConvertContext &_Context)
			{
				if (_From.m_pString)
					_To = HPMString(_From.m_pString);
				else
					_To = HPMString();

			}
		};

		template <>
		class TCCppConvertReverse<NInternal_C::HPMUniqueID, HPMUniqueID>
		{
		public:

			static void Convert(NInternal_C::HPMUniqueID const &_From, HPMUniqueID &_To, CCppConvertContext &_Context)
			{
				_To = _From;
			}
		};

		template <>
		class TCCppConvertReverse<const NInternal_C::HPMCharType *, HPMString>
		{
		public:

			static void Convert(const NInternal_C::HPMCharType * const &_From, HPMString &_To, CCppConvertContext &_Context)
			{
				if (_From)
					_To = _From;
				else
					_To = HPMString();
			}
		};

		#include "HPMSdkCpp_AutoConvert.h"
	}


	class HPMSdkVersionControlChangedDataInCallback
	{
	public:
		virtual void ChangedData(const HPMVersionControlCallbackInfo &_NewData, EHPMVersionControlCallbackChanged _ChangedProperties) const = 0;
	};

	class HPMSdkCallbacks
	{
	public:
		
		virtual ~HPMSdkCallbacks() {}
		virtual void On_ProcessError(EHPMError _Error) = 0;

		virtual HPMInt32 On_VersionControlCallback(const HPMVersionControlCallbackInfo &_CallbackInfo, const HPMSdkVersionControlChangedDataInCallback &_ChangeInterface)
		{
			return 0;
		}

#define DImplementEnumListNoRet(_Callback) virtual void On_Callback(const HPMChangeCallbackData_##_Callback &_Data){}		
#define DImplementEnumListRet(_Callback, _Ret) virtual HPMInt32 On_Callback(const HPMChangeCallbackData_##_Callback &_Data){ return _Ret;}

#include "HPMSdkCpp_AutoNotifications.h"

#undef DImplementEnumListNoRet
#undef DImplementEnumListRet
	};

	typedef NInternal_C::HPMNeedSessionProcessCallbackInfo HPMNeedSessionProcessCallbackInfo;

	class HPMSdkSession
	{
	private:
		NInternal_C::HPMSdkFunctions m_SDKFunctions;
		void *m_pSession;
		HPMSdkCallbacks *m_pCallbacks;
		bool m_bBreakRequested;
		bool m_bIsVirtual;
		bool m_bVersionControlRegistered;
		void *m_pSemaphore;
		void *m_pThread;
		
		HPMSdkSession();
		void Destruct();
		void StopThread();
		~HPMSdkSession();

		static NInternal_C::HPMInt32 DHPMSdkCallingConvention Static_ChangeCallback(const NInternal_C::HPMChangeCallbackInfo *_pCallback);
		static NInternal_C::HPMInt32 DHPMSdkCallingConvention Static_VersionControlCallback(void *_pContext, const NInternal_C::HPMVersionControlCallbackInfo *_pCallback, NInternal_C::HPMVersionControlChangeDataCallback _pChangeDataCallback);

		class HPMSdkVersionControlChangedDataInCallbackLocal : public HPMSdkVersionControlChangedDataInCallback
		{
			const NInternal_C::HPMVersionControlCallbackInfo *m_pOriginalCallback;
			NInternal_C::HPMVersionControlChangeDataCallback m_pChangeDataCallback;
			HPMSdkSession *m_pSession;
		public:
			HPMSdkVersionControlChangedDataInCallbackLocal(const NInternal_C::HPMVersionControlCallbackInfo *_pOriginalCallback, NInternal_C::HPMVersionControlChangeDataCallback _pChangeDataCallback, HPMSdkSession *_pSession)
			{
				m_pOriginalCallback = _pOriginalCallback;
				m_pChangeDataCallback = _pChangeDataCallback;
				m_pSession = _pSession;
			}
			virtual void ChangedData(const HPMVersionControlCallbackInfo &_NewData, EHPMVersionControlCallbackChanged _ChangedProperties) const
			{
				NInternal::CCppConvertContext ConvertContext(&m_pSession->m_SDKFunctions, m_pSession->m_pSession);
				NInternal_C::HPMVersionControlCallbackInfo NewData;
				CppConvert(_NewData, NewData, ConvertContext);
				NInternal_C::HPMUInt32 ChangedProperties;
				CppConvert(_ChangedProperties, ChangedProperties, ConvertContext);
				m_pChangeDataCallback(m_pOriginalCallback, &NewData, ChangedProperties);
			}
		};

		NInternal_C::HPMInt32 VersionControlCallback(const NInternal_C::HPMVersionControlCallbackInfo *_pCallback, NInternal_C::HPMVersionControlChangeDataCallback _pChangeDataCallback);

		NInternal_C::HPMInt32 ChangeCallback(const NInternal_C::HPMChangeCallbackInfo *_pCallback);

	public:

        int ThreadProc();
		static HPMSdkSession *SessionOpen(const HPMString &_Address, HPMInt32 _Port, const HPMString &_Database, const HPMString &_ResourceName, const HPMString &_Password, HPMSdkCallbacks *_pInterface, HPMNeedSessionProcessCallbackInfo const *_pNeedProcessCallback, bool _bBlockOnOperations, EHPMSdkDebugMode _SDKDebug, const void *_pClientSDKData, HPMUInt32 _nSessions, const HPMString &_WorkingDirectory, const HPMSystemString &_LibraryDirectory, const HPMCertificateSettings *_pCertificateSettings);
		static HPMSdkSession *SessionOpenVirtual(HPMSdkSession *_pSession);
		static void SessionDestroy(HPMSdkSession *_pSession);
		static HPMString ErrorToStr(EHPMError _Error);

		EHPMError SessionProcess();
		EHPMError SessionStop();
		void VersionControlEnableCallback();
		void VersionControlDisableCallback();
		bool IsVirtual();

		#include "HPMSdkCpp_AutoFunctions.h"
	};


}

#endif //DInc_HPMSdkCpp_H

