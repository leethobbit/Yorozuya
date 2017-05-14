// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCharacter.hpp"
#include "CGameObjectVtbl.hpp"
#include "CMapData.hpp"
#include "CPlayer.hpp"
#include "CRect.hpp"
#include "_100_per_random_table.hpp"
#include "_base_fld.hpp"
#include "_object_create_setdata.hpp"
#include "_object_id.hpp"
#include "_object_list_point.hpp"


START_ATF_NAMESPACE
    struct CGameObject
    {
        CGameObjectVtbl *vfptr;
        _base_fld *m_pRecordSet;
        _object_id m_ObjID;
        unsigned int m_dwObjSerial;
        bool m_bLive;
        int m_nTotalObjIndex;
        bool m_bCorpse;
        bool m_bMove;
        bool m_bStun;
        bool m_bMapLoading;
        unsigned int m_dwLastSendTime;
        float m_fCurPos[3];
        float m_fAbsPos[3];
        int m_nScreenPos[2];
        float m_fOldPos[3];
        struct CMapData *m_pCurMap;
        _100_per_random_table m_rtPer100;
        int m_nCirclePlayerNum;
        unsigned __int16 m_wMapLayerIndex;
        _object_list_point m_SectorPoint;
        _object_list_point m_SectorNetPoint;
        unsigned int m_dwNextFreeStunTime;
        unsigned int m_dwOldTickBreakTranspar;
        bool m_bBreakTranspar;
        bool m_bMaxVision;
        bool *m_bPlayerCircleList;
        bool m_bObserver;
        unsigned int m_dwCurSec;
    public:
        void AlterSec()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14012c640L))(this);
        };
        int AttackableHeight()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e340L))(this);
        };
        void BeTargeted(struct CCharacter* pSeacher)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            (org_ptr(0x140072b50L))(this, pSeacher);
        };
        CGameObject()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017a570L))(this);
        };
        void ctor_CGameObject()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017a570L))(this);
        };
        void CalcAbsPos()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017b220L))(this);
        };
        int CalcCirclePlayerNum(int nRange)
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, int);
            return (org_ptr(0x14017c2e0L))(this, nRange);
        };
        int CalcCirclePlayerNum(int nRange, bool (WINAPIV* fnComp)(struct CGameObject*))
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, int, bool (WINAPIV*)(struct CGameObject*));
            return (org_ptr(0x14017c720L))(this, nRange, fnComp);
        };
        uint16_t CalcCurHPRate()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012c5b0L))(this);
        };
        void CalcScrExtendPoint(struct CRect* prcWnd, struct CRect* prcExtend)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CRect*, struct CRect*);
            (org_ptr(0x14017bb40L))(this, prcWnd, prcExtend);
        };
        void CalcScrNormalPoint(struct CRect* prcWnd)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CRect*);
            (org_ptr(0x14017baa0L))(this, prcWnd);
        };
        unsigned int CalcSecIndex()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14017b960L))(this);
        };
        void CircleReport(char* pbyType, char* szMsg, int nMsgSize, bool bToOne)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, char*, char*, int, bool);
            (org_ptr(0x14017bc50L))(this, pbyType, szMsg, nMsgSize, bToOne);
        };
        void CircleReport(char* pbyType, char* szMsg, int nMsgSize, unsigned int dwPassObjSerial, bool bToOne)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, char*, char*, int, unsigned int, bool);
            (org_ptr(0x14017bf90L))(this, pbyType, szMsg, nMsgSize, dwPassObjSerial, bToOne);
        };
        bool Create(struct _object_create_setdata* pData)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct _object_create_setdata*);
            return (org_ptr(0x14017a970L))(this, pData);
        };
        bool Destroy()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14017ab40L))(this);
        };
        bool FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, unsigned int);
            return (org_ptr(0x14012c6e0L))(this, pkTarget, dwMiliSecond);
        };
        int GetAttackDP()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e360L))(this);
        };
        int GetAttackLevel()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012c720L))(this);
        };
        float GetAttackRange()
        {
            using org_ptr = float (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e300L))(this);
        };
        int GetAvoidRate()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012c710L))(this);
        };
        unsigned int GetCurSecNum()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14017ba50L))(this);
        };
        int GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, int, struct CCharacter*, int*);
            return (org_ptr(0x14012e140L))(this, nAttactPart, pAttChar, pnConvertPart);
        };
        float GetDefFacing(int nPart)
        {
            using org_ptr = float (WINAPIV*)(struct CGameObject*, int);
            return (org_ptr(0x14012e200L))(this, nPart);
        };
        float GetDefGap(int nPart)
        {
            using org_ptr = float (WINAPIV*)(struct CGameObject*, int);
            return (org_ptr(0x14012e1b0L))(this, nPart);
        };
        int GetDefSkill(bool bBackAttackDamage)
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, bool);
            return (org_ptr(0x14012e2a0L))(this, bBackAttackDamage);
        };
        int GetFireTol()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e170L))(this);
        };
        int GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, struct CCharacter*, int, bool);
            return (org_ptr(0x14012e100L))(this, pDst, nPart, bBackAttack);
        };
        int GetHP()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e0b0L))(this);
        };
        int GetLevel()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e290L))(this);
        };
        int GetMaxHP()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e0c0L))(this);
        };
        char* GetObjName()
        {
            using org_ptr = char* (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e380L))(this);
        };
        int GetObjRace()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e370L))(this);
        };
        int GetSoilTol()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e190L))(this);
        };
        bool GetStun()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14014cb30L))(this);
        };
        int GetUseSectorRange()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14007d8c0L))(this);
        };
        int GetWaterTol()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e180L))(this);
        };
        float GetWeaponAdjust()
        {
            using org_ptr = float (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e250L))(this);
        };
        int GetWeaponClass()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e350L))(this);
        };
        float GetWidth()
        {
            using org_ptr = float (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e2c0L))(this);
        };
        int GetWindTol()
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e1a0L))(this);
        };
        void Init(struct _object_id* pID)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, struct _object_id*);
            (org_ptr(0x14017a730L))(this, pID);
        };
        bool IsAttackableInTown()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x140072b70L))(this);
        };
        bool IsBeAttackedAble(bool bFirst)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, bool);
            return (org_ptr(0x14012e390L))(this, bFirst);
        };
        bool IsBeCirclePlayer(int nRange)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, int);
            return (org_ptr(0x14017c440L))(this, nRange);
        };
        bool IsBeDamagedAble(struct CCharacter* pAtter)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c780L))(this, pAtter);
        };
        bool IsCircleObject(int nRange, struct CGameObject* pObject)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, int, struct CGameObject*);
            return (org_ptr(0x14017c5a0L))(this, nRange, pObject);
        };
        bool IsInTown()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012e3b0L))(this);
        };
        bool IsRecvableContEffect()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012c770L))(this);
        };
        bool IsRewardExp()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x140072b60L))(this);
        };
        bool Is_Battle_Mode()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14012cbc0L))(this);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14012e080L))(this);
        };
        void OnLoop()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017ad00L))(this);
        };
        void OutOfSec()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14012e090L))(this);
        };
        void RecvKillMessage(struct CCharacter* pDier)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            (org_ptr(0x14012e0d0L))(this, pDier);
        };
        unsigned int RerangeSecIndex(unsigned int dwOld, unsigned int dwNew)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CGameObject*, unsigned int, unsigned int);
            return (org_ptr(0x14017b2c0L))(this, dwOld, dwNew);
        };
        void ResetSector(unsigned int dwOldSec, unsigned int dwNewSec)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, unsigned int, unsigned int);
            (org_ptr(0x14017b530L))(this, dwOldSec, dwNewSec);
        };
        bool RobbedHP(struct CCharacter* pDst, int nDecHP)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, int);
            return (org_ptr(0x14012e0e0L))(this, pDst, nDecHP);
        };
        void SFContDelMessage(char byContCode, char byListIndex, bool bSend, bool bAura)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, bool, bool);
            (org_ptr(0x14012c6a0L))(this, byContCode, byListIndex, bSend, bAura);
        };
        void SFContInsertMessage(char byContCode, char byListIndex, bool bAura, struct CPlayer* pPlayerAct)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, bool, struct CPlayer*);
            (org_ptr(0x14012c680L))(this, byContCode, byListIndex, bAura, pPlayerAct);
        };
        void SFContUpdateTimeMessage(char byContCode, char byListIndex, int nLeftTime)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, char, char, int);
            (org_ptr(0x14012c6c0L))(this, byContCode, byListIndex, nLeftTime);
        };
        bool SF_AllContDamageForceRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c920L))(this, pDstObj);
        };
        bool SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c900L))(this, pDstObj);
        };
        bool SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c8e0L))(this, pDstObj);
        };
        bool SF_AttHPtoDstFP_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c7a0L))(this, pDstObj, fEffectValue);
        };
        bool SF_ContDamageTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c7c0L))(this, pDstObj, fEffectValue);
        };
        bool SF_ContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c840L))(this, pDstObj, fEffectValue);
        };
        bool SF_ConvertMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c980L))(this, pDstObj, fEffectValue);
        };
        bool SF_ConvertTargetDest(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cb20L))(this, pDstObj, fEffectValue);
        };
        bool SF_DamageAndStun(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012ca60L))(this, pDstObj, fEffectValue);
        };
        bool SF_FPDec(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012ca40L))(this, pDstObj, fEffectValue);
        };
        bool SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c800L))(this, pDstObj, fEffectValue);
        };
        bool SF_IncHPCircleParty(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c9e0L))(this, pDstObj, fEffectValue);
        };
        bool SF_IncreaseDP(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cb00L))(this, pDstObj, fEffectValue);
        };
        bool SF_LateContDamageRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c8c0L))(this, pDstObj);
        };
        bool SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c8a0L))(this, pDstObj);
        };
        bool SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c880L))(this, pDstObj);
        };
        bool SF_MakePortalReturnBindPositionPartyMember(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float, char*);
            return (org_ptr(0x14012cac0L))(this, pDstObj, fEffectValue, byRet);
        };
        bool SF_MakeZeroAnimusRecallTimeOnce(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cb60L))(this, pDstObj, fEffectValue);
        };
        bool SF_OthersContHelpSFRemove_Once(float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, float);
            return (org_ptr(0x14012c940L))(this, fEffectValue);
        };
        bool SF_OverHealing_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c860L))(this, pDstObj, fEffectValue);
        };
        bool SF_RecoverAllReturnStateAnimusHPFull(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cb40L))(this, pDstObj, fEffectValue);
        };
        bool SF_ReleaseMonsterTarget(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c9c0L))(this, pDstObj, fEffectValue);
        };
        bool SF_RemoveAllContHelp_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012caa0L))(this, pDstObj, fEffectValue);
        };
        bool SF_Resurrect_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*);
            return (org_ptr(0x14012c7e0L))(this, pDstObj);
        };
        bool SF_ReturnBindPosition(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cae0L))(this, pDstObj, fEffectValue);
        };
        bool SF_SPDec(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012ca20L))(this, pDstObj, fEffectValue);
        };
        bool SF_STInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c820L))(this, pDstObj, fEffectValue);
        };
        bool SF_SelfDestruction(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012cb80L))(this, pDstObj, fEffectValue);
        };
        bool SF_SkillContHelpTimeInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c960L))(this, pDstObj, fEffectValue);
        };
        bool SF_Stun(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012ca00L))(this, pDstObj, fEffectValue);
        };
        bool SF_TeleportToDestination(struct CCharacter* pDstObj, bool bStone)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, bool);
            return (org_ptr(0x14012cba0L))(this, pDstObj, bStone);
        };
        bool SF_TransDestHP(struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float, char*);
            return (org_ptr(0x14012ca80L))(this, pDstObj, fEffectValue, byRet);
        };
        bool SF_TransMonsterHP(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CCharacter*, float);
            return (org_ptr(0x14012c9a0L))(this, pDstObj, fEffectValue);
        };
        void SendMsg_BreakStop()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017b140L))(this);
        };
        void SendMsg_FixPosition(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
            (org_ptr(0x14013e3f0L))(this, n);
        };
        void SendMsg_RealFixPosition(bool bCircle)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
            (org_ptr(0x14017b050L))(this, bCircle);
        };
        void SendMsg_RealMovePoint(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
            (org_ptr(0x14012e0a0L))(this, n);
        };
        void SendMsg_SetHPInform()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14012c650L))(this);
        };
        void SendMsg_StunInform()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x140164850L))(this);
        };
        void SetAttackPart(int nAttactPart)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, int);
            (org_ptr(0x14012c700L))(this, nAttactPart);
        };
        void SetBreakTranspar(bool bBreak)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
            (org_ptr(0x14017afe0L))(this, bBreak);
        };
        bool SetCurBspMap(struct CMapData* pMap)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, struct CMapData*);
            return (org_ptr(0x14017af30L))(this, pMap);
        };
        bool SetCurPos(float* pPos)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, float*);
            return (org_ptr(0x14017aec0L))(this, pPos);
        };
        void SetCurSecNum(unsigned int dwNewSecNum)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, unsigned int);
            (org_ptr(0x14017ba70L))(this, dwNewSecNum);
        };
        int SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
            using org_ptr = int (WINAPIV*)(struct CGameObject*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
            return (org_ptr(0x14012e120L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
        };
        bool SetHP(int nHP, bool bOver)
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*, int, bool);
            return (org_ptr(0x14012c660L))(this, nHP, bOver);
        };
        void SetMaxVersion()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017ac80L))(this);
        };
        void SetStun(bool bStun)
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*, bool);
            (org_ptr(0x14017af70L))(this, bStun);
        };
        bool UpdateSecList()
        {
            using org_ptr = bool (WINAPIV*)(struct CGameObject*);
            return (org_ptr(0x14017b430L))(this);
        };
        void _ResetCirclePlayer()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017c8e0L))(this);
        };
        ~CGameObject()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017a6b0L))(this);
        };
        void dtor_CGameObject()
        {
            using org_ptr = void (WINAPIV*)(struct CGameObject*);
            (org_ptr(0x14017a6b0L))(this);
        };
    };
END_ATF_NAMESPACE