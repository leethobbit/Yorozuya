// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _notify_guild_battle_state_zowb
    {
        enum NGB_STATE
        {
            PROCESS = 0x2,
            END = 0x3,
        };
        char byTimeID;
        char byRace;
        char byState;
    };
END_ATF_NAMESPACE