#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQQMLWEBCHANNEL_H
#define SRC_WEBCHANNELQT6C_LIBQQMLWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqvariant.h"
#include "libqwebchannel.h"

/// https://doc.qt.io/qt-6/qqmlwebchannel.html

/// q_qmlwebchannel_new constructs a new QQmlWebChannel object.
///
///
QQmlWebChannel* q_qmlwebchannel_new();

/// q_qmlwebchannel_new2 constructs a new QQmlWebChannel object.
///
/// ``` QObject* parent ```
QQmlWebChannel* q_qmlwebchannel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QQmlWebChannel* self ```
const QMetaObject* q_qmlwebchannel_meta_object(void* self);

/// ``` QQmlWebChannel* self, const char* param1 ```
void* q_qmlwebchannel_metacast(void* self, const char* param1);

/// ``` QQmlWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_qmlwebchannel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QQmlWebChannel* self, int32_t (*slot)(QQmlWebChannel*, enum QMetaObject__Call, int, void*) ```
void q_qmlwebchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QQmlWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_qmlwebchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_qmlwebchannel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qqmlwebchannel.html#registerObjects)
///
/// ``` QQmlWebChannel* self, libqt_map /* of const char* to QVariant* */ objects ```
void q_qmlwebchannel_register_objects(void* self, libqt_map /* of const char* to QVariant* */ objects);

/// [Qt documentation](https://doc.qt.io/qt-6/qqmlwebchannel.html#connectTo)
///
/// ``` QQmlWebChannel* self, QObject* transport ```
void q_qmlwebchannel_connect_to(void* self, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qqmlwebchannel.html#disconnectFrom)
///
/// ``` QQmlWebChannel* self, QObject* transport ```
void q_qmlwebchannel_disconnect_from(void* self, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_qmlwebchannel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_qmlwebchannel_tr3(const char* s, const char* c, int n);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#registeredObjects)
///
/// ``` QQmlWebChannel* self ```
libqt_map /* of const char* to QObject* */ q_qmlwebchannel_registered_objects(void* self);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#registerObject)
///
/// ``` QQmlWebChannel* self, const char* id, QObject* object ```
void q_qmlwebchannel_register_object(void* self, const char* id, void* object);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#deregisterObject)
///
/// ``` QQmlWebChannel* self, QObject* object ```
void q_qmlwebchannel_deregister_object(void* self, void* object);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdates)
///
/// ``` QQmlWebChannel* self ```
bool q_qmlwebchannel_block_updates(void* self);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#setBlockUpdates)
///
/// ``` QQmlWebChannel* self, bool block ```
void q_qmlwebchannel_set_block_updates(void* self, bool block);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#propertyUpdateInterval)
///
/// ``` QQmlWebChannel* self ```
int32_t q_qmlwebchannel_property_update_interval(void* self);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#setPropertyUpdateInterval)
///
/// ``` QQmlWebChannel* self, int ms ```
void q_qmlwebchannel_set_property_update_interval(void* self, int ms);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// ``` QQmlWebChannel* self, bool block ```
void q_qmlwebchannel_block_updates_changed(void* self, bool block);

/// Inherited from QWebChannel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// ``` QQmlWebChannel* self, void (*slot)(QWebChannel*, bool) ```
void q_qmlwebchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QQmlWebChannel* self ```
const char* q_qmlwebchannel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QQmlWebChannel* self, char* name ```
void q_qmlwebchannel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QQmlWebChannel* self ```
bool q_qmlwebchannel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QQmlWebChannel* self ```
bool q_qmlwebchannel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QQmlWebChannel* self ```
bool q_qmlwebchannel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QQmlWebChannel* self ```
bool q_qmlwebchannel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QQmlWebChannel* self, bool b ```
bool q_qmlwebchannel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QQmlWebChannel* self ```
QThread* q_qmlwebchannel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QQmlWebChannel* self, QThread* thread ```
void q_qmlwebchannel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QQmlWebChannel* self, int interval ```
int32_t q_qmlwebchannel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QQmlWebChannel* self, int id ```
void q_qmlwebchannel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QQmlWebChannel* self ```
libqt_list /* of QObject* */ q_qmlwebchannel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QQmlWebChannel* self, QObject* parent ```
void q_qmlwebchannel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QQmlWebChannel* self, QObject* filterObj ```
void q_qmlwebchannel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QQmlWebChannel* self, QObject* obj ```
void q_qmlwebchannel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_qmlwebchannel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QQmlWebChannel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_qmlwebchannel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_qmlwebchannel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_qmlwebchannel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QQmlWebChannel* self ```
void q_qmlwebchannel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QQmlWebChannel* self ```
void q_qmlwebchannel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QQmlWebChannel* self, const char* name, QVariant* value ```
bool q_qmlwebchannel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QQmlWebChannel* self, const char* name ```
QVariant* q_qmlwebchannel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QQmlWebChannel* self ```
const char** q_qmlwebchannel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QQmlWebChannel* self ```
QBindingStorage* q_qmlwebchannel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QQmlWebChannel* self ```
const QBindingStorage* q_qmlwebchannel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QQmlWebChannel* self ```
void q_qmlwebchannel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QQmlWebChannel* self, void (*slot)(QObject*) ```
void q_qmlwebchannel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QQmlWebChannel* self ```
QObject* q_qmlwebchannel_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QQmlWebChannel* self, const char* classname ```
bool q_qmlwebchannel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QQmlWebChannel* self ```
void q_qmlwebchannel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QQmlWebChannel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_qmlwebchannel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_qmlwebchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QQmlWebChannel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_qmlwebchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QQmlWebChannel* self, QObject* param1 ```
void q_qmlwebchannel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QQmlWebChannel* self, void (*slot)(QObject*, QObject*) ```
void q_qmlwebchannel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QEvent* event ```
bool q_qmlwebchannel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QEvent* event ```
bool q_qmlwebchannel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, bool (*slot)(QQmlWebChannel*, QEvent*) ```
void q_qmlwebchannel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QObject* watched, QEvent* event ```
bool q_qmlwebchannel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QObject* watched, QEvent* event ```
bool q_qmlwebchannel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, bool (*slot)(QQmlWebChannel*, QObject*, QEvent*) ```
void q_qmlwebchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QTimerEvent* event ```
void q_qmlwebchannel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QTimerEvent* event ```
void q_qmlwebchannel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, void (*slot)(QQmlWebChannel*, QTimerEvent*) ```
void q_qmlwebchannel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QChildEvent* event ```
void q_qmlwebchannel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QChildEvent* event ```
void q_qmlwebchannel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, void (*slot)(QQmlWebChannel*, QChildEvent*) ```
void q_qmlwebchannel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QEvent* event ```
void q_qmlwebchannel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QEvent* event ```
void q_qmlwebchannel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, void (*slot)(QQmlWebChannel*, QEvent*) ```
void q_qmlwebchannel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
void q_qmlwebchannel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
void q_qmlwebchannel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, void (*slot)(QQmlWebChannel*, QMetaMethod*) ```
void q_qmlwebchannel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
void q_qmlwebchannel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
void q_qmlwebchannel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, void (*slot)(QQmlWebChannel*, QMetaMethod*) ```
void q_qmlwebchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self ```
QObject* q_qmlwebchannel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self ```
QObject* q_qmlwebchannel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QObject* (*slot)() ```
void q_qmlwebchannel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self ```
int32_t q_qmlwebchannel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self ```
int32_t q_qmlwebchannel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, int32_t (*slot)() ```
void q_qmlwebchannel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, const char* signal ```
int32_t q_qmlwebchannel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, const char* signal ```
int32_t q_qmlwebchannel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, int32_t (*slot)(QQmlWebChannel*, const char*) ```
void q_qmlwebchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
bool q_qmlwebchannel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QQmlWebChannel* self, QMetaMethod* signal ```
bool q_qmlwebchannel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QQmlWebChannel* self, bool (*slot)(QQmlWebChannel*, QMetaMethod*) ```
void q_qmlwebchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QQmlWebChannel* self, void (*slot)(QObject*, const char*) ```
void q_qmlwebchannel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qqmlwebchannel.html#dtor.QQmlWebChannel)
///
/// Delete this object from C++ memory.
///
/// ``` QQmlWebChannel* self ```
void q_qmlwebchannel_delete(void* self);

#endif
