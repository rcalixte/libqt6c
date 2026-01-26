#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQUDPSOCKET_H
#define SRC_NETWORK_QT6C_LIBQUDPSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html)

/// q_udpsocket_new constructs a new QUdpSocket object.
///
QUdpSocket* q_udpsocket_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html)

/// q_udpsocket_new2 constructs a new QUdpSocket object.
///
/// @param parent QObject*
///
QUdpSocket* q_udpsocket_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QUdpSocket*
///
const QMetaObject* q_udpsocket_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QUdpSocket*
/// @param callback const QMetaObject* func()
///
void q_udpsocket_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QUdpSocket*
///
const QMetaObject* q_udpsocket_qbase_meta_object(void* self);

/// @param self QUdpSocket*
/// @param param1 const char*
///
void* q_udpsocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QUdpSocket*
/// @param callback void* func(QUdpSocket* self, const char* param1)
///
void q_udpsocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QUdpSocket*
/// @param param1 const char*
///
void* q_udpsocket_qbase_metacast(void* self, const char* param1);

/// @param self QUdpSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_udpsocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QUdpSocket*
/// @param callback int32_t func(QUdpSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_udpsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QUdpSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_udpsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_udpsocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// @param self QUdpSocket*
/// @param addr enum QHostAddress__SpecialAddress
///
bool q_udpsocket_bind(void* self, int32_t addr);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// @param self QUdpSocket*
/// @param groupAddress QHostAddress*
///
bool q_udpsocket_join_multicast_group(void* self, void* groupAddress);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// @param self QUdpSocket*
/// @param groupAddress QHostAddress*
/// @param iface QNetworkInterface*
///
bool q_udpsocket_join_multicast_group2(void* self, void* groupAddress, void* iface);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// @param self QUdpSocket*
/// @param groupAddress QHostAddress*
///
bool q_udpsocket_leave_multicast_group(void* self, void* groupAddress);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// @param self QUdpSocket*
/// @param groupAddress QHostAddress*
/// @param iface QNetworkInterface*
///
bool q_udpsocket_leave_multicast_group2(void* self, void* groupAddress, void* iface);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#multicastInterface)
///
/// @param self QUdpSocket*
///
QNetworkInterface* q_udpsocket_multicast_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#setMulticastInterface)
///
/// @param self QUdpSocket*
/// @param iface QNetworkInterface*
///
void q_udpsocket_set_multicast_interface(void* self, void* iface);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#hasPendingDatagrams)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_has_pending_datagrams(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#pendingDatagramSize)
///
/// @param self QUdpSocket*
///
long long q_udpsocket_pending_datagram_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// @param self QUdpSocket*
///
QNetworkDatagram* q_udpsocket_receive_datagram(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_read_datagram(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// @param self QUdpSocket*
/// @param datagram QNetworkDatagram*
///
long long q_udpsocket_write_datagram(void* self, void* datagram);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// @param self QUdpSocket*
/// @param data const char*
/// @param lenVal long long
/// @param host QHostAddress*
/// @param port unsigned short
///
long long q_udpsocket_write_datagram2(void* self, const char* data, long long lenVal, void* host, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// @param self QUdpSocket*
/// @param datagram const char*
/// @param host QHostAddress*
/// @param port unsigned short
///
long long q_udpsocket_write_datagram3(void* self, const char* datagram, void* host, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_udpsocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_udpsocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// @param self QUdpSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
///
bool q_udpsocket_bind2(void* self, int32_t addr, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// @param self QUdpSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_udpsocket_bind3(void* self, int32_t addr, unsigned short port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// @param self QUdpSocket*
/// @param maxSize long long
///
QNetworkDatagram* q_udpsocket_receive_datagram1(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
/// @param host QHostAddress*
///
long long q_udpsocket_read_datagram3(void* self, char* data, long long maxlen, void* host);

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
/// @param host QHostAddress*
/// @param port unsigned short*
///
long long q_udpsocket_read_datagram4(void* self, char* data, long long maxlen, void* host, unsigned short* port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// @param self QUdpSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
///
int32_t q_udpsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// @param self QUdpSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
///
void q_udpsocket_set_pause_mode(void* self, int32_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
///
void q_udpsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// @param self QUdpSocket*
///
unsigned short q_udpsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// @param self QUdpSocket*
///
QHostAddress* q_udpsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// @param self QUdpSocket*
///
unsigned short q_udpsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// @param self QUdpSocket*
///
QHostAddress* q_udpsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUdpSocket*
///
const char* q_udpsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// @param self QUdpSocket*
///
long long q_udpsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// @param self QUdpSocket*
///
void q_udpsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// @param self QUdpSocket*
///
/// @return enum QAbstractSocket__SocketType
///
int32_t q_udpsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// @param self QUdpSocket*
///
/// @return enum QAbstractSocket__SocketState
///
int32_t q_udpsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// @param self QUdpSocket*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_udpsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// @param self QUdpSocket*
/// @param networkProxy QNetworkProxy*
///
void q_udpsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// @param self QUdpSocket*
///
QNetworkProxy* q_udpsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUdpSocket*
///
const char* q_udpsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// @param self QUdpSocket*
/// @param tag const char*
///
void q_udpsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QUdpSocket*
///
void q_udpsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_host_found(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QUdpSocket*
///
void q_udpsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_connected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QUdpSocket*
///
void q_udpsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_disconnected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QUdpSocket*
/// @param param1 enum QAbstractSocket__SocketState
///
void q_udpsocket_state_changed(void* self, int32_t param1);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, enum QAbstractSocket__SocketState param1)
///
void q_udpsocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QUdpSocket*
/// @param param1 enum QAbstractSocket__SocketError
///
void q_udpsocket_error_occurred(void* self, int32_t param1);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, enum QAbstractSocket__SocketError param1)
///
void q_udpsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QUdpSocket*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
///
void q_udpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator)
///
void q_udpsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QUdpSocket*
/// @param port unsigned short
///
bool q_udpsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QUdpSocket*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_udpsocket_bind22(void* self, unsigned short port, int32_t mode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_udpsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QUdpSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_udpsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QUdpSocket*
/// @param enabled bool
///
void q_udpsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QUdpSocket*
/// @param channel int
///
void q_udpsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QUdpSocket*
/// @param channel int
///
void q_udpsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
/// @param maxlen long long
///
char* q_udpsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
///
char* q_udpsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
///
char* q_udpsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QUdpSocket*
///
void q_udpsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QUdpSocket*
///
void q_udpsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QUdpSocket*
///
void q_udpsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QUdpSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_udpsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QUdpSocket*
/// @param data const char*
///
long long q_udpsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QUdpSocket*
/// @param data const char*
///
long long q_udpsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
/// @param maxlen long long
///
char* q_udpsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QUdpSocket*
/// @param maxSize long long
///
long long q_udpsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QUdpSocket*
/// @param c char
///
void q_udpsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QUdpSocket*
/// @param c char
///
bool q_udpsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QUdpSocket*
/// @param c char*
///
bool q_udpsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUdpSocket*
///
const char* q_udpsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QUdpSocket*
///
void q_udpsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QUdpSocket*
/// @param channel int
///
void q_udpsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, int channel)
///
void q_udpsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QUdpSocket*
/// @param bytes long long
///
void q_udpsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, long long bytes)
///
void q_udpsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QUdpSocket*
/// @param channel int
/// @param bytes long long
///
void q_udpsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, int channel, long long bytes)
///
void q_udpsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QUdpSocket*
///
void q_udpsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QUdpSocket*
///
void q_udpsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
/// @param maxlen long long
///
char* q_udpsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUdpSocket*
///
const char* q_udpsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUdpSocket*
/// @param name char*
///
void q_udpsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QUdpSocket*
///
bool q_udpsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QUdpSocket*
/// @param b bool
///
bool q_udpsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QUdpSocket*
///
QThread* q_udpsocket_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUdpSocket*
/// @param thread QThread*
///
bool q_udpsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUdpSocket*
/// @param interval int
///
int32_t q_udpsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUdpSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_udpsocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUdpSocket*
/// @param id int
///
void q_udpsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUdpSocket*
/// @param id enum Qt__TimerId
///
void q_udpsocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QUdpSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_udpsocket_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QUdpSocket*
/// @param parent QObject*
///
void q_udpsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QUdpSocket*
/// @param filterObj QObject*
///
void q_udpsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QUdpSocket*
/// @param obj QObject*
///
void q_udpsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_udpsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUdpSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_udpsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_udpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_udpsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QUdpSocket*
///
void q_udpsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QUdpSocket*
///
void q_udpsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUdpSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_udpsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QUdpSocket*
/// @param name const char*
///
QVariant* q_udpsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUdpSocket*
///
const char** q_udpsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUdpSocket*
///
QBindingStorage* q_udpsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUdpSocket*
///
const QBindingStorage* q_udpsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUdpSocket*
///
void q_udpsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self)
///
void q_udpsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QUdpSocket*
///
QObject* q_udpsocket_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QUdpSocket*
/// @param classname const char*
///
bool q_udpsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUdpSocket*
///
void q_udpsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUdpSocket*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_udpsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUdpSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_udpsocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUdpSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_udpsocket_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_udpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUdpSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_udpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUdpSocket*
/// @param param1 QObject*
///
void q_udpsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QObject* param1)
///
void q_udpsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_qbase_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func()
///
void q_udpsocket_on_resume(void* self, void (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_udpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_udpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, const char* hostName, unsigned short port, flag of enum QIODeviceBase__OpenModeFlag mode, enum QAbstractSocket__NetworkLayerProtocol protocol)
///
void q_udpsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_qbase_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func()
///
void q_udpsocket_on_disconnect_from_host(void* self, void (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_qbase_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func()
///
void q_udpsocket_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_qbase_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func()
///
void q_udpsocket_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param size long long
///
void q_udpsocket_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param size long long
///
void q_udpsocket_qbase_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, long long size)
///
void q_udpsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
intptr_t q_udpsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
intptr_t q_udpsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback intptr_t func()
///
void q_udpsocket_on_socket_descriptor(void* self, intptr_t (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_udpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_udpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_udpsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_udpsocket_set_socket_option(void* self, int32_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_udpsocket_qbase_set_socket_option(void* self, int32_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value)
///
void q_udpsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_udpsocket_socket_option(void* self, int32_t option);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_udpsocket_qbase_socket_option(void* self, int32_t option);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback QVariant* func(QUdpSocket* self, enum QAbstractSocket__SocketOption option)
///
void q_udpsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
void q_udpsocket_qbase_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func()
///
void q_udpsocket_on_close(void* self, void (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func()
///
void q_udpsocket_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_qbase_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, int msecs)
///
void q_udpsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, int msecs)
///
void q_udpsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, int msecs)
///
void q_udpsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param msecs int
///
bool q_udpsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, int msecs)
///
void q_udpsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func(QUdpSocket* self, char* data, long long maxlen)
///
void q_udpsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_udpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func(QUdpSocket* self, char* data, long long maxlen)
///
void q_udpsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param maxSize long long
///
long long q_udpsocket_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param maxSize long long
///
long long q_udpsocket_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func(QUdpSocket* self, long long maxSize)
///
void q_udpsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_udpsocket_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_udpsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func(QUdpSocket* self, const char* data, long long lenVal)
///
void q_udpsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_udpsocket_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_udpsocket_qbase_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_udpsocket_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func()
///
void q_udpsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
long long q_udpsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback long long func()
///
void q_udpsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param pos long long
///
bool q_udpsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param pos long long
///
bool q_udpsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, long long pos)
///
void q_udpsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func()
///
void q_udpsocket_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func()
///
void q_udpsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
bool q_udpsocket_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func()
///
void q_udpsocket_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QEvent*
///
bool q_udpsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QEvent*
///
bool q_udpsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, QEvent* event)
///
void q_udpsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_udpsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_udpsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, QObject* watched, QEvent* event)
///
void q_udpsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QTimerEvent*
///
void q_udpsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QTimerEvent*
///
void q_udpsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QTimerEvent* event)
///
void q_udpsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QChildEvent*
///
void q_udpsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QChildEvent*
///
void q_udpsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QChildEvent* event)
///
void q_udpsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QEvent*
///
void q_udpsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param event QEvent*
///
void q_udpsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QEvent* event)
///
void q_udpsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
void q_udpsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
void q_udpsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QMetaMethod* signal)
///
void q_udpsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
void q_udpsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
void q_udpsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QMetaMethod* signal)
///
void q_udpsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_udpsocket_set_socket_state(void* self, int32_t state);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_udpsocket_qbase_set_socket_state(void* self, int32_t state);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, enum QAbstractSocket__SocketState state)
///
void q_udpsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_udpsocket_set_socket_error(void* self, int32_t socketError);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_udpsocket_qbase_set_socket_error(void* self, int32_t socketError);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, enum QAbstractSocket__SocketError socketError)
///
void q_udpsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param port unsigned short
///
void q_udpsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param port unsigned short
///
void q_udpsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, unsigned short port)
///
void q_udpsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
///
void q_udpsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
///
void q_udpsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QHostAddress* address)
///
void q_udpsocket_on_set_local_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param port unsigned short
///
void q_udpsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param port unsigned short
///
void q_udpsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, unsigned short port)
///
void q_udpsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
///
void q_udpsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param address QHostAddress*
///
void q_udpsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, QHostAddress* address)
///
void q_udpsocket_on_set_peer_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param name const char*
///
void q_udpsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param name const char*
///
void q_udpsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, const char* name)
///
void q_udpsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_udpsocket_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_udpsocket_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_udpsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param errorString const char*
///
void q_udpsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param errorString const char*
///
void q_udpsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, const char* errorString)
///
void q_udpsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
QObject* q_udpsocket_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
QObject* q_udpsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback QObject* func()
///
void q_udpsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
///
int32_t q_udpsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback int32_t func()
///
void q_udpsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal const char*
///
int32_t q_udpsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal const char*
///
int32_t q_udpsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback int32_t func(QUdpSocket* self, const char* signal)
///
void q_udpsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
bool q_udpsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param signal QMetaMethod*
///
bool q_udpsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUdpSocket*
/// @param callback bool func(QUdpSocket* self, QMetaMethod* signal)
///
void q_udpsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QUdpSocket*
/// @param callback void func(QUdpSocket* self, const char* objectName)
///
void q_udpsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#dtor.QUdpSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QUdpSocket*
///
void q_udpsocket_delete(void* self);

#endif
