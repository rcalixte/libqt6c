#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKREARRANGECOLUMNSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKREARRANGECOLUMNSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html)

/// k_rearrangecolumnsproxymodel_new constructs a new KRearrangeColumnsProxyModel object.
///
KRearrangeColumnsProxyModel* k_rearrangecolumnsproxymodel_new();

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html)

/// k_rearrangecolumnsproxymodel_new2 constructs a new KRearrangeColumnsProxyModel object.
///
/// @param parent QObject*
///
KRearrangeColumnsProxyModel* k_rearrangecolumnsproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KRearrangeColumnsProxyModel*
///
const QMetaObject* k_rearrangecolumnsproxymodel_meta_object(void* self);

/// @param self KRearrangeColumnsProxyModel*
/// @param param1 const char*
///
void* k_rearrangecolumnsproxymodel_metacast(void* self, const char* param1);

/// @param self KRearrangeColumnsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_rearrangecolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func(KRearrangeColumnsProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_rearrangecolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_rearrangecolumnsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_rearrangecolumnsproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#setSourceColumns)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param columns libqt_list of int
///
void k_rearrangecolumnsproxymodel_set_source_columns(void* self, libqt_list /* of int */ columns);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_rearrangecolumnsproxymodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func(KRearrangeColumnsProxyModel* self, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_rearrangecolumnsproxymodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_rearrangecolumnsproxymodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func(KRearrangeColumnsProxyModel* self, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_rearrangecolumnsproxymodel_qbase_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, int row, int column, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_parent(void* self, void* child);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, QModelIndex* child)
///
void k_rearrangecolumnsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_parent(void* self, void* child);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceIndex)
///
void k_rearrangecolumnsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, QModelIndex* proxyIndex)
///
void k_rearrangecolumnsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_rearrangecolumnsproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QVariant* func(KRearrangeColumnsProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_rearrangecolumnsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_rearrangecolumnsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_has_children(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, int row, int column, QModelIndex* idx)
///
void k_rearrangecolumnsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
///
/// Base class method implementation
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#proxyColumnForSourceColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceColumn int
///
int32_t k_rearrangecolumnsproxymodel_proxy_column_for_source_column(void* self, int sourceColumn);

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sourceColumnForProxyColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param proxyColumn int
///
int32_t k_rearrangecolumnsproxymodel_source_column_for_proxy_column(void* self, int proxyColumn);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_rearrangecolumnsproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_rearrangecolumnsproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_handle_source_layout_changes(void* self);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_handle_source_data_changes(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self KRearrangeColumnsProxyModel*
///
QAbstractItemModel* k_rearrangecolumnsproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
///
bool k_rearrangecolumnsproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
///
bool k_rearrangecolumnsproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
///
bool k_rearrangecolumnsproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
///
bool k_rearrangecolumnsproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
///
bool k_rearrangecolumnsproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_rearrangecolumnsproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_rearrangecolumnsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_rearrangecolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_rearrangecolumnsproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_rearrangecolumnsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void k_rearrangecolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_rearrangecolumnsproxymodel_layout_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QPersistentModelIndex** parents)
///
void k_rearrangecolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_rearrangecolumnsproxymodel_layout_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_rearrangecolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_rearrangecolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list /* of QPersistentModelIndex* */ parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QPersistentModelIndex** parents)
///
void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_rearrangecolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list /* of QPersistentModelIndex* */ parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_rearrangecolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRearrangeColumnsProxyModel*
///
const char* k_rearrangecolumnsproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param name char*
///
void k_rearrangecolumnsproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param b bool
///
bool k_rearrangecolumnsproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KRearrangeColumnsProxyModel*
///
QThread* k_rearrangecolumnsproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param thread QThread*
///
bool k_rearrangecolumnsproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param interval int
///
int32_t k_rearrangecolumnsproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_rearrangecolumnsproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param id int
///
void k_rearrangecolumnsproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param id enum Qt__TimerId
///
void k_rearrangecolumnsproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_rearrangecolumnsproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QObject*
///
void k_rearrangecolumnsproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param filterObj QObject*
///
void k_rearrangecolumnsproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param obj QObject*
///
void k_rearrangecolumnsproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_rearrangecolumnsproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_rearrangecolumnsproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_rearrangecolumnsproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param name const char*
///
QVariant* k_rearrangecolumnsproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRearrangeColumnsProxyModel*
///
const char** k_rearrangecolumnsproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRearrangeColumnsProxyModel*
///
QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRearrangeColumnsProxyModel*
///
const QBindingStorage* k_rearrangecolumnsproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param classname const char*
///
bool k_rearrangecolumnsproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_rearrangecolumnsproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_rearrangecolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_rearrangecolumnsproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_rearrangecolumnsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param param1 QObject*
///
void k_rearrangecolumnsproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QObject* param1)
///
void k_rearrangecolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_rearrangecolumnsproxymodel_map_selection_from_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_rearrangecolumnsproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QItemSelection* func(KRearrangeColumnsProxyModel* self, QItemSelection* selection)
///
void k_rearrangecolumnsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_rearrangecolumnsproxymodel_map_selection_to_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_rearrangecolumnsproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QItemSelection* func(KRearrangeColumnsProxyModel* self, QItemSelection* selection)
///
void k_rearrangecolumnsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_rearrangecolumnsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_rearrangecolumnsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex** func(KRearrangeColumnsProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_rearrangecolumnsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_rearrangecolumnsproxymodel_set_source_model(void* self, void* sourceModel);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_rearrangecolumnsproxymodel_qbase_set_source_model(void* self, void* sourceModel);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QAbstractItemModel* sourceModel)
///
void k_rearrangecolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_rearrangecolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_rearrangecolumnsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_rearrangecolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
bool k_rearrangecolumnsproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func()
///
void k_rearrangecolumnsproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* k_rearrangecolumnsproxymodel_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param proxyIndex QModelIndex*
/// @param role int
///
QVariant* k_rearrangecolumnsproxymodel_qbase_data(void* self, void* proxyIndex, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QVariant* func(KRearrangeColumnsProxyModel* self, QModelIndex* proxyIndex, int role)
///
void k_rearrangecolumnsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
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
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_rearrangecolumnsproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
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
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_rearrangecolumnsproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback libqt_map of int to QVariant* func(KRearrangeColumnsProxyModel* self, QModelIndex* index)
///
void k_rearrangecolumnsproxymodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_rearrangecolumnsproxymodel_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_rearrangecolumnsproxymodel_qbase_flags(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func(KRearrangeColumnsProxyModel* self, QModelIndex* index)
///
void k_rearrangecolumnsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_rearrangecolumnsproxymodel_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_rearrangecolumnsproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_rearrangecolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_rearrangecolumnsproxymodel_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_rearrangecolumnsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* index, libqt_map of int to QVariant*)
///
void k_rearrangecolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_rearrangecolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_rearrangecolumnsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_rearrangecolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_rearrangecolumnsproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* index)
///
void k_rearrangecolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, QModelIndex* index)
///
void k_rearrangecolumnsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
void k_rearrangecolumnsproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
///
void k_rearrangecolumnsproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_rearrangecolumnsproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_rearrangecolumnsproxymodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_rearrangecolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
QSize* k_rearrangecolumnsproxymodel_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
///
QSize* k_rearrangecolumnsproxymodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QSize* func(KRearrangeColumnsProxyModel* self, QModelIndex* index)
///
void k_rearrangecolumnsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_rearrangecolumnsproxymodel_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_rearrangecolumnsproxymodel_qbase_mime_data(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QMimeData* func(KRearrangeColumnsProxyModel* self, QModelIndex** indexes)
///
void k_rearrangecolumnsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_rearrangecolumnsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_rearrangecolumnsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
const char** k_rearrangecolumnsproxymodel_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
const char** k_rearrangecolumnsproxymodel_qbase_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback const char** func()
///
void k_rearrangecolumnsproxymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_rearrangecolumnsproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_rearrangecolumnsproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func()
///
void k_rearrangecolumnsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_rearrangecolumnsproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_rearrangecolumnsproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func()
///
void k_rearrangecolumnsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

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
/// @param self KRearrangeColumnsProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_rearrangecolumnsproxymodel_role_names(void* self);

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
/// @param self KRearrangeColumnsProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_rearrangecolumnsproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback libqt_map of int to char* func()
///
void k_rearrangecolumnsproxymodel_on_role_names(void* self, libqt_map (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_rearrangecolumnsproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_rearrangecolumnsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_rearrangecolumnsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QEvent*
///
bool k_rearrangecolumnsproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QEvent*
///
bool k_rearrangecolumnsproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QEvent* event)
///
void k_rearrangecolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_rearrangecolumnsproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_rearrangecolumnsproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QObject* watched, QEvent* event)
///
void k_rearrangecolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QTimerEvent*
///
void k_rearrangecolumnsproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QTimerEvent*
///
void k_rearrangecolumnsproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QTimerEvent* event)
///
void k_rearrangecolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QChildEvent*
///
void k_rearrangecolumnsproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QChildEvent*
///
void k_rearrangecolumnsproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QChildEvent* event)
///
void k_rearrangecolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QEvent*
///
void k_rearrangecolumnsproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param event QEvent*
///
void k_rearrangecolumnsproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QEvent* event)
///
void k_rearrangecolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_rearrangecolumnsproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_rearrangecolumnsproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QMetaMethod* signal)
///
void k_rearrangecolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_rearrangecolumnsproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_rearrangecolumnsproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QMetaMethod* signal)
///
void k_rearrangecolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_rearrangecolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_rearrangecolumnsproxymodel_qbase_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, bool handleSourceLayoutChanges)
///
void k_rearrangecolumnsproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param handleSourceDataChanges bool
///
void k_rearrangecolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param handleSourceDataChanges bool
///
void k_rearrangecolumnsproxymodel_qbase_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, bool handleSourceDataChanges)
///
void k_rearrangecolumnsproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_rearrangecolumnsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, int row, int col, void* internalPtr)
///
void k_rearrangecolumnsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_rearrangecolumnsproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_rearrangecolumnsproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex* func(KRearrangeColumnsProxyModel* self, int row, int column)
///
void k_rearrangecolumnsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_rearrangecolumnsproxymodel_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_rearrangecolumnsproxymodel_qbase_encode_data(void* self, libqt_list /* of QModelIndex* */ indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_rearrangecolumnsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_rearrangecolumnsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_rearrangecolumnsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_rearrangecolumnsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_rearrangecolumnsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_rearrangecolumnsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_rearrangecolumnsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_rearrangecolumnsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_rearrangecolumnsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_rearrangecolumnsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_rearrangecolumnsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func()
///
void k_rearrangecolumnsproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_rearrangecolumnsproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_rearrangecolumnsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_rearrangecolumnsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_rearrangecolumnsproxymodel_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_rearrangecolumnsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex** from, QModelIndex** to)
///
void k_rearrangecolumnsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_rearrangecolumnsproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_rearrangecolumnsproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QModelIndex** func()
///
void k_rearrangecolumnsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
QObject* k_rearrangecolumnsproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
QObject* k_rearrangecolumnsproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback QObject* func()
///
void k_rearrangecolumnsproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
int32_t k_rearrangecolumnsproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
///
int32_t k_rearrangecolumnsproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func()
///
void k_rearrangecolumnsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal const char*
///
int32_t k_rearrangecolumnsproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal const char*
///
int32_t k_rearrangecolumnsproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback int32_t func(KRearrangeColumnsProxyModel* self, const char* signal)
///
void k_rearrangecolumnsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
bool k_rearrangecolumnsproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param signal QMetaMethod*
///
bool k_rearrangecolumnsproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback bool func(KRearrangeColumnsProxyModel* self, QMetaMethod* signal)
///
void k_rearrangecolumnsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_rearrangecolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self)
///
void k_rearrangecolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_rearrangecolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_rearrangecolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_rearrangecolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_rearrangecolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRearrangeColumnsProxyModel*
/// @param callback void func(KRearrangeColumnsProxyModel* self, const char* objectName)
///
void k_rearrangecolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#dtor.KRearrangeColumnsProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KRearrangeColumnsProxyModel*
///
void k_rearrangecolumnsproxymodel_delete(void* self);

#endif
