#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKCOLUMNHEADERSMODEL_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKCOLUMNHEADERSMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html)

/// k_columnheadersmodel_new constructs a new KColumnHeadersModel object.
///
KColumnHeadersModel* k_columnheadersmodel_new();

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html)

/// k_columnheadersmodel_new2 constructs a new KColumnHeadersModel object.
///
/// @param parent QObject*
///
KColumnHeadersModel* k_columnheadersmodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KColumnHeadersModel*
///
const QMetaObject* k_columnheadersmodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback const QMetaObject* func()
///
void k_columnheadersmodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_meta_object` instead
///
#define k_columnheadersmodel_qbase_meta_object k_columnheadersmodel_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
///
const QMetaObject* k_columnheadersmodel_super_meta_object(void* self);

/// @param self KColumnHeadersModel*
/// @param param1 const char*
///
void* k_columnheadersmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback void* func(KColumnHeadersModel* self, const char* param1)
///
void k_columnheadersmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_metacast` instead
///
#define k_columnheadersmodel_qbase_metacast k_columnheadersmodel_super_metacast

/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param param1 const char*
///
void* k_columnheadersmodel_super_metacast(void* self, const char* param1);

/// @param self KColumnHeadersModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_columnheadersmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_columnheadersmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_metacall` instead
///
#define k_columnheadersmodel_qbase_metacall k_columnheadersmodel_super_metacall

