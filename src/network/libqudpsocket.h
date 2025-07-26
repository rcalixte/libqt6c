#pragma once
#ifndef SRC_NETWORKQT6C_LIBQUDPSOCKET_H
#define SRC_NETWORKQT6C_LIBQUDPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qudpsocket.html

/// q_udpsocket_new constructs a new QUdpSocket object.
///
///
QUdpSocket* q_udpsocket_new();

/// q_udpsocket_new2 constructs a new QUdpSocket object.
///
/// ``` QObject* parent ```
QUdpSocket* q_udpsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUdpSocket* self ```
const QMetaObject* q_udpsocket_meta_object(void* self);

/// ``` QUdpSocket* self, const char* param1 ```
void* q_udpsocket_metacast(void* self, const char* param1);

/// ``` QUdpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_udpsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QUdpSocket* self, int32_t (*slot)(QUdpSocket*, enum QMetaObject__Call, int, void*) ```
void q_udpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QUdpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_udpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_udpsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr ```
bool q_udpsocket_bind(void* self, int64_t addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress ```
bool q_udpsocket_join_multicast_group(void* self, void* groupAddress);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface ```
bool q_udpsocket_join_multicast_group2(void* self, void* groupAddress, void* iface);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress ```
bool q_udpsocket_leave_multicast_group(void* self, void* groupAddress);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface ```
bool q_udpsocket_leave_multicast_group2(void* self, void* groupAddress, void* iface);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#multicastInterface)
///
/// ``` QUdpSocket* self ```
QNetworkInterface* q_udpsocket_multicast_interface(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#setMulticastInterface)
///
/// ``` QUdpSocket* self, QNetworkInterface* iface ```
void q_udpsocket_set_multicast_interface(void* self, void* iface);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#hasPendingDatagrams)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_has_pending_datagrams(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#pendingDatagramSize)
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_pending_datagram_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// ``` QUdpSocket* self ```
QNetworkDatagram* q_udpsocket_receive_datagram(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_datagram(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, QNetworkDatagram* datagram ```
long long q_udpsocket_write_datagram(void* self, void* datagram);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, const char* data, long long lenVal, QHostAddress* host, unsigned short port ```
long long q_udpsocket_write_datagram2(void* self, const char* data, long long lenVal, void* host, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, const char* datagram, QHostAddress* host, unsigned short port ```
long long q_udpsocket_write_datagram3(void* self, const char* datagram, void* host, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_udpsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_udpsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_udpsocket_bind2(void* self, int64_t addr, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_udpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// ``` QUdpSocket* self, long long maxSize ```
QNetworkDatagram* q_udpsocket_receive_datagram1(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen, QHostAddress* host ```
long long q_udpsocket_read_datagram3(void* self, char* data, long long maxlen, void* host);

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, unsigned short* port ```
long long q_udpsocket_read_datagram4(void* self, char* data, long long maxlen, void* host, unsigned short* port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QUdpSocket* self, int pauseMode ```
void q_udpsocket_set_pause_mode(void* self, int64_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QUdpSocket* self, QHostAddress* address, unsigned short port ```
void q_udpsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QUdpSocket* self ```
unsigned short q_udpsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QUdpSocket* self ```
QHostAddress* q_udpsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QUdpSocket* self ```
unsigned short q_udpsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QUdpSocket* self ```
QHostAddress* q_udpsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QUdpSocket* self, QNetworkProxy* networkProxy ```
void q_udpsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QUdpSocket* self ```
QNetworkProxy* q_udpsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QUdpSocket* self, const char* tag ```
void q_udpsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_host_found(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_connected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_disconnected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_udpsocket_state_changed(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketState) ```
void q_udpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_udpsocket_error_occurred(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketError) ```
void q_udpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QUdpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_udpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_udpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QUdpSocket* self, unsigned short port ```
bool q_udpsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QUdpSocket* self, unsigned short port, int mode ```
bool q_udpsocket_bind22(void* self, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QUdpSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_udpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QUdpSocket* self, bool enabled ```
void q_udpsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QUdpSocket* self ```
char* q_udpsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self ```
char* q_udpsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data ```
long long q_udpsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data ```
long long q_udpsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QUdpSocket* self, char c ```
void q_udpsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QUdpSocket* self, char c ```
bool q_udpsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QUdpSocket* self, char* c ```
bool q_udpsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QUdpSocket* self, long long bytes ```
void q_udpsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QUdpSocket* self, int channel, long long bytes ```
void q_udpsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, int, long long) ```
void q_udpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUdpSocket* self, char* name ```
void q_udpsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUdpSocket* self, bool b ```
bool q_udpsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUdpSocket* self ```
QThread* q_udpsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUdpSocket* self, QThread* thread ```
bool q_udpsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUdpSocket* self, int interval ```
int32_t q_udpsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUdpSocket* self, int id ```
void q_udpsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUdpSocket* self, enum Qt__TimerId id ```
void q_udpsocket_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUdpSocket* self ```
libqt_list /* of QObject* */ q_udpsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUdpSocket* self, QObject* parent ```
void q_udpsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUdpSocket* self, QObject* filterObj ```
void q_udpsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUdpSocket* self, QObject* obj ```
void q_udpsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_udpsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUdpSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_udpsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_udpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_udpsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUdpSocket* self, const char* name, QVariant* value ```
bool q_udpsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUdpSocket* self, const char* name ```
QVariant* q_udpsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUdpSocket* self ```
const char** q_udpsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUdpSocket* self ```
QBindingStorage* q_udpsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUdpSocket* self ```
const QBindingStorage* q_udpsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*) ```
void q_udpsocket_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUdpSocket* self, const char* classname ```
bool q_udpsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUdpSocket* self, QThread* thread, Disambiguated_t* param2 ```
bool q_udpsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUdpSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_udpsocket_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_udpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUdpSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_udpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self, QObject* param1 ```
void q_udpsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QObject*) ```
void q_udpsocket_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_resume(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_udpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_udpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_udpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_disconnect_from_host(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long size ```
void q_udpsocket_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long size ```
void q_udpsocket_qbase_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
intptr_t q_udpsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
intptr_t q_udpsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t (*slot)() ```
void q_udpsocket_on_socket_descriptor(void* self, intptr_t (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_udpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_udpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_udpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_udpsocket_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_udpsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_udpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_udpsocket_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_udpsocket_qbase_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, QVariant* (*slot)(QUdpSocket*, enum QAbstractSocket__SocketOption) ```
void q_udpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_close(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, char*, long long) ```
void q_udpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, char*, long long) ```
void q_udpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, const char*, long long) ```
void q_udpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int mode ```
bool q_udpsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int mode ```
bool q_udpsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_open(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long pos ```
bool q_udpsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long pos ```
bool q_udpsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
bool q_udpsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
bool q_udpsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QEvent*) ```
void q_udpsocket_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QObject* watched, QEvent* event ```
bool q_udpsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QObject* watched, QEvent* event ```
bool q_udpsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QObject*, QEvent*) ```
void q_udpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QTimerEvent* event ```
void q_udpsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QTimerEvent* event ```
void q_udpsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QTimerEvent*) ```
void q_udpsocket_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QChildEvent* event ```
void q_udpsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QChildEvent* event ```
void q_udpsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QChildEvent*) ```
void q_udpsocket_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
void q_udpsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
void q_udpsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QEvent*) ```
void q_udpsocket_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState state ```
void q_udpsocket_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState state ```
void q_udpsocket_qbase_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketState) ```
void q_udpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_udpsocket_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_udpsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketError) ```
void q_udpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, unsigned short) ```
void q_udpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QHostAddress*) ```
void q_udpsocket_on_set_local_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, unsigned short) ```
void q_udpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QHostAddress*) ```
void q_udpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* name ```
void q_udpsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* name ```
void q_udpsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int openMode ```
void q_udpsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int openMode ```
void q_udpsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* errorString ```
void q_udpsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* errorString ```
void q_udpsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, QObject* (*slot)() ```
void q_udpsocket_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, int32_t (*slot)() ```
void q_udpsocket_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* signal ```
int32_t q_udpsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* signal ```
int32_t q_udpsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, int32_t (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
bool q_udpsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
bool q_udpsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#dtor.QUdpSocket)
///
/// Delete this object from C++ memory.
///
/// ``` QUdpSocket* self ```
void q_udpsocket_delete(void* self);

#endif
