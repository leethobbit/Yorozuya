// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataUS_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNationSettingDataUSctor_CNationSettingDataUS2_ptr CNationSettingDataUSctor_CNationSettingDataUS2_next(nullptr);
        static info::CNationSettingDataUSctor_CNationSettingDataUS2_clbk CNationSettingDataUSctor_CNationSettingDataUS2_user(nullptr);
        static info::CNationSettingDataUSCreateWorker4_ptr CNationSettingDataUSCreateWorker4_next(nullptr);
        static info::CNationSettingDataUSCreateWorker4_clbk CNationSettingDataUSCreateWorker4_user(nullptr);
        static info::CNationSettingDataUSGetCashItemPrice6_ptr CNationSettingDataUSGetCashItemPrice6_next(nullptr);
        static info::CNationSettingDataUSGetCashItemPrice6_clbk CNationSettingDataUSGetCashItemPrice6_user(nullptr);
        static info::CNationSettingDataUSGetItemName8_ptr CNationSettingDataUSGetItemName8_next(nullptr);
        static info::CNationSettingDataUSGetItemName8_clbk CNationSettingDataUSGetItemName8_user(nullptr);
        static info::CNationSettingDataUSInit10_ptr CNationSettingDataUSInit10_next(nullptr);
        static info::CNationSettingDataUSInit10_clbk CNationSettingDataUSInit10_user(nullptr);
        static info::CNationSettingDataUSReadSystemPass12_ptr CNationSettingDataUSReadSystemPass12_next(nullptr);
        static info::CNationSettingDataUSReadSystemPass12_clbk CNationSettingDataUSReadSystemPass12_user(nullptr);
        
        static void CNationSettingDataUSctor_CNationSettingDataUS2_wrapper(struct CNationSettingDataUS* _this)
        {
           CNationSettingDataUSctor_CNationSettingDataUS2_user(_this, CNationSettingDataUSctor_CNationSettingDataUS2_next);
        };
        static struct CashDbWorker* CNationSettingDataUSCreateWorker4_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSCreateWorker4_user(_this, CNationSettingDataUSCreateWorker4_next);
        };
        static int CNationSettingDataUSGetCashItemPrice6_wrapper(struct CNationSettingDataUS* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataUSGetCashItemPrice6_user(_this, pFld, CNationSettingDataUSGetCashItemPrice6_next);
        };
        static char* CNationSettingDataUSGetItemName8_wrapper(struct CNationSettingDataUS* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataUSGetItemName8_user(_this, pFld, CNationSettingDataUSGetItemName8_next);
        };
        static int CNationSettingDataUSInit10_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSInit10_user(_this, CNationSettingDataUSInit10_next);
        };
        static bool CNationSettingDataUSReadSystemPass12_wrapper(struct CNationSettingDataUS* _this)
        {
           return CNationSettingDataUSReadSystemPass12_user(_this, CNationSettingDataUSReadSystemPass12_next);
        };
        
        static hook_record CNationSettingDataUS_functions[] = {
        {   (LPVOID)0x1402311d0L,
            (LPVOID *)&CNationSettingDataUSctor_CNationSettingDataUS2_user,
            (LPVOID *)&CNationSettingDataUSctor_CNationSettingDataUS2_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSctor_CNationSettingDataUS2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataUS::*)())&CNationSettingDataUS::ctor_CNationSettingDataUS) },
        {   (LPVOID)0x140231340L,
            (LPVOID *)&CNationSettingDataUSCreateWorker4_user,
            (LPVOID *)&CNationSettingDataUSCreateWorker4_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSCreateWorker4_wrapper),
            (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataUS::*)())&CNationSettingDataUS::CreateWorker) },
        {   (LPVOID)0x1402313f0L,
            (LPVOID *)&CNationSettingDataUSGetCashItemPrice6_user,
            (LPVOID *)&CNationSettingDataUSGetCashItemPrice6_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSGetCashItemPrice6_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataUS::*)(struct _CashShop_str_fld*))&CNationSettingDataUS::GetCashItemPrice) },
        {   (LPVOID)0x140231320L,
            (LPVOID *)&CNationSettingDataUSGetItemName8_user,
            (LPVOID *)&CNationSettingDataUSGetItemName8_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSGetItemName8_wrapper),
            (LPVOID)cast_pointer_function((char*(CNationSettingDataUS::*)(struct _NameTxt_fld*))&CNationSettingDataUS::GetItemName) },
        {   (LPVOID)0x140231230L,
            (LPVOID *)&CNationSettingDataUSInit10_user,
            (LPVOID *)&CNationSettingDataUSInit10_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSInit10_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataUS::*)())&CNationSettingDataUS::Init) },
        {   (LPVOID)0x140231410L,
            (LPVOID *)&CNationSettingDataUSReadSystemPass12_user,
            (LPVOID *)&CNationSettingDataUSReadSystemPass12_next,
            (LPVOID)cast_pointer_function(CNationSettingDataUSReadSystemPass12_wrapper),
            (LPVOID)cast_pointer_function((bool(CNationSettingDataUS::*)())&CNationSettingDataUS::ReadSystemPass) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE