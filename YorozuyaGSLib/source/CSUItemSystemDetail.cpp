#include <CSUItemSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CSUItemSystemctor_CSUItemSystem2_ptr CSUItemSystemctor_CSUItemSystem2_next(nullptr);
        Info::CSUItemSystemctor_CSUItemSystem2_clbk CSUItemSystemctor_CSUItemSystem2_user(nullptr);
        
        Info::CSUItemSystemClass_Init4_ptr CSUItemSystemClass_Init4_next(nullptr);
        Info::CSUItemSystemClass_Init4_clbk CSUItemSystemClass_Init4_user(nullptr);
        
        Info::CSUItemSystemGetCRecordData_SetItem6_ptr CSUItemSystemGetCRecordData_SetItem6_next(nullptr);
        Info::CSUItemSystemGetCRecordData_SetItem6_clbk CSUItemSystemGetCRecordData_SetItem6_user(nullptr);
        
        Info::CSUItemSystemGetCSetItemType8_ptr CSUItemSystemGetCSetItemType8_next(nullptr);
        Info::CSUItemSystemGetCSetItemType8_clbk CSUItemSystemGetCSetItemType8_user(nullptr);
        
        Info::CSUItemSystemGetSetItemTableInfo10_ptr CSUItemSystemGetSetItemTableInfo10_next(nullptr);
        Info::CSUItemSystemGetSetItemTableInfo10_clbk CSUItemSystemGetSetItemTableInfo10_user(nullptr);
        
        Info::CSUItemSystemInstance12_ptr CSUItemSystemInstance12_next(nullptr);
        Info::CSUItemSystemInstance12_clbk CSUItemSystemInstance12_user(nullptr);
        
        Info::CSUItemSystemSUItemSystem_CheckData14_ptr CSUItemSystemSUItemSystem_CheckData14_next(nullptr);
        Info::CSUItemSystemSUItemSystem_CheckData14_clbk CSUItemSystemSUItemSystem_CheckData14_user(nullptr);
        
        Info::CSUItemSystemSUItemSystem_Init16_ptr CSUItemSystemSUItemSystem_Init16_next(nullptr);
        Info::CSUItemSystemSUItemSystem_Init16_clbk CSUItemSystemSUItemSystem_Init16_user(nullptr);
        
        Info::CSUItemSystemSUItemSystem_UnInit18_ptr CSUItemSystemSUItemSystem_UnInit18_next(nullptr);
        Info::CSUItemSystemSUItemSystem_UnInit18_clbk CSUItemSystemSUItemSystem_UnInit18_user(nullptr);
        
        
        Info::CSUItemSystemdtor_CSUItemSystem20_ptr CSUItemSystemdtor_CSUItemSystem20_next(nullptr);
        Info::CSUItemSystemdtor_CSUItemSystem20_clbk CSUItemSystemdtor_CSUItemSystem20_user(nullptr);
        
        
        void CSUItemSystemctor_CSUItemSystem2_wrapper(struct CSUItemSystem* _this)
        {
           CSUItemSystemctor_CSUItemSystem2_user(_this, CSUItemSystemctor_CSUItemSystem2_next);
        };
        void CSUItemSystemClass_Init4_wrapper(struct CSUItemSystem* _this)
        {
           CSUItemSystemClass_Init4_user(_this, CSUItemSystemClass_Init4_next);
        };
        struct CRecordData* CSUItemSystemGetCRecordData_SetItem6_wrapper(struct CSUItemSystem* _this)
        {
           return CSUItemSystemGetCRecordData_SetItem6_user(_this, CSUItemSystemGetCRecordData_SetItem6_next);
        };
        struct CSetItemType* CSUItemSystemGetCSetItemType8_wrapper(struct CSUItemSystem* _this)
        {
           return CSUItemSystemGetCSetItemType8_user(_this, CSUItemSystemGetCSetItemType8_next);
        };
        int CSUItemSystemGetSetItemTableInfo10_wrapper(struct CSUItemSystem* _this, unsigned int dwSetItemEff, char* pStrCode, int nBufSize)
        {
           return CSUItemSystemGetSetItemTableInfo10_user(_this, dwSetItemEff, pStrCode, nBufSize, CSUItemSystemGetSetItemTableInfo10_next);
        };
        struct CSUItemSystem* CSUItemSystemInstance12_wrapper()
        {
           return CSUItemSystemInstance12_user(CSUItemSystemInstance12_next);
        };
        bool CSUItemSystemSUItemSystem_CheckData14_wrapper(struct CSUItemSystem* _this)
        {
           return CSUItemSystemSUItemSystem_CheckData14_user(_this, CSUItemSystemSUItemSystem_CheckData14_next);
        };
        bool CSUItemSystemSUItemSystem_Init16_wrapper(struct CSUItemSystem* _this)
        {
           return CSUItemSystemSUItemSystem_Init16_user(_this, CSUItemSystemSUItemSystem_Init16_next);
        };
        bool CSUItemSystemSUItemSystem_UnInit18_wrapper(struct CSUItemSystem* _this)
        {
           return CSUItemSystemSUItemSystem_UnInit18_user(_this, CSUItemSystemSUItemSystem_UnInit18_next);
        };
        
        void CSUItemSystemdtor_CSUItemSystem20_wrapper(struct CSUItemSystem* _this)
        {
           CSUItemSystemdtor_CSUItemSystem20_user(_this, CSUItemSystemdtor_CSUItemSystem20_next);
        };
        
        ::std::array<hook_record, 10> CSUItemSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e3d70L,
                (LPVOID *)&CSUItemSystemctor_CSUItemSystem2_user,
                (LPVOID *)&CSUItemSystemctor_CSUItemSystem2_next,
                (LPVOID)cast_pointer_function(CSUItemSystemctor_CSUItemSystem2_wrapper),
                (LPVOID)cast_pointer_function((void(CSUItemSystem::*)())&CSUItemSystem::ctor_CSUItemSystem)
            },
            _hook_record {
                (LPVOID)0x1402e3f40L,
                (LPVOID *)&CSUItemSystemClass_Init4_user,
                (LPVOID *)&CSUItemSystemClass_Init4_next,
                (LPVOID)cast_pointer_function(CSUItemSystemClass_Init4_wrapper),
                (LPVOID)cast_pointer_function((void(CSUItemSystem::*)())&CSUItemSystem::Class_Init)
            },
            _hook_record {
                (LPVOID)0x1402e4680L,
                (LPVOID *)&CSUItemSystemGetCRecordData_SetItem6_user,
                (LPVOID *)&CSUItemSystemGetCRecordData_SetItem6_next,
                (LPVOID)cast_pointer_function(CSUItemSystemGetCRecordData_SetItem6_wrapper),
                (LPVOID)cast_pointer_function((struct CRecordData*(CSUItemSystem::*)())&CSUItemSystem::GetCRecordData_SetItem)
            },
            _hook_record {
                (LPVOID)0x1402e46d0L,
                (LPVOID *)&CSUItemSystemGetCSetItemType8_user,
                (LPVOID *)&CSUItemSystemGetCSetItemType8_next,
                (LPVOID)cast_pointer_function(CSUItemSystemGetCSetItemType8_wrapper),
                (LPVOID)cast_pointer_function((struct CSetItemType*(CSUItemSystem::*)())&CSUItemSystem::GetCSetItemType)
            },
            _hook_record {
                (LPVOID)0x1402e4280L,
                (LPVOID *)&CSUItemSystemGetSetItemTableInfo10_user,
                (LPVOID *)&CSUItemSystemGetSetItemTableInfo10_next,
                (LPVOID)cast_pointer_function(CSUItemSystemGetSetItemTableInfo10_wrapper),
                (LPVOID)cast_pointer_function((int(CSUItemSystem::*)(unsigned int, char*, int))&CSUItemSystem::GetSetItemTableInfo)
            },
            _hook_record {
                (LPVOID)0x1402e3cb0L,
                (LPVOID *)&CSUItemSystemInstance12_user,
                (LPVOID *)&CSUItemSystemInstance12_next,
                (LPVOID)cast_pointer_function(CSUItemSystemInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct CSUItemSystem*(*)())&CSUItemSystem::Instance)
            },
            _hook_record {
                (LPVOID)0x1402e4100L,
                (LPVOID *)&CSUItemSystemSUItemSystem_CheckData14_user,
                (LPVOID *)&CSUItemSystemSUItemSystem_CheckData14_next,
                (LPVOID)cast_pointer_function(CSUItemSystemSUItemSystem_CheckData14_wrapper),
                (LPVOID)cast_pointer_function((bool(CSUItemSystem::*)())&CSUItemSystem::SUItemSystem_CheckData)
            },
            _hook_record {
                (LPVOID)0x1402e3f80L,
                (LPVOID *)&CSUItemSystemSUItemSystem_Init16_user,
                (LPVOID *)&CSUItemSystemSUItemSystem_Init16_next,
                (LPVOID)cast_pointer_function(CSUItemSystemSUItemSystem_Init16_wrapper),
                (LPVOID)cast_pointer_function((bool(CSUItemSystem::*)())&CSUItemSystem::SUItemSystem_Init)
            },
            _hook_record {
                (LPVOID)0x1402e40c0L,
                (LPVOID *)&CSUItemSystemSUItemSystem_UnInit18_user,
                (LPVOID *)&CSUItemSystemSUItemSystem_UnInit18_next,
                (LPVOID)cast_pointer_function(CSUItemSystemSUItemSystem_UnInit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CSUItemSystem::*)())&CSUItemSystem::SUItemSystem_UnInit)
            },
            _hook_record {
                (LPVOID)0x1402e3e60L,
                (LPVOID *)&CSUItemSystemdtor_CSUItemSystem20_user,
                (LPVOID *)&CSUItemSystemdtor_CSUItemSystem20_next,
                (LPVOID)cast_pointer_function(CSUItemSystemdtor_CSUItemSystem20_wrapper),
                (LPVOID)cast_pointer_function((void(CSUItemSystem::*)())&CSUItemSystem::dtor_CSUItemSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
