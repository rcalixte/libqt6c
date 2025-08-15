#include "libqabstractsocket.hpp"
#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqtcpsocket.hpp"
#include "libqtcpsocket.h"

QTcpSocket* q_tcpsocket_new() {
    return QTcpSocket_new();
}

QTcpSocket* q_tcpsocket_new2(void* parent) {
    return QTcpSocket_new2((QObject*)parent);
}

const QMetaObject* q_tcpsocket_meta_object(void* self) {
    return QTcpSocket_MetaObject((QTcpSocket*)self);
}

void* q_tcpsocket_metacast(void* self, const char* param1) {
    return QTcpSocket_Metacast((QTcpSocket*)self, param1);
}

int32_t q_tcpsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpSocket_Metacall((QTcpSocket*)self, param1, param2, param3);
}

void q_tcpsocket_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QTcpSocket_OnMetacall((QTcpSocket*)self, (intptr_t)callback);
}

int32_t q_tcpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTcpSocket_QBaseMetacall((QTcpSocket*)self, param1, param2, param3);
}

const char* q_tcpsocket_tr(const char* s) {
    libqt_string _str = QTcpSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tcpsocket_bind(void* self, int64_t addr) {
    return QTcpSocket_Bind((QTcpSocket*)self, addr);
}

const char* q_tcpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QTcpSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tcpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTcpSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tcpsocket_bind2(void* self, int64_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

bool q_tcpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

int64_t q_tcpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

void q_tcpsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

void q_tcpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

bool q_tcpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

unsigned short q_tcpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

QHostAddress* q_tcpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

unsigned short q_tcpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

QHostAddress* q_tcpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

const char* q_tcpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_tcpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

void q_tcpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

int64_t q_tcpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

int64_t q_tcpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

int64_t q_tcpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

bool q_tcpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

void q_tcpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_tcpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

const char* q_tcpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

void q_tcpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

void q_tcpsocket_on_host_found(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

void q_tcpsocket_on_connected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

void q_tcpsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

void q_tcpsocket_on_state_changed(void* self, void (*callback)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

void q_tcpsocket_on_error_occurred(void* self, void (*callback)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_tcpsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

bool q_tcpsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

void q_tcpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

int64_t q_tcpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_tcpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_tcpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_tcpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_tcpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_tcpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_tcpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_tcpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_tcpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_tcpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_tcpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_tcpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_tcpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_tcpsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_tcpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_tcpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_tcpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_tcpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_tcpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_tcpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_tcpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_tcpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_tcpsocket_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_tcpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_tcpsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_tcpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_tcpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_tcpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_tcpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_tcpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_tcpsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_tcpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_tcpsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_tcpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_tcpsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_tcpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_tcpsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_tcpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_tcpsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_tcpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_tcpsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_tcpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tcpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tcpsocket_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tcpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tcpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tcpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tcpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tcpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tcpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tcpsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tcpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tcpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tcpsocket_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tcpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tcpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_tcpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tcpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tcpsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tcpsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tcpsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tcpsocket_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tcpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tcpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tcpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tcpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tcpsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_tcpsocket_dynamic_property_names");
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

QBindingStorage* q_tcpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tcpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tcpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tcpsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_tcpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tcpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tcpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_tcpsocket_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_tcpsocket_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tcpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_tcpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_tcpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tcpsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_tcpsocket_resume(void* self) {
    QTcpSocket_Resume((QTcpSocket*)self);
}

void q_tcpsocket_qbase_resume(void* self) {
    QTcpSocket_QBaseResume((QTcpSocket*)self);
}

void q_tcpsocket_on_resume(void* self, void (*callback)()) {
    QTcpSocket_OnResume((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QTcpSocket_ConnectToHost((QTcpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_tcpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QTcpSocket_QBaseConnectToHost((QTcpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_tcpsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QTcpSocket_OnConnectToHost((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_disconnect_from_host(void* self) {
    QTcpSocket_DisconnectFromHost((QTcpSocket*)self);
}

void q_tcpsocket_qbase_disconnect_from_host(void* self) {
    QTcpSocket_QBaseDisconnectFromHost((QTcpSocket*)self);
}

void q_tcpsocket_on_disconnect_from_host(void* self, void (*callback)()) {
    QTcpSocket_OnDisconnectFromHost((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_bytes_available(void* self) {
    return QTcpSocket_BytesAvailable((QTcpSocket*)self);
}

long long q_tcpsocket_qbase_bytes_available(void* self) {
    return QTcpSocket_QBaseBytesAvailable((QTcpSocket*)self);
}

void q_tcpsocket_on_bytes_available(void* self, long long (*callback)()) {
    QTcpSocket_OnBytesAvailable((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_bytes_to_write(void* self) {
    return QTcpSocket_BytesToWrite((QTcpSocket*)self);
}

long long q_tcpsocket_qbase_bytes_to_write(void* self) {
    return QTcpSocket_QBaseBytesToWrite((QTcpSocket*)self);
}

void q_tcpsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QTcpSocket_OnBytesToWrite((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_read_buffer_size(void* self, long long size) {
    QTcpSocket_SetReadBufferSize((QTcpSocket*)self, size);
}

void q_tcpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QTcpSocket_QBaseSetReadBufferSize((QTcpSocket*)self, size);
}

void q_tcpsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long)) {
    QTcpSocket_OnSetReadBufferSize((QTcpSocket*)self, (intptr_t)callback);
}

intptr_t q_tcpsocket_socket_descriptor(void* self) {
    return QTcpSocket_SocketDescriptor((QTcpSocket*)self);
}

intptr_t q_tcpsocket_qbase_socket_descriptor(void* self) {
    return QTcpSocket_QBaseSocketDescriptor((QTcpSocket*)self);
}

void q_tcpsocket_on_socket_descriptor(void* self, intptr_t (*callback)()) {
    QTcpSocket_OnSocketDescriptor((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QTcpSocket_SetSocketDescriptor((QTcpSocket*)self, socketDescriptor, state, openMode);
}

bool q_tcpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QTcpSocket_QBaseSetSocketDescriptor((QTcpSocket*)self, socketDescriptor, state, openMode);
}

void q_tcpsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int64_t, int64_t)) {
    QTcpSocket_OnSetSocketDescriptor((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_socket_option(void* self, int64_t option, void* value) {
    QTcpSocket_SetSocketOption((QTcpSocket*)self, option, (QVariant*)value);
}

void q_tcpsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QTcpSocket_QBaseSetSocketOption((QTcpSocket*)self, option, (QVariant*)value);
}

void q_tcpsocket_on_set_socket_option(void* self, void (*callback)(void*, int64_t, void*)) {
    QTcpSocket_OnSetSocketOption((QTcpSocket*)self, (intptr_t)callback);
}

QVariant* q_tcpsocket_socket_option(void* self, int64_t option) {
    return QTcpSocket_SocketOption((QTcpSocket*)self, option);
}

QVariant* q_tcpsocket_qbase_socket_option(void* self, int64_t option) {
    return QTcpSocket_QBaseSocketOption((QTcpSocket*)self, option);
}

void q_tcpsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int64_t)) {
    QTcpSocket_OnSocketOption((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_close(void* self) {
    QTcpSocket_Close((QTcpSocket*)self);
}

void q_tcpsocket_qbase_close(void* self) {
    QTcpSocket_QBaseClose((QTcpSocket*)self);
}

void q_tcpsocket_on_close(void* self, void (*callback)()) {
    QTcpSocket_OnClose((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_is_sequential(void* self) {
    return QTcpSocket_IsSequential((QTcpSocket*)self);
}

bool q_tcpsocket_qbase_is_sequential(void* self) {
    return QTcpSocket_QBaseIsSequential((QTcpSocket*)self);
}

void q_tcpsocket_on_is_sequential(void* self, bool (*callback)()) {
    QTcpSocket_OnIsSequential((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_wait_for_connected(void* self, int msecs) {
    return QTcpSocket_WaitForConnected((QTcpSocket*)self, msecs);
}

bool q_tcpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForConnected((QTcpSocket*)self, msecs);
}

void q_tcpsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int)) {
    QTcpSocket_OnWaitForConnected((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_wait_for_ready_read(void* self, int msecs) {
    return QTcpSocket_WaitForReadyRead((QTcpSocket*)self, msecs);
}

bool q_tcpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForReadyRead((QTcpSocket*)self, msecs);
}

void q_tcpsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QTcpSocket_OnWaitForReadyRead((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QTcpSocket_WaitForBytesWritten((QTcpSocket*)self, msecs);
}

bool q_tcpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForBytesWritten((QTcpSocket*)self, msecs);
}

void q_tcpsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QTcpSocket_OnWaitForBytesWritten((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_wait_for_disconnected(void* self, int msecs) {
    return QTcpSocket_WaitForDisconnected((QTcpSocket*)self, msecs);
}

bool q_tcpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QTcpSocket_QBaseWaitForDisconnected((QTcpSocket*)self, msecs);
}

void q_tcpsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int)) {
    QTcpSocket_OnWaitForDisconnected((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_read_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_ReadData((QTcpSocket*)self, data, maxlen);
}

long long q_tcpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_QBaseReadData((QTcpSocket*)self, data, maxlen);
}

void q_tcpsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QTcpSocket_OnReadData((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_ReadLineData((QTcpSocket*)self, data, maxlen);
}

long long q_tcpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QTcpSocket_QBaseReadLineData((QTcpSocket*)self, data, maxlen);
}

void q_tcpsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QTcpSocket_OnReadLineData((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_skip_data(void* self, long long maxSize) {
    return QTcpSocket_SkipData((QTcpSocket*)self, maxSize);
}

long long q_tcpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QTcpSocket_QBaseSkipData((QTcpSocket*)self, maxSize);
}

void q_tcpsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QTcpSocket_OnSkipData((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QTcpSocket_WriteData((QTcpSocket*)self, data, lenVal);
}

long long q_tcpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QTcpSocket_QBaseWriteData((QTcpSocket*)self, data, lenVal);
}

void q_tcpsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QTcpSocket_OnWriteData((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_open(void* self, int64_t mode) {
    return QTcpSocket_Open((QTcpSocket*)self, mode);
}

bool q_tcpsocket_qbase_open(void* self, int64_t mode) {
    return QTcpSocket_QBaseOpen((QTcpSocket*)self, mode);
}

void q_tcpsocket_on_open(void* self, bool (*callback)(void*, int64_t)) {
    QTcpSocket_OnOpen((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_pos(void* self) {
    return QTcpSocket_Pos((QTcpSocket*)self);
}

long long q_tcpsocket_qbase_pos(void* self) {
    return QTcpSocket_QBasePos((QTcpSocket*)self);
}

void q_tcpsocket_on_pos(void* self, long long (*callback)()) {
    QTcpSocket_OnPos((QTcpSocket*)self, (intptr_t)callback);
}

long long q_tcpsocket_size(void* self) {
    return QTcpSocket_Size((QTcpSocket*)self);
}

long long q_tcpsocket_qbase_size(void* self) {
    return QTcpSocket_QBaseSize((QTcpSocket*)self);
}

void q_tcpsocket_on_size(void* self, long long (*callback)()) {
    QTcpSocket_OnSize((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_seek(void* self, long long pos) {
    return QTcpSocket_Seek((QTcpSocket*)self, pos);
}

bool q_tcpsocket_qbase_seek(void* self, long long pos) {
    return QTcpSocket_QBaseSeek((QTcpSocket*)self, pos);
}

void q_tcpsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QTcpSocket_OnSeek((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_at_end(void* self) {
    return QTcpSocket_AtEnd((QTcpSocket*)self);
}

bool q_tcpsocket_qbase_at_end(void* self) {
    return QTcpSocket_QBaseAtEnd((QTcpSocket*)self);
}

void q_tcpsocket_on_at_end(void* self, bool (*callback)()) {
    QTcpSocket_OnAtEnd((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_reset(void* self) {
    return QTcpSocket_Reset((QTcpSocket*)self);
}

bool q_tcpsocket_qbase_reset(void* self) {
    return QTcpSocket_QBaseReset((QTcpSocket*)self);
}

void q_tcpsocket_on_reset(void* self, bool (*callback)()) {
    QTcpSocket_OnReset((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_can_read_line(void* self) {
    return QTcpSocket_CanReadLine((QTcpSocket*)self);
}

bool q_tcpsocket_qbase_can_read_line(void* self) {
    return QTcpSocket_QBaseCanReadLine((QTcpSocket*)self);
}

void q_tcpsocket_on_can_read_line(void* self, bool (*callback)()) {
    QTcpSocket_OnCanReadLine((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_event(void* self, void* event) {
    return QTcpSocket_Event((QTcpSocket*)self, (QEvent*)event);
}

bool q_tcpsocket_qbase_event(void* self, void* event) {
    return QTcpSocket_QBaseEvent((QTcpSocket*)self, (QEvent*)event);
}

void q_tcpsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QTcpSocket_OnEvent((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_event_filter(void* self, void* watched, void* event) {
    return QTcpSocket_EventFilter((QTcpSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tcpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QTcpSocket_QBaseEventFilter((QTcpSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_tcpsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTcpSocket_OnEventFilter((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_timer_event(void* self, void* event) {
    QTcpSocket_TimerEvent((QTcpSocket*)self, (QTimerEvent*)event);
}

void q_tcpsocket_qbase_timer_event(void* self, void* event) {
    QTcpSocket_QBaseTimerEvent((QTcpSocket*)self, (QTimerEvent*)event);
}

void q_tcpsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnTimerEvent((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_child_event(void* self, void* event) {
    QTcpSocket_ChildEvent((QTcpSocket*)self, (QChildEvent*)event);
}

void q_tcpsocket_qbase_child_event(void* self, void* event) {
    QTcpSocket_QBaseChildEvent((QTcpSocket*)self, (QChildEvent*)event);
}

void q_tcpsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnChildEvent((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_custom_event(void* self, void* event) {
    QTcpSocket_CustomEvent((QTcpSocket*)self, (QEvent*)event);
}

void q_tcpsocket_qbase_custom_event(void* self, void* event) {
    QTcpSocket_QBaseCustomEvent((QTcpSocket*)self, (QEvent*)event);
}

void q_tcpsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnCustomEvent((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_connect_notify(void* self, void* signal) {
    QTcpSocket_ConnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

void q_tcpsocket_qbase_connect_notify(void* self, void* signal) {
    QTcpSocket_QBaseConnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

void q_tcpsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnConnectNotify((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_disconnect_notify(void* self, void* signal) {
    QTcpSocket_DisconnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

void q_tcpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QTcpSocket_QBaseDisconnectNotify((QTcpSocket*)self, (QMetaMethod*)signal);
}

void q_tcpsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnDisconnectNotify((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_socket_state(void* self, int64_t state) {
    QTcpSocket_SetSocketState((QTcpSocket*)self, state);
}

void q_tcpsocket_qbase_set_socket_state(void* self, int64_t state) {
    QTcpSocket_QBaseSetSocketState((QTcpSocket*)self, state);
}

void q_tcpsocket_on_set_socket_state(void* self, void (*callback)(void*, int64_t)) {
    QTcpSocket_OnSetSocketState((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_socket_error(void* self, int64_t socketError) {
    QTcpSocket_SetSocketError((QTcpSocket*)self, socketError);
}

void q_tcpsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QTcpSocket_QBaseSetSocketError((QTcpSocket*)self, socketError);
}

void q_tcpsocket_on_set_socket_error(void* self, void (*callback)(void*, int64_t)) {
    QTcpSocket_OnSetSocketError((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_local_port(void* self, unsigned short port) {
    QTcpSocket_SetLocalPort((QTcpSocket*)self, port);
}

void q_tcpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QTcpSocket_QBaseSetLocalPort((QTcpSocket*)self, port);
}

void q_tcpsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short)) {
    QTcpSocket_OnSetLocalPort((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_local_address(void* self, void* address) {
    QTcpSocket_SetLocalAddress((QTcpSocket*)self, (QHostAddress*)address);
}

void q_tcpsocket_qbase_set_local_address(void* self, void* address) {
    QTcpSocket_QBaseSetLocalAddress((QTcpSocket*)self, (QHostAddress*)address);
}

void q_tcpsocket_on_set_local_address(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnSetLocalAddress((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_peer_port(void* self, unsigned short port) {
    QTcpSocket_SetPeerPort((QTcpSocket*)self, port);
}

void q_tcpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QTcpSocket_QBaseSetPeerPort((QTcpSocket*)self, port);
}

void q_tcpsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short)) {
    QTcpSocket_OnSetPeerPort((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_peer_address(void* self, void* address) {
    QTcpSocket_SetPeerAddress((QTcpSocket*)self, (QHostAddress*)address);
}

void q_tcpsocket_qbase_set_peer_address(void* self, void* address) {
    QTcpSocket_QBaseSetPeerAddress((QTcpSocket*)self, (QHostAddress*)address);
}

void q_tcpsocket_on_set_peer_address(void* self, void (*callback)(void*, void*)) {
    QTcpSocket_OnSetPeerAddress((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_peer_name(void* self, const char* name) {
    QTcpSocket_SetPeerName((QTcpSocket*)self, qstring(name));
}

void q_tcpsocket_qbase_set_peer_name(void* self, const char* name) {
    QTcpSocket_QBaseSetPeerName((QTcpSocket*)self, qstring(name));
}

void q_tcpsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*)) {
    QTcpSocket_OnSetPeerName((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_open_mode(void* self, int64_t openMode) {
    QTcpSocket_SetOpenMode((QTcpSocket*)self, openMode);
}

void q_tcpsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QTcpSocket_QBaseSetOpenMode((QTcpSocket*)self, openMode);
}

void q_tcpsocket_on_set_open_mode(void* self, void (*callback)(void*, int64_t)) {
    QTcpSocket_OnSetOpenMode((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_set_error_string(void* self, const char* errorString) {
    QTcpSocket_SetErrorString((QTcpSocket*)self, qstring(errorString));
}

void q_tcpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QTcpSocket_QBaseSetErrorString((QTcpSocket*)self, qstring(errorString));
}

void q_tcpsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QTcpSocket_OnSetErrorString((QTcpSocket*)self, (intptr_t)callback);
}

QObject* q_tcpsocket_sender(void* self) {
    return QTcpSocket_Sender((QTcpSocket*)self);
}

QObject* q_tcpsocket_qbase_sender(void* self) {
    return QTcpSocket_QBaseSender((QTcpSocket*)self);
}

void q_tcpsocket_on_sender(void* self, QObject* (*callback)()) {
    QTcpSocket_OnSender((QTcpSocket*)self, (intptr_t)callback);
}

int32_t q_tcpsocket_sender_signal_index(void* self) {
    return QTcpSocket_SenderSignalIndex((QTcpSocket*)self);
}

int32_t q_tcpsocket_qbase_sender_signal_index(void* self) {
    return QTcpSocket_QBaseSenderSignalIndex((QTcpSocket*)self);
}

void q_tcpsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTcpSocket_OnSenderSignalIndex((QTcpSocket*)self, (intptr_t)callback);
}

int32_t q_tcpsocket_receivers(void* self, const char* signal) {
    return QTcpSocket_Receivers((QTcpSocket*)self, signal);
}

int32_t q_tcpsocket_qbase_receivers(void* self, const char* signal) {
    return QTcpSocket_QBaseReceivers((QTcpSocket*)self, signal);
}

void q_tcpsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTcpSocket_OnReceivers((QTcpSocket*)self, (intptr_t)callback);
}

bool q_tcpsocket_is_signal_connected(void* self, void* signal) {
    return QTcpSocket_IsSignalConnected((QTcpSocket*)self, (QMetaMethod*)signal);
}

bool q_tcpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QTcpSocket_QBaseIsSignalConnected((QTcpSocket*)self, (QMetaMethod*)signal);
}

void q_tcpsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTcpSocket_OnIsSignalConnected((QTcpSocket*)self, (intptr_t)callback);
}

void q_tcpsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_tcpsocket_delete(void* self) {
    QTcpSocket_Delete((QTcpSocket*)(self));
}
