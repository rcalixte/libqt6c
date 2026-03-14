#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYSERVICE_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLowEnergyService*
///
const QMetaObject* q_lowenergyservice_meta_object(void* self);

/// @param self QLowEnergyService*
/// @param param1 const char*
///
void* q_lowenergyservice_metacast(void* self, const char* param1);

/// @param self QLowEnergyService*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lowenergyservice_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_lowenergyservice_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#includedServices)
///
/// @param self QLowEnergyService*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_lowenergyservice_included_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#type)
///
/// @param self QLowEnergyService*
///
/// @return flag of enum QLowEnergyService__ServiceType
///
int32_t q_lowenergyservice_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#state)
///
/// @param self QLowEnergyService*
///
/// @return enum QLowEnergyService__ServiceState
///
int32_t q_lowenergyservice_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristic)
///
/// @param self QLowEnergyService*
/// @param uuid QBluetoothUuid*
///
QLowEnergyCharacteristic* q_lowenergyservice_characteristic(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristics)
///
/// @param self QLowEnergyService*
///
/// @return libqt_list of QLowEnergyCharacteristic*
///
libqt_list q_lowenergyservice_characteristics(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceUuid)
///
/// @param self QLowEnergyService*
///
QBluetoothUuid* q_lowenergyservice_service_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#serviceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLowEnergyService*
///
const char* q_lowenergyservice_service_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_discover_details(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#error)
///
/// @param self QLowEnergyService*
///
/// @return enum QLowEnergyService__ServiceError
///
int32_t q_lowenergyservice_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
///
/// @param self QLowEnergyService*
/// @param characteristic QLowEnergyCharacteristic*
///
bool q_lowenergyservice_contains(void* self, void* characteristic);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readCharacteristic)
///
/// @param self QLowEnergyService*
/// @param characteristic QLowEnergyCharacteristic*
///
void q_lowenergyservice_read_characteristic(void* self, void* characteristic);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
///
/// @param self QLowEnergyService*
/// @param characteristic QLowEnergyCharacteristic*
/// @param newValue char*
///
void q_lowenergyservice_write_characteristic(void* self, void* characteristic, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#contains)
///
/// @param self QLowEnergyService*
/// @param descriptor QLowEnergyDescriptor*
///
bool q_lowenergyservice_contains2(void* self, void* descriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#readDescriptor)
///
/// @param self QLowEnergyService*
/// @param descriptor QLowEnergyDescriptor*
///
void q_lowenergyservice_read_descriptor(void* self, void* descriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeDescriptor)
///
/// @param self QLowEnergyService*
/// @param descriptor QLowEnergyDescriptor*
/// @param newValue char*
///
void q_lowenergyservice_write_descriptor(void* self, void* descriptor, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
///
/// @param self QLowEnergyService*
/// @param newState enum QLowEnergyService__ServiceState
///
void q_lowenergyservice_state_changed(void* self, int32_t newState);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#stateChanged)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, enum QLowEnergyService__ServiceState newState)
///
void q_lowenergyservice_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
///
/// @param self QLowEnergyService*
/// @param info QLowEnergyCharacteristic*
/// @param value char*
///
void q_lowenergyservice_characteristic_changed(void* self, void* info, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicChanged)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QLowEnergyCharacteristic* info, libqt_string value)
///
void q_lowenergyservice_on_characteristic_changed(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
///
/// @param self QLowEnergyService*
/// @param info QLowEnergyCharacteristic*
/// @param value char*
///
void q_lowenergyservice_characteristic_read(void* self, void* info, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicRead)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QLowEnergyCharacteristic* info, libqt_string value)
///
void q_lowenergyservice_on_characteristic_read(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
///
/// @param self QLowEnergyService*
/// @param info QLowEnergyCharacteristic*
/// @param value char*
///
void q_lowenergyservice_characteristic_written(void* self, void* info, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#characteristicWritten)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QLowEnergyCharacteristic* info, libqt_string value)
///
void q_lowenergyservice_on_characteristic_written(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
///
/// @param self QLowEnergyService*
/// @param info QLowEnergyDescriptor*
/// @param value char*
///
void q_lowenergyservice_descriptor_read(void* self, void* info, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorRead)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QLowEnergyDescriptor* info, libqt_string value)
///
void q_lowenergyservice_on_descriptor_read(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
///
/// @param self QLowEnergyService*
/// @param info QLowEnergyDescriptor*
/// @param value char*
///
void q_lowenergyservice_descriptor_written(void* self, void* info, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#descriptorWritten)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QLowEnergyDescriptor* info, libqt_string value)
///
void q_lowenergyservice_on_descriptor_written(void* self, void (*callback)(void*, void*, libqt_string));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
///
/// @param self QLowEnergyService*
/// @param error enum QLowEnergyService__ServiceError
///
void q_lowenergyservice_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#errorOccurred)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, enum QLowEnergyService__ServiceError error)
///
void q_lowenergyservice_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_lowenergyservice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_lowenergyservice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#discoverDetails)
///
/// @param self QLowEnergyService*
/// @param mode enum QLowEnergyService__DiscoveryMode
///
void q_lowenergyservice_discover_details1(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#writeCharacteristic)
///
/// @param self QLowEnergyService*
/// @param characteristic QLowEnergyCharacteristic*
/// @param newValue char*
/// @param mode enum QLowEnergyService__WriteMode
///
void q_lowenergyservice_write_characteristic3(void* self, void* characteristic, char* newValue, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QLowEnergyService*
/// @param event QEvent*
///
bool q_lowenergyservice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QLowEnergyService*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lowenergyservice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLowEnergyService*
///
const char* q_lowenergyservice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLowEnergyService*
/// @param name const char*
///
void q_lowenergyservice_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLowEnergyService*
///
bool q_lowenergyservice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLowEnergyService*
///
bool q_lowenergyservice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLowEnergyService*
///
bool q_lowenergyservice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLowEnergyService*
///
bool q_lowenergyservice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLowEnergyService*
/// @param b bool
///
bool q_lowenergyservice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLowEnergyService*
///
QThread* q_lowenergyservice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLowEnergyService*
/// @param thread QThread*
///
bool q_lowenergyservice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyService*
/// @param interval int
///
int32_t q_lowenergyservice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyService*
/// @param time int64_t of nanoseconds
///
int32_t q_lowenergyservice_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLowEnergyService*
/// @param id int
///
void q_lowenergyservice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLowEnergyService*
/// @param id enum Qt__TimerId
///
void q_lowenergyservice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLowEnergyService*
///
/// @return libqt_list of QObject*
///
libqt_list q_lowenergyservice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QLowEnergyService*
/// @param parent QObject*
///
void q_lowenergyservice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLowEnergyService*
/// @param filterObj QObject*
///
void q_lowenergyservice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLowEnergyService*
/// @param obj QObject*
///
void q_lowenergyservice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_lowenergyservice_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_lowenergyservice_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLowEnergyService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_lowenergyservice_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergyservice_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_lowenergyservice_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
///
bool q_lowenergyservice_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
/// @param receiver QObject*
///
bool q_lowenergyservice_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_lowenergyservice_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLowEnergyService*
/// @param name const char*
/// @param value QVariant*
///
bool q_lowenergyservice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLowEnergyService*
/// @param name const char*
///
QVariant* q_lowenergyservice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyService*
///
const char** q_lowenergyservice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLowEnergyService*
///
QBindingStorage* q_lowenergyservice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLowEnergyService*
///
const QBindingStorage* q_lowenergyservice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self)
///
void q_lowenergyservice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLowEnergyService*
///
QObject* q_lowenergyservice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLowEnergyService*
/// @param classname const char*
///
bool q_lowenergyservice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyService*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_lowenergyservice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLowEnergyService*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_lowenergyservice_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_lowenergyservice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_lowenergyservice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLowEnergyService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_lowenergyservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
/// @param signal const char*
///
bool q_lowenergyservice_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_lowenergyservice_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergyservice_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QLowEnergyService*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lowenergyservice_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyService*
/// @param param1 QObject*
///
void q_lowenergyservice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, QObject* param1)
///
void q_lowenergyservice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLowEnergyService*
/// @param callback void func(QLowEnergyService* self, const char* objectName)
///
void q_lowenergyservice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#dtor.QLowEnergyService)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyService*
///
void q_lowenergyservice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)

typedef enum {
    QLOWENERGYSERVICE_SERVICETYPE_PRIMARYSERVICE = 1,
    QLOWENERGYSERVICE_SERVICETYPE_INCLUDEDSERVICE = 2
} QLowEnergyService__ServiceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)

typedef enum {
    QLOWENERGYSERVICE_SERVICEERROR_NOERROR = 0,
    QLOWENERGYSERVICE_SERVICEERROR_OPERATIONERROR = 1,
    QLOWENERGYSERVICE_SERVICEERROR_CHARACTERISTICWRITEERROR = 2,
    QLOWENERGYSERVICE_SERVICEERROR_DESCRIPTORWRITEERROR = 3,
    QLOWENERGYSERVICE_SERVICEERROR_UNKNOWNERROR = 4,
    QLOWENERGYSERVICE_SERVICEERROR_CHARACTERISTICREADERROR = 5,
    QLOWENERGYSERVICE_SERVICEERROR_DESCRIPTORREADERROR = 6
} QLowEnergyService__ServiceError;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)

typedef enum {
    QLOWENERGYSERVICE_SERVICESTATE_INVALIDSERVICE = 0,
    QLOWENERGYSERVICE_SERVICESTATE_REMOTESERVICE = 1,
    QLOWENERGYSERVICE_SERVICESTATE_REMOTESERVICEDISCOVERING = 2,
    QLOWENERGYSERVICE_SERVICESTATE_REMOTESERVICEDISCOVERED = 3,
    QLOWENERGYSERVICE_SERVICESTATE_LOCALSERVICE = 4,
    QLOWENERGYSERVICE_SERVICESTATE_DISCOVERYREQUIRED = 1,
    QLOWENERGYSERVICE_SERVICESTATE_DISCOVERINGSERVICE = 2,
    QLOWENERGYSERVICE_SERVICESTATE_SERVICEDISCOVERED = 3
} QLowEnergyService__ServiceState;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)

typedef enum {
    QLOWENERGYSERVICE_DISCOVERYMODE_FULLDISCOVERY = 0,
    QLOWENERGYSERVICE_DISCOVERYMODE_SKIPVALUEDISCOVERY = 1
} QLowEnergyService__DiscoveryMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservice.html#public-types)

typedef enum {
    QLOWENERGYSERVICE_WRITEMODE_WRITEWITHRESPONSE = 0,
    QLOWENERGYSERVICE_WRITEMODE_WRITEWITHOUTRESPONSE = 1,
    QLOWENERGYSERVICE_WRITEMODE_WRITESIGNED = 2
} QLowEnergyService__WriteMode;

#endif
