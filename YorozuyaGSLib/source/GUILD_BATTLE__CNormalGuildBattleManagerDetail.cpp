#include <GUILD_BATTLE__CNormalGuildBattleManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAdd2_ptr GUILD_BATTLE__CNormalGuildBattleManagerAdd2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAdd2_clbk GUILD_BATTLE__CNormalGuildBattleManagerAdd2_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_ptr GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_clbk GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_ptr GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_clbk GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_ptr GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_clbk GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_ptr GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_clbk GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_ptr GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_clbk GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_ptr GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_clbk GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerClear16_ptr GUILD_BATTLE__CNormalGuildBattleManagerClear16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerClear16_clbk GUILD_BATTLE__CNormalGuildBattleManagerClear16_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerClear18_ptr GUILD_BATTLE__CNormalGuildBattleManagerClear18_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerClear18_clbk GUILD_BATTLE__CNormalGuildBattleManagerClear18_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_ptr GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_clbk GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_ptr GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_clbk GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_ptr GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_clbk GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerFlip26_ptr GUILD_BATTLE__CNormalGuildBattleManagerFlip26_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerFlip26_clbk GUILD_BATTLE__CNormalGuildBattleManagerFlip26_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_ptr GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_clbk GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_ptr GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_clbk GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerInit32_ptr GUILD_BATTLE__CNormalGuildBattleManagerInit32_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerInit32_clbk GUILD_BATTLE__CNormalGuildBattleManagerInit32_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerInstance34_ptr GUILD_BATTLE__CNormalGuildBattleManagerInstance34_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerInstance34_clbk GUILD_BATTLE__CNormalGuildBattleManagerInstance34_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerJoin36_ptr GUILD_BATTLE__CNormalGuildBattleManagerJoin36_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerJoin36_clbk GUILD_BATTLE__CNormalGuildBattleManagerJoin36_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_ptr GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_clbk GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerKill40_ptr GUILD_BATTLE__CNormalGuildBattleManagerKill40_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerKill40_clbk GUILD_BATTLE__CNormalGuildBattleManagerKill40_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_ptr GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_clbk GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoad44_ptr GUILD_BATTLE__CNormalGuildBattleManagerLoad44_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoad44_clbk GUILD_BATTLE__CNormalGuildBattleManagerLoad44_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoad46_ptr GUILD_BATTLE__CNormalGuildBattleManagerLoad46_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoad46_clbk GUILD_BATTLE__CNormalGuildBattleManagerLoad46_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_ptr GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_clbk GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_ptr GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_clbk GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoop52_ptr GUILD_BATTLE__CNormalGuildBattleManagerLoop52_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerLoop52_clbk GUILD_BATTLE__CNormalGuildBattleManagerLoop52_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_ptr GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_clbk GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_ptr GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_clbk GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_ptr GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_clbk GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_ptr GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_clbk GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_ptr GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_clbk GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_ptr GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_clbk GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSave66_ptr GUILD_BATTLE__CNormalGuildBattleManagerSave66_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSave66_clbk GUILD_BATTLE__CNormalGuildBattleManagerSave66_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_ptr GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_clbk GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_ptr GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_clbk GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_ptr GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_clbk GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerStart74_ptr GUILD_BATTLE__CNormalGuildBattleManagerStart74_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerStart74_clbk GUILD_BATTLE__CNormalGuildBattleManagerStart74_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_ptr GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_clbk GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_ptr GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_clbk GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_user(nullptr);
            
            char GUILD_BATTLE__CNormalGuildBattleManagerAdd2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, unsigned int dwElapseTimeCnt, char byNumber, unsigned int dwMapCode)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerAdd2_user(_this, pSrcGuild, pDestGuild, dwStartTime, dwElapseTimeCnt, byNumber, dwMapCode, GUILD_BATTLE__CNormalGuildBattleManagerAdd2_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, char byRet, unsigned int dwBattleID)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_user(_this, byRet, dwBattleID, GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, uint16_t wIndex, unsigned int dwObjSerial, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_user(_this, wIndex, dwObjSerial, n, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial, int iPortalInx)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_user(_this, n, dwGuildSerial, dwCharacSerial, iPortalInx, GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int iPortalInx, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_user(_this, iPortalInx, n, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerClear16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerClear16_user(_this, ppkStart, GUILD_BATTLE__CNormalGuildBattleManagerClear16_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerClear18_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerClear18_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerClear18_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_wrapper()
            {
               GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_user(GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_user(_this, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerFlip26_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerFlip26_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerFlip26_next);
            };
            struct GUILD_BATTLE::CNormalGuildBattle* GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwID)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_user(_this, dwID, GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_next);
            };
            struct GUILD_BATTLE::CNormalGuildBattle* GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_user(_this, dwGuildSerial, GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerInit32_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerInit32_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerInit32_next);
            };
            struct GUILD_BATTLE::CNormalGuildBattleManager* GUILD_BATTLE__CNormalGuildBattleManagerInstance34_wrapper()
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerInstance34_user(GUILD_BATTLE__CNormalGuildBattleManagerInstance34_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerJoin36_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerJoin36_user(_this, n, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerJoin36_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_user(_this, n, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleManagerKill40_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwSrcCharacSerial, unsigned int dwDestCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerKill40_user(_this, dwGuildSerial, dwSrcCharacSerial, dwDestCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerKill40_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, struct CPlayer* pkPlayer)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_user(_this, pkPlayer, GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerLoad44_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, bool bToday, unsigned int uiDayID, struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerLoad44_user(_this, bToday, uiDayID, ppkStart, GUILD_BATTLE__CNormalGuildBattleManagerLoad44_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerLoad46_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTodayDayID, int iTomorrow, int iTomorrowDayID)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerLoad46_user(_this, iCurDay, uiOldMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID, GUILD_BATTLE__CNormalGuildBattleManagerLoad46_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwStartID, struct _worlddb_guild_battle_info* kInfo)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_user(_this, dwStartID, kInfo, GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_user(_this, n, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerLoop52_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerLoop52_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerLoop52_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwCharacSerial, struct CPlayer* pkPlayer)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_user(_this, dwGuildSerial, dwCharacSerial, pkPlayer, GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, uint16_t wIndex, unsigned int dwObjSerial, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_user(_this, wIndex, dwObjSerial, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwCharacSerial, int iPortalInx)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_user(_this, dwGuildSerial, dwCharacSerial, iPortalInx, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, int iPortalInx, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_user(_this, iPortalInx, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_user(_this, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int uiFieldInx, unsigned int uiSLID, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, struct GUILD_BATTLE::CGuildBattleSchedule* pkSchedule)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_user(_this, uiFieldInx, uiSLID, pkBattle, pkSchedule, GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerSave66_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwID)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerSave66_user(_this, dwID, GUILD_BATTLE__CNormalGuildBattleManagerSave66_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_user(_this, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, struct GUILD_BATTLE::CNormalGuildBattle** ppkStart)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_user(_this, ppkStart, GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_next);
            };
            char GUILD_BATTLE__CNormalGuildBattleManagerStart74_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, struct CPlayer* pkPlayer, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerStart74_user(_this, pkPlayer, dwGuildSerial, dwCharacSerial, GUILD_BATTLE__CNormalGuildBattleManagerStart74_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this, unsigned int dwStartSID, unsigned int dwEndSID)
            {
               return GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_user(_this, dwStartSID, dwEndSID, GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_wrapper(struct GUILD_BATTLE::CNormalGuildBattleManager* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_user(_this, GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_next);
            };
            
            ::std::array<hook_record, 39> CNormalGuildBattleManager_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403d3dc0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAdd2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAdd2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerAdd2_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::Add)
                },
                _hook_record {
                    (LPVOID)0x1403d4060L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(char, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::AddComplete)
                },
                _hook_record {
                    (LPVOID)0x1403d4fd0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::AddDefaultDBRecord)
                },
                _hook_record {
                    (LPVOID)0x1403d33c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::ctor_CNormalGuildBattleManager)
                },
                _hook_record {
                    (LPVOID)0x1403d4800L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(uint16_t, unsigned int, int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::CheckGetGravityStone)
                },
                _hook_record {
                    (LPVOID)0x1403d4910L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, unsigned int, int))&GUILD_BATTLE::CNormalGuildBattleManager::CheckGoal)
                },
                _hook_record {
                    (LPVOID)0x1403d4700L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::CheckTakeGravityStone)
                },
                _hook_record {
                    (LPVOID)0x1403d5400L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerClear16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerClear16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerClear16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(struct GUILD_BATTLE::CNormalGuildBattle**))&GUILD_BATTLE::CNormalGuildBattleManager::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403d4280L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerClear18_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerClear18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerClear18_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403d35f0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_wrapper),
                    (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CNormalGuildBattleManager::Destroy)
                },
                _hook_record {
                    (LPVOID)0x1403d4220L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::DoDayChangedWork)
                },
                _hook_record {
                    (LPVOID)0x1403d4a10L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::DropGravityStone)
                },
                _hook_record {
                    (LPVOID)0x1403d41c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerFlip26_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerFlip26_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerFlip26_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::Flip)
                },
                _hook_record {
                    (LPVOID)0x1403d5520L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattle*(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::GetBattle)
                },
                _hook_record {
                    (LPVOID)0x1403d5580L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattle*(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::GetBattleByGuildSerial)
                },
                _hook_record {
                    (LPVOID)0x1403d3670L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerInit32_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerInit32_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerInit32_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::Init)
                },
                _hook_record {
                    (LPVOID)0x1403d3530L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerInstance34_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerInstance34_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerInstance34_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CNormalGuildBattleManager*(*)())&GUILD_BATTLE::CNormalGuildBattleManager::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403d4420L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerJoin36_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerJoin36_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerJoin36_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::Join)
                },
                _hook_record {
                    (LPVOID)0x1403d4bb0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::JoinGuild)
                },
                _hook_record {
                    (LPVOID)0x1403d4b20L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerKill40_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerKill40_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerKill40_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::Kill)
                },
                _hook_record {
                    (LPVOID)0x1403d4c60L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(struct CPlayer*))&GUILD_BATTLE::CNormalGuildBattleManager::LeaveGuild)
                },
                _hook_record {
                    (LPVOID)0x1403d4d90L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoad44_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoad44_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLoad44_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle**))&GUILD_BATTLE::CNormalGuildBattleManager::Load)
                },
                _hook_record {
                    (LPVOID)0x1403d38f0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoad46_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoad46_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLoad46_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, int, int, int, int))&GUILD_BATTLE::CNormalGuildBattleManager::Load)
                },
                _hook_record {
                    (LPVOID)0x1403d4f40L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, struct _worlddb_guild_battle_info*))&GUILD_BATTLE::CNormalGuildBattleManager::LoadDBGuildBattleInfo)
                },
                _hook_record {
                    (LPVOID)0x1403d4360L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::LogIn)
                },
                _hook_record {
                    (LPVOID)0x1403d4110L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoop52_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerLoop52_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerLoop52_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403d4a90L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int, struct CPlayer*))&GUILD_BATTLE::CNormalGuildBattleManager::NetClose)
                },
                _hook_record {
                    (LPVOID)0x1403d52c0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(uint16_t, unsigned int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckGetGravityStone)
                },
                _hook_record {
                    (LPVOID)0x1403d5360L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int, int))&GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckGoal)
                },
                _hook_record {
                    (LPVOID)0x1403d5220L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(int, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::ProcCheckTakeGravityStone)
                },
                _hook_record {
                    (LPVOID)0x1403d5190L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::ProcJoin)
                },
                _hook_record {
                    (LPVOID)0x1403d5050L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle*, struct GUILD_BATTLE::CGuildBattleSchedule*))&GUILD_BATTLE::CNormalGuildBattleManager::PushDQSData)
                },
                _hook_record {
                    (LPVOID)0x1403d3d10L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSave66_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSave66_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerSave66_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::Save)
                },
                _hook_record {
                    (LPVOID)0x1403d4cd0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::SendMemberPosition)
                },
                _hook_record {
                    (LPVOID)0x1403ded80L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::SetNextEvent)
                },
                _hook_record {
                    (LPVOID)0x1403d5480L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)(struct GUILD_BATTLE::CNormalGuildBattle**))&GUILD_BATTLE::CNormalGuildBattleManager::SetReadyState)
                },
                _hook_record {
                    (LPVOID)0x1403d44e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerStart74_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerStart74_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerStart74_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CNormalGuildBattleManager::*)(struct CPlayer*, unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::Start)
                },
                _hook_record {
                    (LPVOID)0x1403d42e0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleManager::*)(unsigned int, unsigned int))&GUILD_BATTLE::CNormalGuildBattleManager::UpdateClearGuildBattleDayInfo)
                },
                _hook_record {
                    (LPVOID)0x1403d3430L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleManager::*)())&GUILD_BATTLE::CNormalGuildBattleManager::dtor_CNormalGuildBattleManager)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
