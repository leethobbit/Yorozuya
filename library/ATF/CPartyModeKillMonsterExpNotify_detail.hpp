// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPartyModeKillMonsterExpNotify_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CPartyModeKillMonsterExpNotifyAdd2_ptr CPartyModeKillMonsterExpNotifyAdd2_next(nullptr);
        static info::CPartyModeKillMonsterExpNotifyAdd2_clbk CPartyModeKillMonsterExpNotifyAdd2_user(nullptr);
        static info::CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_ptr CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next(nullptr);
        static info::CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_clbk CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user(nullptr);
        static info::CPartyModeKillMonsterExpNotifyctor_Notify6_ptr CPartyModeKillMonsterExpNotifyctor_Notify6_next(nullptr);
        static info::CPartyModeKillMonsterExpNotifyctor_Notify6_clbk CPartyModeKillMonsterExpNotifyctor_Notify6_user(nullptr);
        static info::CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_ptr CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next(nullptr);
        static info::CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_clbk CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user(nullptr);
        static info::CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_ptr CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next(nullptr);
        static info::CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_clbk CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user(nullptr);
        
        static info::CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_ptr CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_next(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_clbk CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_user(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfoNotify4_ptr CPartyModeKillMonsterExpNotify__CExpInfoNotify4_next(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfoNotify4_clbk CPartyModeKillMonsterExpNotify__CExpInfoNotify4_user(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_ptr CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_next(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_clbk CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_user(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_ptr CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_next(nullptr);
        static info::CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_clbk CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_user(nullptr);
        
        static bool CPartyModeKillMonsterExpNotifyAdd2_wrapper(struct CPartyModeKillMonsterExpNotify* _this, struct CPlayer* pkMember, float fExp)
        {
           return CPartyModeKillMonsterExpNotifyAdd2_user(_this, pkMember, fExp, CPartyModeKillMonsterExpNotifyAdd2_next);
        };
        static void CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user(_this, CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next);
        };
        static void CPartyModeKillMonsterExpNotifyctor_Notify6_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifyctor_Notify6_user(_this, CPartyModeKillMonsterExpNotifyctor_Notify6_next);
        };
        static void CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user(_this, CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next);
        };
        static void CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user(_this, CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next);
        };
        
        static void CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_wrapper(struct CPartyModeKillMonsterExpNotify::CExpInfo* _this)
        {
           CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_user(_this, CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_next);
        };
        static void CPartyModeKillMonsterExpNotify__CExpInfoNotify4_wrapper(struct CPartyModeKillMonsterExpNotify::CExpInfo* _this)
        {
           CPartyModeKillMonsterExpNotify__CExpInfoNotify4_user(_this, CPartyModeKillMonsterExpNotify__CExpInfoNotify4_next);
        };
        static void CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_wrapper(struct CPartyModeKillMonsterExpNotify::CExpInfo* _this, struct CPlayer* pkMember, float fExp)
        {
           CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_user(_this, pkMember, fExp, CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_next);
        };
        static void CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_wrapper(struct CPartyModeKillMonsterExpNotify::CExpInfo* _this)
        {
           CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_user(_this, CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_next);
        };
        
        static hook_record CPartyModeKillMonsterExpNotify_functions[] = {
        {   (LPVOID)0x1401692f0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyAdd2_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyAdd2_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyAdd2_wrapper),
            (LPVOID)cast_pointer_function((bool(CPartyModeKillMonsterExpNotify::*)(struct CPlayer*, float))&CPartyModeKillMonsterExpNotify::Add) },
        {   (LPVOID)0x14008e4f0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::ctor_CPartyModeKillMonsterExpNotify) },
        {   (LPVOID)0x14008e620L,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_Notify6_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_Notify6_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyctor_Notify6_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::Notify) },
        {   (LPVOID)0x14007d3a0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::SetKillMonsterFlag) },
        {   (LPVOID)0x14008e580L,
            (LPVOID *)&CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::dtor_CPartyModeKillMonsterExpNotify) },
        
        {   (LPVOID)0x14008e5e0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotify__CExpInfoctor_CExpInfo2_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::CExpInfo::*)())&CPartyModeKillMonsterExpNotify::CExpInfo::ctor_CExpInfo) },
        {   (LPVOID)0x1401693b0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoNotify4_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoNotify4_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotify__CExpInfoNotify4_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::CExpInfo::*)())&CPartyModeKillMonsterExpNotify::CExpInfo::Notify) },
        {   (LPVOID)0x1401721d0L,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotify__CExpInfoSetGetExp6_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::CExpInfo::*)(struct CPlayer*, float))&CPartyModeKillMonsterExpNotify::CExpInfo::SetGetExp) },
        {   (LPVOID)0x14008e610L,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_user,
            (LPVOID *)&CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_next,
            (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotify__CExpInfodtor_CExpInfo8_wrapper),
            (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::CExpInfo::*)())&CPartyModeKillMonsterExpNotify::CExpInfo::dtor_CExpInfo) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE