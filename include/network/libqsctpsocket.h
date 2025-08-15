#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSCTPSOCKET_H
#define SRC_NETWORKQT6C_LIBQSCTPSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsctpsocket.html

/// q_sctpsocket_new constructs a new QSctpSocket object.
///
QSctpSocket* q_sctpsocket_new();

/// q_sctpsocket_new2 constructs a new QSctpSocket object.
///
/// @param parent QObject*
QSctpSocket* q_sctpsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSctpSocket*
const QMetaObject* q_sctpsocket_meta_object(void* self);

/// @param self QSctpSocket*
/// @param param1 const char*
void* q_sctpsocket_metacast(void* self, const char* param1);

/// @param self QSctpSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sctpsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSctpSocket*
/// @param callback int32_t fn(QSctpSocket*, enum QMetaObject__Call, int, void*)
void q_sctpsocket_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSctpSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sctpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sctpsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#close)
///
/// @param self QSctpSocket*
void q_sctpsocket_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QSctpSocket*
/// @param callback void fn()
void q_sctpsocket_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#close)
///
/// Base class method implementation
///
/// @param self QSctpSocket*
void q_sctpsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
///
/// @param self QSctpSocket*
void q_sctpsocket_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
///
/// Allows for overriding the related default method
///
/// @param self QSctpSocket*
/// @param callback void fn()
void q_sctpsocket_on_disconnect_from_host(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
///
/// Base class method implementation
///
/// @param self QSctpSocket*
void q_sctpsocket_qbase_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#setMaximumChannelCount)
///
/// @param self QSctpSocket*
/// @param count int
void q_sctpsocket_set_maximum_channel_count(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#maximumChannelCount)
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_maximum_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#isInDatagramMode)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_in_datagram_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readDatagram)
///
/// @param self QSctpSocket*
QNetworkDatagram* q_sctpsocket_read_datagram(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#writeDatagram)
///
/// @param self QSctpSocket*
/// @param datagram QNetworkDatagram*
bool q_sctpsocket_write_datagram(void* self, void* datagram);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QSctpSocket*
/// @param callback long long fn(QSctpSocket*, char*, long long)
void q_sctpsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
///
/// Allows for overriding the related default method
///
/// @param self QSctpSocket*
/// @param callback long long fn(QSctpSocket*, char*, long long)
void q_sctpsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
///
/// Base class method implementation
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sctpsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sctpsocket_tr3(const char* s, const char* c, int n);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSctpSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
bool q_sctpsocket_bind2(void* self, int64_t addr, unsigned short port);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSctpSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sctpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// @param self QSctpSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
int64_t q_sctpsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// @param self QSctpSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
void q_sctpsocket_set_pause_mode(void* self, int64_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
void q_sctpsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// @param self QSctpSocket*
unsigned short q_sctpsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// @param self QSctpSocket*
QHostAddress* q_sctpsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// @param self QSctpSocket*
unsigned short q_sctpsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// @param self QSctpSocket*
QHostAddress* q_sctpsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
const char* q_sctpsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// @param self QSctpSocket*
long long q_sctpsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// @param self QSctpSocket*
void q_sctpsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// @param self QSctpSocket*
///
/// @return enum QAbstractSocket__SocketType
int64_t q_sctpsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// @param self QSctpSocket*
///
/// @return enum QAbstractSocket__SocketState
int64_t q_sctpsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// @param self QSctpSocket*
///
/// @return enum QAbstractSocket__SocketError
int64_t q_sctpsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// @param self QSctpSocket*
bool q_sctpsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// @param self QSctpSocket*
/// @param networkProxy QNetworkProxy*
void q_sctpsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// @param self QSctpSocket*
QNetworkProxy* q_sctpsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
const char* q_sctpsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// @param self QSctpSocket*
/// @param tag const char*
void q_sctpsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSctpSocket*
void q_sctpsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_host_found(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSctpSocket*
void q_sctpsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_connected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSctpSocket*
void q_sctpsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_disconnected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSctpSocket*
/// @param param1 enum QAbstractSocket__SocketState
void q_sctpsocket_state_changed(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, enum QAbstractSocket__SocketState)
void q_sctpsocket_on_state_changed(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSctpSocket*
/// @param param1 enum QAbstractSocket__SocketError
void q_sctpsocket_error_occurred(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, enum QAbstractSocket__SocketError)
void q_sctpsocket_on_error_occurred(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSctpSocket*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
void q_sctpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QNetworkProxy*, QAuthenticator*)
void q_sctpsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSctpSocket*
/// @param port unsigned short
bool q_sctpsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSctpSocket*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sctpsocket_bind22(void* self, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_sctpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QSctpSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_sctpsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QSctpSocket*
/// @param enabled bool
void q_sctpsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QSctpSocket*
/// @param channel int
void q_sctpsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QSctpSocket*
/// @param channel int
void q_sctpsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
/// @param maxlen long long
char* q_sctpsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
char* q_sctpsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
char* q_sctpsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QSctpSocket*
void q_sctpsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QSctpSocket*
void q_sctpsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QSctpSocket*
void q_sctpsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSctpSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sctpsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSctpSocket*
/// @param data const char*
long long q_sctpsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSctpSocket*
/// @param data const char*
long long q_sctpsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QSctpSocket*
/// @param data char*
/// @param maxlen long long
long long q_sctpsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
/// @param maxlen long long
char* q_sctpsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QSctpSocket*
/// @param maxSize long long
long long q_sctpsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QSctpSocket*
/// @param c char
void q_sctpsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QSctpSocket*
/// @param c char
bool q_sctpsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QSctpSocket*
/// @param c char*
bool q_sctpsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
const char* q_sctpsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSctpSocket*
void q_sctpsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSctpSocket*
/// @param channel int
void q_sctpsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, int)
void q_sctpsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSctpSocket*
/// @param bytes long long
void q_sctpsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, long long)
void q_sctpsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSctpSocket*
/// @param channel int
/// @param bytes long long
void q_sctpsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, int, long long)
void q_sctpsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSctpSocket*
void q_sctpsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSctpSocket*
void q_sctpsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
/// @param maxlen long long
char* q_sctpsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
const char* q_sctpsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSctpSocket*
/// @param name char*
void q_sctpsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSctpSocket*
bool q_sctpsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSctpSocket*
/// @param b bool
bool q_sctpsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSctpSocket*
QThread* q_sctpsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSctpSocket*
/// @param thread QThread*
bool q_sctpsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSctpSocket*
/// @param interval int
int32_t q_sctpsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSctpSocket*
/// @param id int
void q_sctpsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSctpSocket*
/// @param id enum Qt__TimerId
void q_sctpsocket_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSctpSocket*
libqt_list /* of QObject* */ q_sctpsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSctpSocket*
/// @param parent QObject*
void q_sctpsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSctpSocket*
/// @param filterObj QObject*
void q_sctpsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSctpSocket*
/// @param obj QObject*
void q_sctpsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sctpsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSctpSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sctpsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sctpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sctpsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSctpSocket*
void q_sctpsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSctpSocket*
void q_sctpsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSctpSocket*
/// @param name const char*
/// @param value QVariant*
bool q_sctpsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSctpSocket*
/// @param name const char*
QVariant* q_sctpsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSctpSocket*
const char** q_sctpsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSctpSocket*
QBindingStorage* q_sctpsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSctpSocket*
const QBindingStorage* q_sctpsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpSocket*
void q_sctpsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*)
void q_sctpsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSctpSocket*
QObject* q_sctpsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSctpSocket*
/// @param classname const char*
bool q_sctpsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSctpSocket*
void q_sctpsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSctpSocket*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sctpsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSctpSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sctpsocket_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sctpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSctpSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sctpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpSocket*
/// @param param1 QObject*
void q_sctpsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QObject*)
void q_sctpsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
void q_sctpsocket_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
void q_sctpsocket_qbase_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn()
void q_sctpsocket_on_resume(void* self, void (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sctpsocket_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sctpsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, QHostAddress*, unsigned short, flag of enum QAbstractSocket__BindFlag)
void q_sctpsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sctpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sctpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, const char*, unsigned short, flag of enum QIODeviceBase__OpenModeFlag, enum QAbstractSocket__NetworkLayerProtocol)
void q_sctpsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_qbase_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn()
void q_sctpsocket_on_bytes_available(void* self, long long (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_qbase_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn()
void q_sctpsocket_on_bytes_to_write(void* self, long long (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param size long long
void q_sctpsocket_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param size long long
void q_sctpsocket_qbase_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, long long)
void q_sctpsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
intptr_t q_sctpsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
intptr_t q_sctpsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback intptr_t fn()
void q_sctpsocket_on_socket_descriptor(void* self, intptr_t (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_sctpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_sctpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, intptr_t, enum QAbstractSocket__SocketState, flag of enum QIODeviceBase__OpenModeFlag)
void q_sctpsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
void q_sctpsocket_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
void q_sctpsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, enum QAbstractSocket__SocketOption, QVariant*)
void q_sctpsocket_on_set_socket_option(void* self, void (*callback)(void*, int64_t, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param option enum QAbstractSocket__SocketOption
QVariant* q_sctpsocket_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param option enum QAbstractSocket__SocketOption
QVariant* q_sctpsocket_qbase_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback QVariant* fn(QSctpSocket*, enum QAbstractSocket__SocketOption)
void q_sctpsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn()
void q_sctpsocket_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_qbase_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, int)
void q_sctpsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, int)
void q_sctpsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, int)
void q_sctpsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param msecs int
bool q_sctpsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, int)
void q_sctpsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param maxSize long long
long long q_sctpsocket_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param maxSize long long
long long q_sctpsocket_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn(QSctpSocket*, long long)
void q_sctpsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sctpsocket_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sctpsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn(QSctpSocket*, const char*, long long)
void q_sctpsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_sctpsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_sctpsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_sctpsocket_on_open(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn()
void q_sctpsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
long long q_sctpsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback long long fn()
void q_sctpsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param pos long long
bool q_sctpsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param pos long long
bool q_sctpsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, long long)
void q_sctpsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn()
void q_sctpsocket_on_at_end(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn()
void q_sctpsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
bool q_sctpsocket_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn()
void q_sctpsocket_on_can_read_line(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QEvent*
bool q_sctpsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QEvent*
bool q_sctpsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, QEvent*)
void q_sctpsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_sctpsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_sctpsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, QObject*, QEvent*)
void q_sctpsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QTimerEvent*
void q_sctpsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QTimerEvent*
void q_sctpsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QTimerEvent*)
void q_sctpsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QChildEvent*
void q_sctpsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QChildEvent*
void q_sctpsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QChildEvent*)
void q_sctpsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QEvent*
void q_sctpsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param event QEvent*
void q_sctpsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QEvent*)
void q_sctpsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
void q_sctpsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
void q_sctpsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QMetaMethod*)
void q_sctpsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
void q_sctpsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
void q_sctpsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QMetaMethod*)
void q_sctpsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param state enum QAbstractSocket__SocketState
void q_sctpsocket_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param state enum QAbstractSocket__SocketState
void q_sctpsocket_qbase_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, enum QAbstractSocket__SocketState)
void q_sctpsocket_on_set_socket_state(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param socketError enum QAbstractSocket__SocketError
void q_sctpsocket_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param socketError enum QAbstractSocket__SocketError
void q_sctpsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, enum QAbstractSocket__SocketError)
void q_sctpsocket_on_set_socket_error(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param port unsigned short
void q_sctpsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param port unsigned short
void q_sctpsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, unsigned short)
void q_sctpsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
void q_sctpsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
void q_sctpsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QHostAddress*)
void q_sctpsocket_on_set_local_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param port unsigned short
void q_sctpsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param port unsigned short
void q_sctpsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, unsigned short)
void q_sctpsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
void q_sctpsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param address QHostAddress*
void q_sctpsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, QHostAddress*)
void q_sctpsocket_on_set_peer_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param name const char*
void q_sctpsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param name const char*
void q_sctpsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, const char*)
void q_sctpsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_sctpsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_sctpsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_sctpsocket_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param errorString const char*
void q_sctpsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param errorString const char*
void q_sctpsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, const char*)
void q_sctpsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
QObject* q_sctpsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
QObject* q_sctpsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback QObject* fn()
void q_sctpsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
int32_t q_sctpsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback int32_t fn()
void q_sctpsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal const char*
int32_t q_sctpsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal const char*
int32_t q_sctpsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback int32_t fn(QSctpSocket*, const char*)
void q_sctpsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
bool q_sctpsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param signal QMetaMethod*
bool q_sctpsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSctpSocket*
/// @param callback bool fn(QSctpSocket*, QMetaMethod*)
void q_sctpsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSctpSocket*
/// @param callback void fn(QSctpSocket*, const char*)
void q_sctpsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#dtor.QSctpSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QSctpSocket*
void q_sctpsocket_delete(void* self);

#endif
