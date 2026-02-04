#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLRELATIONALTABLEMODEL_H
#define SRC_SQL_QT6C_LIBQSQLRELATIONALTABLEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html)

/// q_sqlrelation_new constructs a new QSqlRelation object.
///
QSqlRelation* q_sqlrelation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html)

/// q_sqlrelation_new2 constructs a new QSqlRelation object.
///
/// @param aTableName const char*
/// @param indexCol const char*
/// @param displayCol const char*
///
QSqlRelation* q_sqlrelation_new2(const char* aTableName, const char* indexCol, const char* displayCol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html)

/// q_sqlrelation_new3 constructs a new QSqlRelation object.
///
/// @param param1 QSqlRelation*
///
QSqlRelation* q_sqlrelation_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#swap)
///
/// @param self QSqlRelation*
/// @param other QSqlRelation*
///
void q_sqlrelation_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#tableName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelation*
///
const char* q_sqlrelation_table_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#indexColumn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelation*
///
const char* q_sqlrelation_index_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#displayColumn)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelation*
///
const char* q_sqlrelation_display_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#isValid)
///
/// @param self QSqlRelation*
///
bool q_sqlrelation_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelation.html#dtor.QSqlRelation)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlRelation*
///
void q_sqlrelation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html)

/// q_sqlrelationaltablemodel_new constructs a new QSqlRelationalTableModel object.
///
QSqlRelationalTableModel* q_sqlrelationaltablemodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html)

/// q_sqlrelationaltablemodel_new2 constructs a new QSqlRelationalTableModel object.
///
/// @param parent QObject*
///
QSqlRelationalTableModel* q_sqlrelationaltablemodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html)

/// q_sqlrelationaltablemodel_new3 constructs a new QSqlRelationalTableModel object.
///
/// @param parent QObject*
/// @param db QSqlDatabase*
///
QSqlRelationalTableModel* q_sqlrelationaltablemodel_new3(void* parent, void* db);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSqlRelationalTableModel*
///
const QMetaObject* q_sqlrelationaltablemodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback const QMetaObject* func()
///
void q_sqlrelationaltablemodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
///
const QMetaObject* q_sqlrelationaltablemodel_qbase_meta_object(void* self);

/// @param self QSqlRelationalTableModel*
/// @param param1 const char*
///
void* q_sqlrelationaltablemodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void* func(QSqlRelationalTableModel* self, const char* param1)
///
void q_sqlrelationaltablemodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param param1 const char*
///
void* q_sqlrelationaltablemodel_qbase_metacast(void* self, const char* param1);

