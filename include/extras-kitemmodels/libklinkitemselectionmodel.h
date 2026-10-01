#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKLINKITEMSELECTIONMODEL_H
#define EXTRAS_KITEMMODELS_LIBKLINKITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html)

/// k_linkitemselectionmodel_new constructs a new KLinkItemSelectionModel object.
///
/// @param targetModel QAbstractItemModel*
/// @param linkedItemSelectionModel QItemSelectionModel*
///
KLinkItemSelectionModel* k_linkitemselectionmodel_new(void* targetModel, void* linkedItemSelectionModel);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html)

/// k_linkitemselectionmodel_new2 constructs a new KLinkItemSelectionModel object.
///
KLinkItemSelectionModel* k_linkitemselectionmodel_new2();

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html)

/// k_linkitemselectionmodel_new3 constructs a new KLinkItemSelectionModel object.
///
/// @param targetModel QAbstractItemModel*
/// @param linkedItemSelectionModel QItemSelectionModel*
/// @param parent QObject*
///
KLinkItemSelectionModel* k_linkitemselectionmodel_new3(void* targetModel, void* linkedItemSelectionModel, void* parent);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html)

/// k_linkitemselectionmodel_new4 constructs a new KLinkItemSelectionModel object.
///
/// @param parent QObject*
///
KLinkItemSelectionModel* k_linkitemselectionmodel_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KLinkItemSelectionModel*
///
const QMetaObject* k_linkitemselectionmodel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KLinkItemSelectionModel*
/// @param callback const QMetaObject* func(const KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KLinkItemSelectionModel*
///
const QMetaObject* k_linkitemselectionmodel_super_meta_object(const void* self);

/// @param self KLinkItemSelectionModel*
/// @param param1 const char*
///
void* k_linkitemselectionmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void* func(KLinkItemSelectionModel* self, const char* param1)
///
void k_linkitemselectionmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KLinkItemSelectionModel*
/// @param param1 const char*
///
void* k_linkitemselectionmodel_super_metacast(void* self, const char* param1);

