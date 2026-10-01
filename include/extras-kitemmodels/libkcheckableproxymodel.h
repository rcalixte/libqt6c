#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKCHECKABLEPROXYMODEL_H
#define EXTRAS_KITEMMODELS_LIBKCHECKABLEPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html)

/// k_checkableproxymodel_new constructs a new KCheckableProxyModel object.
///
KCheckableProxyModel* k_checkableproxymodel_new();

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html)

/// k_checkableproxymodel_new2 constructs a new KCheckableProxyModel object.
///
/// @param parent QObject*
///
KCheckableProxyModel* k_checkableproxymodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KCheckableProxyModel*
///
const QMetaObject* k_checkableproxymodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback const QMetaObject* func(const KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KCheckableProxyModel*
///
const QMetaObject* k_checkableproxymodel_super_meta_object(const void* self);

/// @param self KCheckableProxyModel*
/// @param param1 const char*
///
void* k_checkableproxymodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback void* func(KCheckableProxyModel* self, const char* param1)
///
void k_checkableproxymodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KCheckableProxyModel*
/// @param param1 const char*
///
void* k_checkableproxymodel_super_metacast(void* self, const char* param1);

/// @param self KCheckableProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_checkableproxymodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_checkableproxymodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCheckableProxyModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_checkableproxymodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_checkableproxymodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setSelectionModel)
///
/// @param self KCheckableProxyModel*
/// @param itemSelectionModel QItemSelectionModel*
///
void k_checkableproxymodel_set_selection_model(void* self, void* itemSelectionModel);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#selectionModel)
///
/// @param self const KCheckableProxyModel*
///
QItemSelectionModel* k_checkableproxymodel_selection_model(const void* self);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#flags)
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_checkableproxymodel_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(const KCheckableProxyModel* self, QModelIndex* index)
///
void k_checkableproxymodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#flags)
///
/// Base class method implementation
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_checkableproxymodel_super_flags(const void* self, const void* index);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#data)
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_checkableproxymodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback QVariant* func(const KCheckableProxyModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#data)
///
/// Base class method implementation
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_checkableproxymodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setData)
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_checkableproxymodel_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_checkableproxymodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setData)
///
/// Base class method implementation
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_checkableproxymodel_super_set_data(void* self, const void* index, const void* value, int role);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setSourceModel)
///
/// @param self KCheckableProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_checkableproxymodel_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setSourceModel)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QAbstractItemModel* sourceModel)
///
void k_checkableproxymodel_on_set_source_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#setSourceModel)
///
/// Base class method implementation
///
/// @param self KCheckableProxyModel*
/// @param sourceModel QAbstractItemModel*
///
void k_checkableproxymodel_super_set_source_model(void* self, void* sourceModel);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#roleNames)
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
/// @param self const KCheckableProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_checkableproxymodel_role_names(const void* self);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback libqt_map of int to char* func(const KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self const KCheckableProxyModel*
///
/// @return libqt_map of int to char*
///
libqt_map k_checkableproxymodel_super_role_names(const void* self);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#select)
///
/// @param self KCheckableProxyModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
bool k_checkableproxymodel_select(void* self, const void* selection, int32_t command);

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QItemSelection* selection, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_checkableproxymodel_on_select(void* self, bool (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#select)
///
/// Base class method implementation
///
/// @param self KCheckableProxyModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
bool k_checkableproxymodel_super_select(void* self, const void* selection, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_checkableproxymodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_checkableproxymodel_tr3(const char* s, const char* c, int n);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_handle_source_layout_changes(const void* self);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_handle_source_data_changes(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
///
/// @param self const KCheckableProxyModel*
///
QAbstractItemModel* k_checkableproxymodel_source_model(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
///
bool k_checkableproxymodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCheckableProxyModel*
/// @param row int
///
bool k_checkableproxymodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCheckableProxyModel*
/// @param column int
///
bool k_checkableproxymodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCheckableProxyModel*
/// @param row int
///
bool k_checkableproxymodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCheckableProxyModel*
/// @param column int
///
bool k_checkableproxymodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
bool k_checkableproxymodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCheckableProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_checkableproxymodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_checkableproxymodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCheckableProxyModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_checkableproxymodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_checkableproxymodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_checkableproxymodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCheckableProxyModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_checkableproxymodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_checkableproxymodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_checkableproxymodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_checkableproxymodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_checkableproxymodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_checkableproxymodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_checkableproxymodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_checkableproxymodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_checkableproxymodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_checkableproxymodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KCheckableProxyModel*
///
const char* k_checkableproxymodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCheckableProxyModel*
/// @param name const char*
///
void k_checkableproxymodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCheckableProxyModel*
/// @param b bool
///
bool k_checkableproxymodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KCheckableProxyModel*
///
QThread* k_checkableproxymodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCheckableProxyModel*
/// @param thread QThread*
///
bool k_checkableproxymodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCheckableProxyModel*
/// @param interval int
///
int32_t k_checkableproxymodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCheckableProxyModel*
/// @param time int64_t of nanoseconds
///
int32_t k_checkableproxymodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCheckableProxyModel*
/// @param id int
///
void k_checkableproxymodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCheckableProxyModel*
/// @param id enum Qt__TimerId
///
void k_checkableproxymodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KCheckableProxyModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_checkableproxymodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCheckableProxyModel*
/// @param parent QObject*
///
void k_checkableproxymodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCheckableProxyModel*
/// @param filterObj QObject*
///
void k_checkableproxymodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCheckableProxyModel*
/// @param obj QObject*
///
void k_checkableproxymodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_checkableproxymodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_checkableproxymodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KCheckableProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_checkableproxymodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_checkableproxymodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_checkableproxymodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
///
bool k_checkableproxymodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
/// @param receiver QObject*
///
bool k_checkableproxymodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_checkableproxymodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KCheckableProxyModel*
///
void k_checkableproxymodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KCheckableProxyModel*
///
void k_checkableproxymodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCheckableProxyModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_checkableproxymodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KCheckableProxyModel*
/// @param name const char*
///
QVariant* k_checkableproxymodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KCheckableProxyModel*
///
const char** k_checkableproxymodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCheckableProxyModel*
///
QBindingStorage* k_checkableproxymodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KCheckableProxyModel*
///
const QBindingStorage* k_checkableproxymodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KCheckableProxyModel*
/// @param classname const char*
///
bool k_checkableproxymodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCheckableProxyModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_checkableproxymodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCheckableProxyModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_checkableproxymodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_checkableproxymodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_checkableproxymodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KCheckableProxyModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_checkableproxymodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
/// @param signal const char*
///
bool k_checkableproxymodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_checkableproxymodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_checkableproxymodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KCheckableProxyModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_checkableproxymodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCheckableProxyModel*
/// @param param1 QObject*
///
void k_checkableproxymodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QObject* param1)
///
void k_checkableproxymodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
int32_t k_checkableproxymodel_column_count(const void* self, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
int32_t k_checkableproxymodel_super_column_count(const void* self, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#columnCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self, QModelIndex* parent)
///
void k_checkableproxymodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_checkableproxymodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_index(const void* self, int row, int column, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_checkableproxymodel_map_from_source(const void* self, const void* sourceIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param sourceIndex QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_map_from_source(const void* self, const void* sourceIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, QModelIndex* sourceIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_map_from_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_checkableproxymodel_map_to_source(const void* self, const void* proxyIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param proxyIndex QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_map_to_source(const void* self, const void* proxyIndex);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, QModelIndex* proxyIndex)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_map_to_source(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_checkableproxymodel_parent(const void* self, const void* child);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param child QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_parent(const void* self, const void* child);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#parent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
int32_t k_checkableproxymodel_row_count(const void* self, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
int32_t k_checkableproxymodel_super_row_count(const void* self, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#rowCount)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self, QModelIndex* parent)
///
void k_checkableproxymodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_checkableproxymodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_checkableproxymodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QVariant* func(KCheckableProxyModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_checkableproxymodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_checkableproxymodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_checkableproxymodel_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_checkableproxymodel_super_map_selection_from_source(const void* self, const void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QItemSelection* func(KCheckableProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_map_selection_from_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_checkableproxymodel_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param selection QItemSelection*
///
QItemSelection* k_checkableproxymodel_super_map_selection_to_source(const void* self, const void* selection);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QItemSelection* func(KCheckableProxyModel* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_map_selection_to_source(void* self, QItemSelection* (*callback)(const void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_checkableproxymodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_checkableproxymodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback libqt_list of QModelIndex* func(KCheckableProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_checkableproxymodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_checkableproxymodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_checkableproxymodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int column, int count, QModelIndex* parent)
///
void k_checkableproxymodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int row, int count, QModelIndex* parent)
///
void k_checkableproxymodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_checkableproxymodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_checkableproxymodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_checkableproxymodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
bool k_checkableproxymodel_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
bool k_checkableproxymodel_super_submit(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_revert(void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_revert(void* self, void (*callback)(void*));

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
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_checkableproxymodel_item_data(const void* self, const void* index);

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
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_checkableproxymodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback libqt_map of int to QVariant* func(KCheckableProxyModel* self, QModelIndex* index)
///
void k_checkableproxymodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_checkableproxymodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_checkableproxymodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_checkableproxymodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_checkableproxymodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_checkableproxymodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_checkableproxymodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
///
bool k_checkableproxymodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param index QModelIndex*
///
bool k_checkableproxymodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* index)
///
void k_checkableproxymodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_checkableproxymodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
QModelIndex* k_checkableproxymodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* parent)
///
void k_checkableproxymodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
///
void k_checkableproxymodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
///
void k_checkableproxymodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent)
///
void k_checkableproxymodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_checkableproxymodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_checkableproxymodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, int column, enum Qt__SortOrder order)
///
void k_checkableproxymodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
QSize* k_checkableproxymodel_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
///
QSize* k_checkableproxymodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QSize* func(KCheckableProxyModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* parent)
///
void k_checkableproxymodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_checkableproxymodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_checkableproxymodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QMimeData* func(KCheckableProxyModel* self, libqt_list of QModelIndex* indexes)
///
void k_checkableproxymodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_checkableproxymodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_checkableproxymodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
const char** k_checkableproxymodel_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
const char** k_checkableproxymodel_super_mime_types(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback const char** func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_checkableproxymodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_checkableproxymodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_checkableproxymodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_checkableproxymodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_checkableproxymodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_checkableproxymodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_checkableproxymodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QEvent*
///
bool k_checkableproxymodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QEvent*
///
bool k_checkableproxymodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QEvent* event)
///
void k_checkableproxymodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_checkableproxymodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_checkableproxymodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QObject* watched, QEvent* event)
///
void k_checkableproxymodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QTimerEvent*
///
void k_checkableproxymodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QTimerEvent*
///
void k_checkableproxymodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QTimerEvent* event)
///
void k_checkableproxymodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QChildEvent*
///
void k_checkableproxymodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QChildEvent*
///
void k_checkableproxymodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QChildEvent* event)
///
void k_checkableproxymodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QEvent*
///
void k_checkableproxymodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param event QEvent*
///
void k_checkableproxymodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QEvent* event)
///
void k_checkableproxymodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param signal QMetaMethod*
///
void k_checkableproxymodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param signal QMetaMethod*
///
void k_checkableproxymodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QMetaMethod* signal)
///
void k_checkableproxymodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param signal QMetaMethod*
///
void k_checkableproxymodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param signal QMetaMethod*
///
void k_checkableproxymodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QMetaMethod* signal)
///
void k_checkableproxymodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_checkableproxymodel_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param handleSourceLayoutChanges bool
///
void k_checkableproxymodel_super_set_handle_source_layout_changes(void* self, bool handleSourceLayoutChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, bool handleSourceLayoutChanges)
///
void k_checkableproxymodel_on_set_handle_source_layout_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param handleSourceDataChanges bool
///
void k_checkableproxymodel_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param handleSourceDataChanges bool
///
void k_checkableproxymodel_super_set_handle_source_data_changes(void* self, bool handleSourceDataChanges);

/// Inherited from QIdentityProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, bool handleSourceDataChanges)
///
void k_checkableproxymodel_on_set_handle_source_data_changes(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_checkableproxymodel_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param col int
/// @param internalPtr void*
///
QModelIndex* k_checkableproxymodel_super_create_source_index(const void* self, int row, int col, void* internalPtr);

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, int row, int col, void* internalPtr)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_create_source_index(void* self, QModelIndex* (*callback)(const void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_checkableproxymodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param row int
/// @param column int
///
QModelIndex* k_checkableproxymodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QModelIndex* func(KCheckableProxyModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_checkableproxymodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_checkableproxymodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_checkableproxymodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_checkableproxymodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_checkableproxymodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_checkableproxymodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_checkableproxymodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_checkableproxymodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_checkableproxymodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_checkableproxymodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_checkableproxymodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_checkableproxymodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_checkableproxymodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_checkableproxymodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_checkableproxymodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_checkableproxymodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* from, QModelIndex* to)
///
void k_checkableproxymodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_checkableproxymodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_checkableproxymodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_checkableproxymodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_checkableproxymodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_checkableproxymodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback libqt_list of QModelIndex* func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
QObject* k_checkableproxymodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
QObject* k_checkableproxymodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback QObject* func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
int32_t k_checkableproxymodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
///
int32_t k_checkableproxymodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param signal const char*
///
int32_t k_checkableproxymodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param signal const char*
///
int32_t k_checkableproxymodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback int32_t func(KCheckableProxyModel* self, const char* signal)
///
void k_checkableproxymodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param signal QMetaMethod*
///
bool k_checkableproxymodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KCheckableProxyModel*
/// @param signal QMetaMethod*
///
bool k_checkableproxymodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCheckableProxyModel*
/// @param callback bool func(KCheckableProxyModel* self, QMetaMethod* signal)
///
void k_checkableproxymodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractProxyModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_source_model_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* parent, int first, int last)
///
void k_checkableproxymodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self)
///
void k_checkableproxymodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_checkableproxymodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_checkableproxymodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_checkableproxymodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_checkableproxymodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCheckableProxyModel*
/// @param callback void func(KCheckableProxyModel* self, const char* objectName)
///
void k_checkableproxymodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcheckableproxymodel.html#dtor.KCheckableProxyModel)
///
/// Delete this object from C++ memory.
///
/// @param self KCheckableProxyModel*
///
void k_checkableproxymodel_delete(void* self);

#endif
