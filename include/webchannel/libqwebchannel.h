#pragma once
#ifndef SRC_WEBCHANNEL_QT6C_LIBQWEBCHANNEL_H
#define SRC_WEBCHANNEL_QT6C_LIBQWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html)

/// q_webchannel_new constructs a new QWebChannel object.
///
QWebChannel* q_webchannel_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html)

/// q_webchannel_new2 constructs a new QWebChannel object.
///
/// @param parent QObject*
///
QWebChannel* q_webchannel_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebChannel*
///
const QMetaObject* q_webchannel_meta_object(void* self);

/// @param self QWebChannel*
/// @param param1 const char*
///
void* q_webchannel_metacast(void* self, const char* param1);

/// @param self QWebChannel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webchannel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebChannel*
/// @param callback int32_t func(QWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_webchannel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebChannel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webchannel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_webchannel_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#registerObjects)
///
/// @param self QWebChannel*
/// @param objects libqt_map /* of const char* to QObject* */
///
void q_webchannel_register_objects(void* self, libqt_map /* of const char* to QObject* */ objects);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#registeredObjects)
///
/// @param self QWebChannel*
///
libqt_map /* of const char* to QObject* */ q_webchannel_registered_objects(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#registerObject)
///
/// @param self QWebChannel*
/// @param id const char*
/// @param object QObject*
///
void q_webchannel_register_object(void* self, const char* id, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#deregisterObject)
///
/// @param self QWebChannel*
/// @param object QObject*
///
void q_webchannel_deregister_object(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdates)
///
/// @param self QWebChannel*
///
bool q_webchannel_block_updates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#setBlockUpdates)
///
/// @param self QWebChannel*
/// @param block bool
///
void q_webchannel_set_block_updates(void* self, bool block);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#propertyUpdateInterval)
///
/// @param self QWebChannel*
///
int32_t q_webchannel_property_update_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#setPropertyUpdateInterval)
///
/// @param self QWebChannel*
/// @param ms int
///
void q_webchannel_set_property_update_interval(void* self, int ms);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// @param self QWebChannel*
/// @param block bool
///
void q_webchannel_block_updates_changed(void* self, bool block);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, bool block)
///
void q_webchannel_on_block_updates_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#connectTo)
///
/// @param self QWebChannel*
/// @param transport QWebChannelAbstractTransport*
///
void q_webchannel_connect_to(void* self, void* transport);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#disconnectFrom)
///
/// @param self QWebChannel*
/// @param transport QWebChannelAbstractTransport*
///
void q_webchannel_disconnect_from(void* self, void* transport);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_webchannel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webchannel_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QWebChannel*
///
const char* q_webchannel_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebChannel*
/// @param name char*
///
void q_webchannel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebChannel*
///
bool q_webchannel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebChannel*
///
bool q_webchannel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebChannel*
///
bool q_webchannel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebChannel*
///
bool q_webchannel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebChannel*
/// @param b bool
///
bool q_webchannel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebChannel*
///
QThread* q_webchannel_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebChannel*
/// @param thread QThread*
///
bool q_webchannel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebChannel*
/// @param interval int
///
int32_t q_webchannel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebChannel*
/// @param id int
///
void q_webchannel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebChannel*
/// @param id enum Qt__TimerId
///
void q_webchannel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebChannel*
///
libqt_list /* of QObject* */ q_webchannel_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebChannel*
/// @param parent QObject*
///
void q_webchannel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebChannel*
/// @param filterObj QObject*
///
void q_webchannel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebChannel*
/// @param obj QObject*
///
void q_webchannel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webchannel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebChannel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webchannel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webchannel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webchannel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebChannel*
///
void q_webchannel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebChannel*
///
void q_webchannel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebChannel*
/// @param name const char*
/// @param value QVariant*
///
bool q_webchannel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebChannel*
/// @param name const char*
///
QVariant* q_webchannel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QWebChannel*
///
const char** q_webchannel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebChannel*
///
QBindingStorage* q_webchannel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebChannel*
///
const QBindingStorage* q_webchannel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannel*
///
void q_webchannel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self)
///
void q_webchannel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebChannel*
///
QObject* q_webchannel_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebChannel*
/// @param classname const char*
///
bool q_webchannel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebChannel*
///
void q_webchannel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebChannel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webchannel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebChannel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webchannel_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webchannel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebChannel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webchannel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannel*
/// @param param1 QObject*
///
void q_webchannel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QObject* param1)
///
void q_webchannel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param event QEvent*
///
bool q_webchannel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param event QEvent*
///
bool q_webchannel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback bool func(QWebChannel* self, QEvent* event)
///
void q_webchannel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webchannel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webchannel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback bool func(QWebChannel* self, QObject* watched, QEvent* event)
///
void q_webchannel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param event QTimerEvent*
///
void q_webchannel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param event QTimerEvent*
///
void q_webchannel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QTimerEvent* event)
///
void q_webchannel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param event QChildEvent*
///
void q_webchannel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param event QChildEvent*
///
void q_webchannel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QChildEvent* event)
///
void q_webchannel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param event QEvent*
///
void q_webchannel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param event QEvent*
///
void q_webchannel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QEvent* event)
///
void q_webchannel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
void q_webchannel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
void q_webchannel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QMetaMethod* signal)
///
void q_webchannel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
void q_webchannel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
void q_webchannel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, QMetaMethod* signal)
///
void q_webchannel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
///
QObject* q_webchannel_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
///
QObject* q_webchannel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback QObject* func()
///
void q_webchannel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
///
int32_t q_webchannel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
///
int32_t q_webchannel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback int32_t func()
///
void q_webchannel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param signal const char*
///
int32_t q_webchannel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param signal const char*
///
int32_t q_webchannel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback int32_t func(QWebChannel* self, const char* signal)
///
void q_webchannel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
bool q_webchannel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannel*
/// @param signal QMetaMethod*
///
bool q_webchannel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannel*
/// @param callback bool func(QWebChannel* self, QMetaMethod* signal)
///
void q_webchannel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebChannel*
/// @param callback void func(QWebChannel* self, const char* objectName)
///
void q_webchannel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebchannel.html#dtor.QWebChannel)
///
/// Delete this object from C++ memory.
///
/// @param self QWebChannel*
///
void q_webchannel_delete(void* self);

#endif
