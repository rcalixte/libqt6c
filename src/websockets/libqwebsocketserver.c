#include "../libqcoreevent.hpp"
#include "../network/libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include "../network/libqsslconfiguration.hpp"
#include "../network/libqsslerror.hpp"
#include "../network/libqsslpresharedkeyauthenticator.hpp"
#include "../network/libqtcpsocket.hpp"
#include "../libqurl.hpp"
#include "libqwebsocket.hpp"
#include "libqwebsocketcorsauthenticator.hpp"
#include "libqwebsocketserver.hpp"
#include "libqwebsocketserver.h"

QWebSocketServer* q_websocketserver_new(const char* serverName, int32_t secureMode) {
    return QWebSocketServer_new(qstring(serverName), secureMode);
}

QWebSocketServer* q_websocketserver_new2(const char* serverName, int32_t secureMode, void* parent) {
    return QWebSocketServer_new2(qstring(serverName), secureMode, (QObject*)parent);
}

const QMetaObject* q_websocketserver_meta_object(void* self) {
    return QWebSocketServer_MetaObject((QWebSocketServer*)self);
}

void q_websocketserver_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebSocketServer_OnMetaObject((QWebSocketServer*)self, (intptr_t)callback);
}

const QMetaObject* q_websocketserver_qbase_meta_object(void* self) {
    return QWebSocketServer_QBaseMetaObject((QWebSocketServer*)self);
}

void* q_websocketserver_metacast(void* self, const char* param1) {
    return QWebSocketServer_Metacast((QWebSocketServer*)self, param1);
}

void q_websocketserver_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebSocketServer_OnMetacast((QWebSocketServer*)self, (intptr_t)callback);
}

void* q_websocketserver_qbase_metacast(void* self, const char* param1) {
    return QWebSocketServer_QBaseMetacast((QWebSocketServer*)self, param1);
}

int32_t q_websocketserver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebSocketServer_Metacall((QWebSocketServer*)self, param1, param2, param3);
}

void q_websocketserver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebSocketServer_OnMetacall((QWebSocketServer*)self, (intptr_t)callback);
}

int32_t q_websocketserver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebSocketServer_QBaseMetacall((QWebSocketServer*)self, param1, param2, param3);
}

const char* q_websocketserver_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_websocketserver_listen(void* self) {
    return QWebSocketServer_Listen((QWebSocketServer*)self);
}

void q_websocketserver_close(void* self) {
    QWebSocketServer_Close((QWebSocketServer*)self);
}

bool q_websocketserver_is_listening(void* self) {
    return QWebSocketServer_IsListening((QWebSocketServer*)self);
}

void q_websocketserver_set_max_pending_connections(void* self, int numConnections) {
    QWebSocketServer_SetMaxPendingConnections((QWebSocketServer*)self, numConnections);
}

int32_t q_websocketserver_max_pending_connections(void* self) {
    return QWebSocketServer_MaxPendingConnections((QWebSocketServer*)self);
}

void q_websocketserver_set_handshake_timeout(void* self, int64_t msec) {
    QWebSocketServer_SetHandshakeTimeout((QWebSocketServer*)self, msec);
}

int64_t q_websocketserver_handshake_timeout(void* self) {
    return QWebSocketServer_HandshakeTimeout((QWebSocketServer*)self);
}

void q_websocketserver_set_handshake_timeout2(void* self, int msec) {
    QWebSocketServer_SetHandshakeTimeout2((QWebSocketServer*)self, msec);
}

int32_t q_websocketserver_handshake_timeout_m_s(void* self) {
    return QWebSocketServer_HandshakeTimeoutMS((QWebSocketServer*)self);
}

unsigned short q_websocketserver_server_port(void* self) {
    return QWebSocketServer_ServerPort((QWebSocketServer*)self);
}

QHostAddress* q_websocketserver_server_address(void* self) {
    return QWebSocketServer_ServerAddress((QWebSocketServer*)self);
}

QUrl* q_websocketserver_server_url(void* self) {
    return QWebSocketServer_ServerUrl((QWebSocketServer*)self);
}

int32_t q_websocketserver_secure_mode(void* self) {
    return QWebSocketServer_SecureMode((QWebSocketServer*)self);
}

bool q_websocketserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QWebSocketServer_SetSocketDescriptor((QWebSocketServer*)self, socketDescriptor);
}

intptr_t q_websocketserver_socket_descriptor(void* self) {
    return QWebSocketServer_SocketDescriptor((QWebSocketServer*)self);
}

bool q_websocketserver_set_native_descriptor(void* self, intptr_t descriptor) {
    return QWebSocketServer_SetNativeDescriptor((QWebSocketServer*)self, descriptor);
}

intptr_t q_websocketserver_native_descriptor(void* self) {
    return QWebSocketServer_NativeDescriptor((QWebSocketServer*)self);
}

bool q_websocketserver_has_pending_connections(void* self) {
    return QWebSocketServer_HasPendingConnections((QWebSocketServer*)self);
}

QWebSocket* q_websocketserver_next_pending_connection(void* self) {
    return QWebSocketServer_NextPendingConnection((QWebSocketServer*)self);
}

void q_websocketserver_on_next_pending_connection(void* self, QWebSocket* (*callback)()) {
    QWebSocketServer_OnNextPendingConnection((QWebSocketServer*)self, (intptr_t)callback);
}

QWebSocket* q_websocketserver_qbase_next_pending_connection(void* self) {
    return QWebSocketServer_QBaseNextPendingConnection((QWebSocketServer*)self);
}

int32_t q_websocketserver_error(void* self) {
    return QWebSocketServer_Error((QWebSocketServer*)self);
}

