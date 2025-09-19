#include "libqabstractsocket.hpp"
#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkdatagram.hpp"
#include "libqnetworkinterface.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqudpsocket.hpp"
#include "libqudpsocket.h"

QUdpSocket* q_udpsocket_new() {
    return QUdpSocket_new();
}

QUdpSocket* q_udpsocket_new2(void* parent) {
    return QUdpSocket_new2((QObject*)parent);
}

const QMetaObject* q_udpsocket_meta_object(void* self) {
    return QUdpSocket_MetaObject((QUdpSocket*)self);
}

void* q_udpsocket_metacast(void* self, const char* param1) {
    return QUdpSocket_Metacast((QUdpSocket*)self, param1);
}

int32_t q_udpsocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUdpSocket_Metacall((QUdpSocket*)self, param1, param2, param3);
}

void q_udpsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QUdpSocket_OnMetacall((QUdpSocket*)self, (intptr_t)callback);
}

int32_t q_udpsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUdpSocket_QBaseMetacall((QUdpSocket*)self, param1, param2, param3);
}

const char* q_udpsocket_tr(const char* s) {
    libqt_string _str = QUdpSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_udpsocket_bind(void* self, int32_t addr) {
    return QUdpSocket_Bind((QUdpSocket*)self, addr);
}

bool q_udpsocket_join_multicast_group(void* self, void* groupAddress) {
    return QUdpSocket_JoinMulticastGroup((QUdpSocket*)self, (QHostAddress*)groupAddress);
}

bool q_udpsocket_join_multicast_group2(void* self, void* groupAddress, void* iface) {
    return QUdpSocket_JoinMulticastGroup2((QUdpSocket*)self, (QHostAddress*)groupAddress, (QNetworkInterface*)iface);
}

bool q_udpsocket_leave_multicast_group(void* self, void* groupAddress) {
    return QUdpSocket_LeaveMulticastGroup((QUdpSocket*)self, (QHostAddress*)groupAddress);
}

bool q_udpsocket_leave_multicast_group2(void* self, void* groupAddress, void* iface) {
    return QUdpSocket_LeaveMulticastGroup2((QUdpSocket*)self, (QHostAddress*)groupAddress, (QNetworkInterface*)iface);
}

QNetworkInterface* q_udpsocket_multicast_interface(void* self) {
    return QUdpSocket_MulticastInterface((QUdpSocket*)self);
}

void q_udpsocket_set_multicast_interface(void* self, void* iface) {
    QUdpSocket_SetMulticastInterface((QUdpSocket*)self, (QNetworkInterface*)iface);
}

bool q_udpsocket_has_pending_datagrams(void* self) {
    return QUdpSocket_HasPendingDatagrams((QUdpSocket*)self);
}

long long q_udpsocket_pending_datagram_size(void* self) {
    return QUdpSocket_PendingDatagramSize((QUdpSocket*)self);
}

QNetworkDatagram* q_udpsocket_receive_datagram(void* self) {
    return QUdpSocket_ReceiveDatagram((QUdpSocket*)self);
}

long long q_udpsocket_read_datagram(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadDatagram((QUdpSocket*)self, data, maxlen);
}

long long q_udpsocket_write_datagram(void* self, void* datagram) {
    return QUdpSocket_WriteDatagram((QUdpSocket*)self, (QNetworkDatagram*)datagram);
}

long long q_udpsocket_write_datagram2(void* self, const char* data, long long lenVal, void* host, unsigned short port) {
    return QUdpSocket_WriteDatagram2((QUdpSocket*)self, data, lenVal, (QHostAddress*)host, port);
}

long long q_udpsocket_write_datagram3(void* self, const char* datagram, void* host, unsigned short port) {
    return QUdpSocket_WriteDatagram3((QUdpSocket*)self, qstring(datagram), (QHostAddress*)host, port);
}

const char* q_udpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QUdpSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_udpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUdpSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_udpsocket_bind2(void* self, int32_t addr, unsigned short port) {
    return QUdpSocket_Bind2((QUdpSocket*)self, addr, port);
}

bool q_udpsocket_bind3(void* self, int32_t addr, unsigned short port, int32_t mode) {
    return QUdpSocket_Bind3((QUdpSocket*)self, addr, port, mode);
}

QNetworkDatagram* q_udpsocket_receive_datagram1(void* self, long long maxSize) {
    return QUdpSocket_ReceiveDatagram1((QUdpSocket*)self, maxSize);
}

long long q_udpsocket_read_datagram3(void* self, char* data, long long maxlen, void* host) {
    return QUdpSocket_ReadDatagram3((QUdpSocket*)self, data, maxlen, (QHostAddress*)host);
}

long long q_udpsocket_read_datagram4(void* self, char* data, long long maxlen, void* host, unsigned short* port) {
    return QUdpSocket_ReadDatagram4((QUdpSocket*)self, data, maxlen, (QHostAddress*)host, port);
}

int32_t q_udpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

void q_udpsocket_set_pause_mode(void* self, int32_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

void q_udpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

bool q_udpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

unsigned short q_udpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

QHostAddress* q_udpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

unsigned short q_udpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

QHostAddress* q_udpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

const char* q_udpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_udpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

void q_udpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

int32_t q_udpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

int32_t q_udpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

int32_t q_udpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

bool q_udpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

void q_udpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_udpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

const char* q_udpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_udpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

void q_udpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

void q_udpsocket_on_host_found(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)callback);
}

