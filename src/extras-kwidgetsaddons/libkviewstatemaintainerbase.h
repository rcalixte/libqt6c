#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKVIEWSTATEMAINTAINERBASE_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKVIEWSTATEMAINTAINERBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kviewstatemaintainerbase.html

/// k_viewstatemaintainerbase_new constructs a new KViewStateMaintainerBase object.
///
KViewStateMaintainerBase* k_viewstatemaintainerbase_new();

/// k_viewstatemaintainerbase_new2 constructs a new KViewStateMaintainerBase object.
///
/// @param parent QObject*
KViewStateMaintainerBase* k_viewstatemaintainerbase_new2(void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KViewStateMaintainerBase*
const QMetaObject* k_viewstatemaintainerbase_meta_object(void* self);

/// @param self KViewStateMaintainerBase*
/// @param param1 const char*
void* k_viewstatemaintainerbase_metacast(void* self, const char* param1);

/// @param self KViewStateMaintainerBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_viewstatemaintainerbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KViewStateMaintainerBase*
/// @param callback int32_t fn(KViewStateMaintainerBase*, enum QMetaObject__Call, int, void*)
void k_viewstatemaintainerbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KViewStateMaintainerBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_viewstatemaintainerbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_viewstatemaintainerbase_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#setSelectionModel)
///
/// @param self KViewStateMaintainerBase*
/// @param selectionModel QItemSelectionModel*
void k_viewstatemaintainerbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#selectionModel)
///
/// @param self KViewStateMaintainerBase*
QItemSelectionModel* k_viewstatemaintainerbase_selection_model(void* self);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#setView)
///
/// @param self KViewStateMaintainerBase*
/// @param view QAbstractItemView*
void k_viewstatemaintainerbase_set_view(void* self, void* view);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#view)
///
/// @param self KViewStateMaintainerBase*
QAbstractItemView* k_viewstatemaintainerbase_view(void* self);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#saveState)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_save_state(void* self);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#saveState)
///
/// Allows for overriding the related default method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn()
void k_viewstatemaintainerbase_on_save_state(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#saveState)
///
/// Base class method implementation
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_qbase_save_state(void* self);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#restoreState)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_restore_state(void* self);

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#restoreState)
///
/// Allows for overriding the related default method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn()
void k_viewstatemaintainerbase_on_restore_state(void* self, void (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#restoreState)
///
/// Base class method implementation
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_qbase_restore_state(void* self);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_viewstatemaintainerbase_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_viewstatemaintainerbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateMaintainerBase*
const char* k_viewstatemaintainerbase_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KViewStateMaintainerBase*
/// @param name char*
void k_viewstatemaintainerbase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KViewStateMaintainerBase*
bool k_viewstatemaintainerbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KViewStateMaintainerBase*
bool k_viewstatemaintainerbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KViewStateMaintainerBase*
bool k_viewstatemaintainerbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KViewStateMaintainerBase*
bool k_viewstatemaintainerbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KViewStateMaintainerBase*
/// @param b bool
bool k_viewstatemaintainerbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KViewStateMaintainerBase*
QThread* k_viewstatemaintainerbase_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KViewStateMaintainerBase*
/// @param thread QThread*
bool k_viewstatemaintainerbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateMaintainerBase*
/// @param interval int
int32_t k_viewstatemaintainerbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateMaintainerBase*
/// @param id int
void k_viewstatemaintainerbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KViewStateMaintainerBase*
/// @param id enum Qt__TimerId
void k_viewstatemaintainerbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KViewStateMaintainerBase*
libqt_list /* of QObject* */ k_viewstatemaintainerbase_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KViewStateMaintainerBase*
/// @param parent QObject*
void k_viewstatemaintainerbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KViewStateMaintainerBase*
/// @param filterObj QObject*
void k_viewstatemaintainerbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KViewStateMaintainerBase*
/// @param obj QObject*
void k_viewstatemaintainerbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_viewstatemaintainerbase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KViewStateMaintainerBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_viewstatemaintainerbase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_viewstatemaintainerbase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_viewstatemaintainerbase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KViewStateMaintainerBase*
/// @param name const char*
/// @param value QVariant*
bool k_viewstatemaintainerbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KViewStateMaintainerBase*
/// @param name const char*
QVariant* k_viewstatemaintainerbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KViewStateMaintainerBase*
const char** k_viewstatemaintainerbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KViewStateMaintainerBase*
QBindingStorage* k_viewstatemaintainerbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KViewStateMaintainerBase*
const QBindingStorage* k_viewstatemaintainerbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*)
void k_viewstatemaintainerbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KViewStateMaintainerBase*
QObject* k_viewstatemaintainerbase_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KViewStateMaintainerBase*
/// @param classname const char*
bool k_viewstatemaintainerbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KViewStateMaintainerBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_viewstatemaintainerbase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KViewStateMaintainerBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_viewstatemaintainerbase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_viewstatemaintainerbase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KViewStateMaintainerBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_viewstatemaintainerbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateMaintainerBase*
/// @param param1 QObject*
void k_viewstatemaintainerbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QObject*)
void k_viewstatemaintainerbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QEvent*
bool k_viewstatemaintainerbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QEvent*
bool k_viewstatemaintainerbase_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback bool fn(KViewStateMaintainerBase*, QEvent*)
void k_viewstatemaintainerbase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param watched QObject*
/// @param event QEvent*
bool k_viewstatemaintainerbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param watched QObject*
/// @param event QEvent*
bool k_viewstatemaintainerbase_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback bool fn(KViewStateMaintainerBase*, QObject*, QEvent*)
void k_viewstatemaintainerbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QTimerEvent*
void k_viewstatemaintainerbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QTimerEvent*
void k_viewstatemaintainerbase_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QTimerEvent*)
void k_viewstatemaintainerbase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QChildEvent*
void k_viewstatemaintainerbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QChildEvent*
void k_viewstatemaintainerbase_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QChildEvent*)
void k_viewstatemaintainerbase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QEvent*
void k_viewstatemaintainerbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param event QEvent*
void k_viewstatemaintainerbase_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QEvent*)
void k_viewstatemaintainerbase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
void k_viewstatemaintainerbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
void k_viewstatemaintainerbase_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QMetaMethod*)
void k_viewstatemaintainerbase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
void k_viewstatemaintainerbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
void k_viewstatemaintainerbase_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, QMetaMethod*)
void k_viewstatemaintainerbase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
QObject* k_viewstatemaintainerbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
QObject* k_viewstatemaintainerbase_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback QObject* fn()
void k_viewstatemaintainerbase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
int32_t k_viewstatemaintainerbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
int32_t k_viewstatemaintainerbase_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback int32_t fn()
void k_viewstatemaintainerbase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal const char*
int32_t k_viewstatemaintainerbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal const char*
int32_t k_viewstatemaintainerbase_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback int32_t fn(KViewStateMaintainerBase*, const char*)
void k_viewstatemaintainerbase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
bool k_viewstatemaintainerbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param signal QMetaMethod*
bool k_viewstatemaintainerbase_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KViewStateMaintainerBase*
/// @param callback bool fn(KViewStateMaintainerBase*, QMetaMethod*)
void k_viewstatemaintainerbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KViewStateMaintainerBase*
/// @param callback void fn(KViewStateMaintainerBase*, const char*)
void k_viewstatemaintainerbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kviewstatemaintainerbase.html#dtor.KViewStateMaintainerBase)
///
/// Delete this object from C++ memory.
///
/// @param self KViewStateMaintainerBase*
void k_viewstatemaintainerbase_delete(void* self);

#endif
