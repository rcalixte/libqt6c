#pragma once
#ifndef SRCQT6C_LIBQCOMPLETER_H
#define SRCQT6C_LIBQCOMPLETER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcompleter.html

/// q_completer_new constructs a new QCompleter object.
///
QCompleter* q_completer_new();

/// q_completer_new2 constructs a new QCompleter object.
///
/// @param model QAbstractItemModel*
QCompleter* q_completer_new2(void* model);

/// q_completer_new3 constructs a new QCompleter object.
///
/// @param completions const char**
QCompleter* q_completer_new3(const char* completions[static 1]);

/// q_completer_new4 constructs a new QCompleter object.
///
/// @param parent QObject*
QCompleter* q_completer_new4(void* parent);

/// q_completer_new5 constructs a new QCompleter object.
///
/// @param model QAbstractItemModel*
/// @param parent QObject*
QCompleter* q_completer_new5(void* model, void* parent);

/// q_completer_new6 constructs a new QCompleter object.
///
/// @param completions const char**
/// @param parent QObject*
QCompleter* q_completer_new6(const char* completions[static 1], void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCompleter*
const QMetaObject* q_completer_meta_object(void* self);

/// @param self QCompleter*
/// @param param1 const char*
void* q_completer_metacast(void* self, const char* param1);

/// @param self QCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_completer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback int32_t func(QCompleter* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_completer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCompleter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_completer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_completer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWidget)
///
/// @param self QCompleter*
/// @param widget QWidget*
void q_completer_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#widget)
///
/// @param self QCompleter*
QWidget* q_completer_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModel)
///
/// @param self QCompleter*
/// @param c QAbstractItemModel*
void q_completer_set_model(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#model)
///
/// @param self QCompleter*
QAbstractItemModel* q_completer_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionMode)
///
/// @param self QCompleter*
/// @param mode enum QCompleter__CompletionMode
void q_completer_set_completion_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionMode)
///
/// @param self QCompleter*
///
/// @return enum QCompleter__CompletionMode
int32_t q_completer_completion_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setFilterMode)
///
/// @param self QCompleter*
/// @param filterMode flag of enum Qt__MatchFlag
void q_completer_set_filter_mode(void* self, int32_t filterMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#filterMode)
///
/// @param self QCompleter*
///
/// @return flag of enum Qt__MatchFlag
int32_t q_completer_filter_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#popup)
///
/// @param self QCompleter*
QAbstractItemView* q_completer_popup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setPopup)
///
/// @param self QCompleter*
/// @param popup QAbstractItemView*
void q_completer_set_popup(void* self, void* popup);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCaseSensitivity)
///
/// @param self QCompleter*
/// @param caseSensitivity enum Qt__CaseSensitivity
void q_completer_set_case_sensitivity(void* self, int32_t caseSensitivity);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#caseSensitivity)
///
/// @param self QCompleter*
///
/// @return enum Qt__CaseSensitivity
int32_t q_completer_case_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setModelSorting)
///
/// @param self QCompleter*
/// @param sorting enum QCompleter__ModelSorting
void q_completer_set_model_sorting(void* self, int32_t sorting);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#modelSorting)
///
/// @param self QCompleter*
///
/// @return enum QCompleter__ModelSorting
int32_t q_completer_model_sorting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionColumn)
///
/// @param self QCompleter*
/// @param column int
void q_completer_set_completion_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionColumn)
///
/// @param self QCompleter*
int32_t q_completer_completion_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionRole)
///
/// @param self QCompleter*
/// @param role int
void q_completer_set_completion_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionRole)
///
/// @param self QCompleter*
int32_t q_completer_completion_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#wrapAround)
///
/// @param self QCompleter*
bool q_completer_wrap_around(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#maxVisibleItems)
///
/// @param self QCompleter*
int32_t q_completer_max_visible_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setMaxVisibleItems)
///
/// @param self QCompleter*
/// @param maxItems int
void q_completer_set_max_visible_items(void* self, int maxItems);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionCount)
///
/// @param self QCompleter*
int32_t q_completer_completion_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCurrentRow)
///
/// @param self QCompleter*
/// @param row int
bool q_completer_set_current_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentRow)
///
/// @param self QCompleter*
int32_t q_completer_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentIndex)
///
/// @param self QCompleter*
QModelIndex* q_completer_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#currentCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
const char* q_completer_current_completion(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionModel)
///
/// @param self QCompleter*
QAbstractItemModel* q_completer_completion_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#completionPrefix)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
const char* q_completer_completion_prefix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setCompletionPrefix)
///
/// @param self QCompleter*
/// @param prefix const char*
void q_completer_set_completion_prefix(void* self, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// @param self QCompleter*
void q_completer_complete(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#setWrapAround)
///
/// @param self QCompleter*
/// @param wrap bool
void q_completer_set_wrap_around(void* self, bool wrap);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
/// @param index QModelIndex*
const char* q_completer_path_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback const char* func(QCompleter* self, QModelIndex* index)
void q_completer_on_path_from_index(void* self, const char* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#pathFromIndex)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param index QModelIndex*
const char* q_completer_qbase_path_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
/// @param path const char*
const char** q_completer_split_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback const char** func(QCompleter* self, const char* path)
void q_completer_on_split_path(void* self, const char** (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#splitPath)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param path const char*
const char** q_completer_qbase_split_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// @param self QCompleter*
/// @param o QObject*
/// @param e QEvent*
bool q_completer_event_filter(void* self, void* o, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QObject* o, QEvent* e)
void q_completer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param o QObject*
/// @param e QEvent*
bool q_completer_qbase_event_filter(void* self, void* o, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// @param self QCompleter*
/// @param param1 QEvent*
bool q_completer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QEvent* param1)
void q_completer_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#event)
///
/// Base class method implementation
///
/// @param self QCompleter*
/// @param param1 QEvent*
bool q_completer_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param text const char*
void q_completer_activated(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#activated)
///
/// @param self QCompleter*
/// @param index QModelIndex*
void q_completer_activated2(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param text const char*
void q_completer_highlighted(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#highlighted)
///
/// @param self QCompleter*
/// @param index QModelIndex*
void q_completer_highlighted2(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_completer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_completer_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#complete)
///
/// @param self QCompleter*
/// @param rect QRect*
void q_completer_complete1(void* self, void* rect);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
const char* q_completer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCompleter*
/// @param name char*
void q_completer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCompleter*
bool q_completer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCompleter*
bool q_completer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCompleter*
bool q_completer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCompleter*
bool q_completer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCompleter*
/// @param b bool
bool q_completer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCompleter*
QThread* q_completer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCompleter*
/// @param thread QThread*
bool q_completer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param interval int
int32_t q_completer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCompleter*
/// @param id int
void q_completer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCompleter*
/// @param id enum Qt__TimerId
void q_completer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCompleter*
libqt_list /* of QObject* */ q_completer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCompleter*
/// @param parent QObject*
void q_completer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCompleter*
/// @param filterObj QObject*
void q_completer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCompleter*
/// @param obj QObject*
void q_completer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_completer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_completer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_completer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_completer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCompleter*
void q_completer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCompleter*
void q_completer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCompleter*
/// @param name const char*
/// @param value QVariant*
bool q_completer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCompleter*
/// @param name const char*
QVariant* q_completer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCompleter*
const char** q_completer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCompleter*
QBindingStorage* q_completer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCompleter*
const QBindingStorage* q_completer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
void q_completer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self)
void q_completer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCompleter*
QObject* q_completer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCompleter*
/// @param classname const char*
bool q_completer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCompleter*
void q_completer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCompleter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_completer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCompleter*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_completer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_completer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCompleter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_completer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param param1 QObject*
void q_completer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QObject* param1)
void q_completer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QTimerEvent*
void q_completer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QTimerEvent*
void q_completer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QTimerEvent* event)
void q_completer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QChildEvent*
void q_completer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QChildEvent*
void q_completer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QChildEvent* event)
void q_completer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param event QEvent*
void q_completer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param event QEvent*
void q_completer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QEvent* event)
void q_completer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
void q_completer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
void q_completer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QMetaMethod* signal)
void q_completer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
void q_completer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
void q_completer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, QMetaMethod* signal)
void q_completer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
QObject* q_completer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
QObject* q_completer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback QObject* func()
void q_completer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
int32_t q_completer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
int32_t q_completer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback int32_t func()
void q_completer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal const char*
int32_t q_completer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal const char*
int32_t q_completer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback int32_t func(QCompleter* self, const char* signal)
void q_completer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
bool q_completer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCompleter*
/// @param signal QMetaMethod*
bool q_completer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCompleter*
/// @param callback bool func(QCompleter* self, QMetaMethod* signal)
void q_completer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCompleter*
/// @param callback void func(QCompleter* self, const char* objectName)
void q_completer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcompleter.html#dtor.QCompleter)
///
/// Delete this object from C++ memory.
///
/// @param self QCompleter*
void q_completer_delete(void* self);

/// https://doc.qt.io/qt-6/qcompleter.html#types

typedef enum {
    QCOMPLETER_COMPLETIONMODE_POPUPCOMPLETION = 0,
    QCOMPLETER_COMPLETIONMODE_UNFILTEREDPOPUPCOMPLETION = 1,
    QCOMPLETER_COMPLETIONMODE_INLINECOMPLETION = 2
} QCompleter__CompletionMode;

typedef enum {
    QCOMPLETER_MODELSORTING_UNSORTEDMODEL = 0,
    QCOMPLETER_MODELSORTING_CASESENSITIVELYSORTEDMODEL = 1,
    QCOMPLETER_MODELSORTING_CASEINSENSITIVELYSORTEDMODEL = 2
} QCompleter__ModelSorting;

#endif
