#pragma once
#ifndef BLUETOOTH_LIBQLOWENERGYCONTROLLER_H
#define BLUETOOTH_LIBQLOWENERGYCONTROLLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QLowEnergyController*
///
const QMetaObject* q_lowenergycontroller_meta_object(const void* self);

/// @param self QLowEnergyController*
/// @param param1 const char*
///
void* q_lowenergycontroller_metacast(void* self, const char* param1);

/// @param self QLowEnergyController*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lowenergycontroller_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_lowenergycontroller_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
///
/// @param remoteDevice QBluetoothDeviceInfo*
///
QLowEnergyController* q_lowenergycontroller_create_central(const void* remoteDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
///
/// @param remoteDevice QBluetoothDeviceInfo*
/// @param localDevice QBluetoothAddress*
///
QLowEnergyController* q_lowenergycontroller_create_central2(const void* remoteDevice, const void* localDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
///
/// @param localDevice QBluetoothAddress*
///
QLowEnergyController* q_lowenergycontroller_create_peripheral(const void* localDevice);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
///
QLowEnergyController* q_lowenergycontroller_create_peripheral2();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#localAddress)
///
/// @param self const QLowEnergyController*
///
QBluetoothAddress* q_lowenergycontroller_local_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddress)
///
/// @param self const QLowEnergyController*
///
QBluetoothAddress* q_lowenergycontroller_remote_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteDeviceUuid)
///
/// @param self const QLowEnergyController*
///
QBluetoothUuid* q_lowenergycontroller_remote_device_uuid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLowEnergyController*
///
const char* q_lowenergycontroller_remote_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#state)
///
/// @param self const QLowEnergyController*
///
/// @return enum QLowEnergyController__ControllerState
///
int32_t q_lowenergycontroller_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#remoteAddressType)
///
/// @param self const QLowEnergyController*
///
/// @return enum QLowEnergyController__RemoteAddressType
///
int32_t q_lowenergycontroller_remote_address_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#setRemoteAddressType)
///
/// @param self QLowEnergyController*
/// @param type enum QLowEnergyController__RemoteAddressType
///
void q_lowenergycontroller_set_remote_address_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectToDevice)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_connect_to_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnectFromDevice)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_disconnect_from_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoverServices)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_discover_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#services)
///
/// @param self const QLowEnergyController*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_lowenergycontroller_services(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
///
/// @param self QLowEnergyController*
/// @param service QBluetoothUuid*
///
QLowEnergyService* q_lowenergycontroller_create_service_object(void* self, const void* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
///
/// @param self QLowEnergyController*
/// @param parameters QLowEnergyAdvertisingParameters*
/// @param advertisingData QLowEnergyAdvertisingData*
///
void q_lowenergycontroller_start_advertising(void* self, const void* parameters, const void* advertisingData);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stopAdvertising)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_stop_advertising(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
///
/// @param self QLowEnergyController*
/// @param service QLowEnergyServiceData*
///
QLowEnergyService* q_lowenergycontroller_add_service(void* self, const void* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#requestConnectionUpdate)
///
/// @param self QLowEnergyController*
/// @param parameters QLowEnergyConnectionParameters*
///
void q_lowenergycontroller_request_connection_update(void* self, const void* parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#error)
///
/// @param self const QLowEnergyController*
///
/// @return enum QLowEnergyController__Error
///
int32_t q_lowenergycontroller_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLowEnergyController*
///
const char* q_lowenergycontroller_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#role)
///
/// @param self const QLowEnergyController*
///
/// @return enum QLowEnergyController__Role
///
int32_t q_lowenergycontroller_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtu)
///
/// @param self const QLowEnergyController*
///
int32_t q_lowenergycontroller_mtu(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#readRssi)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_read_rssi(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connected)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self)
///
void q_lowenergycontroller_on_connected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#disconnected)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self)
///
void q_lowenergycontroller_on_disconnected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
///
/// @param self QLowEnergyController*
/// @param state enum QLowEnergyController__ControllerState
///
void q_lowenergycontroller_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#stateChanged)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, enum QLowEnergyController__ControllerState state)
///
void q_lowenergycontroller_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
///
/// @param self QLowEnergyController*
/// @param newError enum QLowEnergyController__Error
///
void q_lowenergycontroller_error_occurred(void* self, int32_t newError);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#errorOccurred)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, enum QLowEnergyController__Error newError)
///
void q_lowenergycontroller_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
///
/// @param self QLowEnergyController*
/// @param mtu int
///
void q_lowenergycontroller_mtu_changed(void* self, int mtu);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#mtuChanged)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, int mtu)
///
void q_lowenergycontroller_on_mtu_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
///
/// @param self QLowEnergyController*
/// @param rssi int16_t
///
void q_lowenergycontroller_rssi_read(void* self, int16_t rssi);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#rssiRead)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, int16_t rssi)
///
void q_lowenergycontroller_on_rssi_read(void* self, void (*callback)(void*, int16_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
///
/// @param self QLowEnergyController*
/// @param newService QBluetoothUuid*
///
void q_lowenergycontroller_service_discovered(void* self, const void* newService);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#serviceDiscovered)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, QBluetoothUuid* newService)
///
void q_lowenergycontroller_on_service_discovered(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_discovery_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#discoveryFinished)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self)
///
void q_lowenergycontroller_on_discovery_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
///
/// @param self QLowEnergyController*
/// @param parameters QLowEnergyConnectionParameters*
///
void q_lowenergycontroller_connection_updated(void* self, const void* parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#connectionUpdated)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, QLowEnergyConnectionParameters* parameters)
///
void q_lowenergycontroller_on_connection_updated(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_lowenergycontroller_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_lowenergycontroller_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
///
/// @param remoteDevice QBluetoothDeviceInfo*
/// @param parent QObject*
///
QLowEnergyController* q_lowenergycontroller_create_central22(const void* remoteDevice, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createCentral)
///
/// @param remoteDevice QBluetoothDeviceInfo*
/// @param localDevice QBluetoothAddress*
/// @param parent QObject*
///
QLowEnergyController* q_lowenergycontroller_create_central3(const void* remoteDevice, const void* localDevice, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
///
/// @param localDevice QBluetoothAddress*
/// @param parent QObject*
///
QLowEnergyController* q_lowenergycontroller_create_peripheral22(const void* localDevice, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createPeripheral)
///
/// @param parent QObject*
///
QLowEnergyController* q_lowenergycontroller_create_peripheral1(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#createServiceObject)
///
/// @param self QLowEnergyController*
/// @param service QBluetoothUuid*
/// @param parent QObject*
///
QLowEnergyService* q_lowenergycontroller_create_service_object2(void* self, const void* service, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#startAdvertising)
///
/// @param self QLowEnergyController*
/// @param parameters QLowEnergyAdvertisingParameters*
/// @param advertisingData QLowEnergyAdvertisingData*
/// @param scanResponseData QLowEnergyAdvertisingData*
///
void q_lowenergycontroller_start_advertising3(void* self, const void* parameters, const void* advertisingData, const void* scanResponseData);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#addService)
///
/// @param self QLowEnergyController*
/// @param service QLowEnergyServiceData*
/// @param parent QObject*
///
QLowEnergyService* q_lowenergycontroller_add_service2(void* self, const void* service, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QLowEnergyController*
/// @param event QEvent*
///
bool q_lowenergycontroller_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QLowEnergyController*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lowenergycontroller_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLowEnergyController*
///
const char* q_lowenergycontroller_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLowEnergyController*
/// @param name const char*
///
void q_lowenergycontroller_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QLowEnergyController*
///
bool q_lowenergycontroller_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QLowEnergyController*
///
bool q_lowenergycontroller_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QLowEnergyController*
///
bool q_lowenergycontroller_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QLowEnergyController*
///
bool q_lowenergycontroller_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLowEnergyController*
/// @param b bool
///
bool q_lowenergycontroller_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QLowEnergyController*
///
QThread* q_lowenergycontroller_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLowEnergyController*
/// @param thread QThread*
///
bool q_lowenergycontroller_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyController*
/// @param interval int
///
int32_t q_lowenergycontroller_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyController*
/// @param time int64_t of nanoseconds
///
int32_t q_lowenergycontroller_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLowEnergyController*
/// @param id int
///
void q_lowenergycontroller_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLowEnergyController*
/// @param id enum Qt__TimerId
///
void q_lowenergycontroller_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QLowEnergyController*
///
/// @return libqt_list of QObject*
///
libqt_list q_lowenergycontroller_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLowEnergyController*
/// @param parent QObject*
///
void q_lowenergycontroller_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLowEnergyController*
/// @param filterObj QObject*
///
void q_lowenergycontroller_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLowEnergyController*
/// @param obj QObject*
///
void q_lowenergycontroller_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_lowenergycontroller_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_lowenergycontroller_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLowEnergyController*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_lowenergycontroller_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergycontroller_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_lowenergycontroller_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
///
bool q_lowenergycontroller_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
/// @param receiver QObject*
///
bool q_lowenergycontroller_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_lowenergycontroller_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QLowEnergyController*
///
void q_lowenergycontroller_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QLowEnergyController*
///
void q_lowenergycontroller_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLowEnergyController*
/// @param name const char*
/// @param value QVariant*
///
bool q_lowenergycontroller_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QLowEnergyController*
/// @param name const char*
///
QVariant* q_lowenergycontroller_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLowEnergyController*
///
const char** q_lowenergycontroller_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLowEnergyController*
///
QBindingStorage* q_lowenergycontroller_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QLowEnergyController*
///
const QBindingStorage* q_lowenergycontroller_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self)
///
void q_lowenergycontroller_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QLowEnergyController*
///
QObject* q_lowenergycontroller_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QLowEnergyController*
/// @param classname const char*
///
bool q_lowenergycontroller_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyController*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_lowenergycontroller_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyController*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_lowenergycontroller_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_lowenergycontroller_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_lowenergycontroller_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLowEnergyController*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_lowenergycontroller_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
/// @param signal const char*
///
bool q_lowenergycontroller_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_lowenergycontroller_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergycontroller_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLowEnergyController*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergycontroller_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyController*
/// @param param1 QObject*
///
void q_lowenergycontroller_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, QObject* param1)
///
void q_lowenergycontroller_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLowEnergyController*
/// @param callback void func(QLowEnergyController* self, const char* objectName)
///
void q_lowenergycontroller_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#dtor.QLowEnergyController)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyController*
///
void q_lowenergycontroller_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#public-types)

typedef enum {
    QLOWENERGYCONTROLLER_ERROR_NOERROR = 0,
    QLOWENERGYCONTROLLER_ERROR_UNKNOWNERROR = 1,
    QLOWENERGYCONTROLLER_ERROR_UNKNOWNREMOTEDEVICEERROR = 2,
    QLOWENERGYCONTROLLER_ERROR_NETWORKERROR = 3,
    QLOWENERGYCONTROLLER_ERROR_INVALIDBLUETOOTHADAPTERERROR = 4,
    QLOWENERGYCONTROLLER_ERROR_CONNECTIONERROR = 5,
    QLOWENERGYCONTROLLER_ERROR_ADVERTISINGERROR = 6,
    QLOWENERGYCONTROLLER_ERROR_REMOTEHOSTCLOSEDERROR = 7,
    QLOWENERGYCONTROLLER_ERROR_AUTHORIZATIONERROR = 8,
    QLOWENERGYCONTROLLER_ERROR_MISSINGPERMISSIONSERROR = 9,
    QLOWENERGYCONTROLLER_ERROR_RSSIREADERROR = 10
} QLowEnergyController__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#public-types)

typedef enum {
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_UNCONNECTEDSTATE = 0,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_CONNECTINGSTATE = 1,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_CONNECTEDSTATE = 2,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_DISCOVERINGSTATE = 3,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_DISCOVEREDSTATE = 4,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_CLOSINGSTATE = 5,
    QLOWENERGYCONTROLLER_CONTROLLERSTATE_ADVERTISINGSTATE = 6
} QLowEnergyController__ControllerState;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#public-types)

typedef enum {
    QLOWENERGYCONTROLLER_REMOTEADDRESSTYPE_PUBLICADDRESS = 0,
    QLOWENERGYCONTROLLER_REMOTEADDRESSTYPE_RANDOMADDRESS = 1
} QLowEnergyController__RemoteAddressType;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycontroller.html#public-types)

typedef enum {
    QLOWENERGYCONTROLLER_ROLE_CENTRALROLE = 0,
    QLOWENERGYCONTROLLER_ROLE_PERIPHERALROLE = 1
} QLowEnergyController__Role;

#endif
