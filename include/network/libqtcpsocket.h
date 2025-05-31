#pragma once
#ifndef SRC_NETWORKQT6C_LIBQTCPSOCKET_H
#define SRC_NETWORKQT6C_LIBQTCPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractsocket.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qtcpsocket.html

/// q_tcpsocket_new constructs a new QTcpSocket object.
///
///
QTcpSocket* q_tcpsocket_new();

/// q_tcpsocket_new2 constructs a new QTcpSocket object.
///
/// ``` QObject* parent ```
QTcpSocket* q_tcpsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTcpSocket* self ```
const QMetaObject* q_tcpsocket_meta_object(void* self);

/// ``` QTcpSocket* self, const char* param1 ```
void* q_tcpsocket_metacast(void* self, const char* param1);

/// ``` QTcpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTcpSocket* self, int32_t (*slot)(QTcpSocket*, enum QMetaObject__Call, int, void*) ```
void q_tcpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTcpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tcpsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr ```
bool q_tcpsocket_bind(void* self, int64_t addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tcpsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tcpsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_tcpsocket_bind2(void* self, int64_t addr, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_tcpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QTcpSocket* self, int pauseMode ```
void q_tcpsocket_set_pause_mode(void* self, int64_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QTcpSocket* self, QHostAddress* address, unsigned short port ```
void q_tcpsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QTcpSocket* self ```
unsigned short q_tcpsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QTcpSocket* self ```
QHostAddress* q_tcpsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QTcpSocket* self ```
unsigned short q_tcpsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QTcpSocket* self ```
QHostAddress* q_tcpsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QTcpSocket* self, QNetworkProxy* networkProxy ```
void q_tcpsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QTcpSocket* self ```
QNetworkProxy* q_tcpsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QTcpSocket* self, const char* tag ```
void q_tcpsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_host_found(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_connected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_disconnected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_tcpsocket_state_changed(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_tcpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_tcpsocket_error_occurred(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_tcpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QTcpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_tcpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_tcpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QTcpSocket* self, unsigned short port ```
bool q_tcpsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QTcpSocket* self, unsigned short port, int mode ```
bool q_tcpsocket_bind22(void* self, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QTcpSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_tcpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QTcpSocket* self, bool enabled ```
void q_tcpsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QTcpSocket* self ```
char* q_tcpsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self ```
char* q_tcpsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data ```
long long q_tcpsocket_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data ```
long long q_tcpsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QTcpSocket* self, char c ```
void q_tcpsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QTcpSocket* self, char c ```
bool q_tcpsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QTcpSocket* self, char* c ```
bool q_tcpsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, int) ```
void q_tcpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QTcpSocket* self, long long bytes ```
void q_tcpsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, long long) ```
void q_tcpsocket_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QTcpSocket* self, int channel, long long bytes ```
void q_tcpsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_tcpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTcpSocket* self, char* name ```
void q_tcpsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTcpSocket* self, bool b ```
bool q_tcpsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTcpSocket* self ```
QThread* q_tcpsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTcpSocket* self, QThread* thread ```
void q_tcpsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpSocket* self, int interval ```
int32_t q_tcpsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTcpSocket* self, int id ```
void q_tcpsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTcpSocket* self ```
const libqt_list /* of QObject* */ q_tcpsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTcpSocket* self, QObject* parent ```
void q_tcpsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTcpSocket* self, QObject* filterObj ```
void q_tcpsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTcpSocket* self, QObject* obj ```
void q_tcpsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tcpsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tcpsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tcpsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tcpsocket_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTcpSocket* self, const char* name, QVariant* value ```
bool q_tcpsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTcpSocket* self, const char* name ```
QVariant* q_tcpsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTcpSocket* self ```
const char** q_tcpsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpSocket* self ```
QBindingStorage* q_tcpsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpSocket* self ```
const QBindingStorage* q_tcpsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self, void (*slot)(QObject*) ```
void q_tcpsocket_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTcpSocket* self, const char* classname ```
bool q_tcpsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tcpsocket_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self, QObject* param1 ```
void q_tcpsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self, void (*slot)(QObject*, QObject*) ```
void q_tcpsocket_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_resume(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_resume(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_tcpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_tcpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_tcpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_disconnect_from_host(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_disconnect_from_host(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_bytes_available(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_bytes_available(void* self, long long (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_bytes_to_write(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_bytes_to_write(void* self, long long (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long size ```
void q_tcpsocket_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long size ```
void q_tcpsocket_qbase_set_read_buffer_size(void* self, long long size);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
intptr_t q_tcpsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
intptr_t q_tcpsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t (*slot)() ```
void q_tcpsocket_on_socket_descriptor(void* self, intptr_t (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_tcpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_tcpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_tcpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_tcpsocket_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_tcpsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_tcpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_tcpsocket_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_tcpsocket_qbase_socket_option(void* self, int64_t option);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, QVariant* (*slot)(QTcpSocket*, enum QAbstractSocket__SocketOption) ```
void q_tcpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_close(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_close(void* self, void (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_connected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, char*, long long) ```
void q_tcpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, char*, long long) ```
void q_tcpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_qbase_skip_data(void* self, long long maxSize);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, const char*, long long) ```
void q_tcpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int mode ```
bool q_tcpsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int mode ```
bool q_tcpsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_open(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long pos ```
bool q_tcpsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long pos ```
bool q_tcpsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_at_end(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_at_end(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_reset(void* self, bool (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_can_read_line(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_can_read_line(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
bool q_tcpsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
bool q_tcpsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QEvent*) ```
void q_tcpsocket_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QObject* watched, QEvent* event ```
bool q_tcpsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QObject* watched, QEvent* event ```
bool q_tcpsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QObject*, QEvent*) ```
void q_tcpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QTimerEvent* event ```
void q_tcpsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QTimerEvent* event ```
void q_tcpsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QTimerEvent*) ```
void q_tcpsocket_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QChildEvent* event ```
void q_tcpsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QChildEvent* event ```
void q_tcpsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QChildEvent*) ```
void q_tcpsocket_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
void q_tcpsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
void q_tcpsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QEvent*) ```
void q_tcpsocket_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState state ```
void q_tcpsocket_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState state ```
void q_tcpsocket_qbase_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketState) ```
void q_tcpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpsocket_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketError) ```
void q_tcpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, unsigned short) ```
void q_tcpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QHostAddress*) ```
void q_tcpsocket_on_set_local_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, unsigned short) ```
void q_tcpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QHostAddress*) ```
void q_tcpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* name ```
void q_tcpsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* name ```
void q_tcpsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int openMode ```
void q_tcpsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int openMode ```
void q_tcpsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* errorString ```
void q_tcpsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* errorString ```
void q_tcpsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, QObject* (*slot)() ```
void q_tcpsocket_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, int32_t (*slot)() ```
void q_tcpsocket_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* signal ```
int32_t q_tcpsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* signal ```
int32_t q_tcpsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, int32_t (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
bool q_tcpsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
bool q_tcpsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTcpSocket* self, void (*slot)(QObject*, const char*) ```
void q_tcpsocket_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#dtor.QTcpSocket)
///
/// Delete this object from C++ memory.
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_delete(void* self);

#endif
