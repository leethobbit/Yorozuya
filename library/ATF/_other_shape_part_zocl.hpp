// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _other_shape_part_zocl
    {
        struct  _model
        {
            unsigned __int16 wPartIndex;
            char byLv;
        };
        unsigned __int16 wIndex;
        unsigned int dwSerial;
        unsigned __int16 wEquipVer;
        char byCashChangeStateFlag;
        _model ModelPerPart[8];
        char byHonorGuildRank;
        char bySpecialPart;
        char byFrameIndex;
        char byUnitPartIndex[6];
    public:
        _other_shape_part_zocl();
        void ctor__other_shape_part_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_other_shape_part_zocl, 42>(), "_other_shape_part_zocl");
END_ATF_NAMESPACE
