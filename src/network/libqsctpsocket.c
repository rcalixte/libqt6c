#include "libqabstractsocket.hpp"
#include "../libqanystringview.hpp"
#include "libqauthenticator.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkdatagram.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "libqtcpsocket.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsctpsocket.hpp"
#include "libqsctpsocket.h"

/// https://doc.qt.io/qt-6/qsctpsocket.html

/// q_sctpsocket_new constructs a new QSctpSocket object.
///
///
QSctpSocket* q_sctpsocket_new() {
    return QSctpSocket_new();
}

/// q_sctpsocket_new2 constructs a new QSctpSocket object.
///
/// ``` QObject* parent ```
QSctpSocket* q_sctpsocket_new2(void* parent) {
    return QSctpSocket_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSctpSocket* self ```
QMetaObject* q_sctpsocket_meta_object(void* self) {
    return QSctpSocket_MetaObject((QSctpSocket*)self);
}

/// ``` QSctpSocket* self, const char* param1 ```
void* q_sctpsocket_metacast(void* self, const char* param1) {
    return QSctpSocket_Metacast((QSctpSocket*)self, param1);
}

/// ``` QSctpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSctpSocket_Metacall((QSctpSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSctpSocket* self, int32_t (*slot)(QSctpSocket*, enum QMetaObject__Call, int, void*) ```
void q_sctpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSctpSocket_OnMetacall((QSctpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sctpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSctpSocket_QBaseMetacall((QSctpSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sctpsocket_tr(const char* s) {
    libqt_string _str = QSctpSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#close)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_close(void* self) {
    QSctpSocket_Close((QSctpSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSctpSocket* self, void (*slot)() ```
void q_sctpsocket_on_close(void* self, void (*slot)()) {
    QSctpSocket_OnClose((QSctpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_qbase_close(void* self) {
    QSctpSocket_QBaseClose((QSctpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_disconnect_from_host(void* self) {
    QSctpSocket_DisconnectFromHost((QSctpSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSctpSocket* self, void (*slot)() ```
void q_sctpsocket_on_disconnect_from_host(void* self, void (*slot)()) {
    QSctpSocket_OnDisconnectFromHost((QSctpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_qbase_disconnect_from_host(void* self) {
    QSctpSocket_QBaseDisconnectFromHost((QSctpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#setMaximumChannelCount)
///
/// ``` QSctpSocket* self, int count ```
void q_sctpsocket_set_maximum_channel_count(void* self, int count) {
    QSctpSocket_SetMaximumChannelCount((QSctpSocket*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#maximumChannelCount)
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_maximum_channel_count(void* self) {
    return QSctpSocket_MaximumChannelCount((QSctpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#isInDatagramMode)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_in_datagram_mode(void* self) {
    return QSctpSocket_IsInDatagramMode((QSctpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readDatagram)
///
/// ``` QSctpSocket* self ```
QNetworkDatagram* q_sctpsocket_read_datagram(void* self) {
    return QSctpSocket_ReadDatagram((QSctpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#writeDatagram)
///
/// ``` QSctpSocket* self, QNetworkDatagram* datagram ```
bool q_sctpsocket_write_datagram(void* self, void* datagram) {
    return QSctpSocket_WriteDatagram((QSctpSocket*)self, (QNetworkDatagram*)datagram);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_read_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_ReadData((QSctpSocket*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QSctpSocket* self, long long (*slot)(QSctpSocket*, char*, long long) ```
void q_sctpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSctpSocket_OnReadData((QSctpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_QBaseReadData((QSctpSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_ReadLineData((QSctpSocket*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QSctpSocket* self, long long (*slot)(QSctpSocket*, char*, long long) ```
void q_sctpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSctpSocket_OnReadLineData((QSctpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_QBaseReadLineData((QSctpSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sctpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QSctpSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sctpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSctpSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSctpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_sctpsocket_bind2(void* self, int64_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSctpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_sctpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QSctpSocket* self ```
int64_t q_sctpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QSctpSocket* self, int pauseMode ```
void q_sctpsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSctpSocket* self, QHostAddress* address, unsigned short port ```
void q_sctpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QSctpSocket* self ```
unsigned short q_sctpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QSctpSocket* self ```
QHostAddress* q_sctpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QSctpSocket* self ```
unsigned short q_sctpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QSctpSocket* self ```
QHostAddress* q_sctpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QSctpSocket* self ```
const char* q_sctpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QSctpSocket* self ```
int64_t q_sctpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QSctpSocket* self ```
int64_t q_sctpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QSctpSocket* self ```
int64_t q_sctpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QSctpSocket* self, QNetworkProxy* networkProxy ```
void q_sctpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QSctpSocket* self ```
QNetworkProxy* q_sctpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QSctpSocket* self ```
const char* q_sctpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QSctpSocket* self, const char* tag ```
void q_sctpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sctpsocket_on_host_found(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sctpsocket_on_connected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sctpsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_sctpsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_sctpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_sctpsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_sctpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QSctpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_sctpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// Inherited from QAbstractSocket
///
/// ``` QSctpSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_sctpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSctpSocket* self, unsigned short port ```
bool q_sctpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSctpSocket* self, unsigned short port, int mode ```
bool q_sctpsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSctpSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_sctpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QSctpSocket* self ```
int64_t q_sctpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QSctpSocket* self, bool enabled ```
void q_sctpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QSctpSocket* self, int channel ```
void q_sctpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QSctpSocket* self, int channel ```
void q_sctpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSctpSocket* self, long long maxlen ```
char* q_sctpsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QSctpSocket* self ```
char* q_sctpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSctpSocket* self ```
char* q_sctpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSctpSocket* self, const char* data, long long lenVal ```
long long q_sctpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSctpSocket* self, const char* data ```
long long q_sctpsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSctpSocket* self, const char* data ```
long long q_sctpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSctpSocket* self, char* data, long long maxlen ```
long long q_sctpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSctpSocket* self, long long maxlen ```
char* q_sctpsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QSctpSocket* self, long long maxSize ```
long long q_sctpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QSctpSocket* self, char c ```
void q_sctpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QSctpSocket* self, char c ```
bool q_sctpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QSctpSocket* self, char* c ```
bool q_sctpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QSctpSocket* self ```
const char* q_sctpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*) ```
void q_sctpsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSctpSocket* self, int channel ```
void q_sctpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*, int) ```
void q_sctpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSctpSocket* self, long long bytes ```
void q_sctpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*, long long) ```
void q_sctpsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSctpSocket* self, int channel, long long bytes ```
void q_sctpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_sctpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*) ```
void q_sctpsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSctpSocket* self, void (*slot)(QIODevice*) ```
void q_sctpsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSctpSocket* self, long long maxlen ```
char* q_sctpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSctpSocket* self ```
const char* q_sctpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSctpSocket* self, const char* name ```
void q_sctpsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSctpSocket* self, bool b ```
bool q_sctpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSctpSocket* self ```
QThread* q_sctpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSctpSocket* self, QThread* thread ```
void q_sctpsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpSocket* self, int interval ```
int32_t q_sctpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSctpSocket* self, int id ```
void q_sctpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSctpSocket* self ```
libqt_list /* of QObject* */ q_sctpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSctpSocket* self, QObject* parent ```
void q_sctpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSctpSocket* self, QObject* filterObj ```
void q_sctpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSctpSocket* self, QObject* obj ```
void q_sctpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sctpsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sctpsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sctpsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sctpsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSctpSocket* self, const char* name, QVariant* value ```
bool q_sctpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSctpSocket* self, const char* name ```
QVariant* q_sctpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSctpSocket* self ```
const char** q_sctpsocket_dynamic_property_names(void* self) {
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
/// ``` QSctpSocket* self ```
QBindingStorage* q_sctpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSctpSocket* self ```
QBindingStorage* q_sctpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSctpSocket* self, void (*slot)(QObject*) ```
void q_sctpsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSctpSocket* self ```
QObject* q_sctpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSctpSocket* self, const char* classname ```
bool q_sctpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSctpSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sctpsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSctpSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sctpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSctpSocket* self, QObject* param1 ```
void q_sctpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSctpSocket* self, void (*slot)(QObject*, QObject*) ```
void q_sctpsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_resume(void* self) {
    QSctpSocket_Resume((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_qbase_resume(void* self) {
    QSctpSocket_QBaseResume((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)() ```
void q_sctpsocket_on_resume(void* self, void (*slot)()) {
    QSctpSocket_OnResume((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sctpsocket_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QSctpSocket_Bind((QSctpSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sctpsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QSctpSocket_QBaseBind((QSctpSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, QHostAddress*, unsigned short, int) ```
void q_sctpsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t)) {
    QSctpSocket_OnBind((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sctpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QSctpSocket_ConnectToHost((QSctpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sctpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QSctpSocket_QBaseConnectToHost((QSctpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_sctpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QSctpSocket_OnConnectToHost((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_bytes_available(void* self) {
    return QSctpSocket_BytesAvailable((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_qbase_bytes_available(void* self) {
    return QSctpSocket_QBaseBytesAvailable((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)() ```
void q_sctpsocket_on_bytes_available(void* self, long long (*slot)()) {
    QSctpSocket_OnBytesAvailable((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_bytes_to_write(void* self) {
    return QSctpSocket_BytesToWrite((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_qbase_bytes_to_write(void* self) {
    return QSctpSocket_QBaseBytesToWrite((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)() ```
void q_sctpsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QSctpSocket_OnBytesToWrite((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, long long size ```
void q_sctpsocket_set_read_buffer_size(void* self, long long size) {
    QSctpSocket_SetReadBufferSize((QSctpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, long long size ```
void q_sctpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QSctpSocket_QBaseSetReadBufferSize((QSctpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, long long) ```
void q_sctpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long)) {
    QSctpSocket_OnSetReadBufferSize((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
intptr_t q_sctpsocket_socket_descriptor(void* self) {
    return QSctpSocket_SocketDescriptor((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
intptr_t q_sctpsocket_qbase_socket_descriptor(void* self) {
    return QSctpSocket_QBaseSocketDescriptor((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, intptr_t (*slot)() ```
void q_sctpsocket_on_socket_descriptor(void* self, intptr_t (*slot)()) {
    QSctpSocket_OnSocketDescriptor((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sctpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QSctpSocket_SetSocketDescriptor((QSctpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sctpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QSctpSocket_QBaseSetSocketDescriptor((QSctpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_sctpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t)) {
    QSctpSocket_OnSetSocketDescriptor((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sctpsocket_set_socket_option(void* self, int64_t option, void* value) {
    QSctpSocket_SetSocketOption((QSctpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sctpsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QSctpSocket_QBaseSetSocketOption((QSctpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_sctpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QSctpSocket_OnSetSocketOption((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sctpsocket_socket_option(void* self, int64_t option) {
    return QSctpSocket_SocketOption((QSctpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sctpsocket_qbase_socket_option(void* self, int64_t option) {
    return QSctpSocket_QBaseSocketOption((QSctpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, QVariant* (*slot)(QSctpSocket*, enum QAbstractSocket__SocketOption) ```
void q_sctpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSctpSocket_OnSocketOption((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_is_sequential(void* self) {
    return QSctpSocket_IsSequential((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_qbase_is_sequential(void* self) {
    return QSctpSocket_QBaseIsSequential((QSctpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)() ```
void q_sctpsocket_on_is_sequential(void* self, bool (*slot)()) {
    QSctpSocket_OnIsSequential((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_wait_for_connected(void* self, int msecs) {
    return QSctpSocket_WaitForConnected((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForConnected((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int)) {
    QSctpSocket_OnWaitForConnected((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_wait_for_ready_read(void* self, int msecs) {
    return QSctpSocket_WaitForReadyRead((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForReadyRead((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QSctpSocket_OnWaitForReadyRead((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QSctpSocket_WaitForBytesWritten((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForBytesWritten((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QSctpSocket_OnWaitForBytesWritten((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_wait_for_disconnected(void* self, int msecs) {
    return QSctpSocket_WaitForDisconnected((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int msecs ```
bool q_sctpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForDisconnected((QSctpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int)) {
    QSctpSocket_OnWaitForDisconnected((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, long long maxSize ```
long long q_sctpsocket_skip_data(void* self, long long maxSize) {
    return QSctpSocket_SkipData((QSctpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, long long maxSize ```
long long q_sctpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QSctpSocket_QBaseSkipData((QSctpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)(QSctpSocket*, long long) ```
void q_sctpsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QSctpSocket_OnSkipData((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, const char* data, long long lenVal ```
long long q_sctpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QSctpSocket_WriteData((QSctpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, const char* data, long long lenVal ```
long long q_sctpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QSctpSocket_QBaseWriteData((QSctpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)(QSctpSocket*, const char*, long long) ```
void q_sctpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QSctpSocket_OnWriteData((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int mode ```
bool q_sctpsocket_open(void* self, int64_t mode) {
    return QSctpSocket_Open((QSctpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int mode ```
bool q_sctpsocket_qbase_open(void* self, int64_t mode) {
    return QSctpSocket_QBaseOpen((QSctpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QSctpSocket_OnOpen((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_pos(void* self) {
    return QSctpSocket_Pos((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_qbase_pos(void* self) {
    return QSctpSocket_QBasePos((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)() ```
void q_sctpsocket_on_pos(void* self, long long (*slot)()) {
    QSctpSocket_OnPos((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_size(void* self) {
    return QSctpSocket_Size((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
long long q_sctpsocket_qbase_size(void* self) {
    return QSctpSocket_QBaseSize((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, long long (*slot)() ```
void q_sctpsocket_on_size(void* self, long long (*slot)()) {
    QSctpSocket_OnSize((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, long long pos ```
bool q_sctpsocket_seek(void* self, long long pos) {
    return QSctpSocket_Seek((QSctpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, long long pos ```
bool q_sctpsocket_qbase_seek(void* self, long long pos) {
    return QSctpSocket_QBaseSeek((QSctpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, long long) ```
void q_sctpsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QSctpSocket_OnSeek((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_at_end(void* self) {
    return QSctpSocket_AtEnd((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_qbase_at_end(void* self) {
    return QSctpSocket_QBaseAtEnd((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)() ```
void q_sctpsocket_on_at_end(void* self, bool (*slot)()) {
    QSctpSocket_OnAtEnd((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_reset(void* self) {
    return QSctpSocket_Reset((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_qbase_reset(void* self) {
    return QSctpSocket_QBaseReset((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)() ```
void q_sctpsocket_on_reset(void* self, bool (*slot)()) {
    QSctpSocket_OnReset((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_can_read_line(void* self) {
    return QSctpSocket_CanReadLine((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
bool q_sctpsocket_qbase_can_read_line(void* self) {
    return QSctpSocket_QBaseCanReadLine((QSctpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)() ```
void q_sctpsocket_on_can_read_line(void* self, bool (*slot)()) {
    QSctpSocket_OnCanReadLine((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QEvent* event ```
bool q_sctpsocket_event(void* self, void* event) {
    return QSctpSocket_Event((QSctpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QEvent* event ```
bool q_sctpsocket_qbase_event(void* self, void* event) {
    return QSctpSocket_QBaseEvent((QSctpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, QEvent*) ```
void q_sctpsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QSctpSocket_OnEvent((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QObject* watched, QEvent* event ```
bool q_sctpsocket_event_filter(void* self, void* watched, void* event) {
    return QSctpSocket_EventFilter((QSctpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QObject* watched, QEvent* event ```
bool q_sctpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QSctpSocket_QBaseEventFilter((QSctpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, QObject*, QEvent*) ```
void q_sctpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSctpSocket_OnEventFilter((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QTimerEvent* event ```
void q_sctpsocket_timer_event(void* self, void* event) {
    QSctpSocket_TimerEvent((QSctpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QTimerEvent* event ```
void q_sctpsocket_qbase_timer_event(void* self, void* event) {
    QSctpSocket_QBaseTimerEvent((QSctpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QTimerEvent*) ```
void q_sctpsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnTimerEvent((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QChildEvent* event ```
void q_sctpsocket_child_event(void* self, void* event) {
    QSctpSocket_ChildEvent((QSctpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QChildEvent* event ```
void q_sctpsocket_qbase_child_event(void* self, void* event) {
    QSctpSocket_QBaseChildEvent((QSctpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QChildEvent*) ```
void q_sctpsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnChildEvent((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QEvent* event ```
void q_sctpsocket_custom_event(void* self, void* event) {
    QSctpSocket_CustomEvent((QSctpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QEvent* event ```
void q_sctpsocket_qbase_custom_event(void* self, void* event) {
    QSctpSocket_QBaseCustomEvent((QSctpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QEvent*) ```
void q_sctpsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnCustomEvent((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
void q_sctpsocket_connect_notify(void* self, void* signal) {
    QSctpSocket_ConnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
void q_sctpsocket_qbase_connect_notify(void* self, void* signal) {
    QSctpSocket_QBaseConnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QMetaMethod*) ```
void q_sctpsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnConnectNotify((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
void q_sctpsocket_disconnect_notify(void* self, void* signal) {
    QSctpSocket_DisconnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
void q_sctpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QSctpSocket_QBaseDisconnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QMetaMethod*) ```
void q_sctpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnDisconnectNotify((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketState state ```
void q_sctpsocket_set_socket_state(void* self, int64_t state) {
    QSctpSocket_SetSocketState((QSctpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketState state ```
void q_sctpsocket_qbase_set_socket_state(void* self, int64_t state) {
    QSctpSocket_QBaseSetSocketState((QSctpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, enum QAbstractSocket__SocketState) ```
void q_sctpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t)) {
    QSctpSocket_OnSetSocketState((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sctpsocket_set_socket_error(void* self, int64_t socketError) {
    QSctpSocket_SetSocketError((QSctpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sctpsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QSctpSocket_QBaseSetSocketError((QSctpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, enum QAbstractSocket__SocketError) ```
void q_sctpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t)) {
    QSctpSocket_OnSetSocketError((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, unsigned short port ```
void q_sctpsocket_set_local_port(void* self, unsigned short port) {
    QSctpSocket_SetLocalPort((QSctpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, unsigned short port ```
void q_sctpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QSctpSocket_QBaseSetLocalPort((QSctpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, unsigned short) ```
void q_sctpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short)) {
    QSctpSocket_OnSetLocalPort((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address ```
void q_sctpsocket_set_local_address(void* self, void* address) {
    QSctpSocket_SetLocalAddress((QSctpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address ```
void q_sctpsocket_qbase_set_local_address(void* self, void* address) {
    QSctpSocket_QBaseSetLocalAddress((QSctpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QHostAddress*) ```
void q_sctpsocket_on_set_local_address(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnSetLocalAddress((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, unsigned short port ```
void q_sctpsocket_set_peer_port(void* self, unsigned short port) {
    QSctpSocket_SetPeerPort((QSctpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, unsigned short port ```
void q_sctpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QSctpSocket_QBaseSetPeerPort((QSctpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, unsigned short) ```
void q_sctpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short)) {
    QSctpSocket_OnSetPeerPort((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address ```
void q_sctpsocket_set_peer_address(void* self, void* address) {
    QSctpSocket_SetPeerAddress((QSctpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QHostAddress* address ```
void q_sctpsocket_qbase_set_peer_address(void* self, void* address) {
    QSctpSocket_QBaseSetPeerAddress((QSctpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, QHostAddress*) ```
void q_sctpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*)) {
    QSctpSocket_OnSetPeerAddress((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, const char* name ```
void q_sctpsocket_set_peer_name(void* self, const char* name) {
    QSctpSocket_SetPeerName((QSctpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, const char* name ```
void q_sctpsocket_qbase_set_peer_name(void* self, const char* name) {
    QSctpSocket_QBaseSetPeerName((QSctpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, const char*) ```
void q_sctpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*)) {
    QSctpSocket_OnSetPeerName((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, int openMode ```
void q_sctpsocket_set_open_mode(void* self, int64_t openMode) {
    QSctpSocket_SetOpenMode((QSctpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, int openMode ```
void q_sctpsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QSctpSocket_QBaseSetOpenMode((QSctpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, int) ```
void q_sctpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QSctpSocket_OnSetOpenMode((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, const char* errorString ```
void q_sctpsocket_set_error_string(void* self, const char* errorString) {
    QSctpSocket_SetErrorString((QSctpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, const char* errorString ```
void q_sctpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QSctpSocket_QBaseSetErrorString((QSctpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, void (*slot)(QSctpSocket*, const char*) ```
void q_sctpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QSctpSocket_OnSetErrorString((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
QObject* q_sctpsocket_sender(void* self) {
    return QSctpSocket_Sender((QSctpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
QObject* q_sctpsocket_qbase_sender(void* self) {
    return QSctpSocket_QBaseSender((QSctpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, QObject* (*slot)() ```
void q_sctpsocket_on_sender(void* self, QObject* (*slot)()) {
    QSctpSocket_OnSender((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_sender_signal_index(void* self) {
    return QSctpSocket_SenderSignalIndex((QSctpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self ```
int32_t q_sctpsocket_qbase_sender_signal_index(void* self) {
    return QSctpSocket_QBaseSenderSignalIndex((QSctpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, int32_t (*slot)() ```
void q_sctpsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSctpSocket_OnSenderSignalIndex((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, const char* signal ```
int32_t q_sctpsocket_receivers(void* self, const char* signal) {
    return QSctpSocket_Receivers((QSctpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, const char* signal ```
int32_t q_sctpsocket_qbase_receivers(void* self, const char* signal) {
    return QSctpSocket_QBaseReceivers((QSctpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, int32_t (*slot)(QSctpSocket*, const char*) ```
void q_sctpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSctpSocket_OnReceivers((QSctpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
bool q_sctpsocket_is_signal_connected(void* self, void* signal) {
    return QSctpSocket_IsSignalConnected((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSctpSocket* self, QMetaMethod* signal ```
bool q_sctpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QSctpSocket_QBaseIsSignalConnected((QSctpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSctpSocket* self, bool (*slot)(QSctpSocket*, QMetaMethod*) ```
void q_sctpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSctpSocket_OnIsSignalConnected((QSctpSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSctpSocket* self ```
void q_sctpsocket_delete(void* self) {
    QSctpSocket_Delete((QSctpSocket*)(self));
}