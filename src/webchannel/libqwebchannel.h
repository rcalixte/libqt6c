#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQWEBCHANNEL_H
#define SRC_WEBCHANNELQT6C_LIBQWEBCHANNEL_H

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
#include "libqwebchannelabstracttransport.h"

/// https://doc.qt.io/qt-6/qwebchannel.html

/// q_webchannel_new constructs a new QWebChannel object.
///
///
QWebChannel* q_webchannel_new();

/// q_webchannel_new2 constructs a new QWebChannel object.
///
/// ``` QObject* parent ```
QWebChannel* q_webchannel_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebChannel* self ```
const QMetaObject* q_webchannel_meta_object(void* self);

/// ``` QWebChannel* self, const char* param1 ```
void* q_webchannel_metacast(void* self, const char* param1);

/// ``` QWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QWebChannel* self, int32_t (*slot)(QWebChannel*, enum QMetaObject__Call, int, void*) ```
void q_webchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QWebChannel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webchannel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#registerObjects)
///
/// ``` QWebChannel* self, libqt_map /* of const char* to QObject* */ objects ```
void q_webchannel_register_objects(void* self, libqt_map /* of const char* to QObject* */ objects);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#registeredObjects)
///
/// ``` QWebChannel* self ```
libqt_map /* of const char* to QObject* */ q_webchannel_registered_objects(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#registerObject)
///
/// ``` QWebChannel* self, const char* id, QObject* object ```
void q_webchannel_register_object(void* self, const char* id, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#deregisterObject)
///
/// ``` QWebChannel* self, QObject* object ```
void q_webchannel_deregister_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdates)
///
/// ``` QWebChannel* self ```
bool q_webchannel_block_updates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#setBlockUpdates)
///
/// ``` QWebChannel* self, bool block ```
void q_webchannel_set_block_updates(void* self, bool block);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#propertyUpdateInterval)
///
/// ``` QWebChannel* self ```
int32_t q_webchannel_property_update_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#setPropertyUpdateInterval)
///
/// ``` QWebChannel* self, int ms ```
void q_webchannel_set_property_update_interval(void* self, int ms);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// ``` QWebChannel* self, bool block ```
void q_webchannel_block_updates_changed(void* self, bool block);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#blockUpdatesChanged)
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, bool) ```
void q_webchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#connectTo)
///
/// ``` QWebChannel* self, QWebChannelAbstractTransport* transport ```
void q_webchannel_connect_to(void* self, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#disconnectFrom)
///
/// ``` QWebChannel* self, QWebChannelAbstractTransport* transport ```
void q_webchannel_disconnect_from(void* self, void* transport);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webchannel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webchannel_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebChannel* self ```
const char* q_webchannel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebChannel* self, char* name ```
void q_webchannel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebChannel* self ```
bool q_webchannel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebChannel* self ```
bool q_webchannel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebChannel* self ```
bool q_webchannel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebChannel* self ```
bool q_webchannel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebChannel* self, bool b ```
bool q_webchannel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebChannel* self ```
QThread* q_webchannel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebChannel* self, QThread* thread ```
void q_webchannel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannel* self, int interval ```
int32_t q_webchannel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebChannel* self, int id ```
void q_webchannel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebChannel* self ```
const libqt_list /* of QObject* */ q_webchannel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebChannel* self, QObject* parent ```
void q_webchannel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebChannel* self, QObject* filterObj ```
void q_webchannel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebChannel* self, QObject* obj ```
void q_webchannel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webchannel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webchannel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webchannel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webchannel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebChannel* self ```
void q_webchannel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebChannel* self ```
void q_webchannel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebChannel* self, const char* name, QVariant* value ```
bool q_webchannel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebChannel* self, const char* name ```
QVariant* q_webchannel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebChannel* self ```
const char** q_webchannel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannel* self ```
QBindingStorage* q_webchannel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannel* self ```
const QBindingStorage* q_webchannel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannel* self ```
void q_webchannel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannel* self, void (*slot)(QObject*) ```
void q_webchannel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebChannel* self ```
QObject* q_webchannel_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebChannel* self, const char* classname ```
bool q_webchannel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebChannel* self ```
void q_webchannel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webchannel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannel* self, QObject* param1 ```
void q_webchannel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannel* self, void (*slot)(QObject*, QObject*) ```
void q_webchannel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QEvent* event ```
bool q_webchannel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QEvent* event ```
bool q_webchannel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, bool (*slot)(QWebChannel*, QEvent*) ```
void q_webchannel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QObject* watched, QEvent* event ```
bool q_webchannel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QObject* watched, QEvent* event ```
bool q_webchannel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, bool (*slot)(QWebChannel*, QObject*, QEvent*) ```
void q_webchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QTimerEvent* event ```
void q_webchannel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QTimerEvent* event ```
void q_webchannel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, QTimerEvent*) ```
void q_webchannel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QChildEvent* event ```
void q_webchannel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QChildEvent* event ```
void q_webchannel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, QChildEvent*) ```
void q_webchannel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QEvent* event ```
void q_webchannel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QEvent* event ```
void q_webchannel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, QEvent*) ```
void q_webchannel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
void q_webchannel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
void q_webchannel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, QMetaMethod*) ```
void q_webchannel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
void q_webchannel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
void q_webchannel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, void (*slot)(QWebChannel*, QMetaMethod*) ```
void q_webchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self ```
QObject* q_webchannel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self ```
QObject* q_webchannel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, QObject* (*slot)() ```
void q_webchannel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self ```
int32_t q_webchannel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self ```
int32_t q_webchannel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, int32_t (*slot)() ```
void q_webchannel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, const char* signal ```
int32_t q_webchannel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, const char* signal ```
int32_t q_webchannel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, int32_t (*slot)(QWebChannel*, const char*) ```
void q_webchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
bool q_webchannel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannel* self, QMetaMethod* signal ```
bool q_webchannel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannel* self, bool (*slot)(QWebChannel*, QMetaMethod*) ```
void q_webchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebChannel* self, void (*slot)(QObject*, const char*) ```
void q_webchannel_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannel.html#dtor.QWebChannel)
///
/// Delete this object from C++ memory.
///
/// ``` QWebChannel* self ```
void q_webchannel_delete(void* self);

#endif
