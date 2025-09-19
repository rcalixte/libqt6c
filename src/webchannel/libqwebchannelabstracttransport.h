#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H
#define SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebchannelabstracttransport.html

/// q_webchannelabstracttransport_new constructs a new QWebChannelAbstractTransport object.
///
QWebChannelAbstractTransport* q_webchannelabstracttransport_new();

/// q_webchannelabstracttransport_new2 constructs a new QWebChannelAbstractTransport object.
///
/// @param parent QObject*
QWebChannelAbstractTransport* q_webchannelabstracttransport_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebChannelAbstractTransport*
const QMetaObject* q_webchannelabstracttransport_meta_object(void* self);

/// @param self QWebChannelAbstractTransport*
/// @param param1 const char*
void* q_webchannelabstracttransport_metacast(void* self, const char* param1);

/// @param self QWebChannelAbstractTransport*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webchannelabstracttransport_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback int32_t func(QWebChannelAbstractTransport* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_webchannelabstracttransport_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QWebChannelAbstractTransport*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webchannelabstracttransport_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webchannelabstracttransport_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// @param self QWebChannelAbstractTransport*
/// @param message QJsonObject*
void q_webchannelabstracttransport_send_message(void* self, void* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// Allows for overriding the related default method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QJsonObject* message)
void q_webchannelabstracttransport_on_send_message(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// Base class method implementation
///
/// @param self QWebChannelAbstractTransport*
/// @param message QJsonObject*
void q_webchannelabstracttransport_qbase_send_message(void* self, void* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#messageReceived)
///
/// @param self QWebChannelAbstractTransport*
/// @param message QJsonObject*
/// @param transport QWebChannelAbstractTransport*
void q_webchannelabstracttransport_message_received(void* self, void* message, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#messageReceived)
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport)
void q_webchannelabstracttransport_on_message_received(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webchannelabstracttransport_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webchannelabstracttransport_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebChannelAbstractTransport*
const char* q_webchannelabstracttransport_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebChannelAbstractTransport*
/// @param name char*
void q_webchannelabstracttransport_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebChannelAbstractTransport*
bool q_webchannelabstracttransport_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebChannelAbstractTransport*
bool q_webchannelabstracttransport_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebChannelAbstractTransport*
bool q_webchannelabstracttransport_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebChannelAbstractTransport*
bool q_webchannelabstracttransport_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebChannelAbstractTransport*
/// @param b bool
bool q_webchannelabstracttransport_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebChannelAbstractTransport*
QThread* q_webchannelabstracttransport_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebChannelAbstractTransport*
/// @param thread QThread*
bool q_webchannelabstracttransport_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebChannelAbstractTransport*
/// @param interval int
int32_t q_webchannelabstracttransport_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebChannelAbstractTransport*
/// @param id int
void q_webchannelabstracttransport_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebChannelAbstractTransport*
/// @param id enum Qt__TimerId
void q_webchannelabstracttransport_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebChannelAbstractTransport*
libqt_list /* of QObject* */ q_webchannelabstracttransport_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebChannelAbstractTransport*
/// @param parent QObject*
void q_webchannelabstracttransport_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebChannelAbstractTransport*
/// @param filterObj QObject*
void q_webchannelabstracttransport_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebChannelAbstractTransport*
/// @param obj QObject*
void q_webchannelabstracttransport_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webchannelabstracttransport_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebChannelAbstractTransport*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webchannelabstracttransport_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webchannelabstracttransport_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webchannelabstracttransport_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebChannelAbstractTransport*
void q_webchannelabstracttransport_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebChannelAbstractTransport*
void q_webchannelabstracttransport_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebChannelAbstractTransport*
/// @param name const char*
/// @param value QVariant*
bool q_webchannelabstracttransport_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebChannelAbstractTransport*
/// @param name const char*
QVariant* q_webchannelabstracttransport_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebChannelAbstractTransport*
const char** q_webchannelabstracttransport_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebChannelAbstractTransport*
QBindingStorage* q_webchannelabstracttransport_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebChannelAbstractTransport*
const QBindingStorage* q_webchannelabstracttransport_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannelAbstractTransport*
void q_webchannelabstracttransport_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self)
void q_webchannelabstracttransport_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebChannelAbstractTransport*
QObject* q_webchannelabstracttransport_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebChannelAbstractTransport*
/// @param classname const char*
bool q_webchannelabstracttransport_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebChannelAbstractTransport*
void q_webchannelabstracttransport_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebChannelAbstractTransport*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webchannelabstracttransport_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebChannelAbstractTransport*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webchannelabstracttransport_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webchannelabstracttransport_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebChannelAbstractTransport*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webchannelabstracttransport_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannelAbstractTransport*
/// @param param1 QObject*
void q_webchannelabstracttransport_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QObject* param1)
void q_webchannelabstracttransport_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QEvent*
bool q_webchannelabstracttransport_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QEvent*
bool q_webchannelabstracttransport_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback bool func(QWebChannelAbstractTransport* self, QEvent* event)
void q_webchannelabstracttransport_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param watched QObject*
/// @param event QEvent*
bool q_webchannelabstracttransport_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param watched QObject*
/// @param event QEvent*
bool q_webchannelabstracttransport_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback bool func(QWebChannelAbstractTransport* self, QObject* watched, QEvent* event)
void q_webchannelabstracttransport_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QTimerEvent*
void q_webchannelabstracttransport_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QTimerEvent*
void q_webchannelabstracttransport_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QTimerEvent* event)
void q_webchannelabstracttransport_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QChildEvent*
void q_webchannelabstracttransport_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QChildEvent*
void q_webchannelabstracttransport_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QChildEvent* event)
void q_webchannelabstracttransport_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QEvent*
void q_webchannelabstracttransport_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param event QEvent*
void q_webchannelabstracttransport_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QEvent* event)
void q_webchannelabstracttransport_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
void q_webchannelabstracttransport_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
void q_webchannelabstracttransport_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QMetaMethod* signal)
void q_webchannelabstracttransport_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
void q_webchannelabstracttransport_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
void q_webchannelabstracttransport_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, QMetaMethod* signal)
void q_webchannelabstracttransport_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
QObject* q_webchannelabstracttransport_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
QObject* q_webchannelabstracttransport_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback QObject* func()
void q_webchannelabstracttransport_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
int32_t q_webchannelabstracttransport_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
int32_t q_webchannelabstracttransport_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback int32_t func()
void q_webchannelabstracttransport_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal const char*
int32_t q_webchannelabstracttransport_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal const char*
int32_t q_webchannelabstracttransport_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback int32_t func(QWebChannelAbstractTransport* self, const char* signal)
void q_webchannelabstracttransport_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
bool q_webchannelabstracttransport_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param signal QMetaMethod*
bool q_webchannelabstracttransport_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QWebChannelAbstractTransport*
/// @param callback bool func(QWebChannelAbstractTransport* self, QMetaMethod* signal)
void q_webchannelabstracttransport_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebChannelAbstractTransport*
/// @param callback void func(QWebChannelAbstractTransport* self, const char* objectName)
void q_webchannelabstracttransport_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#dtor.QWebChannelAbstractTransport)
///
/// Delete this object from C++ memory.
///
/// @param self QWebChannelAbstractTransport*
void q_webchannelabstracttransport_delete(void* self);

#endif