const char* q_websocketserver_error_string(void* self) {
    libqt_string _str = QWebSocketServer_ErrorString((QWebSocketServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocketserver_pause_accepting(void* self) {
    QWebSocketServer_PauseAccepting((QWebSocketServer*)self);
}

void q_websocketserver_resume_accepting(void* self) {
    QWebSocketServer_ResumeAccepting((QWebSocketServer*)self);
}

void q_websocketserver_set_server_name(void* self, const char* serverName) {
    QWebSocketServer_SetServerName((QWebSocketServer*)self, qstring(serverName));
}

const char* q_websocketserver_server_name(void* self) {
    libqt_string _str = QWebSocketServer_ServerName((QWebSocketServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocketserver_set_supported_subprotocols(void* self, const char* protocols[static 1]) {
    size_t protocols_len = libqt_strv_length(protocols);
    libqt_string* protocols_qstr = (libqt_string*)malloc(protocols_len * sizeof(libqt_string));
    if (protocols_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websocketserver_set_supported_subprotocols\n");
        abort();
    }
    for (size_t i = 0; i < protocols_len; ++i) {
        protocols_qstr[i] = qstring(protocols[i]);
    }
    libqt_list protocols_list = qlist(protocols_qstr, protocols_len);
    QWebSocketServer_SetSupportedSubprotocols((QWebSocketServer*)self, protocols_list);
    free(protocols_qstr);
}

const char** q_websocketserver_supported_subprotocols(void* self) {
    libqt_list _arr = QWebSocketServer_SupportedSubprotocols((QWebSocketServer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websocketserver_supported_subprotocols\n");
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

void q_websocketserver_set_proxy(void* self, void* networkProxy) {
    QWebSocketServer_SetProxy((QWebSocketServer*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_websocketserver_proxy(void* self) {
    return QWebSocketServer_Proxy((QWebSocketServer*)self);
}

void q_websocketserver_set_ssl_configuration(void* self, void* sslConfiguration) {
    QWebSocketServer_SetSslConfiguration((QWebSocketServer*)self, (QSslConfiguration*)sslConfiguration);
}

QSslConfiguration* q_websocketserver_ssl_configuration(void* self) {
    return QWebSocketServer_SslConfiguration((QWebSocketServer*)self);
}

libqt_list /* of enum QWebSocketProtocol__Version */ q_websocketserver_supported_versions(void* self) {
    libqt_list _arr = QWebSocketServer_SupportedVersions((QWebSocketServer*)self);
    return _arr;
}

void q_websocketserver_handle_connection(void* self, void* socket) {
    QWebSocketServer_HandleConnection((QWebSocketServer*)self, (QTcpSocket*)socket);
}

void q_websocketserver_accept_error(void* self, int32_t socketError) {
    QWebSocketServer_AcceptError((QWebSocketServer*)self, socketError);
}

void q_websocketserver_on_accept_error(void* self, void (*callback)(void*, int32_t)) {
    QWebSocketServer_Connect_AcceptError((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_server_error(void* self, int32_t closeCode) {
    QWebSocketServer_ServerError((QWebSocketServer*)self, closeCode);
}

void q_websocketserver_on_server_error(void* self, void (*callback)(void*, int32_t)) {
    QWebSocketServer_Connect_ServerError((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_origin_authentication_required(void* self, void* pAuthenticator) {
    QWebSocketServer_OriginAuthenticationRequired((QWebSocketServer*)self, (QWebSocketCorsAuthenticator*)pAuthenticator);
}

void q_websocketserver_on_origin_authentication_required(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_Connect_OriginAuthenticationRequired((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_new_connection(void* self) {
    QWebSocketServer_NewConnection((QWebSocketServer*)self);
}

void q_websocketserver_on_new_connection(void* self, void (*callback)(void*)) {
    QWebSocketServer_Connect_NewConnection((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_peer_verify_error(void* self, void* error) {
    QWebSocketServer_PeerVerifyError((QWebSocketServer*)self, (QSslError*)error);
}

void q_websocketserver_on_peer_verify_error(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_Connect_PeerVerifyError((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_ssl_errors(void* self, libqt_list /* of QSslError* */ errors) {
    QWebSocketServer_SslErrors((QWebSocketServer*)self, errors);
}

void q_websocketserver_on_ssl_errors(void* self, void (*callback)(void*, libqt_list /* of QSslError* */)) {
    QWebSocketServer_Connect_SslErrors((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QWebSocketServer_PreSharedKeyAuthenticationRequired((QWebSocketServer*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_websocketserver_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_alert_sent(void* self, int32_t level, int32_t type, const char* description) {
    QWebSocketServer_AlertSent((QWebSocketServer*)self, level, type, qstring(description));
}

void q_websocketserver_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QWebSocketServer_Connect_AlertSent((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_alert_received(void* self, int32_t level, int32_t type, const char* description) {
    QWebSocketServer_AlertReceived((QWebSocketServer*)self, level, type, qstring(description));
}

void q_websocketserver_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QWebSocketServer_Connect_AlertReceived((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_handshake_interrupted_on_error(void* self, void* error) {
    QWebSocketServer_HandshakeInterruptedOnError((QWebSocketServer*)self, (QSslError*)error);
}

void q_websocketserver_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_Connect_HandshakeInterruptedOnError((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_closed(void* self) {
    QWebSocketServer_Closed((QWebSocketServer*)self);
}

void q_websocketserver_on_closed(void* self, void (*callback)(void*)) {
    QWebSocketServer_Connect_Closed((QWebSocketServer*)self, (intptr_t)callback);
}

const char* q_websocketserver_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_websocketserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_websocketserver_listen1(void* self, void* address) {
    return QWebSocketServer_Listen1((QWebSocketServer*)self, (QHostAddress*)address);
}

bool q_websocketserver_listen2(void* self, void* address, unsigned short port) {
    return QWebSocketServer_Listen2((QWebSocketServer*)self, (QHostAddress*)address, port);
}

const char* q_websocketserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocketserver_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_websocketserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_websocketserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_websocketserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_websocketserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_websocketserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_websocketserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_websocketserver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_websocketserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_websocketserver_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_websocketserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_websocketserver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_websocketserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_websocketserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_websocketserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_websocketserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_websocketserver_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_websocketserver_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_websocketserver_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_websocketserver_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_websocketserver_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_websocketserver_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_websocketserver_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_websocketserver_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_websocketserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_websocketserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_websocketserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_websocketserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_websocketserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websocketserver_dynamic_property_names\n");
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

QBindingStorage* q_websocketserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_websocketserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_websocketserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_websocketserver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_websocketserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_websocketserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_websocketserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_websocketserver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_websocketserver_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_websocketserver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_websocketserver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_websocketserver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_websocketserver_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_websocketserver_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_websocketserver_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_websocketserver_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_websocketserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_websocketserver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_websocketserver_event(void* self, void* event) {
    return QWebSocketServer_Event((QWebSocketServer*)self, (QEvent*)event);
}

bool q_websocketserver_qbase_event(void* self, void* event) {
    return QWebSocketServer_QBaseEvent((QWebSocketServer*)self, (QEvent*)event);
}

void q_websocketserver_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebSocketServer_OnEvent((QWebSocketServer*)self, (intptr_t)callback);
}

bool q_websocketserver_event_filter(void* self, void* watched, void* event) {
    return QWebSocketServer_EventFilter((QWebSocketServer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_websocketserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebSocketServer_QBaseEventFilter((QWebSocketServer*)self, (QObject*)watched, (QEvent*)event);
}

void q_websocketserver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebSocketServer_OnEventFilter((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_timer_event(void* self, void* event) {
    QWebSocketServer_TimerEvent((QWebSocketServer*)self, (QTimerEvent*)event);
}

void q_websocketserver_qbase_timer_event(void* self, void* event) {
    QWebSocketServer_QBaseTimerEvent((QWebSocketServer*)self, (QTimerEvent*)event);
}

void q_websocketserver_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_OnTimerEvent((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_child_event(void* self, void* event) {
    QWebSocketServer_ChildEvent((QWebSocketServer*)self, (QChildEvent*)event);
}

void q_websocketserver_qbase_child_event(void* self, void* event) {
    QWebSocketServer_QBaseChildEvent((QWebSocketServer*)self, (QChildEvent*)event);
}

void q_websocketserver_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_OnChildEvent((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_custom_event(void* self, void* event) {
    QWebSocketServer_CustomEvent((QWebSocketServer*)self, (QEvent*)event);
}

void q_websocketserver_qbase_custom_event(void* self, void* event) {
    QWebSocketServer_QBaseCustomEvent((QWebSocketServer*)self, (QEvent*)event);
}

void q_websocketserver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_OnCustomEvent((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_connect_notify(void* self, void* signal) {
    QWebSocketServer_ConnectNotify((QWebSocketServer*)self, (QMetaMethod*)signal);
}

void q_websocketserver_qbase_connect_notify(void* self, void* signal) {
    QWebSocketServer_QBaseConnectNotify((QWebSocketServer*)self, (QMetaMethod*)signal);
}

void q_websocketserver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_OnConnectNotify((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_disconnect_notify(void* self, void* signal) {
    QWebSocketServer_DisconnectNotify((QWebSocketServer*)self, (QMetaMethod*)signal);
}

void q_websocketserver_qbase_disconnect_notify(void* self, void* signal) {
    QWebSocketServer_QBaseDisconnectNotify((QWebSocketServer*)self, (QMetaMethod*)signal);
}

void q_websocketserver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebSocketServer_OnDisconnectNotify((QWebSocketServer*)self, (intptr_t)callback);
}

QObject* q_websocketserver_sender(void* self) {
    return QWebSocketServer_Sender((QWebSocketServer*)self);
}

QObject* q_websocketserver_qbase_sender(void* self) {
    return QWebSocketServer_QBaseSender((QWebSocketServer*)self);
}

void q_websocketserver_on_sender(void* self, QObject* (*callback)()) {
    QWebSocketServer_OnSender((QWebSocketServer*)self, (intptr_t)callback);
}

int32_t q_websocketserver_sender_signal_index(void* self) {
    return QWebSocketServer_SenderSignalIndex((QWebSocketServer*)self);
}

int32_t q_websocketserver_qbase_sender_signal_index(void* self) {
    return QWebSocketServer_QBaseSenderSignalIndex((QWebSocketServer*)self);
}

void q_websocketserver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebSocketServer_OnSenderSignalIndex((QWebSocketServer*)self, (intptr_t)callback);
}

int32_t q_websocketserver_receivers(void* self, const char* signal) {
    return QWebSocketServer_Receivers((QWebSocketServer*)self, signal);
}

int32_t q_websocketserver_qbase_receivers(void* self, const char* signal) {
    return QWebSocketServer_QBaseReceivers((QWebSocketServer*)self, signal);
}

void q_websocketserver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebSocketServer_OnReceivers((QWebSocketServer*)self, (intptr_t)callback);
}

bool q_websocketserver_is_signal_connected(void* self, void* signal) {
    return QWebSocketServer_IsSignalConnected((QWebSocketServer*)self, (QMetaMethod*)signal);
}

bool q_websocketserver_qbase_is_signal_connected(void* self, void* signal) {
    return QWebSocketServer_QBaseIsSignalConnected((QWebSocketServer*)self, (QMetaMethod*)signal);
}

void q_websocketserver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebSocketServer_OnIsSignalConnected((QWebSocketServer*)self, (intptr_t)callback);
}

void q_websocketserver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_websocketserver_delete(void* self) {
    QWebSocketServer_Delete((QWebSocketServer*)(self));
}
