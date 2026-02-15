#include "../network/libqauthenticator.hpp"
#include "../libqcoreevent.hpp"
#include "../network/libqhostaddress.hpp"
#include "libqmaskgenerator.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../network/libqnetworkproxy.hpp"
#include "../network/libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "../network/libqsslconfiguration.hpp"
#include "../network/libqsslerror.hpp"
#include "../network/libqsslpresharedkeyauthenticator.hpp"
#include "../libqurl.hpp"
#include "libqwebsockethandshakeoptions.hpp"
#include "libqwebsocket.hpp"
#include "libqwebsocket.h"

QWebSocket* q_websocket_new() {
    return QWebSocket_new();
}

QWebSocket* q_websocket_new2(const char* origin) {
    return QWebSocket_new2(qstring(origin));
}

QWebSocket* q_websocket_new3(const char* origin, int32_t version) {
    return QWebSocket_new3(qstring(origin), version);
}

QWebSocket* q_websocket_new4(const char* origin, int32_t version, void* parent) {
    return QWebSocket_new4(qstring(origin), version, (QObject*)parent);
}

const QMetaObject* q_websocket_meta_object(void* self) {
    return QWebSocket_MetaObject((QWebSocket*)self);
}

void q_websocket_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWebSocket_OnMetaObject((QWebSocket*)self, (intptr_t)callback);
}

const QMetaObject* q_websocket_qbase_meta_object(void* self) {
    return QWebSocket_QBaseMetaObject((QWebSocket*)self);
}

void* q_websocket_metacast(void* self, const char* param1) {
    return QWebSocket_Metacast((QWebSocket*)self, param1);
}

void q_websocket_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWebSocket_OnMetacast((QWebSocket*)self, (intptr_t)callback);
}

void* q_websocket_qbase_metacast(void* self, const char* param1) {
    return QWebSocket_QBaseMetacast((QWebSocket*)self, param1);
}

int32_t q_websocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebSocket_Metacall((QWebSocket*)self, param1, param2, param3);
}

void q_websocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWebSocket_OnMetacall((QWebSocket*)self, (intptr_t)callback);
}

int32_t q_websocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWebSocket_QBaseMetacall((QWebSocket*)self, param1, param2, param3);
}

const char* q_websocket_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocket_abort(void* self) {
    QWebSocket_Abort((QWebSocket*)self);
}

int32_t q_websocket_error(void* self) {
    return QWebSocket_Error((QWebSocket*)self);
}

