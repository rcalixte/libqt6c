#pragma once
#ifndef SRC_SQL_QT6C_LIBQSQLQUERYMODEL_H
#define SRC_SQL_QT6C_LIBQSQLQUERYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html)

/// q_sqlquerymodel_new constructs a new QSqlQueryModel object.
///
QSqlQueryModel* q_sqlquerymodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html)

/// q_sqlquerymodel_new2 constructs a new QSqlQueryModel object.
///
/// @param parent QObject*
///
QSqlQueryModel* q_sqlquerymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSqlQueryModel*
///
const QMetaObject* q_sqlquerymodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback const QMetaObject* func()
///
void q_sqlquerymodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_meta_object` instead
///
#define q_sqlquerymodel_qbase_meta_object q_sqlquerymodel_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
const QMetaObject* q_sqlquerymodel_super_meta_object(void* self);

/// @param self QSqlQueryModel*
/// @param param1 const char*
///
void* q_sqlquerymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void* func(QSqlQueryModel* self, const char* param1)
///
void q_sqlquerymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_metacast` instead
///
#define q_sqlquerymodel_qbase_metacast q_sqlquerymodel_super_metacast

/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param param1 const char*
///
void* q_sqlquerymodel_super_metacast(void* self, const char* param1);

/// @param self QSqlQueryModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqlquerymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sqlquerymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_metacall` instead
///
#define q_sqlquerymodel_qbase_metacall q_sqlquerymodel_super_metacall

/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sqlquerymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sqlquerymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#rowCount)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_row_count` instead
///
#define q_sqlquerymodel_qbase_row_count q_sqlquerymodel_super_row_count

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_super_row_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_column_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_column_count` instead
///
#define q_sqlquerymodel_qbase_column_count q_sqlquerymodel_super_column_count

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_super_column_count(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#record)
///
/// @param self QSqlQueryModel*
/// @param row int
///
QSqlRecord* q_sqlquerymodel_record(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#record)
///
/// @param self QSqlQueryModel*
///
QSqlRecord* q_sqlquerymodel_record2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// @param self QSqlQueryModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlquerymodel_data(void* self, void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback QVariant* func(QSqlQueryModel* self, QModelIndex* item, int role)
///
void q_sqlquerymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_data` instead
///
#define q_sqlquerymodel_qbase_data q_sqlquerymodel_super_data

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlquerymodel_super_data(void* self, void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// @param self QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlquerymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback QVariant* func(QSqlQueryModel* self, int section, enum Qt__Orientation orientation, int role)
///
void q_sqlquerymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_header_data` instead
///
#define q_sqlquerymodel_qbase_header_data q_sqlquerymodel_super_header_data

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlquerymodel_super_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// @param self QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqlquerymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_sqlquerymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_set_header_data` instead
///
#define q_sqlquerymodel_qbase_set_header_data q_sqlquerymodel_super_set_header_data

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqlquerymodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_insert_columns` instead
///
#define q_sqlquerymodel_qbase_insert_columns q_sqlquerymodel_super_insert_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_insert_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_remove_columns` instead
///
#define q_sqlquerymodel_qbase_remove_columns q_sqlquerymodel_super_remove_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_remove_columns(void* self, int column, int count, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlQueryModel*
/// @param query QSqlQuery*
///
void q_sqlquerymodel_set_query(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlQueryModel*
/// @param query const char*
///
void q_sqlquerymodel_set_query2(void* self, const char* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
///
/// @param self QSqlQueryModel*
///
const QSqlQuery* q_sqlquerymodel_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#clear)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_clear(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_clear` instead
///
#define q_sqlquerymodel_qbase_clear q_sqlquerymodel_super_clear

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#clear)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
///
/// @param self QSqlQueryModel*
///
QSqlError* q_sqlquerymodel_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
void q_sqlquerymodel_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_fetch_more` instead
///
#define q_sqlquerymodel_qbase_fetch_more q_sqlquerymodel_super_fetch_more

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
void q_sqlquerymodel_super_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_can_fetch_more(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_can_fetch_more` instead
///
#define q_sqlquerymodel_qbase_can_fetch_more q_sqlquerymodel_super_can_fetch_more

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_can_fetch_more(void* self, void* parent);

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
/// @param self QSqlQueryModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlquerymodel_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback libqt_map of int to char* func()
///
void q_sqlquerymodel_on_role_names(void* self, libqt_map (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_role_names` instead
///
#define q_sqlquerymodel_qbase_role_names q_sqlquerymodel_super_role_names

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlquerymodel_super_role_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_insert_rows` instead
///
#define q_sqlquerymodel_qbase_begin_insert_rows q_sqlquerymodel_super_begin_insert_rows

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_super_begin_insert_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_insert_rows(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_insert_rows` instead
///
#define q_sqlquerymodel_qbase_end_insert_rows q_sqlquerymodel_super_end_insert_rows

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_remove_rows` instead
///
#define q_sqlquerymodel_qbase_begin_remove_rows q_sqlquerymodel_super_begin_remove_rows

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_super_begin_remove_rows(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_remove_rows(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_remove_rows` instead
///
#define q_sqlquerymodel_qbase_end_remove_rows q_sqlquerymodel_super_end_remove_rows

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_insert_columns` instead
///
#define q_sqlquerymodel_qbase_begin_insert_columns q_sqlquerymodel_super_begin_insert_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_super_begin_insert_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_insert_columns(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_insert_columns` instead
///
#define q_sqlquerymodel_qbase_end_insert_columns q_sqlquerymodel_super_end_insert_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_remove_columns` instead
///
#define q_sqlquerymodel_qbase_begin_remove_columns q_sqlquerymodel_super_begin_remove_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_super_begin_remove_columns(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_remove_columns(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_remove_columns` instead
///
#define q_sqlquerymodel_qbase_end_remove_columns q_sqlquerymodel_super_end_remove_columns

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_begin_reset_model(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_reset_model` instead
///
#define q_sqlquerymodel_qbase_begin_reset_model q_sqlquerymodel_super_begin_reset_model

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_reset_model(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_reset_model` instead
///
#define q_sqlquerymodel_qbase_end_reset_model q_sqlquerymodel_super_end_reset_model

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_query_change(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_query_change(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_query_change` instead
///
#define q_sqlquerymodel_qbase_query_change q_sqlquerymodel_super_query_change

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_query_change(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// @param self QSqlQueryModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlquerymodel_index_in_query(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, QModelIndex* item)
///
void q_sqlquerymodel_on_index_in_query(void* self, QModelIndex* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_index_in_query` instead
///
#define q_sqlquerymodel_qbase_index_in_query q_sqlquerymodel_super_index_in_query

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_index_in_query(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// @param self QSqlQueryModel*
/// @param error QSqlError*
///
void q_sqlquerymodel_set_last_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QSqlError* error)
///
void q_sqlquerymodel_on_set_last_error(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_set_last_error` instead
///
#define q_sqlquerymodel_qbase_set_last_error q_sqlquerymodel_super_set_last_error

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param error QSqlError*
///
void q_sqlquerymodel_super_set_last_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sqlquerymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sqlquerymodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlQueryModel*
/// @param query const char*
/// @param db QSqlDatabase*
///
void q_sqlquerymodel_set_query22(void* self, const char* query, void* db);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
///
bool q_sqlquerymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self QSqlQueryModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqlquerymodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, QModelIndex* child)
///
void q_sqlquerymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_parent` instead
///
#define q_sqlquerymodel_qbase_parent q_sqlquerymodel_super_parent

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_has_children` instead
///
#define q_sqlquerymodel_qbase_has_children q_sqlquerymodel_super_has_children

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlQueryModel*
/// @param row int
///
bool q_sqlquerymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
///
bool q_sqlquerymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlQueryModel*
/// @param row int
///
bool q_sqlquerymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
///
bool q_sqlquerymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_sqlquerymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_sqlquerymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlQueryModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_sqlquerymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_sqlquerymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_sqlquerymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_sqlquerymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_sqlquerymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_sqlquerymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_sqlquerymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqlquerymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqlquerymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_sqlquerymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_sqlquerymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_sqlquerymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_sqlquerymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSqlQueryModel*
///
const char* q_sqlquerymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSqlQueryModel*
/// @param name const char*
///
void q_sqlquerymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSqlQueryModel*
/// @param b bool
///
bool q_sqlquerymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSqlQueryModel*
///
QThread* q_sqlquerymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSqlQueryModel*
/// @param thread QThread*
///
bool q_sqlquerymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlQueryModel*
/// @param interval int
///
int32_t q_sqlquerymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlQueryModel*
/// @param time int64_t of nanoseconds
///
int32_t q_sqlquerymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlQueryModel*
/// @param id int
///
void q_sqlquerymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSqlQueryModel*
/// @param id enum Qt__TimerId
///
void q_sqlquerymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSqlQueryModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_sqlquerymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSqlQueryModel*
/// @param parent QObject*
///
void q_sqlquerymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSqlQueryModel*
/// @param filterObj QObject*
///
void q_sqlquerymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSqlQueryModel*
/// @param obj QObject*
///
void q_sqlquerymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sqlquerymodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sqlquerymodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlQueryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sqlquerymodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sqlquerymodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
/// @param receiver QObject*
///
bool q_sqlquerymodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sqlquerymodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSqlQueryModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_sqlquerymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSqlQueryModel*
/// @param name const char*
///
QVariant* q_sqlquerymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSqlQueryModel*
///
const char** q_sqlquerymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlQueryModel*
///
QBindingStorage* q_sqlquerymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSqlQueryModel*
///
const QBindingStorage* q_sqlquerymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSqlQueryModel*
/// @param classname const char*
///
bool q_sqlquerymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlQueryModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sqlquerymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSqlQueryModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sqlquerymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_sqlquerymodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sqlquerymodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSqlQueryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqlquerymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
/// @param signal const char*
///
bool q_sqlquerymodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sqlquerymodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSqlQueryModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlQueryModel*
/// @param param1 QObject*
///
void q_sqlquerymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QObject* param1)
///
void q_sqlquerymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlquerymodel_index(void* self, int row, int column, void* parent);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_index` instead
///
#define q_sqlquerymodel_qbase_index q_sqlquerymodel_super_index

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column, QModelIndex* parent)
///
void q_sqlquerymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlquerymodel_sibling(void* self, int row, int column, void* idx);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_sibling` instead
///
#define q_sqlquerymodel_qbase_sibling q_sqlquerymodel_super_sibling

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column, QModelIndex* idx)
///
void q_sqlquerymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_drop_mime_data` instead
///
#define q_sqlquerymodel_qbase_drop_mime_data q_sqlquerymodel_super_drop_mime_data

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlquerymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlquerymodel_flags(void* self, void* index);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_flags` instead
///
#define q_sqlquerymodel_qbase_flags q_sqlquerymodel_super_flags

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlquerymodel_super_flags(void* self, void* index);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqlquerymodel_set_data(void* self, void* index, void* value, int role);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_set_data` instead
///
#define q_sqlquerymodel_qbase_set_data q_sqlquerymodel_super_set_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_sqlquerymodel_super_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_sqlquerymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

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
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlquerymodel_item_data(void* self, void* index);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_item_data` instead
///
#define q_sqlquerymodel_qbase_item_data q_sqlquerymodel_super_item_data

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
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlquerymodel_super_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback libqt_map of int to QVariant* func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_sqlquerymodel_set_item_data(void* self, void* index, libqt_map roles);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_set_item_data` instead
///
#define q_sqlquerymodel_qbase_set_item_data q_sqlquerymodel_super_set_item_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_sqlquerymodel_super_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_sqlquerymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_clear_item_data(void* self, void* index);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_clear_item_data` instead
///
#define q_sqlquerymodel_qbase_clear_item_data q_sqlquerymodel_super_clear_item_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_super_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
const char** q_sqlquerymodel_mime_types(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_mime_types` instead
///
#define q_sqlquerymodel_qbase_mime_types q_sqlquerymodel_super_mime_types

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
const char** q_sqlquerymodel_super_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback const char** func()
///
void q_sqlquerymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlquerymodel_mime_data(void* self, libqt_list indexes);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_mime_data` instead
///
#define q_sqlquerymodel_qbase_mime_data q_sqlquerymodel_super_mime_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlquerymodel_super_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QMimeData* func(QSqlQueryModel* self, libqt_list of QModelIndex* indexes)
///
void q_sqlquerymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_can_drop_mime_data` instead
///
#define q_sqlquerymodel_qbase_can_drop_mime_data q_sqlquerymodel_super_can_drop_mime_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlquerymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_supported_drop_actions(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_supported_drop_actions` instead
///
#define q_sqlquerymodel_qbase_supported_drop_actions q_sqlquerymodel_super_supported_drop_actions

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_super_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func()
///
void q_sqlquerymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_supported_drag_actions(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_supported_drag_actions` instead
///
#define q_sqlquerymodel_qbase_supported_drag_actions q_sqlquerymodel_super_supported_drag_actions

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_super_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func()
///
void q_sqlquerymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_rows(void* self, int row, int count, void* parent);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_insert_rows` instead
///
#define q_sqlquerymodel_qbase_insert_rows q_sqlquerymodel_super_insert_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_rows(void* self, int row, int count, void* parent);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_remove_rows` instead
///
#define q_sqlquerymodel_qbase_remove_rows q_sqlquerymodel_super_remove_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_move_rows` instead
///
#define q_sqlquerymodel_qbase_move_rows q_sqlquerymodel_super_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlquerymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_move_columns` instead
///
#define q_sqlquerymodel_qbase_move_columns q_sqlquerymodel_super_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_sqlquerymodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlquerymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlquerymodel_sort(void* self, int column, int32_t order);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_sort` instead
///
#define q_sqlquerymodel_qbase_sort q_sqlquerymodel_super_sort

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_sqlquerymodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, int column, enum Qt__SortOrder order)
///
void q_sqlquerymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlquerymodel_buddy(void* self, void* index);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_buddy` instead
///
#define q_sqlquerymodel_qbase_buddy q_sqlquerymodel_super_buddy

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_match` instead
///
#define q_sqlquerymodel_qbase_match q_sqlquerymodel_super_match

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback libqt_list of QModelIndex* func(QSqlQueryModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_sqlquerymodel_on_match(void* self, libqt_list (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
QSize* q_sqlquerymodel_span(void* self, void* index);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_span` instead
///
#define q_sqlquerymodel_qbase_span q_sqlquerymodel_super_span

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
QSize* q_sqlquerymodel_super_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QSize* func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlquerymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_multi_data` instead
///
#define q_sqlquerymodel_qbase_multi_data q_sqlquerymodel_super_multi_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlquerymodel_super_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_sqlquerymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_submit(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_submit` instead
///
#define q_sqlquerymodel_qbase_submit q_sqlquerymodel_super_submit

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func()
///
void q_sqlquerymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_revert(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_revert` instead
///
#define q_sqlquerymodel_qbase_revert q_sqlquerymodel_super_revert

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_reset_internal_data(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_reset_internal_data` instead
///
#define q_sqlquerymodel_qbase_reset_internal_data q_sqlquerymodel_super_reset_internal_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QEvent*
///
bool q_sqlquerymodel_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_event` instead
///
#define q_sqlquerymodel_qbase_event q_sqlquerymodel_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QEvent*
///
bool q_sqlquerymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QEvent* event)
///
void q_sqlquerymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqlquerymodel_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_event_filter` instead
///
#define q_sqlquerymodel_qbase_event_filter q_sqlquerymodel_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sqlquerymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QObject* watched, QEvent* event)
///
void q_sqlquerymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QTimerEvent*
///
void q_sqlquerymodel_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_timer_event` instead
///
#define q_sqlquerymodel_qbase_timer_event q_sqlquerymodel_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QTimerEvent*
///
void q_sqlquerymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QTimerEvent* event)
///
void q_sqlquerymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QChildEvent*
///
void q_sqlquerymodel_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_child_event` instead
///
#define q_sqlquerymodel_qbase_child_event q_sqlquerymodel_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QChildEvent*
///
void q_sqlquerymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QChildEvent* event)
///
void q_sqlquerymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QEvent*
///
void q_sqlquerymodel_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_custom_event` instead
///
#define q_sqlquerymodel_qbase_custom_event q_sqlquerymodel_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param event QEvent*
///
void q_sqlquerymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QEvent* event)
///
void q_sqlquerymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_connect_notify` instead
///
#define q_sqlquerymodel_qbase_connect_notify q_sqlquerymodel_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_disconnect_notify` instead
///
#define q_sqlquerymodel_qbase_disconnect_notify q_sqlquerymodel_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlquerymodel_create_index(void* self, int row, int column);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_create_index` instead
///
#define q_sqlquerymodel_qbase_create_index q_sqlquerymodel_super_create_index

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlquerymodel_super_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column)
///
void q_sqlquerymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlquerymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_encode_data` instead
///
#define q_sqlquerymodel_qbase_encode_data q_sqlquerymodel_super_encode_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlquerymodel_super_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_sqlquerymodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqlquerymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_decode_data` instead
///
#define q_sqlquerymodel_qbase_decode_data q_sqlquerymodel_super_decode_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_sqlquerymodel_super_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_sqlquerymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqlquerymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_move_rows` instead
///
#define q_sqlquerymodel_qbase_begin_move_rows q_sqlquerymodel_super_begin_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_sqlquerymodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlquerymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_move_rows(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_move_rows` instead
///
#define q_sqlquerymodel_qbase_end_move_rows q_sqlquerymodel_super_end_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqlquerymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_begin_move_columns` instead
///
#define q_sqlquerymodel_qbase_begin_move_columns q_sqlquerymodel_super_begin_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_sqlquerymodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_move_columns(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_end_move_columns` instead
///
#define q_sqlquerymodel_qbase_end_move_columns q_sqlquerymodel_super_end_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func()
///
void q_sqlquerymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqlquerymodel_change_persistent_index(void* self, void* from, void* to);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_change_persistent_index` instead
///
#define q_sqlquerymodel_qbase_change_persistent_index q_sqlquerymodel_super_change_persistent_index

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_sqlquerymodel_super_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* from, QModelIndex* to)
///
void q_sqlquerymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_sqlquerymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_change_persistent_index_list` instead
///
#define q_sqlquerymodel_qbase_change_persistent_index_list q_sqlquerymodel_super_change_persistent_index_list

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_sqlquerymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_sqlquerymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_persistent_index_list(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_persistent_index_list` instead
///
#define q_sqlquerymodel_qbase_persistent_index_list q_sqlquerymodel_super_persistent_index_list

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_super_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback libqt_list of QModelIndex* func()
///
void q_sqlquerymodel_on_persistent_index_list(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
QObject* q_sqlquerymodel_sender(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_sender` instead
///
#define q_sqlquerymodel_qbase_sender q_sqlquerymodel_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
QObject* q_sqlquerymodel_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback QObject* func()
///
void q_sqlquerymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
int32_t q_sqlquerymodel_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_sender_signal_index` instead
///
#define q_sqlquerymodel_qbase_sender_signal_index q_sqlquerymodel_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
///
int32_t q_sqlquerymodel_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func()
///
void q_sqlquerymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal const char*
///
int32_t q_sqlquerymodel_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_receivers` instead
///
#define q_sqlquerymodel_qbase_receivers q_sqlquerymodel_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal const char*
///
int32_t q_sqlquerymodel_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, const char* signal)
///
void q_sqlquerymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
bool q_sqlquerymodel_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_sqlquerymodel_super_is_signal_connected` instead
///
#define q_sqlquerymodel_qbase_is_signal_connected q_sqlquerymodel_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
bool q_sqlquerymodel_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlquerymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlquerymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, const char* objectName)
///
void q_sqlquerymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#dtor.QSqlQueryModel)
///
/// Delete this object from C++ memory.
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_delete(void* self);

#endif
