#pragma once
#ifndef LIBQCOMPLETER_H
#define LIBQCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new constructs a new QCompleter object.
///
QCompleter* q_completer_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new2 constructs a new QCompleter object.
///
/// @param model QAbstractItemModel*
///
QCompleter* q_completer_new2(void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new3 constructs a new QCompleter object.
///
/// @param completions const char**
///
QCompleter* q_completer_new3(const char* completions[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new4 constructs a new QCompleter object.
///
/// @param parent QObject*
///
QCompleter* q_completer_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new5 constructs a new QCompleter object.
///
/// @param model QAbstractItemModel*
/// @param parent QObject*
///
QCompleter* q_completer_new5(void* model, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html)

/// q_completer_new6 constructs a new QCompleter object.
///
/// @param completions const char**
/// @param parent QObject*
///
QCompleter* q_completer_new6(const char* completions[static 1], void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QCompleter*
///
const QMetaObject* q_completer_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback const QMetaObject* func(const QCompleter* self)
///
void q_completer_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QCompleter*
///
const QMetaObject* q_completer_super_meta_object(const void* self);

/// @param self QCompleter*
/// @param param1 const char*
///
void* q_completer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback void* func(QCompleter* self, const char* param1)
///
void q_completer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QCompleter*
/// @param param1 const char*
///
void* q_completer_super_metacast(void* self, const char* param1);

/// @param self QCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_completer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback int32_t func(QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_completer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_completer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_completer_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
///
/// @param self QCompleter*
/// @param widget QWidget*
///
void q_completer_set_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#widget)
///
/// @param self const QCompleter*
///
QWidget* q_completer_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModel)
///
/// @param self QCompleter*
/// @param c QAbstractItemModel*
///
void q_completer_set_model(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#model)
///
/// @param self const QCompleter*
///
QAbstractItemModel* q_completer_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
///
/// @param self QCompleter*
/// @param mode enum QCompleter__CompletionMode
///
void q_completer_set_completion_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
///
/// @param self const QCompleter*
///
/// @return enum QCompleter__CompletionMode
///
int32_t q_completer_completion_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
///
/// @param self QCompleter*
/// @param filterMode flag of enum Qt__MatchFlag
///
void q_completer_set_filter_mode(void* self, int32_t filterMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
///
/// @param self const QCompleter*
///
/// @return flag of enum Qt__MatchFlag
///
int32_t q_completer_filter_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#popup)
///
/// @param self const QCompleter*
///
QAbstractItemView* q_completer_popup(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
///
/// @param self QCompleter*
/// @param popup QAbstractItemView*
///
void q_completer_set_popup(void* self, void* popup);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
///
/// @param self QCompleter*
/// @param caseSensitivity enum Qt__CaseSensitivity
///
void q_completer_set_case_sensitivity(void* self, int32_t caseSensitivity);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
///
/// @param self const QCompleter*
///
/// @return enum Qt__CaseSensitivity
///
int32_t q_completer_case_sensitivity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
///
/// @param self QCompleter*
/// @param sorting enum QCompleter__ModelSorting
///
void q_completer_set_model_sorting(void* self, int32_t sorting);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
///
/// @param self const QCompleter*
///
/// @return enum QCompleter__ModelSorting
///
int32_t q_completer_model_sorting(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
///
/// @param self QCompleter*
/// @param column int
///
void q_completer_set_completion_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
///
/// @param self const QCompleter*
///
int32_t q_completer_completion_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
///
/// @param self QCompleter*
/// @param role int
///
void q_completer_set_completion_role(void* self, int role);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
///
/// @param self const QCompleter*
///
int32_t q_completer_completion_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
///
/// @param self const QCompleter*
///
bool q_completer_wrap_around(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
///
/// @param self const QCompleter*
///
int32_t q_completer_max_visible_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
///
/// @param self QCompleter*
/// @param maxItems int
///
void q_completer_set_max_visible_items(void* self, int maxItems);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
///
/// @param self const QCompleter*
///
int32_t q_completer_completion_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
///
/// @param self QCompleter*
/// @param row int
///
bool q_completer_set_current_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
///
/// @param self const QCompleter*
///
int32_t q_completer_current_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
///
/// @param self const QCompleter*
///
QModelIndex* q_completer_current_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCompleter*
///
const char* q_completer_current_completion(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
///
/// @param self const QCompleter*
///
QAbstractItemModel* q_completer_completion_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCompleter*
///
const char* q_completer_completion_prefix(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
///
/// @param self QCompleter*
/// @param prefix const char*
///
void q_completer_set_completion_prefix(void* self, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// @param self QCompleter*
///
void q_completer_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
///
/// @param self QCompleter*
/// @param wrap bool
///
void q_completer_set_wrap_around(void* self, bool wrap);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCompleter*
/// @param index QModelIndex*
///
const char* q_completer_path_from_index(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback const char* func(const QCompleter* self, QModelIndex* index)
///
void q_completer_on_path_from_index(void* self, const char* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// Base class method implementation
///
/// @param self const QCompleter*
/// @param index QModelIndex*
///
const char* q_completer_super_path_from_index(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCompleter*
/// @param path const char*
///
const char** q_completer_split_path(const void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback const char** func(const QCompleter* self, const char* path)
///
void q_completer_on_split_path(void* self, const char** (*callback)(const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// Base class method implementation
///
/// @param self const QCompleter*
/// @param path const char*
///
const char** q_completer_super_split_path(const void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// @param self QCompleter*
/// @param o QObject*
/// @param e QEvent*
///
bool q_completer_event_filter(void* self, void* o, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QObject* o, QEvent* e)
///
void q_completer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param o QObject*
/// @param e QEvent*
///
bool q_completer_super_event_filter(void* self, void* o, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// @param self QCompleter*
/// @param param1 QEvent*
///
bool q_completer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QEvent* param1)
///
void q_completer_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param param1 QEvent*
///
bool q_completer_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param text const char*
///
void q_completer_activated(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, const char* text)
///
void q_completer_on_activated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param index QModelIndex*
///
void q_completer_activated2(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QModelIndex* index)
///
void q_completer_on_activated2(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param text const char*
///
void q_completer_highlighted(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, const char* text)
///
void q_completer_on_highlighted(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param index QModelIndex*
///
void q_completer_highlighted2(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QModelIndex* index)
///
void q_completer_on_highlighted2(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_completer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_completer_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// @param self QCompleter*
/// @param rect QRect*
///
void q_completer_complete1(void* self, const void* rect);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QCompleter*
///
const char* q_completer_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCompleter*
/// @param name const char*
///
void q_completer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QCompleter*
///
bool q_completer_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QCompleter*
///
bool q_completer_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QCompleter*
///
bool q_completer_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QCompleter*
///
bool q_completer_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCompleter*
/// @param b bool
///
bool q_completer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QCompleter*
///
QThread* q_completer_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCompleter*
/// @param thread QThread*
///
bool q_completer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param interval int
///
int32_t q_completer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param time int64_t of nanoseconds
///
int32_t q_completer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCompleter*
/// @param id int
///
void q_completer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCompleter*
/// @param id enum Qt__TimerId
///
void q_completer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QCompleter*
///
/// @return libqt_list of QObject*
///
libqt_list q_completer_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCompleter*
/// @param parent QObject*
///
void q_completer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCompleter*
/// @param filterObj QObject*
///
void q_completer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCompleter*
/// @param obj QObject*
///
void q_completer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_completer_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_completer_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_completer_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_completer_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_completer_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
///
bool q_completer_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
/// @param receiver QObject*
///
bool q_completer_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_completer_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QCompleter*
///
void q_completer_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QCompleter*
///
void q_completer_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCompleter*
/// @param name const char*
/// @param value QVariant*
///
bool q_completer_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QCompleter*
/// @param name const char*
///
QVariant* q_completer_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QCompleter*
///
const char** q_completer_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCompleter*
///
QBindingStorage* q_completer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QCompleter*
///
const QBindingStorage* q_completer_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
///
void q_completer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self)
///
void q_completer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QCompleter*
///
QObject* q_completer_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QCompleter*
/// @param classname const char*
///
bool q_completer_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCompleter*
///
void q_completer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_completer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_completer_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_completer_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_completer_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_completer_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
/// @param signal const char*
///
bool q_completer_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_completer_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_completer_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QCompleter*
/// @param receiver QObject*
/// @param member const char*
///
bool q_completer_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param param1 QObject*
///
void q_completer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QObject* param1)
///
void q_completer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QTimerEvent*
///
void q_completer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QTimerEvent*
///
void q_completer_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QTimerEvent* event)
///
void q_completer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QChildEvent*
///
void q_completer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QChildEvent*
///
void q_completer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QChildEvent* event)
///
void q_completer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QEvent*
///
void q_completer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QEvent*
///
void q_completer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QEvent* event)
///
void q_completer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
///
void q_completer_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
///
void q_completer_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QMetaMethod* signal)
///
void q_completer_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
///
void q_completer_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
///
void q_completer_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QMetaMethod* signal)
///
void q_completer_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCompleter*
///
QObject* q_completer_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCompleter*
///
QObject* q_completer_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback QObject* func(QCompleter* self)
///
void q_completer_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCompleter*
///
int32_t q_completer_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCompleter*
///
int32_t q_completer_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback int32_t func(QCompleter* self)
///
void q_completer_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCompleter*
/// @param signal const char*
///
int32_t q_completer_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCompleter*
/// @param signal const char*
///
int32_t q_completer_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback int32_t func(QCompleter* self, const char* signal)
///
void q_completer_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QCompleter*
/// @param signal QMetaMethod*
///
bool q_completer_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QCompleter*
/// @param signal QMetaMethod*
///
bool q_completer_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QMetaMethod* signal)
///
void q_completer_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, const char* objectName)
///
void q_completer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#dtor.QCompleter)
///
/// Delete this object from C++ memory.
///
/// @param self QCompleter*
///
void q_completer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#public-types)

typedef enum {
    QCOMPLETER_COMPLETIONMODE_POPUPCOMPLETION = 0,
    QCOMPLETER_COMPLETIONMODE_UNFILTEREDPOPUPCOMPLETION = 1,
    QCOMPLETER_COMPLETIONMODE_INLINECOMPLETION = 2
} QCompleter__CompletionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qcompleter.html#public-types)

typedef enum {
    QCOMPLETER_MODELSORTING_UNSORTEDMODEL = 0,
    QCOMPLETER_MODELSORTING_CASESENSITIVELYSORTEDMODEL = 1,
    QCOMPLETER_MODELSORTING_CASEINSENSITIVELYSORTEDMODEL = 2
} QCompleter__ModelSorting;

#endif
