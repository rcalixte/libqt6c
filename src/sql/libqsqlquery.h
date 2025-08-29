#pragma once
#ifndef SRC_SQLQT6C_LIBQSQLQUERY_H
#define SRC_SQLQT6C_LIBQSQLQUERY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsqlquery.html

/// q_sqlquery_new constructs a new QSqlQuery object.
///
/// @param r QSqlResult*
QSqlQuery* q_sqlquery_new(void* r);

/// q_sqlquery_new2 constructs a new QSqlQuery object.
///
QSqlQuery* q_sqlquery_new2();

/// q_sqlquery_new3 constructs a new QSqlQuery object.
///
/// @param db QSqlDatabase*
QSqlQuery* q_sqlquery_new3(void* db);

/// q_sqlquery_new4 constructs a new QSqlQuery object.
///
/// @param other QSqlQuery*
QSqlQuery* q_sqlquery_new4(void* other);

/// q_sqlquery_new5 constructs a new QSqlQuery object.
///
/// @param query const char*
QSqlQuery* q_sqlquery_new5(const char* query);

/// q_sqlquery_new6 constructs a new QSqlQuery object.
///
/// @param query const char*
/// @param db QSqlDatabase*
QSqlQuery* q_sqlquery_new6(const char* query, void* db);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#operator-eq)
///
/// @param self QSqlQuery*
/// @param other QSqlQuery*
void q_sqlquery_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#swap)
///
/// @param self QSqlQuery*
/// @param other QSqlQuery*
void q_sqlquery_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isValid)
///
/// @param self QSqlQuery*
bool q_sqlquery_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isActive)
///
/// @param self QSqlQuery*
bool q_sqlquery_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
///
/// @param self QSqlQuery*
/// @param field int
bool q_sqlquery_is_null(void* self, int field);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isNull)
///
/// @param self QSqlQuery*
/// @param name char*
bool q_sqlquery_is_null2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#at)
///
/// @param self QSqlQuery*
int32_t q_sqlquery_at(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#lastQuery)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlQuery*
const char* q_sqlquery_last_query(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#numRowsAffected)
///
/// @param self QSqlQuery*
int32_t q_sqlquery_num_rows_affected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#lastError)
///
/// @param self QSqlQuery*
QSqlError* q_sqlquery_last_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isSelect)
///
/// @param self QSqlQuery*
bool q_sqlquery_is_select(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#size)
///
/// @param self QSqlQuery*
int32_t q_sqlquery_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#driver)
///
/// @param self QSqlQuery*
const QSqlDriver* q_sqlquery_driver(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#result)
///
/// @param self QSqlQuery*
const QSqlResult* q_sqlquery_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isForwardOnly)
///
/// @param self QSqlQuery*
bool q_sqlquery_is_forward_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#record)
///
/// @param self QSqlQuery*
QSqlRecord* q_sqlquery_record(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#setForwardOnly)
///
/// @param self QSqlQuery*
/// @param forward bool
void q_sqlquery_set_forward_only(void* self, bool forward);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#exec)
///
/// @param self QSqlQuery*
/// @param query const char*
bool q_sqlquery_exec(void* self, const char* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#value)
///
/// @param self QSqlQuery*
/// @param i int
QVariant* q_sqlquery_value(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#value)
///
/// @param self QSqlQuery*
/// @param name char*
QVariant* q_sqlquery_value2(void* self, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#setNumericalPrecisionPolicy)
///
/// @param self QSqlQuery*
/// @param precisionPolicy enum QSql__NumericalPrecisionPolicy
void q_sqlquery_set_numerical_precision_policy(void* self, int32_t precisionPolicy);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#numericalPrecisionPolicy)
///
/// @param self QSqlQuery*
///
/// @return enum QSql__NumericalPrecisionPolicy
int32_t q_sqlquery_numerical_precision_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#setPositionalBindingEnabled)
///
/// @param self QSqlQuery*
/// @param enable bool
void q_sqlquery_set_positional_binding_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#isPositionalBindingEnabled)
///
/// @param self QSqlQuery*
bool q_sqlquery_is_positional_binding_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#seek)
///
/// @param self QSqlQuery*
/// @param i int
bool q_sqlquery_seek(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#next)
///
/// @param self QSqlQuery*
bool q_sqlquery_next(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#previous)
///
/// @param self QSqlQuery*
bool q_sqlquery_previous(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#first)
///
/// @param self QSqlQuery*
bool q_sqlquery_first(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#last)
///
/// @param self QSqlQuery*
bool q_sqlquery_last(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#clear)
///
/// @param self QSqlQuery*
void q_sqlquery_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#exec)
///
/// @param self QSqlQuery*
bool q_sqlquery_exec2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
///
/// @param self QSqlQuery*
bool q_sqlquery_exec_batch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#prepare)
///
/// @param self QSqlQuery*
/// @param query const char*
bool q_sqlquery_prepare(void* self, const char* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
///
/// @param self QSqlQuery*
/// @param placeholder const char*
/// @param val QVariant*
void q_sqlquery_bind_value(void* self, const char* placeholder, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
///
/// @param self QSqlQuery*
/// @param pos int
/// @param val QVariant*
void q_sqlquery_bind_value2(void* self, int pos, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
///
/// @param self QSqlQuery*
/// @param val QVariant*
void q_sqlquery_add_bind_value(void* self, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
///
/// @param self QSqlQuery*
/// @param placeholder const char*
QVariant* q_sqlquery_bound_value(void* self, const char* placeholder);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#boundValue)
///
/// @param self QSqlQuery*
/// @param pos int
QVariant* q_sqlquery_bound_value2(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#boundValues)
///
/// @param self QSqlQuery*
libqt_list /* of QVariant* */ q_sqlquery_bound_values(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#boundValueNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlQuery*
const char** q_sqlquery_bound_value_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#boundValueName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlQuery*
/// @param pos int
const char* q_sqlquery_bound_value_name(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#executedQuery)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSqlQuery*
const char* q_sqlquery_executed_query(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#lastInsertId)
///
/// @param self QSqlQuery*
QVariant* q_sqlquery_last_insert_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#finish)
///
/// @param self QSqlQuery*
void q_sqlquery_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#nextResult)
///
/// @param self QSqlQuery*
bool q_sqlquery_next_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#seek)
///
/// @param self QSqlQuery*
/// @param i int
/// @param relative bool
bool q_sqlquery_seek2(void* self, int i, bool relative);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#execBatch)
///
/// @param self QSqlQuery*
/// @param mode enum QSqlQuery__BatchExecutionMode
bool q_sqlquery_exec_batch1(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
///
/// @param self QSqlQuery*
/// @param placeholder const char*
/// @param val QVariant*
/// @param typeVal flag of enum QSql__ParamTypeFlag
void q_sqlquery_bind_value3(void* self, const char* placeholder, void* val, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#bindValue)
///
/// @param self QSqlQuery*
/// @param pos int
/// @param val QVariant*
/// @param typeVal flag of enum QSql__ParamTypeFlag
void q_sqlquery_bind_value32(void* self, int pos, void* val, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#addBindValue)
///
/// @param self QSqlQuery*
/// @param val QVariant*
/// @param typeVal flag of enum QSql__ParamTypeFlag
void q_sqlquery_add_bind_value2(void* self, void* val, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsqlquery.html#dtor.QSqlQuery)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlQuery*
void q_sqlquery_delete(void* self);

/// https://doc.qt.io/qt-6/qsqlquery.html#types

typedef enum {
    QSQLQUERY_BATCHEXECUTIONMODE_VALUESASROWS = 0,
    QSQLQUERY_BATCHEXECUTIONMODE_VALUESASCOLUMNS = 1
} QSqlQuery__BatchExecutionMode;

#endif
