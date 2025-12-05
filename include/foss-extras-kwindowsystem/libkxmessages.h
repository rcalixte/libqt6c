#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKXMESSAGES_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKXMESSAGES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kxmessages.html)

/// k_xmessages_new constructs a new KXMessages object.
///
KXMessages* k_xmessages_new();

/// [Upstream resources](https://api.kde.org/kxmessages.html)

#ifdef __linux__
/// k_xmessages_new2 constructs a new KXMessages object.
///
/// @param connection xcb_connection_t*
/// @param rootWindow xcb_window_t
///
KXMessages* k_xmessages_new2(xcb_connection_t* connection, xcb_window_t rootWindow);
#endif

/// [Upstream resources](https://api.kde.org/kxmessages.html)

/// k_xmessages_new3 constructs a new KXMessages object.
///
/// @param accept_broadcast const char*
///
KXMessages* k_xmessages_new3(const char* accept_broadcast);

/// [Upstream resources](https://api.kde.org/kxmessages.html)

/// k_xmessages_new4 constructs a new KXMessages object.
///
/// @param accept_broadcast const char*
/// @param parent QObject*
///
KXMessages* k_xmessages_new4(const char* accept_broadcast, void* parent);

/// [Upstream resources](https://api.kde.org/kxmessages.html)

#ifdef __linux__
/// k_xmessages_new5 constructs a new KXMessages object.
///
/// @param connection xcb_connection_t*
/// @param rootWindow xcb_window_t
/// @param accept_broadcast const char*
///
KXMessages* k_xmessages_new5(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast);
#endif

/// [Upstream resources](https://api.kde.org/kxmessages.html)

#ifdef __linux__
/// k_xmessages_new6 constructs a new KXMessages object.
///
/// @param connection xcb_connection_t*
/// @param rootWindow xcb_window_t
/// @param accept_broadcast const char*
/// @param parent QObject*
///
KXMessages* k_xmessages_new6(xcb_connection_t* connection, xcb_window_t rootWindow, const char* accept_broadcast, void* parent);
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KXMessages*
///
const QMetaObject* k_xmessages_meta_object(void* self);

/// @param self KXMessages*
/// @param param1 const char*
///
void* k_xmessages_metacast(void* self, const char* param1);

/// @param self KXMessages*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmessages_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KXMessages*
/// @param callback int32_t func(KXMessages* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_xmessages_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KXMessages*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_xmessages_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_xmessages_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kxmessages.html#broadcastMessage)
///
/// @param self KXMessages*
/// @param msg_type const char*
/// @param message const char*
///
void k_xmessages_broadcast_message(void* self, const char* msg_type, const char* message);

#ifdef __linux__
/// [Upstream resources](https://api.kde.org/kxmessages.html#broadcastMessageX)
///
/// @param c xcb_connection_t*
/// @param msg_type const char*
/// @param message const char*
/// @param screenNumber int
///
bool k_xmessages_broadcast_message_x(xcb_connection_t* c, const char* msg_type, const char* message, int screenNumber);
#endif

/// [Upstream resources](https://api.kde.org/kxmessages.html#gotMessage)
///
/// @param self KXMessages*
/// @param message const char*
///
void k_xmessages_got_message(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/kxmessages.html#gotMessage)
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, const char* message)
///
void k_xmessages_on_got_message(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_xmessages_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_xmessages_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kxmessages.html#broadcastMessage)
///
/// @param self KXMessages*
/// @param msg_type const char*
/// @param message const char*
/// @param screen int
///
void k_xmessages_broadcast_message3(void* self, const char* msg_type, const char* message, int screen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMessages*
///
const char* k_xmessages_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KXMessages*
/// @param name char*
///
void k_xmessages_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KXMessages*
///
bool k_xmessages_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KXMessages*
///
bool k_xmessages_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KXMessages*
///
bool k_xmessages_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KXMessages*
///
bool k_xmessages_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KXMessages*
/// @param b bool
///
bool k_xmessages_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KXMessages*
///
QThread* k_xmessages_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXMessages*
/// @param thread QThread*
///
bool k_xmessages_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXMessages*
/// @param interval int
///
int32_t k_xmessages_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXMessages*
/// @param id int
///
void k_xmessages_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KXMessages*
/// @param id enum Qt__TimerId
///
void k_xmessages_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KXMessages*
///
libqt_list /* of QObject* */ k_xmessages_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KXMessages*
/// @param parent QObject*
///
void k_xmessages_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KXMessages*
/// @param filterObj QObject*
///
void k_xmessages_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KXMessages*
/// @param obj QObject*
///
void k_xmessages_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_xmessages_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXMessages*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_xmessages_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_xmessages_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_xmessages_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KXMessages*
///
void k_xmessages_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KXMessages*
///
void k_xmessages_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KXMessages*
/// @param name const char*
/// @param value QVariant*
///
bool k_xmessages_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KXMessages*
/// @param name const char*
///
QVariant* k_xmessages_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KXMessages*
///
const char** k_xmessages_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXMessages*
///
QBindingStorage* k_xmessages_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KXMessages*
///
const QBindingStorage* k_xmessages_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMessages*
///
void k_xmessages_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self)
///
void k_xmessages_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KXMessages*
///
QObject* k_xmessages_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KXMessages*
/// @param classname const char*
///
bool k_xmessages_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KXMessages*
///
void k_xmessages_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KXMessages*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_xmessages_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KXMessages*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_xmessages_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_xmessages_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KXMessages*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_xmessages_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMessages*
/// @param param1 QObject*
///
void k_xmessages_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QObject* param1)
///
void k_xmessages_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param event QEvent*
///
bool k_xmessages_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param event QEvent*
///
bool k_xmessages_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback bool func(KXMessages* self, QEvent* event)
///
void k_xmessages_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmessages_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_xmessages_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback bool func(KXMessages* self, QObject* watched, QEvent* event)
///
void k_xmessages_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param event QTimerEvent*
///
void k_xmessages_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param event QTimerEvent*
///
void k_xmessages_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QTimerEvent* event)
///
void k_xmessages_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param event QChildEvent*
///
void k_xmessages_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param event QChildEvent*
///
void k_xmessages_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QChildEvent* event)
///
void k_xmessages_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param event QEvent*
///
void k_xmessages_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param event QEvent*
///
void k_xmessages_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QEvent* event)
///
void k_xmessages_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
void k_xmessages_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
void k_xmessages_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QMetaMethod* signal)
///
void k_xmessages_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
void k_xmessages_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
void k_xmessages_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, QMetaMethod* signal)
///
void k_xmessages_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
///
QObject* k_xmessages_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
///
QObject* k_xmessages_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback QObject* func()
///
void k_xmessages_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
///
int32_t k_xmessages_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
///
int32_t k_xmessages_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback int32_t func()
///
void k_xmessages_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param signal const char*
///
int32_t k_xmessages_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param signal const char*
///
int32_t k_xmessages_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback int32_t func(KXMessages* self, const char* signal)
///
void k_xmessages_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
bool k_xmessages_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KXMessages*
/// @param signal QMetaMethod*
///
bool k_xmessages_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KXMessages*
/// @param callback bool func(KXMessages* self, QMetaMethod* signal)
///
void k_xmessages_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KXMessages*
/// @param callback void func(KXMessages* self, const char* objectName)
///
void k_xmessages_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kxmessages.html#dtor.KXMessages)
///
/// Delete this object from C++ memory.
///
/// @param self KXMessages*
///
void k_xmessages_delete(void* self);

#endif
