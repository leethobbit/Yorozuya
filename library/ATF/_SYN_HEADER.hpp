// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _SYN_HEADER
    {
        unsigned int m_dwQryIndex;
        unsigned int m_dwQrySerial;
        char m_byResult;
        char m_byQryCase;
    public:
        _SYN_HEADER()
        {
            using org_ptr = void (WINAPIV*)(struct _SYN_HEADER*);
            (org_ptr(0x14043ed80L))(this);
        };
        void ctor__SYN_HEADER()
        {
            using org_ptr = void (WINAPIV*)(struct _SYN_HEADER*);
            (org_ptr(0x14043ed80L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE