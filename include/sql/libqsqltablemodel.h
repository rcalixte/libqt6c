#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLTABLEMODEL_H
#define SRC_SQL_QT6C_LIBQSQLTABLEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html)

/// q_sqltablemodel_new constructs a new QSqlTableModel object.
///
QSqlTableModel* q_sqltablemodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html)

/// q_sqltablemodel_new2 constructs a new QSqlTableModel object.
///
/// @param parent QObject*
///
QSqlTableModel* q_sqltablemodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html)

/// q_sqltablemodel_new3 constructs a new QSqlTableModel object.
///
/// @param parent QObject*
/// @param db QSqlDatabase*
///
QSqlTableModel* q_sqltablemodel_new3(void* parent, void* db);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSqlTableModel*
///
const QMetaObject* q_sqltablemodel_meta_object(void* self);

/// @param self QSqlTableModel*
/// @param param1 const char*
///
void* q_sqltablemodel_metacast(void* self, const char* param1);

/// @param self QSqlTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqltablemodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func(QSqlTableModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sqltablemodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqltablemodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_sqltablemodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setTable)
///
/// @param self QSqlTableModel*
/// @param tableName const char*
///
void q_sqltablemodel_set_table(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, const char* tableName)
///
void q_sqltablemodel_on_set_table(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setTable)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param tableName const char*
///
void q_sqltablemodel_qbase_set_table(void* self, const char* tableName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#tableName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_table_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqltablemodel_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func(QSqlTableModel* self, QModelIndex* index)
///
void q_sqltablemodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#flags)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqltablemodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
///
/// @param self QSqlTableModel*
///
QSqlRecord* q_sqltablemodel_record(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#record)
///
/// @param self QSqlTableModel*
/// @param row int
///
QSqlRecord* q_sqltablemodel_record2(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#data)
///
/// @param self QSqlTableModel*
/// @param idx QModelIndex*
/// @param role int
///
QVariant* q_sqltablemodel_data(void* self, void* idx, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback QVariant* func(QSqlTableModel* self, QModelIndex* idx, int role)
///
void q_sqltablemodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#data)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param idx QModelIndex*
/// @param role int
///
QVariant* q_sqltablemodel_qbase_data(void* self, void* idx, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setData)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqltablemodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_sqltablemodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setData)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqltablemodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
bool q_sqltablemodel_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* index)
///
void q_sqltablemodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
bool q_sqltablemodel_qbase_clear_item_data(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// @param self QSqlTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqltablemodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback QVariant* func(QSqlTableModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_sqltablemodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqltablemodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_is_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#isDirty)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
bool q_sqltablemodel_is_dirty2(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clear)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#clear)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// @param self QSqlTableModel*
/// @param strategy enum QSqlTableModel__EditStrategy
///
void q_sqltablemodel_set_edit_strategy(void* self, int32_t strategy);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, enum QSqlTableModel__EditStrategy strategy)
///
void q_sqltablemodel_on_set_edit_strategy(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setEditStrategy)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param strategy enum QSqlTableModel__EditStrategy
///
void q_sqltablemodel_qbase_set_edit_strategy(void* self, int32_t strategy);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#editStrategy)
///
/// @param self QSqlTableModel*
///
/// @return enum QSqlTableModel__EditStrategy
///
int32_t q_sqltablemodel_edit_strategy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryKey)
///
/// @param self QSqlTableModel*
///
QSqlIndex* q_sqltablemodel_primary_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#database)
///
/// @param self QSqlTableModel*
///
QSqlDatabase* q_sqltablemodel_database(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#fieldIndex)
///
/// @param self QSqlTableModel*
/// @param fieldName const char*
///
int32_t q_sqltablemodel_field_index(void* self, const char* fieldName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// @param self QSqlTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqltablemodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int column, enum Qt__SortOrder order)
///
void q_sqltablemodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#sort)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqltablemodel_qbase_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// @param self QSqlTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqltablemodel_set_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int column, enum Qt__SortOrder order)
///
void q_sqltablemodel_on_set_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setSort)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqltablemodel_qbase_set_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#filter)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// @param self QSqlTableModel*
/// @param filter const char*
///
void q_sqltablemodel_set_filter(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, const char* filter)
///
void q_sqltablemodel_on_set_filter(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setFilter)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param filter const char*
///
void q_sqltablemodel_qbase_set_filter(void* self, const char* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqltablemodel_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func(QSqlTableModel* self, QModelIndex* parent)
///
void q_sqltablemodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqltablemodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeColumns)
///
/// @param self QSqlTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int column, int count, QModelIndex* parent)
///
void q_sqltablemodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row, int count, QModelIndex* parent)
///
void q_sqltablemodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row, int count, QModelIndex* parent)
///
void q_sqltablemodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRecord)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param record QSqlRecord*
///
bool q_sqltablemodel_insert_record(void* self, int row, void* record);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setRecord)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param record QSqlRecord*
///
bool q_sqltablemodel_set_record(void* self, int row, void* record);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertRow)
///
/// @param self QSqlTableModel*
/// @param row int
///
void q_sqltablemodel_revert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertRow)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int row)
///
void q_sqltablemodel_on_revert_row(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertRow)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
///
void q_sqltablemodel_qbase_revert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#select)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_select(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func()
///
void q_sqltablemodel_on_select(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#select)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_qbase_select(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_select_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row)
///
void q_sqltablemodel_on_select_row(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectRow)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_qbase_select_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func()
///
void q_sqltablemodel_on_submit(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submit)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_qbase_submit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_revert(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revert)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_revert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#submitAll)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_submit_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#revertAll)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_revert_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param record QSqlRecord*
///
void q_sqltablemodel_prime_insert(void* self, int row, void* record);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primeInsert)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int row, QSqlRecord* record)
///
void q_sqltablemodel_on_prime_insert(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
///
/// @param self QSqlTableModel*
/// @param record QSqlRecord*
///
void q_sqltablemodel_before_insert(void* self, void* record);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeInsert)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QSqlRecord* record)
///
void q_sqltablemodel_on_before_insert(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param record QSqlRecord*
///
void q_sqltablemodel_before_update(void* self, int row, void* record);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeUpdate)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int row, QSqlRecord* record)
///
void q_sqltablemodel_on_before_update(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
///
/// @param self QSqlTableModel*
/// @param row int
///
void q_sqltablemodel_before_delete(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#beforeDelete)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, int row)
///
void q_sqltablemodel_on_before_delete(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#updateRowInTable)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param values QSqlRecord*
///
bool q_sqltablemodel_update_row_in_table(void* self, int row, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#updateRowInTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row, QSqlRecord* values)
///
void q_sqltablemodel_on_update_row_in_table(void* self, bool (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#updateRowInTable)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
/// @param values QSqlRecord*
///
bool q_sqltablemodel_qbase_update_row_in_table(void* self, int row, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRowIntoTable)
///
/// @param self QSqlTableModel*
/// @param values QSqlRecord*
///
bool q_sqltablemodel_insert_row_into_table(void* self, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRowIntoTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QSqlRecord* values)
///
void q_sqltablemodel_on_insert_row_into_table(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#insertRowIntoTable)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param values QSqlRecord*
///
bool q_sqltablemodel_qbase_insert_row_into_table(void* self, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_delete_row_from_table(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row)
///
void q_sqltablemodel_on_delete_row_from_table(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#deleteRowFromTable)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_qbase_delete_row_from_table(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#orderByClause)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_order_by_clause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#orderByClause)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback const char* func()
///
void q_sqltablemodel_on_order_by_clause(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#orderByClause)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_qbase_order_by_clause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectStatement)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_select_statement(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectStatement)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback const char* func()
///
void q_sqltablemodel_on_select_statement(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#selectStatement)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_qbase_select_statement(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// @param self QSqlTableModel*
/// @param key QSqlIndex*
///
void q_sqltablemodel_set_primary_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QSqlIndex* key)
///
void q_sqltablemodel_on_set_primary_key(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#setPrimaryKey)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param key QSqlIndex*
///
void q_sqltablemodel_qbase_set_primary_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// @param self QSqlTableModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqltablemodel_index_in_query(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, QModelIndex* item)
///
void q_sqltablemodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#indexInQuery)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqltablemodel_qbase_index_in_query(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// @param self QSqlTableModel*
/// @param row int
///
QSqlRecord* q_sqltablemodel_primary_values(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback QSqlRecord* func(QSqlTableModel* self, int row)
///
void q_sqltablemodel_on_primary_values(void* self, QSqlRecord* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#primaryValues)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param row int
///
QSqlRecord* q_sqltablemodel_qbase_primary_values(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_sqltablemodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sqltablemodel_tr3(const char* s, const char* c, int n);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlTableModel*
/// @param query QSqlQuery*
///
void q_sqltablemodel_set_query(void* self, void* query);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlTableModel*
/// @param query const char*
///
void q_sqltablemodel_set_query2(void* self, const char* query);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
///
/// @param self QSqlTableModel*
///
const QSqlQuery* q_sqltablemodel_query(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
///
/// @param self QSqlTableModel*
///
QSqlError* q_sqltablemodel_last_error(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlTableModel*
/// @param query const char*
/// @param db QSqlDatabase*
///
void q_sqltablemodel_set_query22(void* self, const char* query, void* db);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
///
/// @param self QSqlTableModel*
/// @param param1 Disambiguated_t*
///
const QSqlQuery* q_sqltablemodel_query1(void* self, void* param1);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
///
bool q_sqltablemodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QSqlTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqltablemodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, QModelIndex* child)
///
void q_sqltablemodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqltablemodel_qbase_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
bool q_sqltablemodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* parent)
///
void q_sqltablemodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlTableModel*
/// @param column int
///
bool q_sqltablemodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlTableModel*
/// @param row int
///
bool q_sqltablemodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlTableModel*
/// @param column int
///
bool q_sqltablemodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
bool q_sqltablemodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_sqltablemodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_sqltablemodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlTableModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_sqltablemodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_sqltablemodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self)
///
void q_sqltablemodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self)
///
void q_sqltablemodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlTableModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlTableModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_sqltablemodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlTableModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_sqltablemodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_sqltablemodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_sqltablemodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QPersistentModelIndex** parents)
///
void q_sqltablemodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqltablemodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqltablemodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void q_sqltablemodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QPersistentModelIndex** parents)
///
void q_sqltablemodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqltablemodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqltablemodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char* q_sqltablemodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSqlTableModel*
/// @param name char*
///
void q_sqltablemodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSqlTableModel*
///
bool q_sqltablemodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSqlTableModel*
/// @param b bool
///
bool q_sqltablemodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSqlTableModel*
///
QThread* q_sqltablemodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlTableModel*
/// @param thread QThread*
///
bool q_sqltablemodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlTableModel*
/// @param interval int
///
int32_t q_sqltablemodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlTableModel*
/// @param id int
///
void q_sqltablemodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlTableModel*
/// @param id enum Qt__TimerId
///
void q_sqltablemodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSqlTableModel*
///
libqt_list /* of QObject* */ q_sqltablemodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSqlTableModel*
/// @param parent QObject*
///
void q_sqltablemodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSqlTableModel*
/// @param filterObj QObject*
///
void q_sqltablemodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSqlTableModel*
/// @param obj QObject*
///
void q_sqltablemodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sqltablemodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sqltablemodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sqltablemodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sqltablemodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSqlTableModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_sqltablemodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSqlTableModel*
/// @param name const char*
///
QVariant* q_sqltablemodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QSqlTableModel*
///
const char** q_sqltablemodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlTableModel*
///
QBindingStorage* q_sqltablemodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlTableModel*
///
const QBindingStorage* q_sqltablemodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self)
///
void q_sqltablemodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSqlTableModel*
/// @param classname const char*
///
bool q_sqltablemodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlTableModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_sqltablemodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlTableModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sqltablemodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_sqltablemodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlTableModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqltablemodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlTableModel*
/// @param param1 QObject*
///
void q_sqltablemodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QObject* param1)
///
void q_sqltablemodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqltablemodel_column_count(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
int32_t q_sqltablemodel_qbase_column_count(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func(QSqlTableModel* self, QModelIndex* parent)
///
void q_sqltablemodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqltablemodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqltablemodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_sqltablemodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int column, int count, QModelIndex* parent)
///
void q_sqltablemodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
void q_sqltablemodel_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
void q_sqltablemodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent)
///
void q_sqltablemodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
bool q_sqltablemodel_can_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* parent)
///
void q_sqltablemodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
libqt_map /* of int to char* */ q_sqltablemodel_role_names(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
libqt_map /* of int to char* */ q_sqltablemodel_qbase_role_names(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void q_sqltablemodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_query_change(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_query_change(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_query_change(void* self, void (*callback)());

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqltablemodel_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqltablemodel_qbase_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, int row, int column, QModelIndex* parent)
///
void q_sqltablemodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqltablemodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqltablemodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, int row, int column, QModelIndex* idx)
///
void q_sqltablemodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqltablemodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_sqltablemodel_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ q_sqltablemodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QSqlTableModel* self, QModelIndex* index)
///
void q_sqltablemodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_sqltablemodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool q_sqltablemodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void q_sqltablemodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
const char** q_sqltablemodel_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
const char** q_sqltablemodel_qbase_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback const char** func()
///
void q_sqltablemodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_sqltablemodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* q_sqltablemodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QMimeData* func(QSqlTableModel* self, QModelIndex** indexes)
///
void q_sqltablemodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqltablemodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqltablemodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqltablemodel_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqltablemodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func()
///
void q_sqltablemodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqltablemodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqltablemodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func()
///
void q_sqltablemodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqltablemodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqltablemodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqltablemodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqltablemodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqltablemodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, QModelIndex* index)
///
void q_sqltablemodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_sqltablemodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ q_sqltablemodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex** func(QSqlTableModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_sqltablemodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
QSize* q_sqltablemodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
///
QSize* q_sqltablemodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QSize* func(QSqlTableModel* self, QModelIndex* index)
///
void q_sqltablemodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqltablemodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqltablemodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_sqltablemodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QEvent*
///
bool q_sqltablemodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QEvent*
///
bool q_sqltablemodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QEvent* event)
///
void q_sqltablemodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqltablemodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqltablemodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QObject* watched, QEvent* event)
///
void q_sqltablemodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QTimerEvent*
///
void q_sqltablemodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QTimerEvent*
///
void q_sqltablemodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QTimerEvent* event)
///
void q_sqltablemodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QChildEvent*
///
void q_sqltablemodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QChildEvent*
///
void q_sqltablemodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QChildEvent* event)
///
void q_sqltablemodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QEvent*
///
void q_sqltablemodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param event QEvent*
///
void q_sqltablemodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QEvent* event)
///
void q_sqltablemodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
void q_sqltablemodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
void q_sqltablemodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QMetaMethod* signal)
///
void q_sqltablemodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
void q_sqltablemodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
void q_sqltablemodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QMetaMethod* signal)
///
void q_sqltablemodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_insert_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_insert_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_remove_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_remove_rows(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_insert_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_insert_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqltablemodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_remove_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_remove_columns(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_begin_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_begin_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_reset_model(void* self);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param error QSqlError*
///
void q_sqltablemodel_set_last_error(void* self, void* error);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param error QSqlError*
///
void q_sqltablemodel_qbase_set_last_error(void* self, void* error);

/// Inherited from QSqlQueryModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QSqlError* error)
///
void q_sqltablemodel_on_set_last_error(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqltablemodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqltablemodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex* func(QSqlTableModel* self, int row, int column)
///
void q_sqltablemodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_sqltablemodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void q_sqltablemodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex** indexes, QDataStream* stream)
///
void q_sqltablemodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqltablemodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqltablemodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_sqltablemodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqltablemodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqltablemodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_sqltablemodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqltablemodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqltablemodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqltablemodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func()
///
void q_sqltablemodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqltablemodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqltablemodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* from, QModelIndex* to)
///
void q_sqltablemodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_sqltablemodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void q_sqltablemodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex** from, QModelIndex** to)
///
void q_sqltablemodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
libqt_list /* of QModelIndex* */ q_sqltablemodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
libqt_list /* of QModelIndex* */ q_sqltablemodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QModelIndex** func()
///
void q_sqltablemodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
QObject* q_sqltablemodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
QObject* q_sqltablemodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback QObject* func()
///
void q_sqltablemodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
///
int32_t q_sqltablemodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
///
int32_t q_sqltablemodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func()
///
void q_sqltablemodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal const char*
///
int32_t q_sqltablemodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal const char*
///
int32_t q_sqltablemodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback int32_t func(QSqlTableModel* self, const char* signal)
///
void q_sqltablemodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
bool q_sqltablemodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param signal QMetaMethod*
///
bool q_sqltablemodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlTableModel*
/// @param callback bool func(QSqlTableModel* self, QMetaMethod* signal)
///
void q_sqltablemodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* parent, int first, int last)
///
void q_sqltablemodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self)
///
void q_sqltablemodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self)
///
void q_sqltablemodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqltablemodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqltablemodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqltablemodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqltablemodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlTableModel*
/// @param callback void func(QSqlTableModel* self, const char* objectName)
///
void q_sqltablemodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#dtor.QSqlTableModel)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlTableModel*
///
void q_sqltablemodel_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqltablemodel.html#public-types)

typedef enum {
    QSQLTABLEMODEL_EDITSTRATEGY_ONFIELDCHANGE = 0,
    QSQLTABLEMODEL_EDITSTRATEGY_ONROWCHANGE = 1,
    QSQLTABLEMODEL_EDITSTRATEGY_ONMANUALSUBMIT = 2
} QSqlTableModel__EditStrategy;

#endif
