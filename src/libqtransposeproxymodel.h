#pragma once
#ifndef LIBQTRANSPOSEPROXYMODEL_H
#define LIBQTRANSPOSEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html)

/// q_transposeproxymodel_new constructs a new QTransposeProxyModel object.
///
QTransposeProxyModel* q_transposeproxymodel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html)

/// q_transposeproxymodel_new2 constructs a new QTransposeProxyModel object.
///
/// @param parent QObject*
///
QTransposeProxyModel* q_transposeproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTransposeProxyModel*
///
const QMetaObject* q_transposeproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback const QMetaObject* func(const QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
///
const QMetaObject* q_transposeproxymodel_super_meta_object(const void* self);

/// @param self QTransposeProxyModel*
/// @param param1 const char*
///
void* q_transposeproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback void* func(QTransposeProxyModel* self, const char* param1)
///
void q_transposeproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param param1 const char*
///
void* q_transposeproxymodel_super_metacast(void* self, const char* param1);

/// @param self QTransposeProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_transposeproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_transposeproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_transposeproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_transposeproxymodel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// @param self QTransposeProxyModel*
/// @param newSourceModel QAbstractItemModel*
///
void q_transposeproxymodel_set_source_model(void* self, void* newSourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel)
///
void q_transposeproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param newSourceModel QAbstractItemModel*
///
void q_transposeproxymodel_super_set_source_model(void* self, void* newSourceModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
int32_t q_transposeproxymodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(const QTransposeProxyModel* self, QModelIndex* parent)
///
void q_transposeproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
int32_t q_transposeproxymodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
int32_t q_transposeproxymodel_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(const QTransposeProxyModel* self, QModelIndex* parent)
///
void q_transposeproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
int32_t q_transposeproxymodel_super_column_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// @param self const QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_transposeproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QVariant* func(const QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* q_transposeproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_transposeproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void q_transposeproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool q_transposeproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_transposeproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void q_transposeproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool q_transposeproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QSize* q_transposeproxymodel_span(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QSize* func(const QTransposeProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QSize* q_transposeproxymodel_super_span(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
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
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_transposeproxymodel_item_data(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_map of int to QVariant* func(const QTransposeProxyModel* self, QModelIndex* index)
///
void q_transposeproxymodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map q_transposeproxymodel_super_item_data(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// @param self const QTransposeProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_transposeproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(const QTransposeProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// @param self const QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_transposeproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(const QTransposeProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_transposeproxymodel_parent(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(const QTransposeProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_parent(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_transposeproxymodel_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_index(const void* self, int row, int column, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_transposeproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int count, QModelIndex* parent)
///
void q_transposeproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_transposeproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_transposeproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int column, int count, QModelIndex* parent)
///
void q_transposeproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void q_transposeproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_transposeproxymodel_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, int column, enum Qt__SortOrder order)
///
void q_transposeproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_transposeproxymodel_super_sort(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_transposeproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_transposeproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const QTransposeProxyModel*
///
QAbstractItemModel* q_transposeproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
///
bool q_transposeproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
///
bool q_transposeproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
///
bool q_transposeproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
///
bool q_transposeproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
///
bool q_transposeproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool q_transposeproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
bool q_transposeproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void q_transposeproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void q_transposeproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QTransposeProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void q_transposeproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void q_transposeproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool q_transposeproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_transposeproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_transposeproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_transposeproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_transposeproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_transposeproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_transposeproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void q_transposeproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void q_transposeproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void q_transposeproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void q_transposeproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTransposeProxyModel*
///
const char* q_transposeproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTransposeProxyModel*
/// @param name const char*
///
void q_transposeproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTransposeProxyModel*
///
bool q_transposeproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTransposeProxyModel*
///
bool q_transposeproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTransposeProxyModel*
///
bool q_transposeproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTransposeProxyModel*
///
bool q_transposeproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTransposeProxyModel*
/// @param b bool
///
bool q_transposeproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTransposeProxyModel*
///
QThread* q_transposeproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTransposeProxyModel*
/// @param thread QThread*
///
bool q_transposeproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param interval int
///
int32_t q_transposeproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t q_transposeproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTransposeProxyModel*
/// @param id int
///
void q_transposeproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTransposeProxyModel*
/// @param id enum Qt__TimerId
///
void q_transposeproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTransposeProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list q_transposeproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTransposeProxyModel*
/// @param parent QObject*
///
void q_transposeproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTransposeProxyModel*
/// @param filterObj QObject*
///
void q_transposeproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTransposeProxyModel*
/// @param obj QObject*
///
void q_transposeproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_transposeproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_transposeproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTransposeProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_transposeproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_transposeproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_transposeproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
///
bool q_transposeproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
/// @param receiver QObject*
///
bool q_transposeproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_transposeproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTransposeProxyModel*
///
void q_transposeproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTransposeProxyModel*
///
void q_transposeproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTransposeProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool q_transposeproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTransposeProxyModel*
/// @param name const char*
///
QVariant* q_transposeproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTransposeProxyModel*
///
const char** q_transposeproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTransposeProxyModel*
///
QBindingStorage* q_transposeproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTransposeProxyModel*
///
const QBindingStorage* q_transposeproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTransposeProxyModel*
/// @param classname const char*
///
bool q_transposeproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_transposeproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_transposeproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_transposeproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_transposeproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTransposeProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_transposeproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
/// @param signal const char*
///
bool q_transposeproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_transposeproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_transposeproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTransposeProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_transposeproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param param1 QObject*
///
void q_transposeproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QObject* param1)
///
void q_transposeproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_transposeproxymodel_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_transposeproxymodel_super_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QItemSelection* func(QTransposeProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_transposeproxymodel_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* q_transposeproxymodel_super_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QItemSelection* func(QTransposeProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
bool q_transposeproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
bool q_transposeproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_transposeproxymodel_data(const void* self, const void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* q_transposeproxymodel_super_data(const void* self, const void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QVariant* func(QTransposeProxyModel* self, QModelIndex* proxyIndex, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_transposeproxymodel_flags(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t q_transposeproxymodel_super_flags(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, QModelIndex* index)
///
void q_transposeproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_transposeproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool q_transposeproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void q_transposeproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
///
bool q_transposeproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
///
bool q_transposeproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index)
///
void q_transposeproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_transposeproxymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* parent)
///
void q_transposeproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
///
void q_transposeproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
///
void q_transposeproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent)
///
void q_transposeproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* parent)
///
void q_transposeproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_transposeproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* q_transposeproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_transposeproxymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* q_transposeproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QMimeData* func(QTransposeProxyModel* self, libqt_list of QModelIndex* indexes)
///
void q_transposeproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_transposeproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool q_transposeproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void q_transposeproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
const char** q_transposeproxymodel_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
const char** q_transposeproxymodel_super_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback const char** func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_transposeproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_transposeproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_transposeproxymodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t q_transposeproxymodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
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
/// @param self const QTransposeProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_transposeproxymodel_role_names(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
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
/// @param self const QTransposeProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map q_transposeproxymodel_super_role_names(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_map of int to char* func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_transposeproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_transposeproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_list of QModelIndex* func(QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void q_transposeproxymodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_transposeproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void q_transposeproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void q_transposeproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
///
bool q_transposeproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
///
bool q_transposeproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QEvent* event)
///
void q_transposeproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_transposeproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_transposeproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QObject* watched, QEvent* event)
///
void q_transposeproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QTimerEvent*
///
void q_transposeproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QTimerEvent*
///
void q_transposeproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QTimerEvent* event)
///
void q_transposeproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QChildEvent*
///
void q_transposeproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QChildEvent*
///
void q_transposeproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QChildEvent* event)
///
void q_transposeproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
///
void q_transposeproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
///
void q_transposeproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QEvent* event)
///
void q_transposeproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
///
void q_transposeproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
///
void q_transposeproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QMetaMethod* signal)
///
void q_transposeproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
///
void q_transposeproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
///
void q_transposeproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QMetaMethod* signal)
///
void q_transposeproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_transposeproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* q_transposeproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_transposeproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* q_transposeproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_transposeproxymodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_transposeproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void q_transposeproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void q_transposeproxymodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_transposeproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool q_transposeproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void q_transposeproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_transposeproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool q_transposeproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void q_transposeproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_transposeproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_transposeproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool q_transposeproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void q_transposeproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_transposeproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void q_transposeproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void q_transposeproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_transposeproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void q_transposeproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void q_transposeproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_transposeproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_transposeproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_list of QModelIndex* func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
QObject* q_transposeproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
QObject* q_transposeproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QObject* func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
int32_t q_transposeproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
///
int32_t q_transposeproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param signal const char*
///
int32_t q_transposeproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param signal const char*
///
int32_t q_transposeproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, const char* signal)
///
void q_transposeproxymodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param signal QMetaMethod*
///
bool q_transposeproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTransposeProxyModel*
/// @param signal QMetaMethod*
///
bool q_transposeproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMetaMethod* signal)
///
void q_transposeproxymodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
///
void q_transposeproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
///
void q_transposeproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_transposeproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void q_transposeproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_transposeproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void q_transposeproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, const char* objectName)
///
void q_transposeproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtransposeproxymodel.html#dtor.QTransposeProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QTransposeProxyModel*
///
void q_transposeproxymodel_delete(void* self);

#endif