const char* q_websocket_error_string(void* self) {
    libqt_string _str = QWebSocket_ErrorString((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_websocket_flush(void* self) {
    return QWebSocket_Flush((QWebSocket*)self);
}

bool q_websocket_is_valid(void* self) {
    return QWebSocket_IsValid((QWebSocket*)self);
}

QHostAddress* q_websocket_local_address(void* self) {
    return QWebSocket_LocalAddress((QWebSocket*)self);
}

unsigned short q_websocket_local_port(void* self) {
    return QWebSocket_LocalPort((QWebSocket*)self);
}

int32_t q_websocket_pause_mode(void* self) {
    return QWebSocket_PauseMode((QWebSocket*)self);
}

QHostAddress* q_websocket_peer_address(void* self) {
    return QWebSocket_PeerAddress((QWebSocket*)self);
}

const char* q_websocket_peer_name(void* self) {
    libqt_string _str = QWebSocket_PeerName((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned short q_websocket_peer_port(void* self) {
    return QWebSocket_PeerPort((QWebSocket*)self);
}

QNetworkProxy* q_websocket_proxy(void* self) {
    return QWebSocket_Proxy((QWebSocket*)self);
}

void q_websocket_set_proxy(void* self, void* networkProxy) {
    QWebSocket_SetProxy((QWebSocket*)self, (QNetworkProxy*)networkProxy);
}

void q_websocket_set_mask_generator(void* self, void* maskGenerator) {
    QWebSocket_SetMaskGenerator((QWebSocket*)self, (QMaskGenerator*)maskGenerator);
}

const QMaskGenerator* q_websocket_mask_generator(void* self) {
    return QWebSocket_MaskGenerator((QWebSocket*)self);
}

long long q_websocket_read_buffer_size(void* self) {
    return QWebSocket_ReadBufferSize((QWebSocket*)self);
}

void q_websocket_set_read_buffer_size(void* self, long long size) {
    QWebSocket_SetReadBufferSize((QWebSocket*)self, size);
}

void q_websocket_resume(void* self) {
    QWebSocket_Resume((QWebSocket*)self);
}

void q_websocket_set_pause_mode(void* self, int32_t pauseMode) {
    QWebSocket_SetPauseMode((QWebSocket*)self, pauseMode);
}

int32_t q_websocket_state(void* self) {
    return QWebSocket_State((QWebSocket*)self);
}

int32_t q_websocket_version(void* self) {
    return QWebSocket_Version((QWebSocket*)self);
}

const char* q_websocket_resource_name(void* self) {
    libqt_string _str = QWebSocket_ResourceName((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_websocket_request_url(void* self) {
    return QWebSocket_RequestUrl((QWebSocket*)self);
}

QNetworkRequest* q_websocket_request(void* self) {
    return QWebSocket_Request((QWebSocket*)self);
}

QWebSocketHandshakeOptions* q_websocket_handshake_options(void* self) {
    return QWebSocket_HandshakeOptions((QWebSocket*)self);
}

const char* q_websocket_origin(void* self) {
    libqt_string _str = QWebSocket_Origin((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_websocket_subprotocol(void* self) {
    libqt_string _str = QWebSocket_Subprotocol((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_websocket_close_code(void* self) {
    return QWebSocket_CloseCode((QWebSocket*)self);
}

const char* q_websocket_close_reason(void* self) {
    libqt_string _str = QWebSocket_CloseReason((QWebSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_websocket_send_text_message(void* self, const char* message) {
    return QWebSocket_SendTextMessage((QWebSocket*)self, qstring(message));
}

long long q_websocket_send_binary_message(void* self, char* data) {
    return QWebSocket_SendBinaryMessage((QWebSocket*)self, qstring(data));
}

void q_websocket_ignore_ssl_errors(void* self, libqt_list /* of QSslError* */ errors) {
    QWebSocket_IgnoreSslErrors((QWebSocket*)self, errors);
}

void q_websocket_continue_interrupted_handshake(void* self) {
    QWebSocket_ContinueInterruptedHandshake((QWebSocket*)self);
}

void q_websocket_set_ssl_configuration(void* self, void* sslConfiguration) {
    QWebSocket_SetSslConfiguration((QWebSocket*)self, (QSslConfiguration*)sslConfiguration);
}

QSslConfiguration* q_websocket_ssl_configuration(void* self) {
    return QWebSocket_SslConfiguration((QWebSocket*)self);
}

long long q_websocket_bytes_to_write(void* self) {
    return QWebSocket_BytesToWrite((QWebSocket*)self);
}

void q_websocket_set_max_allowed_incoming_frame_size(void* self, uint64_t maxAllowedIncomingFrameSize) {
    QWebSocket_SetMaxAllowedIncomingFrameSize((QWebSocket*)self, maxAllowedIncomingFrameSize);
}

uint64_t q_websocket_max_allowed_incoming_frame_size(void* self) {
    return QWebSocket_MaxAllowedIncomingFrameSize((QWebSocket*)self);
}

void q_websocket_set_max_allowed_incoming_message_size(void* self, uint64_t maxAllowedIncomingMessageSize) {
    QWebSocket_SetMaxAllowedIncomingMessageSize((QWebSocket*)self, maxAllowedIncomingMessageSize);
}

uint64_t q_websocket_max_allowed_incoming_message_size(void* self) {
    return QWebSocket_MaxAllowedIncomingMessageSize((QWebSocket*)self);
}

uint64_t q_websocket_max_incoming_message_size() {
    return QWebSocket_MaxIncomingMessageSize();
}

uint64_t q_websocket_max_incoming_frame_size() {
    return QWebSocket_MaxIncomingFrameSize();
}

void q_websocket_set_outgoing_frame_size(void* self, uint64_t outgoingFrameSize) {
    QWebSocket_SetOutgoingFrameSize((QWebSocket*)self, outgoingFrameSize);
}

uint64_t q_websocket_outgoing_frame_size(void* self) {
    return QWebSocket_OutgoingFrameSize((QWebSocket*)self);
}

uint64_t q_websocket_max_outgoing_frame_size() {
    return QWebSocket_MaxOutgoingFrameSize();
}

void q_websocket_close(void* self) {
    QWebSocket_Close((QWebSocket*)self);
}

void q_websocket_open(void* self, void* url) {
    QWebSocket_Open((QWebSocket*)self, (QUrl*)url);
}

void q_websocket_open2(void* self, void* request) {
    QWebSocket_Open2((QWebSocket*)self, (QNetworkRequest*)request);
}

void q_websocket_open3(void* self, void* url, void* options) {
    QWebSocket_Open3((QWebSocket*)self, (QUrl*)url, (QWebSocketHandshakeOptions*)options);
}

void q_websocket_open4(void* self, void* request, void* options) {
    QWebSocket_Open4((QWebSocket*)self, (QNetworkRequest*)request, (QWebSocketHandshakeOptions*)options);
}

void q_websocket_ping(void* self) {
    QWebSocket_Ping((QWebSocket*)self);
}

void q_websocket_ignore_ssl_errors2(void* self) {
    QWebSocket_IgnoreSslErrors2((QWebSocket*)self);
}

void q_websocket_about_to_close(void* self) {
    QWebSocket_AboutToClose((QWebSocket*)self);
}

void q_websocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QWebSocket_Connect_AboutToClose((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_connected(void* self) {
    QWebSocket_Connected((QWebSocket*)self);
}

void q_websocket_on_connected(void* self, void (*callback)(void*)) {
    QWebSocket_Connect_Connected((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_disconnected(void* self) {
    QWebSocket_Disconnected((QWebSocket*)self);
}

void q_websocket_on_disconnected(void* self, void (*callback)(void*)) {
    QWebSocket_Connect_Disconnected((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_state_changed(void* self, int32_t state) {
    QWebSocket_StateChanged((QWebSocket*)self, state);
}

void q_websocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QWebSocket_Connect_StateChanged((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_proxy_authentication_required(void* self, void* proxy, void* pAuthenticator) {
    QWebSocket_ProxyAuthenticationRequired((QWebSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)pAuthenticator);
}

void q_websocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QWebSocket_Connect_ProxyAuthenticationRequired((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_authentication_required(void* self, void* authenticator) {
    QWebSocket_AuthenticationRequired((QWebSocket*)self, (QAuthenticator*)authenticator);
}

void q_websocket_on_authentication_required(void* self, void (*callback)(void*, void*)) {
    QWebSocket_Connect_AuthenticationRequired((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_read_channel_finished(void* self) {
    QWebSocket_ReadChannelFinished((QWebSocket*)self);
}

void q_websocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QWebSocket_Connect_ReadChannelFinished((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_text_frame_received(void* self, const char* frame, bool isLastFrame) {
    QWebSocket_TextFrameReceived((QWebSocket*)self, qstring(frame), isLastFrame);
}

void q_websocket_on_text_frame_received(void* self, void (*callback)(void*, const char*, bool)) {
    QWebSocket_Connect_TextFrameReceived((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_binary_frame_received(void* self, char* frame, bool isLastFrame) {
    QWebSocket_BinaryFrameReceived((QWebSocket*)self, qstring(frame), isLastFrame);
}

void q_websocket_on_binary_frame_received(void* self, void (*callback)(void*, libqt_string, bool)) {
    QWebSocket_Connect_BinaryFrameReceived((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_text_message_received(void* self, const char* message) {
    QWebSocket_TextMessageReceived((QWebSocket*)self, qstring(message));
}

void q_websocket_on_text_message_received(void* self, void (*callback)(void*, const char*)) {
    QWebSocket_Connect_TextMessageReceived((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_binary_message_received(void* self, char* message) {
    QWebSocket_BinaryMessageReceived((QWebSocket*)self, qstring(message));
}

void q_websocket_on_binary_message_received(void* self, void (*callback)(void*, libqt_string)) {
    QWebSocket_Connect_BinaryMessageReceived((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_error2(void* self, int32_t error) {
    QWebSocket_Error2((QWebSocket*)self, error);
}

void q_websocket_error_occurred(void* self, int32_t error) {
    QWebSocket_ErrorOccurred((QWebSocket*)self, error);
}

void q_websocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QWebSocket_Connect_ErrorOccurred((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_pong(void* self, uint64_t elapsedTime, char* payload) {
    QWebSocket_Pong((QWebSocket*)self, elapsedTime, qstring(payload));
}

void q_websocket_on_pong(void* self, void (*callback)(void*, uint64_t, libqt_string)) {
    QWebSocket_Connect_Pong((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_bytes_written(void* self, long long bytes) {
    QWebSocket_BytesWritten((QWebSocket*)self, bytes);
}

void q_websocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QWebSocket_Connect_BytesWritten((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_peer_verify_error(void* self, void* error) {
    QWebSocket_PeerVerifyError((QWebSocket*)self, (QSslError*)error);
}

void q_websocket_on_peer_verify_error(void* self, void (*callback)(void*, void*)) {
    QWebSocket_Connect_PeerVerifyError((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_ssl_errors(void* self, libqt_list /* of QSslError* */ errors) {
    QWebSocket_SslErrors((QWebSocket*)self, errors);
}

void q_websocket_on_ssl_errors(void* self, void (*callback)(void*, libqt_list /* of QSslError* */)) {
    QWebSocket_Connect_SslErrors((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QWebSocket_PreSharedKeyAuthenticationRequired((QWebSocket*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_websocket_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*)) {
    QWebSocket_Connect_PreSharedKeyAuthenticationRequired((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_alert_sent(void* self, int32_t level, int32_t type, const char* description) {
    QWebSocket_AlertSent((QWebSocket*)self, level, type, qstring(description));
}

void q_websocket_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QWebSocket_Connect_AlertSent((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_alert_received(void* self, int32_t level, int32_t type, const char* description) {
    QWebSocket_AlertReceived((QWebSocket*)self, level, type, qstring(description));
}

void q_websocket_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QWebSocket_Connect_AlertReceived((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_handshake_interrupted_on_error(void* self, void* error) {
    QWebSocket_HandshakeInterruptedOnError((QWebSocket*)self, (QSslError*)error);
}

void q_websocket_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*)) {
    QWebSocket_Connect_HandshakeInterruptedOnError((QWebSocket*)self, (intptr_t)callback);
}

const char* q_websocket_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_websocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocket_close1(void* self, int32_t closeCode) {
    QWebSocket_Close1((QWebSocket*)self, closeCode);
}

void q_websocket_close2(void* self, int32_t closeCode, const char* reason) {
    QWebSocket_Close2((QWebSocket*)self, closeCode, qstring(reason));
}

void q_websocket_ping1(void* self, char* payload) {
    QWebSocket_Ping1((QWebSocket*)self, qstring(payload));
}

const char* q_websocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_websocket_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_websocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_websocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_websocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_websocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_websocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_websocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_websocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_websocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_websocket_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_websocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_websocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_websocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_websocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_websocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_websocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_websocket_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_websocket_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_websocket_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_websocket_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_websocket_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_websocket_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_websocket_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_websocket_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_websocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_websocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_websocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_websocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_websocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_websocket_dynamic_property_names\n");
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

QBindingStorage* q_websocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_websocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_websocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_websocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_websocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_websocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_websocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_websocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_websocket_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_websocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_websocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_websocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_websocket_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_websocket_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_websocket_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_websocket_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_websocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_websocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_websocket_event(void* self, void* event) {
    return QWebSocket_Event((QWebSocket*)self, (QEvent*)event);
}

bool q_websocket_qbase_event(void* self, void* event) {
    return QWebSocket_QBaseEvent((QWebSocket*)self, (QEvent*)event);
}

void q_websocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QWebSocket_OnEvent((QWebSocket*)self, (intptr_t)callback);
}

bool q_websocket_event_filter(void* self, void* watched, void* event) {
    return QWebSocket_EventFilter((QWebSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_websocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebSocket_QBaseEventFilter((QWebSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_websocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWebSocket_OnEventFilter((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_timer_event(void* self, void* event) {
    QWebSocket_TimerEvent((QWebSocket*)self, (QTimerEvent*)event);
}

void q_websocket_qbase_timer_event(void* self, void* event) {
    QWebSocket_QBaseTimerEvent((QWebSocket*)self, (QTimerEvent*)event);
}

void q_websocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWebSocket_OnTimerEvent((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_child_event(void* self, void* event) {
    QWebSocket_ChildEvent((QWebSocket*)self, (QChildEvent*)event);
}

void q_websocket_qbase_child_event(void* self, void* event) {
    QWebSocket_QBaseChildEvent((QWebSocket*)self, (QChildEvent*)event);
}

void q_websocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWebSocket_OnChildEvent((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_custom_event(void* self, void* event) {
    QWebSocket_CustomEvent((QWebSocket*)self, (QEvent*)event);
}

void q_websocket_qbase_custom_event(void* self, void* event) {
    QWebSocket_QBaseCustomEvent((QWebSocket*)self, (QEvent*)event);
}

void q_websocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWebSocket_OnCustomEvent((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_connect_notify(void* self, void* signal) {
    QWebSocket_ConnectNotify((QWebSocket*)self, (QMetaMethod*)signal);
}

void q_websocket_qbase_connect_notify(void* self, void* signal) {
    QWebSocket_QBaseConnectNotify((QWebSocket*)self, (QMetaMethod*)signal);
}

void q_websocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWebSocket_OnConnectNotify((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_disconnect_notify(void* self, void* signal) {
    QWebSocket_DisconnectNotify((QWebSocket*)self, (QMetaMethod*)signal);
}

void q_websocket_qbase_disconnect_notify(void* self, void* signal) {
    QWebSocket_QBaseDisconnectNotify((QWebSocket*)self, (QMetaMethod*)signal);
}

void q_websocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWebSocket_OnDisconnectNotify((QWebSocket*)self, (intptr_t)callback);
}

QObject* q_websocket_sender(void* self) {
    return QWebSocket_Sender((QWebSocket*)self);
}

QObject* q_websocket_qbase_sender(void* self) {
    return QWebSocket_QBaseSender((QWebSocket*)self);
}

void q_websocket_on_sender(void* self, QObject* (*callback)()) {
    QWebSocket_OnSender((QWebSocket*)self, (intptr_t)callback);
}

int32_t q_websocket_sender_signal_index(void* self) {
    return QWebSocket_SenderSignalIndex((QWebSocket*)self);
}

int32_t q_websocket_qbase_sender_signal_index(void* self) {
    return QWebSocket_QBaseSenderSignalIndex((QWebSocket*)self);
}

void q_websocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWebSocket_OnSenderSignalIndex((QWebSocket*)self, (intptr_t)callback);
}

int32_t q_websocket_receivers(void* self, const char* signal) {
    return QWebSocket_Receivers((QWebSocket*)self, signal);
}

int32_t q_websocket_qbase_receivers(void* self, const char* signal) {
    return QWebSocket_QBaseReceivers((QWebSocket*)self, signal);
}

void q_websocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWebSocket_OnReceivers((QWebSocket*)self, (intptr_t)callback);
}

bool q_websocket_is_signal_connected(void* self, void* signal) {
    return QWebSocket_IsSignalConnected((QWebSocket*)self, (QMetaMethod*)signal);
}

bool q_websocket_qbase_is_signal_connected(void* self, void* signal) {
    return QWebSocket_QBaseIsSignalConnected((QWebSocket*)self, (QMetaMethod*)signal);
}

void q_websocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWebSocket_OnIsSignalConnected((QWebSocket*)self, (intptr_t)callback);
}

void q_websocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_websocket_delete(void* self) {
    QWebSocket_Delete((QWebSocket*)(self));
}
