// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_personal_amine_inven_db_load_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_ptr _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next(nullptr);
        static info::_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_clbk _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user(nullptr);
        
        static void _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_wrapper(struct _personal_amine_inven_db_load* _this)
        {
           _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user(_this, _personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next);
        };
        
        static hook_record _personal_amine_inven_db_load_functions[] = {
        {   (LPVOID)0x14010deb0L,
            (LPVOID *)&_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_user,
            (LPVOID *)&_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_next,
            (LPVOID)cast_pointer_function(_personal_amine_inven_db_loadctor__personal_amine_inven_db_load2_wrapper),
            (LPVOID)cast_pointer_function((void(_personal_amine_inven_db_load::*)())&_personal_amine_inven_db_load::ctor__personal_amine_inven_db_load) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE