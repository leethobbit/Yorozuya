// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_load_guildbattle_totalrecord
    {
        unsigned int dwGuildSerial;
        unsigned int dwTotWinCnt;
        unsigned int dwTotLoseCnt;
        unsigned int dwTotDrawCnt;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_load_guildbattle_totalrecord*);
            return (org_ptr(0x140207590L))(this);
        };
    };
END_ATF_NAMESPACE