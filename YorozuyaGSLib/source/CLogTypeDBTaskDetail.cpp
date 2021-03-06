#include <CLogTypeDBTaskDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLogTypeDBTaskctor_CLogTypeDBTask2_ptr CLogTypeDBTaskctor_CLogTypeDBTask2_next(nullptr);
        Info::CLogTypeDBTaskctor_CLogTypeDBTask2_clbk CLogTypeDBTaskctor_CLogTypeDBTask2_user(nullptr);
        
        Info::CLogTypeDBTaskClear4_ptr CLogTypeDBTaskClear4_next(nullptr);
        Info::CLogTypeDBTaskClear4_clbk CLogTypeDBTaskClear4_user(nullptr);
        
        Info::CLogTypeDBTaskGetDBRet6_ptr CLogTypeDBTaskGetDBRet6_next(nullptr);
        Info::CLogTypeDBTaskGetDBRet6_clbk CLogTypeDBTaskGetDBRet6_user(nullptr);
        
        Info::CLogTypeDBTaskGetData8_ptr CLogTypeDBTaskGetData8_next(nullptr);
        Info::CLogTypeDBTaskGetData8_clbk CLogTypeDBTaskGetData8_user(nullptr);
        
        Info::CLogTypeDBTaskGetInx10_ptr CLogTypeDBTaskGetInx10_next(nullptr);
        Info::CLogTypeDBTaskGetInx10_clbk CLogTypeDBTaskGetInx10_user(nullptr);
        
        Info::CLogTypeDBTaskGetProcRet12_ptr CLogTypeDBTaskGetProcRet12_next(nullptr);
        Info::CLogTypeDBTaskGetProcRet12_clbk CLogTypeDBTaskGetProcRet12_user(nullptr);
        
        Info::CLogTypeDBTaskGetQueryType14_ptr CLogTypeDBTaskGetQueryType14_next(nullptr);
        Info::CLogTypeDBTaskGetQueryType14_clbk CLogTypeDBTaskGetQueryType14_user(nullptr);
        
        Info::CLogTypeDBTaskInit16_ptr CLogTypeDBTaskInit16_next(nullptr);
        Info::CLogTypeDBTaskInit16_clbk CLogTypeDBTaskInit16_user(nullptr);
        
        Info::CLogTypeDBTaskSet18_ptr CLogTypeDBTaskSet18_next(nullptr);
        Info::CLogTypeDBTaskSet18_clbk CLogTypeDBTaskSet18_user(nullptr);
        
        Info::CLogTypeDBTaskSetComplete20_ptr CLogTypeDBTaskSetComplete20_next(nullptr);
        Info::CLogTypeDBTaskSetComplete20_clbk CLogTypeDBTaskSetComplete20_user(nullptr);
        
        Info::CLogTypeDBTaskSetEmpty22_ptr CLogTypeDBTaskSetEmpty22_next(nullptr);
        Info::CLogTypeDBTaskSetEmpty22_clbk CLogTypeDBTaskSetEmpty22_user(nullptr);
        
        Info::CLogTypeDBTaskSetRet24_ptr CLogTypeDBTaskSetRet24_next(nullptr);
        Info::CLogTypeDBTaskSetRet24_clbk CLogTypeDBTaskSetRet24_user(nullptr);
        
        Info::CLogTypeDBTaskSetUse26_ptr CLogTypeDBTaskSetUse26_next(nullptr);
        Info::CLogTypeDBTaskSetUse26_clbk CLogTypeDBTaskSetUse26_user(nullptr);
        
        
        Info::CLogTypeDBTaskdtor_CLogTypeDBTask30_ptr CLogTypeDBTaskdtor_CLogTypeDBTask30_next(nullptr);
        Info::CLogTypeDBTaskdtor_CLogTypeDBTask30_clbk CLogTypeDBTaskdtor_CLogTypeDBTask30_user(nullptr);
        
        
        void CLogTypeDBTaskctor_CLogTypeDBTask2_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskctor_CLogTypeDBTask2_user(_this, CLogTypeDBTaskctor_CLogTypeDBTask2_next);
        };
        void CLogTypeDBTaskClear4_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskClear4_user(_this, CLogTypeDBTaskClear4_next);
        };
        char CLogTypeDBTaskGetDBRet6_wrapper(struct CLogTypeDBTask* _this)
        {
           return CLogTypeDBTaskGetDBRet6_user(_this, CLogTypeDBTaskGetDBRet6_next);
        };
        char* CLogTypeDBTaskGetData8_wrapper(struct CLogTypeDBTask* _this)
        {
           return CLogTypeDBTaskGetData8_user(_this, CLogTypeDBTaskGetData8_next);
        };
        unsigned int CLogTypeDBTaskGetInx10_wrapper(struct CLogTypeDBTask* _this)
        {
           return CLogTypeDBTaskGetInx10_user(_this, CLogTypeDBTaskGetInx10_next);
        };
        char CLogTypeDBTaskGetProcRet12_wrapper(struct CLogTypeDBTask* _this)
        {
           return CLogTypeDBTaskGetProcRet12_user(_this, CLogTypeDBTaskGetProcRet12_next);
        };
        int CLogTypeDBTaskGetQueryType14_wrapper(struct CLogTypeDBTask* _this)
        {
           return CLogTypeDBTaskGetQueryType14_user(_this, CLogTypeDBTaskGetQueryType14_next);
        };
        bool CLogTypeDBTaskInit16_wrapper(struct CLogTypeDBTask* _this, unsigned int dwInx, unsigned int uiSize)
        {
           return CLogTypeDBTaskInit16_user(_this, dwInx, uiSize, CLogTypeDBTaskInit16_next);
        };
        bool CLogTypeDBTaskSet18_wrapper(struct CLogTypeDBTask* _this, char byQueryType, char* pcData, uint16_t wSize)
        {
           return CLogTypeDBTaskSet18_user(_this, byQueryType, pcData, wSize, CLogTypeDBTaskSet18_next);
        };
        void CLogTypeDBTaskSetComplete20_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskSetComplete20_user(_this, CLogTypeDBTaskSetComplete20_next);
        };
        void CLogTypeDBTaskSetEmpty22_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskSetEmpty22_user(_this, CLogTypeDBTaskSetEmpty22_next);
        };
        void CLogTypeDBTaskSetRet24_wrapper(struct CLogTypeDBTask* _this, char byDBRet, char byProcRet)
        {
           CLogTypeDBTaskSetRet24_user(_this, byDBRet, byProcRet, CLogTypeDBTaskSetRet24_next);
        };
        void CLogTypeDBTaskSetUse26_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskSetUse26_user(_this, CLogTypeDBTaskSetUse26_next);
        };
        
        void CLogTypeDBTaskdtor_CLogTypeDBTask30_wrapper(struct CLogTypeDBTask* _this)
        {
           CLogTypeDBTaskdtor_CLogTypeDBTask30_user(_this, CLogTypeDBTaskdtor_CLogTypeDBTask30_next);
        };
        
        ::std::array<hook_record, 14> CLogTypeDBTask_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c1ca0L,
                (LPVOID *)&CLogTypeDBTaskctor_CLogTypeDBTask2_user,
                (LPVOID *)&CLogTypeDBTaskctor_CLogTypeDBTask2_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskctor_CLogTypeDBTask2_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::ctor_CLogTypeDBTask)
            },
            _hook_record {
                (LPVOID)0x1402c3fc0L,
                (LPVOID *)&CLogTypeDBTaskClear4_user,
                (LPVOID *)&CLogTypeDBTaskClear4_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::Clear)
            },
            _hook_record {
                (LPVOID)0x1402c42b0L,
                (LPVOID *)&CLogTypeDBTaskGetDBRet6_user,
                (LPVOID *)&CLogTypeDBTaskGetDBRet6_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskGetDBRet6_wrapper),
                (LPVOID)cast_pointer_function((char(CLogTypeDBTask::*)())&CLogTypeDBTask::GetDBRet)
            },
            _hook_record {
                (LPVOID)0x1402c4250L,
                (LPVOID *)&CLogTypeDBTaskGetData8_user,
                (LPVOID *)&CLogTypeDBTaskGetData8_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskGetData8_wrapper),
                (LPVOID)cast_pointer_function((char*(CLogTypeDBTask::*)())&CLogTypeDBTask::GetData)
            },
            _hook_record {
                (LPVOID)0x1402c4010L,
                (LPVOID *)&CLogTypeDBTaskGetInx10_user,
                (LPVOID *)&CLogTypeDBTaskGetInx10_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskGetInx10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CLogTypeDBTask::*)())&CLogTypeDBTask::GetInx)
            },
            _hook_record {
                (LPVOID)0x1402c42d0L,
                (LPVOID *)&CLogTypeDBTaskGetProcRet12_user,
                (LPVOID *)&CLogTypeDBTaskGetProcRet12_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskGetProcRet12_wrapper),
                (LPVOID)cast_pointer_function((char(CLogTypeDBTask::*)())&CLogTypeDBTask::GetProcRet)
            },
            _hook_record {
                (LPVOID)0x1402c4030L,
                (LPVOID *)&CLogTypeDBTaskGetQueryType14_user,
                (LPVOID *)&CLogTypeDBTaskGetQueryType14_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskGetQueryType14_wrapper),
                (LPVOID)cast_pointer_function((int(CLogTypeDBTask::*)())&CLogTypeDBTask::GetQueryType)
            },
            _hook_record {
                (LPVOID)0x1402c1d80L,
                (LPVOID *)&CLogTypeDBTaskInit16_user,
                (LPVOID *)&CLogTypeDBTaskInit16_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTask::*)(unsigned int, unsigned int))&CLogTypeDBTask::Init)
            },
            _hook_record {
                (LPVOID)0x1402c1e10L,
                (LPVOID *)&CLogTypeDBTaskSet18_user,
                (LPVOID *)&CLogTypeDBTaskSet18_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskSet18_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTask::*)(char, char*, uint16_t))&CLogTypeDBTask::Set)
            },
            _hook_record {
                (LPVOID)0x1402c4070L,
                (LPVOID *)&CLogTypeDBTaskSetComplete20_user,
                (LPVOID *)&CLogTypeDBTaskSetComplete20_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskSetComplete20_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::SetComplete)
            },
            _hook_record {
                (LPVOID)0x1402c4090L,
                (LPVOID *)&CLogTypeDBTaskSetEmpty22_user,
                (LPVOID *)&CLogTypeDBTaskSetEmpty22_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskSetEmpty22_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::SetEmpty)
            },
            _hook_record {
                (LPVOID)0x1402c4270L,
                (LPVOID *)&CLogTypeDBTaskSetRet24_user,
                (LPVOID *)&CLogTypeDBTaskSetRet24_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskSetRet24_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)(char, char))&CLogTypeDBTask::SetRet)
            },
            _hook_record {
                (LPVOID)0x1402c4050L,
                (LPVOID *)&CLogTypeDBTaskSetUse26_user,
                (LPVOID *)&CLogTypeDBTaskSetUse26_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskSetUse26_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::SetUse)
            },
            _hook_record {
                (LPVOID)0x1402c1d00L,
                (LPVOID *)&CLogTypeDBTaskdtor_CLogTypeDBTask30_user,
                (LPVOID *)&CLogTypeDBTaskdtor_CLogTypeDBTask30_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskdtor_CLogTypeDBTask30_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTask::*)())&CLogTypeDBTask::dtor_CLogTypeDBTask)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
