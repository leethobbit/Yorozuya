// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_AUTOMINE_SLOT.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _DB_LOAD_AUTOMINE_MACHINE
    {
        char byCollisionType;
        char byRace;
        unsigned int dwGuildSerial;
        unsigned int dwGMasterSerial;
        bool bWorking;
        char bySelectedOre;
        unsigned int dwBatteryGage;
        char bySlotCnt;
        _AUTOMINE_SLOT slot[80];
    public:
        _DB_LOAD_AUTOMINE_MACHINE();
        void ctor__DB_LOAD_AUTOMINE_MACHINE();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_DB_LOAD_AUTOMINE_MACHINE, 977>(), "_DB_LOAD_AUTOMINE_MACHINE");
END_ATF_NAMESPACE
