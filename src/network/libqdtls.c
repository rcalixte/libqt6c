#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsslcipher.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqudpsocket.hpp"
#include "libqdtls.hpp"
#include "libqdtls.h"

QDtlsClientVerifier* q_dtlsclientverifier_new() {
    return QDtlsClientVerifier_new();
}

QDtlsClientVerifier* q_dtlsclientverifier_new2(void* parent) {
    return QDtlsClientVerifier_new2((QObject*)parent);
}

const QMetaObject* q_dtlsclientverifier_meta_object(void* self) {
    return QDtlsClientVerifier_MetaObject((QDtlsClientVerifier*)self);
}

void* q_dtlsclientverifier_metacast(void* self, const char* param1) {
    return QDtlsClientVerifier_Metacast((QDtlsClientVerifier*)self, param1);
}

int32_t q_dtlsclientverifier_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDtlsClientVerifier_Metacall((QDtlsClientVerifier*)self, param1, param2, param3);
}

void q_dtlsclientverifier_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDtlsClientVerifier_OnMetacall((QDtlsClientVerifier*)self, (intptr_t)callback);
}

int32_t q_dtlsclientverifier_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDtlsClientVerifier_QBaseMetacall((QDtlsClientVerifier*)self, param1, param2, param3);
}

const char* q_dtlsclientverifier_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dtlsclientverifier_set_cookie_generator_parameters(void* self, void* params) {
    return QDtlsClientVerifier_SetCookieGeneratorParameters((QDtlsClientVerifier*)self, (QDtlsClientVerifier__GeneratorParameters*)params);
}

QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier_cookie_generator_parameters(void* self) {
    return QDtlsClientVerifier_CookieGeneratorParameters((QDtlsClientVerifier*)self);
}

bool q_dtlsclientverifier_verify_client(void* self, void* socket, const char* dgram, void* address, unsigned short port) {
    return QDtlsClientVerifier_VerifyClient((QDtlsClientVerifier*)self, (QUdpSocket*)socket, qstring(dgram), (QHostAddress*)address, port);
}

