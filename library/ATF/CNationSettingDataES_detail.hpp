// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataES_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNationSettingDataESctor_CNationSettingDataES2_ptr CNationSettingDataESctor_CNationSettingDataES2_next(nullptr);
        static info::CNationSettingDataESctor_CNationSettingDataES2_clbk CNationSettingDataESctor_CNationSettingDataES2_user(nullptr);
        static info::CNationSettingDataESCreateWorker4_ptr CNationSettingDataESCreateWorker4_next(nullptr);
        static info::CNationSettingDataESCreateWorker4_clbk CNationSettingDataESCreateWorker4_user(nullptr);
        static info::CNationSettingDataESGetCashItemPrice6_ptr CNationSettingDataESGetCashItemPrice6_next(nullptr);
        static info::CNationSettingDataESGetCashItemPrice6_clbk CNationSettingDataESGetCashItemPrice6_user(nullptr);
        static info::CNationSettingDataESGetItemName8_ptr CNationSettingDataESGetItemName8_next(nullptr);
        static info::CNationSettingDataESGetItemName8_clbk CNationSettingDataESGetItemName8_user(nullptr);
        static info::CNationSettingDataESInit10_ptr CNationSettingDataESInit10_next(nullptr);
        static info::CNationSettingDataESInit10_clbk CNationSettingDataESInit10_user(nullptr);
        static info::CNationSettingDataESReadSystemPass12_ptr CNationSettingDataESReadSystemPass12_next(nullptr);
        static info::CNationSettingDataESReadSystemPass12_clbk CNationSettingDataESReadSystemPass12_user(nullptr);
        
        static void CNationSettingDataESctor_CNationSettingDataES2_wrapper(struct CNationSettingDataES* _this)
        {
           CNationSettingDataESctor_CNationSettingDataES2_user(_this, CNationSettingDataESctor_CNationSettingDataES2_next);
        };
        static struct CashDbWorker* CNationSettingDataESCreateWorker4_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESCreateWorker4_user(_this, CNationSettingDataESCreateWorker4_next);
        };
        static int CNationSettingDataESGetCashItemPrice6_wrapper(struct CNationSettingDataES* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataESGetCashItemPrice6_user(_this, pFld, CNationSettingDataESGetCashItemPrice6_next);
        };
        static char* CNationSettingDataESGetItemName8_wrapper(struct CNationSettingDataES* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataESGetItemName8_user(_this, pFld, CNationSettingDataESGetItemName8_next);
        };
        static int CNationSettingDataESInit10_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESInit10_user(_this, CNationSettingDataESInit10_next);
        };
        static bool CNationSettingDataESReadSystemPass12_wrapper(struct CNationSettingDataES* _this)
        {
           return CNationSettingDataESReadSystemPass12_user(_this, CNationSettingDataESReadSystemPass12_next);
        };
        
        static hook_record CNationSettingDataES_functions[] = {
        {   (LPVOID)0x140231de0L,
            (LPVOID *)&CNationSettingDataESctor_CNationSettingDataES2_user,
            (LPVOID *)&CNationSettingDataESctor_CNationSettingDataES2_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESctor_CNationSettingDataES2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataES::*)())&CNationSettingDataES::ctor_CNationSettingDataES) },
        {   (LPVOID)0x140231840L,
            (LPVOID *)&CNationSettingDataESCreateWorker4_user,
            (LPVOID *)&CNationSettingDataESCreateWorker4_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESCreateWorker4_wrapper),
            (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataES::*)())&CNationSettingDataES::CreateWorker) },
        {   (LPVOID)0x1402318f0L,
            (LPVOID *)&CNationSettingDataESGetCashItemPrice6_user,
            (LPVOID *)&CNationSettingDataESGetCashItemPrice6_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESGetCashItemPrice6_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataES::*)(struct _CashShop_str_fld*))&CNationSettingDataES::GetCashItemPrice) },
        {   (LPVOID)0x140231820L,
            (LPVOID *)&CNationSettingDataESGetItemName8_user,
            (LPVOID *)&CNationSettingDataESGetItemName8_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESGetItemName8_wrapper),
            (LPVOID)cast_pointer_function((char*(CNationSettingDataES::*)(struct _NameTxt_fld*))&CNationSettingDataES::GetItemName) },
        {   (LPVOID)0x140231730L,
            (LPVOID *)&CNationSettingDataESInit10_user,
            (LPVOID *)&CNationSettingDataESInit10_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESInit10_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataES::*)())&CNationSettingDataES::Init) },
        {   (LPVOID)0x140231910L,
            (LPVOID *)&CNationSettingDataESReadSystemPass12_user,
            (LPVOID *)&CNationSettingDataESReadSystemPass12_next,
            (LPVOID)cast_pointer_function(CNationSettingDataESReadSystemPass12_wrapper),
            (LPVOID)cast_pointer_function((bool(CNationSettingDataES::*)())&CNationSettingDataES::ReadSystemPass) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE