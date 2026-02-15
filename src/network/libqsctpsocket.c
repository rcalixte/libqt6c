#include "libqabstractsocket.hpp"
#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkdatagram.hpp"
#include "../libqobject.hpp"
#include "libqtcpsocket.hpp"
#include "../libqvariant.hpp"
#include "libqsctpsocket.hpp"
#include "libqsctpsocket.h"

QSctpSocket* q_sctpsocket_new() {
    return QSctpSocket_new();
}

QSctpSocket* q_sctpsocket_new2(void* parent) {
    return QSctpSocket_new2((QObject*)parent);
}

const QMetaObject* q_sctpsocket_meta_object(void* self) {
    return QSctpSocket_MetaObject((QSctpSocket*)self);
}

void q_sctpsocket_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QSctpSocket_OnMetaObject((QSctpSocket*)self, (intptr_t)callback);
}

const QMetaObject* q_sctpsocket_qbase_meta_object(void* self) {
    return QSctpSocket_QBaseMetaObject((QSctpSocket*)self);
}

void* q_sctpsocket_metacast(void* self, const char* param1) {
    return QSctpSocket_Metacast((QSctpSocket*)self, param1);
}

void q_sctpsocket_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSctpSocket_OnMetacast((QSctpSocket*)self, (intptr_t)callback);
}

void* q_sctpsocket_qbase_metacast(void* self, const char* param1) {
    return QSctpSocket_QBaseMetacast((QSctpSocket*)self, param1);
}

int32_t q_sctpsocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSctpSocket_Metacall((QSctpSocket*)self, param1, param2, param3);
}

void q_sctpsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSctpSocket_OnMetacall((QSctpSocket*)self, (intptr_t)callback);
}

int32_t q_sctpsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSctpSocket_QBaseMetacall((QSctpSocket*)self, param1, param2, param3);
}

const char* q_sctpsocket_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpsocket_close(void* self) {
    QSctpSocket_Close((QSctpSocket*)self);
}

void q_sctpsocket_on_close(void* self, void (*callback)()) {
    QSctpSocket_OnClose((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_qbase_close(void* self) {
    QSctpSocket_QBaseClose((QSctpSocket*)self);
}

void q_sctpsocket_disconnect_from_host(void* self) {
    QSctpSocket_DisconnectFromHost((QSctpSocket*)self);
}

void q_sctpsocket_on_disconnect_from_host(void* self, void (*callback)()) {
    QSctpSocket_OnDisconnectFromHost((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_qbase_disconnect_from_host(void* self) {
    QSctpSocket_QBaseDisconnectFromHost((QSctpSocket*)self);
}

void q_sctpsocket_set_maximum_channel_count(void* self, int count) {
    QSctpSocket_SetMaximumChannelCount((QSctpSocket*)self, count);
}

int32_t q_sctpsocket_maximum_channel_count(void* self) {
    return QSctpSocket_MaximumChannelCount((QSctpSocket*)self);
}

bool q_sctpsocket_is_in_datagram_mode(void* self) {
    return QSctpSocket_IsInDatagramMode((QSctpSocket*)self);
}

QNetworkDatagram* q_sctpsocket_read_datagram(void* self) {
    return QSctpSocket_ReadDatagram((QSctpSocket*)self);
}

bool q_sctpsocket_write_datagram(void* self, void* datagram) {
    return QSctpSocket_WriteDatagram((QSctpSocket*)self, (QNetworkDatagram*)datagram);
}

long long q_sctpsocket_read_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_ReadData((QSctpSocket*)self, data, maxlen);
}

void q_sctpsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSctpSocket_OnReadData((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_QBaseReadData((QSctpSocket*)self, data, maxlen);
}

long long q_sctpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_ReadLineData((QSctpSocket*)self, data, maxlen);
}

void q_sctpsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSctpSocket_OnReadLineData((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QSctpSocket_QBaseReadLineData((QSctpSocket*)self, data, maxlen);
}

const char* q_sctpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sctpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sctpsocket_bind2(void* self, int32_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

bool q_sctpsocket_bind3(void* self, int32_t addr, unsigned short port, int32_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

int32_t q_sctpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

void q_sctpsocket_set_pause_mode(void* self, int32_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

void q_sctpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

bool q_sctpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

unsigned short q_sctpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

QHostAddress* q_sctpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

unsigned short q_sctpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

QHostAddress* q_sctpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

const char* q_sctpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sctpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

void q_sctpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

int32_t q_sctpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

int32_t q_sctpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

int32_t q_sctpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

bool q_sctpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

void q_sctpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_sctpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

const char* q_sctpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

void q_sctpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

void q_sctpsocket_on_host_found(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

void q_sctpsocket_on_connected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

void q_sctpsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_state_changed(void* self, int32_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

void q_sctpsocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_error_occurred(void* self, int32_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

void q_sctpsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_sctpsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

bool q_sctpsocket_bind22(void* self, unsigned short port, int32_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

void q_sctpsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

int32_t q_sctpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_sctpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_sctpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_sctpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_sctpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_sctpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_sctpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_sctpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_sctpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_sctpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_sctpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_sctpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_sctpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_sctpsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sctpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sctpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_sctpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_sctpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_sctpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_sctpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_sctpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_sctpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_sctpsocket_write3(void* self, char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_sctpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_sctpsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sctpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_sctpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_sctpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_sctpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_sctpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_sctpsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_sctpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_sctpsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_sctpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_sctpsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_sctpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_sctpsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_sctpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_sctpsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_sctpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_sctpsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_sctpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sctpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sctpsocket_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sctpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sctpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sctpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sctpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sctpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sctpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sctpsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sctpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_sctpsocket_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_sctpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sctpsocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sctpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sctpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sctpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sctpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sctpsocket_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_sctpsocket_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sctpsocket_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sctpsocket_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_sctpsocket_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sctpsocket_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_sctpsocket_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_sctpsocket_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_sctpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sctpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sctpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sctpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sctpsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sctpsocket_dynamic_property_names\n");
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

QBindingStorage* q_sctpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sctpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sctpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sctpsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sctpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sctpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sctpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_sctpsocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_sctpsocket_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_sctpsocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_sctpsocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sctpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_sctpsocket_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_sctpsocket_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_sctpsocket_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_sctpsocket_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_sctpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sctpsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_sctpsocket_resume(void* self) {
    QSctpSocket_Resume((QSctpSocket*)self);
}

void q_sctpsocket_qbase_resume(void* self) {
    QSctpSocket_QBaseResume((QSctpSocket*)self);
}

void q_sctpsocket_on_resume(void* self, void (*callback)()) {
    QSctpSocket_OnResume((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QSctpSocket_Bind((QSctpSocket*)self, (QHostAddress*)address, port, mode);
}

bool q_sctpsocket_qbase_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QSctpSocket_QBaseBind((QSctpSocket*)self, (QHostAddress*)address, port, mode);
}

void q_sctpsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int32_t)) {
    QSctpSocket_OnBind((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QSctpSocket_ConnectToHost((QSctpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_sctpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QSctpSocket_QBaseConnectToHost((QSctpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_sctpsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t)) {
    QSctpSocket_OnConnectToHost((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_bytes_available(void* self) {
    return QSctpSocket_BytesAvailable((QSctpSocket*)self);
}

long long q_sctpsocket_qbase_bytes_available(void* self) {
    return QSctpSocket_QBaseBytesAvailable((QSctpSocket*)self);
}

void q_sctpsocket_on_bytes_available(void* self, long long (*callback)()) {
    QSctpSocket_OnBytesAvailable((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_bytes_to_write(void* self) {
    return QSctpSocket_BytesToWrite((QSctpSocket*)self);
}

long long q_sctpsocket_qbase_bytes_to_write(void* self) {
    return QSctpSocket_QBaseBytesToWrite((QSctpSocket*)self);
}

void q_sctpsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QSctpSocket_OnBytesToWrite((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_read_buffer_size(void* self, long long size) {
    QSctpSocket_SetReadBufferSize((QSctpSocket*)self, size);
}

void q_sctpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QSctpSocket_QBaseSetReadBufferSize((QSctpSocket*)self, size);
}

void q_sctpsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long)) {
    QSctpSocket_OnSetReadBufferSize((QSctpSocket*)self, (intptr_t)callback);
}

intptr_t q_sctpsocket_socket_descriptor(void* self) {
    return QSctpSocket_SocketDescriptor((QSctpSocket*)self);
}

intptr_t q_sctpsocket_qbase_socket_descriptor(void* self) {
    return QSctpSocket_QBaseSocketDescriptor((QSctpSocket*)self);
}

void q_sctpsocket_on_socket_descriptor(void* self, intptr_t (*callback)()) {
    QSctpSocket_OnSocketDescriptor((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QSctpSocket_SetSocketDescriptor((QSctpSocket*)self, socketDescriptor, state, openMode);
}

bool q_sctpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QSctpSocket_QBaseSetSocketDescriptor((QSctpSocket*)self, socketDescriptor, state, openMode);
}

void q_sctpsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t)) {
    QSctpSocket_OnSetSocketDescriptor((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_socket_option(void* self, int32_t option, void* value) {
    QSctpSocket_SetSocketOption((QSctpSocket*)self, option, (QVariant*)value);
}

void q_sctpsocket_qbase_set_socket_option(void* self, int32_t option, void* value) {
    QSctpSocket_QBaseSetSocketOption((QSctpSocket*)self, option, (QVariant*)value);
}

void q_sctpsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*)) {
    QSctpSocket_OnSetSocketOption((QSctpSocket*)self, (intptr_t)callback);
}

QVariant* q_sctpsocket_socket_option(void* self, int32_t option) {
    return QSctpSocket_SocketOption((QSctpSocket*)self, option);
}

QVariant* q_sctpsocket_qbase_socket_option(void* self, int32_t option) {
    return QSctpSocket_QBaseSocketOption((QSctpSocket*)self, option);
}

void q_sctpsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t)) {
    QSctpSocket_OnSocketOption((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_is_sequential(void* self) {
    return QSctpSocket_IsSequential((QSctpSocket*)self);
}

bool q_sctpsocket_qbase_is_sequential(void* self) {
    return QSctpSocket_QBaseIsSequential((QSctpSocket*)self);
}

void q_sctpsocket_on_is_sequential(void* self, bool (*callback)()) {
    QSctpSocket_OnIsSequential((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_wait_for_connected(void* self, int msecs) {
    return QSctpSocket_WaitForConnected((QSctpSocket*)self, msecs);
}

bool q_sctpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForConnected((QSctpSocket*)self, msecs);
}

void q_sctpsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int)) {
    QSctpSocket_OnWaitForConnected((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_wait_for_ready_read(void* self, int msecs) {
    return QSctpSocket_WaitForReadyRead((QSctpSocket*)self, msecs);
}

bool q_sctpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForReadyRead((QSctpSocket*)self, msecs);
}

void q_sctpsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QSctpSocket_OnWaitForReadyRead((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QSctpSocket_WaitForBytesWritten((QSctpSocket*)self, msecs);
}

bool q_sctpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForBytesWritten((QSctpSocket*)self, msecs);
}

void q_sctpsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QSctpSocket_OnWaitForBytesWritten((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_wait_for_disconnected(void* self, int msecs) {
    return QSctpSocket_WaitForDisconnected((QSctpSocket*)self, msecs);
}

bool q_sctpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QSctpSocket_QBaseWaitForDisconnected((QSctpSocket*)self, msecs);
}

void q_sctpsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int)) {
    QSctpSocket_OnWaitForDisconnected((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_skip_data(void* self, long long maxSize) {
    return QSctpSocket_SkipData((QSctpSocket*)self, maxSize);
}

long long q_sctpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QSctpSocket_QBaseSkipData((QSctpSocket*)self, maxSize);
}

void q_sctpsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QSctpSocket_OnSkipData((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QSctpSocket_WriteData((QSctpSocket*)self, data, lenVal);
}

long long q_sctpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QSctpSocket_QBaseWriteData((QSctpSocket*)self, data, lenVal);
}

void q_sctpsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QSctpSocket_OnWriteData((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_open(void* self, int32_t mode) {
    return QSctpSocket_Open((QSctpSocket*)self, mode);
}

bool q_sctpsocket_qbase_open(void* self, int32_t mode) {
    return QSctpSocket_QBaseOpen((QSctpSocket*)self, mode);
}

void q_sctpsocket_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QSctpSocket_OnOpen((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_pos(void* self) {
    return QSctpSocket_Pos((QSctpSocket*)self);
}

long long q_sctpsocket_qbase_pos(void* self) {
    return QSctpSocket_QBasePos((QSctpSocket*)self);
}

void q_sctpsocket_on_pos(void* self, long long (*callback)()) {
    QSctpSocket_OnPos((QSctpSocket*)self, (intptr_t)callback);
}

long long q_sctpsocket_size(void* self) {
    return QSctpSocket_Size((QSctpSocket*)self);
}

long long q_sctpsocket_qbase_size(void* self) {
    return QSctpSocket_QBaseSize((QSctpSocket*)self);
}

void q_sctpsocket_on_size(void* self, long long (*callback)()) {
    QSctpSocket_OnSize((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_seek(void* self, long long pos) {
    return QSctpSocket_Seek((QSctpSocket*)self, pos);
}

bool q_sctpsocket_qbase_seek(void* self, long long pos) {
    return QSctpSocket_QBaseSeek((QSctpSocket*)self, pos);
}

void q_sctpsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QSctpSocket_OnSeek((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_at_end(void* self) {
    return QSctpSocket_AtEnd((QSctpSocket*)self);
}

bool q_sctpsocket_qbase_at_end(void* self) {
    return QSctpSocket_QBaseAtEnd((QSctpSocket*)self);
}

void q_sctpsocket_on_at_end(void* self, bool (*callback)()) {
    QSctpSocket_OnAtEnd((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_reset(void* self) {
    return QSctpSocket_Reset((QSctpSocket*)self);
}

bool q_sctpsocket_qbase_reset(void* self) {
    return QSctpSocket_QBaseReset((QSctpSocket*)self);
}

void q_sctpsocket_on_reset(void* self, bool (*callback)()) {
    QSctpSocket_OnReset((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_can_read_line(void* self) {
    return QSctpSocket_CanReadLine((QSctpSocket*)self);
}

bool q_sctpsocket_qbase_can_read_line(void* self) {
    return QSctpSocket_QBaseCanReadLine((QSctpSocket*)self);
}

void q_sctpsocket_on_can_read_line(void* self, bool (*callback)()) {
    QSctpSocket_OnCanReadLine((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_event(void* self, void* event) {
    return QSctpSocket_Event((QSctpSocket*)self, (QEvent*)event);
}

bool q_sctpsocket_qbase_event(void* self, void* event) {
    return QSctpSocket_QBaseEvent((QSctpSocket*)self, (QEvent*)event);
}

void q_sctpsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QSctpSocket_OnEvent((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_event_filter(void* self, void* watched, void* event) {
    return QSctpSocket_EventFilter((QSctpSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sctpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QSctpSocket_QBaseEventFilter((QSctpSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_sctpsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSctpSocket_OnEventFilter((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_timer_event(void* self, void* event) {
    QSctpSocket_TimerEvent((QSctpSocket*)self, (QTimerEvent*)event);
}

void q_sctpsocket_qbase_timer_event(void* self, void* event) {
    QSctpSocket_QBaseTimerEvent((QSctpSocket*)self, (QTimerEvent*)event);
}

void q_sctpsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnTimerEvent((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_child_event(void* self, void* event) {
    QSctpSocket_ChildEvent((QSctpSocket*)self, (QChildEvent*)event);
}

void q_sctpsocket_qbase_child_event(void* self, void* event) {
    QSctpSocket_QBaseChildEvent((QSctpSocket*)self, (QChildEvent*)event);
}

void q_sctpsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnChildEvent((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_custom_event(void* self, void* event) {
    QSctpSocket_CustomEvent((QSctpSocket*)self, (QEvent*)event);
}

void q_sctpsocket_qbase_custom_event(void* self, void* event) {
    QSctpSocket_QBaseCustomEvent((QSctpSocket*)self, (QEvent*)event);
}

void q_sctpsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnCustomEvent((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_connect_notify(void* self, void* signal) {
    QSctpSocket_ConnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

void q_sctpsocket_qbase_connect_notify(void* self, void* signal) {
    QSctpSocket_QBaseConnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

void q_sctpsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnConnectNotify((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_disconnect_notify(void* self, void* signal) {
    QSctpSocket_DisconnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

void q_sctpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QSctpSocket_QBaseDisconnectNotify((QSctpSocket*)self, (QMetaMethod*)signal);
}

void q_sctpsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnDisconnectNotify((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_socket_state(void* self, int32_t state) {
    QSctpSocket_SetSocketState((QSctpSocket*)self, state);
}

void q_sctpsocket_qbase_set_socket_state(void* self, int32_t state) {
    QSctpSocket_QBaseSetSocketState((QSctpSocket*)self, state);
}

void q_sctpsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t)) {
    QSctpSocket_OnSetSocketState((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_socket_error(void* self, int32_t socketError) {
    QSctpSocket_SetSocketError((QSctpSocket*)self, socketError);
}

void q_sctpsocket_qbase_set_socket_error(void* self, int32_t socketError) {
    QSctpSocket_QBaseSetSocketError((QSctpSocket*)self, socketError);
}

void q_sctpsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t)) {
    QSctpSocket_OnSetSocketError((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_local_port(void* self, unsigned short port) {
    QSctpSocket_SetLocalPort((QSctpSocket*)self, port);
}

void q_sctpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QSctpSocket_QBaseSetLocalPort((QSctpSocket*)self, port);
}

void q_sctpsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short)) {
    QSctpSocket_OnSetLocalPort((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_local_address(void* self, void* address) {
    QSctpSocket_SetLocalAddress((QSctpSocket*)self, (QHostAddress*)address);
}

void q_sctpsocket_qbase_set_local_address(void* self, void* address) {
    QSctpSocket_QBaseSetLocalAddress((QSctpSocket*)self, (QHostAddress*)address);
}

void q_sctpsocket_on_set_local_address(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnSetLocalAddress((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_peer_port(void* self, unsigned short port) {
    QSctpSocket_SetPeerPort((QSctpSocket*)self, port);
}

void q_sctpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QSctpSocket_QBaseSetPeerPort((QSctpSocket*)self, port);
}

void q_sctpsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short)) {
    QSctpSocket_OnSetPeerPort((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_peer_address(void* self, void* address) {
    QSctpSocket_SetPeerAddress((QSctpSocket*)self, (QHostAddress*)address);
}

void q_sctpsocket_qbase_set_peer_address(void* self, void* address) {
    QSctpSocket_QBaseSetPeerAddress((QSctpSocket*)self, (QHostAddress*)address);
}

void q_sctpsocket_on_set_peer_address(void* self, void (*callback)(void*, void*)) {
    QSctpSocket_OnSetPeerAddress((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_peer_name(void* self, const char* name) {
    QSctpSocket_SetPeerName((QSctpSocket*)self, qstring(name));
}

void q_sctpsocket_qbase_set_peer_name(void* self, const char* name) {
    QSctpSocket_QBaseSetPeerName((QSctpSocket*)self, qstring(name));
}

void q_sctpsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*)) {
    QSctpSocket_OnSetPeerName((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_open_mode(void* self, int32_t openMode) {
    QSctpSocket_SetOpenMode((QSctpSocket*)self, openMode);
}

void q_sctpsocket_qbase_set_open_mode(void* self, int32_t openMode) {
    QSctpSocket_QBaseSetOpenMode((QSctpSocket*)self, openMode);
}

void q_sctpsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QSctpSocket_OnSetOpenMode((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_set_error_string(void* self, const char* errorString) {
    QSctpSocket_SetErrorString((QSctpSocket*)self, qstring(errorString));
}

void q_sctpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QSctpSocket_QBaseSetErrorString((QSctpSocket*)self, qstring(errorString));
}

void q_sctpsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QSctpSocket_OnSetErrorString((QSctpSocket*)self, (intptr_t)callback);
}

QObject* q_sctpsocket_sender(void* self) {
    return QSctpSocket_Sender((QSctpSocket*)self);
}

QObject* q_sctpsocket_qbase_sender(void* self) {
    return QSctpSocket_QBaseSender((QSctpSocket*)self);
}

void q_sctpsocket_on_sender(void* self, QObject* (*callback)()) {
    QSctpSocket_OnSender((QSctpSocket*)self, (intptr_t)callback);
}

int32_t q_sctpsocket_sender_signal_index(void* self) {
    return QSctpSocket_SenderSignalIndex((QSctpSocket*)self);
}

int32_t q_sctpsocket_qbase_sender_signal_index(void* self) {
    return QSctpSocket_QBaseSenderSignalIndex((QSctpSocket*)self);
}

void q_sctpsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSctpSocket_OnSenderSignalIndex((QSctpSocket*)self, (intptr_t)callback);
}

int32_t q_sctpsocket_receivers(void* self, const char* signal) {
    return QSctpSocket_Receivers((QSctpSocket*)self, signal);
}

int32_t q_sctpsocket_qbase_receivers(void* self, const char* signal) {
    return QSctpSocket_QBaseReceivers((QSctpSocket*)self, signal);
}

void q_sctpsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSctpSocket_OnReceivers((QSctpSocket*)self, (intptr_t)callback);
}

bool q_sctpsocket_is_signal_connected(void* self, void* signal) {
    return QSctpSocket_IsSignalConnected((QSctpSocket*)self, (QMetaMethod*)signal);
}

bool q_sctpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QSctpSocket_QBaseIsSignalConnected((QSctpSocket*)self, (QMetaMethod*)signal);
}

void q_sctpsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSctpSocket_OnIsSignalConnected((QSctpSocket*)self, (intptr_t)callback);
}

void q_sctpsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sctpsocket_delete(void* self) {
    QSctpSocket_Delete((QSctpSocket*)(self));
}
