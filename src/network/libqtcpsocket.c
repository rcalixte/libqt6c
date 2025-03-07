#include "libqabstractsocket.hpp"
#include "../libqanystringview.hpp"
#include "libqauthenticator.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqtcpsocket.hpp"
#include "libqtcpsocket.h"

/// https://doc.qt.io/qt-6/qtcpsocket.html

/// q_tcpsocket_new constructs a new QTcpSocket object.
///
///
QTcpSocket* q_tcpsocket_new() {
    return QTcpSocket_new();
}

/// q_tcpsocket_new2 constructs a new QTcpSocket object.
///
/// ``` QObject* parent ```
QTcpSocket* q_tcpsocket_new2(void* parent) {
    return QTcpSocket_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTcpSocket* self ```
QMetaObject* q_tcpsocket_meta_object(void* self) {
    return QTcpSocket_MetaObject((QTcpSocket*)self);
}

/// ``` QTcpSocket* self, const char* param1 ```
void* q_tcpsocket_metacast(void* self, const char* param1) {
    return QTcpSocket_Metacast((QTcpSocket*)self, param1);
}

/// ``` QTcpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpSocket_Metacall((QTcpSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTcpSocket* self, int32_t (*slot)(QTcpSocket*, enum QMetaObject__Call, int, void*) ```
void q_tcpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTcpSocket_OnMetacall((QTcpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTcpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tcpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpSocket_QBaseMetacall((QTcpSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tcpsocket_tr(const char* s) {
    libqt_string _str = QTcpSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr ```
bool q_tcpsocket_bind(void* self, int64_t addr) {
    return QTcpSocket_Bind((QTcpSocket*)self, addr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tcpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QTcpSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tcpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTcpSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_tcpsocket_bind2(void* self, int64_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QTcpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_tcpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QTcpSocket* self, int pauseMode ```
void q_tcpsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QTcpSocket* self, QHostAddress* address, unsigned short port ```
void q_tcpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QTcpSocket* self ```
unsigned short q_tcpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QTcpSocket* self ```
QHostAddress* q_tcpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QTcpSocket* self ```
unsigned short q_tcpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QTcpSocket* self ```
QHostAddress* q_tcpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QTcpSocket* self, QNetworkProxy* networkProxy ```
void q_tcpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QTcpSocket* self ```
QNetworkProxy* q_tcpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QTcpSocket* self, const char* tag ```
void q_tcpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_host_found(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_connected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_tcpsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_tcpsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_tcpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_tcpsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_tcpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QTcpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_tcpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// Inherited from QAbstractSocket
///
/// ``` QTcpSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_tcpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QTcpSocket* self, unsigned short port ```
bool q_tcpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QTcpSocket* self, unsigned short port, int mode ```
bool q_tcpsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QTcpSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_tcpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QTcpSocket* self ```
int64_t q_tcpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QTcpSocket* self, bool enabled ```
void q_tcpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QTcpSocket* self ```
char* q_tcpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self ```
char* q_tcpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data ```
long long q_tcpsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QTcpSocket* self, const char* data ```
long long q_tcpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QTcpSocket* self, char c ```
void q_tcpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QTcpSocket* self, char c ```
bool q_tcpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QTcpSocket* self, char* c ```
bool q_tcpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QTcpSocket* self, int channel ```
void q_tcpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, int) ```
void q_tcpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QTcpSocket* self, long long bytes ```
void q_tcpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, long long) ```
void q_tcpsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QTcpSocket* self, int channel, long long bytes ```
void q_tcpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_tcpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QTcpSocket* self, void (*slot)(QIODevice*) ```
void q_tcpsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QTcpSocket* self, long long maxlen ```
char* q_tcpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTcpSocket* self ```
const char* q_tcpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTcpSocket* self, const char* name ```
void q_tcpsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTcpSocket* self, bool b ```
bool q_tcpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTcpSocket* self ```
QThread* q_tcpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTcpSocket* self, QThread* thread ```
void q_tcpsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpSocket* self, int interval ```
int32_t q_tcpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTcpSocket* self, int id ```
void q_tcpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTcpSocket* self ```
libqt_list /* of QObject* */ q_tcpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTcpSocket* self, QObject* parent ```
void q_tcpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTcpSocket* self, QObject* filterObj ```
void q_tcpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTcpSocket* self, QObject* obj ```
void q_tcpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tcpsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tcpsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tcpsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tcpsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTcpSocket* self, const char* name, QVariant* value ```
bool q_tcpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTcpSocket* self, const char* name ```
QVariant* q_tcpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTcpSocket* self ```
const char** q_tcpsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpSocket* self ```
QBindingStorage* q_tcpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTcpSocket* self ```
QBindingStorage* q_tcpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTcpSocket* self, void (*slot)(QObject*) ```
void q_tcpsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTcpSocket* self, const char* classname ```
bool q_tcpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTcpSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tcpsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTcpSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tcpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTcpSocket* self, QObject* param1 ```
void q_tcpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTcpSocket* self, void (*slot)(QObject*, QObject*) ```
void q_tcpsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_resume(void* self) {
    QTcpSocket_Resume((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_resume(void* self) {
    QTcpSocket_QBaseResume((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_resume(void* self, void (*slot)()) {
    QTcpSocket_OnResume((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_tcpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QTcpSocket_ConnectToHost((QTcpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_tcpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QTcpSocket_QBaseConnectToHost((QTcpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_tcpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QTcpSocket_OnConnectToHost((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_disconnect_from_host(void* self) {
    QTcpSocket_DisconnectFromHost((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_disconnect_from_host(void* self) {
    QTcpSocket_QBaseDisconnectFromHost((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_disconnect_from_host(void* self, void (*slot)()) {
    QTcpSocket_OnDisconnectFromHost((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_bytes_available(void* self) {
    return QTcpSocket_BytesAvailable((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_bytes_available(void* self) {
    return QTcpSocket_QBaseBytesAvailable((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_bytes_available(void* self, long long (*slot)()) {
    QTcpSocket_OnBytesAvailable((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_bytes_to_write(void* self) {
    return QTcpSocket_BytesToWrite((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_bytes_to_write(void* self) {
    return QTcpSocket_QBaseBytesToWrite((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QTcpSocket_OnBytesToWrite((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long size ```
void q_tcpsocket_set_read_buffer_size(void* self, long long size) {
    QTcpSocket_SetReadBufferSize((QTcpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long size ```
void q_tcpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QTcpSocket_QBaseSetReadBufferSize((QTcpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long)) {
    QTcpSocket_OnSetReadBufferSize((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
intptr_t q_tcpsocket_socket_descriptor(void* self) {
    return QTcpSocket_SocketDescriptor((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
intptr_t q_tcpsocket_qbase_socket_descriptor(void* self) {
    return QTcpSocket_QBaseSocketDescriptor((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t (*slot)() ```
void q_tcpsocket_on_socket_descriptor(void* self, intptr_t (*slot)()) {
    QTcpSocket_OnSocketDescriptor((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_tcpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QTcpSocket_SetSocketDescriptor((QTcpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_tcpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QTcpSocket_QBaseSetSocketDescriptor((QTcpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_tcpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t)) {
    QTcpSocket_OnSetSocketDescriptor((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_tcpsocket_set_socket_option(void* self, int64_t option, void* value) {
    QTcpSocket_SetSocketOption((QTcpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_tcpsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QTcpSocket_QBaseSetSocketOption((QTcpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_tcpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QTcpSocket_OnSetSocketOption((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_tcpsocket_socket_option(void* self, int64_t option) {
    return QTcpSocket_SocketOption((QTcpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_tcpsocket_qbase_socket_option(void* self, int64_t option) {
    return QTcpSocket_QBaseSocketOption((QTcpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, QVariant* (*slot)(QTcpSocket*, enum QAbstractSocket__SocketOption) ```
void q_tcpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTcpSocket_OnSocketOption((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_close(void* self) {
    QTcpSocket_Close((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_qbase_close(void* self) {
    QTcpSocket_QBaseClose((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)() ```
void q_tcpsocket_on_close(void* self, void (*slot)()) {
    QTcpSocket_OnClose((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_is_sequential(void* self) {
    return QTcpSocket_IsSequential((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_is_sequential(void* self) {
    return QTcpSocket_QBaseIsSequential((QTcpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_is_sequential(void* self, bool (*slot)()) {
    QTcpSocket_OnIsSequential((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_connected(void* self, int msecs) {
    return QTcpSocket_WaitForConnected((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForConnected((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int)) {
    QTcpSocket_OnWaitForConnected((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_ready_read(void* self, int msecs) {
    return QTcpSocket_WaitForReadyRead((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForReadyRead((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QTcpSocket_OnWaitForReadyRead((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QTcpSocket_WaitForBytesWritten((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForBytesWritten((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QTcpSocket_OnWaitForBytesWritten((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_wait_for_disconnected(void* self, int msecs) {
    return QTcpSocket_WaitForDisconnected((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int msecs ```
bool q_tcpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForDisconnected((QTcpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int)) {
    QTcpSocket_OnWaitForDisconnected((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_ReadData((QTcpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_QBaseReadData((QTcpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, char*, long long) ```
void q_tcpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QTcpSocket_OnReadData((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_ReadLineData((QTcpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, char* data, long long maxlen ```
long long q_tcpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_QBaseReadLineData((QTcpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, char*, long long) ```
void q_tcpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QTcpSocket_OnReadLineData((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_skip_data(void* self, long long maxSize) {
    return QTcpSocket_SkipData((QTcpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long maxSize ```
long long q_tcpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QTcpSocket_QBaseSkipData((QTcpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QTcpSocket_OnSkipData((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QTcpSocket_WriteData((QTcpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* data, long long lenVal ```
long long q_tcpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QTcpSocket_QBaseWriteData((QTcpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)(QTcpSocket*, const char*, long long) ```
void q_tcpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QTcpSocket_OnWriteData((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int mode ```
bool q_tcpsocket_open(void* self, int64_t mode) {
    return QTcpSocket_Open((QTcpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int mode ```
bool q_tcpsocket_qbase_open(void* self, int64_t mode) {
    return QTcpSocket_QBaseOpen((QTcpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QTcpSocket_OnOpen((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_pos(void* self) {
    return QTcpSocket_Pos((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_pos(void* self) {
    return QTcpSocket_QBasePos((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_pos(void* self, long long (*slot)()) {
    QTcpSocket_OnPos((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_size(void* self) {
    return QTcpSocket_Size((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
long long q_tcpsocket_qbase_size(void* self) {
    return QTcpSocket_QBaseSize((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, long long (*slot)() ```
void q_tcpsocket_on_size(void* self, long long (*slot)()) {
    QTcpSocket_OnSize((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, long long pos ```
bool q_tcpsocket_seek(void* self, long long pos) {
    return QTcpSocket_Seek((QTcpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, long long pos ```
bool q_tcpsocket_qbase_seek(void* self, long long pos) {
    return QTcpSocket_QBaseSeek((QTcpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, long long) ```
void q_tcpsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QTcpSocket_OnSeek((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_at_end(void* self) {
    return QTcpSocket_AtEnd((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_at_end(void* self) {
    return QTcpSocket_QBaseAtEnd((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_at_end(void* self, bool (*slot)()) {
    QTcpSocket_OnAtEnd((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_reset(void* self) {
    return QTcpSocket_Reset((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_reset(void* self) {
    return QTcpSocket_QBaseReset((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_reset(void* self, bool (*slot)()) {
    QTcpSocket_OnReset((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_can_read_line(void* self) {
    return QTcpSocket_CanReadLine((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
bool q_tcpsocket_qbase_can_read_line(void* self) {
    return QTcpSocket_QBaseCanReadLine((QTcpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)() ```
void q_tcpsocket_on_can_read_line(void* self, bool (*slot)()) {
    QTcpSocket_OnCanReadLine((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
bool q_tcpsocket_event(void* self, void* event) {
    return QTcpSocket_Event((QTcpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
bool q_tcpsocket_qbase_event(void* self, void* event) {
    return QTcpSocket_QBaseEvent((QTcpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QEvent*) ```
void q_tcpsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QTcpSocket_OnEvent((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QObject* watched, QEvent* event ```
bool q_tcpsocket_event_filter(void* self, void* watched, void* event) {
    return QTcpSocket_EventFilter((QTcpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QObject* watched, QEvent* event ```
bool q_tcpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QTcpSocket_QBaseEventFilter((QTcpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QObject*, QEvent*) ```
void q_tcpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTcpSocket_OnEventFilter((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QTimerEvent* event ```
void q_tcpsocket_timer_event(void* self, void* event) {
    QTcpSocket_TimerEvent((QTcpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QTimerEvent* event ```
void q_tcpsocket_qbase_timer_event(void* self, void* event) {
    QTcpSocket_QBaseTimerEvent((QTcpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QTimerEvent*) ```
void q_tcpsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnTimerEvent((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QChildEvent* event ```
void q_tcpsocket_child_event(void* self, void* event) {
    QTcpSocket_ChildEvent((QTcpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QChildEvent* event ```
void q_tcpsocket_qbase_child_event(void* self, void* event) {
    QTcpSocket_QBaseChildEvent((QTcpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QChildEvent*) ```
void q_tcpsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnChildEvent((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
void q_tcpsocket_custom_event(void* self, void* event) {
    QTcpSocket_CustomEvent((QTcpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QEvent* event ```
void q_tcpsocket_qbase_custom_event(void* self, void* event) {
    QTcpSocket_QBaseCustomEvent((QTcpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QEvent*) ```
void q_tcpsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnCustomEvent((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_connect_notify(void* self, void* signal) {
    QTcpSocket_ConnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_qbase_connect_notify(void* self, void* signal) {
    QTcpSocket_QBaseConnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnConnectNotify((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_disconnect_notify(void* self, void* signal) {
    QTcpSocket_DisconnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
void q_tcpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QTcpSocket_QBaseDisconnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnDisconnectNotify((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState state ```
void q_tcpsocket_set_socket_state(void* self, int64_t state) {
    QTcpSocket_SetSocketState((QTcpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketState state ```
void q_tcpsocket_qbase_set_socket_state(void* self, int64_t state) {
    QTcpSocket_QBaseSetSocketState((QTcpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketState) ```
void q_tcpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t)) {
    QTcpSocket_OnSetSocketState((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpsocket_set_socket_error(void* self, int64_t socketError) {
    QTcpSocket_SetSocketError((QTcpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_tcpsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QTcpSocket_QBaseSetSocketError((QTcpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, enum QAbstractSocket__SocketError) ```
void q_tcpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t)) {
    QTcpSocket_OnSetSocketError((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_set_local_port(void* self, unsigned short port) {
    QTcpSocket_SetLocalPort((QTcpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QTcpSocket_QBaseSetLocalPort((QTcpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, unsigned short) ```
void q_tcpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short)) {
    QTcpSocket_OnSetLocalPort((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_set_local_address(void* self, void* address) {
    QTcpSocket_SetLocalAddress((QTcpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_qbase_set_local_address(void* self, void* address) {
    QTcpSocket_QBaseSetLocalAddress((QTcpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QHostAddress*) ```
void q_tcpsocket_on_set_local_address(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnSetLocalAddress((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_set_peer_port(void* self, unsigned short port) {
    QTcpSocket_SetPeerPort((QTcpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, unsigned short port ```
void q_tcpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QTcpSocket_QBaseSetPeerPort((QTcpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, unsigned short) ```
void q_tcpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short)) {
    QTcpSocket_OnSetPeerPort((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_set_peer_address(void* self, void* address) {
    QTcpSocket_SetPeerAddress((QTcpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QHostAddress* address ```
void q_tcpsocket_qbase_set_peer_address(void* self, void* address) {
    QTcpSocket_QBaseSetPeerAddress((QTcpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, QHostAddress*) ```
void q_tcpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*)) {
    QTcpSocket_OnSetPeerAddress((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* name ```
void q_tcpsocket_set_peer_name(void* self, const char* name) {
    QTcpSocket_SetPeerName((QTcpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* name ```
void q_tcpsocket_qbase_set_peer_name(void* self, const char* name) {
    QTcpSocket_QBaseSetPeerName((QTcpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*)) {
    QTcpSocket_OnSetPeerName((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, int openMode ```
void q_tcpsocket_set_open_mode(void* self, int64_t openMode) {
    QTcpSocket_SetOpenMode((QTcpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, int openMode ```
void q_tcpsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QTcpSocket_QBaseSetOpenMode((QTcpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, int) ```
void q_tcpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QTcpSocket_OnSetOpenMode((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* errorString ```
void q_tcpsocket_set_error_string(void* self, const char* errorString) {
    QTcpSocket_SetErrorString((QTcpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* errorString ```
void q_tcpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QTcpSocket_QBaseSetErrorString((QTcpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, void (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QTcpSocket_OnSetErrorString((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_sender(void* self) {
    return QTcpSocket_Sender((QTcpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
QObject* q_tcpsocket_qbase_sender(void* self) {
    return QTcpSocket_QBaseSender((QTcpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, QObject* (*slot)() ```
void q_tcpsocket_on_sender(void* self, QObject* (*slot)()) {
    QTcpSocket_OnSender((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_sender_signal_index(void* self) {
    return QTcpSocket_SenderSignalIndex((QTcpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self ```
int32_t q_tcpsocket_qbase_sender_signal_index(void* self) {
    return QTcpSocket_QBaseSenderSignalIndex((QTcpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, int32_t (*slot)() ```
void q_tcpsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTcpSocket_OnSenderSignalIndex((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, const char* signal ```
int32_t q_tcpsocket_receivers(void* self, const char* signal) {
    return QTcpSocket_Receivers((QTcpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, const char* signal ```
int32_t q_tcpsocket_qbase_receivers(void* self, const char* signal) {
    return QTcpSocket_QBaseReceivers((QTcpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, int32_t (*slot)(QTcpSocket*, const char*) ```
void q_tcpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTcpSocket_OnReceivers((QTcpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
bool q_tcpsocket_is_signal_connected(void* self, void* signal) {
    return QTcpSocket_IsSignalConnected((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTcpSocket* self, QMetaMethod* signal ```
bool q_tcpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QTcpSocket_QBaseIsSignalConnected((QTcpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTcpSocket* self, bool (*slot)(QTcpSocket*, QMetaMethod*) ```
void q_tcpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTcpSocket_OnIsSignalConnected((QTcpSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTcpSocket* self ```
void q_tcpsocket_delete(void* self) {
    QTcpSocket_Delete((QTcpSocket*)(self));
}