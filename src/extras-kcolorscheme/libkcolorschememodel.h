#pragma once
#ifndef EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMODEL_H
#define EXTRAS_KCOLORSCHEME_LIBKCOLORSCHEMEMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html)

/// k_colorschememodel_new constructs a new KColorSchemeModel object.
///
KColorSchemeModel* k_colorschememodel_new();

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html)

/// k_colorschememodel_new2 constructs a new KColorSchemeModel object.
///
/// @param parent QObject*
///
KColorSchemeModel* k_colorschememodel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KColorSchemeModel*
///
const QMetaObject* k_colorschememodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback const QMetaObject* func(const KColorSchemeModel* self)
///
void k_colorschememodel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KColorSchemeModel*
///
const QMetaObject* k_colorschememodel_super_meta_object(const void* self);

/// @param self KColorSchemeModel*
/// @param param1 const char*
///
void* k_colorschememodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback void* func(KColorSchemeModel* self, const char* param1)
///
void k_colorschememodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KColorSchemeModel*
/// @param param1 const char*
///
void* k_colorschememodel_super_metacast(void* self, const char* param1);

/// @param self KColorSchemeModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschememodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_colorschememodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KColorSchemeModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_colorschememodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_colorschememodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#data)
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_colorschememodel_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback QVariant* func(const KColorSchemeModel* self, QModelIndex* index, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_data(void* self, QVariant* (*callback)(const void*, const void*, int));

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#data)
///
/// Base class method implementation
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
/// @param role int
///
QVariant* k_colorschememodel_super_data(const void* self, const void* index, int role);

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#rowCount)
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
int32_t k_colorschememodel_row_count(const void* self, const void* parent);

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(const KColorSchemeModel* self, QModelIndex* parent)
///
void k_colorschememodel_on_row_count(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
int32_t k_colorschememodel_super_row_count(const void* self, const void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_colorschememodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_colorschememodel_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
///
bool k_colorschememodel_has_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// @warning This method must be implemented with `k_colorschememodel_on_parent` before it can be called.
///
/// @param self const KColorSchemeModel*
/// @param child QModelIndex*
///
QModelIndex* k_colorschememodel_parent(const void* self, const void* child);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback QModelIndex* func(const KColorSchemeModel* self, QModelIndex* child)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_parent(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// @warning This method must be implemented with `k_colorschememodel_on_column_count` before it can be called.
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
int32_t k_colorschememodel_column_count(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(const KColorSchemeModel* self, QModelIndex* parent)
///
void k_colorschememodel_on_column_count(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
bool k_colorschememodel_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(const KColorSchemeModel* self, QModelIndex* parent)
///
void k_colorschememodel_on_has_children(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_has_children(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColorSchemeModel*
/// @param row int
///
bool k_colorschememodel_insert_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColorSchemeModel*
/// @param column int
///
bool k_colorschememodel_insert_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColorSchemeModel*
/// @param row int
///
bool k_colorschememodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColorSchemeModel*
/// @param column int
///
bool k_colorschememodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_move_row(void* self, const void* sourceParent, int sourceRow, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_move_column(void* self, const void* sourceParent, int sourceColumn, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
bool k_colorschememodel_check_index(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColorSchemeModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
///
void k_colorschememodel_data_changed(void* self, const void* topLeft, const void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* topLeft, QModelIndex* bottomRight)
///
void k_colorschememodel_on_data_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColorSchemeModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
///
void k_colorschememodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, enum Qt__Orientation orientation, int first, int last)
///
void k_colorschememodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_has_index3(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_colorschememodel_insert_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_insert_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_colorschememodel_remove_row2(void* self, int row, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_remove_column2(void* self, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
///
bool k_colorschememodel_check_index2(const void* self, const void* index, int32_t options);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColorSchemeModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_colorschememodel_data_changed3(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void k_colorschememodel_on_data_changed3(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_colorschememodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_colorschememodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_colorschememodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_colorschememodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
/// @param parents libqt_list of QPersistentModelIndex*
///
void k_colorschememodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QPersistentModelIndex* parents)
///
void k_colorschememodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
/// @param parents libqt_list of QPersistentModelIndex*
/// @param hint enum QAbstractItemModel__LayoutChangeHint
///
void k_colorschememodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QPersistentModelIndex* parents, enum QAbstractItemModel__LayoutChangeHint hint)
///
void k_colorschememodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorSchemeModel*
///
const char* k_colorschememodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KColorSchemeModel*
/// @param name const char*
///
void k_colorschememodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KColorSchemeModel*
///
bool k_colorschememodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KColorSchemeModel*
///
bool k_colorschememodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KColorSchemeModel*
///
bool k_colorschememodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KColorSchemeModel*
///
bool k_colorschememodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KColorSchemeModel*
/// @param b bool
///
bool k_colorschememodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KColorSchemeModel*
///
QThread* k_colorschememodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KColorSchemeModel*
/// @param thread QThread*
///
bool k_colorschememodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeModel*
/// @param interval int
///
int32_t k_colorschememodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeModel*
/// @param time int64_t of nanoseconds
///
int32_t k_colorschememodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeModel*
/// @param id int
///
void k_colorschememodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KColorSchemeModel*
/// @param id enum Qt__TimerId
///
void k_colorschememodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KColorSchemeModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_colorschememodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KColorSchemeModel*
/// @param parent QObject*
///
void k_colorschememodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KColorSchemeModel*
/// @param filterObj QObject*
///
void k_colorschememodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KColorSchemeModel*
/// @param obj QObject*
///
void k_colorschememodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_colorschememodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_colorschememodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_colorschememodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_colorschememodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
///
bool k_colorschememodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
/// @param receiver QObject*
///
bool k_colorschememodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_colorschememodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KColorSchemeModel*
///
void k_colorschememodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KColorSchemeModel*
///
void k_colorschememodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KColorSchemeModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_colorschememodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KColorSchemeModel*
/// @param name const char*
///
QVariant* k_colorschememodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KColorSchemeModel*
///
const char** k_colorschememodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KColorSchemeModel*
///
QBindingStorage* k_colorschememodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KColorSchemeModel*
///
const QBindingStorage* k_colorschememodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KColorSchemeModel*
/// @param classname const char*
///
bool k_colorschememodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschememodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KColorSchemeModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_colorschememodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_colorschememodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_colorschememodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KColorSchemeModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_colorschememodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
/// @param signal const char*
///
bool k_colorschememodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_colorschememodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KColorSchemeModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_colorschememodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeModel*
/// @param param1 QObject*
///
void k_colorschememodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QObject* param1)
///
void k_colorschememodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_colorschememodel_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
QModelIndex* k_colorschememodel_super_index(const void* self, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QModelIndex* func(KColorSchemeModel* self, int row, int column, QModelIndex* parent)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_index(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_colorschememodel_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
///
QModelIndex* k_colorschememodel_super_sibling(const void* self, int row, int column, const void* idx);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QModelIndex* func(KColorSchemeModel* self, int row, int column, QModelIndex* idx)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_sibling(void* self, QModelIndex* (*callback)(const void*, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_drop_mime_data(void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_colorschememodel_on_drop_mime_data(void* self, bool (*callback)(void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_colorschememodel_flags(const void* self, const void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
///
int32_t k_colorschememodel_super_flags(const void* self, const void* index);

/// Inherited from QAbstractListModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self, QModelIndex* index)
///
void k_colorschememodel_on_flags(void* self, int32_t (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_colorschememodel_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
///
bool k_colorschememodel_super_set_data(void* self, const void* index, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* index, QVariant* value, int role)
///
void k_colorschememodel_on_set_data(void* self, bool (*callback)(void*, const void*, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_colorschememodel_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
///
QVariant* k_colorschememodel_super_header_data(const void* self, int section, int32_t orientation, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QVariant* func(KColorSchemeModel* self, int section, enum Qt__Orientation orientation, int role)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_header_data(void* self, QVariant* (*callback)(const void*, int, int32_t, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_colorschememodel_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
///
bool k_colorschememodel_super_set_header_data(void* self, int section, int32_t orientation, const void* value, int role);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role)
///
void k_colorschememodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, const void*, int));

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
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_colorschememodel_item_data(const void* self, const void* index);

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
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
/// @return libqt_map of int to QVariant*
///
libqt_map k_colorschememodel_super_item_data(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback libqt_map of int to QVariant* func(KColorSchemeModel* self, QModelIndex* index)
///
void k_colorschememodel_on_item_data(void* self, libqt_map (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_colorschememodel_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
/// @param roles libqt_map of int to QVariant*
///
bool k_colorschememodel_super_set_item_data(void* self, const void* index, libqt_map roles);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* index, libqt_map of int to QVariant* roles)
///
void k_colorschememodel_on_set_item_data(void* self, bool (*callback)(void*, const void*, libqt_map));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
///
bool k_colorschememodel_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param index QModelIndex*
///
bool k_colorschememodel_super_clear_item_data(void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* index)
///
void k_colorschememodel_on_clear_item_data(void* self, bool (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
const char** k_colorschememodel_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
const char** k_colorschememodel_super_mime_types(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback const char** func(KColorSchemeModel* self)
///
void k_colorschememodel_on_mime_types(void* self, const char** (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_colorschememodel_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param indexes libqt_list of QModelIndex*
///
QMimeData* k_colorschememodel_super_mime_data(const void* self, libqt_list indexes);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QMimeData* func(KColorSchemeModel* self, libqt_list of QModelIndex* indexes)
///
void k_colorschememodel_on_mime_data(void* self, QMimeData* (*callback)(const void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_can_drop_mime_data(const void* self, const void* data, int32_t action, int row, int column, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent)
///
void k_colorschememodel_on_can_drop_mime_data(void* self, bool (*callback)(const void*, const void*, int32_t, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_colorschememodel_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_colorschememodel_super_supported_drop_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self)
///
void k_colorschememodel_on_supported_drop_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_colorschememodel_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return flag of enum Qt__DropAction
///
int32_t k_colorschememodel_super_supported_drag_actions(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self)
///
void k_colorschememodel_on_supported_drag_actions(void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_insert_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int row, int count, QModelIndex* parent)
///
void k_colorschememodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_insert_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int column, int count, QModelIndex* parent)
///
void k_colorschememodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_remove_rows(void* self, int row, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int row, int count, QModelIndex* parent)
///
void k_colorschememodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_remove_columns(void* self, int column, int count, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int column, int count, QModelIndex* parent)
///
void k_colorschememodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_super_move_rows(void* self, const void* sourceParent, int sourceRow, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_colorschememodel_on_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
///
bool k_colorschememodel_super_move_columns(void* self, const void* sourceParent, int sourceColumn, int count, const void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild)
///
void k_colorschememodel_on_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
///
void k_colorschememodel_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
///
void k_colorschememodel_super_fetch_more(void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent)
///
void k_colorschememodel_on_fetch_more(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
bool k_colorschememodel_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param parent QModelIndex*
///
bool k_colorschememodel_super_can_fetch_more(const void* self, const void* parent);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* parent)
///
void k_colorschememodel_on_can_fetch_more(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_colorschememodel_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param column int
/// @param order enum Qt__SortOrder
///
void k_colorschememodel_super_sort(void* self, int column, int32_t order);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, int column, enum Qt__SortOrder order)
///
void k_colorschememodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
QModelIndex* k_colorschememodel_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
QModelIndex* k_colorschememodel_super_buddy(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QModelIndex* func(KColorSchemeModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_buddy(void* self, QModelIndex* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_colorschememodel_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_colorschememodel_super_match(const void* self, const void* start, int role, const void* value, int hits, int32_t flags);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback libqt_list of QModelIndex* func(KColorSchemeModel* self, QModelIndex* start, int role, QVariant* value, int hits, flag of enum Qt__MatchFlag flags)
///
void k_colorschememodel_on_match(void* self, libqt_list (*callback)(const void*, const void*, int, const void*, int, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
QSize* k_colorschememodel_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
///
QSize* k_colorschememodel_super_span(const void* self, const void* index);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QSize* func(KColorSchemeModel* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_span(void* self, QSize* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_colorschememodel_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return libqt_map of int to const char*
///
libqt_map k_colorschememodel_super_role_names(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback libqt_map of int to const char* func(KColorSchemeModel* self)
///
void k_colorschememodel_on_role_names(void* self, libqt_map (*callback)(const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_colorschememodel_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
///
void k_colorschememodel_super_multi_data(const void* self, const void* index, void* roleDataSpan);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan)
///
void k_colorschememodel_on_multi_data(void* self, void (*callback)(const void*, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
bool k_colorschememodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
bool k_colorschememodel_super_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self)
///
void k_colorschememodel_on_submit(void* self, bool (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_revert(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_reset_internal_data(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QEvent*
///
bool k_colorschememodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QEvent*
///
bool k_colorschememodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QEvent* event)
///
void k_colorschememodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschememodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_colorschememodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QObject* watched, QEvent* event)
///
void k_colorschememodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QTimerEvent*
///
void k_colorschememodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QTimerEvent*
///
void k_colorschememodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QTimerEvent* event)
///
void k_colorschememodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QChildEvent*
///
void k_colorschememodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QChildEvent*
///
void k_colorschememodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QChildEvent* event)
///
void k_colorschememodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QEvent*
///
void k_colorschememodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param event QEvent*
///
void k_colorschememodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QEvent* event)
///
void k_colorschememodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param signal QMetaMethod*
///
void k_colorschememodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param signal QMetaMethod*
///
void k_colorschememodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QMetaMethod* signal)
///
void k_colorschememodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param signal QMetaMethod*
///
void k_colorschememodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param signal QMetaMethod*
///
void k_colorschememodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QMetaMethod* signal)
///
void k_colorschememodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
///
QModelIndex* k_colorschememodel_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param row int
/// @param column int
///
QModelIndex* k_colorschememodel_super_create_index(const void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QModelIndex* func(KColorSchemeModel* self, int row, int column)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_colorschememodel_on_create_index(void* self, QModelIndex* (*callback)(const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_colorschememodel_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param indexes libqt_list of QModelIndex*
/// @param stream QDataStream*
///
void k_colorschememodel_super_encode_data(const void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QModelIndex* indexes, QDataStream* stream)
///
void k_colorschememodel_on_encode_data(void* self, void (*callback)(const void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_colorschememodel_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
///
bool k_colorschememodel_super_decode_data(void* self, int row, int column, const void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, int row, int column, QModelIndex* parent, QDataStream* stream)
///
void k_colorschememodel_on_decode_data(void* self, bool (*callback)(void*, int, int, const void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_super_begin_insert_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_begin_insert_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_insert_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_super_begin_remove_rows(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_begin_remove_rows(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_remove_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_colorschememodel_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
///
bool k_colorschememodel_super_begin_move_rows(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow)
///
void k_colorschememodel_on_begin_move_rows(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_move_rows(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_super_begin_insert_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_begin_insert_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_insert_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void k_colorschememodel_super_begin_remove_columns(void* self, const void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_begin_remove_columns(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_remove_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_colorschememodel_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
///
bool k_colorschememodel_super_begin_move_columns(void* self, const void* sourceParent, int sourceFirst, int sourceLast, const void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn)
///
void k_colorschememodel_on_begin_move_columns(void* self, bool (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_move_columns(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_begin_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_super_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_end_reset_model(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_colorschememodel_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
///
void k_colorschememodel_super_change_persistent_index(void* self, const void* from, const void* to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* from, QModelIndex* to)
///
void k_colorschememodel_on_change_persistent_index(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_colorschememodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param from libqt_list of QModelIndex*
/// @param to libqt_list of QModelIndex*
///
void k_colorschememodel_super_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, libqt_list of QModelIndex* from, libqt_list of QModelIndex* to)
///
void k_colorschememodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_colorschememodel_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_colorschememodel_super_persistent_index_list(const void* self);

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback libqt_list of QModelIndex* func(KColorSchemeModel* self)
///
void k_colorschememodel_on_persistent_index_list(void* self, libqt_list (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
QObject* k_colorschememodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
QObject* k_colorschememodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback QObject* func(KColorSchemeModel* self)
///
void k_colorschememodel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
///
int32_t k_colorschememodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
///
int32_t k_colorschememodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self)
///
void k_colorschememodel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param signal const char*
///
int32_t k_colorschememodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param signal const char*
///
int32_t k_colorschememodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback int32_t func(KColorSchemeModel* self, const char* signal)
///
void k_colorschememodel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param signal QMetaMethod*
///
bool k_colorschememodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KColorSchemeModel*
/// @param signal QMetaMethod*
///
bool k_colorschememodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KColorSchemeModel*
/// @param callback bool func(KColorSchemeModel* self, QMetaMethod* signal)
///
void k_colorschememodel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_rows_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_columns_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* parent, int first, int last)
///
void k_colorschememodel_on_columns_removed(void* self, void (*callback)(void*, const void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self)
///
void k_colorschememodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_colorschememodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationRow)
///
void k_colorschememodel_on_rows_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_colorschememodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QAbstractItemModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, QModelIndex* sourceParent, int sourceStart, int sourceEnd, QModelIndex* destinationParent, int destinationColumn)
///
void k_colorschememodel_on_columns_moved(void* self, void (*callback)(void*, const void*, int, int, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KColorSchemeModel*
/// @param callback void func(KColorSchemeModel* self, const char* objectName)
///
void k_colorschememodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#dtor.KColorSchemeModel)
///
/// Delete this object from C++ memory.
///
/// @param self KColorSchemeModel*
///
void k_colorschememodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcolorschememodel.html#public-types)

typedef enum {
    KCOLORSCHEMEMODEL_ROLES_NAMEROLE = 0,
    KCOLORSCHEMEMODEL_ROLES_ICONROLE = 1,
    KCOLORSCHEMEMODEL_ROLES_PATHROLE = 256,
    KCOLORSCHEMEMODEL_ROLES_IDROLE = 257
} KColorSchemeModel__Roles;

#endif
