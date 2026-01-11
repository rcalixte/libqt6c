#include "libqsqldriver.hpp"
#include "libqsqlerror.hpp"
#include "libqsqlindex.hpp"
#include "libqsqlquery.hpp"
#include "libqsqlrecord.hpp"
#include "../libqthread.hpp"
#include "libqsqldatabase.hpp"
#include "libqsqldatabase.h"

QSqlDriver* q_sqldrivercreatorbase_create_object(void* self) {
    return QSqlDriverCreatorBase_CreateObject((QSqlDriverCreatorBase*)self);
}

void q_sqldrivercreatorbase_operator_assign(void* self, void* param1) {
    QSqlDriverCreatorBase_OperatorAssign((QSqlDriverCreatorBase*)self, (QSqlDriverCreatorBase*)param1);
}

void q_sqldrivercreatorbase_delete(void* self) {
    QSqlDriverCreatorBase_Delete((QSqlDriverCreatorBase*)(self));
}

QSqlDatabase* q_sqldatabase_new() {
    return QSqlDatabase_new();
}

QSqlDatabase* q_sqldatabase_new2(void* other) {
    return QSqlDatabase_new2((QSqlDatabase*)other);
}

void q_sqldatabase_operator_assign(void* self, void* other) {
    QSqlDatabase_OperatorAssign((QSqlDatabase*)self, (QSqlDatabase*)other);
}

bool q_sqldatabase_open(void* self) {
    return QSqlDatabase_Open((QSqlDatabase*)self);
}

bool q_sqldatabase_open2(void* self, const char* user, const char* password) {
    return QSqlDatabase_Open2((QSqlDatabase*)self, qstring(user), qstring(password));
}

void q_sqldatabase_close(void* self) {
    QSqlDatabase_Close((QSqlDatabase*)self);
}

bool q_sqldatabase_is_open(void* self) {
    return QSqlDatabase_IsOpen((QSqlDatabase*)self);
}

bool q_sqldatabase_is_open_error(void* self) {
    return QSqlDatabase_IsOpenError((QSqlDatabase*)self);
}

