#include <CRaceBuffManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRaceBuffManagerctor_CRaceBuffManager2_ptr CRaceBuffManagerctor_CRaceBuffManager2_next(nullptr);
        Info::CRaceBuffManagerctor_CRaceBuffManager2_clbk CRaceBuffManagerctor_CRaceBuffManager2_user(nullptr);
        
        Info::CRaceBuffManagerCancelPlayerRaceBuff4_ptr CRaceBuffManagerCancelPlayerRaceBuff4_next(nullptr);
        Info::CRaceBuffManagerCancelPlayerRaceBuff4_clbk CRaceBuffManagerCancelPlayerRaceBuff4_user(nullptr);
        
        Info::CRaceBuffManagerCreateComplete6_ptr CRaceBuffManagerCreateComplete6_next(nullptr);
        Info::CRaceBuffManagerCreateComplete6_clbk CRaceBuffManagerCreateComplete6_user(nullptr);
        
        Info::CRaceBuffManagerDestroy8_ptr CRaceBuffManagerDestroy8_next(nullptr);
        Info::CRaceBuffManagerDestroy8_clbk CRaceBuffManagerDestroy8_user(nullptr);
        
        Info::CRaceBuffManagerGetRaceBuffLevel10_ptr CRaceBuffManagerGetRaceBuffLevel10_next(nullptr);
        Info::CRaceBuffManagerGetRaceBuffLevel10_clbk CRaceBuffManagerGetRaceBuffLevel10_user(nullptr);
        
        Info::CRaceBuffManagerInit12_ptr CRaceBuffManagerInit12_next(nullptr);
        Info::CRaceBuffManagerInit12_clbk CRaceBuffManagerInit12_user(nullptr);
        
        Info::CRaceBuffManagerInstance14_ptr CRaceBuffManagerInstance14_next(nullptr);
        Info::CRaceBuffManagerInstance14_clbk CRaceBuffManagerInstance14_user(nullptr);
        
        Info::CRaceBuffManagerLoop16_ptr CRaceBuffManagerLoop16_next(nullptr);
        Info::CRaceBuffManagerLoop16_clbk CRaceBuffManagerLoop16_user(nullptr);
        
        Info::CRaceBuffManagerRequestHolyQuestRaceBuff18_ptr CRaceBuffManagerRequestHolyQuestRaceBuff18_next(nullptr);
        Info::CRaceBuffManagerRequestHolyQuestRaceBuff18_clbk CRaceBuffManagerRequestHolyQuestRaceBuff18_user(nullptr);
        
        
        Info::CRaceBuffManagerdtor_CRaceBuffManager22_ptr CRaceBuffManagerdtor_CRaceBuffManager22_next(nullptr);
        Info::CRaceBuffManagerdtor_CRaceBuffManager22_clbk CRaceBuffManagerdtor_CRaceBuffManager22_user(nullptr);
        
        
        void CRaceBuffManagerctor_CRaceBuffManager2_wrapper(struct CRaceBuffManager* _this)
        {
           CRaceBuffManagerctor_CRaceBuffManager2_user(_this, CRaceBuffManagerctor_CRaceBuffManager2_next);
        };
        int CRaceBuffManagerCancelPlayerRaceBuff4_wrapper(struct CRaceBuffManager* _this, struct CPlayer* pkPlayer, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE eReleaseType, unsigned int uiContinueCnt)
        {
           return CRaceBuffManagerCancelPlayerRaceBuff4_user(_this, pkPlayer, eReleaseType, uiContinueCnt, CRaceBuffManagerCancelPlayerRaceBuff4_next);
        };
        bool CRaceBuffManagerCreateComplete6_wrapper(struct CRaceBuffManager* _this, struct CPlayer* pkPlayer)
        {
           return CRaceBuffManagerCreateComplete6_user(_this, pkPlayer, CRaceBuffManagerCreateComplete6_next);
        };
        void CRaceBuffManagerDestroy8_wrapper()
        {
           CRaceBuffManagerDestroy8_user(CRaceBuffManagerDestroy8_next);
        };
        int CRaceBuffManagerGetRaceBuffLevel10_wrapper(struct CRaceBuffManager* _this, struct CPlayer* pOne)
        {
           return CRaceBuffManagerGetRaceBuffLevel10_user(_this, pOne, CRaceBuffManagerGetRaceBuffLevel10_next);
        };
        bool CRaceBuffManagerInit12_wrapper(struct CRaceBuffManager* _this)
        {
           return CRaceBuffManagerInit12_user(_this, CRaceBuffManagerInit12_next);
        };
        struct CRaceBuffManager* CRaceBuffManagerInstance14_wrapper()
        {
           return CRaceBuffManagerInstance14_user(CRaceBuffManagerInstance14_next);
        };
        void CRaceBuffManagerLoop16_wrapper(struct CRaceBuffManager* _this)
        {
           CRaceBuffManagerLoop16_user(_this, CRaceBuffManagerLoop16_next);
        };
        bool CRaceBuffManagerRequestHolyQuestRaceBuff18_wrapper(struct CRaceBuffManager* _this, int iType)
        {
           return CRaceBuffManagerRequestHolyQuestRaceBuff18_user(_this, iType, CRaceBuffManagerRequestHolyQuestRaceBuff18_next);
        };
        
        void CRaceBuffManagerdtor_CRaceBuffManager22_wrapper(struct CRaceBuffManager* _this)
        {
           CRaceBuffManagerdtor_CRaceBuffManager22_user(_this, CRaceBuffManagerdtor_CRaceBuffManager22_next);
        };
        
        ::std::array<hook_record, 10> CRaceBuffManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b7e30L,
                (LPVOID *)&CRaceBuffManagerctor_CRaceBuffManager2_user,
                (LPVOID *)&CRaceBuffManagerctor_CRaceBuffManager2_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerctor_CRaceBuffManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffManager::*)())&CRaceBuffManager::ctor_CRaceBuffManager)
            },
            _hook_record {
                (LPVOID)0x14017ffe0L,
                (LPVOID *)&CRaceBuffManagerCancelPlayerRaceBuff4_user,
                (LPVOID *)&CRaceBuffManagerCancelPlayerRaceBuff4_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerCancelPlayerRaceBuff4_wrapper),
                (LPVOID)cast_pointer_function((int(CRaceBuffManager::*)(struct CPlayer*, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE, unsigned int))&CRaceBuffManager::CancelPlayerRaceBuff)
            },
            _hook_record {
                (LPVOID)0x140079e70L,
                (LPVOID *)&CRaceBuffManagerCreateComplete6_user,
                (LPVOID *)&CRaceBuffManagerCreateComplete6_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerCreateComplete6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffManager::*)(struct CPlayer*))&CRaceBuffManager::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403b6a70L,
                (LPVOID *)&CRaceBuffManagerDestroy8_user,
                (LPVOID *)&CRaceBuffManagerDestroy8_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerDestroy8_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CRaceBuffManager::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403a1080L,
                (LPVOID *)&CRaceBuffManagerGetRaceBuffLevel10_user,
                (LPVOID *)&CRaceBuffManagerGetRaceBuffLevel10_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerGetRaceBuffLevel10_wrapper),
                (LPVOID)cast_pointer_function((int(CRaceBuffManager::*)(struct CPlayer*))&CRaceBuffManager::GetRaceBuffLevel)
            },
            _hook_record {
                (LPVOID)0x1403b6ae0L,
                (LPVOID *)&CRaceBuffManagerInit12_user,
                (LPVOID *)&CRaceBuffManagerInit12_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffManager::*)())&CRaceBuffManager::Init)
            },
            _hook_record {
                (LPVOID)0x1403b69b0L,
                (LPVOID *)&CRaceBuffManagerInstance14_user,
                (LPVOID *)&CRaceBuffManagerInstance14_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerInstance14_wrapper),
                (LPVOID)cast_pointer_function((struct CRaceBuffManager*(*)())&CRaceBuffManager::Instance)
            },
            _hook_record {
                (LPVOID)0x1403b6b30L,
                (LPVOID *)&CRaceBuffManagerLoop16_user,
                (LPVOID *)&CRaceBuffManagerLoop16_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffManager::*)())&CRaceBuffManager::Loop)
            },
            _hook_record {
                (LPVOID)0x1402846b0L,
                (LPVOID *)&CRaceBuffManagerRequestHolyQuestRaceBuff18_user,
                (LPVOID *)&CRaceBuffManagerRequestHolyQuestRaceBuff18_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerRequestHolyQuestRaceBuff18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffManager::*)(int))&CRaceBuffManager::RequestHolyQuestRaceBuff)
            },
            _hook_record {
                (LPVOID)0x1403b7ef0L,
                (LPVOID *)&CRaceBuffManagerdtor_CRaceBuffManager22_user,
                (LPVOID *)&CRaceBuffManagerdtor_CRaceBuffManager22_next,
                (LPVOID)cast_pointer_function(CRaceBuffManagerdtor_CRaceBuffManager22_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffManager::*)())&CRaceBuffManager::dtor_CRaceBuffManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
