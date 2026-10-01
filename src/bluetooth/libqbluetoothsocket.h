#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHSOCKET_H
#define BLUETOOTH_LIBQBLUETOOTHSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)

/// q_bluetoothsocket_new constructs a new QBluetoothSocket object.
///
/// @param socketType enum QBluetoothServiceInfo__Protocol
///
QBluetoothSocket* q_bluetoothsocket_new(int32_t socketType);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)

/// q_bluetoothsocket_new2 constructs a new QBluetoothSocket object.
///
QBluetoothSocket* q_bluetoothsocket_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)

/// q_bluetoothsocket_new3 constructs a new QBluetoothSocket object.
///
/// @param socketType enum QBluetoothServiceInfo__Protocol
/// @param parent QObject*
///
QBluetoothSocket* q_bluetoothsocket_new3(int32_t socketType, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)

/// q_bluetoothsocket_new4 constructs a new QBluetoothSocket object.
///
/// @param parent QObject*
///
QBluetoothSocket* q_bluetoothsocket_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QBluetoothSocket*
///
const QMetaObject* q_bluetoothsocket_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothSocket*
/// @param callback const QMetaObject* func(const QBluetoothSocket* self)
///
void q_bluetoothsocket_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QBluetoothSocket*
///
const QMetaObject* q_bluetoothsocket_super_meta_object(const void* self);

/// @param self QBluetoothSocket*
/// @param param1 const char*
///
void* q_bluetoothsocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBluetoothSocket*
/// @param callback void* func(QBluetoothSocket* self, const char* param1)
///
void q_bluetoothsocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QBluetoothSocket*
/// @param param1 const char*
///
void* q_bluetoothsocket_super_metacast(void* self, const char* param1);

