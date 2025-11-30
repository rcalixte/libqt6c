#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLDATABASE_H
#define SRC_SQL_QT6C_LIBQSQLDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsqldrivercreatorbase.html

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#createObject)
///
/// @param self QSqlDriverCreatorBase*
QSqlDriver* q_sqldrivercreatorbase_create_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#operator-eq)
///
/// @param self QSqlDriverCreatorBase*
/// @param param1 QSqlDriverCreatorBase*
void q_sqldrivercreatorbase_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldrivercreatorbase.html#dtor.QSqlDriverCreatorBase)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlDriverCreatorBase*
void q_sqldrivercreatorbase_delete(void* self);

/// https://doc.qt.io/qt-6/qsqldatabase.html

/// q_sqldatabase_new constructs a new QSqlDatabase object.
///
QSqlDatabase* q_sqldatabase_new();

/// q_sqldatabase_new2 constructs a new QSqlDatabase object.
///
/// @param other QSqlDatabase*
QSqlDatabase* q_sqldatabase_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#operator-eq)
///
/// @param self QSqlDatabase*
/// @param other QSqlDatabase*
void q_sqldatabase_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#open)
///
/// @param self QSqlDatabase*
/// @param user const char*
/// @param password const char*
bool q_sqldatabase_open2(void* self, const char* user, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#close)
///
/// @param self QSqlDatabase*
void q_sqldatabase_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpen)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_is_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isOpenError)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_is_open_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char** q_sqldatabase_tables(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#primaryIndex)
///
/// @param self QSqlDatabase*
/// @param tablename const char*
QSqlIndex* q_sqldatabase_primary_index(void* self, const char* tablename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#record)
///
/// @param self QSqlDatabase*
/// @param tablename const char*
QSqlRecord* q_sqldatabase_record(void* self, const char* tablename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
///
/// @param self QSqlDatabase*
QSqlQuery* q_sqldatabase_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#lastError)
///
/// @param self QSqlDatabase*
QSqlError* q_sqldatabase_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isValid)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#transaction)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#commit)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_commit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#rollback)
///
/// @param self QSqlDatabase*
bool q_sqldatabase_rollback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setDatabaseName)
///
/// @param self QSqlDatabase*
/// @param name const char*
void q_sqldatabase_set_database_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setUserName)
///
/// @param self QSqlDatabase*
/// @param name const char*
void q_sqldatabase_set_user_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPassword)
///
/// @param self QSqlDatabase*
/// @param password const char*
void q_sqldatabase_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setHostName)
///
/// @param self QSqlDatabase*
/// @param host const char*
void q_sqldatabase_set_host_name(void* self, const char* host);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setPort)
///
/// @param self QSqlDatabase*
/// @param p int
void q_sqldatabase_set_port(void* self, int p);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
///
/// @param self QSqlDatabase*
void q_sqldatabase_set_connect_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#databaseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_database_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#userName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_user_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#password)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#hostName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_host_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driverName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_driver_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#port)
///
/// @param self QSqlDatabase*
int32_t q_sqldatabase_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectOptions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_connect_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
const char* q_sqldatabase_connection_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setNumericalPrecisionPolicy)
///
/// @param self QSqlDatabase*
/// @param precisionPolicy enum QSql__NumericalPrecisionPolicy
void q_sqldatabase_set_numerical_precision_policy(void* self, int32_t precisionPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#numericalPrecisionPolicy)
///
/// @param self QSqlDatabase*
///
/// @return enum QSql__NumericalPrecisionPolicy
int32_t q_sqldatabase_numerical_precision_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#moveToThread)
///
/// @param self QSqlDatabase*
/// @param targetThread QThread*
bool q_sqldatabase_move_to_thread(void* self, void* targetThread);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#thread)
///
/// @param self QSqlDatabase*
QThread* q_sqldatabase_thread(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#driver)
///
/// @param self QSqlDatabase*
QSqlDriver* q_sqldatabase_driver(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
///
/// @param type const char*
QSqlDatabase* q_sqldatabase_add_database(const char* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
///
/// @param driver QSqlDriver*
QSqlDatabase* q_sqldatabase_add_database2(void* driver);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
///
/// @param other QSqlDatabase*
/// @param connectionName const char*
QSqlDatabase* q_sqldatabase_clone_database(void* other, const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#cloneDatabase)
///
/// @param other const char*
/// @param connectionName const char*
QSqlDatabase* q_sqldatabase_clone_database2(const char* other, const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
///
QSqlDatabase* q_sqldatabase_database();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#removeDatabase)
///
/// @param connectionName const char*
void q_sqldatabase_remove_database(const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
///
bool q_sqldatabase_contains();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#drivers)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_sqldatabase_drivers();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#connectionNames)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_sqldatabase_connection_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#registerSqlDriver)
///
/// @param name const char*
/// @param creator QSqlDriverCreatorBase*
void q_sqldatabase_register_sql_driver(const char* name, void* creator);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#isDriverAvailable)
///
/// @param name const char*
bool q_sqldatabase_is_driver_available(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#tables)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDatabase*
/// @param type enum QSql__TableType
const char** q_sqldatabase_tables1(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#exec)
///
/// @param self QSqlDatabase*
/// @param query const char*
QSqlQuery* q_sqldatabase_exec1(void* self, const char* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#setConnectOptions)
///
/// @param self QSqlDatabase*
/// @param options const char*
void q_sqldatabase_set_connect_options1(void* self, const char* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
///
/// @param type const char*
/// @param connectionName const char*
QSqlDatabase* q_sqldatabase_add_database22(const char* type, const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#addDatabase)
///
/// @param driver QSqlDriver*
/// @param connectionName const char*
QSqlDatabase* q_sqldatabase_add_database23(void* driver, const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
///
/// @param connectionName const char*
QSqlDatabase* q_sqldatabase_database1(const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#database)
///
/// @param connectionName const char*
/// @param open bool
QSqlDatabase* q_sqldatabase_database2(const char* connectionName, bool open);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#contains)
///
/// @param connectionName const char*
bool q_sqldatabase_contains1(const char* connectionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldatabase.html#dtor.QSqlDatabase)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlDatabase*
void q_sqldatabase_delete(void* self);

#endif