/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_columnheadersmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_columnheadersmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
int32_t k_columnheadersmodel_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* parent)
///
void k_columnheadersmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_row_count` instead
///
#define k_columnheadersmodel_qbase_row_count k_columnheadersmodel_super_row_count

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
int32_t k_columnheadersmodel_super_row_count(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_columnheadersmodel_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback QVariant* func(KColumnHeadersModel* self, QModelIndex* index, int role)
///
void k_columnheadersmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_data` instead
///
#define k_columnheadersmodel_qbase_data k_columnheadersmodel_super_data

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#data)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_columnheadersmodel_super_data(void* self, void* index, int role);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
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
/// @param self KColumnHeadersModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_columnheadersmodel_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_map of int to char* func()
///
void k_columnheadersmodel_on_role_names(void* self, libqt_map (*callback)());

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_role_names` instead
///
#define k_columnheadersmodel_qbase_role_names k_columnheadersmodel_super_role_names

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_columnheadersmodel_super_role_names(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sourceModel)
///
/// @param self KColumnHeadersModel*
///
QAbstractItemModel* k_columnheadersmodel_source_model(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#setSourceModel)
///
/// @param self KColumnHeadersModel*
/// @param newSourceModel QAbstractItemModel*
///
void k_columnheadersmodel_set_source_model(void* self, void* newSourceModel);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortColumn)
///
/// @param self KColumnHeadersModel*
///
int32_t k_columnheadersmodel_sort_column(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#setSortColumn)
///
/// @param self KColumnHeadersModel*
/// @param newSortColumn int
///
void k_columnheadersmodel_set_sort_column(void* self, int newSortColumn);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortOrder)
///
/// @param self KColumnHeadersModel*
///
/// @return enum Qt__SortOrder
///
int32_t k_columnheadersmodel_sort_order(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#setSortOrder)
///
/// @param self KColumnHeadersModel*
/// @param newSortOrder enum Qt__SortOrder
///
void k_columnheadersmodel_set_sort_order(void* self, int32_t newSortOrder);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sourceModelChanged)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_source_model_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sourceModelChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_source_model_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortColumnChanged)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_sort_column_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortColumnChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_sort_column_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortOrderChanged)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_sort_order_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#sortOrderChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_sort_order_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_columnheadersmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_columnheadersmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
///
bool k_columnheadersmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @param self KColumnHeadersModel*
/// @param child QModelIndex*
///
QModelIndex* k_columnheadersmodel_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, QModelIndex* child)
///
void k_columnheadersmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_parent` instead
///
#define k_columnheadersmodel_qbase_parent k_columnheadersmodel_super_parent

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param child QModelIndex*
///
QModelIndex* k_columnheadersmodel_super_parent(void* self, void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
int32_t k_columnheadersmodel_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* parent)
///
void k_columnheadersmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_column_count` instead
///
#define k_columnheadersmodel_qbase_column_count k_columnheadersmodel_super_column_count

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
int32_t k_columnheadersmodel_super_column_count(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* parent)
///
void k_columnheadersmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_has_children` instead
///
#define k_columnheadersmodel_qbase_has_children k_columnheadersmodel_super_has_children

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_has_children(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
///
bool k_columnheadersmodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
///
bool k_columnheadersmodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
///
bool k_columnheadersmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
///
bool k_columnheadersmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
bool k_columnheadersmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_columnheadersmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_columnheadersmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColumnHeadersModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_columnheadersmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_columnheadersmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_insert_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_insert_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_columnheadersmodel_check_index2(void* self, void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_columnheadersmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_columnheadersmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_columnheadersmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_columnheadersmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_columnheadersmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_columnheadersmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_columnheadersmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_columnheadersmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_columnheadersmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_columnheadersmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KColumnHeadersModel*
///
const char* k_columnheadersmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KColumnHeadersModel*
/// @param name const char*
///
void k_columnheadersmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KColumnHeadersModel*
/// @param b bool
///
bool k_columnheadersmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KColumnHeadersModel*
///
QThread* k_columnheadersmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColumnHeadersModel*
/// @param thread QThread*
///
bool k_columnheadersmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param interval int
///
int32_t k_columnheadersmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param time int64_t of nanoseconds
///
int32_t k_columnheadersmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColumnHeadersModel*
/// @param id int
///
void k_columnheadersmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColumnHeadersModel*
/// @param id enum Qt__TimerId
///
void k_columnheadersmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KColumnHeadersModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_columnheadersmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KColumnHeadersModel*
/// @param parent QObject*
///
void k_columnheadersmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KColumnHeadersModel*
/// @param filterObj QObject*
///
void k_columnheadersmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KColumnHeadersModel*
/// @param obj QObject*
///
void k_columnheadersmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_columnheadersmodel_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_columnheadersmodel_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KColumnHeadersModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_columnheadersmodel_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_columnheadersmodel_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_columnheadersmodel_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
/// @param receiver QObject*
///
bool k_columnheadersmodel_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_columnheadersmodel_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KColumnHeadersModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_columnheadersmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KColumnHeadersModel*
/// @param name const char*
///
QVariant* k_columnheadersmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KColumnHeadersModel*
///
const char** k_columnheadersmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColumnHeadersModel*
///
QBindingStorage* k_columnheadersmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColumnHeadersModel*
///
const QBindingStorage* k_columnheadersmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KColumnHeadersModel*
/// @param classname const char*
///
bool k_columnheadersmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_columnheadersmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColumnHeadersModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_columnheadersmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_columnheadersmodel_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_columnheadersmodel_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KColumnHeadersModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_columnheadersmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
///
bool k_columnheadersmodel_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_columnheadersmodel_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_columnheadersmodel_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KColumnHeadersModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_columnheadersmodel_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param param1 QObject*
///
void k_columnheadersmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QObject* param1)
///
void k_columnheadersmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_columnheadersmodel_index(void* self, int row, int column, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_index` instead
///
#define k_columnheadersmodel_qbase_index k_columnheadersmodel_super_index

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_columnheadersmodel_super_index(void* self, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column, QModelIndex* parent)
///
void k_columnheadersmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_columnheadersmodel_sibling(void* self, int row, int column, void* idx);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_sibling` instead
///
#define k_columnheadersmodel_qbase_sibling k_columnheadersmodel_super_sibling

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_columnheadersmodel_super_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column, QModelIndex* idx)
///
void k_columnheadersmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_drop_mime_data` instead
///
#define k_columnheadersmodel_qbase_drop_mime_data k_columnheadersmodel_super_drop_mime_data

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_columnheadersmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_columnheadersmodel_flags(void* self, void* index);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_flags` instead
///
#define k_columnheadersmodel_qbase_flags k_columnheadersmodel_super_flags

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_columnheadersmodel_super_flags(void* self, void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, QModelIndex* index)
///
void k_columnheadersmodel_on_flags(void* self, int32_t (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_columnheadersmodel_set_data(void* self, void* index, void* value, int role);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_set_data` instead
///
#define k_columnheadersmodel_qbase_set_data k_columnheadersmodel_super_set_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_columnheadersmodel_super_set_data(void* self, void* index, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_columnheadersmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_columnheadersmodel_header_data(void* self, int section, int32_t orientation, int role);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_header_data` instead
///
#define k_columnheadersmodel_qbase_header_data k_columnheadersmodel_super_header_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_columnheadersmodel_super_header_data(void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QVariant* func(KColumnHeadersModel* self, int section, enum Qt__Orientation orientation, int role)
///
void k_columnheadersmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_columnheadersmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_set_header_data` instead
///
#define k_columnheadersmodel_qbase_set_header_data k_columnheadersmodel_super_set_header_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_columnheadersmodel_super_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_columnheadersmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

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
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_columnheadersmodel_item_data(void* self, void* index);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_item_data` instead
///
#define k_columnheadersmodel_qbase_item_data k_columnheadersmodel_super_item_data

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
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_columnheadersmodel_super_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_map of int to QVariant* func(KColumnHeadersModel* self, QModelIndex* index)
///
void k_columnheadersmodel_on_item_data(void* self, libqt_map (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_columnheadersmodel_set_item_data(void* self, void* index, libqt_map roles);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_set_item_data` instead
///
#define k_columnheadersmodel_qbase_set_item_data k_columnheadersmodel_super_set_item_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_columnheadersmodel_super_set_item_data(void* self, void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_columnheadersmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
bool k_columnheadersmodel_clear_item_data(void* self, void* index);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_clear_item_data` instead
///
#define k_columnheadersmodel_qbase_clear_item_data k_columnheadersmodel_super_clear_item_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
bool k_columnheadersmodel_super_clear_item_data(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* index)
///
void k_columnheadersmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
const char** k_columnheadersmodel_mime_types(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_mime_types` instead
///
#define k_columnheadersmodel_qbase_mime_types k_columnheadersmodel_super_mime_types

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
const char** k_columnheadersmodel_super_mime_types(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback const char** func()
///
void k_columnheadersmodel_on_mime_types(void* self, const char** (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_columnheadersmodel_mime_data(void* self, libqt_list indexes);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_mime_data` instead
///
#define k_columnheadersmodel_qbase_mime_data k_columnheadersmodel_super_mime_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_columnheadersmodel_super_mime_data(void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QMimeData* func(KColumnHeadersModel* self, libqt_list of QModelIndex* indexes)
///
void k_columnheadersmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_can_drop_mime_data` instead
///
#define k_columnheadersmodel_qbase_can_drop_mime_data k_columnheadersmodel_super_can_drop_mime_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_columnheadersmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_columnheadersmodel_supported_drop_actions(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_supported_drop_actions` instead
///
#define k_columnheadersmodel_qbase_supported_drop_actions k_columnheadersmodel_super_supported_drop_actions

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_columnheadersmodel_super_supported_drop_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
///
void k_columnheadersmodel_on_supported_drop_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_columnheadersmodel_supported_drag_actions(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_supported_drag_actions` instead
///
#define k_columnheadersmodel_qbase_supported_drag_actions k_columnheadersmodel_super_supported_drag_actions

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_columnheadersmodel_super_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
///
void k_columnheadersmodel_on_supported_drag_actions(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_insert_rows(void* self, int row, int count, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_insert_rows` instead
///
#define k_columnheadersmodel_qbase_insert_rows k_columnheadersmodel_super_insert_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_insert_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int count, QModelIndex* parent)
///
void k_columnheadersmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_insert_columns(void* self, int column, int count, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_insert_columns` instead
///
#define k_columnheadersmodel_qbase_insert_columns k_columnheadersmodel_super_insert_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_insert_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int column, int count, QModelIndex* parent)
///
void k_columnheadersmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_remove_rows(void* self, int row, int count, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_remove_rows` instead
///
#define k_columnheadersmodel_qbase_remove_rows k_columnheadersmodel_super_remove_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_remove_rows(void* self, int row, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int count, QModelIndex* parent)
///
void k_columnheadersmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_remove_columns(void* self, int column, int count, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_remove_columns` instead
///
#define k_columnheadersmodel_qbase_remove_columns k_columnheadersmodel_super_remove_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_remove_columns(void* self, int column, int count, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int column, int count, QModelIndex* parent)
///
void k_columnheadersmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_move_rows` instead
///
#define k_columnheadersmodel_qbase_move_rows k_columnheadersmodel_super_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_super_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_columnheadersmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_move_columns` instead
///
#define k_columnheadersmodel_qbase_move_columns k_columnheadersmodel_super_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_columnheadersmodel_super_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_columnheadersmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
void k_columnheadersmodel_fetch_more(void* self, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_fetch_more` instead
///
#define k_columnheadersmodel_qbase_fetch_more k_columnheadersmodel_super_fetch_more

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
void k_columnheadersmodel_super_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent)
///
void k_columnheadersmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_can_fetch_more(void* self, void* parent);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_can_fetch_more` instead
///
#define k_columnheadersmodel_qbase_can_fetch_more k_columnheadersmodel_super_can_fetch_more

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
///
bool k_columnheadersmodel_super_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* parent)
///
void k_columnheadersmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_columnheadersmodel_sort(void* self, int column, int32_t order);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_sort` instead
///
#define k_columnheadersmodel_qbase_sort k_columnheadersmodel_super_sort

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_columnheadersmodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, int column, enum Qt__SortOrder order)
///
void k_columnheadersmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
QModelIndex* k_columnheadersmodel_buddy(void* self, void* index);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_buddy` instead
///
#define k_columnheadersmodel_qbase_buddy k_columnheadersmodel_super_buddy

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
QModelIndex* k_columnheadersmodel_super_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, QModelIndex* index)
///
void k_columnheadersmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_columnheadersmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_match` instead
///
#define k_columnheadersmodel_qbase_match k_columnheadersmodel_super_match

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_columnheadersmodel_super_match(void* self, void* start, int role, void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_list of QModelIndex* func(KColumnHeadersModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_columnheadersmodel_on_match(void* self, libqt_list (*callback)(void*, void*, int, void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
QSize* k_columnheadersmodel_span(void* self, void* index);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_span` instead
///
#define k_columnheadersmodel_qbase_span k_columnheadersmodel_super_span

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
///
QSize* k_columnheadersmodel_super_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QSize* func(KColumnHeadersModel* self, QModelIndex* index)
///
void k_columnheadersmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_columnheadersmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_multi_data` instead
///
#define k_columnheadersmodel_qbase_multi_data k_columnheadersmodel_super_multi_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_columnheadersmodel_super_multi_data(void* self, void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_columnheadersmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_submit(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_submit` instead
///
#define k_columnheadersmodel_qbase_submit k_columnheadersmodel_super_submit

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
bool k_columnheadersmodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func()
///
void k_columnheadersmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_revert(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_revert` instead
///
#define k_columnheadersmodel_qbase_revert k_columnheadersmodel_super_revert

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_reset_internal_data(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_reset_internal_data` instead
///
#define k_columnheadersmodel_qbase_reset_internal_data k_columnheadersmodel_super_reset_internal_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
///
bool k_columnheadersmodel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_event` instead
///
#define k_columnheadersmodel_qbase_event k_columnheadersmodel_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
///
bool k_columnheadersmodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QEvent* event)
///
void k_columnheadersmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_columnheadersmodel_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_event_filter` instead
///
#define k_columnheadersmodel_qbase_event_filter k_columnheadersmodel_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_columnheadersmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QObject* watched, QEvent* event)
///
void k_columnheadersmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QTimerEvent*
///
void k_columnheadersmodel_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_timer_event` instead
///
#define k_columnheadersmodel_qbase_timer_event k_columnheadersmodel_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QTimerEvent*
///
void k_columnheadersmodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QTimerEvent* event)
///
void k_columnheadersmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QChildEvent*
///
void k_columnheadersmodel_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_child_event` instead
///
#define k_columnheadersmodel_qbase_child_event k_columnheadersmodel_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QChildEvent*
///
void k_columnheadersmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QChildEvent* event)
///
void k_columnheadersmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
///
void k_columnheadersmodel_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_custom_event` instead
///
#define k_columnheadersmodel_qbase_custom_event k_columnheadersmodel_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param event QEvent*
///
void k_columnheadersmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QEvent* event)
///
void k_columnheadersmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
void k_columnheadersmodel_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_connect_notify` instead
///
#define k_columnheadersmodel_qbase_connect_notify k_columnheadersmodel_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
void k_columnheadersmodel_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QMetaMethod* signal)
///
void k_columnheadersmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
void k_columnheadersmodel_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_disconnect_notify` instead
///
#define k_columnheadersmodel_qbase_disconnect_notify k_columnheadersmodel_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
void k_columnheadersmodel_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QMetaMethod* signal)
///
void k_columnheadersmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
///
QModelIndex* k_columnheadersmodel_create_index(void* self, int row, int column);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_create_index` instead
///
#define k_columnheadersmodel_qbase_create_index k_columnheadersmodel_super_create_index

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
///
QModelIndex* k_columnheadersmodel_super_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QModelIndex* func(KColumnHeadersModel* self, int row, int column)
///
void k_columnheadersmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_columnheadersmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_encode_data` instead
///
#define k_columnheadersmodel_qbase_encode_data k_columnheadersmodel_super_encode_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_columnheadersmodel_super_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_columnheadersmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_columnheadersmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_decode_data` instead
///
#define k_columnheadersmodel_qbase_decode_data k_columnheadersmodel_super_decode_data

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_columnheadersmodel_super_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_columnheadersmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_insert_rows` instead
///
#define k_columnheadersmodel_qbase_begin_insert_rows k_columnheadersmodel_super_begin_insert_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_super_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_insert_rows(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_insert_rows` instead
///
#define k_columnheadersmodel_qbase_end_insert_rows k_columnheadersmodel_super_end_insert_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_remove_rows` instead
///
#define k_columnheadersmodel_qbase_begin_remove_rows k_columnheadersmodel_super_begin_remove_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_super_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_remove_rows(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_remove_rows` instead
///
#define k_columnheadersmodel_qbase_end_remove_rows k_columnheadersmodel_super_end_remove_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_columnheadersmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_move_rows` instead
///
#define k_columnheadersmodel_qbase_begin_move_rows k_columnheadersmodel_super_begin_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_columnheadersmodel_super_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_columnheadersmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_move_rows(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_move_rows` instead
///
#define k_columnheadersmodel_qbase_end_move_rows k_columnheadersmodel_super_end_move_rows

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_insert_columns` instead
///
#define k_columnheadersmodel_qbase_begin_insert_columns k_columnheadersmodel_super_begin_insert_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_super_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_insert_columns(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_insert_columns` instead
///
#define k_columnheadersmodel_qbase_end_insert_columns k_columnheadersmodel_super_end_insert_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_remove_columns` instead
///
#define k_columnheadersmodel_qbase_begin_remove_columns k_columnheadersmodel_super_begin_remove_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_columnheadersmodel_super_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_remove_columns(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_remove_columns` instead
///
#define k_columnheadersmodel_qbase_end_remove_columns k_columnheadersmodel_super_end_remove_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_columnheadersmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_move_columns` instead
///
#define k_columnheadersmodel_qbase_begin_move_columns k_columnheadersmodel_super_begin_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_columnheadersmodel_super_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_columnheadersmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_move_columns(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_move_columns` instead
///
#define k_columnheadersmodel_qbase_end_move_columns k_columnheadersmodel_super_end_move_columns

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_begin_reset_model(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_begin_reset_model` instead
///
#define k_columnheadersmodel_qbase_begin_reset_model k_columnheadersmodel_super_begin_reset_model

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_end_reset_model(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_end_reset_model` instead
///
#define k_columnheadersmodel_qbase_end_reset_model k_columnheadersmodel_super_end_reset_model

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func()
///
void k_columnheadersmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_columnheadersmodel_change_persistent_index(void* self, void* from, void* to);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_change_persistent_index` instead
///
#define k_columnheadersmodel_qbase_change_persistent_index k_columnheadersmodel_super_change_persistent_index

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_columnheadersmodel_super_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* from, QModelIndex* to)
///
void k_columnheadersmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_columnheadersmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_change_persistent_index_list` instead
///
#define k_columnheadersmodel_qbase_change_persistent_index_list k_columnheadersmodel_super_change_persistent_index_list

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_columnheadersmodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_columnheadersmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_columnheadersmodel_persistent_index_list(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_persistent_index_list` instead
///
#define k_columnheadersmodel_qbase_persistent_index_list k_columnheadersmodel_super_persistent_index_list

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_columnheadersmodel_super_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback libqt_list of QModelIndex* func()
///
void k_columnheadersmodel_on_persistent_index_list(void* self, libqt_list (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
QObject* k_columnheadersmodel_sender(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_sender` instead
///
#define k_columnheadersmodel_qbase_sender k_columnheadersmodel_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
QObject* k_columnheadersmodel_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback QObject* func()
///
void k_columnheadersmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
///
int32_t k_columnheadersmodel_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_sender_signal_index` instead
///
#define k_columnheadersmodel_qbase_sender_signal_index k_columnheadersmodel_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
///
int32_t k_columnheadersmodel_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func()
///
void k_columnheadersmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
///
int32_t k_columnheadersmodel_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_receivers` instead
///
#define k_columnheadersmodel_qbase_receivers k_columnheadersmodel_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal const char*
///
int32_t k_columnheadersmodel_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback int32_t func(KColumnHeadersModel* self, const char* signal)
///
void k_columnheadersmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
bool k_columnheadersmodel_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_columnheadersmodel_super_is_signal_connected` instead
///
#define k_columnheadersmodel_qbase_is_signal_connected k_columnheadersmodel_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param signal QMetaMethod*
///
bool k_columnheadersmodel_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColumnHeadersModel*
/// @param callback bool func(KColumnHeadersModel* self, QMetaMethod* signal)
///
void k_columnheadersmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* parent, int first, int last)
///
void k_columnheadersmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self)
///
void k_columnheadersmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_columnheadersmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_columnheadersmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_columnheadersmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_columnheadersmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KColumnHeadersModel*
/// @param callback void func(KColumnHeadersModel* self, const char* objectName)
///
void k_columnheadersmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#dtor.KColumnHeadersModel)
///
/// Delete this object from C++ memory.
///
/// @param self KColumnHeadersModel*
///
void k_columnheadersmodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcolumnheadersmodel.html#public-types)

typedef enum {
    KCOLUMNHEADERSMODEL_EXTRAROLES_SORTROLE = 18714894
} KColumnHeadersModel__ExtraRoles;

#endif
