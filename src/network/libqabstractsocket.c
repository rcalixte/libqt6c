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
#include "libqabstractsocket.hpp"
#include "libqabstractsocket.h"

/// https://doc.qt.io/qt-6/qabstractsocket.html

/// q_abstractsocket_new constructs a new QAbstractSocket object.
///
/// ``` enum QAbstractSocket__SocketType socketType, QObject* parent ```
QAbstractSocket* q_abstractsocket_new(int64_t socketType, void* parent) {
    return QAbstractSocket_new(socketType, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractSocket* self ```
QMetaObject* q_abstractsocket_meta_object(void* self) {
    return QAbstractSocket_MetaObject((QAbstractSocket*)self);
}

/// ``` QAbstractSocket* self, const char* param1 ```
void* q_abstractsocket_metacast(void* self, const char* param1) {
    return QAbstractSocket_Metacast((QAbstractSocket*)self, param1);
}

/// ``` QAbstractSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSocket_Metacall((QAbstractSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, int32_t (*slot)(QAbstractSocket*, enum QMetaObject__Call, int, void*) ```
void q_abstractsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractSocket_OnMetacall((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSocket_QBaseMetacall((QAbstractSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractsocket_tr(const char* s) {
    libqt_string _str = QAbstractSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_resume(void* self) {
    QAbstractSocket_Resume((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_resume(void* self, void (*slot)()) {
    QAbstractSocket_OnResume((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_resume(void* self) {
    QAbstractSocket_QBaseResume((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QAbstractSocket* self, int pauseMode ```
void q_abstractsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_abstractsocket_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QHostAddress*, unsigned short, int) ```
void q_abstractsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t)) {
    QAbstractSocket_OnBind((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_abstractsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QAbstractSocket_QBaseBind((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_bind2(void* self) {
    return QAbstractSocket_Bind2((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_abstractsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QAbstractSocket_ConnectToHost((QAbstractSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_abstractsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QAbstractSocket_OnConnectToHost((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_abstractsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QAbstractSocket_QBaseConnectToHost((QAbstractSocket*)self, qstring(hostName), port, mode, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port ```
void q_abstractsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_disconnect_from_host(void* self) {
    QAbstractSocket_DisconnectFromHost((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_disconnect_from_host(void* self, void (*slot)()) {
    QAbstractSocket_OnDisconnectFromHost((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_disconnect_from_host(void* self) {
    QAbstractSocket_QBaseDisconnectFromHost((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_bytes_available(void* self) {
    return QAbstractSocket_BytesAvailable((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_bytes_available(void* self, long long (*slot)()) {
    QAbstractSocket_OnBytesAvailable((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_bytes_available(void* self) {
    return QAbstractSocket_QBaseBytesAvailable((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_bytes_to_write(void* self) {
    return QAbstractSocket_BytesToWrite((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QAbstractSocket_OnBytesToWrite((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_bytes_to_write(void* self) {
    return QAbstractSocket_QBaseBytesToWrite((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QAbstractSocket* self ```
unsigned short q_abstractsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QAbstractSocket* self ```
QHostAddress* q_abstractsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QAbstractSocket* self ```
unsigned short q_abstractsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QAbstractSocket* self ```
QHostAddress* q_abstractsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// ``` QAbstractSocket* self, long long size ```
void q_abstractsocket_set_read_buffer_size(void* self, long long size) {
    QAbstractSocket_SetReadBufferSize((QAbstractSocket*)self, size);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long)) {
    QAbstractSocket_OnSetReadBufferSize((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, long long size ```
void q_abstractsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QAbstractSocket_QBaseSetReadBufferSize((QAbstractSocket*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// ``` QAbstractSocket* self ```
intptr_t q_abstractsocket_socket_descriptor(void* self) {
    return QAbstractSocket_SocketDescriptor((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, intptr_t (*slot)() ```
void q_abstractsocket_on_socket_descriptor(void* self, intptr_t (*slot)()) {
    QAbstractSocket_OnSocketDescriptor((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
intptr_t q_abstractsocket_qbase_socket_descriptor(void* self) {
    return QAbstractSocket_QBaseSocketDescriptor((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// ``` QAbstractSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_abstractsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QAbstractSocket_SetSocketDescriptor((QAbstractSocket*)self, socketDescriptor, state, openMode);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_abstractsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t)) {
    QAbstractSocket_OnSetSocketDescriptor((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_abstractsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QAbstractSocket_QBaseSetSocketDescriptor((QAbstractSocket*)self, socketDescriptor, state, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_abstractsocket_set_socket_option(void* self, int64_t option, void* value) {
    QAbstractSocket_SetSocketOption((QAbstractSocket*)self, option, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_abstractsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QAbstractSocket_OnSetSocketOption((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_abstractsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QAbstractSocket_QBaseSetSocketOption((QAbstractSocket*)self, option, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_abstractsocket_socket_option(void* self, int64_t option) {
    return QAbstractSocket_SocketOption((QAbstractSocket*)self, option);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, QVariant* (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketOption) ```
void q_abstractsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractSocket_OnSocketOption((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_abstractsocket_qbase_socket_option(void* self, int64_t option) {
    return QAbstractSocket_QBaseSocketOption((QAbstractSocket*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_close(void* self) {
    QAbstractSocket_Close((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)() ```
void q_abstractsocket_on_close(void* self, void (*slot)()) {
    QAbstractSocket_OnClose((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_qbase_close(void* self) {
    QAbstractSocket_QBaseClose((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_sequential(void* self) {
    return QAbstractSocket_IsSequential((QAbstractSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_is_sequential(void* self, bool (*slot)()) {
    QAbstractSocket_OnIsSequential((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_is_sequential(void* self) {
    return QAbstractSocket_QBaseIsSequential((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_connected(void* self, int msecs) {
    return QAbstractSocket_WaitForConnected((QAbstractSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int)) {
    QAbstractSocket_OnWaitForConnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForConnected((QAbstractSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_ready_read(void* self, int msecs) {
    return QAbstractSocket_WaitForReadyRead((QAbstractSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QAbstractSocket_OnWaitForReadyRead((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForReadyRead((QAbstractSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_bytes_written(void* self, int msecs) {
    return QAbstractSocket_WaitForBytesWritten((QAbstractSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QAbstractSocket_OnWaitForBytesWritten((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForBytesWritten((QAbstractSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_wait_for_disconnected(void* self, int msecs) {
    return QAbstractSocket_WaitForDisconnected((QAbstractSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int)) {
    QAbstractSocket_OnWaitForDisconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, int msecs ```
bool q_abstractsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForDisconnected((QAbstractSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QAbstractSocket* self, QNetworkProxy* networkProxy ```
void q_abstractsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QAbstractSocket* self ```
QNetworkProxy* q_abstractsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QAbstractSocket* self, const char* tag ```
void q_abstractsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_host_found(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_connected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*) ```
void q_abstractsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_abstractsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_abstractsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_abstractsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_abstractsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_abstractsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_abstractsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_ReadData((QAbstractSocket*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, char*, long long) ```
void q_abstractsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QAbstractSocket_OnReadData((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_QBaseReadData((QAbstractSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_ReadLineData((QAbstractSocket*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, char*, long long) ```
void q_abstractsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QAbstractSocket_OnReadLineData((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_QBaseReadLineData((QAbstractSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_skip_data(void* self, long long maxSize) {
    return QAbstractSocket_SkipData((QAbstractSocket*)self, maxSize);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QAbstractSocket_OnSkipData((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_qbase_skip_data(void* self, long long maxSize) {
    return QAbstractSocket_QBaseSkipData((QAbstractSocket*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_write_data(void* self, const char* data, long long lenVal) {
    return QAbstractSocket_WriteData((QAbstractSocket*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, long long (*slot)(QAbstractSocket*, const char*, long long) ```
void q_abstractsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QAbstractSocket_OnWriteData((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QAbstractSocket_QBaseWriteData((QAbstractSocket*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState state ```
void q_abstractsocket_set_socket_state(void* self, int64_t state) {
    QAbstractSocket_SetSocketState((QAbstractSocket*)self, state);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_abstractsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_OnSetSocketState((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketState state ```
void q_abstractsocket_qbase_set_socket_state(void* self, int64_t state) {
    QAbstractSocket_QBaseSetSocketState((QAbstractSocket*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_abstractsocket_set_socket_error(void* self, int64_t socketError) {
    QAbstractSocket_SetSocketError((QAbstractSocket*)self, socketError);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_abstractsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_OnSetSocketError((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_abstractsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QAbstractSocket_QBaseSetSocketError((QAbstractSocket*)self, socketError);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_set_local_port(void* self, unsigned short port) {
    QAbstractSocket_SetLocalPort((QAbstractSocket*)self, port);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, unsigned short) ```
void q_abstractsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short)) {
    QAbstractSocket_OnSetLocalPort((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_qbase_set_local_port(void* self, unsigned short port) {
    QAbstractSocket_QBaseSetLocalPort((QAbstractSocket*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_set_local_address(void* self, void* address) {
    QAbstractSocket_SetLocalAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QHostAddress*) ```
void q_abstractsocket_on_set_local_address(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnSetLocalAddress((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_qbase_set_local_address(void* self, void* address) {
    QAbstractSocket_QBaseSetLocalAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_set_peer_port(void* self, unsigned short port) {
    QAbstractSocket_SetPeerPort((QAbstractSocket*)self, port);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, unsigned short) ```
void q_abstractsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short)) {
    QAbstractSocket_OnSetPeerPort((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, unsigned short port ```
void q_abstractsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QAbstractSocket_QBaseSetPeerPort((QAbstractSocket*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_set_peer_address(void* self, void* address) {
    QAbstractSocket_SetPeerAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QHostAddress*) ```
void q_abstractsocket_on_set_peer_address(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnSetPeerAddress((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, QHostAddress* address ```
void q_abstractsocket_qbase_set_peer_address(void* self, void* address) {
    QAbstractSocket_QBaseSetPeerAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// ``` QAbstractSocket* self, const char* name ```
void q_abstractsocket_set_peer_name(void* self, const char* name) {
    QAbstractSocket_SetPeerName((QAbstractSocket*)self, qstring(name));
}

/// Allows for overriding the related default method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*)) {
    QAbstractSocket_OnSetPeerName((QAbstractSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractSocket* self, const char* name ```
void q_abstractsocket_qbase_set_peer_name(void* self, const char* name) {
    QAbstractSocket_QBaseSetPeerName((QAbstractSocket*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, unsigned short port ```
bool q_abstractsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QAbstractSocket* self, unsigned short port, int mode ```
bool q_abstractsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_abstractsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QAbstractSocket* self ```
int64_t q_abstractsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QAbstractSocket* self, bool enabled ```
void q_abstractsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QAbstractSocket* self ```
char* q_abstractsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self ```
char* q_abstractsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data, long long lenVal ```
long long q_abstractsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data ```
long long q_abstractsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QAbstractSocket* self, const char* data ```
long long q_abstractsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QAbstractSocket* self, char* data, long long maxlen ```
long long q_abstractsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QAbstractSocket* self, long long maxSize ```
long long q_abstractsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QAbstractSocket* self, char c ```
void q_abstractsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QAbstractSocket* self, char c ```
bool q_abstractsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QAbstractSocket* self, char* c ```
bool q_abstractsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*) ```
void q_abstractsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QAbstractSocket* self, int channel ```
void q_abstractsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*, int) ```
void q_abstractsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QAbstractSocket* self, long long bytes ```
void q_abstractsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*, long long) ```
void q_abstractsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QAbstractSocket* self, int channel, long long bytes ```
void q_abstractsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_abstractsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*) ```
void q_abstractsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QAbstractSocket* self, void (*slot)(QIODevice*) ```
void q_abstractsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QAbstractSocket* self, long long maxlen ```
char* q_abstractsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractSocket* self ```
const char* q_abstractsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractSocket* self, const char* name ```
void q_abstractsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractSocket* self, bool b ```
bool q_abstractsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractSocket* self ```
QThread* q_abstractsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractSocket* self, QThread* thread ```
void q_abstractsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSocket* self, int interval ```
int32_t q_abstractsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractSocket* self, int id ```
void q_abstractsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractSocket* self ```
libqt_list /* of QObject* */ q_abstractsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractSocket* self, QObject* parent ```
void q_abstractsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractSocket* self, QObject* filterObj ```
void q_abstractsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractSocket* self, QObject* obj ```
void q_abstractsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractSocket* self, const char* name, QVariant* value ```
bool q_abstractsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractSocket* self, const char* name ```
QVariant* q_abstractsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractSocket* self ```
const char** q_abstractsocket_dynamic_property_names(void* self) {
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
/// ``` QAbstractSocket* self ```
QBindingStorage* q_abstractsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractSocket* self ```
QBindingStorage* q_abstractsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractSocket* self, void (*slot)(QObject*) ```
void q_abstractsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractSocket* self, const char* classname ```
bool q_abstractsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractSocket* self, QObject* param1 ```
void q_abstractsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractSocket* self, void (*slot)(QObject*, QObject*) ```
void q_abstractsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, int mode ```
bool q_abstractsocket_open(void* self, int64_t mode) {
    return QAbstractSocket_Open((QAbstractSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, int mode ```
bool q_abstractsocket_qbase_open(void* self, int64_t mode) {
    return QAbstractSocket_QBaseOpen((QAbstractSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QAbstractSocket_OnOpen((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_pos(void* self) {
    return QAbstractSocket_Pos((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_pos(void* self) {
    return QAbstractSocket_QBasePos((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_pos(void* self, long long (*slot)()) {
    QAbstractSocket_OnPos((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_size(void* self) {
    return QAbstractSocket_Size((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
long long q_abstractsocket_qbase_size(void* self) {
    return QAbstractSocket_QBaseSize((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long (*slot)() ```
void q_abstractsocket_on_size(void* self, long long (*slot)()) {
    QAbstractSocket_OnSize((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, long long pos ```
bool q_abstractsocket_seek(void* self, long long pos) {
    return QAbstractSocket_Seek((QAbstractSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, long long pos ```
bool q_abstractsocket_qbase_seek(void* self, long long pos) {
    return QAbstractSocket_QBaseSeek((QAbstractSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, long long) ```
void q_abstractsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QAbstractSocket_OnSeek((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_at_end(void* self) {
    return QAbstractSocket_AtEnd((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_at_end(void* self) {
    return QAbstractSocket_QBaseAtEnd((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_at_end(void* self, bool (*slot)()) {
    QAbstractSocket_OnAtEnd((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_reset(void* self) {
    return QAbstractSocket_Reset((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_reset(void* self) {
    return QAbstractSocket_QBaseReset((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_reset(void* self, bool (*slot)()) {
    QAbstractSocket_OnReset((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_can_read_line(void* self) {
    return QAbstractSocket_CanReadLine((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
bool q_abstractsocket_qbase_can_read_line(void* self) {
    return QAbstractSocket_QBaseCanReadLine((QAbstractSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)() ```
void q_abstractsocket_on_can_read_line(void* self, bool (*slot)()) {
    QAbstractSocket_OnCanReadLine((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
bool q_abstractsocket_event(void* self, void* event) {
    return QAbstractSocket_Event((QAbstractSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
bool q_abstractsocket_qbase_event(void* self, void* event) {
    return QAbstractSocket_QBaseEvent((QAbstractSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QEvent*) ```
void q_abstractsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractSocket_OnEvent((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* watched, QEvent* event ```
bool q_abstractsocket_event_filter(void* self, void* watched, void* event) {
    return QAbstractSocket_EventFilter((QAbstractSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* watched, QEvent* event ```
bool q_abstractsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractSocket_QBaseEventFilter((QAbstractSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QObject*, QEvent*) ```
void q_abstractsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractSocket_OnEventFilter((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QTimerEvent* event ```
void q_abstractsocket_timer_event(void* self, void* event) {
    QAbstractSocket_TimerEvent((QAbstractSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QTimerEvent* event ```
void q_abstractsocket_qbase_timer_event(void* self, void* event) {
    QAbstractSocket_QBaseTimerEvent((QAbstractSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QTimerEvent*) ```
void q_abstractsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnTimerEvent((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QChildEvent* event ```
void q_abstractsocket_child_event(void* self, void* event) {
    QAbstractSocket_ChildEvent((QAbstractSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QChildEvent* event ```
void q_abstractsocket_qbase_child_event(void* self, void* event) {
    QAbstractSocket_QBaseChildEvent((QAbstractSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QChildEvent*) ```
void q_abstractsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnChildEvent((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
void q_abstractsocket_custom_event(void* self, void* event) {
    QAbstractSocket_CustomEvent((QAbstractSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QEvent* event ```
void q_abstractsocket_qbase_custom_event(void* self, void* event) {
    QAbstractSocket_QBaseCustomEvent((QAbstractSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QEvent*) ```
void q_abstractsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnCustomEvent((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_connect_notify(void* self, void* signal) {
    QAbstractSocket_ConnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_qbase_connect_notify(void* self, void* signal) {
    QAbstractSocket_QBaseConnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnConnectNotify((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_disconnect_notify(void* self, void* signal) {
    QAbstractSocket_DisconnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
void q_abstractsocket_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractSocket_QBaseDisconnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSocket_OnDisconnectNotify((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, int openMode ```
void q_abstractsocket_set_open_mode(void* self, int64_t openMode) {
    QAbstractSocket_SetOpenMode((QAbstractSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, int openMode ```
void q_abstractsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QAbstractSocket_QBaseSetOpenMode((QAbstractSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, int) ```
void q_abstractsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_OnSetOpenMode((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, const char* errorString ```
void q_abstractsocket_set_error_string(void* self, const char* errorString) {
    QAbstractSocket_SetErrorString((QAbstractSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, const char* errorString ```
void q_abstractsocket_qbase_set_error_string(void* self, const char* errorString) {
    QAbstractSocket_QBaseSetErrorString((QAbstractSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, void (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QAbstractSocket_OnSetErrorString((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_sender(void* self) {
    return QAbstractSocket_Sender((QAbstractSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
QObject* q_abstractsocket_qbase_sender(void* self) {
    return QAbstractSocket_QBaseSender((QAbstractSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, QObject* (*slot)() ```
void q_abstractsocket_on_sender(void* self, QObject* (*slot)()) {
    QAbstractSocket_OnSender((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_sender_signal_index(void* self) {
    return QAbstractSocket_SenderSignalIndex((QAbstractSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self ```
int32_t q_abstractsocket_qbase_sender_signal_index(void* self) {
    return QAbstractSocket_QBaseSenderSignalIndex((QAbstractSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, int32_t (*slot)() ```
void q_abstractsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractSocket_OnSenderSignalIndex((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, const char* signal ```
int32_t q_abstractsocket_receivers(void* self, const char* signal) {
    return QAbstractSocket_Receivers((QAbstractSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, const char* signal ```
int32_t q_abstractsocket_qbase_receivers(void* self, const char* signal) {
    return QAbstractSocket_QBaseReceivers((QAbstractSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, int32_t (*slot)(QAbstractSocket*, const char*) ```
void q_abstractsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractSocket_OnReceivers((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
bool q_abstractsocket_is_signal_connected(void* self, void* signal) {
    return QAbstractSocket_IsSignalConnected((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractSocket* self, QMetaMethod* signal ```
bool q_abstractsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractSocket_QBaseIsSignalConnected((QAbstractSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractSocket* self, bool (*slot)(QAbstractSocket*, QMetaMethod*) ```
void q_abstractsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractSocket_OnIsSignalConnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractSocket* self ```
void q_abstractsocket_delete(void* self) {
    QAbstractSocket_Delete((QAbstractSocket*)(self));
}