#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKEXTRACOLUMNSPROXYMODEL_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKEXTRACOLUMNSPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html)

/// k_extracolumnsproxymodel_new constructs a new KExtraColumnsProxyModel object.
///
KExtraColumnsProxyModel* k_extracolumnsproxymodel_new();

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html)

/// k_extracolumnsproxymodel_new2 constructs a new KExtraColumnsProxyModel object.
///
/// @param parent QObject*
///
KExtraColumnsProxyModel* k_extracolumnsproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KExtraColumnsProxyModel*
///
const QMetaObject* k_extracolumnsproxymodel_meta_object(void* self);

/// @param self KExtraColumnsProxyModel*
/// @param param1 const char*
///
void* k_extracolumnsproxymodel_metacast(void* self, const char* param1);

/// @param self KExtraColumnsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_extracolumnsproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func(KExtraColumnsProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_extracolumnsproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_extracolumnsproxymodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_extracolumnsproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#appendColumn)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_append_column(void* self);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#removeExtraColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param idx int
///
void k_extracolumnsproxymodel_remove_extra_column(void* self, int idx);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#extraColumnData)
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param row int
/// @param extraColumn int
/// @param role int
///
QVariant* k_extracolumnsproxymodel_extra_column_data(void* self, void* parent, int row, int extraColumn, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#extraColumnData)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QVariant* func(KExtraColumnsProxyModel* self, QModelIndex* parent, int row, int extraColumn, int role)
///
void k_extracolumnsproxymodel_on_extra_column_data(void* self, QVariant* (*callback)(void*, void*, int, int, int));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#extraColumnData)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param row int
/// @param extraColumn int
/// @param role int
///
QVariant* k_extracolumnsproxymodel_qbase_extra_column_data(void* self, void* parent, int row, int extraColumn, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setExtraColumnData)
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param row int
/// @param extraColumn int
/// @param data QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_set_extra_column_data(void* self, void* parent, int row, int extraColumn, void* data, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setExtraColumnData)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* parent, int row, int extraColumn, QVariant* data, int role)
///
void k_extracolumnsproxymodel_on_set_extra_column_data(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setExtraColumnData)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param row int
/// @param extraColumn int
/// @param data QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_qbase_set_extra_column_data(void* self, void* parent, int row, int extraColumn, void* data, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#extraColumnDataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param row int
/// @param extraColumn int
/// @param roles libqt_list /* of int */
///
void k_extracolumnsproxymodel_extra_column_data_changed(void* self, void* parent, int row, int extraColumn, libqt_list roles);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#extraColumnForProxyColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param proxyColumn int
///
int32_t k_extracolumnsproxymodel_extra_column_for_proxy_column(void* self, int proxyColumn);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#proxyColumnForExtraColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param extraColumn int
///
int32_t k_extracolumnsproxymodel_proxy_column_for_extra_column(void* self, int extraColumn);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setSourceModel)
///
/// @param self KExtraColumnsProxyModel*
/// @param model QAbstractItemModel*
///
void k_extracolumnsproxymodel_set_source_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QAbstractItemModel* model)
///
void k_extracolumnsproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param model QAbstractItemModel*
///
void k_extracolumnsproxymodel_qbase_set_source_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapToSource)
///
/// @param self KExtraColumnsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapToSource)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, QModelIndex* proxyIndex)
///
void k_extracolumnsproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapToSource)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_map_to_source(void* self, void* proxyIndex);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapSelectionToSource)
///
/// @param self KExtraColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_extracolumnsproxymodel_map_selection_to_source(void* self, void* selection);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapSelectionToSource)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QItemSelection* func(KExtraColumnsProxyModel* self, QItemSelection* selection)
///
void k_extracolumnsproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#mapSelectionToSource)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_extracolumnsproxymodel_qbase_map_selection_to_source(void* self, void* selection);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#columnCount)
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_extracolumnsproxymodel_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func(KExtraColumnsProxyModel* self, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_extracolumnsproxymodel_qbase_column_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#data)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_extracolumnsproxymodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QVariant* func(KExtraColumnsProxyModel* self, QModelIndex* index, int role)
///
void k_extracolumnsproxymodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_extracolumnsproxymodel_qbase_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setData)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_extracolumnsproxymodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#setData)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#sibling)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#sibling)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, int row, int column, QModelIndex* idx)
///
void k_extracolumnsproxymodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#sibling)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_sibling(void* self, int row, int column, void* idx);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#buddy)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_buddy(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#buddy)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#buddy)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_buddy(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#flags)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_extracolumnsproxymodel_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_extracolumnsproxymodel_qbase_flags(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#hasChildren)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_extracolumnsproxymodel_has_children(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_has_children(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#headerData)
///
/// @param self KExtraColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_extracolumnsproxymodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QVariant* func(KExtraColumnsProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_extracolumnsproxymodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#headerData)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_extracolumnsproxymodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#index)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, int row, int column, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#index)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_index(void* self, int row, int column, void* parent);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#parent)
///
/// @param self KExtraColumnsProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_parent(void* self, void* child);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, QModelIndex* child)
///
void k_extracolumnsproxymodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#parent)
///
/// Base class method implementation
///
/// @param self KExtraColumnsProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_parent(void* self, void* child);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_extracolumnsproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_extracolumnsproxymodel_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#appendColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param header const char*
///
void k_extracolumnsproxymodel_append_column1(void* self, const char* header);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_handle_source_layout_changes(void* self);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_handle_source_data_changes(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self KExtraColumnsProxyModel*
///
QAbstractItemModel* k_extracolumnsproxymodel_source_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
///
bool k_extracolumnsproxymodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
///
bool k_extracolumnsproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
///
bool k_extracolumnsproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
///
bool k_extracolumnsproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
///
bool k_extracolumnsproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_extracolumnsproxymodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_extracolumnsproxymodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_extracolumnsproxymodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_extracolumnsproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_extracolumnsproxymodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void k_extracolumnsproxymodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void k_extracolumnsproxymodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_extracolumnsproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QPersistentModelIndex** parents)
///
void k_extracolumnsproxymodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_extracolumnsproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_extracolumnsproxymodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
///
void k_extracolumnsproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QPersistentModelIndex** parents)
///
void k_extracolumnsproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_extracolumnsproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QPersistentModelIndex** parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_extracolumnsproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KExtraColumnsProxyModel*
///
const char* k_extracolumnsproxymodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KExtraColumnsProxyModel*
/// @param name char*
///
void k_extracolumnsproxymodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KExtraColumnsProxyModel*
/// @param b bool
///
bool k_extracolumnsproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KExtraColumnsProxyModel*
///
QThread* k_extracolumnsproxymodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KExtraColumnsProxyModel*
/// @param thread QThread*
///
bool k_extracolumnsproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtraColumnsProxyModel*
/// @param interval int
///
int32_t k_extracolumnsproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KExtraColumnsProxyModel*
/// @param id int
///
void k_extracolumnsproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KExtraColumnsProxyModel*
/// @param id enum Qt__TimerId
///
void k_extracolumnsproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KExtraColumnsProxyModel*
///
libqt_list /* of QObject* */ k_extracolumnsproxymodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QObject*
///
void k_extracolumnsproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KExtraColumnsProxyModel*
/// @param filterObj QObject*
///
void k_extracolumnsproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KExtraColumnsProxyModel*
/// @param obj QObject*
///
void k_extracolumnsproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_extracolumnsproxymodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KExtraColumnsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_extracolumnsproxymodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_extracolumnsproxymodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_extracolumnsproxymodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KExtraColumnsProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_extracolumnsproxymodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KExtraColumnsProxyModel*
/// @param name const char*
///
QVariant* k_extracolumnsproxymodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KExtraColumnsProxyModel*
///
const char** k_extracolumnsproxymodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KExtraColumnsProxyModel*
///
QBindingStorage* k_extracolumnsproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KExtraColumnsProxyModel*
///
const QBindingStorage* k_extracolumnsproxymodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KExtraColumnsProxyModel*
/// @param classname const char*
///
bool k_extracolumnsproxymodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KExtraColumnsProxyModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_extracolumnsproxymodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KExtraColumnsProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_extracolumnsproxymodel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_extracolumnsproxymodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KExtraColumnsProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_extracolumnsproxymodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtraColumnsProxyModel*
/// @param param1 QObject*
///
void k_extracolumnsproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QObject* param1)
///
void k_extracolumnsproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_map_from_source(void* self, void* sourceIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_extracolumnsproxymodel_qbase_map_from_source(void* self, void* sourceIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, QModelIndex* sourceIndex)
///
void k_extracolumnsproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_extracolumnsproxymodel_row_count(void* self, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
int32_t k_extracolumnsproxymodel_qbase_row_count(void* self, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func(KExtraColumnsProxyModel* self, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_extracolumnsproxymodel_map_selection_from_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_extracolumnsproxymodel_qbase_map_selection_from_source(void* self, void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QItemSelection* func(KExtraColumnsProxyModel* self, QItemSelection* selection)
///
void k_extracolumnsproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex** func(KExtraColumnsProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_extracolumnsproxymodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_extracolumnsproxymodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_extracolumnsproxymodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_extracolumnsproxymodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
bool k_extracolumnsproxymodel_qbase_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func()
///
void k_extracolumnsproxymodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
libqt_map /* of int to QVariant* */ k_extracolumnsproxymodel_qbase_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback libqt_map /* of int to QVariant* */ func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_extracolumnsproxymodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
///
bool k_extracolumnsproxymodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ /* of int to QVariant* */)
///
void k_extracolumnsproxymodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_extracolumnsproxymodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_extracolumnsproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_extracolumnsproxymodel_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_clear_item_data(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
void k_extracolumnsproxymodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
///
void k_extracolumnsproxymodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_extracolumnsproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_extracolumnsproxymodel_qbase_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_extracolumnsproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
QSize* k_extracolumnsproxymodel_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
///
QSize* k_extracolumnsproxymodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QSize* func(KExtraColumnsProxyModel* self, QModelIndex* index)
///
void k_extracolumnsproxymodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_extracolumnsproxymodel_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
///
QMimeData* k_extracolumnsproxymodel_qbase_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QMimeData* func(KExtraColumnsProxyModel* self, QModelIndex** indexes)
///
void k_extracolumnsproxymodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_extracolumnsproxymodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_extracolumnsproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
const char** k_extracolumnsproxymodel_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
const char** k_extracolumnsproxymodel_qbase_mime_types(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback const char** func()
///
void k_extracolumnsproxymodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_extracolumnsproxymodel_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_extracolumnsproxymodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func()
///
void k_extracolumnsproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_extracolumnsproxymodel_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_extracolumnsproxymodel_qbase_supported_drop_actions(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func()
///
void k_extracolumnsproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
libqt_map /* of int to char* */ k_extracolumnsproxymodel_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
libqt_map /* of int to char* */ k_extracolumnsproxymodel_qbase_role_names(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback libqt_map /* of int to char* */ func()
///
void k_extracolumnsproxymodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_extracolumnsproxymodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_extracolumnsproxymodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_extracolumnsproxymodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QEvent*
///
bool k_extracolumnsproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QEvent*
///
bool k_extracolumnsproxymodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QEvent* event)
///
void k_extracolumnsproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_extracolumnsproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_extracolumnsproxymodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QObject* watched, QEvent* event)
///
void k_extracolumnsproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QTimerEvent*
///
void k_extracolumnsproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QTimerEvent*
///
void k_extracolumnsproxymodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QTimerEvent* event)
///
void k_extracolumnsproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QChildEvent*
///
void k_extracolumnsproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QChildEvent*
///
void k_extracolumnsproxymodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QChildEvent* event)
///
void k_extracolumnsproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QEvent*
///
void k_extracolumnsproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param event QEvent*
///
void k_extracolumnsproxymodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QEvent* event)
///
void k_extracolumnsproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_extracolumnsproxymodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_extracolumnsproxymodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QMetaMethod* signal)
///
void k_extracolumnsproxymodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_extracolumnsproxymodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
void k_extracolumnsproxymodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QMetaMethod* signal)
///
void k_extracolumnsproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_extracolumnsproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_extracolumnsproxymodel_qbase_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, bool handleSourceLayoutChanges)
///
void k_extracolumnsproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param handleSourceDataChanges bool
///
void k_extracolumnsproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param handleSourceDataChanges bool
///
void k_extracolumnsproxymodel_qbase_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, bool handleSourceDataChanges)
///
void k_extracolumnsproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_extracolumnsproxymodel_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_extracolumnsproxymodel_qbase_create_source_index(void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, int row, int col, void* internalPtr)
///
void k_extracolumnsproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_extracolumnsproxymodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_extracolumnsproxymodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex* func(KExtraColumnsProxyModel* self, int row, int column)
///
void k_extracolumnsproxymodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_extracolumnsproxymodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
///
void k_extracolumnsproxymodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex** indexes, QDataStream* stream)
///
void k_extracolumnsproxymodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_extracolumnsproxymodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_extracolumnsproxymodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_extracolumnsproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_extracolumnsproxymodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_extracolumnsproxymodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_extracolumnsproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_extracolumnsproxymodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_extracolumnsproxymodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_extracolumnsproxymodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_extracolumnsproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func()
///
void k_extracolumnsproxymodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_extracolumnsproxymodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_extracolumnsproxymodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_extracolumnsproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_extracolumnsproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
///
void k_extracolumnsproxymodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex** from, QModelIndex** to)
///
void k_extracolumnsproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
libqt_list /* of QModelIndex* */ k_extracolumnsproxymodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QModelIndex** func()
///
void k_extracolumnsproxymodel_on_persistent_index_list(void* self, QModelIndex** (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
QObject* k_extracolumnsproxymodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
QObject* k_extracolumnsproxymodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback QObject* func()
///
void k_extracolumnsproxymodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
int32_t k_extracolumnsproxymodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
///
int32_t k_extracolumnsproxymodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func()
///
void k_extracolumnsproxymodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal const char*
///
int32_t k_extracolumnsproxymodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal const char*
///
int32_t k_extracolumnsproxymodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback int32_t func(KExtraColumnsProxyModel* self, const char* signal)
///
void k_extracolumnsproxymodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
bool k_extracolumnsproxymodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param signal QMetaMethod*
///
bool k_extracolumnsproxymodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KExtraColumnsProxyModel*
/// @param callback bool func(KExtraColumnsProxyModel* self, QMetaMethod* signal)
///
void k_extracolumnsproxymodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_extracolumnsproxymodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self)
///
void k_extracolumnsproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_extracolumnsproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_extracolumnsproxymodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_extracolumnsproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_extracolumnsproxymodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KExtraColumnsProxyModel*
/// @param callback void func(KExtraColumnsProxyModel* self, const char* objectName)
///
void k_extracolumnsproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kextracolumnsproxymodel.html#dtor.KExtraColumnsProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KExtraColumnsProxyModel*
///
void k_extracolumnsproxymodel_delete(void* self);

#endif
