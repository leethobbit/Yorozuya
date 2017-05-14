// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAttack.hpp"
#include "CCharacter.hpp"
#include "CMonster.hpp"
#include "_attack_param.hpp"


START_ATF_NAMESPACE
    struct  CMonsterAttack : CAttack
    {
        CMonster *m_pAttMonster;
    public:
        void AttackMonsterForce(struct _attack_param* pParam)
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
            (org_ptr(0x14015ba60L))(this, pParam);
        };
        void AttackMonsterGen(struct _attack_param* pParam, bool bMustMiss)
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, bool);
            (org_ptr(0x14015b300L))(this, pParam, bMustMiss);
        };
        void AttackMonsterSkill(struct _attack_param* pParam)
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
            (org_ptr(0x14015abd0L))(this, pParam);
        };
        CMonsterAttack(struct CCharacter* pThis)
			: CAttack(pThis)
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*);
            (org_ptr(0x14014f8e0L))(this, pThis);
        };
        void ctor_CMonsterAttack(struct CCharacter* pThis)
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*);
            (org_ptr(0x14014f8e0L))(this, pThis);
        };
        float ModifyMonsterAttFc(float fAttFc)
        {
            using org_ptr = float (WINAPIV*)(struct CMonsterAttack*, float);
            return (org_ptr(0x1401615b0L))(this, fAttFc);
        };
        int _CalcMonSkillAttPnt()
        {
            using org_ptr = int (WINAPIV*)(struct CMonsterAttack*);
            return (org_ptr(0x14015a6a0L))(this);
        };
    };
END_ATF_NAMESPACE