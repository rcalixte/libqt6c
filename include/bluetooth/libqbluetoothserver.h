#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVER_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHSERVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html)

/// q_bluetoothserver_new constructs a new QBluetoothServer object.
///
/// @param serverType enum QBluetoothServiceInfo__Protocol
///
QBluetoothServer* q_bluetoothserver_new(int32_t serverType);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html)

/// q_bluetoothserver_new2 constructs a new QBluetoothServer object.
///
/// @param serverType enum QBluetoothServiceInfo__Protocol
/// @param parent QObject*
///
QBluetoothServer* q_bluetoothserver_new2(int32_t serverType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBluetoothServer*
///
const QMetaObject* q_bluetoothserver_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBluetoothServer*
/// @param callback const QMetaObject* func()
///
void q_bluetoothserver_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_bluetoothserver_super_meta_object` instead
///
#define q_bluetoothserver_qbase_meta_object q_bluetoothserver_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBluetoothServer*
///
const QMetaObject* q_bluetoothserver_super_meta_object(void* self);

/// @param self QBluetoothServer*
/// @param param1 const char*
///
void* q_bluetoothserver_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBluetoothServer*
/// @param callback void* func(QBluetoothServer* self, const char* param1)
///
void q_bluetoothserver_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_bluetoothserver_super_metacast` instead
///
#define q_bluetoothserver_qbase_metacast q_bluetoothserver_super_metacast

/// Base class method implementation
///
/// @param self QBluetoothServer*
/// @param param1 const char*
///
void* q_bluetoothserver_super_metacast(void* self, const char* param1);

/// @param self QBluetoothServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothserver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBluetoothServer*
/// @param callback int32_t func(QBluetoothServer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_bluetoothserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_bluetoothserver_super_metacall` instead
///
#define q_bluetoothserver_qbase_metacall q_bluetoothserver_super_metacall

/// Base class method implementation
///
/// @param self QBluetoothServer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothserver_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_bluetoothserver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#close)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#listen)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_listen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#listen)
///
/// @param self QBluetoothServer*
/// @param uuid QBluetoothUuid*
///
QBluetoothServiceInfo* q_bluetoothserver_listen2(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#isListening)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_is_listening(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#setMaxPendingConnections)
///
/// @param self QBluetoothServer*
/// @param numConnections int
///
void q_bluetoothserver_set_max_pending_connections(void* self, int numConnections);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#maxPendingConnections)
///
/// @param self QBluetoothServer*
///
int32_t q_bluetoothserver_max_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#hasPendingConnections)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_has_pending_connections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#nextPendingConnection)
///
/// @param self QBluetoothServer*
///
QBluetoothSocket* q_bluetoothserver_next_pending_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#serverAddress)
///
/// @param self QBluetoothServer*
///
QBluetoothAddress* q_bluetoothserver_server_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#serverPort)
///
/// @param self QBluetoothServer*
///
uint16_t q_bluetoothserver_server_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#setSecurityFlags)
///
/// @param self QBluetoothServer*
/// @param security flag of enum QBluetooth__Security
///
void q_bluetoothserver_set_security_flags(void* self, int32_t security);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#securityFlags)
///
/// @param self QBluetoothServer*
///
/// @return flag of enum QBluetooth__Security
///
int32_t q_bluetoothserver_security_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#serverType)
///
/// @param self QBluetoothServer*
///
/// @return enum QBluetoothServiceInfo__Protocol
///
int32_t q_bluetoothserver_server_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#error)
///
/// @param self QBluetoothServer*
///
/// @return enum QBluetoothServer__Error
///
int32_t q_bluetoothserver_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#newConnection)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_new_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#newConnection)
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self)
///
void q_bluetoothserver_on_new_connection(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#errorOccurred)
///
/// @param self QBluetoothServer*
/// @param error enum QBluetoothServer__Error
///
void q_bluetoothserver_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#errorOccurred)
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, enum QBluetoothServer__Error error)
///
void q_bluetoothserver_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_bluetoothserver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_bluetoothserver_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#listen)
///
/// @param self QBluetoothServer*
/// @param address QBluetoothAddress*
///
bool q_bluetoothserver_listen1(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#listen)
///
/// @param self QBluetoothServer*
/// @param address QBluetoothAddress*
/// @param port uint16_t
///
bool q_bluetoothserver_listen22(void* self, void* address, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#listen)
///
/// @param self QBluetoothServer*
/// @param uuid QBluetoothUuid*
/// @param serviceName const char*
///
QBluetoothServiceInfo* q_bluetoothserver_listen23(void* self, void* uuid, const char* serviceName);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothServer*
///
const char* q_bluetoothserver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBluetoothServer*
/// @param name const char*
///
void q_bluetoothserver_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBluetoothServer*
/// @param b bool
///
bool q_bluetoothserver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBluetoothServer*
///
QThread* q_bluetoothserver_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBluetoothServer*
/// @param thread QThread*
///
bool q_bluetoothserver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServer*
/// @param interval int
///
int32_t q_bluetoothserver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServer*
/// @param time int64_t of nanoseconds
///
int32_t q_bluetoothserver_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothServer*
/// @param id int
///
void q_bluetoothserver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothServer*
/// @param id enum Qt__TimerId
///
void q_bluetoothserver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBluetoothServer*
///
/// @return libqt_list of QObject*
///
libqt_list q_bluetoothserver_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBluetoothServer*
/// @param parent QObject*
///
void q_bluetoothserver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBluetoothServer*
/// @param filterObj QObject*
///
void q_bluetoothserver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBluetoothServer*
/// @param obj QObject*
///
void q_bluetoothserver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothserver_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_bluetoothserver_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBluetoothServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothserver_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothserver_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_bluetoothserver_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
///
bool q_bluetoothserver_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
/// @param receiver QObject*
///
bool q_bluetoothserver_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_bluetoothserver_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBluetoothServer*
/// @param name const char*
/// @param value QVariant*
///
bool q_bluetoothserver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBluetoothServer*
/// @param name const char*
///
QVariant* q_bluetoothserver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothServer*
///
const char** q_bluetoothserver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothServer*
///
QBindingStorage* q_bluetoothserver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothServer*
///
const QBindingStorage* q_bluetoothserver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self)
///
void q_bluetoothserver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBluetoothServer*
///
QObject* q_bluetoothserver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBluetoothServer*
/// @param classname const char*
///
bool q_bluetoothserver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothserver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothServer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothserver_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_bluetoothserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_bluetoothserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBluetoothServer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_bluetoothserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
/// @param signal const char*
///
bool q_bluetoothserver_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_bluetoothserver_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothserver_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBluetoothServer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothserver_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServer*
/// @param param1 QObject*
///
void q_bluetoothserver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QObject* param1)
///
void q_bluetoothserver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QEvent*
///
bool q_bluetoothserver_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_event` instead
///
#define q_bluetoothserver_qbase_event q_bluetoothserver_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QEvent*
///
bool q_bluetoothserver_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback bool func(QBluetoothServer* self, QEvent* event)
///
void q_bluetoothserver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothserver_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_event_filter` instead
///
#define q_bluetoothserver_qbase_event_filter q_bluetoothserver_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothserver_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback bool func(QBluetoothServer* self, QObject* watched, QEvent* event)
///
void q_bluetoothserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QTimerEvent*
///
void q_bluetoothserver_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_timer_event` instead
///
#define q_bluetoothserver_qbase_timer_event q_bluetoothserver_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QTimerEvent*
///
void q_bluetoothserver_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QTimerEvent* event)
///
void q_bluetoothserver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QChildEvent*
///
void q_bluetoothserver_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_child_event` instead
///
#define q_bluetoothserver_qbase_child_event q_bluetoothserver_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QChildEvent*
///
void q_bluetoothserver_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QChildEvent* event)
///
void q_bluetoothserver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QEvent*
///
void q_bluetoothserver_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_custom_event` instead
///
#define q_bluetoothserver_qbase_custom_event q_bluetoothserver_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param event QEvent*
///
void q_bluetoothserver_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QEvent* event)
///
void q_bluetoothserver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
void q_bluetoothserver_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_connect_notify` instead
///
#define q_bluetoothserver_qbase_connect_notify q_bluetoothserver_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
void q_bluetoothserver_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QMetaMethod* signal)
///
void q_bluetoothserver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
void q_bluetoothserver_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_disconnect_notify` instead
///
#define q_bluetoothserver_qbase_disconnect_notify q_bluetoothserver_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
void q_bluetoothserver_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, QMetaMethod* signal)
///
void q_bluetoothserver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
///
QObject* q_bluetoothserver_sender(void* self);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_sender` instead
///
#define q_bluetoothserver_qbase_sender q_bluetoothserver_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
///
QObject* q_bluetoothserver_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback QObject* func()
///
void q_bluetoothserver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
///
int32_t q_bluetoothserver_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_sender_signal_index` instead
///
#define q_bluetoothserver_qbase_sender_signal_index q_bluetoothserver_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
///
int32_t q_bluetoothserver_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback int32_t func()
///
void q_bluetoothserver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal const char*
///
int32_t q_bluetoothserver_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_receivers` instead
///
#define q_bluetoothserver_qbase_receivers q_bluetoothserver_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal const char*
///
int32_t q_bluetoothserver_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback int32_t func(QBluetoothServer* self, const char* signal)
///
void q_bluetoothserver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
bool q_bluetoothserver_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_bluetoothserver_super_is_signal_connected` instead
///
#define q_bluetoothserver_qbase_is_signal_connected q_bluetoothserver_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param signal QMetaMethod*
///
bool q_bluetoothserver_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothServer*
/// @param callback bool func(QBluetoothServer* self, QMetaMethod* signal)
///
void q_bluetoothserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBluetoothServer*
/// @param callback void func(QBluetoothServer* self, const char* objectName)
///
void q_bluetoothserver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#dtor.QBluetoothServer)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothServer*
///
void q_bluetoothserver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothserver.html#public-types)

typedef enum {
    QBLUETOOTHSERVER_ERROR_NOERROR = 0,
    QBLUETOOTHSERVER_ERROR_UNKNOWNERROR = 1,
    QBLUETOOTHSERVER_ERROR_POWEREDOFFERROR = 2,
    QBLUETOOTHSERVER_ERROR_INPUTOUTPUTERROR = 3,
    QBLUETOOTHSERVER_ERROR_SERVICEALREADYREGISTEREDERROR = 4,
    QBLUETOOTHSERVER_ERROR_UNSUPPORTEDPROTOCOLERROR = 5,
    QBLUETOOTHSERVER_ERROR_MISSINGPERMISSIONSERROR = 6
} QBluetoothServer__Error;

#endif
