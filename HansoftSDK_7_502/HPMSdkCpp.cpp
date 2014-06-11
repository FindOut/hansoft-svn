// This is the main DLL file.

#include "HPMSdkCpp.h"

#ifdef _MSC_VER
#include "windows.h"
#elif defined(__clang__) || defined(__GNUC__)
#include <pthread.h>
#include <sstream>
#ifdef __linux__
#include <stdlib.h>
#include <signal.h>
#endif
#endif

#if __cplusplus >= 201103L || defined(_MSC_VER) && _MSC_VER >= 1700

#else
	atomic_unsigned_int::atomic_unsigned_int(unsigned int _Count)
		: m_Count(_Count)
	{
	}

	#if defined(_MSC_VER) && _MSC_VER < 1700
		#include <intrin.h>

			unsigned int atomic_unsigned_int::operator ++()
			{
				long Ret = _InterlockedIncrement((volatile long *)&m_Count);
				return Ret;
			}

			unsigned int atomic_unsigned_int::operator --()
			{
				long Ret = _InterlockedDecrement((volatile long *)&m_Count);
				return Ret;
			}
		};
	#elif defined(__APPLE__)
		#include <libkern/OSAtomic.h>
    
		unsigned int atomic_unsigned_int::operator ++()
		{
			return OSAtomicIncrement32((volatile int32_t *)&m_Count);
		}
    
		unsigned int atomic_unsigned_int::operator --()
		{
			return OSAtomicDecrement32((volatile int32_t *)&m_Count);
		}

	#elif defined(__GNUC__)
		unsigned int atomic_unsigned_int::operator ++()
		{
			return __sync_add_and_fetch(&m_Count, 1);
		}

		unsigned int atomic_unsigned_int::operator --()
		{
			return __sync_sub_and_fetch(&m_Count, 1);
		}
	#else
		#error "Not implemented"
	#endif

#endif


namespace HPMSemaphore
{
#ifdef _MSC_VER

#define MS_VC_EXCEPTION 0x406D1388

    typedef struct tagTHREADNAME_INFO
    {
        DWORD dwType; // Must be 0x1000.
        LPCSTR szName; // Pointer to name (in user addr space).
        DWORD dwThreadID; // Thread ID (-1=caller thread).
        DWORD dwFlags; // Reserved for future use, must be zero.
    } THREADNAME_INFO;

    void SetThreadName( DWORD dwThreadID, LPCSTR szThreadName)
    {
        THREADNAME_INFO info;
        info.dwType = 0x1000;
        info.szName = szThreadName;
        info.dwThreadID = dwThreadID;
        info.dwFlags = 0;
        
        __try
        {
            RaiseException( MS_VC_EXCEPTION, 0, sizeof(info)/sizeof(ULONG_PTR), (ULONG_PTR*)&info );
        }
        __except(EXCEPTION_CONTINUE_EXECUTION)
        {
        }
	}

    DWORD WINAPI Static_ThreadProc(LPVOID lpParameter)
    {
        SetThreadName(GetCurrentThreadId(), "Hansoft SDK Process Thread");
        return ((HPMSdk::HPMSdkSession *)lpParameter)->ThreadProc();
    }

    void *Thread_Create(HPMSdk::HPMSdkSession *_pSession)
    {
        DWORD ThreadID;
        HANDLE hThread = CreateThread(0, 128*1024, &Static_ThreadProc, _pSession, 0, &ThreadID);
           
        return hThread;
    }


    void *Semaphore_Alloc(unsigned long _InitialCount, unsigned long _MaximumCount)
    {
        return CreateSemaphore(nullptr, _InitialCount, _MaximumCount, nullptr);
    }

    void Semaphore_Free(void *_pSemaphore)
    {
        CloseHandle(_pSemaphore);
    }

    void Semaphore_Increase(void * _pSemaphore, unsigned long _Count)
    {
        ReleaseSemaphore(_pSemaphore, _Count, nullptr);
    }

    void Semaphore_Wait(void * _pSemaphore)
    {
        WaitForSingleObject(_pSemaphore, INFINITE);
    }

	void Thread_Join(void* _pThread)
	{
        WaitForSingleObject(_pThread, INFINITE);
	}

	void Thread_Destroy(void* _pThread)
	{
		if (_pThread != INVALID_HANDLE_VALUE)
			CloseHandle(_pThread);
	}

#elif defined(__clang__) || defined(__GNUC__)