/// @param self KLinkItemSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_linkitemselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KLinkItemSelectionModel*
/// @param callback int32_t func(KLinkItemSelectionModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_linkitemselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KLinkItemSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_linkitemselectionmodel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_linkitemselectionmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModel)
///
/// @param self const KLinkItemSelectionModel*
///
QItemSelectionModel* k_linkitemselectionmodel_linked_item_selection_model(const void* self);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#setLinkedItemSelectionModel)
///
/// @param self KLinkItemSelectionModel*
/// @param selectionModel QItemSelectionModel*
///
void k_linkitemselectionmodel_set_linked_item_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// @param self KLinkItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_select(void* self, const void* index, int32_t command);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_linkitemselectionmodel_on_select(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self KLinkItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_super_select(void* self, const void* index, int32_t command);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// @param self KLinkItemSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_select2(void* self, const void* selection, int32_t command);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QItemSelection* selection, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_linkitemselectionmodel_on_select2(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self KLinkItemSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_super_select2(void* self, const void* selection, int32_t command);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModelChanged)
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_linked_item_selection_model_changed(void* self);

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModelChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_linked_item_selection_model_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_linkitemselectionmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_linkitemselectionmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
///
/// @param self const KLinkItemSelectionModel*
///
QModelIndex* k_linkitemselectionmodel_current_index(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
///
/// @param self const KLinkItemSelectionModel*
/// @param index QModelIndex*
///
bool k_linkitemselectionmodel_is_selected(const void* self, const void* index);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self const KLinkItemSelectionModel*
/// @param row int
///
bool k_linkitemselectionmodel_is_row_selected(const void* self, int row);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self const KLinkItemSelectionModel*
/// @param column int
///
bool k_linkitemselectionmodel_is_column_selected(const void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self const KLinkItemSelectionModel*
/// @param row int
///
bool k_linkitemselectionmodel_row_intersects_selection(const void* self, int row);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self const KLinkItemSelectionModel*
/// @param column int
///
bool k_linkitemselectionmodel_column_intersects_selection(const void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_has_selection(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
///
/// @param self const KLinkItemSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_linkitemselectionmodel_selected_indexes(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self const KLinkItemSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_linkitemselectionmodel_selected_rows(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self const KLinkItemSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_linkitemselectionmodel_selected_columns(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
///
/// @param self const KLinkItemSelectionModel*
///
const QItemSelection* k_linkitemselectionmodel_selection(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self const KLinkItemSelectionModel*
///
const QAbstractItemModel* k_linkitemselectionmodel_model(const void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self KLinkItemSelectionModel*
///
QAbstractItemModel* k_linkitemselectionmodel_model2(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
///
/// @param self KLinkItemSelectionModel*
/// @param model QAbstractItemModel*
///
void k_linkitemselectionmodel_set_model(void* self, void* model);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_clear_selection(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_linkitemselectionmodel_selection_changed(void* self, const void* selected, const void* deselected);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected)
///
void k_linkitemselectionmodel_on_selection_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_linkitemselectionmodel_current_changed(void* self, const void* current, const void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_linkitemselectionmodel_on_current_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_linkitemselectionmodel_current_row_changed(void* self, const void* current, const void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_linkitemselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_linkitemselectionmodel_current_column_changed(void* self, const void* current, const void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_linkitemselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param model QAbstractItemModel*
///
void k_linkitemselectionmodel_model_changed(void* self, void* model);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QAbstractItemModel* model)
///
void k_linkitemselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self const KLinkItemSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_linkitemselectionmodel_is_row_selected2(const void* self, int row, const void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self const KLinkItemSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_linkitemselectionmodel_is_column_selected2(const void* self, int column, const void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self const KLinkItemSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_linkitemselectionmodel_row_intersects_selection2(const void* self, int row, const void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self const KLinkItemSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_linkitemselectionmodel_column_intersects_selection2(const void* self, int column, const void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self const KLinkItemSelectionModel*
/// @param column int
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_linkitemselectionmodel_selected_rows1(const void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self const KLinkItemSelectionModel*
/// @param row int
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_linkitemselectionmodel_selected_columns1(const void* self, int row);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KLinkItemSelectionModel*
///
const char* k_linkitemselectionmodel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KLinkItemSelectionModel*
/// @param name const char*
///
void k_linkitemselectionmodel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KLinkItemSelectionModel*
/// @param b bool
///
bool k_linkitemselectionmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KLinkItemSelectionModel*
///
QThread* k_linkitemselectionmodel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KLinkItemSelectionModel*
/// @param thread QThread*
///
bool k_linkitemselectionmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param interval int
///
int32_t k_linkitemselectionmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param time int64_t of nanoseconds
///
int32_t k_linkitemselectionmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param id int
///
void k_linkitemselectionmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param id enum Qt__TimerId
///
void k_linkitemselectionmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KLinkItemSelectionModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_linkitemselectionmodel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KLinkItemSelectionModel*
/// @param parent QObject*
///
void k_linkitemselectionmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KLinkItemSelectionModel*
/// @param filterObj QObject*
///
void k_linkitemselectionmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KLinkItemSelectionModel*
/// @param obj QObject*
///
void k_linkitemselectionmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_linkitemselectionmodel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_linkitemselectionmodel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KLinkItemSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_linkitemselectionmodel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_linkitemselectionmodel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_linkitemselectionmodel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
///
bool k_linkitemselectionmodel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
/// @param receiver QObject*
///
bool k_linkitemselectionmodel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_linkitemselectionmodel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KLinkItemSelectionModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_linkitemselectionmodel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KLinkItemSelectionModel*
/// @param name const char*
///
QVariant* k_linkitemselectionmodel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KLinkItemSelectionModel*
///
const char** k_linkitemselectionmodel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KLinkItemSelectionModel*
///
QBindingStorage* k_linkitemselectionmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KLinkItemSelectionModel*
///
const QBindingStorage* k_linkitemselectionmodel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KLinkItemSelectionModel*
///
QObject* k_linkitemselectionmodel_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KLinkItemSelectionModel*
/// @param classname const char*
///
bool k_linkitemselectionmodel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_linkitemselectionmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KLinkItemSelectionModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_linkitemselectionmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_linkitemselectionmodel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_linkitemselectionmodel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KLinkItemSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_linkitemselectionmodel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
/// @param signal const char*
///
bool k_linkitemselectionmodel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_linkitemselectionmodel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_linkitemselectionmodel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KLinkItemSelectionModel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_linkitemselectionmodel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLinkItemSelectionModel*
/// @param param1 QObject*
///
void k_linkitemselectionmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QObject* param1)
///
void k_linkitemselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_set_current_index(void* self, const void* index, int32_t command);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_linkitemselectionmodel_super_set_current_index(void* self, const void* index, int32_t command);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_linkitemselectionmodel_on_set_current_index(void* self, void (*callback)(void*, const void*, int32_t));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_clear(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_super_clear(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_clear(void* self, void (*callback)(void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_reset(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_super_reset(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_reset(void* self, void (*callback)(void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_clear_current_index(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_super_clear_current_index(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_clear_current_index(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QEvent*
///
bool k_linkitemselectionmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QEvent*
///
bool k_linkitemselectionmodel_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback bool func(KLinkItemSelectionModel* self, QEvent* event)
///
void k_linkitemselectionmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_linkitemselectionmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_linkitemselectionmodel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback bool func(KLinkItemSelectionModel* self, QObject* watched, QEvent* event)
///
void k_linkitemselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QTimerEvent*
///
void k_linkitemselectionmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QTimerEvent*
///
void k_linkitemselectionmodel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QTimerEvent* event)
///
void k_linkitemselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QChildEvent*
///
void k_linkitemselectionmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QChildEvent*
///
void k_linkitemselectionmodel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QChildEvent* event)
///
void k_linkitemselectionmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QEvent*
///
void k_linkitemselectionmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param event QEvent*
///
void k_linkitemselectionmodel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QEvent* event)
///
void k_linkitemselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
void k_linkitemselectionmodel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
void k_linkitemselectionmodel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QMetaMethod* signal)
///
void k_linkitemselectionmodel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
void k_linkitemselectionmodel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
void k_linkitemselectionmodel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QMetaMethod* signal)
///
void k_linkitemselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void k_linkitemselectionmodel_emit_selection_changed(void* self, const void* newSelection, const void* oldSelection);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void k_linkitemselectionmodel_super_emit_selection_changed(void* self, const void* newSelection, const void* oldSelection);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, QItemSelection* newSelection, QItemSelection* oldSelection)
///
void k_linkitemselectionmodel_on_emit_selection_changed(void* self, void (*callback)(void*, const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
///
QObject* k_linkitemselectionmodel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
///
QObject* k_linkitemselectionmodel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param callback QObject* func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
///
int32_t k_linkitemselectionmodel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
///
int32_t k_linkitemselectionmodel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param callback int32_t func(KLinkItemSelectionModel* self)
///
void k_linkitemselectionmodel_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param signal const char*
///
int32_t k_linkitemselectionmodel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param signal const char*
///
int32_t k_linkitemselectionmodel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param callback int32_t func(KLinkItemSelectionModel* self, const char* signal)
///
void k_linkitemselectionmodel_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
bool k_linkitemselectionmodel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param signal QMetaMethod*
///
bool k_linkitemselectionmodel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KLinkItemSelectionModel*
/// @param callback bool func(KLinkItemSelectionModel* self, QMetaMethod* signal)
///
void k_linkitemselectionmodel_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KLinkItemSelectionModel*
/// @param callback void func(KLinkItemSelectionModel* self, const char* objectName)
///
void k_linkitemselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/klinkitemselectionmodel.html#dtor.KLinkItemSelectionModel)
///
/// Delete this object from C++ memory.
///
/// @param self KLinkItemSelectionModel*
///
void k_linkitemselectionmodel_delete(void* self);

#endif
