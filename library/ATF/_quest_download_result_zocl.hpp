// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_QUEST_DB_BASE.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _quest_download_result_zocl
    {
        struct __list
        {
            char byDBSlotIndex;
            _QUEST_DB_BASE::_LIST cont;
        public:
            __list();
            void ctor___list();
        };
        char byRetCode;
        char bySlotNum;
        __list SlotInfo[30];
    public:
        _quest_download_result_zocl();
        void ctor__quest_download_result_zocl();
        int size();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_quest_download_result_zocl, 422>(), "_quest_download_result_zocl");
END_ATF_NAMESPACE