const char** q_sqldatabase_tables(void* self) {
    libqt_list _arr = QSqlDatabase_Tables((QSqlDatabase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldatabase_tables");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QSqlIndex* q_sqldatabase_primary_index(void* self, const char* tablename) {
    return QSqlDatabase_PrimaryIndex((QSqlDatabase*)self, qstring(tablename));
}

QSqlRecord* q_sqldatabase_record(void* self, const char* tablename) {
    return QSqlDatabase_Record((QSqlDatabase*)self, qstring(tablename));
}

QSqlQuery* q_sqldatabase_exec(void* self) {
    return QSqlDatabase_Exec((QSqlDatabase*)self);
}

QSqlError* q_sqldatabase_last_error(void* self) {
    return QSqlDatabase_LastError((QSqlDatabase*)self);
}

bool q_sqldatabase_is_valid(void* self) {
    return QSqlDatabase_IsValid((QSqlDatabase*)self);
}

bool q_sqldatabase_transaction(void* self) {
    return QSqlDatabase_Transaction((QSqlDatabase*)self);
}

bool q_sqldatabase_commit(void* self) {
    return QSqlDatabase_Commit((QSqlDatabase*)self);
}

bool q_sqldatabase_rollback(void* self) {
    return QSqlDatabase_Rollback((QSqlDatabase*)self);
}

void q_sqldatabase_set_database_name(void* self, const char* name) {
    QSqlDatabase_SetDatabaseName((QSqlDatabase*)self, qstring(name));
}

void q_sqldatabase_set_user_name(void* self, const char* name) {
    QSqlDatabase_SetUserName((QSqlDatabase*)self, qstring(name));
}

void q_sqldatabase_set_password(void* self, const char* password) {
    QSqlDatabase_SetPassword((QSqlDatabase*)self, qstring(password));
}

void q_sqldatabase_set_host_name(void* self, const char* host) {
    QSqlDatabase_SetHostName((QSqlDatabase*)self, qstring(host));
}

void q_sqldatabase_set_port(void* self, int p) {
    QSqlDatabase_SetPort((QSqlDatabase*)self, p);
}

void q_sqldatabase_set_connect_options(void* self) {
    QSqlDatabase_SetConnectOptions((QSqlDatabase*)self);
}

const char* q_sqldatabase_database_name(void* self) {
    libqt_string _str = QSqlDatabase_DatabaseName((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldatabase_user_name(void* self) {
    libqt_string _str = QSqlDatabase_UserName((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldatabase_password(void* self) {
    libqt_string _str = QSqlDatabase_Password((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldatabase_host_name(void* self) {
    libqt_string _str = QSqlDatabase_HostName((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldatabase_driver_name(void* self) {
    libqt_string _str = QSqlDatabase_DriverName((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sqldatabase_port(void* self) {
    return QSqlDatabase_Port((QSqlDatabase*)self);
}

const char* q_sqldatabase_connect_options(void* self) {
    libqt_string _str = QSqlDatabase_ConnectOptions((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sqldatabase_connection_name(void* self) {
    libqt_string _str = QSqlDatabase_ConnectionName((QSqlDatabase*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sqldatabase_set_numerical_precision_policy(void* self, int32_t precisionPolicy) {
    QSqlDatabase_SetNumericalPrecisionPolicy((QSqlDatabase*)self, precisionPolicy);
}

int32_t q_sqldatabase_numerical_precision_policy(void* self) {
    return QSqlDatabase_NumericalPrecisionPolicy((QSqlDatabase*)self);
}

bool q_sqldatabase_move_to_thread(void* self, void* targetThread) {
    return QSqlDatabase_MoveToThread((QSqlDatabase*)self, (QThread*)targetThread);
}

QThread* q_sqldatabase_thread(void* self) {
    return QSqlDatabase_Thread((QSqlDatabase*)self);
}

QSqlDriver* q_sqldatabase_driver(void* self) {
    return QSqlDatabase_Driver((QSqlDatabase*)self);
}

QSqlDatabase* q_sqldatabase_add_database(const char* type) {
    return QSqlDatabase_AddDatabase(qstring(type));
}

QSqlDatabase* q_sqldatabase_add_database2(void* driver) {
    return QSqlDatabase_AddDatabase2((QSqlDriver*)driver);
}

QSqlDatabase* q_sqldatabase_clone_database(void* other, const char* connectionName) {
    return QSqlDatabase_CloneDatabase((QSqlDatabase*)other, qstring(connectionName));
}

QSqlDatabase* q_sqldatabase_clone_database2(const char* other, const char* connectionName) {
    return QSqlDatabase_CloneDatabase2(qstring(other), qstring(connectionName));
}

QSqlDatabase* q_sqldatabase_database() {
    return QSqlDatabase_Database();
}

void q_sqldatabase_remove_database(const char* connectionName) {
    QSqlDatabase_RemoveDatabase(qstring(connectionName));
}

bool q_sqldatabase_contains() {
    return QSqlDatabase_Contains();
}

const char** q_sqldatabase_drivers() {
    libqt_list _arr = QSqlDatabase_Drivers();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldatabase_drivers");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_sqldatabase_connection_names() {
    libqt_list _arr = QSqlDatabase_ConnectionNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldatabase_connection_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_sqldatabase_register_sql_driver(const char* name, void* creator) {
    QSqlDatabase_RegisterSqlDriver(qstring(name), (QSqlDriverCreatorBase*)creator);
}

bool q_sqldatabase_is_driver_available(const char* name) {
    return QSqlDatabase_IsDriverAvailable(qstring(name));
}

const char** q_sqldatabase_tables1(void* self, int32_t type) {
    libqt_list _arr = QSqlDatabase_Tables1((QSqlDatabase*)self, type);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sqldatabase_tables1");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QSqlQuery* q_sqldatabase_exec1(void* self, const char* query) {
    return QSqlDatabase_Exec1((QSqlDatabase*)self, qstring(query));
}

void q_sqldatabase_set_connect_options1(void* self, const char* options) {
    QSqlDatabase_SetConnectOptions1((QSqlDatabase*)self, qstring(options));
}

QSqlDatabase* q_sqldatabase_add_database22(const char* type, const char* connectionName) {
    return QSqlDatabase_AddDatabase22(qstring(type), qstring(connectionName));
}

QSqlDatabase* q_sqldatabase_add_database23(void* driver, const char* connectionName) {
    return QSqlDatabase_AddDatabase23((QSqlDriver*)driver, qstring(connectionName));
}

QSqlDatabase* q_sqldatabase_database1(const char* connectionName) {
    return QSqlDatabase_Database1(qstring(connectionName));
}

QSqlDatabase* q_sqldatabase_database2(const char* connectionName, bool open) {
    return QSqlDatabase_Database2(qstring(connectionName), open);
}

bool q_sqldatabase_contains1(const char* connectionName) {
    return QSqlDatabase_Contains1(qstring(connectionName));
}

void q_sqldatabase_delete(void* self) {
    QSqlDatabase_Delete((QSqlDatabase*)(self));
}
