// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct  _ItemCombine_fld : _base_fld
    {
        struct _material
        {
            char m_itmPdMat[8];
            int m_nDur;
        };
        int m_CombineIdx;
        unsigned int m_dwFee;
        char m_strCivil[64];
        int m_TradeValue;
        unsigned int m_dwTradeMoney;
        _material m_Material[5];
    };
END_ATF_NAMESPACE