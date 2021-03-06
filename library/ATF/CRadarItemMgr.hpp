// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_detected_char_list.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CRadarItemMgr
    {
        bool m_bUse;
        bool m_bUpdate;
        unsigned int m_dwStartTime;
        unsigned int m_dwDurTime;
        unsigned int m_dwDelayTime;
        struct CPlayer *m_pMaster;
        char m_strRadarCode[64];
        struct CMapData *m_pDestMap;
        bool m_bPlayerEnd;
        bool m_bMonEnd;
        int m_nPlayerNum;
        int m_nMonNum;
        bool m_bSameRace;
        bool m_bNorDiffRace;
        bool m_bChiefDiffRace;
        bool m_bEliteMonster;
        _detected_char_list m_RadarResult;
    public:
        CRadarItemMgr();
        void ctor_CRadarItemMgr();
        unsigned int CalcDelay();
        unsigned int GetDelayTime();
        unsigned int GetStartTime();
        void Init(unsigned int dwDelayTime);
        void Init();
        bool IsRadarUse();
        bool IsUpdate();
        bool IsUse();
        bool RadarProc(struct _RadarItem_fld* pRadarFld);
        void ResetFlags();
        void ResetUpdate();
        void SetUseRadar(char** strRadarCode, struct CPlayer* pMaster, unsigned int dwDurTime, unsigned int dwDelayTime);
        ~CRadarItemMgr();
        void dtor_CRadarItemMgr();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
