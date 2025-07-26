#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H
#define SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebchannelabstracttransport.html

/// q_webchannelabstracttransport_new constructs a new QWebChannelAbstractTransport object.
///
///
QWebChannelAbstractTransport* q_webchannelabstracttransport_new();

/// q_webchannelabstracttransport_new2 constructs a new QWebChannelAbstractTransport object.
///
/// ``` QObject* parent ```
QWebChannelAbstractTransport* q_webchannelabstracttransport_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebChannelAbstractTransport* self ```
const QMetaObject* q_webchannelabstracttransport_meta_object(void* self);

/// ``` QWebChannelAbstractTransport* self, const char* param1 ```
void* q_webchannelabstracttransport_metacast(void* self, const char* param1);

/// ``` QWebChannelAbstractTransport* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannelabstracttransport_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)(QWebChannelAbstractTransport*, enum QMetaObject__Call, int, void*) ```
void q_webchannelabstracttransport_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebChannelAbstractTransport* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannelabstracttransport_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webchannelabstracttransport_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message ```
void q_webchannelabstracttransport_send_message(void* self, void* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// Allows for overriding the related default method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QJsonObject*) ```
void q_webchannelabstracttransport_on_send_message(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// Base class method implementation
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message ```
void q_webchannelabstracttransport_qbase_send_message(void* self, void* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#messageReceived)
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport ```
void q_webchannelabstracttransport_message_received(void* self, void* message, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#messageReceived)
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*) ```
void q_webchannelabstracttransport_on_message_received(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webchannelabstracttransport_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webchannelabstracttransport_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebChannelAbstractTransport* self ```
const char* q_webchannelabstracttransport_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebChannelAbstractTransport* self, char* name ```
void q_webchannelabstracttransport_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebChannelAbstractTransport* self, bool b ```
bool q_webchannelabstracttransport_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebChannelAbstractTransport* self ```
QThread* q_webchannelabstracttransport_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebChannelAbstractTransport* self, QThread* thread ```
bool q_webchannelabstracttransport_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannelAbstractTransport* self, int interval ```
int32_t q_webchannelabstracttransport_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebChannelAbstractTransport* self, int id ```
void q_webchannelabstracttransport_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebChannelAbstractTransport* self, enum Qt__TimerId id ```
void q_webchannelabstracttransport_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebChannelAbstractTransport* self ```
libqt_list /* of QObject* */ q_webchannelabstracttransport_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebChannelAbstractTransport* self, QObject* parent ```
void q_webchannelabstracttransport_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebChannelAbstractTransport* self, QObject* filterObj ```
void q_webchannelabstracttransport_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebChannelAbstractTransport* self, QObject* obj ```
void q_webchannelabstracttransport_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webchannelabstracttransport_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannelAbstractTransport* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webchannelabstracttransport_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webchannelabstracttransport_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webchannelabstracttransport_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebChannelAbstractTransport* self, const char* name, QVariant* value ```
bool q_webchannelabstracttransport_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebChannelAbstractTransport* self, const char* name ```
QVariant* q_webchannelabstracttransport_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebChannelAbstractTransport* self ```
const char** q_webchannelabstracttransport_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannelAbstractTransport* self ```
QBindingStorage* q_webchannelabstracttransport_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannelAbstractTransport* self ```
const QBindingStorage* q_webchannelabstracttransport_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*) ```
void q_webchannelabstracttransport_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebChannelAbstractTransport* self, const char* classname ```
bool q_webchannelabstracttransport_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebChannelAbstractTransport* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webchannelabstracttransport_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannelAbstractTransport* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webchannelabstracttransport_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannelabstracttransport_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannelAbstractTransport* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannelabstracttransport_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self, QObject* param1 ```
void q_webchannelabstracttransport_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QObject*) ```
void q_webchannelabstracttransport_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
bool q_webchannelabstracttransport_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
bool q_webchannelabstracttransport_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QEvent*) ```
void q_webchannelabstracttransport_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* watched, QEvent* event ```
bool q_webchannelabstracttransport_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* watched, QEvent* event ```
bool q_webchannelabstracttransport_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QObject*, QEvent*) ```
void q_webchannelabstracttransport_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QTimerEvent* event ```
void q_webchannelabstracttransport_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QTimerEvent* event ```
void q_webchannelabstracttransport_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QTimerEvent*) ```
void q_webchannelabstracttransport_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QChildEvent* event ```
void q_webchannelabstracttransport_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QChildEvent* event ```
void q_webchannelabstracttransport_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QChildEvent*) ```
void q_webchannelabstracttransport_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
void q_webchannelabstracttransport_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
void q_webchannelabstracttransport_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QEvent*) ```
void q_webchannelabstracttransport_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* (*slot)() ```
void q_webchannelabstracttransport_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
int32_t q_webchannelabstracttransport_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
int32_t q_webchannelabstracttransport_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)() ```
void q_webchannelabstracttransport_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, const char* signal ```
int32_t q_webchannelabstracttransport_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, const char* signal ```
int32_t q_webchannelabstracttransport_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)(QWebChannelAbstractTransport*, const char*) ```
void q_webchannelabstracttransport_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
bool q_webchannelabstracttransport_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
bool q_webchannelabstracttransport_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, const char*) ```
void q_webchannelabstracttransport_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#dtor.QWebChannelAbstractTransport)
///
/// Delete this object from C++ memory.
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_delete(void* self);

#endif