/// @param self QBluetoothSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothsocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBluetoothSocket*
/// @param callback int32_t func(QBluetoothSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_bluetoothsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBluetoothSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_bluetoothsocket_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_bluetoothsocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#abort)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_close(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
///
/// Base class method implementation
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_super_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothSocket*
/// @param callback bool func(const QBluetoothSocket* self)
///
void q_bluetoothsocket_on_is_sequential(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
///
/// Base class method implementation
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_super_is_sequential(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothSocket*
/// @param callback int64_t func(const QBluetoothSocket* self)
///
void q_bluetoothsocket_on_bytes_available(const void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_super_bytes_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_bytes_to_write(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothSocket*
/// @param callback int64_t func(const QBluetoothSocket* self)
///
void q_bluetoothsocket_on_bytes_to_write(const void* self, int64_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_super_bytes_to_write(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_can_read_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self const QBluetoothSocket*
/// @param callback bool func(const QBluetoothSocket* self)
///
void q_bluetoothsocket_on_can_read_line(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_super_can_read_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param service QBluetoothServiceInfo*
///
void q_bluetoothsocket_connect_to_service(void* self, const void* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param uuid QBluetoothUuid*
///
void q_bluetoothsocket_connect_to_service2(void* self, const void* address, const void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param port uint16_t
///
void q_bluetoothsocket_connect_to_service3(void* self, const void* address, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param uuid enum QBluetoothUuid__ServiceClassUuid
///
void q_bluetoothsocket_connect_to_service4(void* self, const void* address, int32_t uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnectFromService)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_disconnect_from_service(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothSocket*
///
const char* q_bluetoothsocket_local_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localAddress)
///
/// @param self const QBluetoothSocket*
///
QBluetoothAddress* q_bluetoothsocket_local_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localPort)
///
/// @param self const QBluetoothSocket*
///
uint16_t q_bluetoothsocket_local_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothSocket*
///
const char* q_bluetoothsocket_peer_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerAddress)
///
/// @param self const QBluetoothSocket*
///
QBluetoothAddress* q_bluetoothsocket_peer_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerPort)
///
/// @param self const QBluetoothSocket*
///
uint16_t q_bluetoothsocket_peer_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
///
/// @param self QBluetoothSocket*
/// @param socketDescriptor int
/// @param socketType enum QBluetoothServiceInfo__Protocol
///
bool q_bluetoothsocket_set_socket_descriptor(void* self, int socketDescriptor, int32_t socketType);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#socketDescriptor)
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_socket_descriptor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#socketType)
///
/// @param self const QBluetoothSocket*
///
/// @return enum QBluetoothServiceInfo__Protocol
///
int32_t q_bluetoothsocket_socket_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#state)
///
/// @param self const QBluetoothSocket*
///
/// @return enum QBluetoothSocket__SocketState
///
int32_t q_bluetoothsocket_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#error)
///
/// @param self const QBluetoothSocket*
///
/// @return enum QBluetoothSocket__SocketError
///
int32_t q_bluetoothsocket_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothSocket*
///
const char* q_bluetoothsocket_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setPreferredSecurityFlags)
///
/// @param self QBluetoothSocket*
/// @param flags flag of enum QBluetooth__Security
///
void q_bluetoothsocket_set_preferred_security_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#preferredSecurityFlags)
///
/// @param self const QBluetoothSocket*
///
/// @return flag of enum QBluetooth__Security
///
int32_t q_bluetoothsocket_preferred_security_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_connected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_connected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_disconnected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_disconnected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
///
/// @param self QBluetoothSocket*
/// @param error enum QBluetoothSocket__SocketError
///
void q_bluetoothsocket_error_occurred(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, enum QBluetoothSocket__SocketError error)
///
void q_bluetoothsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
///
/// @param self QBluetoothSocket*
/// @param state enum QBluetoothSocket__SocketState
///
void q_bluetoothsocket_state_changed(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, enum QBluetoothSocket__SocketState state)
///
void q_bluetoothsocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_read_data(void* self, char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self, char* data, int64_t maxSize)
///
void q_bluetoothsocket_on_read_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_super_read_data(void* self, char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
///
/// @param self QBluetoothSocket*
/// @param data const char*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_write_data(void* self, const char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self, const char* data, int64_t maxSize)
///
void q_bluetoothsocket_on_write_data(void* self, int64_t (*callback)(void*, const char*, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QBluetoothSocket*
/// @param data const char*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_super_write_data(void* self, const char* data, int64_t maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
///
/// @param self QBluetoothSocket*
/// @param state enum QBluetoothSocket__SocketState
///
void q_bluetoothsocket_set_socket_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketError)
///
/// @param self QBluetoothSocket*
/// @param error enum QBluetoothSocket__SocketError
///
void q_bluetoothsocket_set_socket_error(void* self, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#doDeviceDiscovery)
///
/// @param self QBluetoothSocket*
/// @param service QBluetoothServiceInfo*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_do_device_discovery(void* self, const void* service, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_bluetoothsocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_bluetoothsocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param service QBluetoothServiceInfo*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_connect_to_service22(void* self, const void* service, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param uuid QBluetoothUuid*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_connect_to_service32(void* self, const void* address, const void* uuid, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param port uint16_t
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_connect_to_service33(void* self, const void* address, uint16_t port, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
///
/// @param self QBluetoothSocket*
/// @param address QBluetoothAddress*
/// @param uuid enum QBluetoothUuid__ServiceClassUuid
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_connect_to_service34(void* self, const void* address, int32_t uuid, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
///
/// @param self QBluetoothSocket*
/// @param socketDescriptor int
/// @param socketType enum QBluetoothServiceInfo__Protocol
/// @param socketState enum QBluetoothSocket__SocketState
///
bool q_bluetoothsocket_set_socket_descriptor3(void* self, int socketDescriptor, int32_t socketType, int32_t socketState);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
///
/// @param self QBluetoothSocket*
/// @param socketDescriptor int
/// @param socketType enum QBluetoothServiceInfo__Protocol
/// @param socketState enum QBluetoothSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_bluetoothsocket_set_socket_descriptor4(void* self, int socketDescriptor, int32_t socketType, int32_t socketState, int32_t openMode);

/// Inherited from QIODevice
///
/// Upcasts to a QIODeviceBase object
///
/// @param self QBluetoothSocket*
///
QIODeviceBase* q_bluetoothsocket_as_q_i_o_device_base(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self const QBluetoothSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_bluetoothsocket_open_mode(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QBluetoothSocket*
/// @param enabled bool
///
void q_bluetoothsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_text_mode_enabled(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_open(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_readable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_writable(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_read_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_write_channel_count(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_current_read_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QBluetoothSocket*
/// @param channel int
///
void q_bluetoothsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_current_write_channel(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QBluetoothSocket*
/// @param channel int
///
void q_bluetoothsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_bluetoothsocket_read(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothSocket*
/// @param maxlen int64_t
///
char* q_bluetoothsocket_read2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothSocket*
///
char* q_bluetoothsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_bluetoothsocket_read_line(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothSocket*
///
char* q_bluetoothsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_transaction_started(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBluetoothSocket*
/// @param data const char*
/// @param lenVal int64_t
///
int64_t q_bluetoothsocket_write(void* self, const char* data, int64_t lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBluetoothSocket*
/// @param data const char*
///
int64_t q_bluetoothsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QBluetoothSocket*
/// @param data char*
///
int64_t q_bluetoothsocket_write3(void* self, char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_bluetoothsocket_peek(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothSocket*
/// @param maxlen int64_t
///
char* q_bluetoothsocket_peek2(void* self, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QBluetoothSocket*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_skip(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QBluetoothSocket*
/// @param c char
///
void q_bluetoothsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QBluetoothSocket*
/// @param c char
///
bool q_bluetoothsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QBluetoothSocket*
/// @param c char*
///
bool q_bluetoothsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBluetoothSocket*
/// @param channel int
///
void q_bluetoothsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, int channel)
///
void q_bluetoothsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBluetoothSocket*
/// @param bytes int64_t
///
void q_bluetoothsocket_bytes_written(void* self, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, int64_t bytes)
///
void q_bluetoothsocket_on_bytes_written(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBluetoothSocket*
/// @param channel int
/// @param bytes int64_t
///
void q_bluetoothsocket_channel_bytes_written(void* self, int channel, int64_t bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, int channel, int64_t bytes)
///
void q_bluetoothsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBluetoothSocket*
/// @param maxlen int64_t
///
char* q_bluetoothsocket_read_line1(void* self, int64_t maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QBluetoothSocket*
///
const char* q_bluetoothsocket_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBluetoothSocket*
/// @param name const char*
///
void q_bluetoothsocket_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBluetoothSocket*
/// @param b bool
///
bool q_bluetoothsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QBluetoothSocket*
///
QThread* q_bluetoothsocket_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBluetoothSocket*
/// @param thread QThread*
///
bool q_bluetoothsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothSocket*
/// @param interval int
///
int32_t q_bluetoothsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_bluetoothsocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothSocket*
/// @param id int
///
void q_bluetoothsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBluetoothSocket*
/// @param id enum Qt__TimerId
///
void q_bluetoothsocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QBluetoothSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_bluetoothsocket_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBluetoothSocket*
/// @param parent QObject*
///
void q_bluetoothsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBluetoothSocket*
/// @param filterObj QObject*
///
void q_bluetoothsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBluetoothSocket*
/// @param obj QObject*
///
void q_bluetoothsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothsocket_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_bluetoothsocket_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBluetoothSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_bluetoothsocket_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothsocket_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_bluetoothsocket_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
/// @param receiver QObject*
///
bool q_bluetoothsocket_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_bluetoothsocket_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QBluetoothSocket*
///
void q_bluetoothsocket_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QBluetoothSocket*
///
void q_bluetoothsocket_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBluetoothSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_bluetoothsocket_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QBluetoothSocket*
/// @param name const char*
///
QVariant* q_bluetoothsocket_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QBluetoothSocket*
///
const char** q_bluetoothsocket_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBluetoothSocket*
///
QBindingStorage* q_bluetoothsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QBluetoothSocket*
///
const QBindingStorage* q_bluetoothsocket_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QBluetoothSocket*
///
QObject* q_bluetoothsocket_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QBluetoothSocket*
/// @param classname const char*
///
bool q_bluetoothsocket_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothsocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBluetoothSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_bluetoothsocket_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_bluetoothsocket_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_bluetoothsocket_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QBluetoothSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_bluetoothsocket_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
/// @param signal const char*
///
bool q_bluetoothsocket_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_bluetoothsocket_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothsocket_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QBluetoothSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_bluetoothsocket_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothSocket*
/// @param param1 QObject*
///
void q_bluetoothsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QObject* param1)
///
void q_bluetoothsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_bluetoothsocket_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_bluetoothsocket_super_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_bluetoothsocket_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_pos(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_super_pos(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_pos(const void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_size(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int64_t q_bluetoothsocket_super_size(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_size(const void* self, int64_t (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param pos int64_t
///
bool q_bluetoothsocket_seek(void* self, int64_t pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param pos int64_t
///
bool q_bluetoothsocket_super_seek(void* self, int64_t pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, int64_t pos)
///
void q_bluetoothsocket_on_seek(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
///
bool q_bluetoothsocket_super_at_end(const void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_at_end(const void* self, bool (*callback)(const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
///
bool q_bluetoothsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
///
bool q_bluetoothsocket_super_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_reset(void* self, bool (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param msecs int
///
bool q_bluetoothsocket_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param msecs int
///
bool q_bluetoothsocket_super_wait_for_ready_read(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, int msecs)
///
void q_bluetoothsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param msecs int
///
bool q_bluetoothsocket_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param msecs int
///
bool q_bluetoothsocket_super_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, int msecs)
///
void q_bluetoothsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_bluetoothsocket_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param data char*
/// @param maxlen int64_t
///
int64_t q_bluetoothsocket_super_read_line_data(void* self, char* data, int64_t maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self, char* data, int64_t maxlen)
///
void q_bluetoothsocket_on_read_line_data(void* self, int64_t (*callback)(void*, char*, int64_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param maxSize int64_t
///
int64_t q_bluetoothsocket_super_skip_data(void* self, int64_t maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback int64_t func(QBluetoothSocket* self, int64_t maxSize)
///
void q_bluetoothsocket_on_skip_data(void* self, int64_t (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QEvent*
///
bool q_bluetoothsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QEvent*
///
bool q_bluetoothsocket_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, QEvent* event)
///
void q_bluetoothsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_bluetoothsocket_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, QObject* watched, QEvent* event)
///
void q_bluetoothsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QTimerEvent*
///
void q_bluetoothsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QTimerEvent*
///
void q_bluetoothsocket_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QTimerEvent* event)
///
void q_bluetoothsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QChildEvent*
///
void q_bluetoothsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QChildEvent*
///
void q_bluetoothsocket_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QChildEvent* event)
///
void q_bluetoothsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QEvent*
///
void q_bluetoothsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param event QEvent*
///
void q_bluetoothsocket_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QEvent* event)
///
void q_bluetoothsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param signal QMetaMethod*
///
void q_bluetoothsocket_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param signal QMetaMethod*
///
void q_bluetoothsocket_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QMetaMethod* signal)
///
void q_bluetoothsocket_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param signal QMetaMethod*
///
void q_bluetoothsocket_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param signal QMetaMethod*
///
void q_bluetoothsocket_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, QMetaMethod* signal)
///
void q_bluetoothsocket_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_bluetoothsocket_super_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_bluetoothsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param errorString const char*
///
void q_bluetoothsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param errorString const char*
///
void q_bluetoothsocket_super_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, const char* errorString)
///
void q_bluetoothsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
///
QObject* q_bluetoothsocket_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
///
QObject* q_bluetoothsocket_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback QObject* func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
///
int32_t q_bluetoothsocket_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback int32_t func(QBluetoothSocket* self)
///
void q_bluetoothsocket_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param signal const char*
///
int32_t q_bluetoothsocket_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param signal const char*
///
int32_t q_bluetoothsocket_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback int32_t func(QBluetoothSocket* self, const char* signal)
///
void q_bluetoothsocket_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param signal QMetaMethod*
///
bool q_bluetoothsocket_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param signal QMetaMethod*
///
bool q_bluetoothsocket_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QBluetoothSocket*
/// @param callback bool func(QBluetoothSocket* self, QMetaMethod* signal)
///
void q_bluetoothsocket_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBluetoothSocket*
/// @param callback void func(QBluetoothSocket* self, const char* objectName)
///
void q_bluetoothsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#dtor.QBluetoothSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothSocket*
///
void q_bluetoothsocket_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#public-types)

typedef enum {
    QBLUETOOTHSOCKET_SOCKETSTATE_UNCONNECTEDSTATE = 0,
    QBLUETOOTHSOCKET_SOCKETSTATE_SERVICELOOKUPSTATE = 1,
    QBLUETOOTHSOCKET_SOCKETSTATE_CONNECTINGSTATE = 2,
    QBLUETOOTHSOCKET_SOCKETSTATE_CONNECTEDSTATE = 3,
    QBLUETOOTHSOCKET_SOCKETSTATE_BOUNDSTATE = 4,
    QBLUETOOTHSOCKET_SOCKETSTATE_CLOSINGSTATE = 5,
    QBLUETOOTHSOCKET_SOCKETSTATE_LISTENINGSTATE = 6
} QBluetoothSocket__SocketState;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#public-types)

typedef enum {
    QBLUETOOTHSOCKET_SOCKETERROR_NOSOCKETERROR = 0,
    QBLUETOOTHSOCKET_SOCKETERROR_UNKNOWNSOCKETERROR = 1,
    QBLUETOOTHSOCKET_SOCKETERROR_REMOTEHOSTCLOSEDERROR = 2,
    QBLUETOOTHSOCKET_SOCKETERROR_HOSTNOTFOUNDERROR = 3,
    QBLUETOOTHSOCKET_SOCKETERROR_SERVICENOTFOUNDERROR = 4,
    QBLUETOOTHSOCKET_SOCKETERROR_NETWORKERROR = 5,
    QBLUETOOTHSOCKET_SOCKETERROR_UNSUPPORTEDPROTOCOLERROR = 6,
    QBLUETOOTHSOCKET_SOCKETERROR_OPERATIONERROR = 7,
    QBLUETOOTHSOCKET_SOCKETERROR_MISSINGPERMISSIONSERROR = 8
} QBluetoothSocket__SocketError;

#endif
