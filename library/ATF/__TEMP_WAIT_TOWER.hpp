// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapData.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct __TEMP_WAIT_TOWER
    {
        unsigned int dwMasterSerial;
        char byItemIndex;
        CMapData *pMap;
        float fPos[3];
        unsigned int dwPushTime;
        bool bComplete;
    public:
        __TEMP_WAIT_TOWER();
        void ctor___TEMP_WAIT_TOWER();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
