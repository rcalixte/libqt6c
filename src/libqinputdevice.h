#pragma once
#ifndef SRCQT6C_LIBQINPUTDEVICE_H
#define SRCQT6C_LIBQINPUTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qinputdevice.html

/// q_inputdevice_new constructs a new QInputDevice object.
///
///
QInputDevice* q_inputdevice_new();

/// q_inputdevice_new2 constructs a new QInputDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType typeVal ```
QInputDevice* q_inputdevice_new2(const char* name, long long systemId, int64_t typeVal);

/// q_inputdevice_new3 constructs a new QInputDevice object.
///
/// ``` QObject* parent ```
QInputDevice* q_inputdevice_new3(void* parent);

/// q_inputdevice_new4 constructs a new QInputDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType typeVal, const char* seatName ```
QInputDevice* q_inputdevice_new4(const char* name, long long systemId, int64_t typeVal, const char* seatName);

/// q_inputdevice_new5 constructs a new QInputDevice object.
///
/// ``` const char* name, long long systemId, enum QInputDevice__DeviceType typeVal, const char* seatName, QObject* parent ```
QInputDevice* q_inputdevice_new5(const char* name, long long systemId, int64_t typeVal, const char* seatName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QInputDevice* self ```
const QMetaObject* q_inputdevice_meta_object(void* self);

/// ``` QInputDevice* self, const char* param1 ```
void* q_inputdevice_metacast(void* self, const char* param1);

/// ``` QInputDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdevice_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QInputDevice* self, int32_t (*slot)(QInputDevice*, enum QMetaObject__Call, int, void*) ```
void q_inputdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QInputDevice* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_inputdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_inputdevice_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#name)
///
/// ``` QInputDevice* self ```
const char* q_inputdevice_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#type)
///
/// ``` QInputDevice* self ```
int64_t q_inputdevice_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#capabilities)
///
/// ``` QInputDevice* self ```
int64_t q_inputdevice_capabilities(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#hasCapability)
///
/// ``` QInputDevice* self, enum QInputDevice__Capability cap ```
bool q_inputdevice_has_capability(void* self, int64_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#systemId)
///
/// ``` QInputDevice* self ```
long long q_inputdevice_system_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatName)
///
/// ``` QInputDevice* self ```
const char* q_inputdevice_seat_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometry)
///
/// ``` QInputDevice* self ```
QRect* q_inputdevice_available_virtual_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#seatNames)
///
///
const char** q_inputdevice_seat_names();

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#devices)
///
///
libqt_list /* of QInputDevice* */ q_inputdevice_devices();

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
///
const QInputDevice* q_inputdevice_primary_keyboard();

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#operator==)
///
/// ``` QInputDevice* self, QInputDevice* other ```
bool q_inputdevice_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// ``` QInputDevice* self, QRect* area ```
void q_inputdevice_available_virtual_geometry_changed(void* self, void* area);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#availableVirtualGeometryChanged)
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QRect*) ```
void q_inputdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_inputdevice_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_inputdevice_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#primaryKeyboard)
///
/// ``` const char* seatName ```
const QInputDevice* q_inputdevice_primary_keyboard1(const char* seatName);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QInputDevice* self ```
const char* q_inputdevice_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QInputDevice* self, char* name ```
void q_inputdevice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QInputDevice* self ```
bool q_inputdevice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QInputDevice* self ```
bool q_inputdevice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QInputDevice* self ```
bool q_inputdevice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QInputDevice* self ```
bool q_inputdevice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QInputDevice* self, bool b ```
bool q_inputdevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QInputDevice* self ```
QThread* q_inputdevice_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputDevice* self, QThread* thread ```
bool q_inputdevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDevice* self, int interval ```
int32_t q_inputdevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputDevice* self, int id ```
void q_inputdevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QInputDevice* self, enum Qt__TimerId id ```
void q_inputdevice_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QInputDevice* self ```
libqt_list /* of QObject* */ q_inputdevice_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QInputDevice* self, QObject* parent ```
void q_inputdevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QInputDevice* self, QObject* filterObj ```
void q_inputdevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QInputDevice* self, QObject* obj ```
void q_inputdevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_inputdevice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDevice* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_inputdevice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_inputdevice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_inputdevice_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QInputDevice* self ```
void q_inputdevice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QInputDevice* self ```
void q_inputdevice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QInputDevice* self, const char* name, QVariant* value ```
bool q_inputdevice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QInputDevice* self, const char* name ```
QVariant* q_inputdevice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QInputDevice* self ```
const char** q_inputdevice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDevice* self ```
QBindingStorage* q_inputdevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QInputDevice* self ```
const QBindingStorage* q_inputdevice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDevice* self ```
void q_inputdevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDevice* self, void (*slot)(QObject*) ```
void q_inputdevice_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QInputDevice* self ```
QObject* q_inputdevice_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QInputDevice* self, const char* classname ```
bool q_inputdevice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QInputDevice* self ```
void q_inputdevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QInputDevice* self, QThread* thread, Disambiguated_t* param2 ```
bool q_inputdevice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QInputDevice* self, int interval, enum Qt__TimerType timerType ```
int32_t q_inputdevice_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QInputDevice* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_inputdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDevice* self, QObject* param1 ```
void q_inputdevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QInputDevice* self, void (*slot)(QObject*, QObject*) ```
void q_inputdevice_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QEvent* event ```
bool q_inputdevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QEvent* event ```
bool q_inputdevice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, bool (*slot)(QInputDevice*, QEvent*) ```
void q_inputdevice_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QObject* watched, QEvent* event ```
bool q_inputdevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QObject* watched, QEvent* event ```
bool q_inputdevice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, bool (*slot)(QInputDevice*, QObject*, QEvent*) ```
void q_inputdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QTimerEvent* event ```
void q_inputdevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QTimerEvent* event ```
void q_inputdevice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QTimerEvent*) ```
void q_inputdevice_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QChildEvent* event ```
void q_inputdevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QChildEvent* event ```
void q_inputdevice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QChildEvent*) ```
void q_inputdevice_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QEvent* event ```
void q_inputdevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QEvent* event ```
void q_inputdevice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QEvent*) ```
void q_inputdevice_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
void q_inputdevice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
void q_inputdevice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QMetaMethod*) ```
void q_inputdevice_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
void q_inputdevice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
void q_inputdevice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, void (*slot)(QInputDevice*, QMetaMethod*) ```
void q_inputdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self ```
QObject* q_inputdevice_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self ```
QObject* q_inputdevice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, QObject* (*slot)() ```
void q_inputdevice_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self ```
int32_t q_inputdevice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self ```
int32_t q_inputdevice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, int32_t (*slot)() ```
void q_inputdevice_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, const char* signal ```
int32_t q_inputdevice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, const char* signal ```
int32_t q_inputdevice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, int32_t (*slot)(QInputDevice*, const char*) ```
void q_inputdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
bool q_inputdevice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QInputDevice* self, QMetaMethod* signal ```
bool q_inputdevice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QInputDevice* self, bool (*slot)(QInputDevice*, QMetaMethod*) ```
void q_inputdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QInputDevice* self, void (*slot)(QObject*, const char*) ```
void q_inputdevice_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qinputdevice.html#dtor.QInputDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QInputDevice* self ```
void q_inputdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qinputdevice.html#types

typedef enum {
    QINPUTDEVICE_DEVICETYPE_UNKNOWN = 0,
    QINPUTDEVICE_DEVICETYPE_MOUSE = 1,
    QINPUTDEVICE_DEVICETYPE_TOUCHSCREEN = 2,
    QINPUTDEVICE_DEVICETYPE_TOUCHPAD = 4,
    QINPUTDEVICE_DEVICETYPE_PUCK = 8,
    QINPUTDEVICE_DEVICETYPE_STYLUS = 16,
    QINPUTDEVICE_DEVICETYPE_AIRBRUSH = 32,
    QINPUTDEVICE_DEVICETYPE_KEYBOARD = 4096,
    QINPUTDEVICE_DEVICETYPE_ALLDEVICES = 2147483647
} QInputDevice__DeviceType;

typedef enum {
    QINPUTDEVICE_CAPABILITY_NONE = 0,
    QINPUTDEVICE_CAPABILITY_POSITION = 1,
    QINPUTDEVICE_CAPABILITY_AREA = 2,
    QINPUTDEVICE_CAPABILITY_PRESSURE = 4,
    QINPUTDEVICE_CAPABILITY_VELOCITY = 8,
    QINPUTDEVICE_CAPABILITY_NORMALIZEDPOSITION = 32,
    QINPUTDEVICE_CAPABILITY_MOUSEEMULATION = 64,
    QINPUTDEVICE_CAPABILITY_PIXELSCROLL = 128,
    QINPUTDEVICE_CAPABILITY_SCROLL = 256,
    QINPUTDEVICE_CAPABILITY_HOVER = 512,
    QINPUTDEVICE_CAPABILITY_ROTATION = 1024,
    QINPUTDEVICE_CAPABILITY_XTILT = 2048,
    QINPUTDEVICE_CAPABILITY_YTILT = 4096,
    QINPUTDEVICE_CAPABILITY_TANGENTIALPRESSURE = 8192,
    QINPUTDEVICE_CAPABILITY_ZPOSITION = 16384,
    QINPUTDEVICE_CAPABILITY_ALL = 2147483647
} QInputDevice__Capability;

#endif
