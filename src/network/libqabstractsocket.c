#include "libqauthenticator.hpp"
#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqabstractsocket.hpp"
#include "libqabstractsocket.h"

QAbstractSocket* q_abstractsocket_new(int32_t socketType, void* parent) {
    return QAbstractSocket_new(socketType, (QObject*)parent);
}

const QMetaObject* q_abstractsocket_meta_object(void* self) {
    return QAbstractSocket_MetaObject((QAbstractSocket*)self);
}

void q_abstractsocket_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QAbstractSocket_OnMetaObject((QAbstractSocket*)self, (intptr_t)callback);
}

const QMetaObject* q_abstractsocket_qbase_meta_object(void* self) {
    return QAbstractSocket_QBaseMetaObject((QAbstractSocket*)self);
}

void* q_abstractsocket_metacast(void* self, const char* param1) {
    return QAbstractSocket_Metacast((QAbstractSocket*)self, param1);
}

void q_abstractsocket_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QAbstractSocket_OnMetacast((QAbstractSocket*)self, (intptr_t)callback);
}

void* q_abstractsocket_qbase_metacast(void* self, const char* param1) {
    return QAbstractSocket_QBaseMetacast((QAbstractSocket*)self, param1);
}

int32_t q_abstractsocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractSocket_Metacall((QAbstractSocket*)self, param1, param2, param3);
}

void q_abstractsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAbstractSocket_OnMetacall((QAbstractSocket*)self, (intptr_t)callback);
}

int32_t q_abstractsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAbstractSocket_QBaseMetacall((QAbstractSocket*)self, param1, param2, param3);
}

const char* q_abstractsocket_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractsocket_resume(void* self) {
    QAbstractSocket_Resume((QAbstractSocket*)self);
}

