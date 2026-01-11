#include "libqabstractsocket.hpp"
#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqocspresponse.hpp"
#include "libqsslcertificate.hpp"
#include "libqsslcipher.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslkey.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqtcpsocket.hpp"
#include "../libqvariant.hpp"
#include "libqsslsocket.hpp"
#include "libqsslsocket.h"

QSslSocket* q_sslsocket_new() {
    return QSslSocket_new();
}

QSslSocket* q_sslsocket_new2(void* parent) {
    return QSslSocket_new2((QObject*)parent);
}

const QMetaObject* q_sslsocket_meta_object(void* self) {
    return QSslSocket_MetaObject((QSslSocket*)self);
}

void* q_sslsocket_metacast(void* self, const char* param1) {
    return QSslSocket_Metacast((QSslSocket*)self, param1);
}

int32_t q_sslsocket_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSslSocket_Metacall((QSslSocket*)self, param1, param2, param3);
}

void q_sslsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSslSocket_OnMetacall((QSslSocket*)self, (intptr_t)callback);
}

int32_t q_sslsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSslSocket_QBaseMetacall((QSslSocket*)self, param1, param2, param3);
}

const char* q_sslsocket_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_resume(void* self) {
    QSslSocket_Resume((QSslSocket*)self);
}

void q_sslsocket_on_resume(void* self, void (*callback)()) {
    QSslSocket_OnResume((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_resume(void* self) {
    QSslSocket_QBaseResume((QSslSocket*)self);
}

void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port) {
    QSslSocket_ConnectToHostEncrypted((QSslSocket*)self, qstring(hostName), port);
}

void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName) {
    QSslSocket_ConnectToHostEncrypted2((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName));
}

bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QSslSocket_SetSocketDescriptor((QSslSocket*)self, socketDescriptor, state, openMode);
}

