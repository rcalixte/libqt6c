#pragma once
#ifndef SRC_QT6C_LIBQTRANSPOSEPROXYMODEL_H
#define SRC_QT6C_LIBQTRANSPOSEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtransposeproxymodel.html

/// q_transposeproxymodel_new constructs a new QTransposeProxyModel object.
///
QTransposeProxyModel* q_transposeproxymodel_new();

/// q_transposeproxymodel_new2 constructs a new QTransposeProxyModel object.
///
/// @param parent QObject*
QTransposeProxyModel* q_transposeproxymodel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTransposeProxyModel*
const QMetaObject* q_transposeproxymodel_meta_object(void* self);

/// @param self QTransposeProxyModel*
/// @param param1 const char*
void* q_transposeproxymodel_metacast(void* self, const char* param1);

/// @param self QTransposeProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_transposeproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_transposeproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_transposeproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_transposeproxymodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// @param self QTransposeProxyModel*
/// @param newSourceModel QAbstractItemModel*
void q_transposeproxymodel_set_source_model(void* self, void* newSourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel)
void q_transposeproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param newSourceModel QAbstractItemModel*
void q_transposeproxymodel_qbase_set_source_model(void* self, void* newSourceModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
int32_t q_transposeproxymodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, QModelIndex* parent)
void q_transposeproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
int32_t q_transposeproxymodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
int32_t q_transposeproxymodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, QModelIndex* parent)
void q_transposeproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
int32_t q_transposeproxymodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_transposeproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QVariant* func(QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, int role)
void q_transposeproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_transposeproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_transposeproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
void q_transposeproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_transposeproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_transposeproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
void q_transposeproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_transposeproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QSize* q_transposeproxymodel_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QSize* func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#span)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QSize* q_transposeproxymodel_qbase_span(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_transposeproxymodel_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_transposeproxymodel_qbase_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// @param self QTransposeProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* q_transposeproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, QModelIndex* sourceIndex)
void q_transposeproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param sourceIndex QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// @param self QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* q_transposeproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, QModelIndex* proxyIndex)
void q_transposeproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QModelIndex* q_transposeproxymodel_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_parent(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_transposeproxymodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int column, QModelIndex* parent)
void q_transposeproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int count, QModelIndex* parent)
void q_transposeproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int count, QModelIndex* parent)
void q_transposeproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
void q_transposeproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveRows)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int column, int count, QModelIndex* parent)
void q_transposeproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int column, int count, QModelIndex* parent)
void q_transposeproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
void q_transposeproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#moveColumns)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_transposeproxymodel_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, int column, enum Qt__SortOrder order)
void q_transposeproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#sort)
///
/// Base class method implementation
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_transposeproxymodel_qbase_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_transposeproxymodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_transposeproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self QTransposeProxyModel*
QAbstractItemModel* q_transposeproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
bool q_transposeproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
bool q_transposeproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
bool q_transposeproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
bool q_transposeproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
bool q_transposeproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_transposeproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
bool q_transposeproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_transposeproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
void q_transposeproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QTransposeProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_transposeproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, enum Qt__Orientation orientation, int first, int last)
void q_transposeproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_transposeproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param parent QModelIndex*
bool q_transposeproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QTransposeProxyModel*
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_transposeproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_transposeproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_transposeproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_transposeproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QPersistentModelIndex** parents)
void q_transposeproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_transposeproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_transposeproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_transposeproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QPersistentModelIndex** parents)
void q_transposeproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_transposeproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
void q_transposeproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTransposeProxyModel*
const char* q_transposeproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTransposeProxyModel*
/// @param name char*
void q_transposeproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTransposeProxyModel*
/// @param b bool
bool q_transposeproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTransposeProxyModel*
QThread* q_transposeproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTransposeProxyModel*
/// @param thread QThread*
bool q_transposeproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param interval int
int32_t q_transposeproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTransposeProxyModel*
/// @param id int
void q_transposeproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTransposeProxyModel*
/// @param id enum Qt__TimerId
void q_transposeproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTransposeProxyModel*
libqt_list /* of QObject* */ q_transposeproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTransposeProxyModel*
/// @param parent QObject*
void q_transposeproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTransposeProxyModel*
/// @param filterObj QObject*
void q_transposeproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTransposeProxyModel*
/// @param obj QObject*
void q_transposeproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_transposeproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTransposeProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_transposeproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_transposeproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_transposeproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTransposeProxyModel*
/// @param name const char*
/// @param value QVariant*
bool q_transposeproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTransposeProxyModel*
/// @param name const char*
QVariant* q_transposeproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTransposeProxyModel*
const char** q_transposeproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTransposeProxyModel*
QBindingStorage* q_transposeproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTransposeProxyModel*
const QBindingStorage* q_transposeproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTransposeProxyModel*
/// @param classname const char*
bool q_transposeproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTransposeProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_transposeproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTransposeProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_transposeproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_transposeproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTransposeProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_transposeproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param param1 QObject*
void q_transposeproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QObject* param1)
void q_transposeproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param selection QItemSelection*
QItemSelection* q_transposeproxymodel_map_selection_to_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param selection QItemSelection*
QItemSelection* q_transposeproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QItemSelection* func(QTransposeProxyModel* self, QItemSelection* selection)
void q_transposeproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param selection QItemSelection*
QItemSelection* q_transposeproxymodel_map_selection_from_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param selection QItemSelection*
QItemSelection* q_transposeproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QItemSelection* func(QTransposeProxyModel* self, QItemSelection* selection)
void q_transposeproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
bool q_transposeproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func()
void q_transposeproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
QVariant* q_transposeproxymodel_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
QVariant* q_transposeproxymodel_qbase_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QVariant* func(QTransposeProxyModel* self, QModelIndex* proxyIndex, int role)
void q_transposeproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_transposeproxymodel_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int32_t q_transposeproxymodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_transposeproxymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_transposeproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index, QVariant* value, int role)
void q_transposeproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
bool q_transposeproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
bool q_transposeproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QModelIndex* q_transposeproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, QModelIndex* index)
void q_transposeproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
bool q_transposeproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* parent)
void q_transposeproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
void q_transposeproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
void q_transposeproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent)
void q_transposeproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
bool q_transposeproxymodel_has_children(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_has_children(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* parent)
void q_transposeproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_transposeproxymodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_transposeproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int column, QModelIndex* idx)
void q_transposeproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_transposeproxymodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_transposeproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QMimeData* func(QTransposeProxyModel* self, QModelIndex** indexes)
void q_transposeproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_transposeproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_transposeproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
void q_transposeproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
const char** q_transposeproxymodel_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
const char** q_transposeproxymodel_qbase_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback const char** func()
void q_transposeproxymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_transposeproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_transposeproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func()
void q_transposeproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_transposeproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
///
/// @return flag of enum Qt__DropAction
int32_t q_transposeproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func()
void q_transposeproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
libqt_map /* of int to char* */ q_transposeproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
libqt_map /* of int to char* */ q_transposeproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback libqt_map /* of int to char* */ func()
void q_transposeproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_transposeproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex** func(QTransposeProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
void q_transposeproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_transposeproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_transposeproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
void q_transposeproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
bool q_transposeproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
bool q_transposeproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QEvent* event)
void q_transposeproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_transposeproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_transposeproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QObject* watched, QEvent* event)
void q_transposeproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QTimerEvent*
void q_transposeproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QTimerEvent*
void q_transposeproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QTimerEvent* event)
void q_transposeproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QChildEvent*
void q_transposeproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QChildEvent*
void q_transposeproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QChildEvent* event)
void q_transposeproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
void q_transposeproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param event QEvent*
void q_transposeproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QEvent* event)
void q_transposeproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
void q_transposeproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
void q_transposeproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QMetaMethod* signal)
void q_transposeproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
void q_transposeproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
void q_transposeproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QMetaMethod* signal)
void q_transposeproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* q_transposeproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
QModelIndex* q_transposeproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int col, void* internalPtr)
void q_transposeproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_transposeproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
QModelIndex* q_transposeproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex* func(QTransposeProxyModel* self, int row, int column)
void q_transposeproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_transposeproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_transposeproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex** indexes, QDataStream* stream)
void q_transposeproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_transposeproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_transposeproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
void q_transposeproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_transposeproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_transposeproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
void q_transposeproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_transposeproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_transposeproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_transposeproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
void q_transposeproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func()
void q_transposeproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_transposeproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_transposeproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* from, QModelIndex* to)
void q_transposeproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_transposeproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_transposeproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex** from, QModelIndex** to)
void q_transposeproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
libqt_list /* of QModelIndex* */ q_transposeproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
libqt_list /* of QModelIndex* */ q_transposeproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QModelIndex** func()
void q_transposeproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
QObject* q_transposeproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
QObject* q_transposeproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback QObject* func()
void q_transposeproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
int32_t q_transposeproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
int32_t q_transposeproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func()
void q_transposeproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal const char*
int32_t q_transposeproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal const char*
int32_t q_transposeproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback int32_t func(QTransposeProxyModel* self, const char* signal)
void q_transposeproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
bool q_transposeproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param signal QMetaMethod*
bool q_transposeproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTransposeProxyModel*
/// @param callback bool func(QTransposeProxyModel* self, QMetaMethod* signal)
void q_transposeproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* parent, int first, int last)
void q_transposeproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self)
void q_transposeproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_transposeproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
void q_transposeproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_transposeproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
void q_transposeproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTransposeProxyModel*
/// @param callback void func(QTransposeProxyModel* self, const char* objectName)
void q_transposeproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtransposeproxymodel.html#dtor.QTransposeProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self QTransposeProxyModel*
void q_transposeproxymodel_delete(void* self);

#endif