void q_abstractsocket_on_resume(void* self, void (*callback)()) {
    QAbstractSocket_OnResume((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_resume(void* self) {
    QAbstractSocket_QBaseResume((QAbstractSocket*)self);
}

int32_t q_abstractsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

void q_abstractsocket_set_pause_mode(void* self, int32_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

bool q_abstractsocket_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QAbstractSocket_Bind((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

void q_abstractsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int32_t)) {
    QAbstractSocket_OnBind((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QAbstractSocket_QBaseBind((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

bool q_abstractsocket_bind2(void* self) {
    return QAbstractSocket_Bind2((QAbstractSocket*)self);
}

void q_abstractsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QAbstractSocket_ConnectToHost((QAbstractSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_abstractsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t)) {
    QAbstractSocket_OnConnectToHost((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QAbstractSocket_QBaseConnectToHost((QAbstractSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_abstractsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

void q_abstractsocket_disconnect_from_host(void* self) {
    QAbstractSocket_DisconnectFromHost((QAbstractSocket*)self);
}

void q_abstractsocket_on_disconnect_from_host(void* self, void (*callback)()) {
    QAbstractSocket_OnDisconnectFromHost((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_disconnect_from_host(void* self) {
    QAbstractSocket_QBaseDisconnectFromHost((QAbstractSocket*)self);
}

bool q_abstractsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

long long q_abstractsocket_bytes_available(void* self) {
    return QAbstractSocket_BytesAvailable((QAbstractSocket*)self);
}

void q_abstractsocket_on_bytes_available(void* self, long long (*callback)()) {
    QAbstractSocket_OnBytesAvailable((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_bytes_available(void* self) {
    return QAbstractSocket_QBaseBytesAvailable((QAbstractSocket*)self);
}

long long q_abstractsocket_bytes_to_write(void* self) {
    return QAbstractSocket_BytesToWrite((QAbstractSocket*)self);
}

void q_abstractsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QAbstractSocket_OnBytesToWrite((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_bytes_to_write(void* self) {
    return QAbstractSocket_QBaseBytesToWrite((QAbstractSocket*)self);
}

unsigned short q_abstractsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

QHostAddress* q_abstractsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

unsigned short q_abstractsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

QHostAddress* q_abstractsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

const char* q_abstractsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_abstractsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

void q_abstractsocket_set_read_buffer_size(void* self, long long size) {
    QAbstractSocket_SetReadBufferSize((QAbstractSocket*)self, size);
}

void q_abstractsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long)) {
    QAbstractSocket_OnSetReadBufferSize((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QAbstractSocket_QBaseSetReadBufferSize((QAbstractSocket*)self, size);
}

void q_abstractsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

intptr_t q_abstractsocket_socket_descriptor(void* self) {
    return QAbstractSocket_SocketDescriptor((QAbstractSocket*)self);
}

void q_abstractsocket_on_socket_descriptor(void* self, intptr_t (*callback)()) {
    QAbstractSocket_OnSocketDescriptor((QAbstractSocket*)self, (intptr_t)callback);
}

intptr_t q_abstractsocket_qbase_socket_descriptor(void* self) {
    return QAbstractSocket_QBaseSocketDescriptor((QAbstractSocket*)self);
}

bool q_abstractsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QAbstractSocket_SetSocketDescriptor((QAbstractSocket*)self, socketDescriptor, state, openMode);
}

void q_abstractsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t)) {
    QAbstractSocket_OnSetSocketDescriptor((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QAbstractSocket_QBaseSetSocketDescriptor((QAbstractSocket*)self, socketDescriptor, state, openMode);
}

void q_abstractsocket_set_socket_option(void* self, int32_t option, void* value) {
    QAbstractSocket_SetSocketOption((QAbstractSocket*)self, option, (QVariant*)value);
}

void q_abstractsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*)) {
    QAbstractSocket_OnSetSocketOption((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_socket_option(void* self, int32_t option, void* value) {
    QAbstractSocket_QBaseSetSocketOption((QAbstractSocket*)self, option, (QVariant*)value);
}

QVariant* q_abstractsocket_socket_option(void* self, int32_t option) {
    return QAbstractSocket_SocketOption((QAbstractSocket*)self, option);
}

void q_abstractsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t)) {
    QAbstractSocket_OnSocketOption((QAbstractSocket*)self, (intptr_t)callback);
}

QVariant* q_abstractsocket_qbase_socket_option(void* self, int32_t option) {
    return QAbstractSocket_QBaseSocketOption((QAbstractSocket*)self, option);
}

int32_t q_abstractsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

int32_t q_abstractsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

int32_t q_abstractsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

void q_abstractsocket_close(void* self) {
    QAbstractSocket_Close((QAbstractSocket*)self);
}

void q_abstractsocket_on_close(void* self, void (*callback)()) {
    QAbstractSocket_OnClose((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_close(void* self) {
    QAbstractSocket_QBaseClose((QAbstractSocket*)self);
}

bool q_abstractsocket_is_sequential(void* self) {
    return QAbstractSocket_IsSequential((QAbstractSocket*)self);
}

void q_abstractsocket_on_is_sequential(void* self, bool (*callback)()) {
    QAbstractSocket_OnIsSequential((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_is_sequential(void* self) {
    return QAbstractSocket_QBaseIsSequential((QAbstractSocket*)self);
}

bool q_abstractsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

bool q_abstractsocket_wait_for_connected(void* self, int msecs) {
    return QAbstractSocket_WaitForConnected((QAbstractSocket*)self, msecs);
}

void q_abstractsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int)) {
    QAbstractSocket_OnWaitForConnected((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForConnected((QAbstractSocket*)self, msecs);
}

bool q_abstractsocket_wait_for_ready_read(void* self, int msecs) {
    return QAbstractSocket_WaitForReadyRead((QAbstractSocket*)self, msecs);
}

void q_abstractsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QAbstractSocket_OnWaitForReadyRead((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForReadyRead((QAbstractSocket*)self, msecs);
}

bool q_abstractsocket_wait_for_bytes_written(void* self, int msecs) {
    return QAbstractSocket_WaitForBytesWritten((QAbstractSocket*)self, msecs);
}

void q_abstractsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QAbstractSocket_OnWaitForBytesWritten((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForBytesWritten((QAbstractSocket*)self, msecs);
}

bool q_abstractsocket_wait_for_disconnected(void* self, int msecs) {
    return QAbstractSocket_WaitForDisconnected((QAbstractSocket*)self, msecs);
}

void q_abstractsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int)) {
    QAbstractSocket_OnWaitForDisconnected((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QAbstractSocket_QBaseWaitForDisconnected((QAbstractSocket*)self, msecs);
}

void q_abstractsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_abstractsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

const char* q_abstractsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

void q_abstractsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

void q_abstractsocket_on_host_found(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

void q_abstractsocket_on_connected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

void q_abstractsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_state_changed(void* self, int32_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

void q_abstractsocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_error_occurred(void* self, int32_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

void q_abstractsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_abstractsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_read_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_ReadData((QAbstractSocket*)self, data, maxlen);
}

void q_abstractsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QAbstractSocket_OnReadData((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_QBaseReadData((QAbstractSocket*)self, data, maxlen);
}

long long q_abstractsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_ReadLineData((QAbstractSocket*)self, data, maxlen);
}

void q_abstractsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QAbstractSocket_OnReadLineData((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QAbstractSocket_QBaseReadLineData((QAbstractSocket*)self, data, maxlen);
}

long long q_abstractsocket_skip_data(void* self, long long maxSize) {
    return QAbstractSocket_SkipData((QAbstractSocket*)self, maxSize);
}

void q_abstractsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QAbstractSocket_OnSkipData((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_skip_data(void* self, long long maxSize) {
    return QAbstractSocket_QBaseSkipData((QAbstractSocket*)self, maxSize);
}

long long q_abstractsocket_write_data(void* self, const char* data, long long lenVal) {
    return QAbstractSocket_WriteData((QAbstractSocket*)self, data, lenVal);
}

void q_abstractsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QAbstractSocket_OnWriteData((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QAbstractSocket_QBaseWriteData((QAbstractSocket*)self, data, lenVal);
}

void q_abstractsocket_set_socket_state(void* self, int32_t state) {
    QAbstractSocket_SetSocketState((QAbstractSocket*)self, state);
}

void q_abstractsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_OnSetSocketState((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_socket_state(void* self, int32_t state) {
    QAbstractSocket_QBaseSetSocketState((QAbstractSocket*)self, state);
}

void q_abstractsocket_set_socket_error(void* self, int32_t socketError) {
    QAbstractSocket_SetSocketError((QAbstractSocket*)self, socketError);
}

void q_abstractsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_OnSetSocketError((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_socket_error(void* self, int32_t socketError) {
    QAbstractSocket_QBaseSetSocketError((QAbstractSocket*)self, socketError);
}

void q_abstractsocket_set_local_port(void* self, unsigned short port) {
    QAbstractSocket_SetLocalPort((QAbstractSocket*)self, port);
}

void q_abstractsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short)) {
    QAbstractSocket_OnSetLocalPort((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_local_port(void* self, unsigned short port) {
    QAbstractSocket_QBaseSetLocalPort((QAbstractSocket*)self, port);
}

void q_abstractsocket_set_local_address(void* self, void* address) {
    QAbstractSocket_SetLocalAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

void q_abstractsocket_on_set_local_address(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnSetLocalAddress((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_local_address(void* self, void* address) {
    QAbstractSocket_QBaseSetLocalAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

void q_abstractsocket_set_peer_port(void* self, unsigned short port) {
    QAbstractSocket_SetPeerPort((QAbstractSocket*)self, port);
}

void q_abstractsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short)) {
    QAbstractSocket_OnSetPeerPort((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QAbstractSocket_QBaseSetPeerPort((QAbstractSocket*)self, port);
}

void q_abstractsocket_set_peer_address(void* self, void* address) {
    QAbstractSocket_SetPeerAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

void q_abstractsocket_on_set_peer_address(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnSetPeerAddress((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_peer_address(void* self, void* address) {
    QAbstractSocket_QBaseSetPeerAddress((QAbstractSocket*)self, (QHostAddress*)address);
}

void q_abstractsocket_set_peer_name(void* self, const char* name) {
    QAbstractSocket_SetPeerName((QAbstractSocket*)self, qstring(name));
}

void q_abstractsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*)) {
    QAbstractSocket_OnSetPeerName((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_qbase_set_peer_name(void* self, const char* name) {
    QAbstractSocket_QBaseSetPeerName((QAbstractSocket*)self, qstring(name));
}

const char* q_abstractsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

bool q_abstractsocket_bind22(void* self, unsigned short port, int32_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

void q_abstractsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

int32_t q_abstractsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_abstractsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_abstractsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_abstractsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_abstractsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_abstractsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_abstractsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_abstractsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_abstractsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_abstractsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_abstractsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_abstractsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_abstractsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_abstractsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_abstractsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_abstractsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_abstractsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_abstractsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_abstractsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_abstractsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_abstractsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_abstractsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_abstractsocket_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_abstractsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_abstractsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_abstractsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_abstractsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_abstractsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_abstractsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_abstractsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_abstractsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_abstractsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_abstractsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_abstractsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_abstractsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_abstractsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_abstractsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_abstractsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_abstractsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_abstractsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_abstractsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_abstractsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractsocket_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_abstractsocket_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_abstractsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractsocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractsocket_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_abstractsocket_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_abstractsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_abstractsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstractsocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_abstractsocket_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_abstractsocket_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_abstractsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_abstractsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_abstractsocket_open(void* self, int32_t mode) {
    return QAbstractSocket_Open((QAbstractSocket*)self, mode);
}

bool q_abstractsocket_qbase_open(void* self, int32_t mode) {
    return QAbstractSocket_QBaseOpen((QAbstractSocket*)self, mode);
}

void q_abstractsocket_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QAbstractSocket_OnOpen((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_pos(void* self) {
    return QAbstractSocket_Pos((QAbstractSocket*)self);
}

long long q_abstractsocket_qbase_pos(void* self) {
    return QAbstractSocket_QBasePos((QAbstractSocket*)self);
}

void q_abstractsocket_on_pos(void* self, long long (*callback)()) {
    QAbstractSocket_OnPos((QAbstractSocket*)self, (intptr_t)callback);
}

long long q_abstractsocket_size(void* self) {
    return QAbstractSocket_Size((QAbstractSocket*)self);
}

long long q_abstractsocket_qbase_size(void* self) {
    return QAbstractSocket_QBaseSize((QAbstractSocket*)self);
}

void q_abstractsocket_on_size(void* self, long long (*callback)()) {
    QAbstractSocket_OnSize((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_seek(void* self, long long pos) {
    return QAbstractSocket_Seek((QAbstractSocket*)self, pos);
}

bool q_abstractsocket_qbase_seek(void* self, long long pos) {
    return QAbstractSocket_QBaseSeek((QAbstractSocket*)self, pos);
}

void q_abstractsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QAbstractSocket_OnSeek((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_at_end(void* self) {
    return QAbstractSocket_AtEnd((QAbstractSocket*)self);
}

bool q_abstractsocket_qbase_at_end(void* self) {
    return QAbstractSocket_QBaseAtEnd((QAbstractSocket*)self);
}

void q_abstractsocket_on_at_end(void* self, bool (*callback)()) {
    QAbstractSocket_OnAtEnd((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_reset(void* self) {
    return QAbstractSocket_Reset((QAbstractSocket*)self);
}

bool q_abstractsocket_qbase_reset(void* self) {
    return QAbstractSocket_QBaseReset((QAbstractSocket*)self);
}

void q_abstractsocket_on_reset(void* self, bool (*callback)()) {
    QAbstractSocket_OnReset((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_can_read_line(void* self) {
    return QAbstractSocket_CanReadLine((QAbstractSocket*)self);
}

bool q_abstractsocket_qbase_can_read_line(void* self) {
    return QAbstractSocket_QBaseCanReadLine((QAbstractSocket*)self);
}

void q_abstractsocket_on_can_read_line(void* self, bool (*callback)()) {
    QAbstractSocket_OnCanReadLine((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_event(void* self, void* event) {
    return QAbstractSocket_Event((QAbstractSocket*)self, (QEvent*)event);
}

bool q_abstractsocket_qbase_event(void* self, void* event) {
    return QAbstractSocket_QBaseEvent((QAbstractSocket*)self, (QEvent*)event);
}

void q_abstractsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QAbstractSocket_OnEvent((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_event_filter(void* self, void* watched, void* event) {
    return QAbstractSocket_EventFilter((QAbstractSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractSocket_QBaseEventFilter((QAbstractSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAbstractSocket_OnEventFilter((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_timer_event(void* self, void* event) {
    QAbstractSocket_TimerEvent((QAbstractSocket*)self, (QTimerEvent*)event);
}

void q_abstractsocket_qbase_timer_event(void* self, void* event) {
    QAbstractSocket_QBaseTimerEvent((QAbstractSocket*)self, (QTimerEvent*)event);
}

void q_abstractsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnTimerEvent((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_child_event(void* self, void* event) {
    QAbstractSocket_ChildEvent((QAbstractSocket*)self, (QChildEvent*)event);
}

void q_abstractsocket_qbase_child_event(void* self, void* event) {
    QAbstractSocket_QBaseChildEvent((QAbstractSocket*)self, (QChildEvent*)event);
}

void q_abstractsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnChildEvent((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_custom_event(void* self, void* event) {
    QAbstractSocket_CustomEvent((QAbstractSocket*)self, (QEvent*)event);
}

void q_abstractsocket_qbase_custom_event(void* self, void* event) {
    QAbstractSocket_QBaseCustomEvent((QAbstractSocket*)self, (QEvent*)event);
}

void q_abstractsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnCustomEvent((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_connect_notify(void* self, void* signal) {
    QAbstractSocket_ConnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

void q_abstractsocket_qbase_connect_notify(void* self, void* signal) {
    QAbstractSocket_QBaseConnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

void q_abstractsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnConnectNotify((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_disconnect_notify(void* self, void* signal) {
    QAbstractSocket_DisconnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

void q_abstractsocket_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractSocket_QBaseDisconnectNotify((QAbstractSocket*)self, (QMetaMethod*)signal);
}

void q_abstractsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAbstractSocket_OnDisconnectNotify((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_set_open_mode(void* self, int32_t openMode) {
    QAbstractSocket_SetOpenMode((QAbstractSocket*)self, openMode);
}

void q_abstractsocket_qbase_set_open_mode(void* self, int32_t openMode) {
    QAbstractSocket_QBaseSetOpenMode((QAbstractSocket*)self, openMode);
}

void q_abstractsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_OnSetOpenMode((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_set_error_string(void* self, const char* errorString) {
    QAbstractSocket_SetErrorString((QAbstractSocket*)self, qstring(errorString));
}

void q_abstractsocket_qbase_set_error_string(void* self, const char* errorString) {
    QAbstractSocket_QBaseSetErrorString((QAbstractSocket*)self, qstring(errorString));
}

void q_abstractsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QAbstractSocket_OnSetErrorString((QAbstractSocket*)self, (intptr_t)callback);
}

QObject* q_abstractsocket_sender(void* self) {
    return QAbstractSocket_Sender((QAbstractSocket*)self);
}

QObject* q_abstractsocket_qbase_sender(void* self) {
    return QAbstractSocket_QBaseSender((QAbstractSocket*)self);
}

void q_abstractsocket_on_sender(void* self, QObject* (*callback)()) {
    QAbstractSocket_OnSender((QAbstractSocket*)self, (intptr_t)callback);
}

int32_t q_abstractsocket_sender_signal_index(void* self) {
    return QAbstractSocket_SenderSignalIndex((QAbstractSocket*)self);
}

int32_t q_abstractsocket_qbase_sender_signal_index(void* self) {
    return QAbstractSocket_QBaseSenderSignalIndex((QAbstractSocket*)self);
}

void q_abstractsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAbstractSocket_OnSenderSignalIndex((QAbstractSocket*)self, (intptr_t)callback);
}

int32_t q_abstractsocket_receivers(void* self, const char* signal) {
    return QAbstractSocket_Receivers((QAbstractSocket*)self, signal);
}

int32_t q_abstractsocket_qbase_receivers(void* self, const char* signal) {
    return QAbstractSocket_QBaseReceivers((QAbstractSocket*)self, signal);
}

void q_abstractsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAbstractSocket_OnReceivers((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_abstractsocket_is_signal_connected(void* self, void* signal) {
    return QAbstractSocket_IsSignalConnected((QAbstractSocket*)self, (QMetaMethod*)signal);
}

bool q_abstractsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractSocket_QBaseIsSignalConnected((QAbstractSocket*)self, (QMetaMethod*)signal);
}

void q_abstractsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAbstractSocket_OnIsSignalConnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_abstractsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_abstractsocket_delete(void* self) {
    QAbstractSocket_Delete((QAbstractSocket*)(self));
}