void q_udpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

void q_udpsocket_on_connected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_udpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

void q_udpsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_udpsocket_state_changed(void* self, int32_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

void q_udpsocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)callback);
}

void q_udpsocket_error_occurred(void* self, int32_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

void q_udpsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)callback);
}

void q_udpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_udpsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

bool q_udpsocket_bind22(void* self, unsigned short port, int32_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

void q_udpsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

int32_t q_udpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_udpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_udpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_udpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_udpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_udpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_udpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_udpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_udpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_udpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_udpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_udpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_udpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_udpsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_udpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_udpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_udpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_udpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_udpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_udpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_udpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_udpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_udpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_udpsocket_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_udpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_udpsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_udpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_udpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_udpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_udpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_udpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_udpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_udpsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_udpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_udpsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_udpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_udpsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_udpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_udpsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_udpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_udpsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_udpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_udpsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_udpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_udpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_udpsocket_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_udpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_udpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_udpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_udpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_udpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_udpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_udpsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_udpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_udpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_udpsocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_udpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_udpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_udpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_udpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_udpsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_udpsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_udpsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_udpsocket_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_udpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_udpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_udpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_udpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_udpsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_udpsocket_dynamic_property_names");
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

QBindingStorage* q_udpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_udpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_udpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_udpsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_udpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_udpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_udpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_udpsocket_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_udpsocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_udpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_udpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_udpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_udpsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_udpsocket_resume(void* self) {
    QUdpSocket_Resume((QUdpSocket*)self);
}

void q_udpsocket_qbase_resume(void* self) {
    QUdpSocket_QBaseResume((QUdpSocket*)self);
}

void q_udpsocket_on_resume(void* self, void (*callback)()) {
    QUdpSocket_OnResume((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QUdpSocket_ConnectToHost((QUdpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_udpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QUdpSocket_QBaseConnectToHost((QUdpSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_udpsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t)) {
    QUdpSocket_OnConnectToHost((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_disconnect_from_host(void* self) {
    QUdpSocket_DisconnectFromHost((QUdpSocket*)self);
}

void q_udpsocket_qbase_disconnect_from_host(void* self) {
    QUdpSocket_QBaseDisconnectFromHost((QUdpSocket*)self);
}

void q_udpsocket_on_disconnect_from_host(void* self, void (*callback)()) {
    QUdpSocket_OnDisconnectFromHost((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_bytes_available(void* self) {
    return QUdpSocket_BytesAvailable((QUdpSocket*)self);
}

long long q_udpsocket_qbase_bytes_available(void* self) {
    return QUdpSocket_QBaseBytesAvailable((QUdpSocket*)self);
}

void q_udpsocket_on_bytes_available(void* self, long long (*callback)()) {
    QUdpSocket_OnBytesAvailable((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_bytes_to_write(void* self) {
    return QUdpSocket_BytesToWrite((QUdpSocket*)self);
}

long long q_udpsocket_qbase_bytes_to_write(void* self) {
    return QUdpSocket_QBaseBytesToWrite((QUdpSocket*)self);
}

void q_udpsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QUdpSocket_OnBytesToWrite((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_read_buffer_size(void* self, long long size) {
    QUdpSocket_SetReadBufferSize((QUdpSocket*)self, size);
}

void q_udpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QUdpSocket_QBaseSetReadBufferSize((QUdpSocket*)self, size);
}

void q_udpsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long)) {
    QUdpSocket_OnSetReadBufferSize((QUdpSocket*)self, (intptr_t)callback);
}

intptr_t q_udpsocket_socket_descriptor(void* self) {
    return QUdpSocket_SocketDescriptor((QUdpSocket*)self);
}

intptr_t q_udpsocket_qbase_socket_descriptor(void* self) {
    return QUdpSocket_QBaseSocketDescriptor((QUdpSocket*)self);
}

void q_udpsocket_on_socket_descriptor(void* self, intptr_t (*callback)()) {
    QUdpSocket_OnSocketDescriptor((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QUdpSocket_SetSocketDescriptor((QUdpSocket*)self, socketDescriptor, state, openMode);
}

bool q_udpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QUdpSocket_QBaseSetSocketDescriptor((QUdpSocket*)self, socketDescriptor, state, openMode);
}

void q_udpsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t)) {
    QUdpSocket_OnSetSocketDescriptor((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_socket_option(void* self, int32_t option, void* value) {
    QUdpSocket_SetSocketOption((QUdpSocket*)self, option, (QVariant*)value);
}

void q_udpsocket_qbase_set_socket_option(void* self, int32_t option, void* value) {
    QUdpSocket_QBaseSetSocketOption((QUdpSocket*)self, option, (QVariant*)value);
}

void q_udpsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*)) {
    QUdpSocket_OnSetSocketOption((QUdpSocket*)self, (intptr_t)callback);
}

QVariant* q_udpsocket_socket_option(void* self, int32_t option) {
    return QUdpSocket_SocketOption((QUdpSocket*)self, option);
}

QVariant* q_udpsocket_qbase_socket_option(void* self, int32_t option) {
    return QUdpSocket_QBaseSocketOption((QUdpSocket*)self, option);
}

void q_udpsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t)) {
    QUdpSocket_OnSocketOption((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_close(void* self) {
    QUdpSocket_Close((QUdpSocket*)self);
}

void q_udpsocket_qbase_close(void* self) {
    QUdpSocket_QBaseClose((QUdpSocket*)self);
}

void q_udpsocket_on_close(void* self, void (*callback)()) {
    QUdpSocket_OnClose((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_is_sequential(void* self) {
    return QUdpSocket_IsSequential((QUdpSocket*)self);
}

bool q_udpsocket_qbase_is_sequential(void* self) {
    return QUdpSocket_QBaseIsSequential((QUdpSocket*)self);
}

void q_udpsocket_on_is_sequential(void* self, bool (*callback)()) {
    QUdpSocket_OnIsSequential((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_wait_for_connected(void* self, int msecs) {
    return QUdpSocket_WaitForConnected((QUdpSocket*)self, msecs);
}

bool q_udpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForConnected((QUdpSocket*)self, msecs);
}

void q_udpsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int)) {
    QUdpSocket_OnWaitForConnected((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_wait_for_ready_read(void* self, int msecs) {
    return QUdpSocket_WaitForReadyRead((QUdpSocket*)self, msecs);
}

bool q_udpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForReadyRead((QUdpSocket*)self, msecs);
}

void q_udpsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QUdpSocket_OnWaitForReadyRead((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QUdpSocket_WaitForBytesWritten((QUdpSocket*)self, msecs);
}

bool q_udpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForBytesWritten((QUdpSocket*)self, msecs);
}

void q_udpsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QUdpSocket_OnWaitForBytesWritten((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_wait_for_disconnected(void* self, int msecs) {
    return QUdpSocket_WaitForDisconnected((QUdpSocket*)self, msecs);
}

bool q_udpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForDisconnected((QUdpSocket*)self, msecs);
}

void q_udpsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int)) {
    QUdpSocket_OnWaitForDisconnected((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_read_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadData((QUdpSocket*)self, data, maxlen);
}

long long q_udpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_QBaseReadData((QUdpSocket*)self, data, maxlen);
}

void q_udpsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QUdpSocket_OnReadData((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadLineData((QUdpSocket*)self, data, maxlen);
}

long long q_udpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_QBaseReadLineData((QUdpSocket*)self, data, maxlen);
}

void q_udpsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QUdpSocket_OnReadLineData((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_skip_data(void* self, long long maxSize) {
    return QUdpSocket_SkipData((QUdpSocket*)self, maxSize);
}

long long q_udpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QUdpSocket_QBaseSkipData((QUdpSocket*)self, maxSize);
}

void q_udpsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QUdpSocket_OnSkipData((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QUdpSocket_WriteData((QUdpSocket*)self, data, lenVal);
}

long long q_udpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QUdpSocket_QBaseWriteData((QUdpSocket*)self, data, lenVal);
}

void q_udpsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QUdpSocket_OnWriteData((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_open(void* self, int32_t mode) {
    return QUdpSocket_Open((QUdpSocket*)self, mode);
}

bool q_udpsocket_qbase_open(void* self, int32_t mode) {
    return QUdpSocket_QBaseOpen((QUdpSocket*)self, mode);
}

void q_udpsocket_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QUdpSocket_OnOpen((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_pos(void* self) {
    return QUdpSocket_Pos((QUdpSocket*)self);
}

long long q_udpsocket_qbase_pos(void* self) {
    return QUdpSocket_QBasePos((QUdpSocket*)self);
}

void q_udpsocket_on_pos(void* self, long long (*callback)()) {
    QUdpSocket_OnPos((QUdpSocket*)self, (intptr_t)callback);
}

long long q_udpsocket_size(void* self) {
    return QUdpSocket_Size((QUdpSocket*)self);
}

long long q_udpsocket_qbase_size(void* self) {
    return QUdpSocket_QBaseSize((QUdpSocket*)self);
}

void q_udpsocket_on_size(void* self, long long (*callback)()) {
    QUdpSocket_OnSize((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_seek(void* self, long long pos) {
    return QUdpSocket_Seek((QUdpSocket*)self, pos);
}

bool q_udpsocket_qbase_seek(void* self, long long pos) {
    return QUdpSocket_QBaseSeek((QUdpSocket*)self, pos);
}

void q_udpsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QUdpSocket_OnSeek((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_at_end(void* self) {
    return QUdpSocket_AtEnd((QUdpSocket*)self);
}

bool q_udpsocket_qbase_at_end(void* self) {
    return QUdpSocket_QBaseAtEnd((QUdpSocket*)self);
}

void q_udpsocket_on_at_end(void* self, bool (*callback)()) {
    QUdpSocket_OnAtEnd((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_reset(void* self) {
    return QUdpSocket_Reset((QUdpSocket*)self);
}

bool q_udpsocket_qbase_reset(void* self) {
    return QUdpSocket_QBaseReset((QUdpSocket*)self);
}

void q_udpsocket_on_reset(void* self, bool (*callback)()) {
    QUdpSocket_OnReset((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_can_read_line(void* self) {
    return QUdpSocket_CanReadLine((QUdpSocket*)self);
}

bool q_udpsocket_qbase_can_read_line(void* self) {
    return QUdpSocket_QBaseCanReadLine((QUdpSocket*)self);
}

void q_udpsocket_on_can_read_line(void* self, bool (*callback)()) {
    QUdpSocket_OnCanReadLine((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_event(void* self, void* event) {
    return QUdpSocket_Event((QUdpSocket*)self, (QEvent*)event);
}

bool q_udpsocket_qbase_event(void* self, void* event) {
    return QUdpSocket_QBaseEvent((QUdpSocket*)self, (QEvent*)event);
}

void q_udpsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QUdpSocket_OnEvent((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_event_filter(void* self, void* watched, void* event) {
    return QUdpSocket_EventFilter((QUdpSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_udpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QUdpSocket_QBaseEventFilter((QUdpSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_udpsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QUdpSocket_OnEventFilter((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_timer_event(void* self, void* event) {
    QUdpSocket_TimerEvent((QUdpSocket*)self, (QTimerEvent*)event);
}

void q_udpsocket_qbase_timer_event(void* self, void* event) {
    QUdpSocket_QBaseTimerEvent((QUdpSocket*)self, (QTimerEvent*)event);
}

void q_udpsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnTimerEvent((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_child_event(void* self, void* event) {
    QUdpSocket_ChildEvent((QUdpSocket*)self, (QChildEvent*)event);
}

void q_udpsocket_qbase_child_event(void* self, void* event) {
    QUdpSocket_QBaseChildEvent((QUdpSocket*)self, (QChildEvent*)event);
}

void q_udpsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnChildEvent((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_custom_event(void* self, void* event) {
    QUdpSocket_CustomEvent((QUdpSocket*)self, (QEvent*)event);
}

void q_udpsocket_qbase_custom_event(void* self, void* event) {
    QUdpSocket_QBaseCustomEvent((QUdpSocket*)self, (QEvent*)event);
}

void q_udpsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnCustomEvent((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_connect_notify(void* self, void* signal) {
    QUdpSocket_ConnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

void q_udpsocket_qbase_connect_notify(void* self, void* signal) {
    QUdpSocket_QBaseConnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

void q_udpsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnConnectNotify((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_disconnect_notify(void* self, void* signal) {
    QUdpSocket_DisconnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

void q_udpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QUdpSocket_QBaseDisconnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

void q_udpsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnDisconnectNotify((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_socket_state(void* self, int32_t state) {
    QUdpSocket_SetSocketState((QUdpSocket*)self, state);
}

void q_udpsocket_qbase_set_socket_state(void* self, int32_t state) {
    QUdpSocket_QBaseSetSocketState((QUdpSocket*)self, state);
}

void q_udpsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t)) {
    QUdpSocket_OnSetSocketState((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_socket_error(void* self, int32_t socketError) {
    QUdpSocket_SetSocketError((QUdpSocket*)self, socketError);
}

void q_udpsocket_qbase_set_socket_error(void* self, int32_t socketError) {
    QUdpSocket_QBaseSetSocketError((QUdpSocket*)self, socketError);
}

void q_udpsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t)) {
    QUdpSocket_OnSetSocketError((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_local_port(void* self, unsigned short port) {
    QUdpSocket_SetLocalPort((QUdpSocket*)self, port);
}

void q_udpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QUdpSocket_QBaseSetLocalPort((QUdpSocket*)self, port);
}

void q_udpsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short)) {
    QUdpSocket_OnSetLocalPort((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_local_address(void* self, void* address) {
    QUdpSocket_SetLocalAddress((QUdpSocket*)self, (QHostAddress*)address);
}

void q_udpsocket_qbase_set_local_address(void* self, void* address) {
    QUdpSocket_QBaseSetLocalAddress((QUdpSocket*)self, (QHostAddress*)address);
}

void q_udpsocket_on_set_local_address(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnSetLocalAddress((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_peer_port(void* self, unsigned short port) {
    QUdpSocket_SetPeerPort((QUdpSocket*)self, port);
}

void q_udpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QUdpSocket_QBaseSetPeerPort((QUdpSocket*)self, port);
}

void q_udpsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short)) {
    QUdpSocket_OnSetPeerPort((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_peer_address(void* self, void* address) {
    QUdpSocket_SetPeerAddress((QUdpSocket*)self, (QHostAddress*)address);
}

void q_udpsocket_qbase_set_peer_address(void* self, void* address) {
    QUdpSocket_QBaseSetPeerAddress((QUdpSocket*)self, (QHostAddress*)address);
}

void q_udpsocket_on_set_peer_address(void* self, void (*callback)(void*, void*)) {
    QUdpSocket_OnSetPeerAddress((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_peer_name(void* self, const char* name) {
    QUdpSocket_SetPeerName((QUdpSocket*)self, qstring(name));
}

void q_udpsocket_qbase_set_peer_name(void* self, const char* name) {
    QUdpSocket_QBaseSetPeerName((QUdpSocket*)self, qstring(name));
}

void q_udpsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*)) {
    QUdpSocket_OnSetPeerName((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_open_mode(void* self, int32_t openMode) {
    QUdpSocket_SetOpenMode((QUdpSocket*)self, openMode);
}

void q_udpsocket_qbase_set_open_mode(void* self, int32_t openMode) {
    QUdpSocket_QBaseSetOpenMode((QUdpSocket*)self, openMode);
}

void q_udpsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QUdpSocket_OnSetOpenMode((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_set_error_string(void* self, const char* errorString) {
    QUdpSocket_SetErrorString((QUdpSocket*)self, qstring(errorString));
}

void q_udpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QUdpSocket_QBaseSetErrorString((QUdpSocket*)self, qstring(errorString));
}

void q_udpsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QUdpSocket_OnSetErrorString((QUdpSocket*)self, (intptr_t)callback);
}

QObject* q_udpsocket_sender(void* self) {
    return QUdpSocket_Sender((QUdpSocket*)self);
}

QObject* q_udpsocket_qbase_sender(void* self) {
    return QUdpSocket_QBaseSender((QUdpSocket*)self);
}

void q_udpsocket_on_sender(void* self, QObject* (*callback)()) {
    QUdpSocket_OnSender((QUdpSocket*)self, (intptr_t)callback);
}

int32_t q_udpsocket_sender_signal_index(void* self) {
    return QUdpSocket_SenderSignalIndex((QUdpSocket*)self);
}

int32_t q_udpsocket_qbase_sender_signal_index(void* self) {
    return QUdpSocket_QBaseSenderSignalIndex((QUdpSocket*)self);
}

void q_udpsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QUdpSocket_OnSenderSignalIndex((QUdpSocket*)self, (intptr_t)callback);
}

int32_t q_udpsocket_receivers(void* self, const char* signal) {
    return QUdpSocket_Receivers((QUdpSocket*)self, signal);
}

int32_t q_udpsocket_qbase_receivers(void* self, const char* signal) {
    return QUdpSocket_QBaseReceivers((QUdpSocket*)self, signal);
}

void q_udpsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QUdpSocket_OnReceivers((QUdpSocket*)self, (intptr_t)callback);
}

bool q_udpsocket_is_signal_connected(void* self, void* signal) {
    return QUdpSocket_IsSignalConnected((QUdpSocket*)self, (QMetaMethod*)signal);
}

bool q_udpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QUdpSocket_QBaseIsSignalConnected((QUdpSocket*)self, (QMetaMethod*)signal);
}

void q_udpsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QUdpSocket_OnIsSignalConnected((QUdpSocket*)self, (intptr_t)callback);
}

void q_udpsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_udpsocket_delete(void* self) {
    QUdpSocket_Delete((QUdpSocket*)(self));
}
