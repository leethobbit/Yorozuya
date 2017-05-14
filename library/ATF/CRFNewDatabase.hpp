// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"
#include "CRFNewDatabaseVtbl.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CRFNewDatabase
    {
        CRFNewDatabaseVtbl *vfptr;
        void *m_hEnv;
        void *m_hDbc;
        void *m_hStmtSelect;
        void *m_hStmtUpdate;
        bool m_bConectionActive;
        bool m_bSaveDBLog;
        CLogFile m_ProcessLogW;
        CLogFile m_ErrorLogW;
        CLogFile m_ProcessLogA;
        CLogFile m_ErrorLogA;
        char m_byLogFileHour;
        char m_szOdbcName[32];
        char m_szAccountName[32];
        char m_szPassword[32];
        bool m_bReconnectFailExit;
        char m_szLogUpperPath[128];
    public:
        bool AllocSelectHandle()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x1404875a0L))(this);
        };
        bool AllocUpdateHandle()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x140487620L))(this);
        };
        CRFNewDatabase()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x140485f80L))(this);
        };
        void ctor_CRFNewDatabase()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x140485f80L))(this);
        };
        void CheckLogFileHour()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x140487a50L))(this);
        };
        bool CommitTransaction()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x1404874c0L))(this);
        };
        bool ConfigUserODBC(char* szDSN, char* szServer, char* szDatabase, uint16_t wPort)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*, uint16_t);
            return (org_ptr(0x1404880c0L))(this, szDSN, szServer, szDatabase, wPort);
        };
        void DiagRecALog(int16_t sqlRet, int16_t HandleType, void* Handle)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
            (org_ptr(0x1404862c0L))(this, sqlRet, HandleType, Handle);
        };
        void DiagRecWLog(int16_t sqlRet, int16_t HandleType, void* Handle)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
            (org_ptr(0x140486420L))(this, sqlRet, HandleType, Handle);
        };
        void EndDataBase()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x1404869c0L))(this);
        };
        bool EroorActionProcSQL_ERROR(void* SQLStmt)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, void*);
            return (org_ptr(0x140486d40L))(this, SQLStmt);
        };
        void ErrFmtLog(char* fmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
            (org_ptr(0x140484e30L))(this, fmt);
        };
        void ErrFmtLog(wchar_t* lpcwFmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
            (org_ptr(0x140489450L))(this, lpcwFmt);
        };
        void ErrLog(char* szLog)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
            (org_ptr(0x1404894f0L))(this, szLog);
        };
        void ErrorAction(int16_t sqlRet, void* SQLStmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, void*);
            (org_ptr(0x140486c70L))(this, sqlRet, SQLStmt);
        };
        void ErrorMsgLog(int16_t sqlRet, char* strQuery, char* strKind, void* SQLStmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, char*, char*, void*);
            (org_ptr(0x140486ec0L))(this, sqlRet, strQuery, strKind, SQLStmt);
        };
        void ErrorMsgLog(int16_t sqlRet, wchar_t* strQuery, wchar_t* strKind, void* SQLStmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, wchar_t*, wchar_t*, void*);
            (org_ptr(0x140487060L))(this, sqlRet, strQuery, strKind, SQLStmt);
        };
        bool ExecUpdateBinaryQuery(char* strQuery, void* buf, int size, bool bNoDataError)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, void*, int, bool);
            return (org_ptr(0x140488250L))(this, strQuery, buf, size, bNoDataError);
        };
        bool ExecUpdateQuery(char* strQuery, bool bNoDataError)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, bool);
            return (org_ptr(0x1404872f0L))(this, strQuery, bNoDataError);
        };
        bool ExecUpdateQuery(wchar_t* wstrQuery, bool bNoDataError)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, bool);
            return (org_ptr(0x1404871a0L))(this, wstrQuery, bNoDataError);
        };
        void FmtLog(char* fmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
            (org_ptr(0x140484d90L))(this, fmt);
        };
        void FmtLog(wchar_t* lpcwFmt)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
            (org_ptr(0x140489550L))(this, lpcwFmt);
        };
        bool FreeSelectHandle()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x1404876a0L))(this);
        };
        bool FreeUpdateHandle()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x140487730L))(this);
        };
        char GetLocalHour()
        {
            using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x140487000L))(this);
        };
        bool IsConectionActive()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x1401c7760L))(this);
        };
        void Log(char* szLog)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
            (org_ptr(0x140484d30L))(this, szLog);
        };
        bool ReConnectDataBase()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x140486b00L))(this);
        };
        bool RollbackTransaction()
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
            return (org_ptr(0x140487530L))(this);
        };
        char SQLExecDirect_RetErrCode(char* strQuery)
        {
            using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
            return (org_ptr(0x140484ed0L))(this, strQuery);
        };
        char SQLFetch_RetErrCode(char* strQuery)
        {
            using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
            return (org_ptr(0x140485020L))(this, strQuery);
        };
        char SQLGetData_Binary_RetErrCode(char* strQuery, uint16_t* ColumnNumber, char* pData, uint64_t tDataSize)
        {
            using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, char*, uint64_t);
            return (org_ptr(0x1404da460L))(this, strQuery, ColumnNumber, pData, tDataSize);
        };
        char SQLGetData_RetErrCode(char* strQuery, uint16_t* ColumnNumber, int16_t TargetType, void* TargetValue)
        {
            using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, int16_t, void*);
            return (org_ptr(0x140485130L))(this, strQuery, ColumnNumber, TargetType, TargetValue);
        };
        void SelectCleanUp(char* strQuery)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
            (org_ptr(0x140485300L))(this, strQuery);
        };
        bool Select_NextHourDate(char byAddHour, char* szDate)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char, char*);
            return (org_ptr(0x140487d50L))(this, byAddHour, szDate);
        };
        void SetAutoCommitMode(bool bAutoCommit)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
            (org_ptr(0x140487440L))(this, bAutoCommit);
        };
        void SetLogFile(char* szUpperLogPath, char* szOdbcName)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*, char*);
            (org_ptr(0x140488640L))(this, szUpperLogPath, szOdbcName);
        };
        void SetReconnectFailExitFlag(bool bFlag)
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
            (org_ptr(0x1402f2ab0L))(this, bFlag);
        };
        bool StartDataBase(char* odbcName, char* accountName, char* passWord)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*);
            return (org_ptr(0x140486580L))(this, odbcName, accountName, passWord);
        };
        bool TableExist(char* szTableName)
        {
            using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*);
            return (org_ptr(0x1404877c0L))(this, szTableName);
        };
        ~CRFNewDatabase()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x140486150L))(this);
        };
        void dtor_CRFNewDatabase()
        {
            using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
            (org_ptr(0x140486150L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE