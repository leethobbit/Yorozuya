// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAtlAllocator.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CAtlAllocatorAddCategory1_ptr = int (WINAPIV*)(struct CAtlAllocator*, int, wchar_t*);
        using CAtlAllocatorAddCategory1_clbk = int (WINAPIV*)(struct CAtlAllocator*, int, wchar_t*, CAtlAllocatorAddCategory1_ptr);
        using CAtlAllocatorAddModule2_ptr = int (WINAPIV*)(struct CAtlAllocator*, struct HINSTANCE__*);
        using CAtlAllocatorAddModule2_clbk = int (WINAPIV*)(struct CAtlAllocator*, struct HINSTANCE__*, CAtlAllocatorAddModule2_ptr);
        using CAtlAllocatorctor_CAtlAllocator3_ptr = void (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorctor_CAtlAllocator3_clbk = void (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorctor_CAtlAllocator3_ptr);
        using CAtlAllocatorCleanUp4_ptr = void (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorCleanUp4_clbk = void (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorCleanUp4_ptr);
        using CAtlAllocatorClose5_ptr = void (WINAPIV*)(struct CAtlAllocator*, bool);
        using CAtlAllocatorClose5_clbk = void (WINAPIV*)(struct CAtlAllocator*, bool, CAtlAllocatorClose5_ptr);
        using CAtlAllocatorFindModule6_ptr = bool (WINAPIV*)(struct CAtlAllocator*, wchar_t*, unsigned int*);
        using CAtlAllocatorFindModule6_clbk = bool (WINAPIV*)(struct CAtlAllocator*, wchar_t*, unsigned int*, CAtlAllocatorFindModule6_ptr);
        using CAtlAllocatorGetCategory7_ptr = struct CAtlTraceCategory* (WINAPIV*)(struct CAtlAllocator*, int);
        using CAtlAllocatorGetCategory7_clbk = struct CAtlTraceCategory* (WINAPIV*)(struct CAtlAllocator*, int, CAtlAllocatorGetCategory7_ptr);
        using CAtlAllocatorGetCategoryCount8_ptr = int (WINAPIV*)(struct CAtlAllocator*, struct CAtlTraceModule*);
        using CAtlAllocatorGetCategoryCount8_clbk = int (WINAPIV*)(struct CAtlAllocator*, struct CAtlTraceModule*, CAtlAllocatorGetCategoryCount8_ptr);
        using CAtlAllocatorGetCategoryCount9_ptr = int (WINAPIV*)(struct CAtlAllocator*, int);
        using CAtlAllocatorGetCategoryCount9_clbk = int (WINAPIV*)(struct CAtlAllocator*, int, CAtlAllocatorGetCategoryCount9_ptr);
        using CAtlAllocatorGetModule10_ptr = struct CAtlTraceModule* (WINAPIV*)(struct CAtlAllocator*, int);
        using CAtlAllocatorGetModule10_clbk = struct CAtlTraceModule* (WINAPIV*)(struct CAtlAllocator*, int, CAtlAllocatorGetModule10_ptr);
        using CAtlAllocatorGetModuleCount11_ptr = int (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorGetModuleCount11_clbk = int (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorGetModuleCount11_ptr);
        using CAtlAllocatorGetProcess12_ptr = struct CAtlTraceProcess* (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorGetProcess12_clbk = struct CAtlTraceProcess* (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorGetProcess12_ptr);
        using CAtlAllocatorInit13_ptr = bool (WINAPIV*)(struct CAtlAllocator*, char*, unsigned int);
        using CAtlAllocatorInit13_clbk = bool (WINAPIV*)(struct CAtlAllocator*, char*, unsigned int, CAtlAllocatorInit13_ptr);
        using CAtlAllocatorOpen14_ptr = bool (WINAPIV*)(struct CAtlAllocator*, char*);
        using CAtlAllocatorOpen14_clbk = bool (WINAPIV*)(struct CAtlAllocator*, char*, CAtlAllocatorOpen14_ptr);
        using CAtlAllocatorReleaseSnapshot15_ptr = void (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorReleaseSnapshot15_clbk = void (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorReleaseSnapshot15_ptr);
        using CAtlAllocatorRemoveModule16_ptr = bool (WINAPIV*)(struct CAtlAllocator*, int);
        using CAtlAllocatorRemoveModule16_clbk = bool (WINAPIV*)(struct CAtlAllocator*, int, CAtlAllocatorRemoveModule16_ptr);
        using CAtlAllocatorTakeSnapshot17_ptr = void (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatorTakeSnapshot17_clbk = void (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatorTakeSnapshot17_ptr);
        using CAtlAllocatordtor_CAtlAllocator19_ptr = void (WINAPIV*)(struct CAtlAllocator*);
        using CAtlAllocatordtor_CAtlAllocator19_clbk = void (WINAPIV*)(struct CAtlAllocator*, CAtlAllocatordtor_CAtlAllocator19_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE