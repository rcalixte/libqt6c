#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHLOCALDEVICE_H
#define BLUETOOTH_LIBQBLUETOOTHLOCALDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)

/// q_bluetoothlocaldevice_new constructs a new QBluetoothLocalDevice object.
///
QBluetoothLocalDevice* q_bluetoothlocaldevice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)

/// q_bluetoothlocaldevice_new2 constructs a new QBluetoothLocalDevice object.
///
/// @param address QBluetoothAddress*
///
QBluetoothLocalDevice* q_bluetoothlocaldevice_new2(const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)

/// q_bluetoothlocaldevice_new3 constructs a new QBluetoothLocalDevice object.
///
/// @param parent QObject*
///
QBluetoothLocalDevice* q_bluetoothlocaldevice_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html)

/// q_bluetoothlocaldevice_new4 constructs a new QBluetoothLocalDevice object.
///
/// @param address QBluetoothAddress*
/// @param parent QObject*
///
QBluetoothLocalDevice* q_bluetoothlocaldevice_new4(const void* address, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBluetoothLocalDevice*
///
const QMetaObject* q_bluetoothlocaldevice_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothLocalDevice*
/// @param callback const QMetaObject* func(const QBluetoothLocalDevice* self)
///
void q_bluetoothlocaldevice_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBluetoothLocalDevice*
///
const QMetaObject* q_bluetoothlocaldevice_super_meta_object(const void* self);

/// @param self QBluetoothLocalDevice*
/// @param param1 const char*
///
void* q_bluetoothlocaldevice_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void* func(QBluetoothLocalDevice* self, const char* param1)
///
void q_bluetoothlocaldevice_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBluetoothLocalDevice*
/// @param param1 const char*
///
void* q_bluetoothlocaldevice_super_metacast(void* self, const char* param1);

/// @param self QBluetoothLocalDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothlocaldevice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBluetoothLocalDevice*
/// @param callback int32_t func(QBluetoothLocalDevice* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_bluetoothlocaldevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBluetoothLocalDevice*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothlocaldevice_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_bluetoothlocaldevice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#isValid)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#requestPairing)
///
/// @param self QBluetoothLocalDevice*
/// @param address QBluetoothAddress*
/// @param pairing enum QBluetoothLocalDevice__Pairing
///
void q_bluetoothlocaldevice_request_pairing(void* self, const void* address, int32_t pairing);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingStatus)
///
/// @param self const QBluetoothLocalDevice*
/// @param address QBluetoothAddress*
///
/// @return enum QBluetoothLocalDevice__Pairing
///
int32_t q_bluetoothlocaldevice_pairing_status(const void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#setHostMode)
///
/// @param self QBluetoothLocalDevice*
/// @param mode enum QBluetoothLocalDevice__HostMode
///
void q_bluetoothlocaldevice_set_host_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostMode)
///
/// @param self const QBluetoothLocalDevice*
///
/// @return enum QBluetoothLocalDevice__HostMode
///
int32_t q_bluetoothlocaldevice_host_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#connectedDevices)
///
/// @param self const QBluetoothLocalDevice*
///
/// @return libqt_list of QBluetoothAddress*
///
libqt_list q_bluetoothlocaldevice_connected_devices(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#powerOn)
///
/// @param self QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_power_on(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothLocalDevice*
///
const char* q_bluetoothlocaldevice_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#address)
///
/// @param self const QBluetoothLocalDevice*
///
QBluetoothAddress* q_bluetoothlocaldevice_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#allDevices)
///
/// @return libqt_list of QBluetoothHostInfo*
///
libqt_list q_bluetoothlocaldevice_all_devices();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostModeStateChanged)
///
/// @param self QBluetoothLocalDevice*
/// @param state enum QBluetoothLocalDevice__HostMode
///
void q_bluetoothlocaldevice_host_mode_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#hostModeStateChanged)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, enum QBluetoothLocalDevice__HostMode state)
///
void q_bluetoothlocaldevice_on_host_mode_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceConnected)
///
/// @param self QBluetoothLocalDevice*
/// @param address QBluetoothAddress*
///
void q_bluetoothlocaldevice_device_connected(void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceConnected)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QBluetoothAddress* address)
///
void q_bluetoothlocaldevice_on_device_connected(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceDisconnected)
///
/// @param self QBluetoothLocalDevice*
/// @param address QBluetoothAddress*
///
void q_bluetoothlocaldevice_device_disconnected(void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#deviceDisconnected)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QBluetoothAddress* address)
///
void q_bluetoothlocaldevice_on_device_disconnected(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingFinished)
///
/// @param self QBluetoothLocalDevice*
/// @param address QBluetoothAddress*
/// @param pairing enum QBluetoothLocalDevice__Pairing
///
void q_bluetoothlocaldevice_pairing_finished(void* self, const void* address, int32_t pairing);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#pairingFinished)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QBluetoothAddress* address, enum QBluetoothLocalDevice__Pairing pairing)
///
void q_bluetoothlocaldevice_on_pairing_finished(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#errorOccurred)
///
/// @param self QBluetoothLocalDevice*
/// @param error enum QBluetoothLocalDevice__Error
///
void q_bluetoothlocaldevice_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#errorOccurred)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, enum QBluetoothLocalDevice__Error error)
///
void q_bluetoothlocaldevice_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_bluetoothlocaldevice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_bluetoothlocaldevice_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothLocalDevice*
///
const char* q_bluetoothlocaldevice_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBluetoothLocalDevice*
/// @param name const char*
///
void q_bluetoothlocaldevice_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBluetoothLocalDevice*
/// @param b bool
///
bool q_bluetoothlocaldevice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBluetoothLocalDevice*
///
QThread* q_bluetoothlocaldevice_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBluetoothLocalDevice*
/// @param thread QThread*
///
bool q_bluetoothlocaldevice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param interval int
///
int32_t q_bluetoothlocaldevice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param time int64_t of nanoseconds
///
int32_t q_bluetoothlocaldevice_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param id int
///
void q_bluetoothlocaldevice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param id enum Qt__TimerId
///
void q_bluetoothlocaldevice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBluetoothLocalDevice*
///
/// @return libqt_list of QObject*
///
libqt_list q_bluetoothlocaldevice_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBluetoothLocalDevice*
/// @param parent QObject*
///
void q_bluetoothlocaldevice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBluetoothLocalDevice*
/// @param filterObj QObject*
///
void q_bluetoothlocaldevice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBluetoothLocalDevice*
/// @param obj QObject*
///
void q_bluetoothlocaldevice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothlocaldevice_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_bluetoothlocaldevice_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBluetoothLocalDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothlocaldevice_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothlocaldevice_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_bluetoothlocaldevice_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
///
bool q_bluetoothlocaldevice_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
/// @param receiver QObject*
///
bool q_bluetoothlocaldevice_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_bluetoothlocaldevice_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBluetoothLocalDevice*
/// @param name const char*
/// @param value QVariant*
///
bool q_bluetoothlocaldevice_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBluetoothLocalDevice*
/// @param name const char*
///
QVariant* q_bluetoothlocaldevice_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBluetoothLocalDevice*
///
const char** q_bluetoothlocaldevice_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothLocalDevice*
///
QBindingStorage* q_bluetoothlocaldevice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBluetoothLocalDevice*
///
const QBindingStorage* q_bluetoothlocaldevice_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self)
///
void q_bluetoothlocaldevice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBluetoothLocalDevice*
///
QObject* q_bluetoothlocaldevice_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBluetoothLocalDevice*
/// @param classname const char*
///
bool q_bluetoothlocaldevice_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothlocaldevice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothLocalDevice*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothlocaldevice_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_bluetoothlocaldevice_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_bluetoothlocaldevice_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBluetoothLocalDevice*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_bluetoothlocaldevice_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
/// @param signal const char*
///
bool q_bluetoothlocaldevice_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_bluetoothlocaldevice_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothlocaldevice_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothLocalDevice*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothlocaldevice_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothLocalDevice*
/// @param param1 QObject*
///
void q_bluetoothlocaldevice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QObject* param1)
///
void q_bluetoothlocaldevice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QEvent*
///
bool q_bluetoothlocaldevice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QEvent*
///
bool q_bluetoothlocaldevice_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback bool func(QBluetoothLocalDevice* self, QEvent* event)
///
void q_bluetoothlocaldevice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothlocaldevice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothlocaldevice_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback bool func(QBluetoothLocalDevice* self, QObject* watched, QEvent* event)
///
void q_bluetoothlocaldevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QTimerEvent*
///
void q_bluetoothlocaldevice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QTimerEvent*
///
void q_bluetoothlocaldevice_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QTimerEvent* event)
///
void q_bluetoothlocaldevice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QChildEvent*
///
void q_bluetoothlocaldevice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QChildEvent*
///
void q_bluetoothlocaldevice_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QChildEvent* event)
///
void q_bluetoothlocaldevice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QEvent*
///
void q_bluetoothlocaldevice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param event QEvent*
///
void q_bluetoothlocaldevice_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QEvent* event)
///
void q_bluetoothlocaldevice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
void q_bluetoothlocaldevice_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
void q_bluetoothlocaldevice_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QMetaMethod* signal)
///
void q_bluetoothlocaldevice_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
void q_bluetoothlocaldevice_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
void q_bluetoothlocaldevice_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, QMetaMethod* signal)
///
void q_bluetoothlocaldevice_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
///
QObject* q_bluetoothlocaldevice_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
///
QObject* q_bluetoothlocaldevice_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param callback QObject* func(QBluetoothLocalDevice* self)
///
void q_bluetoothlocaldevice_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
///
int32_t q_bluetoothlocaldevice_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
///
int32_t q_bluetoothlocaldevice_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param callback int32_t func(QBluetoothLocalDevice* self)
///
void q_bluetoothlocaldevice_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param signal const char*
///
int32_t q_bluetoothlocaldevice_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param signal const char*
///
int32_t q_bluetoothlocaldevice_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param callback int32_t func(QBluetoothLocalDevice* self, const char* signal)
///
void q_bluetoothlocaldevice_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
bool q_bluetoothlocaldevice_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param signal QMetaMethod*
///
bool q_bluetoothlocaldevice_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothLocalDevice*
/// @param callback bool func(QBluetoothLocalDevice* self, QMetaMethod* signal)
///
void q_bluetoothlocaldevice_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBluetoothLocalDevice*
/// @param callback void func(QBluetoothLocalDevice* self, const char* objectName)
///
void q_bluetoothlocaldevice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#dtor.QBluetoothLocalDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothLocalDevice*
///
void q_bluetoothlocaldevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#public-types)

typedef enum {
    QBLUETOOTHLOCALDEVICE_PAIRING_UNPAIRED = 0,
    QBLUETOOTHLOCALDEVICE_PAIRING_PAIRED = 1,
    QBLUETOOTHLOCALDEVICE_PAIRING_AUTHORIZEDPAIRED = 2
} QBluetoothLocalDevice__Pairing;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#public-types)

typedef enum {
    QBLUETOOTHLOCALDEVICE_HOSTMODE_HOSTPOWEREDOFF = 0,
    QBLUETOOTHLOCALDEVICE_HOSTMODE_HOSTCONNECTABLE = 1,
    QBLUETOOTHLOCALDEVICE_HOSTMODE_HOSTDISCOVERABLE = 2,
    QBLUETOOTHLOCALDEVICE_HOSTMODE_HOSTDISCOVERABLELIMITEDINQUIRY = 3
} QBluetoothLocalDevice__HostMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothlocaldevice.html#public-types)

typedef enum {
    QBLUETOOTHLOCALDEVICE_ERROR_NOERROR = 0,
    QBLUETOOTHLOCALDEVICE_ERROR_PAIRINGERROR = 1,
    QBLUETOOTHLOCALDEVICE_ERROR_MISSINGPERMISSIONSERROR = 2,
    QBLUETOOTHLOCALDEVICE_ERROR_UNKNOWNERROR = 100
} QBluetoothLocalDevice__Error;

#endif
