// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMergeFile.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CMergeFileGetFileOffset1_ptr = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*);
        using CMergeFileGetFileOffset1_clbk = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*, CMergeFileGetFileOffset1_ptr);
        using CMergeFileGetFileSize2_ptr = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*);
        using CMergeFileGetFileSize2_clbk = uint32_t (WINAPIV*)(struct CMergeFile*, uint32_t, char*, CMergeFileGetFileSize2_ptr);
        using CMergeFileIsExistFile3_ptr = int (WINAPIV*)(struct CMergeFile*, char*);
        using CMergeFileIsExistFile3_clbk = int (WINAPIV*)(struct CMergeFile*, char*, CMergeFileIsExistFile3_ptr);
        using CMergeFileLoadFileOffset4_ptr = struct _iobuf* (WINAPIV*)(struct CMergeFile*, char*, char*);
        using CMergeFileLoadFileOffset4_clbk = struct _iobuf* (WINAPIV*)(struct CMergeFile*, char*, char*, CMergeFileLoadFileOffset4_ptr);
        using CMergeFileLoadMergeFileHeader5_ptr = int64_t (WINAPIV*)(struct CMergeFile*, char*);
        using CMergeFileLoadMergeFileHeader5_clbk = int64_t (WINAPIV*)(struct CMergeFile*, char*, CMergeFileLoadMergeFileHeader5_ptr);
        using CMergeFileReleaseMergeFileHeader6_ptr = void (WINAPIV*)(struct CMergeFile*);
        using CMergeFileReleaseMergeFileHeader6_clbk = void (WINAPIV*)(struct CMergeFile*, CMergeFileReleaseMergeFileHeader6_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE