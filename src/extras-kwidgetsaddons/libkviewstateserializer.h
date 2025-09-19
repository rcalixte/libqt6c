#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKVIEWSTATESERIALIZER_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKVIEWSTATESERIALIZER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kviewstateserializer.html

/// k_viewstateserializer_new constructs a new KViewStateSerializer object.
///
KViewStateSerializer* k_viewstateserializer_new();

/// k_viewstateserializer_new2 constructs a new KViewStateSerializer object.
///
/// @param parent QObject*
KViewStateSerializer* k_viewstateserializer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KViewStateSerializer*
const QMetaObject* k_viewstateserializer_meta_object(void* self);

/// @param self KViewStateSerializer*
/// @param param1 const char*
void* k_viewstateserializer_metacast(void* self, const char* param1);

/// @param self KViewStateSerializer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_viewstateserializer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback int32_t func(KViewStateSerializer* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_viewstateserializer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KViewStateSerializer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_viewstateserializer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_viewstateserializer_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#view)
///
/// @param self KViewStateSerializer*
QAbstractItemView* k_viewstateserializer_view(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#setView)
///
/// @param self KViewStateSerializer*
/// @param view QAbstractItemView*
void k_viewstateserializer_set_view(void* self, void* view);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#selectionModel)
///
/// @param self KViewStateSerializer*
QItemSelectionModel* k_viewstateserializer_selection_model(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#setSelectionModel)
///
/// @param self KViewStateSerializer*
/// @param selectionModel QItemSelectionModel*
void k_viewstateserializer_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#selectionKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
const char** k_viewstateserializer_selection_keys(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#expansionKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
const char** k_viewstateserializer_expansion_keys(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#currentIndexKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
const char* k_viewstateserializer_current_index_key(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#scrollState)
///
/// @param self KViewStateSerializer*
libqt_pair /* tuple of int and int */ k_viewstateserializer_scroll_state(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreSelection)
///
/// @param self KViewStateSerializer*
/// @param indexStrings const char**
void k_viewstateserializer_restore_selection(void* self, const char* indexStrings[]);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreCurrentItem)
///
/// @param self KViewStateSerializer*
/// @param indexString const char*
void k_viewstateserializer_restore_current_item(void* self, const char* indexString);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreExpanded)
///
/// @param self KViewStateSerializer*
/// @param indexStrings const char**
void k_viewstateserializer_restore_expanded(void* self, const char* indexStrings[]);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreScrollState)
///
/// @param self KViewStateSerializer*
/// @param verticalScoll int
/// @param horizontalScroll int
void k_viewstateserializer_restore_scroll_state(void* self, int verticalScoll, int horizontalScroll);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
///
/// @param self KViewStateSerializer*
/// @param model QAbstractItemModel*
/// @param key const char*
QModelIndex* k_viewstateserializer_index_from_config_string(void* self, void* model, const char* key);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
///
/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback QModelIndex* func(KViewStateSerializer* self, QAbstractItemModel* model, const char* key)
void k_viewstateserializer_on_index_from_config_string(void* self, QModelIndex* (*callback)(void*, void*, const char*));

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
///
/// Base class method implementation
///
/// @param self KViewStateSerializer*
/// @param model QAbstractItemModel*
/// @param key const char*
QModelIndex* k_viewstateserializer_qbase_index_from_config_string(void* self, void* model, const char* key);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
/// @param index QModelIndex*
const char* k_viewstateserializer_index_to_config_string(void* self, void* index);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
///
/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback const char* func(KViewStateSerializer* self, QModelIndex* index)
void k_viewstateserializer_on_index_to_config_string(void* self, const char* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
///
/// Base class method implementation
///
/// @param self KViewStateSerializer*
/// @param index QModelIndex*
const char* k_viewstateserializer_qbase_index_to_config_string(void* self, void* index);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreState)
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_restore_state(void* self);

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreState)
///
/// Allows for overriding the related default method
///
/// @param self KViewStateSerializer*
/// @param callback void func()
void k_viewstateserializer_on_restore_state(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#restoreState)
///
/// Base class method implementation
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_qbase_restore_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_viewstateserializer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_viewstateserializer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
const char* k_viewstateserializer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KViewStateSerializer*
/// @param name char*
void k_viewstateserializer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KViewStateSerializer*
bool k_viewstateserializer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KViewStateSerializer*
bool k_viewstateserializer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KViewStateSerializer*
bool k_viewstateserializer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KViewStateSerializer*
bool k_viewstateserializer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KViewStateSerializer*
/// @param b bool
bool k_viewstateserializer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KViewStateSerializer*
QThread* k_viewstateserializer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KViewStateSerializer*
/// @param thread QThread*
bool k_viewstateserializer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param interval int
int32_t k_viewstateserializer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateSerializer*
/// @param id int
void k_viewstateserializer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateSerializer*
/// @param id enum Qt__TimerId
void k_viewstateserializer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KViewStateSerializer*
libqt_list /* of QObject* */ k_viewstateserializer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KViewStateSerializer*
/// @param parent QObject*
void k_viewstateserializer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KViewStateSerializer*
/// @param filterObj QObject*
void k_viewstateserializer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KViewStateSerializer*
/// @param obj QObject*
void k_viewstateserializer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_viewstateserializer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KViewStateSerializer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_viewstateserializer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_viewstateserializer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_viewstateserializer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KViewStateSerializer*
/// @param name const char*
/// @param value QVariant*
bool k_viewstateserializer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KViewStateSerializer*
/// @param name const char*
QVariant* k_viewstateserializer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateSerializer*
const char** k_viewstateserializer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KViewStateSerializer*
QBindingStorage* k_viewstateserializer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KViewStateSerializer*
const QBindingStorage* k_viewstateserializer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self)
void k_viewstateserializer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KViewStateSerializer*
QObject* k_viewstateserializer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KViewStateSerializer*
/// @param classname const char*
bool k_viewstateserializer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KViewStateSerializer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_viewstateserializer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateSerializer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_viewstateserializer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_viewstateserializer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KViewStateSerializer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_viewstateserializer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param param1 QObject*
void k_viewstateserializer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QObject* param1)
void k_viewstateserializer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
bool k_viewstateserializer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
bool k_viewstateserializer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QEvent* event)
void k_viewstateserializer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param watched QObject*
/// @param event QEvent*
bool k_viewstateserializer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param watched QObject*
/// @param event QEvent*
bool k_viewstateserializer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QObject* watched, QEvent* event)
void k_viewstateserializer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QTimerEvent*
void k_viewstateserializer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QTimerEvent*
void k_viewstateserializer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QTimerEvent* event)
void k_viewstateserializer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QChildEvent*
void k_viewstateserializer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QChildEvent*
void k_viewstateserializer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QChildEvent* event)
void k_viewstateserializer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
void k_viewstateserializer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param event QEvent*
void k_viewstateserializer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QEvent* event)
void k_viewstateserializer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
void k_viewstateserializer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
void k_viewstateserializer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QMetaMethod* signal)
void k_viewstateserializer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
void k_viewstateserializer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
void k_viewstateserializer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, QMetaMethod* signal)
void k_viewstateserializer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
QObject* k_viewstateserializer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
QObject* k_viewstateserializer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback QObject* func()
void k_viewstateserializer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
int32_t k_viewstateserializer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
int32_t k_viewstateserializer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback int32_t func()
void k_viewstateserializer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal const char*
int32_t k_viewstateserializer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal const char*
int32_t k_viewstateserializer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback int32_t func(KViewStateSerializer* self, const char* signal)
void k_viewstateserializer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
bool k_viewstateserializer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param signal QMetaMethod*
bool k_viewstateserializer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateSerializer*
/// @param callback bool func(KViewStateSerializer* self, QMetaMethod* signal)
void k_viewstateserializer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KViewStateSerializer*
/// @param callback void func(KViewStateSerializer* self, const char* objectName)
void k_viewstateserializer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kviewstateserializer.html#dtor.KViewStateSerializer)
///
/// Delete this object from C++ memory.
///
/// @param self KViewStateSerializer*
void k_viewstateserializer_delete(void* self);

#endif
