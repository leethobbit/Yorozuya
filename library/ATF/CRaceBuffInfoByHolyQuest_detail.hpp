// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRaceBuffInfoByHolyQuest_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CRaceBuffInfoByHolyQuestApply2_ptr CRaceBuffInfoByHolyQuestApply2_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestApply2_clbk CRaceBuffInfoByHolyQuestApply2_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestApplyEffect4_ptr CRaceBuffInfoByHolyQuestApplyEffect4_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestApplyEffect4_clbk CRaceBuffInfoByHolyQuestApplyEffect4_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_ptr CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_clbk CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestCreate8_ptr CRaceBuffInfoByHolyQuestCreate8_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestCreate8_clbk CRaceBuffInfoByHolyQuestCreate8_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestCreateComplete10_ptr CRaceBuffInfoByHolyQuestCreateComplete10_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestCreateComplete10_clbk CRaceBuffInfoByHolyQuestCreateComplete10_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_ptr CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_clbk CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_ptr CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_clbk CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_ptr CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_clbk CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifySetBuff18_ptr CRaceBuffInfoByHolyQuestNotifySetBuff18_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestNotifySetBuff18_clbk CRaceBuffInfoByHolyQuestNotifySetBuff18_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestRelease20_ptr CRaceBuffInfoByHolyQuestRelease20_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestRelease20_clbk CRaceBuffInfoByHolyQuestRelease20_user(nullptr);
        static info::CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_ptr CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next(nullptr);
        static info::CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_clbk CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user(nullptr);
        
        static bool CRaceBuffInfoByHolyQuestApply2_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestApply2_user(_this, pkDest, CRaceBuffInfoByHolyQuestApply2_next);
        };
        static bool CRaceBuffInfoByHolyQuestApplyEffect4_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest, bool bAdd)
        {
           return CRaceBuffInfoByHolyQuestApplyEffect4_user(_this, pkDest, bAdd, CRaceBuffInfoByHolyQuestApplyEffect4_next);
        };
        static void CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct _skill_fld* pFld, char byLv)
        {
           CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user(_this, pFld, byLv, CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next);
        };
        static struct CRaceBuffInfoByHolyQuest* CRaceBuffInfoByHolyQuestCreate8_wrapper(unsigned int uiNTh, char* szItemName)
        {
           return CRaceBuffInfoByHolyQuestCreate8_user(uiNTh, szItemName, CRaceBuffInfoByHolyQuestCreate8_next);
        };
        static bool CRaceBuffInfoByHolyQuestCreateComplete10_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestCreateComplete10_user(_this, pkDest, CRaceBuffInfoByHolyQuestCreateComplete10_next);
        };
        static bool CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_wrapper(unsigned int uiTh, char* szItemName, struct _skill_fld** ppFld, char* byLv)
        {
           return CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user(uiTh, szItemName, ppFld, byLv, CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next);
        };
        static void CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_wrapper(struct CRaceBuffInfoByHolyQuest* _this, uint16_t wUserInx)
        {
           CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user(_this, wUserInx, CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next);
        };
        static void CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_wrapper(struct CRaceBuffInfoByHolyQuest* _this, uint16_t wUserInx)
        {
           CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user(_this, wUserInx, CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next);
        };
        static void CRaceBuffInfoByHolyQuestNotifySetBuff18_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           CRaceBuffInfoByHolyQuestNotifySetBuff18_user(_this, pkDest, CRaceBuffInfoByHolyQuestNotifySetBuff18_next);
        };
        static bool CRaceBuffInfoByHolyQuestRelease20_wrapper(struct CRaceBuffInfoByHolyQuest* _this, struct CPlayer* pkDest)
        {
           return CRaceBuffInfoByHolyQuestRelease20_user(_this, pkDest, CRaceBuffInfoByHolyQuestRelease20_next);
        };
        static void CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_wrapper(struct CRaceBuffInfoByHolyQuest* _this)
        {
           CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user(_this, CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next);
        };
        
        static hook_record CRaceBuffInfoByHolyQuest_functions[] = {
        {   (LPVOID)0x1403b4080L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestApply2_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestApply2_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestApply2_wrapper),
            (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::Apply) },
        {   (LPVOID)0x1403b4160L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestApplyEffect4_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestApplyEffect4_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestApplyEffect4_wrapper),
            (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*, bool))&CRaceBuffInfoByHolyQuest::ApplyEffect) },
        {   (LPVOID)0x1403b3ea0L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestctor_CRaceBuffInfoByHolyQuest6_wrapper),
            (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(struct _skill_fld*, char))&CRaceBuffInfoByHolyQuest::ctor_CRaceBuffInfoByHolyQuest) },
        {   (LPVOID)0x1403b3ee0L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestCreate8_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestCreate8_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestCreate8_wrapper),
            (LPVOID)cast_pointer_function((struct CRaceBuffInfoByHolyQuest*(*)(unsigned int, char*))&CRaceBuffInfoByHolyQuest::Create) },
        {   (LPVOID)0x1403b4010L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestCreateComplete10_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestCreateComplete10_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestCreateComplete10_wrapper),
            (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::CreateComplete) },
        {   (LPVOID)0x1403b44b0L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestLoadINISubProcLoadCode12_wrapper),
            (LPVOID)cast_pointer_function((bool(*)(unsigned int, char*, struct _skill_fld**, char*))&CRaceBuffInfoByHolyQuest::LoadINISubProcLoadCode) },
        {   (LPVOID)0x1403b42d0L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifyLogInSetBuff14_wrapper),
            (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(uint16_t))&CRaceBuffInfoByHolyQuest::NotifyLogInSetBuff) },
        {   (LPVOID)0x1403b4430L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifyReleaseBuff16_wrapper),
            (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(uint16_t))&CRaceBuffInfoByHolyQuest::NotifyReleaseBuff) },
        {   (LPVOID)0x1403b4380L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifySetBuff18_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestNotifySetBuff18_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestNotifySetBuff18_wrapper),
            (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::NotifySetBuff) },
        {   (LPVOID)0x1403b40f0L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestRelease20_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestRelease20_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestRelease20_wrapper),
            (LPVOID)cast_pointer_function((bool(CRaceBuffInfoByHolyQuest::*)(struct CPlayer*))&CRaceBuffInfoByHolyQuest::Release) },
        {   (LPVOID)0x1403b7800L,
            (LPVOID *)&CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_user,
            (LPVOID *)&CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_next,
            (LPVOID)cast_pointer_function(CRaceBuffInfoByHolyQuestdtor_CRaceBuffInfoByHolyQuest24_wrapper),
            (LPVOID)cast_pointer_function((void(CRaceBuffInfoByHolyQuest::*)())&CRaceBuffInfoByHolyQuest::dtor_CRaceBuffInfoByHolyQuest) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE