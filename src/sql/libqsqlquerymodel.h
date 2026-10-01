#pragma once
#ifndef SQL_LIBQSQLQUERYMODEL_H
#define SQL_LIBQSQLQUERYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
/// @param self const QSqlQueryModel*
///
const QMetaObject* q_sqlquerymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback const QMetaObject* func(const QSqlQueryModel* self)
///
void q_sqlquerymodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
///
const QMetaObject* q_sqlquerymodel_super_meta_object(const void* self);

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
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(const QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_row_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(const QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_column_count(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
int32_t q_sqlquerymodel_super_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#record)
///
/// @param self const QSqlQueryModel*
/// @param row int
///
QSqlRecord* q_sqlquerymodel_record(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#record)
///
/// @param self const QSqlQueryModel*
///
QSqlRecord* q_sqlquerymodel_record2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// @param self const QSqlQueryModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlquerymodel_data(const void* self, const void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback QVariant* func(const QSqlQueryModel* self, QModelIndex* item, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_data(const void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#data)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param item QModelIndex*
/// @param role int
///
QVariant* q_sqlquerymodel_super_data(const void* self, const void* item, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// @param self const QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlquerymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback QVariant* func(const QSqlQueryModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_header_data(const void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_sqlquerymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// @param self QSqlQueryModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_sqlquerymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_sqlquerymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

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
bool q_sqlquerymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int column, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlQueryModel*
/// @param query QSqlQuery*
///
void q_sqlquerymodel_set_query(void* self, const void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setQuery)
///
/// @param self QSqlQueryModel*
/// @param query const char*
///
void q_sqlquerymodel_set_query2(void* self, const char* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#query)
///
/// @param self const QSqlQueryModel*
///
const QSqlQuery* q_sqlquerymodel_query(const void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_clear(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#clear)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#lastError)
///
/// @param self const QSqlQueryModel*
///
QSqlError* q_sqlquerymodel_last_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
void q_sqlquerymodel_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Allows for overriding the related default method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#fetchMore)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
///
void q_sqlquerymodel_super_fetch_more(void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_can_fetch_more(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback bool func(const QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_can_fetch_more(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#canFetchMore)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_can_fetch_more(const void* self, const void* parent);

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
/// @param self const QSqlQueryModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlquerymodel_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback libqt_map of int to char* func(const QSqlQueryModel* self)
///
void q_sqlquerymodel_on_role_names(const void* self, libqt_map (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_sqlquerymodel_super_role_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertRows)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertRows)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_insert_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveRows)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveRows)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_remove_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginInsertColumns)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endInsertColumns)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_insert_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginRemoveColumns)
///
/// @param self QSqlQueryModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_sqlquerymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endRemoveColumns)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_remove_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#beginResetModel)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_begin_reset_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#endResetModel)
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_reset_model(void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_query_change(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#queryChange)
///
/// Base class method implementation
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_super_query_change(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// @param self const QSqlQueryModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlquerymodel_index_in_query(const void* self, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(const QSqlQueryModel* self, QModelIndex* item)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_index_in_query(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#indexInQuery)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param item QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_index_in_query(const void* self, const void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qsqlquerymodel.html#setLastError)
///
/// @param self QSqlQueryModel*
/// @param error QSqlError*
///
void q_sqlquerymodel_set_last_error(void* self, const void* error);

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
void q_sqlquerymodel_set_query22(void* self, const char* query, const void* db);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
///
bool q_sqlquerymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `q_sqlquerymodel_on_parent` before it can be called.
///
/// @param self const QSqlQueryModel*
/// @param child QModelIndex*
///
QModelIndex* q_sqlquerymodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(const QSqlQueryModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_parent(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self const QSqlQueryModel*
/// @param callback bool func(const QSqlQueryModel* self, QModelIndex* parent)
///
void q_sqlquerymodel_on_has_children(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const QSqlQueryModel*
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_has_children(const void* self, const void* parent);

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
bool q_sqlquerymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

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
bool q_sqlquerymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_sqlquerymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_sqlquerymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

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
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QSqlQueryModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QSqlQueryModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_sqlquerymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_sqlquerymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_sqlquerymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

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
/// @param self const QSqlQueryModel*
///
const char* q_sqlquerymodel_object_name(const void* self);

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
/// @param self const QSqlQueryModel*
///
bool q_sqlquerymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSqlQueryModel*
///
bool q_sqlquerymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSqlQueryModel*
///
bool q_sqlquerymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSqlQueryModel*
///
bool q_sqlquerymodel_signals_blocked(const void* self);

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
/// @param self const QSqlQueryModel*
///
QThread* q_sqlquerymodel_thread(const void* self);

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
/// @param self const QSqlQueryModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_sqlquerymodel_children(const void* self);

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
QMetaObject__Connection* q_sqlquerymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sqlquerymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSqlQueryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sqlquerymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sqlquerymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
///
bool q_sqlquerymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
/// @param receiver QObject*
///
bool q_sqlquerymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sqlquerymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSqlQueryModel*
///
void q_sqlquerymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSqlQueryModel*
///
void q_sqlquerymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSqlQueryModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_sqlquerymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSqlQueryModel*
/// @param name const char*
///
QVariant* q_sqlquerymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSqlQueryModel*
///
const char** q_sqlquerymodel_dynamic_property_names(const void* self);

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
/// @param self const QSqlQueryModel*
///
const QBindingStorage* q_sqlquerymodel_binding_storage2(const void* self);

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
/// @param self const QSqlQueryModel*
/// @param classname const char*
///
bool q_sqlquerymodel_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_sqlquerymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sqlquerymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSqlQueryModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sqlquerymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
/// @param signal const char*
///
bool q_sqlquerymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sqlquerymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSqlQueryModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sqlquerymodel_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlquerymodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_index(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlquerymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_sibling(const void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

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
bool q_sqlquerymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

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
bool q_sqlquerymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlquerymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlquerymodel_flags(const void* self, const void* index);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_sqlquerymodel_super_flags(const void* self, const void* index);

/// Inherited from QAbstractTableModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttablemodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_flags(const void* self, int32_t (*callback)(const void*, const void*));

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
bool q_sqlquerymodel_set_data(void* self, const void* index, const void* value, int role);

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
bool q_sqlquerymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_sqlquerymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

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
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlquerymodel_item_data(const void* self, const void* index);

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
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_sqlquerymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback libqt_map of int to QVariant* func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_item_data(const void* self, libqt_map (*callback)(const void*, const void*));

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
bool q_sqlquerymodel_set_item_data(void* self, const void* index, libqt_map roles);

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
bool q_sqlquerymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_sqlquerymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param index QModelIndex*
///
bool q_sqlquerymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* index)
///
void q_sqlquerymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
///
const char** q_sqlquerymodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
const char** q_sqlquerymodel_super_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback const char** func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_mime_types(const void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlquerymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_sqlquerymodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QMimeData* func(QSqlQueryModel* self, libqt_list of QModelIndex* indexes)
///
void q_sqlquerymodel_on_mime_data(const void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_sqlquerymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_sqlquerymodel_on_can_drop_mime_data(const void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_supported_drop_actions(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_sqlquerymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_supported_drag_actions(const void* self, int32_t (*callback)(const void*));

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
bool q_sqlquerymodel_insert_rows(void* self, int row, int count, const void* parent);

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
bool q_sqlquerymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

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
bool q_sqlquerymodel_remove_rows(void* self, int row, int count, const void* parent);

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
bool q_sqlquerymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int count, QModelIndex* parent)
///
void q_sqlquerymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

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
bool q_sqlquerymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

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
bool q_sqlquerymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlquerymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

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
bool q_sqlquerymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

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
bool q_sqlquerymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_sqlquerymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

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
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlquerymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
QModelIndex* q_sqlquerymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_buddy(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback libqt_list of QModelIndex* func(QSqlQueryModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_sqlquerymodel_on_match(const void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
QSize* q_sqlquerymodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
///
QSize* q_sqlquerymodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QSize* func(QSqlQueryModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_span(const void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlquerymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_sqlquerymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_sqlquerymodel_on_multi_data(const void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
bool q_sqlquerymodel_submit(void* self);

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
/// @param callback bool func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_revert(void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_reset_internal_data(void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_reset_internal_data(void* self, void (*callback)(void*));

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
void q_sqlquerymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param signal QMetaMethod*
///
void q_sqlquerymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlquerymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param row int
/// @param column int
///
QModelIndex* q_sqlquerymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QModelIndex* func(QSqlQueryModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sqlquerymodel_on_create_index(const void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlquerymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_sqlquerymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_sqlquerymodel_on_encode_data(const void* self, void (*callback)(const void*, libqt_list, void*));

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
bool q_sqlquerymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

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
bool q_sqlquerymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_sqlquerymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

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
bool q_sqlquerymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

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
bool q_sqlquerymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlquerymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_move_rows(void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_end_move_rows(void* self, void (*callback)(void*));

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
bool q_sqlquerymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

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
bool q_sqlquerymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSqlQueryModel*
///
void q_sqlquerymodel_end_move_columns(void* self);

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
/// @param callback void func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_end_move_columns(void* self, void (*callback)(void*));

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
void q_sqlquerymodel_change_persistent_index(void* self, const void* from, const void* to);

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
void q_sqlquerymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* from, QModelIndex* to)
///
void q_sqlquerymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

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
/// @param self const QSqlQueryModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_sqlquerymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback libqt_list of QModelIndex* func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_persistent_index_list(const void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
///
QObject* q_sqlquerymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
QObject* q_sqlquerymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback QObject* func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
///
int32_t q_sqlquerymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
///
int32_t q_sqlquerymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self)
///
void q_sqlquerymodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param signal const char*
///
int32_t q_sqlquerymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param signal const char*
///
int32_t q_sqlquerymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback int32_t func(QSqlQueryModel* self, const char* signal)
///
void q_sqlquerymodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param signal QMetaMethod*
///
bool q_sqlquerymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param signal QMetaMethod*
///
bool q_sqlquerymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSqlQueryModel*
/// @param callback bool func(QSqlQueryModel* self, QMetaMethod* signal)
///
void q_sqlquerymodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* parent, int first, int last)
///
void q_sqlquerymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

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
void q_sqlquerymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_sqlquerymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QSqlQueryModel*
/// @param callback void func(QSqlQueryModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_sqlquerymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

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