/// @param self QSqlRelationalTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqlrelationaltablemodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func(QSqlRelationalTableModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sqlrelationaltablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqlrelationaltablemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sqlrelationaltablemodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlrelationaltablemodel_data(void* self, void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QVariant* func(QSqlRelationalTableModel* self, QModelIndex* item, int role)
///
void q_sqlrelationaltablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#data)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlrelationaltablemodel_qbase_data(void* self, void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqlrelationaltablemodel_set_data(void* self, void* item, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* item, QVariant* value, int role)
///
void q_sqlrelationaltablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setData)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqlrelationaltablemodel_qbase_set_data(void* self, void* item, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#clear)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_select(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func()
///
void q_sqlrelationaltablemodel_on_select(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#select)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_qbase_select(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
///
/// @param self QSqlRelationalTableModel*
/// @param tableName const char*
///
void q_sqlrelationaltablemodel_set_table(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, const char* tableName)
///
void q_sqlrelationaltablemodel_on_set_table(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setTable)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param tableName const char*
///
void q_sqlrelationaltablemodel_qbase_set_table(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param relation QSqlRelation*
///
void q_sqlrelationaltablemodel_set_relation(void* self, int column, void* relation);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int column, QSqlRelation* relation)
///
void q_sqlrelationaltablemodel_on_set_relation(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setRelation)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param relation QSqlRelation*
///
void q_sqlrelationaltablemodel_qbase_set_relation(void* self, int column, void* relation);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relation)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
///
QSqlRelation* q_sqlrelationaltablemodel_relation(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
///
QSqlTableModel* q_sqlrelationaltablemodel_relation_model(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QSqlTableModel* func(QSqlRelationalTableModel* self, int column)
///
void q_sqlrelationaltablemodel_on_relation_model(void* self, QSqlTableModel* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#relationModel)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param column int
///
QSqlTableModel* q_sqlrelationaltablemodel_qbase_relation_model(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#setJoinMode)
///
/// @param self QSqlRelationalTableModel*
/// @param joinMode enum QSqlRelationalTableModel__JoinMode
///
void q_sqlrelationaltablemodel_set_join_mode(void* self, int32_t joinMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
void q_sqlrelationaltablemodel_revert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int row)
///
void q_sqlrelationaltablemodel_on_revert_row(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#revertRow)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
void q_sqlrelationaltablemodel_qbase_revert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_select_statement(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback const char* func()
///
void q_sqlrelationaltablemodel_on_select_statement(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#selectStatement)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_qbase_select_statement(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param values QSqlRecord*
///
bool q_sqlrelationaltablemodel_update_row_in_table(void* self, int row, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row, QSqlRecord* values)
///
void q_sqlrelationaltablemodel_on_update_row_in_table(void* self, bool (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#updateRowInTable)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param values QSqlRecord*
///
bool q_sqlrelationaltablemodel_qbase_update_row_in_table(void* self, int row, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
///
/// @param self QSqlRelationalTableModel*
/// @param values QSqlRecord*
///
bool q_sqlrelationaltablemodel_insert_row_into_table(void* self, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QSqlRecord* values)
///
void q_sqlrelationaltablemodel_on_insert_row_into_table(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#insertRowIntoTable)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param values QSqlRecord*
///
bool q_sqlrelationaltablemodel_qbase_insert_row_into_table(void* self, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_order_by_clause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback const char* func()
///
void q_sqlrelationaltablemodel_on_order_by_clause(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#orderByClause)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_qbase_order_by_clause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sqlrelationaltablemodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sqlrelationaltablemodel_tr3(const char* s, const char* c, int n);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#tableName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_table_name(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
///
/// @param self QSqlRelationalTableModel*
///
QSqlRecord* q_sqlrelationaltablemodel_record(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
QSqlRecord* q_sqlrelationaltablemodel_record2(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_is_dirty(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
bool q_sqlrelationaltablemodel_is_dirty2(void* self, void* index);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#editStrategy)
///
/// @param self QSqlRelationalTableModel*
///
/// @return enum QSqlTableModel__EditStrategy
///
int32_t q_sqlrelationaltablemodel_edit_strategy(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryKey)
///
/// @param self QSqlRelationalTableModel*
///
QSqlIndex* q_sqlrelationaltablemodel_primary_key(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#database)
///
/// @param self QSqlRelationalTableModel*
///
QSqlDatabase* q_sqlrelationaltablemodel_database(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#fieldIndex)
///
/// @param self QSqlRelationalTableModel*
/// @param fieldName const char*
///
int32_t q_sqlrelationaltablemodel_field_index(void* self, const char* fieldName);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#filter)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_filter(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRecord)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param record QSqlRecord*
///
bool q_sqlrelationaltablemodel_insert_record(void* self, int row, void* record);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setRecord)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param record QSqlRecord*
///
bool q_sqlrelationaltablemodel_set_record(void* self, int row, void* record);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submitAll)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_submit_all(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertAll)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_revert_all(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param record QSqlRecord*
///
void q_sqlrelationaltablemodel_prime_insert(void* self, int row, void* record);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int row, QSqlRecord* record)
///
void q_sqlrelationaltablemodel_on_prime_insert(void* self, void (*callback)(void*, int, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
///
/// @param self QSqlRelationalTableModel*
/// @param record QSqlRecord*
///
void q_sqlrelationaltablemodel_before_insert(void* self, void* record);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QSqlRecord* record)
///
void q_sqlrelationaltablemodel_on_before_insert(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param record QSqlRecord*
///
void q_sqlrelationaltablemodel_before_update(void* self, int row, void* record);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int row, QSqlRecord* record)
///
void q_sqlrelationaltablemodel_on_before_update(void* self, void (*callback)(void*, int, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
void q_sqlrelationaltablemodel_before_delete(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int row)
///
void q_sqlrelationaltablemodel_on_before_delete(void* self, void (*callback)(void*, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlRelationalTableModel*
/// @param query QSqlQuery*
///
void q_sqlrelationaltablemodel_set_query(void* self, void* query);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlRelationalTableModel*
/// @param query const char*
///
void q_sqlrelationaltablemodel_set_query2(void* self, const char* query);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
///
/// @param self QSqlRelationalTableModel*
///
const QSqlQuery* q_sqlrelationaltablemodel_query(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
///
/// @param self QSqlRelationalTableModel*
///
QSqlError* q_sqlrelationaltablemodel_last_error(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlRelationalTableModel*
/// @param query const char*
/// @param db QSqlDatabase*
///
void q_sqlrelationaltablemodel_set_query22(void* self, const char* query, void* db);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
///
bool q_sqlrelationaltablemodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QSqlRelationalTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, QModelIndex* child)
///
void q_sqlrelationaltablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
///
bool q_sqlrelationaltablemodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
///
bool q_sqlrelationaltablemodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
bool q_sqlrelationaltablemodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_sqlrelationaltablemodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_sqlrelationaltablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_sqlrelationaltablemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self)
///
void q_sqlrelationaltablemodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self)
///
void q_sqlrelationaltablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_sqlrelationaltablemodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_sqlrelationaltablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_sqlrelationaltablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_sqlrelationaltablemodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_sqlrelationaltablemodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqlrelationaltablemodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqlrelationaltablemodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_sqlrelationaltablemodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_sqlrelationaltablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqlrelationaltablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqlrelationaltablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlRelationalTableModel*
///
const char* q_sqlrelationaltablemodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSqlRelationalTableModel*
/// @param name char*
///
void q_sqlrelationaltablemodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSqlRelationalTableModel*
/// @param b bool
///
bool q_sqlrelationaltablemodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSqlRelationalTableModel*
///
QThread* q_sqlrelationaltablemodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlRelationalTableModel*
/// @param thread QThread*
///
bool q_sqlrelationaltablemodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param interval int
///
int32_t q_sqlrelationaltablemodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param time int64_t of nanoseconds
///
int32_t q_sqlrelationaltablemodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param id int
///
void q_sqlrelationaltablemodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param id enum Qt__TimerId
///
void q_sqlrelationaltablemodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSqlRelationalTableModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_sqlrelationaltablemodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSqlRelationalTableModel*
/// @param parent QObject*
///
void q_sqlrelationaltablemodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSqlRelationalTableModel*
/// @param filterObj QObject*
///
void q_sqlrelationaltablemodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSqlRelationalTableModel*
/// @param obj QObject*
///
void q_sqlrelationaltablemodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sqlrelationaltablemodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sqlrelationaltablemodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlRelationalTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sqlrelationaltablemodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlrelationaltablemodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sqlrelationaltablemodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
/// @param receiver QObject*
///
bool q_sqlrelationaltablemodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sqlrelationaltablemodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSqlRelationalTableModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_sqlrelationaltablemodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSqlRelationalTableModel*
/// @param name const char*
///
QVariant* q_sqlrelationaltablemodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSqlRelationalTableModel*
///
const char** q_sqlrelationaltablemodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlRelationalTableModel*
///
QBindingStorage* q_sqlrelationaltablemodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlRelationalTableModel*
///
const QBindingStorage* q_sqlrelationaltablemodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self)
///
void q_sqlrelationaltablemodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSqlRelationalTableModel*
/// @param classname const char*
///
bool q_sqlrelationaltablemodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sqlrelationaltablemodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlRelationalTableModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sqlrelationaltablemodel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqlrelationaltablemodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sqlrelationaltablemodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlRelationalTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqlrelationaltablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
/// @param signal const char*
///
bool q_sqlrelationaltablemodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sqlrelationaltablemodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlrelationaltablemodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlRelationalTableModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlrelationaltablemodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlRelationalTableModel*
/// @param param1 QObject*
///
void q_sqlrelationaltablemodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QObject* param1)
///
void q_sqlrelationaltablemodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlrelationaltablemodel_flags(void* self, void* index);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlrelationaltablemodel_qbase_flags(void* self, void* index);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func(QSqlRelationalTableModel* self, QModelIndex* index)
///
void q_sqlrelationaltablemodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
bool q_sqlrelationaltablemodel_clear_item_data(void* self, void* index);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* index)
///
void q_sqlrelationaltablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlrelationaltablemodel_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlrelationaltablemodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QVariant* func(QSqlRelationalTableModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_sqlrelationaltablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param strategy enum QSqlTableModel__EditStrategy
///
void q_sqlrelationaltablemodel_set_edit_strategy(void* self, int32_t strategy);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param strategy enum QSqlTableModel__EditStrategy
///
void q_sqlrelationaltablemodel_qbase_set_edit_strategy(void* self, int32_t strategy);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, enum QSqlTableModel__EditStrategy strategy)
///
void q_sqlrelationaltablemodel_on_set_edit_strategy(void* self, void (*callback)(void*, int32_t));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlrelationaltablemodel_sort(void* self, int column, int32_t order);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlrelationaltablemodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int column, enum Qt__SortOrder order)
///
void q_sqlrelationaltablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlrelationaltablemodel_set_sort(void* self, int column, int32_t order);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlrelationaltablemodel_qbase_set_sort(void* self, int column, int32_t order);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, int column, enum Qt__SortOrder order)
///
void q_sqlrelationaltablemodel_on_set_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param filter const char*
///
void q_sqlrelationaltablemodel_set_filter(void* self, const char* filter);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param filter const char*
///
void q_sqlrelationaltablemodel_qbase_set_filter(void* self, const char* filter);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, const char* filter)
///
void q_sqlrelationaltablemodel_on_set_filter(void* self, void (*callback)(void*, const char*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqlrelationaltablemodel_row_count(void* self, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqlrelationaltablemodel_qbase_row_count(void* self, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func(QSqlRelationalTableModel* self, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_select_row(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_qbase_select_row(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row)
///
void q_sqlrelationaltablemodel_on_select_row(void* self, bool (*callback)(void*, int));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_submit(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
bool q_sqlrelationaltablemodel_qbase_submit(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func()
///
void q_sqlrelationaltablemodel_on_submit(void* self, bool (*callback)());

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_revert(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_revert(void* self);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_revert(void* self, void (*callback)());

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_delete_row_from_table(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
bool q_sqlrelationaltablemodel_qbase_delete_row_from_table(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row)
///
void q_sqlrelationaltablemodel_on_delete_row_from_table(void* self, bool (*callback)(void*, int));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_index_in_query(void* self, void* item);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_qbase_index_in_query(void* self, void* item);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, QModelIndex* item)
///
void q_sqlrelationaltablemodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqlrelationaltablemodel_column_count(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqlrelationaltablemodel_qbase_column_count(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func(QSqlRelationalTableModel* self, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqlrelationaltablemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqlrelationaltablemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_sqlrelationaltablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
void q_sqlrelationaltablemodel_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
void q_sqlrelationaltablemodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_can_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlrelationaltablemodel_role_names(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlrelationaltablemodel_qbase_role_names(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback libqt_map of int to char* func()
///
void q_sqlrelationaltablemodel_on_role_names(void* self, libqt_map (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_query_change(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_query_change(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_query_change(void* self, void (*callback)());

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, int row, int column, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, int row, int column, QModelIndex* idx)
///
void q_sqlrelationaltablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlrelationaltablemodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlrelationaltablemodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback libqt_map of int to QVariant* func(QSqlRelationalTableModel* self, QModelIndex* index)
///
void q_sqlrelationaltablemodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_sqlrelationaltablemodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_sqlrelationaltablemodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_sqlrelationaltablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
const char** q_sqlrelationaltablemodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
const char** q_sqlrelationaltablemodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback const char** func()
///
void q_sqlrelationaltablemodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlrelationaltablemodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlrelationaltablemodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QMimeData* func(QSqlRelationalTableModel* self, libqt_list of QModelIndex* indexes)
///
void q_sqlrelationaltablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlrelationaltablemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlrelationaltablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlrelationaltablemodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlrelationaltablemodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func()
///
void q_sqlrelationaltablemodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlrelationaltablemodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlrelationaltablemodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func()
///
void q_sqlrelationaltablemodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlrelationaltablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlrelationaltablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlrelationaltablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlrelationaltablemodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, QModelIndex* index)
///
void q_sqlrelationaltablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlrelationaltablemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlrelationaltablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback libqt_list of QModelIndex* func(QSqlRelationalTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_sqlrelationaltablemodel_on_match(void* self, libqt_list (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
QSize* q_sqlrelationaltablemodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
///
QSize* q_sqlrelationaltablemodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QSize* func(QSqlRelationalTableModel* self, QModelIndex* index)
///
void q_sqlrelationaltablemodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlrelationaltablemodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlrelationaltablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_sqlrelationaltablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QEvent*
///
bool q_sqlrelationaltablemodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QEvent*
///
bool q_sqlrelationaltablemodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QEvent* event)
///
void q_sqlrelationaltablemodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqlrelationaltablemodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqlrelationaltablemodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QObject* watched, QEvent* event)
///
void q_sqlrelationaltablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QTimerEvent*
///
void q_sqlrelationaltablemodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QTimerEvent*
///
void q_sqlrelationaltablemodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QTimerEvent* event)
///
void q_sqlrelationaltablemodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QChildEvent*
///
void q_sqlrelationaltablemodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QChildEvent*
///
void q_sqlrelationaltablemodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QChildEvent* event)
///
void q_sqlrelationaltablemodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QEvent*
///
void q_sqlrelationaltablemodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param event QEvent*
///
void q_sqlrelationaltablemodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QEvent* event)
///
void q_sqlrelationaltablemodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
void q_sqlrelationaltablemodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
void q_sqlrelationaltablemodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QMetaMethod* signal)
///
void q_sqlrelationaltablemodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
void q_sqlrelationaltablemodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
void q_sqlrelationaltablemodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QMetaMethod* signal)
///
void q_sqlrelationaltablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param key QSqlIndex*
///
void q_sqlrelationaltablemodel_set_primary_key(void* self, void* key);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param key QSqlIndex*
///
void q_sqlrelationaltablemodel_qbase_set_primary_key(void* self, void* key);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QSqlIndex* key)
///
void q_sqlrelationaltablemodel_on_set_primary_key(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
QSqlRecord* q_sqlrelationaltablemodel_primary_values(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
///
QSqlRecord* q_sqlrelationaltablemodel_qbase_primary_values(void* self, int row);

/// Inherited from QSqlTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QSqlRecord* func(QSqlRelationalTableModel* self, int row)
///
void q_sqlrelationaltablemodel_on_primary_values(void* self, QSqlRecord* (*callback)(void*, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_insert_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_insert_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_remove_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_remove_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_insert_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_insert_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlrelationaltablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_remove_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_remove_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_begin_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_begin_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param error QSqlError*
///
void q_sqlrelationaltablemodel_set_last_error(void* self, void* error);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param error QSqlError*
///
void q_sqlrelationaltablemodel_qbase_set_last_error(void* self, void* error);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QSqlError* error)
///
void q_sqlrelationaltablemodel_on_set_last_error(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlrelationaltablemodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlrelationaltablemodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QModelIndex* func(QSqlRelationalTableModel* self, int row, int column)
///
void q_sqlrelationaltablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlrelationaltablemodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlrelationaltablemodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_sqlrelationaltablemodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqlrelationaltablemodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqlrelationaltablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_sqlrelationaltablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqlrelationaltablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqlrelationaltablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlrelationaltablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqlrelationaltablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqlrelationaltablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlrelationaltablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func()
///
void q_sqlrelationaltablemodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqlrelationaltablemodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqlrelationaltablemodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* from, QModelIndex* to)
///
void q_sqlrelationaltablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_sqlrelationaltablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_sqlrelationaltablemodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_sqlrelationaltablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlrelationaltablemodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlrelationaltablemodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback libqt_list of QModelIndex* func()
///
void q_sqlrelationaltablemodel_on_persistent_index_list(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
QObject* q_sqlrelationaltablemodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
QObject* q_sqlrelationaltablemodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback QObject* func()
///
void q_sqlrelationaltablemodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
int32_t q_sqlrelationaltablemodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
///
int32_t q_sqlrelationaltablemodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func()
///
void q_sqlrelationaltablemodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal const char*
///
int32_t q_sqlrelationaltablemodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal const char*
///
int32_t q_sqlrelationaltablemodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback int32_t func(QSqlRelationalTableModel* self, const char* signal)
///
void q_sqlrelationaltablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
bool q_sqlrelationaltablemodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param signal QMetaMethod*
///
bool q_sqlrelationaltablemodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlRelationalTableModel*
/// @param callback bool func(QSqlRelationalTableModel* self, QMetaMethod* signal)
///
void q_sqlrelationaltablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlrelationaltablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self)
///
void q_sqlrelationaltablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self)
///
void q_sqlrelationaltablemodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlrelationaltablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlrelationaltablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlrelationaltablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlrelationaltablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlRelationalTableModel*
/// @param callback void func(QSqlRelationalTableModel* self, const char* objectName)
///
void q_sqlrelationaltablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#dtor.QSqlRelationalTableModel)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlRelationalTableModel*
///
void q_sqlrelationaltablemodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlrelationaltablemodel.html#public-types)

typedef enum {
    QSQLRELATIONALTABLEMODEL_JOINMODE_INNERJOIN = 0,
    QSQLRELATIONALTABLEMODEL_JOINMODE_LEFTJOIN = 1
} QSqlRelationalTableModel__JoinMode;

#endif
