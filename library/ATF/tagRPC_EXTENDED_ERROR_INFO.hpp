// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$ED0D0DF0A3DDA5624107AE1B9D51B7C0.hpp>
#include <tagRPC_EE_INFO_PARAM.hpp>



START_ATF_NAMESPACE
    struct tagRPC_EXTENDED_ERROR_INFO
    {
        unsigned int Version;
        wchar_t *ComputerName;
        unsigned int ProcessID;
        $ED0D0DF0A3DDA5624107AE1B9D51B7C0 u;
        unsigned int GeneratingComponent;
        unsigned int Status;
        unsigned __int16 DetectionLocation;
        unsigned __int16 Flags;
        int NumberOfParameters;
        tagRPC_EE_INFO_PARAM Parameters[4];
    };
END_ATF_NAMESPACE
