// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HWND__.hpp"


START_ATF_NAMESPACE
    struct _SHFILEOPSTRUCTW
    {
        HWND__ *hwnd;
        unsigned int wFunc;
        const wchar_t *pFrom;
        const wchar_t *pTo;
        unsigned __int16 fFlags;
        int fAnyOperationsAborted;
        void *hNameMappings;
        const wchar_t *lpszProgressTitle;
    };
END_ATF_NAMESPACE