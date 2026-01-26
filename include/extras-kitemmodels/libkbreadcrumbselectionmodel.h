#pragma once
#ifndef SRC_EXTRAS_KITEMMODELS_QT6C_LIBKBREADCRUMBSELECTIONMODEL_H
#define SRC_EXTRAS_KITEMMODELS_QT6C_LIBKBREADCRUMBSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)

/// k_breadcrumbselectionmodel_new constructs a new KBreadcrumbSelectionModel object.
///
/// @param selectionModel QItemSelectionModel*
///
KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new(void* selectionModel);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)

/// k_breadcrumbselectionmodel_new2 constructs a new KBreadcrumbSelectionModel object.
///
/// @param selectionModel QItemSelectionModel*
/// @param target enum KBreadcrumbSelectionModel__BreadcrumbTarget
///
KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new2(void* selectionModel, int32_t target);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)

/// k_breadcrumbselectionmodel_new3 constructs a new KBreadcrumbSelectionModel object.
///
/// @param selectionModel QItemSelectionModel*
/// @param parent QObject*
///
KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new3(void* selectionModel, void* parent);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)

/// k_breadcrumbselectionmodel_new4 constructs a new KBreadcrumbSelectionModel object.
///
/// @param selectionModel QItemSelectionModel*
/// @param target enum KBreadcrumbSelectionModel__BreadcrumbTarget
/// @param parent QObject*
///
KBreadcrumbSelectionModel* k_breadcrumbselectionmodel_new4(void* selectionModel, int32_t target, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KBreadcrumbSelectionModel*
///
const QMetaObject* k_breadcrumbselectionmodel_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback const QMetaObject* func()
///
void k_breadcrumbselectionmodel_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KBreadcrumbSelectionModel*
///
const QMetaObject* k_breadcrumbselectionmodel_qbase_meta_object(void* self);

/// @param self KBreadcrumbSelectionModel*
/// @param param1 const char*
///
void* k_breadcrumbselectionmodel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void* func(KBreadcrumbSelectionModel* self, const char* param1)
///
void k_breadcrumbselectionmodel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KBreadcrumbSelectionModel*
/// @param param1 const char*
///
void* k_breadcrumbselectionmodel_qbase_metacast(void* self, const char* param1);

/// @param self KBreadcrumbSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_breadcrumbselectionmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback int32_t func(KBreadcrumbSelectionModel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_breadcrumbselectionmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KBreadcrumbSelectionModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_breadcrumbselectionmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_breadcrumbselectionmodel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#isActualSelectionIncluded)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_is_actual_selection_included(void* self);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setActualSelectionIncluded)
///
/// @param self KBreadcrumbSelectionModel*
/// @param isActualSelectionIncluded bool
///
void k_breadcrumbselectionmodel_set_actual_selection_included(void* self, bool isActualSelectionIncluded);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#breadcrumbLength)
///
/// @param self KBreadcrumbSelectionModel*
///
int32_t k_breadcrumbselectionmodel_breadcrumb_length(void* self);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setBreadcrumbLength)
///
/// @param self KBreadcrumbSelectionModel*
/// @param breadcrumbLength int
///
void k_breadcrumbselectionmodel_set_breadcrumb_length(void* self, int breadcrumbLength);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// @param self KBreadcrumbSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_select(void* self, void* index, int32_t command);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_breadcrumbselectionmodel_on_select(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self KBreadcrumbSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_qbase_select(void* self, void* index, int32_t command);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// @param self KBreadcrumbSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_select2(void* self, void* selection, int32_t command);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// Allows for overriding the related default method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QItemSelection* selection, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_breadcrumbselectionmodel_on_select2(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
///
/// Base class method implementation
///
/// @param self KBreadcrumbSelectionModel*
/// @param selection QItemSelection*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_qbase_select2(void* self, void* selection, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_breadcrumbselectionmodel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_breadcrumbselectionmodel_tr3(const char* s, const char* c, int n);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
///
/// @param self KBreadcrumbSelectionModel*
///
QModelIndex* k_breadcrumbselectionmodel_current_index(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
///
/// @param self KBreadcrumbSelectionModel*
/// @param index QModelIndex*
///
bool k_breadcrumbselectionmodel_is_selected(void* self, void* index);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self KBreadcrumbSelectionModel*
/// @param row int
///
bool k_breadcrumbselectionmodel_is_row_selected(void* self, int row);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self KBreadcrumbSelectionModel*
/// @param column int
///
bool k_breadcrumbselectionmodel_is_column_selected(void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self KBreadcrumbSelectionModel*
/// @param row int
///
bool k_breadcrumbselectionmodel_row_intersects_selection(void* self, int row);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self KBreadcrumbSelectionModel*
/// @param column int
///
bool k_breadcrumbselectionmodel_column_intersects_selection(void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_has_selection(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
///
/// @param self KBreadcrumbSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_breadcrumbselectionmodel_selected_indexes(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self KBreadcrumbSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_breadcrumbselectionmodel_selected_rows(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self KBreadcrumbSelectionModel*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_breadcrumbselectionmodel_selected_columns(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
///
/// @param self KBreadcrumbSelectionModel*
///
const QItemSelection* k_breadcrumbselectionmodel_selection(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self KBreadcrumbSelectionModel*
///
const QAbstractItemModel* k_breadcrumbselectionmodel_model(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
///
/// @param self KBreadcrumbSelectionModel*
///
QAbstractItemModel* k_breadcrumbselectionmodel_model2(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
///
/// @param self KBreadcrumbSelectionModel*
/// @param model QAbstractItemModel*
///
void k_breadcrumbselectionmodel_set_model(void* self, void* model);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_clear_selection(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_breadcrumbselectionmodel_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QItemSelection* selected, QItemSelection* deselected)
///
void k_breadcrumbselectionmodel_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_breadcrumbselectionmodel_current_changed(void* self, void* current, void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_breadcrumbselectionmodel_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_breadcrumbselectionmodel_current_row_changed(void* self, void* current, void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_breadcrumbselectionmodel_on_current_row_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_breadcrumbselectionmodel_current_column_changed(void* self, void* current, void* previous);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QModelIndex* current, QModelIndex* previous)
///
void k_breadcrumbselectionmodel_on_current_column_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param model QAbstractItemModel*
///
void k_breadcrumbselectionmodel_model_changed(void* self, void* model);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QAbstractItemModel* model)
///
void k_breadcrumbselectionmodel_on_model_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
///
/// @param self KBreadcrumbSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_breadcrumbselectionmodel_is_row_selected2(void* self, int row, void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
///
/// @param self KBreadcrumbSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_breadcrumbselectionmodel_is_column_selected2(void* self, int column, void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
///
/// @param self KBreadcrumbSelectionModel*
/// @param row int
/// @param parent QModelIndex*
///
bool k_breadcrumbselectionmodel_row_intersects_selection2(void* self, int row, void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
///
/// @param self KBreadcrumbSelectionModel*
/// @param column int
/// @param parent QModelIndex*
///
bool k_breadcrumbselectionmodel_column_intersects_selection2(void* self, int column, void* parent);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
///
/// @param self KBreadcrumbSelectionModel*
/// @param column int
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_breadcrumbselectionmodel_selected_rows1(void* self, int column);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
///
/// @param self KBreadcrumbSelectionModel*
/// @param row int
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_breadcrumbselectionmodel_selected_columns1(void* self, int row);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KBreadcrumbSelectionModel*
///
const char* k_breadcrumbselectionmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KBreadcrumbSelectionModel*
/// @param name char*
///
void k_breadcrumbselectionmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KBreadcrumbSelectionModel*
///
bool k_breadcrumbselectionmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KBreadcrumbSelectionModel*
/// @param b bool
///
bool k_breadcrumbselectionmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KBreadcrumbSelectionModel*
///
QThread* k_breadcrumbselectionmodel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBreadcrumbSelectionModel*
/// @param thread QThread*
///
bool k_breadcrumbselectionmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param interval int
///
int32_t k_breadcrumbselectionmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param time int64_t of nanoseconds
///
int32_t k_breadcrumbselectionmodel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param id int
///
void k_breadcrumbselectionmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param id enum Qt__TimerId
///
void k_breadcrumbselectionmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KBreadcrumbSelectionModel*
///
/// @return libqt_list of QObject*
///
libqt_list k_breadcrumbselectionmodel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KBreadcrumbSelectionModel*
/// @param parent QObject*
///
void k_breadcrumbselectionmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KBreadcrumbSelectionModel*
/// @param filterObj QObject*
///
void k_breadcrumbselectionmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KBreadcrumbSelectionModel*
/// @param obj QObject*
///
void k_breadcrumbselectionmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_breadcrumbselectionmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBreadcrumbSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_breadcrumbselectionmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_breadcrumbselectionmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_breadcrumbselectionmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KBreadcrumbSelectionModel*
/// @param name const char*
/// @param value QVariant*
///
bool k_breadcrumbselectionmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KBreadcrumbSelectionModel*
/// @param name const char*
///
QVariant* k_breadcrumbselectionmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KBreadcrumbSelectionModel*
///
const char** k_breadcrumbselectionmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBreadcrumbSelectionModel*
///
QBindingStorage* k_breadcrumbselectionmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KBreadcrumbSelectionModel*
///
const QBindingStorage* k_breadcrumbselectionmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self)
///
void k_breadcrumbselectionmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KBreadcrumbSelectionModel*
///
QObject* k_breadcrumbselectionmodel_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KBreadcrumbSelectionModel*
/// @param classname const char*
///
bool k_breadcrumbselectionmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KBreadcrumbSelectionModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_breadcrumbselectionmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_breadcrumbselectionmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KBreadcrumbSelectionModel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_breadcrumbselectionmodel_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_breadcrumbselectionmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KBreadcrumbSelectionModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_breadcrumbselectionmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBreadcrumbSelectionModel*
/// @param param1 QObject*
///
void k_breadcrumbselectionmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QObject* param1)
///
void k_breadcrumbselectionmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_set_current_index(void* self, void* index, int32_t command);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param index QModelIndex*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void k_breadcrumbselectionmodel_qbase_set_current_index(void* self, void* index, int32_t command);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QModelIndex* index, flag of enum QItemSelectionModel__SelectionFlag command)
///
void k_breadcrumbselectionmodel_on_set_current_index(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_clear(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_qbase_clear(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func()
///
void k_breadcrumbselectionmodel_on_clear(void* self, void (*callback)());

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_reset(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_qbase_reset(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func()
///
void k_breadcrumbselectionmodel_on_reset(void* self, void (*callback)());

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_clear_current_index(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_qbase_clear_current_index(void* self);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func()
///
void k_breadcrumbselectionmodel_on_clear_current_index(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QEvent*
///
bool k_breadcrumbselectionmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QEvent*
///
bool k_breadcrumbselectionmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback bool func(KBreadcrumbSelectionModel* self, QEvent* event)
///
void k_breadcrumbselectionmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_breadcrumbselectionmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_breadcrumbselectionmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback bool func(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event)
///
void k_breadcrumbselectionmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QTimerEvent*
///
void k_breadcrumbselectionmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QTimerEvent*
///
void k_breadcrumbselectionmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QTimerEvent* event)
///
void k_breadcrumbselectionmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QChildEvent*
///
void k_breadcrumbselectionmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QChildEvent*
///
void k_breadcrumbselectionmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QChildEvent* event)
///
void k_breadcrumbselectionmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QEvent*
///
void k_breadcrumbselectionmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param event QEvent*
///
void k_breadcrumbselectionmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QEvent* event)
///
void k_breadcrumbselectionmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
void k_breadcrumbselectionmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
void k_breadcrumbselectionmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QMetaMethod* signal)
///
void k_breadcrumbselectionmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
void k_breadcrumbselectionmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
void k_breadcrumbselectionmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QMetaMethod* signal)
///
void k_breadcrumbselectionmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void k_breadcrumbselectionmodel_emit_selection_changed(void* self, void* newSelection, void* oldSelection);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param newSelection QItemSelection*
/// @param oldSelection QItemSelection*
///
void k_breadcrumbselectionmodel_qbase_emit_selection_changed(void* self, void* newSelection, void* oldSelection);

/// Inherited from QItemSelectionModel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, QItemSelection* newSelection, QItemSelection* oldSelection)
///
void k_breadcrumbselectionmodel_on_emit_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
QObject* k_breadcrumbselectionmodel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
QObject* k_breadcrumbselectionmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback QObject* func()
///
void k_breadcrumbselectionmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
int32_t k_breadcrumbselectionmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
///
int32_t k_breadcrumbselectionmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback int32_t func()
///
void k_breadcrumbselectionmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal const char*
///
int32_t k_breadcrumbselectionmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal const char*
///
int32_t k_breadcrumbselectionmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback int32_t func(KBreadcrumbSelectionModel* self, const char* signal)
///
void k_breadcrumbselectionmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
bool k_breadcrumbselectionmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param signal QMetaMethod*
///
bool k_breadcrumbselectionmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback bool func(KBreadcrumbSelectionModel* self, QMetaMethod* signal)
///
void k_breadcrumbselectionmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KBreadcrumbSelectionModel*
/// @param callback void func(KBreadcrumbSelectionModel* self, const char* objectName)
///
void k_breadcrumbselectionmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#dtor.KBreadcrumbSelectionModel)
///
/// Delete this object from C++ memory.
///
/// @param self KBreadcrumbSelectionModel*
///
void k_breadcrumbselectionmodel_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#public-types)

typedef enum {
    KBREADCRUMBSELECTIONMODEL_BREADCRUMBTARGET_MAKEBREADCRUMBSELECTIONINOTHER = 0,
    KBREADCRUMBSELECTIONMODEL_BREADCRUMBTARGET_MAKEBREADCRUMBSELECTIONINSELF = 1
} KBreadcrumbSelectionModel__BreadcrumbTarget;

#endif
