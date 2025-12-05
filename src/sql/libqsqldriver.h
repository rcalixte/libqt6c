#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLDRIVER_H
#define SRC_SQL_QT6C_LIBQSQLDRIVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html)

/// q_sqldriver_new constructs a new QSqlDriver object.
///
QSqlDriver* q_sqldriver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html)

/// q_sqldriver_new2 constructs a new QSqlDriver object.
///
/// @param parent QObject*
///
QSqlDriver* q_sqldriver_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSqlDriver*
///
const QMetaObject* q_sqldriver_meta_object(void* self);

/// @param self QSqlDriver*
/// @param param1 const char*
///
void* q_sqldriver_metacast(void* self, const char* param1);

/// @param self QSqlDriver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqldriver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback int32_t func(QSqlDriver* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sqldriver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqldriver_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_sqldriver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_is_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func()
///
void q_sqldriver_on_is_open(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpen)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
bool q_sqldriver_qbase_is_open(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isOpenError)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_is_open_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_begin_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func()
///
void q_sqldriver_on_begin_transaction(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#beginTransaction)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
bool q_sqldriver_qbase_begin_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_commit_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func()
///
void q_sqldriver_on_commit_transaction(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#commitTransaction)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
bool q_sqldriver_qbase_commit_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_rollback_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func()
///
void q_sqldriver_on_rollback_transaction(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#rollbackTransaction)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
bool q_sqldriver_qbase_rollback_transaction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
/// @param tableType enum QSql__TableType
///
const char** q_sqldriver_tables(void* self, int32_t tableType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char** func(QSqlDriver* self, enum QSql__TableType tableType)
///
void q_sqldriver_on_tables(void* self, const char** (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#tables)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param tableType enum QSql__TableType
///
const char** q_sqldriver_qbase_tables(void* self, int32_t tableType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
///
/// @param self QSqlDriver*
/// @param tableName const char*
///
QSqlIndex* q_sqldriver_primary_index(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback QSqlIndex* func(QSqlDriver* self, const char* tableName)
///
void q_sqldriver_on_primary_index(void* self, QSqlIndex* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#primaryIndex)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param tableName const char*
///
QSqlIndex* q_sqldriver_qbase_primary_index(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
///
/// @param self QSqlDriver*
/// @param tableName const char*
///
QSqlRecord* q_sqldriver_record(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback QSqlRecord* func(QSqlDriver* self, const char* tableName)
///
void q_sqldriver_on_record(void* self, QSqlRecord* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#record)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param tableName const char*
///
QSqlRecord* q_sqldriver_qbase_record(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
/// @param field QSqlField*
/// @param trimStrings bool
///
const char* q_sqldriver_format_value(void* self, void* field, bool trimStrings);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char* func(QSqlDriver* self, QSqlField* field, bool trimStrings)
///
void q_sqldriver_on_format_value(void* self, const char* (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#formatValue)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param field QSqlField*
/// @param trimStrings bool
///
const char* q_sqldriver_qbase_format_value(void* self, void* field, bool trimStrings);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
const char* q_sqldriver_escape_identifier(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char* func(QSqlDriver* self, const char* identifier, enum QSqlDriver__IdentifierType type)
///
void q_sqldriver_on_escape_identifier(void* self, const char* (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#escapeIdentifier)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
const char* q_sqldriver_qbase_escape_identifier(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
/// @param type enum QSqlDriver__StatementType
/// @param tableName const char*
/// @param rec QSqlRecord*
/// @param preparedStatement bool
///
const char* q_sqldriver_sql_statement(void* self, int32_t type, const char* tableName, void* rec, bool preparedStatement);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char* func(QSqlDriver* self, enum QSqlDriver__StatementType type, const char* tableName, QSqlRecord* rec, bool preparedStatement)
///
void q_sqldriver_on_sql_statement(void* self, const char* (*callback)(void*, int32_t, const char*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#sqlStatement)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param type enum QSqlDriver__StatementType
/// @param tableName const char*
/// @param rec QSqlRecord*
/// @param preparedStatement bool
///
const char* q_sqldriver_qbase_sql_statement(void* self, int32_t type, const char* tableName, void* rec, bool preparedStatement);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#lastError)
///
/// @param self QSqlDriver*
///
QSqlError* q_sqldriver_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
///
/// @param self QSqlDriver*
///
QVariant* q_sqldriver_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback QVariant* func()
///
void q_sqldriver_on_handle(void* self, QVariant* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#handle)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
QVariant* q_sqldriver_qbase_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
///
/// @param self QSqlDriver*
/// @param f enum QSqlDriver__DriverFeature
///
bool q_sqldriver_has_feature(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, enum QSqlDriver__DriverFeature f)
///
void q_sqldriver_on_has_feature(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#hasFeature)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param f enum QSqlDriver__DriverFeature
///
bool q_sqldriver_qbase_has_feature(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
///
/// @param self QSqlDriver*
///
void q_sqldriver_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback void func()
///
void q_sqldriver_on_close(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#close)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
void q_sqldriver_qbase_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
///
/// @param self QSqlDriver*
///
QSqlResult* q_sqldriver_create_result(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback QSqlResult* func()
///
void q_sqldriver_on_create_result(void* self, QSqlResult* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#createResult)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
QSqlResult* q_sqldriver_qbase_create_result(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
///
/// @param self QSqlDriver*
/// @param db const char*
/// @param user const char*
/// @param password const char*
/// @param host const char*
/// @param port int
/// @param connOpts const char*
///
bool q_sqldriver_open(void* self, const char* db, const char* user, const char* password, const char* host, int port, const char* connOpts);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, const char* db, const char* user, const char* password, const char* host, int port, const char* connOpts)
///
void q_sqldriver_on_open(void* self, bool (*callback)(void*, const char*, const char*, const char*, const char*, int, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#open)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param db const char*
/// @param user const char*
/// @param password const char*
/// @param host const char*
/// @param port int
/// @param connOpts const char*
///
bool q_sqldriver_qbase_open(void* self, const char* db, const char* user, const char* password, const char* host, int port, const char* connOpts);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
///
/// @param self QSqlDriver*
/// @param name const char*
///
bool q_sqldriver_subscribe_to_notification(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, const char* name)
///
void q_sqldriver_on_subscribe_to_notification(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribeToNotification)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param name const char*
///
bool q_sqldriver_qbase_subscribe_to_notification(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
///
/// @param self QSqlDriver*
/// @param name const char*
///
bool q_sqldriver_unsubscribe_from_notification(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, const char* name)
///
void q_sqldriver_on_unsubscribe_from_notification(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#unsubscribeFromNotification)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param name const char*
///
bool q_sqldriver_qbase_unsubscribe_from_notification(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
///
const char** q_sqldriver_subscribed_to_notifications(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char** func()
///
void q_sqldriver_on_subscribed_to_notifications(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#subscribedToNotifications)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
const char** q_sqldriver_qbase_subscribed_to_notifications(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
bool q_sqldriver_is_identifier_escaped(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, const char* identifier, enum QSqlDriver__IdentifierType type)
///
void q_sqldriver_on_is_identifier_escaped(void* self, bool (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#isIdentifierEscaped)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
bool q_sqldriver_qbase_is_identifier_escaped(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
const char* q_sqldriver_strip_delimiters(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback const char* func(QSqlDriver* self, const char* identifier, enum QSqlDriver__IdentifierType type)
///
void q_sqldriver_on_strip_delimiters(void* self, const char* (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#stripDelimiters)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param identifier const char*
/// @param type enum QSqlDriver__IdentifierType
///
const char* q_sqldriver_qbase_strip_delimiters(void* self, const char* identifier, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setNumericalPrecisionPolicy)
///
/// @param self QSqlDriver*
/// @param precisionPolicy enum QSql__NumericalPrecisionPolicy
///
void q_sqldriver_set_numerical_precision_policy(void* self, int32_t precisionPolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#numericalPrecisionPolicy)
///
/// @param self QSqlDriver*
///
/// @return enum QSql__NumericalPrecisionPolicy
///
int32_t q_sqldriver_numerical_precision_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dbmsType)
///
/// @param self QSqlDriver*
///
/// @return enum QSqlDriver__DbmsType
///
int32_t q_sqldriver_dbms_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
///
/// @param self QSqlDriver*
/// @param type enum QSqlDriver__IdentifierType
///
int32_t q_sqldriver_maximum_identifier_length(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback int32_t func(QSqlDriver* self, enum QSqlDriver__IdentifierType type)
///
void q_sqldriver_on_maximum_identifier_length(void* self, int32_t (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#maximumIdentifierLength)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param type enum QSqlDriver__IdentifierType
///
int32_t q_sqldriver_qbase_maximum_identifier_length(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_cancel_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback bool func()
///
void q_sqldriver_on_cancel_query(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#cancelQuery)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
///
bool q_sqldriver_qbase_cancel_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
///
/// @param self QSqlDriver*
/// @param name const char*
/// @param source enum QSqlDriver__NotificationSource
/// @param payload QVariant*
///
void q_sqldriver_notification(void* self, const char* name, int32_t source, void* payload);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#notification)
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, const char* name, enum QSqlDriver__NotificationSource source, QVariant* payload)
///
void q_sqldriver_on_notification(void* self, void (*callback)(void*, const char*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
///
/// @param self QSqlDriver*
/// @param o bool
///
void q_sqldriver_set_open(void* self, bool o);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, bool o)
///
void q_sqldriver_on_set_open(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpen)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param o bool
///
void q_sqldriver_qbase_set_open(void* self, bool o);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
///
/// @param self QSqlDriver*
/// @param e bool
///
void q_sqldriver_set_open_error(void* self, bool e);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, bool e)
///
void q_sqldriver_on_set_open_error(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setOpenError)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param e bool
///
void q_sqldriver_qbase_set_open_error(void* self, bool e);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
///
/// @param self QSqlDriver*
/// @param e QSqlError*
///
void q_sqldriver_set_last_error(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
///
/// Allows for overriding the related default method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QSqlError* e)
///
void q_sqldriver_on_set_last_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#setLastError)
///
/// Base class method implementation
///
/// @param self QSqlDriver*
/// @param e QSqlError*
///
void q_sqldriver_qbase_set_last_error(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_sqldriver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sqldriver_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
///
const char* q_sqldriver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSqlDriver*
/// @param name char*
///
void q_sqldriver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSqlDriver*
///
bool q_sqldriver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSqlDriver*
/// @param b bool
///
bool q_sqldriver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSqlDriver*
///
QThread* q_sqldriver_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlDriver*
/// @param thread QThread*
///
bool q_sqldriver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlDriver*
/// @param interval int
///
int32_t q_sqldriver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlDriver*
/// @param id int
///
void q_sqldriver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlDriver*
/// @param id enum Qt__TimerId
///
void q_sqldriver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSqlDriver*
///
libqt_list /* of QObject* */ q_sqldriver_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSqlDriver*
/// @param parent QObject*
///
void q_sqldriver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSqlDriver*
/// @param filterObj QObject*
///
void q_sqldriver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSqlDriver*
/// @param obj QObject*
///
void q_sqldriver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sqldriver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlDriver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sqldriver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sqldriver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sqldriver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSqlDriver*
///
void q_sqldriver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSqlDriver*
///
void q_sqldriver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSqlDriver*
/// @param name const char*
/// @param value QVariant*
///
bool q_sqldriver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSqlDriver*
/// @param name const char*
///
QVariant* q_sqldriver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlDriver*
///
const char** q_sqldriver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlDriver*
///
QBindingStorage* q_sqldriver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlDriver*
///
const QBindingStorage* q_sqldriver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlDriver*
///
void q_sqldriver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self)
///
void q_sqldriver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSqlDriver*
///
QObject* q_sqldriver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSqlDriver*
/// @param classname const char*
///
bool q_sqldriver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSqlDriver*
///
void q_sqldriver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlDriver*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_sqldriver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlDriver*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sqldriver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqldriver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlDriver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqldriver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlDriver*
/// @param param1 QObject*
///
void q_sqldriver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QObject* param1)
///
void q_sqldriver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QEvent*
///
bool q_sqldriver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QEvent*
///
bool q_sqldriver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, QEvent* event)
///
void q_sqldriver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqldriver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqldriver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, QObject* watched, QEvent* event)
///
void q_sqldriver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QTimerEvent*
///
void q_sqldriver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QTimerEvent*
///
void q_sqldriver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QTimerEvent* event)
///
void q_sqldriver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QChildEvent*
///
void q_sqldriver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QChildEvent*
///
void q_sqldriver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QChildEvent* event)
///
void q_sqldriver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QEvent*
///
void q_sqldriver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param event QEvent*
///
void q_sqldriver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QEvent* event)
///
void q_sqldriver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
void q_sqldriver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
void q_sqldriver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QMetaMethod* signal)
///
void q_sqldriver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
void q_sqldriver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
void q_sqldriver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, QMetaMethod* signal)
///
void q_sqldriver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
///
QObject* q_sqldriver_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
///
QObject* q_sqldriver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback QObject* func()
///
void q_sqldriver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
///
int32_t q_sqldriver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
///
int32_t q_sqldriver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback int32_t func()
///
void q_sqldriver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal const char*
///
int32_t q_sqldriver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal const char*
///
int32_t q_sqldriver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback int32_t func(QSqlDriver* self, const char* signal)
///
void q_sqldriver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
bool q_sqldriver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param signal QMetaMethod*
///
bool q_sqldriver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlDriver*
/// @param callback bool func(QSqlDriver* self, QMetaMethod* signal)
///
void q_sqldriver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlDriver*
/// @param callback void func(QSqlDriver* self, const char* objectName)
///
void q_sqldriver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#dtor.QSqlDriver)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlDriver*
///
void q_sqldriver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)

typedef enum {
    QSQLDRIVER_DRIVERFEATURE_TRANSACTIONS = 0,
    QSQLDRIVER_DRIVERFEATURE_QUERYSIZE = 1,
    QSQLDRIVER_DRIVERFEATURE_BLOB = 2,
    QSQLDRIVER_DRIVERFEATURE_UNICODE = 3,
    QSQLDRIVER_DRIVERFEATURE_PREPAREDQUERIES = 4,
    QSQLDRIVER_DRIVERFEATURE_NAMEDPLACEHOLDERS = 5,
    QSQLDRIVER_DRIVERFEATURE_POSITIONALPLACEHOLDERS = 6,
    QSQLDRIVER_DRIVERFEATURE_LASTINSERTID = 7,
    QSQLDRIVER_DRIVERFEATURE_BATCHOPERATIONS = 8,
    QSQLDRIVER_DRIVERFEATURE_SIMPLELOCKING = 9,
    QSQLDRIVER_DRIVERFEATURE_LOWPRECISIONNUMBERS = 10,
    QSQLDRIVER_DRIVERFEATURE_EVENTNOTIFICATIONS = 11,
    QSQLDRIVER_DRIVERFEATURE_FINISHQUERY = 12,
    QSQLDRIVER_DRIVERFEATURE_MULTIPLERESULTSETS = 13,
    QSQLDRIVER_DRIVERFEATURE_CANCELQUERY = 14
} QSqlDriver__DriverFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)

typedef enum {
    QSQLDRIVER_STATEMENTTYPE_WHERESTATEMENT = 0,
    QSQLDRIVER_STATEMENTTYPE_SELECTSTATEMENT = 1,
    QSQLDRIVER_STATEMENTTYPE_UPDATESTATEMENT = 2,
    QSQLDRIVER_STATEMENTTYPE_INSERTSTATEMENT = 3,
    QSQLDRIVER_STATEMENTTYPE_DELETESTATEMENT = 4
} QSqlDriver__StatementType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)

typedef enum {
    QSQLDRIVER_IDENTIFIERTYPE_FIELDNAME = 0,
    QSQLDRIVER_IDENTIFIERTYPE_TABLENAME = 1
} QSqlDriver__IdentifierType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)

typedef enum {
    QSQLDRIVER_NOTIFICATIONSOURCE_UNKNOWNSOURCE = 0,
    QSQLDRIVER_NOTIFICATIONSOURCE_SELFSOURCE = 1,
    QSQLDRIVER_NOTIFICATIONSOURCE_OTHERSOURCE = 2
} QSqlDriver__NotificationSource;

/// [Upstream resources](https://doc.qt.io/qt-6/qsqldriver.html#public-types)

typedef enum {
    QSQLDRIVER_DBMSTYPE_UNKNOWNDBMS = 0,
    QSQLDRIVER_DBMSTYPE_MSSQLSERVER = 1,
    QSQLDRIVER_DBMSTYPE_MYSQLSERVER = 2,
    QSQLDRIVER_DBMSTYPE_POSTGRESQL = 3,
    QSQLDRIVER_DBMSTYPE_ORACLE = 4,
    QSQLDRIVER_DBMSTYPE_SYBASE = 5,
    QSQLDRIVER_DBMSTYPE_SQLITE = 6,
    QSQLDRIVER_DBMSTYPE_INTERBASE = 7,
    QSQLDRIVER_DBMSTYPE_DB2 = 8,
    QSQLDRIVER_DBMSTYPE_MIMERSQL = 9
} QSqlDriver__DbmsType;

#endif