    std::string f_ErrorMessage(std::string const &_Error, int _Errno)
    {
        std::stringstream Ss;
        Ss << _Error << _Errno;
        return Ss.str();
    }


	class CImpSemaphore
    {
    public:
        pthread_mutex_t m_Lock;
        pthread_cond_t m_Condition;
        unsigned long m_Value;
        unsigned long m_Maximum;
            
		pthread_mutex_t *fp_GetMutex()
		{
			return &m_Lock;
		}

        CImpSemaphore(unsigned long _Value, unsigned long _Maximum)
        {
			f_Init();
            m_Value = _Value;
            m_Maximum = _Maximum;
        }
        
        ~CImpSemaphore()
        {
            int ErrNo;
            if ((ErrNo = pthread_cond_destroy(&m_Condition)) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to destroy condition: ", ErrNo));
            if ((ErrNo = pthread_mutex_destroy(fp_GetMutex())) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to destroy mutex: ", ErrNo));
        }

		void f_Init()
		{
            int ErrNo;
			pthread_mutexattr_t Attributes;
			pthread_mutexattr_init(&Attributes);
			pthread_mutexattr_settype(&Attributes, PTHREAD_MUTEX_RECURSIVE);
			pthread_mutexattr_setpshared(&Attributes, PTHREAD_PROCESS_PRIVATE);
            if ((ErrNo = pthread_mutex_init(fp_GetMutex(), &Attributes)) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to create mutex: ", ErrNo));
            if ((ErrNo = pthread_cond_init(&m_Condition, nullptr)) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to create mutex: ", ErrNo));
		}
        
        void f_Signal(unsigned long _Count)
        {
            int ErrNo;
            if ((ErrNo = pthread_mutex_lock(fp_GetMutex())) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to lock mutex: ", ErrNo));
			if (m_Value + _Count > m_Maximum)
				_Count = m_Maximum - m_Value;
			m_Value += _Count;
			if (_Count < 16)
			{
				while (_Count--)
					pthread_cond_signal(&m_Condition);
			}
			else
				pthread_cond_broadcast(&m_Condition);
            if ((ErrNo = pthread_mutex_unlock(fp_GetMutex())) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to unlock mutex: ", ErrNo));
        }
        
        void f_Wait()
        {
            int ErrNo;
            if ((ErrNo = pthread_mutex_lock(fp_GetMutex())) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to lock mutex: ", ErrNo));
            while (m_Value <= 0)
            {
                if ((ErrNo = pthread_cond_wait(&m_Condition, fp_GetMutex())) != 0)
                {
                    if ((ErrNo = pthread_mutex_unlock(fp_GetMutex())) != 0)
                        throw std::runtime_error(f_ErrorMessage("Failed to unlock mutex after wait for condition failed: ", ErrNo));
                    throw std::runtime_error(f_ErrorMessage("Failed to wait for condition: ", ErrNo));
                }
            }
            --m_Value;
            if ((ErrNo = pthread_mutex_unlock(fp_GetMutex())) != 0)
                throw std::runtime_error(f_ErrorMessage("Failed to unlock mutex: ", ErrNo));
        }
        
    };

    void *Semaphore_Alloc(unsigned long _InitialCount, unsigned long _MaximumCount)
    {
        CImpSemaphore *pSemaphore = new(malloc(sizeof(CImpSemaphore))) CImpSemaphore(_InitialCount, _MaximumCount);
        return pSemaphore;
    }

    void Semaphore_Free(void *_pSemaphore)
    {
        CImpSemaphore *pSemaphore = (CImpSemaphore *)_pSemaphore;
        pSemaphore->~CImpSemaphore();
        free(pSemaphore);
    }

    void Semaphore_Increase(void * _pSemaphore, unsigned long _Count)
    {
        CImpSemaphore *pSemaphore = (CImpSemaphore *)_pSemaphore;
        pSemaphore->f_Signal(_Count);
    }

    void Semaphore_Wait(void * _pSemaphore)
    {
        CImpSemaphore *pSemaphore = (CImpSemaphore *)_pSemaphore;
        pSemaphore->f_Wait();
    }

    void *Static_ThreadProc(void *_pParams)
    {
        signal(SIGPIPE,SIG_IGN);
        
        HPMSdk::HPMSdkSession *pSession = (HPMSdk::HPMSdkSession *)_pParams;
        
        
        int ReturnCode = pSession->ThreadProc();
        
        return (void *)(unsigned long)ReturnCode;
        
    }


    void *Thread_Create(HPMSdk::HPMSdkSession *_pSession)
    {
        pthread_t ThreadID;
        
        pthread_create(&ThreadID, NULL, &Static_ThreadProc, _pSession);
        
        return (void *)ThreadID;
    }

	void Thread_Join(void* _pThread)
	{
		pthread_join((pthread_t)_pThread,nullptr);
	}

	void Thread_Destroy(void* _pThread)
	{
	}

#endif
}

namespace HPMSdk
{

	HPMString HPMSdkException::GetAsString() const
	{
		if (m_ExtendedError.empty())
			return HPMSdkSession::ErrorToStr(m_Error);
		else
		{
			return HPMString(HPMSdkSession::ErrorToStr(m_Error)) + hpm_str(" (") + m_ExtendedError + hpm_str(")");
		}
	}

	HPMSdkSession::HPMSdkSession()
	{
		m_pThread = 0;
		m_pSession = 0;
		m_pCallbacks = 0;
		m_pSemaphore = HPMSemaphore::Semaphore_Alloc(0, 1);
		m_bBreakRequested = false;
		m_bVersionControlRegistered = false;
		m_SDKFunctions.m_hDll = 0;
		m_bIsVirtual = false;
	}

	void HPMSdkSession::Destruct()
	{
		if (IsVirtual())
		{
			if (m_pSemaphore)
			{
				HPMSemaphore::Semaphore_Free(m_pSemaphore);
				m_pSemaphore = 0;
			}

			if (m_pSession)
			{
				m_SDKFunctions.SessionClose(m_pSession);
			}
		}
		else
		{
			if (m_bVersionControlRegistered)
			{
				m_bVersionControlRegistered = false;
				m_SDKFunctions.VersionControlUnregisterCallback(m_pSession, &Static_VersionControlCallback, this);
			}

			StopThread();

			if (m_pSession)
			{
				m_SDKFunctions.UnregisterChangeCallback(m_pSession, &Static_ChangeCallback, this);
				m_SDKFunctions.SessionClose(m_pSession);
			}
			if (m_pSemaphore)
			{
				HPMSemaphore::Semaphore_Free(m_pSemaphore);
				m_pSemaphore = 0;
			}
			HPMDestroy(&m_SDKFunctions);
		}
	}

	void HPMSdkSession::StopThread()
	{
		if (m_pThread != 0)
		{
			m_bBreakRequested = true;
			SessionStop();
            HPMSemaphore::Semaphore_Increase(m_pSemaphore, 1);

			HPMSemaphore::Thread_Join(m_pThread);
			HPMSemaphore::Thread_Destroy(m_pThread);
			
			m_pThread = 0;
			m_bBreakRequested = false;
			SessionProcess();
		}
	}

	HPMSdkSession::~HPMSdkSession()
	{
		Destruct();
	}


	bool HPMSdkSession::IsVirtual()
	{
		return m_bIsVirtual;
	}

	NInternal_C::HPMInt32 DHPMSdkCallingConvention HPMSdkSession::Static_ChangeCallback(const NInternal_C::HPMChangeCallbackInfo *_pCallback)
	{
		HPMSdkSession *pSession = (HPMSdkSession *)_pCallback->m_pContext;
		return pSession->ChangeCallback(_pCallback);
	}

	NInternal_C::HPMInt32 DHPMSdkCallingConvention HPMSdkSession::Static_VersionControlCallback(void *_pContext, const NInternal_C::HPMVersionControlCallbackInfo *_pCallback, NInternal_C::HPMVersionControlChangeDataCallback _pChangeDataCallback)
	{
		HPMSdkSession *pSession = (HPMSdkSession *)_pContext;
		return pSession->VersionControlCallback(_pCallback, _pChangeDataCallback);
	}

	NInternal_C::HPMInt32 HPMSdkSession::VersionControlCallback(const NInternal_C::HPMVersionControlCallbackInfo *_pCallback, NInternal_C::HPMVersionControlChangeDataCallback _pChangeDataCallback)
	{
		NInternal::CCppConvertContext ConvertContext(&m_SDKFunctions, m_pSession);
		HPMVersionControlCallbackInfo CppData;
		NInternal::CppConvertReverse(*_pCallback, CppData, ConvertContext);

		HPMSdkVersionControlChangedDataInCallbackLocal Callback(_pCallback, _pChangeDataCallback, this);

		if (m_pCallbacks)
		{
			NInternal_C::HPMInt32 Ret = m_pCallbacks->On_VersionControlCallback(CppData, Callback);
			return Ret;
		}
		else
			return 0;
	}

	NInternal_C::HPMInt32 HPMSdkSession::ChangeCallback(const NInternal_C::HPMChangeCallbackInfo *_pCallback)
	{
		HPMInt32 Operation = _pCallback->m_Operation;
		switch (Operation)
		{

#define DImplementEnumListNoRet(_Callback) \
		case EHPMChangeCallbackOperation_##_Callback:\
			{\
			const NInternal_C::HPMChangeCallbackData_##_Callback *pData = (const NInternal_C::HPMChangeCallbackData_##_Callback *)_pCallback->m_pCallbackData;\
				NInternal::CCppConvertContext ConvertContext(&m_SDKFunctions, m_pSession);\
				HPMChangeCallbackData_##_Callback CppData;\
				NInternal::CppConvertReverse(*pData, CppData, ConvertContext);\
				if (m_pCallbacks)\
					m_pCallbacks->On_Callback(CppData);\
			}\
			break;
#define DImplementEnumListRet(_Callback, _Ret) \
		case EHPMChangeCallbackOperation_##_Callback:\
			{\
				const NInternal_C::HPMChangeCallbackData_##_Callback *pData = (const NInternal_C::HPMChangeCallbackData_##_Callback *)_pCallback->m_pCallbackData;\
				NInternal::CCppConvertContext ConvertContext(&m_SDKFunctions, m_pSession);\
				HPMChangeCallbackData_##_Callback CppData;\
				NInternal::CppConvertReverse(*pData, CppData, ConvertContext);\
				if (m_pCallbacks)\
					return m_pCallbacks->On_Callback(CppData);\
				return _Ret;\
			}\
			break;

#include "HPMSdkCpp_AutoNotifications.h"

#undef DImplementEnumListNoRet
#undef DImplementEnumListRet

		}
		return 1;
	}

	int HPMSdkSession::ThreadProc()
	{
		while (!m_bBreakRequested)
		{
			NInternal_C::HPMError Error = m_SDKFunctions.SessionProcess(m_pSession);
			if (Error != 0)
			{
				if (m_pCallbacks)
					m_pCallbacks->On_ProcessError(EHPMError(Error));
			}
			HPMSemaphore::Semaphore_Wait(m_pSemaphore);
		}
		return 0;
	}

	EHPMError HPMSdkSession::SessionStop()
	{
		NInternal_C::HPMError Error = m_SDKFunctions.SessionStop(m_pSession);
		return EHPMError(Error);
	}

	EHPMError HPMSdkSession::SessionProcess()
	{
		if (m_pThread != 0)
		{
			throw HPMSdkCppException("You cannot manually run the process method when you didn't specify semaphore when you opened the session. The process method now runs on a thread.");
		}
		NInternal_C::HPMError Error = m_SDKFunctions.SessionProcess(m_pSession);
		return EHPMError(Error);
	}

	void HPMSdkSession::VersionControlEnableCallback()
	{
		if (!m_bVersionControlRegistered)
		{
			HPMUInt32 Error = m_SDKFunctions.VersionControlRegisterCallback(m_pSession, &Static_VersionControlCallback, this);
			if (Error)
				ThrowSDKException(EHPMError(Error));
			m_bVersionControlRegistered = true;
		}
	}

	void HPMSdkSession::VersionControlDisableCallback()
	{
		if (m_bVersionControlRegistered)
		{
			HPMUInt32 Error = m_SDKFunctions.VersionControlUnregisterCallback(m_pSession, &Static_VersionControlCallback, this);
			if (Error)
				ThrowSDKException(EHPMError(Error));
			m_bVersionControlRegistered = false;
		}
	}

	
	
	void DHPMSdkCallingConvention NeedSessionProcessCallback(void *_pSemaphore)
	{
		HPMSemaphore::Semaphore_Increase(_pSemaphore, 1);
	}


	HPMSdkSession *HPMSdkSession::SessionOpen(const HPMString &_Address, HPMInt32 _Port, const HPMString &_Database, const HPMString &_ResourceName, const HPMString &_Password, HPMSdkCallbacks *_pInterface, HPMNeedSessionProcessCallbackInfo const *_pNeedProcessCallback, bool _bBlockOnOperations, EHPMSdkDebugMode _SDKDebug, const void *_pClientSDKData, HPMUInt32 _nSessions, const HPMString &_WorkingDirectory, const HPMSystemString &_LibraryDirectory, const HPMCertificateSettings *_pCertificateSettings)
	{
		HPMSdkSession *pSession = DNew HPMSdkSession;
		pSession->m_pCallbacks = _pInterface;
		NInternal_C::HPMError Error = NInternal_C::HPMInit(&pSession->m_SDKFunctions, (const NInternal_C::HPMClientSDKData *)_pClientSDKData, _LibraryDirectory.c_str());

		if (Error != EHPMError_NoError)
		{
			delete pSession;
			pSession = 0;
			ThrowSDKException(EHPMError(Error));
		}

		HPMNeedSessionProcessCallbackInfo ProcessCallbackInfo;
		
		bool bDoThread = false;
		if (!_pNeedProcessCallback)
		{
			bDoThread = true;

			ProcessCallbackInfo.m_pContext = pSession->m_pSemaphore;
			ProcessCallbackInfo.m_pCallback = &NeedSessionProcessCallback;
			_pNeedProcessCallback = &ProcessCallbackInfo;
		}

		NInternal_C::HPMCertificateSettings SSLSettings;
		NInternal_C::HPMCertificateSettings *pSSLSettings = nullptr;
		void *pDummySession = nullptr;
		NInternal::CCppConvertContext CppData(&pSession->m_SDKFunctions, pDummySession);
		if (_pCertificateSettings)
		{
			NInternal::CppConvert(*_pCertificateSettings, SSLSettings, CppData);
			pSSLSettings = &SSLSettings;
		}

		const NInternal_C::HPMChar *pExtendedErrorMessage = nullptr;
		pSession->m_pSession = pSession->m_SDKFunctions.SessionOpen(&Error, _Address.c_str(), _Port, _Database.c_str(), _ResourceName.c_str(), _Password.c_str(), _bBlockOnOperations, _pNeedProcessCallback, EHPMSDK_Version, _SDKDebug, _nSessions, _WorkingDirectory.c_str(), pSSLSettings, &pExtendedErrorMessage);

		if (Error != EHPMError_NoError)
		{
			HPMString ExtendedErrorMessage;
			if (pExtendedErrorMessage)
			{
				ExtendedErrorMessage = HPMString(pExtendedErrorMessage);
				pSession->m_SDKFunctions.MemoryFree((void *)pExtendedErrorMessage);
			}
			delete pSession;
			pSession = 0;
			
			ThrowSDKException(EHPMError(Error), ExtendedErrorMessage);
		}

		if (pExtendedErrorMessage)
			pSession->m_SDKFunctions.MemoryFree((void *)pExtendedErrorMessage);

		pSession->m_SDKFunctions.RegisterChangeCallback(pSession->m_pSession, &Static_ChangeCallback, pSession);
		if (bDoThread)
		{
			pSession->m_pThread = HPMSemaphore::Thread_Create(pSession);
		}

		return pSession;
	}
	void HPMSdkSession::SessionDestroy(HPMSdkSession *_pSession)
	{
		if (_pSession != 0)
		{
			if (!_pSession->IsVirtual())
				_pSession->StopThread();
			delete _pSession;
		}
	}

	HPMSdkSession *HPMSdkSession::SessionOpenVirtual(HPMSdkSession *_pSession)
	{
		HPMSdkSession *pSession = DNew HPMSdkSession;
		pSession->m_bIsVirtual = true;

		pSession->m_pSession = _pSession->m_SDKFunctions.SessionOpenVirtual(_pSession->m_pSession);
		pSession->m_SDKFunctions = _pSession->m_SDKFunctions;

		if (!pSession->m_pSession)
		{
			delete pSession;
			pSession = 0;
			ThrowSDKException(EHPMError(EHPMError_SessionPoolSessionNotAvailable));
		}
		return pSession;
	}

	HPMString HPMSdkSession::ErrorToStr(EHPMError _Error)
	{
		const char *pError = NInternal_C::HPMErrorToStr((NInternal_C::HPMError)_Error);
		std::string Error = std::string(pError);
		return HPMString(Error.begin(), Error.end());
	}

	namespace NInternal_C
	{
		extern "C"
		{
			#include "HPMSdk.c"
		}
	}

}

