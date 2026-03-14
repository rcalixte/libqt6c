#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVICEDISCOVERYAGENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)

/// q_bluetoothservicediscoveryagent_new constructs a new QBluetoothServiceDiscoveryAgent object.
///
QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)

/// q_bluetoothservicediscoveryagent_new2 constructs a new QBluetoothServiceDiscoveryAgent object.
///
/// @param deviceAdapter QBluetoothAddress*
///
QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new2(void* deviceAdapter);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)

/// q_bluetoothservicediscoveryagent_new3 constructs a new QBluetoothServiceDiscoveryAgent object.
///
/// @param parent QObject*
///
QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html)

/// q_bluetoothservicediscoveryagent_new4 constructs a new QBluetoothServiceDiscoveryAgent object.
///
/// @param deviceAdapter QBluetoothAddress*
/// @param parent QObject*
///
QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new4(void* deviceAdapter, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const QMetaObject* q_bluetoothservicediscoveryagent_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback const QMetaObject* func()
///
void q_bluetoothservicediscoveryagent_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_meta_object` instead
///
#define q_bluetoothservicediscoveryagent_qbase_meta_object q_bluetoothservicediscoveryagent_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const QMetaObject* q_bluetoothservicediscoveryagent_super_meta_object(void* self);

/// @param self QBluetoothServiceDiscoveryAgent*
/// @param param1 const char*
///
void* q_bluetoothservicediscoveryagent_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void* func(QBluetoothServiceDiscoveryAgent* self, const char* param1)
///
void q_bluetoothservicediscoveryagent_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_metacast` instead
///
#define q_bluetoothservicediscoveryagent_qbase_metacast q_bluetoothservicediscoveryagent_super_metacast

/// Base class method implementation
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param param1 const char*
///
void* q_bluetoothservicediscoveryagent_super_metacast(void* self, const char* param1);

/// @param self QBluetoothServiceDiscoveryAgent*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothservicediscoveryagent_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback int32_t func(QBluetoothServiceDiscoveryAgent* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_bluetoothservicediscoveryagent_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_metacall` instead
///
#define q_bluetoothservicediscoveryagent_qbase_metacall q_bluetoothservicediscoveryagent_super_metacall

/// Base class method implementation
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothservicediscoveryagent_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_bluetoothservicediscoveryagent_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#isActive)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#error)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
/// @return enum QBluetoothServiceDiscoveryAgent__Error
///
int32_t q_bluetoothservicediscoveryagent_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const char* q_bluetoothservicediscoveryagent_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#discoveredServices)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
/// @return libqt_list of QBluetoothServiceInfo*
///
libqt_list q_bluetoothservicediscoveryagent_discovered_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param uuids libqt_list of QBluetoothUuid*
///
void q_bluetoothservicediscoveryagent_set_uuid_filter(void* self, libqt_list uuids);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setUuidFilter)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param uuid QBluetoothUuid*
///
void q_bluetoothservicediscoveryagent_set_uuid_filter2(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#uuidFilter)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_bluetoothservicediscoveryagent_uuid_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#setRemoteAddress)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param address QBluetoothAddress*
///
bool q_bluetoothservicediscoveryagent_set_remote_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#remoteAddress)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QBluetoothAddress* q_bluetoothservicediscoveryagent_remote_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#stop)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#clear)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param info QBluetoothServiceInfo*
///
void q_bluetoothservicediscoveryagent_service_discovered(void* self, void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#serviceDiscovered)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QBluetoothServiceInfo* info)
///
void q_bluetoothservicediscoveryagent_on_service_discovered(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#finished)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self)
///
void q_bluetoothservicediscoveryagent_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_canceled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#canceled)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self)
///
void q_bluetoothservicediscoveryagent_on_canceled(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param error enum QBluetoothServiceDiscoveryAgent__Error
///
void q_bluetoothservicediscoveryagent_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#errorOccurred)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, enum QBluetoothServiceDiscoveryAgent__Error error)
///
void q_bluetoothservicediscoveryagent_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_bluetoothservicediscoveryagent_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_bluetoothservicediscoveryagent_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#start)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param mode enum QBluetoothServiceDiscoveryAgent__DiscoveryMode
///
void q_bluetoothservicediscoveryagent_start1(void* self, int32_t mode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const char* q_bluetoothservicediscoveryagent_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param name const char*
///
void q_bluetoothservicediscoveryagent_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param b bool
///
bool q_bluetoothservicediscoveryagent_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QThread* q_bluetoothservicediscoveryagent_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param thread QThread*
///
bool q_bluetoothservicediscoveryagent_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param interval int
///
int32_t q_bluetoothservicediscoveryagent_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param time int64_t of nanoseconds
///
int32_t q_bluetoothservicediscoveryagent_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param id int
///
void q_bluetoothservicediscoveryagent_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param id enum Qt__TimerId
///
void q_bluetoothservicediscoveryagent_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
/// @return libqt_list of QObject*
///
libqt_list q_bluetoothservicediscoveryagent_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param parent QObject*
///
void q_bluetoothservicediscoveryagent_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param filterObj QObject*
///
void q_bluetoothservicediscoveryagent_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param obj QObject*
///
void q_bluetoothservicediscoveryagent_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothservicediscoveryagent_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_bluetoothservicediscoveryagent_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
bool q_bluetoothservicediscoveryagent_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param receiver QObject*
///
bool q_bluetoothservicediscoveryagent_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_bluetoothservicediscoveryagent_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param name const char*
/// @param value QVariant*
///
bool q_bluetoothservicediscoveryagent_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param name const char*
///
QVariant* q_bluetoothservicediscoveryagent_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const char** q_bluetoothservicediscoveryagent_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QBindingStorage* q_bluetoothservicediscoveryagent_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
const QBindingStorage* q_bluetoothservicediscoveryagent_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self)
///
void q_bluetoothservicediscoveryagent_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QObject* q_bluetoothservicediscoveryagent_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param classname const char*
///
bool q_bluetoothservicediscoveryagent_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothservicediscoveryagent_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothservicediscoveryagent_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal const char*
///
bool q_bluetoothservicediscoveryagent_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_bluetoothservicediscoveryagent_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothservicediscoveryagent_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothservicediscoveryagent_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param param1 QObject*
///
void q_bluetoothservicediscoveryagent_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QObject* param1)
///
void q_bluetoothservicediscoveryagent_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QEvent*
///
bool q_bluetoothservicediscoveryagent_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_event` instead
///
#define q_bluetoothservicediscoveryagent_qbase_event q_bluetoothservicediscoveryagent_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QEvent*
///
bool q_bluetoothservicediscoveryagent_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback bool func(QBluetoothServiceDiscoveryAgent* self, QEvent* event)
///
void q_bluetoothservicediscoveryagent_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothservicediscoveryagent_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_event_filter` instead
///
#define q_bluetoothservicediscoveryagent_qbase_event_filter q_bluetoothservicediscoveryagent_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothservicediscoveryagent_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback bool func(QBluetoothServiceDiscoveryAgent* self, QObject* watched, QEvent* event)
///
void q_bluetoothservicediscoveryagent_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QTimerEvent*
///
void q_bluetoothservicediscoveryagent_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_timer_event` instead
///
#define q_bluetoothservicediscoveryagent_qbase_timer_event q_bluetoothservicediscoveryagent_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QTimerEvent*
///
void q_bluetoothservicediscoveryagent_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QTimerEvent* event)
///
void q_bluetoothservicediscoveryagent_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QChildEvent*
///
void q_bluetoothservicediscoveryagent_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_child_event` instead
///
#define q_bluetoothservicediscoveryagent_qbase_child_event q_bluetoothservicediscoveryagent_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QChildEvent*
///
void q_bluetoothservicediscoveryagent_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QChildEvent* event)
///
void q_bluetoothservicediscoveryagent_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QEvent*
///
void q_bluetoothservicediscoveryagent_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_custom_event` instead
///
#define q_bluetoothservicediscoveryagent_qbase_custom_event q_bluetoothservicediscoveryagent_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param event QEvent*
///
void q_bluetoothservicediscoveryagent_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QEvent* event)
///
void q_bluetoothservicediscoveryagent_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
void q_bluetoothservicediscoveryagent_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_connect_notify` instead
///
#define q_bluetoothservicediscoveryagent_qbase_connect_notify q_bluetoothservicediscoveryagent_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
void q_bluetoothservicediscoveryagent_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QMetaMethod* signal)
///
void q_bluetoothservicediscoveryagent_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
void q_bluetoothservicediscoveryagent_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_disconnect_notify` instead
///
#define q_bluetoothservicediscoveryagent_qbase_disconnect_notify q_bluetoothservicediscoveryagent_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
void q_bluetoothservicediscoveryagent_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, QMetaMethod* signal)
///
void q_bluetoothservicediscoveryagent_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QObject* q_bluetoothservicediscoveryagent_sender(void* self);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_sender` instead
///
#define q_bluetoothservicediscoveryagent_qbase_sender q_bluetoothservicediscoveryagent_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
QObject* q_bluetoothservicediscoveryagent_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback QObject* func()
///
void q_bluetoothservicediscoveryagent_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
int32_t q_bluetoothservicediscoveryagent_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_sender_signal_index` instead
///
#define q_bluetoothservicediscoveryagent_qbase_sender_signal_index q_bluetoothservicediscoveryagent_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
int32_t q_bluetoothservicediscoveryagent_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback int32_t func()
///
void q_bluetoothservicediscoveryagent_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal const char*
///
int32_t q_bluetoothservicediscoveryagent_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_receivers` instead
///
#define q_bluetoothservicediscoveryagent_qbase_receivers q_bluetoothservicediscoveryagent_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal const char*
///
int32_t q_bluetoothservicediscoveryagent_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback int32_t func(QBluetoothServiceDiscoveryAgent* self, const char* signal)
///
void q_bluetoothservicediscoveryagent_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
bool q_bluetoothservicediscoveryagent_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothservicediscoveryagent_super_is_signal_connected` instead
///
#define q_bluetoothservicediscoveryagent_qbase_is_signal_connected q_bluetoothservicediscoveryagent_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param signal QMetaMethod*
///
bool q_bluetoothservicediscoveryagent_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback bool func(QBluetoothServiceDiscoveryAgent* self, QMetaMethod* signal)
///
void q_bluetoothservicediscoveryagent_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBluetoothServiceDiscoveryAgent*
/// @param callback void func(QBluetoothServiceDiscoveryAgent* self, const char* objectName)
///
void q_bluetoothservicediscoveryagent_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#dtor.QBluetoothServiceDiscoveryAgent)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothServiceDiscoveryAgent*
///
void q_bluetoothservicediscoveryagent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#public-types)

typedef enum {
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_NOERROR = 0,
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_INPUTOUTPUTERROR = 1,
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_POWEREDOFFERROR = 2,
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_INVALIDBLUETOOTHADAPTERERROR = 3,
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_MISSINGPERMISSIONSERROR = 7,
    QBLUETOOTHSERVICEDISCOVERYAGENT_ERROR_UNKNOWNERROR = 100
} QBluetoothServiceDiscoveryAgent__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothservicediscoveryagent.html#public-types)

typedef enum {
    QBLUETOOTHSERVICEDISCOVERYAGENT_DISCOVERYMODE_MINIMALDISCOVERY = 0,
    QBLUETOOTHSERVICEDISCOVERYAGENT_DISCOVERYMODE_FULLDISCOVERY = 1
} QBluetoothServiceDiscoveryAgent__DiscoveryMode;

#endif
