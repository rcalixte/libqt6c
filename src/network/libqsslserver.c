#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqsslsocket.hpp"
#include "libqtcpserver.hpp"
#include "libqtcpsocket.hpp"
#include "libqsslserver.hpp"
#include "libqsslserver.h"

QSslServer* q_sslserver_new() {
    return QSslServer_new();
}

QSslServer* q_sslserver_new2(void* parent) {
    return QSslServer_new2((QObject*)parent);
}

const QMetaObject* q_sslserver_meta_object(void* self) {
    return QSslServer_MetaObject((QSslServer*)self);
}

void* q_sslserver_metacast(void* self, const char* param1) {
    return QSslServer_Metacast((QSslServer*)self, param1);
}

int32_t q_sslserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSslServer_Metacall((QSslServer*)self, param1, param2, param3);
}

void q_sslserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSslServer_OnMetacall((QSslServer*)self, (intptr_t)callback);
}

int32_t q_sslserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSslServer_QBaseMetacall((QSslServer*)self, param1, param2, param3);
}

const char* q_sslserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslserver_set_ssl_configuration(void* self, void* sslConfiguration) {
    QSslServer_SetSslConfiguration((QSslServer*)self, (QSslConfiguration*)sslConfiguration);
}

QSslConfiguration* q_sslserver_ssl_configuration(void* self) {
    return QSslServer_SslConfiguration((QSslServer*)self);
}

void q_sslserver_set_handshake_timeout(void* self, int timeout) {
    QSslServer_SetHandshakeTimeout((QSslServer*)self, timeout);
}

int32_t q_sslserver_handshake_timeout(void* self) {
    return QSslServer_HandshakeTimeout((QSslServer*)self);
}

void q_sslserver_ssl_errors(void* self, void* socket, libqt_list /* of QSslError* */ errors) {
    QSslServer_SslErrors((QSslServer*)self, (QSslSocket*)socket, errors);
}

