// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_base_fld.hpp>


START_ATF_NAMESPACE
    struct  _CheckPotion_fld : _base_fld
    {
        struct _CheckEffectCode
        {
            int m_nContParamCode;
            int m_nContParamIndex;
            float m_fContValue;
            int m_nContValSt;
        };
        char m_strKOR_name[64];
        int m_nContEffectType;
        int m_nContAreaType;
        _CheckEffectCode m_CheckEffectCode[5];
    };
END_ATF_NAMESPACE
