#include <CGravityStoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CGravityStonector_CGravityStone2_ptr CGravityStonector_CGravityStone2_next(nullptr);
        Info::CGravityStonector_CGravityStone2_clbk CGravityStonector_CGravityStone2_user(nullptr);
        
        Info::CGravityStoneCheatGet4_ptr CGravityStoneCheatGet4_next(nullptr);
        Info::CGravityStoneCheatGet4_clbk CGravityStoneCheatGet4_user(nullptr);
        
        Info::CGravityStoneCheckTakeTimeLimit6_ptr CGravityStoneCheckTakeTimeLimit6_next(nullptr);
        Info::CGravityStoneCheckTakeTimeLimit6_clbk CGravityStoneCheckTakeTimeLimit6_user(nullptr);
        
        Info::CGravityStoneClear8_ptr CGravityStoneClear8_next(nullptr);
        Info::CGravityStoneClear8_clbk CGravityStoneClear8_user(nullptr);
        
        Info::CGravityStoneDestroy10_ptr CGravityStoneDestroy10_next(nullptr);
        Info::CGravityStoneDestroy10_clbk CGravityStoneDestroy10_user(nullptr);
        
        Info::CGravityStoneDrop12_ptr CGravityStoneDrop12_next(nullptr);
        Info::CGravityStoneDrop12_clbk CGravityStoneDrop12_user(nullptr);
        
        Info::CGravityStoneGet14_ptr CGravityStoneGet14_next(nullptr);
        Info::CGravityStoneGet14_clbk CGravityStoneGet14_user(nullptr);
        
        Info::CGravityStoneGetOwner16_ptr CGravityStoneGetOwner16_next(nullptr);
        Info::CGravityStoneGetOwner16_clbk CGravityStoneGetOwner16_user(nullptr);
        
        Info::CGravityStoneGetOwnerCurPos18_ptr CGravityStoneGetOwnerCurPos18_next(nullptr);
        Info::CGravityStoneGetOwnerCurPos18_clbk CGravityStoneGetOwnerCurPos18_user(nullptr);
        
        Info::CGravityStoneIsInTown20_ptr CGravityStoneIsInTown20_next(nullptr);
        Info::CGravityStoneIsInTown20_clbk CGravityStoneIsInTown20_user(nullptr);
        
        Info::CGravityStoneIsNearPosition22_ptr CGravityStoneIsNearPosition22_next(nullptr);
        Info::CGravityStoneIsNearPosition22_clbk CGravityStoneIsNearPosition22_user(nullptr);
        
        Info::CGravityStoneIsValidOwner24_ptr CGravityStoneIsValidOwner24_next(nullptr);
        Info::CGravityStoneIsValidOwner24_clbk CGravityStoneIsValidOwner24_user(nullptr);
        
        Info::CGravityStoneRegen26_ptr CGravityStoneRegen26_next(nullptr);
        Info::CGravityStoneRegen26_clbk CGravityStoneRegen26_user(nullptr);
        
        Info::CGravityStoneSendMsg_Create28_ptr CGravityStoneSendMsg_Create28_next(nullptr);
        Info::CGravityStoneSendMsg_Create28_clbk CGravityStoneSendMsg_Create28_user(nullptr);
        
        Info::CGravityStoneSendMsg_Destroy30_ptr CGravityStoneSendMsg_Destroy30_next(nullptr);
        Info::CGravityStoneSendMsg_Destroy30_clbk CGravityStoneSendMsg_Destroy30_user(nullptr);
        
        Info::CGravityStoneSendMsg_FixPosition32_ptr CGravityStoneSendMsg_FixPosition32_next(nullptr);
        Info::CGravityStoneSendMsg_FixPosition32_clbk CGravityStoneSendMsg_FixPosition32_user(nullptr);
        
        Info::CGravityStoneSetOwner34_ptr CGravityStoneSetOwner34_next(nullptr);
        Info::CGravityStoneSetOwner34_clbk CGravityStoneSetOwner34_user(nullptr);
        
        
        Info::CGravityStonedtor_CGravityStone39_ptr CGravityStonedtor_CGravityStone39_next(nullptr);
        Info::CGravityStonedtor_CGravityStone39_clbk CGravityStonedtor_CGravityStone39_user(nullptr);
        
        
        void CGravityStonector_CGravityStone2_wrapper(struct CGravityStone* _this, uint16_t wInx)
        {
           CGravityStonector_CGravityStone2_user(_this, wInx, CGravityStonector_CGravityStone2_next);
        };
        char CGravityStoneCheatGet4_wrapper(struct CGravityStone* _this, struct CPlayer* pkPlayer)
        {
           return CGravityStoneCheatGet4_user(_this, pkPlayer, CGravityStoneCheatGet4_next);
        };
        bool CGravityStoneCheckTakeTimeLimit6_wrapper(struct CGravityStone* _this)
        {
           return CGravityStoneCheckTakeTimeLimit6_user(_this, CGravityStoneCheckTakeTimeLimit6_next);
        };
        void CGravityStoneClear8_wrapper(struct CGravityStone* _this)
        {
           CGravityStoneClear8_user(_this, CGravityStoneClear8_next);
        };
        void CGravityStoneDestroy10_wrapper(struct CGravityStone* _this)
        {
           CGravityStoneDestroy10_user(_this, CGravityStoneDestroy10_next);
        };
        char CGravityStoneDrop12_wrapper(struct CGravityStone* _this, struct CPlayer* pkPlayer)
        {
           return CGravityStoneDrop12_user(_this, pkPlayer, CGravityStoneDrop12_next);
        };
        char CGravityStoneGet14_wrapper(struct CGravityStone* _this, uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer)
        {
           return CGravityStoneGet14_user(_this, wIndex, dwObjSerial, pkPlayer, CGravityStoneGet14_next);
        };
        struct CPlayer* CGravityStoneGetOwner16_wrapper(struct CGravityStone* _this)
        {
           return CGravityStoneGetOwner16_user(_this, CGravityStoneGetOwner16_next);
        };
        float* CGravityStoneGetOwnerCurPos18_wrapper(struct CGravityStone* _this)
        {
           return CGravityStoneGetOwnerCurPos18_user(_this, CGravityStoneGetOwnerCurPos18_next);
        };
        bool CGravityStoneIsInTown20_wrapper(struct CGravityStone* _this)
        {
           return CGravityStoneIsInTown20_user(_this, CGravityStoneIsInTown20_next);
        };
        bool CGravityStoneIsNearPosition22_wrapper(struct CGravityStone* _this, float* pfCurPos)
        {
           return CGravityStoneIsNearPosition22_user(_this, pfCurPos, CGravityStoneIsNearPosition22_next);
        };
        bool CGravityStoneIsValidOwner24_wrapper(struct CGravityStone* _this, struct CPlayer* pkPlayer)
        {
           return CGravityStoneIsValidOwner24_user(_this, pkPlayer, CGravityStoneIsValidOwner24_next);
        };
        bool CGravityStoneRegen26_wrapper(struct CGravityStone* _this, struct _object_create_setdata* pParam)
        {
           return CGravityStoneRegen26_user(_this, pParam, CGravityStoneRegen26_next);
        };
        void CGravityStoneSendMsg_Create28_wrapper(struct CGravityStone* _this)
        {
           CGravityStoneSendMsg_Create28_user(_this, CGravityStoneSendMsg_Create28_next);
        };
        void CGravityStoneSendMsg_Destroy30_wrapper(struct CGravityStone* _this)
        {
           CGravityStoneSendMsg_Destroy30_user(_this, CGravityStoneSendMsg_Destroy30_next);
        };
        void CGravityStoneSendMsg_FixPosition32_wrapper(struct CGravityStone* _this, int n)
        {
           CGravityStoneSendMsg_FixPosition32_user(_this, n, CGravityStoneSendMsg_FixPosition32_next);
        };
        void CGravityStoneSetOwner34_wrapper(struct CGravityStone* _this, struct CPlayer* pkPlayer)
        {
           CGravityStoneSetOwner34_user(_this, pkPlayer, CGravityStoneSetOwner34_next);
        };
        
        void CGravityStonedtor_CGravityStone39_wrapper(struct CGravityStone* _this)
        {
           CGravityStonedtor_CGravityStone39_user(_this, CGravityStonedtor_CGravityStone39_next);
        };
        
        ::std::array<hook_record, 18> CGravityStone_functions = 
        {
            _hook_record {
                (LPVOID)0x140164910L,
                (LPVOID *)&CGravityStonector_CGravityStone2_user,
                (LPVOID *)&CGravityStonector_CGravityStone2_next,
                (LPVOID)cast_pointer_function(CGravityStonector_CGravityStone2_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)(uint16_t))&CGravityStone::ctor_CGravityStone)
            },
            _hook_record {
                (LPVOID)0x1403f01b0L,
                (LPVOID *)&CGravityStoneCheatGet4_user,
                (LPVOID *)&CGravityStoneCheatGet4_next,
                (LPVOID)cast_pointer_function(CGravityStoneCheatGet4_wrapper),
                (LPVOID)cast_pointer_function((char(CGravityStone::*)(struct CPlayer*))&CGravityStone::CheatGet)
            },
            _hook_record {
                (LPVOID)0x1401650c0L,
                (LPVOID *)&CGravityStoneCheckTakeTimeLimit6_user,
                (LPVOID *)&CGravityStoneCheckTakeTimeLimit6_next,
                (LPVOID)cast_pointer_function(CGravityStoneCheckTakeTimeLimit6_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStone::*)())&CGravityStone::CheckTakeTimeLimit)
            },
            _hook_record {
                (LPVOID)0x140164db0L,
                (LPVOID *)&CGravityStoneClear8_user,
                (LPVOID *)&CGravityStoneClear8_next,
                (LPVOID)cast_pointer_function(CGravityStoneClear8_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)())&CGravityStone::Clear)
            },
            _hook_record {
                (LPVOID)0x140165060L,
                (LPVOID *)&CGravityStoneDestroy10_user,
                (LPVOID *)&CGravityStoneDestroy10_next,
                (LPVOID)cast_pointer_function(CGravityStoneDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)())&CGravityStone::Destroy)
            },
            _hook_record {
                (LPVOID)0x140164b50L,
                (LPVOID *)&CGravityStoneDrop12_user,
                (LPVOID *)&CGravityStoneDrop12_next,
                (LPVOID)cast_pointer_function(CGravityStoneDrop12_wrapper),
                (LPVOID)cast_pointer_function((char(CGravityStone::*)(struct CPlayer*))&CGravityStone::Drop)
            },
            _hook_record {
                (LPVOID)0x140164ce0L,
                (LPVOID *)&CGravityStoneGet14_user,
                (LPVOID *)&CGravityStoneGet14_next,
                (LPVOID)cast_pointer_function(CGravityStoneGet14_wrapper),
                (LPVOID)cast_pointer_function((char(CGravityStone::*)(uint16_t, unsigned int, struct CPlayer*))&CGravityStone::Get)
            },
            _hook_record {
                (LPVOID)0x140034ac0L,
                (LPVOID *)&CGravityStoneGetOwner16_user,
                (LPVOID *)&CGravityStoneGetOwner16_next,
                (LPVOID)cast_pointer_function(CGravityStoneGetOwner16_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CGravityStone::*)())&CGravityStone::GetOwner)
            },
            _hook_record {
                (LPVOID)0x140164f30L,
                (LPVOID *)&CGravityStoneGetOwnerCurPos18_user,
                (LPVOID *)&CGravityStoneGetOwnerCurPos18_next,
                (LPVOID)cast_pointer_function(CGravityStoneGetOwnerCurPos18_wrapper),
                (LPVOID)cast_pointer_function((float*(CGravityStone::*)())&CGravityStone::GetOwnerCurPos)
            },
            _hook_record {
                (LPVOID)0x140164ec0L,
                (LPVOID *)&CGravityStoneIsInTown20_user,
                (LPVOID *)&CGravityStoneIsInTown20_next,
                (LPVOID)cast_pointer_function(CGravityStoneIsInTown20_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStone::*)())&CGravityStone::IsInTown)
            },
            _hook_record {
                (LPVOID)0x1401652b0L,
                (LPVOID *)&CGravityStoneIsNearPosition22_user,
                (LPVOID *)&CGravityStoneIsNearPosition22_next,
                (LPVOID)cast_pointer_function(CGravityStoneIsNearPosition22_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStone::*)(float*))&CGravityStone::IsNearPosition)
            },
            _hook_record {
                (LPVOID)0x140164e30L,
                (LPVOID *)&CGravityStoneIsValidOwner24_user,
                (LPVOID *)&CGravityStoneIsValidOwner24_next,
                (LPVOID)cast_pointer_function(CGravityStoneIsValidOwner24_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStone::*)(struct CPlayer*))&CGravityStone::IsValidOwner)
            },
            _hook_record {
                (LPVOID)0x140164ad0L,
                (LPVOID *)&CGravityStoneRegen26_user,
                (LPVOID *)&CGravityStoneRegen26_next,
                (LPVOID)cast_pointer_function(CGravityStoneRegen26_wrapper),
                (LPVOID)cast_pointer_function((bool(CGravityStone::*)(struct _object_create_setdata*))&CGravityStone::Regen)
            },
            _hook_record {
                (LPVOID)0x140165140L,
                (LPVOID *)&CGravityStoneSendMsg_Create28_user,
                (LPVOID *)&CGravityStoneSendMsg_Create28_next,
                (LPVOID)cast_pointer_function(CGravityStoneSendMsg_Create28_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)())&CGravityStone::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140165220L,
                (LPVOID *)&CGravityStoneSendMsg_Destroy30_user,
                (LPVOID *)&CGravityStoneSendMsg_Destroy30_next,
                (LPVOID)cast_pointer_function(CGravityStoneSendMsg_Destroy30_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)())&CGravityStone::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140164f70L,
                (LPVOID *)&CGravityStoneSendMsg_FixPosition32_user,
                (LPVOID *)&CGravityStoneSendMsg_FixPosition32_next,
                (LPVOID)cast_pointer_function(CGravityStoneSendMsg_FixPosition32_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)(int))&CGravityStone::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140164a50L,
                (LPVOID *)&CGravityStoneSetOwner34_user,
                (LPVOID *)&CGravityStoneSetOwner34_next,
                (LPVOID)cast_pointer_function(CGravityStoneSetOwner34_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)(struct CPlayer*))&CGravityStone::SetOwner)
            },
            _hook_record {
                (LPVOID)0x140164a00L,
                (LPVOID *)&CGravityStonedtor_CGravityStone39_user,
                (LPVOID *)&CGravityStonedtor_CGravityStone39_next,
                (LPVOID)cast_pointer_function(CGravityStonedtor_CGravityStone39_wrapper),
                (LPVOID)cast_pointer_function((void(CGravityStone::*)())&CGravityStone::dtor_CGravityStone)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