void q_sslserver_on_ssl_errors(void* self, void (*callback)(void*, void*, QSslError**)) {
    QSslServer_Connect_SslErrors((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_peer_verify_error(void* self, void* socket, void* error) {
    QSslServer_PeerVerifyError((QSslServer*)self, (QSslSocket*)socket, (QSslError*)error);
}

void q_sslserver_on_peer_verify_error(void* self, void (*callback)(void*, void*, void*)) {
    QSslServer_Connect_PeerVerifyError((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_error_occurred(void* self, void* socket, int32_t error) {
    QSslServer_ErrorOccurred((QSslServer*)self, (QSslSocket*)socket, error);
}

void q_sslserver_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t)) {
    QSslServer_Connect_ErrorOccurred((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_pre_shared_key_authentication_required(void* self, void* socket, void* authenticator) {
    QSslServer_PreSharedKeyAuthenticationRequired((QSslServer*)self, (QSslSocket*)socket, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_sslserver_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QSslServer_Connect_PreSharedKeyAuthenticationRequired((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_alert_sent(void* self, void* socket, int32_t level, int32_t type, const char* description) {
    QSslServer_AlertSent((QSslServer*)self, (QSslSocket*)socket, level, type, qstring(description));
}

void q_sslserver_on_alert_sent(void* self, void (*callback)(void*, void*, int32_t, int32_t, const char*)) {
    QSslServer_Connect_AlertSent((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_alert_received(void* self, void* socket, int32_t level, int32_t type, const char* description) {
    QSslServer_AlertReceived((QSslServer*)self, (QSslSocket*)socket, level, type, qstring(description));
}

void q_sslserver_on_alert_received(void* self, void (*callback)(void*, void*, int32_t, int32_t, const char*)) {
    QSslServer_Connect_AlertReceived((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_handshake_interrupted_on_error(void* self, void* socket, void* error) {
    QSslServer_HandshakeInterruptedOnError((QSslServer*)self, (QSslSocket*)socket, (QSslError*)error);
}

void q_sslserver_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*, void*)) {
    QSslServer_Connect_HandshakeInterruptedOnError((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_started_encryption_handshake(void* self, void* socket) {
    QSslServer_StartedEncryptionHandshake((QSslServer*)self, (QSslSocket*)socket);
}

void q_sslserver_on_started_encryption_handshake(void* self, void (*callback)(void*, void*)) {
    QSslServer_Connect_StartedEncryptionHandshake((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_incoming_connection(void* self, intptr_t socket) {
    QSslServer_IncomingConnection((QSslServer*)self, socket);
}

void q_sslserver_on_incoming_connection(void* self, void (*callback)(void*, intptr_t)) {
    QSslServer_OnIncomingConnection((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_qbase_incoming_connection(void* self, intptr_t socket) {
    QSslServer_QBaseIncomingConnection((QSslServer*)self, socket);
}

const char* q_sslserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sslserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

void q_sslserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

bool q_sslserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

void q_sslserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

int32_t q_sslserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

void q_sslserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

int32_t q_sslserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

unsigned short q_sslserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

QHostAddress* q_sslserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

intptr_t q_sslserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

bool q_sslserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

bool q_sslserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

int32_t q_sslserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

const char* q_sslserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

void q_sslserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

void q_sslserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_sslserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

void q_sslserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

void q_sslserver_on_new_connection(void* self, void (*callback)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)callback);
}

void q_sslserver_accept_error(void* self, int32_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

void q_sslserver_on_accept_error(void* self, void (*callback)(void*, int32_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)callback);
}

bool q_sslserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

bool q_sslserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

bool q_sslserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

bool q_sslserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

const char* q_sslserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslserver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sslserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sslserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sslserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sslserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sslserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sslserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sslserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sslserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sslserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sslserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sslserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sslserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sslserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sslserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sslserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sslserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sslserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sslserver_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sslserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sslserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sslserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sslserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sslserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sslserver_dynamic_property_names\n");
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

QBindingStorage* q_sslserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sslserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sslserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sslserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sslserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sslserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sslserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sslserver_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sslserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sslserver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sslserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sslserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sslserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sslserver_has_pending_connections(void* self) {
    return QSslServer_HasPendingConnections((QSslServer*)self);
}

bool q_sslserver_qbase_has_pending_connections(void* self) {
    return QSslServer_QBaseHasPendingConnections((QSslServer*)self);
}

void q_sslserver_on_has_pending_connections(void* self, bool (*callback)()) {
    QSslServer_OnHasPendingConnections((QSslServer*)self, (intptr_t)callback);
}

QTcpSocket* q_sslserver_next_pending_connection(void* self) {
    return QSslServer_NextPendingConnection((QSslServer*)self);
}

QTcpSocket* q_sslserver_qbase_next_pending_connection(void* self) {
    return QSslServer_QBaseNextPendingConnection((QSslServer*)self);
}

void q_sslserver_on_next_pending_connection(void* self, QTcpSocket* (*callback)()) {
    QSslServer_OnNextPendingConnection((QSslServer*)self, (intptr_t)callback);
}

bool q_sslserver_event(void* self, void* event) {
    return QSslServer_Event((QSslServer*)self, (QEvent*)event);
}

bool q_sslserver_qbase_event(void* self, void* event) {
    return QSslServer_QBaseEvent((QSslServer*)self, (QEvent*)event);
}

void q_sslserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QSslServer_OnEvent((QSslServer*)self, (intptr_t)callback);
}

bool q_sslserver_event_filter(void* self, void* watched, void* event) {
    return QSslServer_EventFilter((QSslServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sslserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QSslServer_QBaseEventFilter((QSslServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_sslserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSslServer_OnEventFilter((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_timer_event(void* self, void* event) {
    QSslServer_TimerEvent((QSslServer*)self, (QTimerEvent*)event);
}

void q_sslserver_qbase_timer_event(void* self, void* event) {
    QSslServer_QBaseTimerEvent((QSslServer*)self, (QTimerEvent*)event);
}

void q_sslserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnTimerEvent((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_child_event(void* self, void* event) {
    QSslServer_ChildEvent((QSslServer*)self, (QChildEvent*)event);
}

void q_sslserver_qbase_child_event(void* self, void* event) {
    QSslServer_QBaseChildEvent((QSslServer*)self, (QChildEvent*)event);
}

void q_sslserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnChildEvent((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_custom_event(void* self, void* event) {
    QSslServer_CustomEvent((QSslServer*)self, (QEvent*)event);
}

void q_sslserver_qbase_custom_event(void* self, void* event) {
    QSslServer_QBaseCustomEvent((QSslServer*)self, (QEvent*)event);
}

void q_sslserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnCustomEvent((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_connect_notify(void* self, void* signal) {
    QSslServer_ConnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

void q_sslserver_qbase_connect_notify(void* self, void* signal) {
    QSslServer_QBaseConnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

void q_sslserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnConnectNotify((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_disconnect_notify(void* self, void* signal) {
    QSslServer_DisconnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

void q_sslserver_qbase_disconnect_notify(void* self, void* signal) {
    QSslServer_QBaseDisconnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

void q_sslserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnDisconnectNotify((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_add_pending_connection(void* self, void* socket) {
    QSslServer_AddPendingConnection((QSslServer*)self, (QTcpSocket*)socket);
}

void q_sslserver_qbase_add_pending_connection(void* self, void* socket) {
    QSslServer_QBaseAddPendingConnection((QSslServer*)self, (QTcpSocket*)socket);
}

void q_sslserver_on_add_pending_connection(void* self, void (*callback)(void*, void*)) {
    QSslServer_OnAddPendingConnection((QSslServer*)self, (intptr_t)callback);
}

QObject* q_sslserver_sender(void* self) {
    return QSslServer_Sender((QSslServer*)self);
}

QObject* q_sslserver_qbase_sender(void* self) {
    return QSslServer_QBaseSender((QSslServer*)self);
}

void q_sslserver_on_sender(void* self, QObject* (*callback)()) {
    QSslServer_OnSender((QSslServer*)self, (intptr_t)callback);
}

int32_t q_sslserver_sender_signal_index(void* self) {
    return QSslServer_SenderSignalIndex((QSslServer*)self);
}

int32_t q_sslserver_qbase_sender_signal_index(void* self) {
    return QSslServer_QBaseSenderSignalIndex((QSslServer*)self);
}

void q_sslserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSslServer_OnSenderSignalIndex((QSslServer*)self, (intptr_t)callback);
}

int32_t q_sslserver_receivers(void* self, const char* signal) {
    return QSslServer_Receivers((QSslServer*)self, signal);
}

int32_t q_sslserver_qbase_receivers(void* self, const char* signal) {
    return QSslServer_QBaseReceivers((QSslServer*)self, signal);
}

void q_sslserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSslServer_OnReceivers((QSslServer*)self, (intptr_t)callback);
}

bool q_sslserver_is_signal_connected(void* self, void* signal) {
    return QSslServer_IsSignalConnected((QSslServer*)self, (QMetaMethod*)signal);
}

bool q_sslserver_qbase_is_signal_connected(void* self, void* signal) {
    return QSslServer_QBaseIsSignalConnected((QSslServer*)self, (QMetaMethod*)signal);
}

void q_sslserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSslServer_OnIsSignalConnected((QSslServer*)self, (intptr_t)callback);
}

void q_sslserver_on_pending_connection_available(void* self, void (*callback)(void*)) {
    QTcpServer_Connect_PendingConnectionAvailable((QTcpServer*)self, (intptr_t)callback);
}

void q_sslserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sslserver_delete(void* self) {
    QSslServer_Delete((QSslServer*)(self));
}