void q_sslsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t)) {
    QSslSocket_OnSetSocketDescriptor((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode) {
    return QSslSocket_QBaseSetSocketDescriptor((QSslSocket*)self, socketDescriptor, state, openMode);
}

void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t openMode, int32_t protocol) {
    QSslSocket_ConnectToHost((QSslSocket*)self, qstring(hostName), port, openMode, protocol);
}

void q_sslsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t)) {
    QSslSocket_OnConnectToHost((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t openMode, int32_t protocol) {
    QSslSocket_QBaseConnectToHost((QSslSocket*)self, qstring(hostName), port, openMode, protocol);
}

void q_sslsocket_disconnect_from_host(void* self) {
    QSslSocket_DisconnectFromHost((QSslSocket*)self);
}

void q_sslsocket_on_disconnect_from_host(void* self, void (*callback)()) {
    QSslSocket_OnDisconnectFromHost((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_disconnect_from_host(void* self) {
    QSslSocket_QBaseDisconnectFromHost((QSslSocket*)self);
}

void q_sslsocket_set_socket_option(void* self, int32_t option, void* value) {
    QSslSocket_SetSocketOption((QSslSocket*)self, option, (QVariant*)value);
}

void q_sslsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*)) {
    QSslSocket_OnSetSocketOption((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_set_socket_option(void* self, int32_t option, void* value) {
    QSslSocket_QBaseSetSocketOption((QSslSocket*)self, option, (QVariant*)value);
}

QVariant* q_sslsocket_socket_option(void* self, int32_t option) {
    return QSslSocket_SocketOption((QSslSocket*)self, option);
}

void q_sslsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t)) {
    QSslSocket_OnSocketOption((QSslSocket*)self, (intptr_t)callback);
}

QVariant* q_sslsocket_qbase_socket_option(void* self, int32_t option) {
    return QSslSocket_QBaseSocketOption((QSslSocket*)self, option);
}

int32_t q_sslsocket_mode(void* self) {
    return QSslSocket_Mode((QSslSocket*)self);
}

bool q_sslsocket_is_encrypted(void* self) {
    return QSslSocket_IsEncrypted((QSslSocket*)self);
}

int32_t q_sslsocket_protocol(void* self) {
    return QSslSocket_Protocol((QSslSocket*)self);
}

void q_sslsocket_set_protocol(void* self, int32_t protocol) {
    QSslSocket_SetProtocol((QSslSocket*)self, protocol);
}

int32_t q_sslsocket_peer_verify_mode(void* self) {
    return QSslSocket_PeerVerifyMode((QSslSocket*)self);
}

void q_sslsocket_set_peer_verify_mode(void* self, int32_t mode) {
    QSslSocket_SetPeerVerifyMode((QSslSocket*)self, mode);
}

int32_t q_sslsocket_peer_verify_depth(void* self) {
    return QSslSocket_PeerVerifyDepth((QSslSocket*)self);
}

void q_sslsocket_set_peer_verify_depth(void* self, int depth) {
    QSslSocket_SetPeerVerifyDepth((QSslSocket*)self, depth);
}

const char* q_sslsocket_peer_verify_name(void* self) {
    libqt_string _str = QSslSocket_PeerVerifyName((QSslSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_set_peer_verify_name(void* self, const char* hostName) {
    QSslSocket_SetPeerVerifyName((QSslSocket*)self, qstring(hostName));
}

long long q_sslsocket_bytes_available(void* self) {
    return QSslSocket_BytesAvailable((QSslSocket*)self);
}

void q_sslsocket_on_bytes_available(void* self, long long (*callback)()) {
    QSslSocket_OnBytesAvailable((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_qbase_bytes_available(void* self) {
    return QSslSocket_QBaseBytesAvailable((QSslSocket*)self);
}

long long q_sslsocket_bytes_to_write(void* self) {
    return QSslSocket_BytesToWrite((QSslSocket*)self);
}

void q_sslsocket_on_bytes_to_write(void* self, long long (*callback)()) {
    QSslSocket_OnBytesToWrite((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_qbase_bytes_to_write(void* self) {
    return QSslSocket_QBaseBytesToWrite((QSslSocket*)self);
}

bool q_sslsocket_can_read_line(void* self) {
    return QSslSocket_CanReadLine((QSslSocket*)self);
}

void q_sslsocket_on_can_read_line(void* self, bool (*callback)()) {
    QSslSocket_OnCanReadLine((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_can_read_line(void* self) {
    return QSslSocket_QBaseCanReadLine((QSslSocket*)self);
}

void q_sslsocket_close(void* self) {
    QSslSocket_Close((QSslSocket*)self);
}

void q_sslsocket_on_close(void* self, void (*callback)()) {
    QSslSocket_OnClose((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_close(void* self) {
    QSslSocket_QBaseClose((QSslSocket*)self);
}

bool q_sslsocket_at_end(void* self) {
    return QSslSocket_AtEnd((QSslSocket*)self);
}

void q_sslsocket_on_at_end(void* self, bool (*callback)()) {
    QSslSocket_OnAtEnd((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_at_end(void* self) {
    return QSslSocket_QBaseAtEnd((QSslSocket*)self);
}

void q_sslsocket_set_read_buffer_size(void* self, long long size) {
    QSslSocket_SetReadBufferSize((QSslSocket*)self, size);
}

void q_sslsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long)) {
    QSslSocket_OnSetReadBufferSize((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QSslSocket_QBaseSetReadBufferSize((QSslSocket*)self, size);
}

long long q_sslsocket_encrypted_bytes_available(void* self) {
    return QSslSocket_EncryptedBytesAvailable((QSslSocket*)self);
}

long long q_sslsocket_encrypted_bytes_to_write(void* self) {
    return QSslSocket_EncryptedBytesToWrite((QSslSocket*)self);
}

QSslConfiguration* q_sslsocket_ssl_configuration(void* self) {
    return QSslSocket_SslConfiguration((QSslSocket*)self);
}

void q_sslsocket_set_ssl_configuration(void* self, void* config) {
    QSslSocket_SetSslConfiguration((QSslSocket*)self, (QSslConfiguration*)config);
}

void q_sslsocket_set_local_certificate_chain(void* self, libqt_list localChain) {
    QSslSocket_SetLocalCertificateChain((QSslSocket*)self, localChain);
}

libqt_list /* of QSslCertificate* */ q_sslsocket_local_certificate_chain(void* self) {
    libqt_list _arr = QSslSocket_LocalCertificateChain((QSslSocket*)self);
    return _arr;
}

void q_sslsocket_set_local_certificate(void* self, void* certificate) {
    QSslSocket_SetLocalCertificate((QSslSocket*)self, (QSslCertificate*)certificate);
}

void q_sslsocket_set_local_certificate2(void* self, const char* fileName) {
    QSslSocket_SetLocalCertificate2((QSslSocket*)self, qstring(fileName));
}

QSslCertificate* q_sslsocket_local_certificate(void* self) {
    return QSslSocket_LocalCertificate((QSslSocket*)self);
}

QSslCertificate* q_sslsocket_peer_certificate(void* self) {
    return QSslSocket_PeerCertificate((QSslSocket*)self);
}

libqt_list /* of QSslCertificate* */ q_sslsocket_peer_certificate_chain(void* self) {
    libqt_list _arr = QSslSocket_PeerCertificateChain((QSslSocket*)self);
    return _arr;
}

QSslCipher* q_sslsocket_session_cipher(void* self) {
    return QSslSocket_SessionCipher((QSslSocket*)self);
}

int32_t q_sslsocket_session_protocol(void* self) {
    return QSslSocket_SessionProtocol((QSslSocket*)self);
}

libqt_list /* of QOcspResponse* */ q_sslsocket_ocsp_responses(void* self) {
    libqt_list _arr = QSslSocket_OcspResponses((QSslSocket*)self);
    return _arr;
}

void q_sslsocket_set_private_key(void* self, void* key) {
    QSslSocket_SetPrivateKey((QSslSocket*)self, (QSslKey*)key);
}

void q_sslsocket_set_private_key2(void* self, const char* fileName) {
    QSslSocket_SetPrivateKey2((QSslSocket*)self, qstring(fileName));
}

QSslKey* q_sslsocket_private_key(void* self) {
    return QSslSocket_PrivateKey((QSslSocket*)self);
}

bool q_sslsocket_wait_for_connected(void* self, int msecs) {
    return QSslSocket_WaitForConnected((QSslSocket*)self, msecs);
}

void q_sslsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int)) {
    QSslSocket_OnWaitForConnected((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QSslSocket_QBaseWaitForConnected((QSslSocket*)self, msecs);
}

bool q_sslsocket_wait_for_encrypted(void* self) {
    return QSslSocket_WaitForEncrypted((QSslSocket*)self);
}

bool q_sslsocket_wait_for_ready_read(void* self, int msecs) {
    return QSslSocket_WaitForReadyRead((QSslSocket*)self, msecs);
}

void q_sslsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int)) {
    QSslSocket_OnWaitForReadyRead((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QSslSocket_QBaseWaitForReadyRead((QSslSocket*)self, msecs);
}

bool q_sslsocket_wait_for_bytes_written(void* self, int msecs) {
    return QSslSocket_WaitForBytesWritten((QSslSocket*)self, msecs);
}

void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int)) {
    QSslSocket_OnWaitForBytesWritten((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QSslSocket_QBaseWaitForBytesWritten((QSslSocket*)self, msecs);
}

bool q_sslsocket_wait_for_disconnected(void* self, int msecs) {
    return QSslSocket_WaitForDisconnected((QSslSocket*)self, msecs);
}

void q_sslsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int)) {
    QSslSocket_OnWaitForDisconnected((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QSslSocket_QBaseWaitForDisconnected((QSslSocket*)self, msecs);
}

libqt_list /* of QSslError* */ q_sslsocket_ssl_handshake_errors(void* self) {
    libqt_list _arr = QSslSocket_SslHandshakeErrors((QSslSocket*)self);
    return _arr;
}

bool q_sslsocket_supports_ssl() {
    return QSslSocket_SupportsSsl();
}

int64_t q_sslsocket_ssl_library_version_number() {
    return QSslSocket_SslLibraryVersionNumber();
}

const char* q_sslsocket_ssl_library_version_string() {
    libqt_string _str = QSslSocket_SslLibraryVersionString();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sslsocket_ssl_library_build_version_number() {
    return QSslSocket_SslLibraryBuildVersionNumber();
}

const char* q_sslsocket_ssl_library_build_version_string() {
    libqt_string _str = QSslSocket_SslLibraryBuildVersionString();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_sslsocket_available_backends() {
    libqt_list _arr = QSslSocket_AvailableBackends();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sslsocket_available_backends");
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

const char* q_sslsocket_active_backend() {
    libqt_string _str = QSslSocket_ActiveBackend();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sslsocket_set_active_backend(const char* backendName) {
    return QSslSocket_SetActiveBackend(qstring(backendName));
}

libqt_list /* of enum QSsl__SslProtocol */ q_sslsocket_supported_protocols() {
    libqt_list _arr = QSslSocket_SupportedProtocols();
    return _arr;
}

bool q_sslsocket_is_protocol_supported(int32_t protocol) {
    return QSslSocket_IsProtocolSupported(protocol);
}

libqt_list /* of enum QSsl__ImplementedClass */ q_sslsocket_implemented_classes() {
    libqt_list _arr = QSslSocket_ImplementedClasses();
    return _arr;
}

bool q_sslsocket_is_class_implemented(int32_t cl) {
    return QSslSocket_IsClassImplemented(cl);
}

libqt_list /* of enum QSsl__SupportedFeature */ q_sslsocket_supported_features() {
    libqt_list _arr = QSslSocket_SupportedFeatures();
    return _arr;
}

bool q_sslsocket_is_feature_supported(int32_t feat) {
    return QSslSocket_IsFeatureSupported(feat);
}

void q_sslsocket_ignore_ssl_errors(void* self, libqt_list errors) {
    QSslSocket_IgnoreSslErrors((QSslSocket*)self, errors);
}

void q_sslsocket_continue_interrupted_handshake(void* self) {
    QSslSocket_ContinueInterruptedHandshake((QSslSocket*)self);
}

void q_sslsocket_start_client_encryption(void* self) {
    QSslSocket_StartClientEncryption((QSslSocket*)self);
}

void q_sslsocket_start_server_encryption(void* self) {
    QSslSocket_StartServerEncryption((QSslSocket*)self);
}

void q_sslsocket_ignore_ssl_errors2(void* self) {
    QSslSocket_IgnoreSslErrors2((QSslSocket*)self);
}

void q_sslsocket_encrypted(void* self) {
    QSslSocket_Encrypted((QSslSocket*)self);
}

void q_sslsocket_on_encrypted(void* self, void (*callback)(void*)) {
    QSslSocket_Connect_Encrypted((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_peer_verify_error(void* self, void* error) {
    QSslSocket_PeerVerifyError((QSslSocket*)self, (QSslError*)error);
}

void q_sslsocket_on_peer_verify_error(void* self, void (*callback)(void*, void*)) {
    QSslSocket_Connect_PeerVerifyError((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_ssl_errors(void* self, libqt_list errors) {
    QSslSocket_SslErrors((QSslSocket*)self, errors);
}

void q_sslsocket_on_ssl_errors(void* self, void (*callback)(void*, QSslError**)) {
    QSslSocket_Connect_SslErrors((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_mode_changed(void* self, int32_t newMode) {
    QSslSocket_ModeChanged((QSslSocket*)self, newMode);
}

void q_sslsocket_on_mode_changed(void* self, void (*callback)(void*, int32_t)) {
    QSslSocket_Connect_ModeChanged((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes) {
    QSslSocket_EncryptedBytesWritten((QSslSocket*)self, totalBytes);
}

void q_sslsocket_on_encrypted_bytes_written(void* self, void (*callback)(void*, long long)) {
    QSslSocket_Connect_EncryptedBytesWritten((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QSslSocket_PreSharedKeyAuthenticationRequired((QSslSocket*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*)) {
    QSslSocket_Connect_PreSharedKeyAuthenticationRequired((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_new_session_ticket_received(void* self) {
    QSslSocket_NewSessionTicketReceived((QSslSocket*)self);
}

void q_sslsocket_on_new_session_ticket_received(void* self, void (*callback)(void*)) {
    QSslSocket_Connect_NewSessionTicketReceived((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_alert_sent(void* self, int32_t level, int32_t type, const char* description) {
    QSslSocket_AlertSent((QSslSocket*)self, level, type, qstring(description));
}

void q_sslsocket_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QSslSocket_Connect_AlertSent((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_alert_received(void* self, int32_t level, int32_t type, const char* description) {
    QSslSocket_AlertReceived((QSslSocket*)self, level, type, qstring(description));
}

void q_sslsocket_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*)) {
    QSslSocket_Connect_AlertReceived((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_handshake_interrupted_on_error(void* self, void* error) {
    QSslSocket_HandshakeInterruptedOnError((QSslSocket*)self, (QSslError*)error);
}

void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*)) {
    QSslSocket_Connect_HandshakeInterruptedOnError((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_read_data(void* self, char* data, long long maxlen) {
    return QSslSocket_ReadData((QSslSocket*)self, data, maxlen);
}

void q_sslsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSslSocket_OnReadData((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QSslSocket_QBaseReadData((QSslSocket*)self, data, maxlen);
}

long long q_sslsocket_skip_data(void* self, long long maxSize) {
    return QSslSocket_SkipData((QSslSocket*)self, maxSize);
}

void q_sslsocket_on_skip_data(void* self, long long (*callback)(void*, long long)) {
    QSslSocket_OnSkipData((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_qbase_skip_data(void* self, long long maxSize) {
    return QSslSocket_QBaseSkipData((QSslSocket*)self, maxSize);
}

long long q_sslsocket_write_data(void* self, const char* data, long long lenVal) {
    return QSslSocket_WriteData((QSslSocket*)self, data, lenVal);
}

void q_sslsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long)) {
    QSslSocket_OnWriteData((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QSslSocket_QBaseWriteData((QSslSocket*)self, data, lenVal);
}

const char* q_sslsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int32_t mode) {
    QSslSocket_ConnectToHostEncrypted3((QSslSocket*)self, qstring(hostName), port, mode);
}

void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol) {
    QSslSocket_ConnectToHostEncrypted4((QSslSocket*)self, qstring(hostName), port, mode, protocol);
}

void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int32_t mode) {
    QSslSocket_ConnectToHostEncrypted42((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName), mode);
}

void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int32_t mode, int32_t protocol) {
    QSslSocket_ConnectToHostEncrypted5((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName), mode, protocol);
}

void q_sslsocket_set_local_certificate22(void* self, const char* fileName, int32_t format) {
    QSslSocket_SetLocalCertificate22((QSslSocket*)self, qstring(fileName), format);
}

void q_sslsocket_set_private_key22(void* self, const char* fileName, int32_t algorithm) {
    QSslSocket_SetPrivateKey22((QSslSocket*)self, qstring(fileName), algorithm);
}

void q_sslsocket_set_private_key3(void* self, const char* fileName, int32_t algorithm, int32_t format) {
    QSslSocket_SetPrivateKey3((QSslSocket*)self, qstring(fileName), algorithm, format);
}

void q_sslsocket_set_private_key4(void* self, const char* fileName, int32_t algorithm, int32_t format, const char* passPhrase) {
    QSslSocket_SetPrivateKey4((QSslSocket*)self, qstring(fileName), algorithm, format, qstring(passPhrase));
}

bool q_sslsocket_wait_for_encrypted1(void* self, int msecs) {
    return QSslSocket_WaitForEncrypted1((QSslSocket*)self, msecs);
}

libqt_list /* of enum QSsl__SslProtocol */ q_sslsocket_supported_protocols1(const char* backendName) {
    libqt_list _arr = QSslSocket_SupportedProtocols1(qstring(backendName));
    return _arr;
}

bool q_sslsocket_is_protocol_supported2(int32_t protocol, const char* backendName) {
    return QSslSocket_IsProtocolSupported2(protocol, qstring(backendName));
}

libqt_list /* of enum QSsl__ImplementedClass */ q_sslsocket_implemented_classes1(const char* backendName) {
    libqt_list _arr = QSslSocket_ImplementedClasses1(qstring(backendName));
    return _arr;
}

bool q_sslsocket_is_class_implemented2(int32_t cl, const char* backendName) {
    return QSslSocket_IsClassImplemented2(cl, qstring(backendName));
}

libqt_list /* of enum QSsl__SupportedFeature */ q_sslsocket_supported_features1(const char* backendName) {
    libqt_list _arr = QSslSocket_SupportedFeatures1(qstring(backendName));
    return _arr;
}

bool q_sslsocket_is_feature_supported2(int32_t feat, const char* backendName) {
    return QSslSocket_IsFeatureSupported2(feat, qstring(backendName));
}

bool q_sslsocket_bind2(void* self, int32_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

bool q_sslsocket_bind3(void* self, int32_t addr, unsigned short port, int32_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

int32_t q_sslsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

void q_sslsocket_set_pause_mode(void* self, int32_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

bool q_sslsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

unsigned short q_sslsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

QHostAddress* q_sslsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

unsigned short q_sslsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

QHostAddress* q_sslsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

const char* q_sslsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sslsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

void q_sslsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

int32_t q_sslsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

int32_t q_sslsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

int32_t q_sslsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

bool q_sslsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

void q_sslsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

QNetworkProxy* q_sslsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

const char* q_sslsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

void q_sslsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

void q_sslsocket_on_host_found(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sslsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

void q_sslsocket_on_connected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sslsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

void q_sslsocket_on_disconnected(void* self, void (*callback)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sslsocket_state_changed(void* self, int32_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

void q_sslsocket_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sslsocket_error_occurred(void* self, int32_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

void q_sslsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)callback);
}

void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_sslsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

bool q_sslsocket_bind22(void* self, unsigned short port, int32_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

int32_t q_sslsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

void q_sslsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

bool q_sslsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

bool q_sslsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

bool q_sslsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

bool q_sslsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

int32_t q_sslsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

int32_t q_sslsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

int32_t q_sslsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

void q_sslsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

int32_t q_sslsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

void q_sslsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

long long q_sslsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

char* q_sslsocket_read2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Read2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sslsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

char* q_sslsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

void q_sslsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

void q_sslsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

bool q_sslsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

long long q_sslsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

long long q_sslsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, data);
}

long long q_sslsocket_write3(void* self, const char* data) {
    return QIODevice_Write3((QIODevice*)self, qstring(data));
}

long long q_sslsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

char* q_sslsocket_peek2(void* self, long long maxlen) {
    libqt_string _str = QIODevice_Peek2((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_sslsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

void q_sslsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

bool q_sslsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

bool q_sslsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

const char* q_sslsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

void q_sslsocket_on_ready_read(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_sslsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

void q_sslsocket_on_channel_ready_read(void* self, void (*callback)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)callback);
}

void q_sslsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

void q_sslsocket_on_bytes_written(void* self, void (*callback)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

void q_sslsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)callback);
}

void q_sslsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

void q_sslsocket_on_about_to_close(void* self, void (*callback)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)callback);
}

void q_sslsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

void q_sslsocket_on_read_channel_finished(void* self, void (*callback)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)callback);
}

char* q_sslsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslsocket_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sslsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sslsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sslsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sslsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sslsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sslsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sslsocket_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sslsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sslsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sslsocket_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sslsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sslsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sslsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sslsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sslsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sslsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sslsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sslsocket_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sslsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sslsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sslsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sslsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sslsocket_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_sslsocket_dynamic_property_names");
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

QBindingStorage* q_sslsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sslsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sslsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sslsocket_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_sslsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sslsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sslsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sslsocket_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sslsocket_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sslsocket_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_sslsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sslsocket_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_sslsocket_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QSslSocket_Bind((QSslSocket*)self, (QHostAddress*)address, port, mode);
}

bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int32_t mode) {
    return QSslSocket_QBaseBind((QSslSocket*)self, (QHostAddress*)address, port, mode);
}

void q_sslsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int32_t)) {
    QSslSocket_OnBind((QSslSocket*)self, (intptr_t)callback);
}

intptr_t q_sslsocket_socket_descriptor(void* self) {
    return QSslSocket_SocketDescriptor((QSslSocket*)self);
}

intptr_t q_sslsocket_qbase_socket_descriptor(void* self) {
    return QSslSocket_QBaseSocketDescriptor((QSslSocket*)self);
}

void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*callback)()) {
    QSslSocket_OnSocketDescriptor((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_is_sequential(void* self) {
    return QSslSocket_IsSequential((QSslSocket*)self);
}

bool q_sslsocket_qbase_is_sequential(void* self) {
    return QSslSocket_QBaseIsSequential((QSslSocket*)self);
}

void q_sslsocket_on_is_sequential(void* self, bool (*callback)()) {
    QSslSocket_OnIsSequential((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QSslSocket_ReadLineData((QSslSocket*)self, data, maxlen);
}

long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QSslSocket_QBaseReadLineData((QSslSocket*)self, data, maxlen);
}

void q_sslsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long)) {
    QSslSocket_OnReadLineData((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_open(void* self, int32_t mode) {
    return QSslSocket_Open((QSslSocket*)self, mode);
}

bool q_sslsocket_qbase_open(void* self, int32_t mode) {
    return QSslSocket_QBaseOpen((QSslSocket*)self, mode);
}

void q_sslsocket_on_open(void* self, bool (*callback)(void*, int32_t)) {
    QSslSocket_OnOpen((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_pos(void* self) {
    return QSslSocket_Pos((QSslSocket*)self);
}

long long q_sslsocket_qbase_pos(void* self) {
    return QSslSocket_QBasePos((QSslSocket*)self);
}

void q_sslsocket_on_pos(void* self, long long (*callback)()) {
    QSslSocket_OnPos((QSslSocket*)self, (intptr_t)callback);
}

long long q_sslsocket_size(void* self) {
    return QSslSocket_Size((QSslSocket*)self);
}

long long q_sslsocket_qbase_size(void* self) {
    return QSslSocket_QBaseSize((QSslSocket*)self);
}

void q_sslsocket_on_size(void* self, long long (*callback)()) {
    QSslSocket_OnSize((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_seek(void* self, long long pos) {
    return QSslSocket_Seek((QSslSocket*)self, pos);
}

bool q_sslsocket_qbase_seek(void* self, long long pos) {
    return QSslSocket_QBaseSeek((QSslSocket*)self, pos);
}

void q_sslsocket_on_seek(void* self, bool (*callback)(void*, long long)) {
    QSslSocket_OnSeek((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_reset(void* self) {
    return QSslSocket_Reset((QSslSocket*)self);
}

bool q_sslsocket_qbase_reset(void* self) {
    return QSslSocket_QBaseReset((QSslSocket*)self);
}

void q_sslsocket_on_reset(void* self, bool (*callback)()) {
    QSslSocket_OnReset((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_event(void* self, void* event) {
    return QSslSocket_Event((QSslSocket*)self, (QEvent*)event);
}

bool q_sslsocket_qbase_event(void* self, void* event) {
    return QSslSocket_QBaseEvent((QSslSocket*)self, (QEvent*)event);
}

void q_sslsocket_on_event(void* self, bool (*callback)(void*, void*)) {
    QSslSocket_OnEvent((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_event_filter(void* self, void* watched, void* event) {
    return QSslSocket_EventFilter((QSslSocket*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QSslSocket_QBaseEventFilter((QSslSocket*)self, (QObject*)watched, (QEvent*)event);
}

void q_sslsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSslSocket_OnEventFilter((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_timer_event(void* self, void* event) {
    QSslSocket_TimerEvent((QSslSocket*)self, (QTimerEvent*)event);
}

void q_sslsocket_qbase_timer_event(void* self, void* event) {
    QSslSocket_QBaseTimerEvent((QSslSocket*)self, (QTimerEvent*)event);
}

void q_sslsocket_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnTimerEvent((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_child_event(void* self, void* event) {
    QSslSocket_ChildEvent((QSslSocket*)self, (QChildEvent*)event);
}

void q_sslsocket_qbase_child_event(void* self, void* event) {
    QSslSocket_QBaseChildEvent((QSslSocket*)self, (QChildEvent*)event);
}

void q_sslsocket_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnChildEvent((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_custom_event(void* self, void* event) {
    QSslSocket_CustomEvent((QSslSocket*)self, (QEvent*)event);
}

void q_sslsocket_qbase_custom_event(void* self, void* event) {
    QSslSocket_QBaseCustomEvent((QSslSocket*)self, (QEvent*)event);
}

void q_sslsocket_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnCustomEvent((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_connect_notify(void* self, void* signal) {
    QSslSocket_ConnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

void q_sslsocket_qbase_connect_notify(void* self, void* signal) {
    QSslSocket_QBaseConnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

void q_sslsocket_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnConnectNotify((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_disconnect_notify(void* self, void* signal) {
    QSslSocket_DisconnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

void q_sslsocket_qbase_disconnect_notify(void* self, void* signal) {
    QSslSocket_QBaseDisconnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

void q_sslsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnDisconnectNotify((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_socket_state(void* self, int32_t state) {
    QSslSocket_SetSocketState((QSslSocket*)self, state);
}

void q_sslsocket_qbase_set_socket_state(void* self, int32_t state) {
    QSslSocket_QBaseSetSocketState((QSslSocket*)self, state);
}

void q_sslsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t)) {
    QSslSocket_OnSetSocketState((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_socket_error(void* self, int32_t socketError) {
    QSslSocket_SetSocketError((QSslSocket*)self, socketError);
}

void q_sslsocket_qbase_set_socket_error(void* self, int32_t socketError) {
    QSslSocket_QBaseSetSocketError((QSslSocket*)self, socketError);
}

void q_sslsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t)) {
    QSslSocket_OnSetSocketError((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_local_port(void* self, unsigned short port) {
    QSslSocket_SetLocalPort((QSslSocket*)self, port);
}

void q_sslsocket_qbase_set_local_port(void* self, unsigned short port) {
    QSslSocket_QBaseSetLocalPort((QSslSocket*)self, port);
}

void q_sslsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short)) {
    QSslSocket_OnSetLocalPort((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_local_address(void* self, void* address) {
    QSslSocket_SetLocalAddress((QSslSocket*)self, (QHostAddress*)address);
}

void q_sslsocket_qbase_set_local_address(void* self, void* address) {
    QSslSocket_QBaseSetLocalAddress((QSslSocket*)self, (QHostAddress*)address);
}

void q_sslsocket_on_set_local_address(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnSetLocalAddress((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_peer_port(void* self, unsigned short port) {
    QSslSocket_SetPeerPort((QSslSocket*)self, port);
}

void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QSslSocket_QBaseSetPeerPort((QSslSocket*)self, port);
}

void q_sslsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short)) {
    QSslSocket_OnSetPeerPort((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_peer_address(void* self, void* address) {
    QSslSocket_SetPeerAddress((QSslSocket*)self, (QHostAddress*)address);
}

void q_sslsocket_qbase_set_peer_address(void* self, void* address) {
    QSslSocket_QBaseSetPeerAddress((QSslSocket*)self, (QHostAddress*)address);
}

void q_sslsocket_on_set_peer_address(void* self, void (*callback)(void*, void*)) {
    QSslSocket_OnSetPeerAddress((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_peer_name(void* self, const char* name) {
    QSslSocket_SetPeerName((QSslSocket*)self, qstring(name));
}

void q_sslsocket_qbase_set_peer_name(void* self, const char* name) {
    QSslSocket_QBaseSetPeerName((QSslSocket*)self, qstring(name));
}

void q_sslsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*)) {
    QSslSocket_OnSetPeerName((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_open_mode(void* self, int32_t openMode) {
    QSslSocket_SetOpenMode((QSslSocket*)self, openMode);
}

void q_sslsocket_qbase_set_open_mode(void* self, int32_t openMode) {
    QSslSocket_QBaseSetOpenMode((QSslSocket*)self, openMode);
}

void q_sslsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t)) {
    QSslSocket_OnSetOpenMode((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_set_error_string(void* self, const char* errorString) {
    QSslSocket_SetErrorString((QSslSocket*)self, qstring(errorString));
}

void q_sslsocket_qbase_set_error_string(void* self, const char* errorString) {
    QSslSocket_QBaseSetErrorString((QSslSocket*)self, qstring(errorString));
}

void q_sslsocket_on_set_error_string(void* self, void (*callback)(void*, const char*)) {
    QSslSocket_OnSetErrorString((QSslSocket*)self, (intptr_t)callback);
}

QObject* q_sslsocket_sender(void* self) {
    return QSslSocket_Sender((QSslSocket*)self);
}

QObject* q_sslsocket_qbase_sender(void* self) {
    return QSslSocket_QBaseSender((QSslSocket*)self);
}

void q_sslsocket_on_sender(void* self, QObject* (*callback)()) {
    QSslSocket_OnSender((QSslSocket*)self, (intptr_t)callback);
}

int32_t q_sslsocket_sender_signal_index(void* self) {
    return QSslSocket_SenderSignalIndex((QSslSocket*)self);
}

int32_t q_sslsocket_qbase_sender_signal_index(void* self) {
    return QSslSocket_QBaseSenderSignalIndex((QSslSocket*)self);
}

void q_sslsocket_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSslSocket_OnSenderSignalIndex((QSslSocket*)self, (intptr_t)callback);
}

int32_t q_sslsocket_receivers(void* self, const char* signal) {
    return QSslSocket_Receivers((QSslSocket*)self, signal);
}

int32_t q_sslsocket_qbase_receivers(void* self, const char* signal) {
    return QSslSocket_QBaseReceivers((QSslSocket*)self, signal);
}

void q_sslsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSslSocket_OnReceivers((QSslSocket*)self, (intptr_t)callback);
}

bool q_sslsocket_is_signal_connected(void* self, void* signal) {
    return QSslSocket_IsSignalConnected((QSslSocket*)self, (QMetaMethod*)signal);
}

bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QSslSocket_QBaseIsSignalConnected((QSslSocket*)self, (QMetaMethod*)signal);
}

void q_sslsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSslSocket_OnIsSignalConnected((QSslSocket*)self, (intptr_t)callback);
}

void q_sslsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_sslsocket_delete(void* self) {
    QSslSocket_Delete((QSslSocket*)(self));
}
