// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CStringT.hpp"
#include "CException.hpp"


START_ATF_NAMESPACE
    struct  CArchiveException : CException
    {
        int m_cause;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char> > > m_strFileName;
    };
END_ATF_NAMESPACE