char* q_dtlsclientverifier_verified_hello(void* self) {
    libqt_string _str = QDtlsClientVerifier_VerifiedHello((QDtlsClientVerifier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint8_t q_dtlsclientverifier_dtls_error(void* self) {
    return QDtlsClientVerifier_DtlsError((QDtlsClientVerifier*)self);
}

const char* q_dtlsclientverifier_dtls_error_string(void* self) {
    libqt_string _str = QDtlsClientVerifier_DtlsErrorString((QDtlsClientVerifier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dtlsclientverifier_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dtlsclientverifier_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dtlsclientverifier_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dtlsclientverifier_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dtlsclientverifier_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dtlsclientverifier_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dtlsclientverifier_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dtlsclientverifier_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dtlsclientverifier_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dtlsclientverifier_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dtlsclientverifier_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dtlsclientverifier_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dtlsclientverifier_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dtlsclientverifier_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dtlsclientverifier_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dtlsclientverifier_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dtlsclientverifier_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dtlsclientverifier_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dtlsclientverifier_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dtlsclientverifier_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dtlsclientverifier_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dtlsclientverifier_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dtlsclientverifier_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dtlsclientverifier_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dtlsclientverifier_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dtlsclientverifier_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dtlsclientverifier_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dtlsclientverifier_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dtlsclientverifier_dynamic_property_names\n");
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

QBindingStorage* q_dtlsclientverifier_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dtlsclientverifier_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dtlsclientverifier_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dtlsclientverifier_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dtlsclientverifier_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dtlsclientverifier_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dtlsclientverifier_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dtlsclientverifier_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dtlsclientverifier_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dtlsclientverifier_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dtlsclientverifier_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dtlsclientverifier_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dtlsclientverifier_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dtlsclientverifier_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dtlsclientverifier_event(void* self, void* event) {
    return QDtlsClientVerifier_Event((QDtlsClientVerifier*)self, (QEvent*)event);
}

bool q_dtlsclientverifier_qbase_event(void* self, void* event) {
    return QDtlsClientVerifier_QBaseEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

void q_dtlsclientverifier_on_event(void* self, bool (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnEvent((QDtlsClientVerifier*)self, (intptr_t)callback);
}

bool q_dtlsclientverifier_event_filter(void* self, void* watched, void* event) {
    return QDtlsClientVerifier_EventFilter((QDtlsClientVerifier*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dtlsclientverifier_qbase_event_filter(void* self, void* watched, void* event) {
    return QDtlsClientVerifier_QBaseEventFilter((QDtlsClientVerifier*)self, (QObject*)watched, (QEvent*)event);
}

void q_dtlsclientverifier_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDtlsClientVerifier_OnEventFilter((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_timer_event(void* self, void* event) {
    QDtlsClientVerifier_TimerEvent((QDtlsClientVerifier*)self, (QTimerEvent*)event);
}

void q_dtlsclientverifier_qbase_timer_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseTimerEvent((QDtlsClientVerifier*)self, (QTimerEvent*)event);
}

void q_dtlsclientverifier_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnTimerEvent((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_child_event(void* self, void* event) {
    QDtlsClientVerifier_ChildEvent((QDtlsClientVerifier*)self, (QChildEvent*)event);
}

void q_dtlsclientverifier_qbase_child_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseChildEvent((QDtlsClientVerifier*)self, (QChildEvent*)event);
}

void q_dtlsclientverifier_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnChildEvent((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_custom_event(void* self, void* event) {
    QDtlsClientVerifier_CustomEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

void q_dtlsclientverifier_qbase_custom_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseCustomEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

void q_dtlsclientverifier_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnCustomEvent((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_connect_notify(void* self, void* signal) {
    QDtlsClientVerifier_ConnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

void q_dtlsclientverifier_qbase_connect_notify(void* self, void* signal) {
    QDtlsClientVerifier_QBaseConnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

void q_dtlsclientverifier_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnConnectNotify((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_disconnect_notify(void* self, void* signal) {
    QDtlsClientVerifier_DisconnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

void q_dtlsclientverifier_qbase_disconnect_notify(void* self, void* signal) {
    QDtlsClientVerifier_QBaseDisconnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

void q_dtlsclientverifier_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnDisconnectNotify((QDtlsClientVerifier*)self, (intptr_t)callback);
}

QObject* q_dtlsclientverifier_sender(void* self) {
    return QDtlsClientVerifier_Sender((QDtlsClientVerifier*)self);
}

QObject* q_dtlsclientverifier_qbase_sender(void* self) {
    return QDtlsClientVerifier_QBaseSender((QDtlsClientVerifier*)self);
}

void q_dtlsclientverifier_on_sender(void* self, QObject* (*callback)()) {
    QDtlsClientVerifier_OnSender((QDtlsClientVerifier*)self, (intptr_t)callback);
}

int32_t q_dtlsclientverifier_sender_signal_index(void* self) {
    return QDtlsClientVerifier_SenderSignalIndex((QDtlsClientVerifier*)self);
}

int32_t q_dtlsclientverifier_qbase_sender_signal_index(void* self) {
    return QDtlsClientVerifier_QBaseSenderSignalIndex((QDtlsClientVerifier*)self);
}

void q_dtlsclientverifier_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDtlsClientVerifier_OnSenderSignalIndex((QDtlsClientVerifier*)self, (intptr_t)callback);
}

int32_t q_dtlsclientverifier_receivers(void* self, const char* signal) {
    return QDtlsClientVerifier_Receivers((QDtlsClientVerifier*)self, signal);
}

int32_t q_dtlsclientverifier_qbase_receivers(void* self, const char* signal) {
    return QDtlsClientVerifier_QBaseReceivers((QDtlsClientVerifier*)self, signal);
}

void q_dtlsclientverifier_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDtlsClientVerifier_OnReceivers((QDtlsClientVerifier*)self, (intptr_t)callback);
}

bool q_dtlsclientverifier_is_signal_connected(void* self, void* signal) {
    return QDtlsClientVerifier_IsSignalConnected((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

bool q_dtlsclientverifier_qbase_is_signal_connected(void* self, void* signal) {
    return QDtlsClientVerifier_QBaseIsSignalConnected((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

void q_dtlsclientverifier_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDtlsClientVerifier_OnIsSignalConnected((QDtlsClientVerifier*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dtlsclientverifier_delete(void* self) {
    QDtlsClientVerifier_Delete((QDtlsClientVerifier*)(self));
}

QDtls* q_dtls_new(int32_t mode) {
    return QDtls_new(mode);
}

QDtls* q_dtls_new2(int32_t mode, void* parent) {
    return QDtls_new2(mode, (QObject*)parent);
}

const QMetaObject* q_dtls_meta_object(void* self) {
    return QDtls_MetaObject((QDtls*)self);
}

void* q_dtls_metacast(void* self, const char* param1) {
    return QDtls_Metacast((QDtls*)self, param1);
}

int32_t q_dtls_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDtls_Metacall((QDtls*)self, param1, param2, param3);
}

void q_dtls_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDtls_OnMetacall((QDtls*)self, (intptr_t)callback);
}

int32_t q_dtls_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDtls_QBaseMetacall((QDtls*)self, param1, param2, param3);
}

const char* q_dtls_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dtls_set_peer(void* self, void* address, unsigned short port) {
    return QDtls_SetPeer((QDtls*)self, (QHostAddress*)address, port);
}

bool q_dtls_set_peer_verification_name(void* self, const char* name) {
    return QDtls_SetPeerVerificationName((QDtls*)self, qstring(name));
}

QHostAddress* q_dtls_peer_address(void* self) {
    return QDtls_PeerAddress((QDtls*)self);
}

unsigned short q_dtls_peer_port(void* self) {
    return QDtls_PeerPort((QDtls*)self);
}

const char* q_dtls_peer_verification_name(void* self) {
    libqt_string _str = QDtls_PeerVerificationName((QDtls*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_dtls_ssl_mode(void* self) {
    return QDtls_SslMode((QDtls*)self);
}

void q_dtls_set_mtu_hint(void* self, unsigned short mtuHint) {
    QDtls_SetMtuHint((QDtls*)self, mtuHint);
}

unsigned short q_dtls_mtu_hint(void* self) {
    return QDtls_MtuHint((QDtls*)self);
}

bool q_dtls_set_cookie_generator_parameters(void* self, void* params) {
    return QDtls_SetCookieGeneratorParameters((QDtls*)self, (QDtlsClientVerifier__GeneratorParameters*)params);
}

QDtlsClientVerifier__GeneratorParameters* q_dtls_cookie_generator_parameters(void* self) {
    return QDtls_CookieGeneratorParameters((QDtls*)self);
}

bool q_dtls_set_dtls_configuration(void* self, void* configuration) {
    return QDtls_SetDtlsConfiguration((QDtls*)self, (QSslConfiguration*)configuration);
}

QSslConfiguration* q_dtls_dtls_configuration(void* self) {
    return QDtls_DtlsConfiguration((QDtls*)self);
}

int32_t q_dtls_handshake_state(void* self) {
    return QDtls_HandshakeState((QDtls*)self);
}

bool q_dtls_do_handshake(void* self, void* socket) {
    return QDtls_DoHandshake((QDtls*)self, (QUdpSocket*)socket);
}

bool q_dtls_handle_timeout(void* self, void* socket) {
    return QDtls_HandleTimeout((QDtls*)self, (QUdpSocket*)socket);
}

bool q_dtls_resume_handshake(void* self, void* socket) {
    return QDtls_ResumeHandshake((QDtls*)self, (QUdpSocket*)socket);
}

bool q_dtls_abort_handshake(void* self, void* socket) {
    return QDtls_AbortHandshake((QDtls*)self, (QUdpSocket*)socket);
}

bool q_dtls_shutdown(void* self, void* socket) {
    return QDtls_Shutdown((QDtls*)self, (QUdpSocket*)socket);
}

bool q_dtls_is_connection_encrypted(void* self) {
    return QDtls_IsConnectionEncrypted((QDtls*)self);
}

QSslCipher* q_dtls_session_cipher(void* self) {
    return QDtls_SessionCipher((QDtls*)self);
}

int32_t q_dtls_session_protocol(void* self) {
    return QDtls_SessionProtocol((QDtls*)self);
}

long long q_dtls_write_datagram_encrypted(void* self, void* socket, const char* dgram) {
    return QDtls_WriteDatagramEncrypted((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
}

char* q_dtls_decrypt_datagram(void* self, void* socket, const char* dgram) {
    libqt_string _str = QDtls_DecryptDatagram((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint8_t q_dtls_dtls_error(void* self) {
    return QDtls_DtlsError((QDtls*)self);
}

const char* q_dtls_dtls_error_string(void* self) {
    libqt_string _str = QDtls_DtlsErrorString((QDtls*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QSslError* */ q_dtls_peer_verification_errors(void* self) {
    libqt_list _arr = QDtls_PeerVerificationErrors((QDtls*)self);
    return _arr;
}

void q_dtls_ignore_verification_errors(void* self, libqt_list /* of QSslError* */ errorsToIgnore) {
    QDtls_IgnoreVerificationErrors((QDtls*)self, errorsToIgnore);
}

void q_dtls_psk_required(void* self, void* authenticator) {
    QDtls_PskRequired((QDtls*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_dtls_on_psk_required(void* self, void (*callback)(void*, void*)) {
    QDtls_Connect_PskRequired((QDtls*)self, (intptr_t)callback);
}

void q_dtls_handshake_timeout(void* self) {
    QDtls_HandshakeTimeout((QDtls*)self);
}

void q_dtls_on_handshake_timeout(void* self, void (*callback)(void*)) {
    QDtls_Connect_HandshakeTimeout((QDtls*)self, (intptr_t)callback);
}

const char* q_dtls_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dtls_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dtls_set_peer3(void* self, void* address, unsigned short port, const char* verificationName) {
    return QDtls_SetPeer3((QDtls*)self, (QHostAddress*)address, port, qstring(verificationName));
}

bool q_dtls_do_handshake2(void* self, void* socket, const char* dgram) {
    return QDtls_DoHandshake2((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
}

const char* q_dtls_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dtls_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dtls_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dtls_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dtls_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dtls_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dtls_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dtls_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dtls_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dtls_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dtls_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dtls_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dtls_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dtls_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dtls_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dtls_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dtls_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dtls_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dtls_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dtls_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dtls_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dtls_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dtls_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dtls_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dtls_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dtls_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dtls_dynamic_property_names\n");
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

QBindingStorage* q_dtls_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dtls_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dtls_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dtls_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dtls_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dtls_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dtls_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dtls_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dtls_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dtls_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dtls_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dtls_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dtls_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dtls_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dtls_event(void* self, void* event) {
    return QDtls_Event((QDtls*)self, (QEvent*)event);
}

bool q_dtls_qbase_event(void* self, void* event) {
    return QDtls_QBaseEvent((QDtls*)self, (QEvent*)event);
}

void q_dtls_on_event(void* self, bool (*callback)(void*, void*)) {
    QDtls_OnEvent((QDtls*)self, (intptr_t)callback);
}

bool q_dtls_event_filter(void* self, void* watched, void* event) {
    return QDtls_EventFilter((QDtls*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dtls_qbase_event_filter(void* self, void* watched, void* event) {
    return QDtls_QBaseEventFilter((QDtls*)self, (QObject*)watched, (QEvent*)event);
}

void q_dtls_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDtls_OnEventFilter((QDtls*)self, (intptr_t)callback);
}

void q_dtls_timer_event(void* self, void* event) {
    QDtls_TimerEvent((QDtls*)self, (QTimerEvent*)event);
}

void q_dtls_qbase_timer_event(void* self, void* event) {
    QDtls_QBaseTimerEvent((QDtls*)self, (QTimerEvent*)event);
}

void q_dtls_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDtls_OnTimerEvent((QDtls*)self, (intptr_t)callback);
}

void q_dtls_child_event(void* self, void* event) {
    QDtls_ChildEvent((QDtls*)self, (QChildEvent*)event);
}

void q_dtls_qbase_child_event(void* self, void* event) {
    QDtls_QBaseChildEvent((QDtls*)self, (QChildEvent*)event);
}

void q_dtls_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDtls_OnChildEvent((QDtls*)self, (intptr_t)callback);
}

void q_dtls_custom_event(void* self, void* event) {
    QDtls_CustomEvent((QDtls*)self, (QEvent*)event);
}

void q_dtls_qbase_custom_event(void* self, void* event) {
    QDtls_QBaseCustomEvent((QDtls*)self, (QEvent*)event);
}

void q_dtls_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDtls_OnCustomEvent((QDtls*)self, (intptr_t)callback);
}

void q_dtls_connect_notify(void* self, void* signal) {
    QDtls_ConnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

void q_dtls_qbase_connect_notify(void* self, void* signal) {
    QDtls_QBaseConnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

void q_dtls_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDtls_OnConnectNotify((QDtls*)self, (intptr_t)callback);
}

void q_dtls_disconnect_notify(void* self, void* signal) {
    QDtls_DisconnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

void q_dtls_qbase_disconnect_notify(void* self, void* signal) {
    QDtls_QBaseDisconnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

void q_dtls_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDtls_OnDisconnectNotify((QDtls*)self, (intptr_t)callback);
}

QObject* q_dtls_sender(void* self) {
    return QDtls_Sender((QDtls*)self);
}

QObject* q_dtls_qbase_sender(void* self) {
    return QDtls_QBaseSender((QDtls*)self);
}

void q_dtls_on_sender(void* self, QObject* (*callback)()) {
    QDtls_OnSender((QDtls*)self, (intptr_t)callback);
}

int32_t q_dtls_sender_signal_index(void* self) {
    return QDtls_SenderSignalIndex((QDtls*)self);
}

int32_t q_dtls_qbase_sender_signal_index(void* self) {
    return QDtls_QBaseSenderSignalIndex((QDtls*)self);
}

void q_dtls_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDtls_OnSenderSignalIndex((QDtls*)self, (intptr_t)callback);
}

int32_t q_dtls_receivers(void* self, const char* signal) {
    return QDtls_Receivers((QDtls*)self, signal);
}

int32_t q_dtls_qbase_receivers(void* self, const char* signal) {
    return QDtls_QBaseReceivers((QDtls*)self, signal);
}

void q_dtls_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDtls_OnReceivers((QDtls*)self, (intptr_t)callback);
}

bool q_dtls_is_signal_connected(void* self, void* signal) {
    return QDtls_IsSignalConnected((QDtls*)self, (QMetaMethod*)signal);
}

bool q_dtls_qbase_is_signal_connected(void* self, void* signal) {
    return QDtls_QBaseIsSignalConnected((QDtls*)self, (QMetaMethod*)signal);
}

void q_dtls_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDtls_OnIsSignalConnected((QDtls*)self, (intptr_t)callback);
}

void q_dtls_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dtls_delete(void* self) {
    QDtls_Delete((QDtls*)(self));
}

QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new() {
    return QDtlsClientVerifier__GeneratorParameters_new();
}

QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new2(int32_t a, const char* s) {
    return QDtlsClientVerifier__GeneratorParameters_new2(a, qstring(s));
}

QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new3(void* param1) {
    return QDtlsClientVerifier__GeneratorParameters_new3((QDtlsClientVerifier__GeneratorParameters*)param1);
}

int32_t q_dtlsclientverifier__generatorparameters_hash(void* self) {
    return QDtlsClientVerifier__GeneratorParameters_Hash((QDtlsClientVerifier__GeneratorParameters*)self);
}

void q_dtlsclientverifier__generatorparameters_set_hash(void* self, int32_t hash) {
    QDtlsClientVerifier__GeneratorParameters_SetHash((QDtlsClientVerifier__GeneratorParameters*)self, hash);
}

char* q_dtlsclientverifier__generatorparameters_secret(void* self) {
    libqt_string secret_str = QDtlsClientVerifier__GeneratorParameters_Secret((QDtlsClientVerifier__GeneratorParameters*)self);
    char* secret_ret = qstring_to_char(secret_str);
    libqt_string_free(&secret_str);
    return secret_ret;
}

void q_dtlsclientverifier__generatorparameters_set_secret(void* self, char* secret) {
    QDtlsClientVerifier__GeneratorParameters_SetSecret((QDtlsClientVerifier__GeneratorParameters*)self, qstring(secret));
}

void q_dtlsclientverifier__generatorparameters_operator_assign(void* self, void* param1) {
    QDtlsClientVerifier__GeneratorParameters_OperatorAssign((QDtlsClientVerifier__GeneratorParameters*)self, (QDtlsClientVerifier__GeneratorParameters*)param1);
}

void q_dtlsclientverifier__generatorparameters_delete(void* self) {
    QDtlsClientVerifier__GeneratorParameters_Delete((QDtlsClientVerifier__GeneratorParameters*)(self));
}
