// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_REGED_AVATOR_DB.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_sheet_insert
    {
        unsigned int dwAccountSerial;
        char szAccountID[13];
        _REGED_AVATOR_DB InsertData;
    public:
        _qry_sheet_insert();
        void ctor__qry_sheet_insert();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_sheet_insert, 88>(), "_qry_sheet_insert");
END_ATF_NAMESPACE
