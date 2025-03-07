#include "libqabstractsocket.hpp"
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
#include "libqocspresponse.hpp"
#include "libqsslcertificate.hpp"
#include "libqsslcipher.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslkey.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include <string.h>
#include "libqtcpsocket.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsslsocket.hpp"
#include "libqsslsocket.h"

/// https://doc.qt.io/qt-6/qsslsocket.html

/// q_sslsocket_new constructs a new QSslSocket object.
///
///
QSslSocket* q_sslsocket_new() {
    return QSslSocket_new();
}

/// q_sslsocket_new2 constructs a new QSslSocket object.
///
/// ``` QObject* parent ```
QSslSocket* q_sslsocket_new2(void* parent) {
    return QSslSocket_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSslSocket* self ```
QMetaObject* q_sslsocket_meta_object(void* self) {
    return QSslSocket_MetaObject((QSslSocket*)self);
}

/// ``` QSslSocket* self, const char* param1 ```
void* q_sslsocket_metacast(void* self, const char* param1) {
    return QSslSocket_Metacast((QSslSocket*)self, param1);
}

/// ``` QSslSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSslSocket_Metacall((QSslSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, int32_t (*slot)(QSslSocket*, enum QMetaObject__Call, int, void*) ```
void q_sslsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSslSocket_OnMetacall((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSslSocket_QBaseMetacall((QSslSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sslsocket_tr(const char* s) {
    libqt_string _str = QSslSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// ``` QSslSocket* self ```
void q_sslsocket_resume(void* self) {
    QSslSocket_Resume((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_resume(void* self, void (*slot)()) {
    QSslSocket_OnResume((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_resume(void* self) {
    QSslSocket_QBaseResume((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port ```
void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port) {
    QSslSocket_ConnectToHostEncrypted((QSslSocket*)self, qstring(hostName), port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName ```
void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName) {
    QSslSocket_ConnectToHostEncrypted2((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// ``` QSslSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QSslSocket_SetSocketDescriptor((QSslSocket*)self, socketDescriptor, state, openMode);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_sslsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t)) {
    QSslSocket_OnSetSocketDescriptor((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QSslSocket_QBaseSetSocketDescriptor((QSslSocket*)self, socketDescriptor, state, openMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int openMode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol) {
    QSslSocket_ConnectToHost((QSslSocket*)self, qstring(hostName), port, openMode, protocol);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_sslsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QSslSocket_OnConnectToHost((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int openMode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol) {
    QSslSocket_QBaseConnectToHost((QSslSocket*)self, qstring(hostName), port, openMode, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// ``` QSslSocket* self ```
void q_sslsocket_disconnect_from_host(void* self) {
    QSslSocket_DisconnectFromHost((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_disconnect_from_host(void* self, void (*slot)()) {
    QSslSocket_OnDisconnectFromHost((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_disconnect_from_host(void* self) {
    QSslSocket_QBaseDisconnectFromHost((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sslsocket_set_socket_option(void* self, int64_t option, void* value) {
    QSslSocket_SetSocketOption((QSslSocket*)self, option, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_sslsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QSslSocket_OnSetSocketOption((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sslsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QSslSocket_QBaseSetSocketOption((QSslSocket*)self, option, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sslsocket_socket_option(void* self, int64_t option) {
    return QSslSocket_SocketOption((QSslSocket*)self, option);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, QVariant* (*slot)(QSslSocket*, enum QAbstractSocket__SocketOption) ```
void q_sslsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QSslSocket_OnSocketOption((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sslsocket_qbase_socket_option(void* self, int64_t option) {
    return QSslSocket_QBaseSocketOption((QSslSocket*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#mode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_mode(void* self) {
    return QSslSocket_Mode((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_encrypted(void* self) {
    return QSslSocket_IsEncrypted((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_protocol(void* self) {
    return QSslSocket_Protocol((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
///
/// ``` QSslSocket* self, enum QSsl__SslProtocol protocol ```
void q_sslsocket_set_protocol(void* self, int64_t protocol) {
    QSslSocket_SetProtocol((QSslSocket*)self, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_peer_verify_mode(void* self) {
    return QSslSocket_PeerVerifyMode((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
///
/// ``` QSslSocket* self, enum QSslSocket__PeerVerifyMode mode ```
void q_sslsocket_set_peer_verify_mode(void* self, int64_t mode) {
    QSslSocket_SetPeerVerifyMode((QSslSocket*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_peer_verify_depth(void* self) {
    return QSslSocket_PeerVerifyDepth((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
///
/// ``` QSslSocket* self, int depth ```
void q_sslsocket_set_peer_verify_depth(void* self, int depth) {
    QSslSocket_SetPeerVerifyDepth((QSslSocket*)self, depth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_peer_verify_name(void* self) {
    libqt_string _str = QSslSocket_PeerVerifyName((QSslSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
///
/// ``` QSslSocket* self, const char* hostName ```
void q_sslsocket_set_peer_verify_name(void* self, const char* hostName) {
    QSslSocket_SetPeerVerifyName((QSslSocket*)self, qstring(hostName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_bytes_available(void* self) {
    return QSslSocket_BytesAvailable((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_bytes_available(void* self, long long (*slot)()) {
    QSslSocket_OnBytesAvailable((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_bytes_available(void* self) {
    return QSslSocket_QBaseBytesAvailable((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_bytes_to_write(void* self) {
    return QSslSocket_BytesToWrite((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QSslSocket_OnBytesToWrite((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_bytes_to_write(void* self) {
    return QSslSocket_QBaseBytesToWrite((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_can_read_line(void* self) {
    return QSslSocket_CanReadLine((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_can_read_line(void* self, bool (*slot)()) {
    QSslSocket_OnCanReadLine((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_can_read_line(void* self) {
    return QSslSocket_QBaseCanReadLine((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// ``` QSslSocket* self ```
void q_sslsocket_close(void* self) {
    QSslSocket_Close((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_close(void* self, void (*slot)()) {
    QSslSocket_OnClose((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_close(void* self) {
    QSslSocket_QBaseClose((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_at_end(void* self) {
    return QSslSocket_AtEnd((QSslSocket*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_at_end(void* self, bool (*slot)()) {
    QSslSocket_OnAtEnd((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_at_end(void* self) {
    return QSslSocket_QBaseAtEnd((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// ``` QSslSocket* self, long long size ```
void q_sslsocket_set_read_buffer_size(void* self, long long size) {
    QSslSocket_SetReadBufferSize((QSslSocket*)self, size);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long)) {
    QSslSocket_OnSetReadBufferSize((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, long long size ```
void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QSslSocket_QBaseSetReadBufferSize((QSslSocket*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_encrypted_bytes_available(void* self) {
    return QSslSocket_EncryptedBytesAvailable((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_encrypted_bytes_to_write(void* self) {
    return QSslSocket_EncryptedBytesToWrite((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
///
/// ``` QSslSocket* self ```
QSslConfiguration* q_sslsocket_ssl_configuration(void* self) {
    return QSslSocket_SslConfiguration((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
///
/// ``` QSslSocket* self, QSslConfiguration* config ```
void q_sslsocket_set_ssl_configuration(void* self, void* config) {
    QSslSocket_SetSslConfiguration((QSslSocket*)self, (QSslConfiguration*)config);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
///
/// ``` QSslSocket* self, QSslCertificate* localChain[] ```
void q_sslsocket_set_local_certificate_chain(void* self, void* localChain[]) {
    QSslCertificate** localChain_arr = (QSslCertificate**)localChain;
    size_t localChain_len = 0;
    while (localChain_arr[localChain_len] != NULL) {
        localChain_len++;
    }
    libqt_list localChain_list = {
        .len = localChain_len,
        .data = {(QSslCertificate*)localChain},
    };
    QSslSocket_SetLocalCertificateChain((QSslSocket*)self, localChain_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslCertificate* */ q_sslsocket_local_certificate_chain(void* self) {
    libqt_list _arr = QSslSocket_LocalCertificateChain((QSslSocket*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, QSslCertificate* certificate ```
void q_sslsocket_set_local_certificate(void* self, void* certificate) {
    QSslSocket_SetLocalCertificate((QSslSocket*)self, (QSslCertificate*)certificate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, const char* fileName ```
void q_sslsocket_set_local_certificate_with_file_name(void* self, const char* fileName) {
    QSslSocket_SetLocalCertificateWithFileName((QSslSocket*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
///
/// ``` QSslSocket* self ```
QSslCertificate* q_sslsocket_local_certificate(void* self) {
    return QSslSocket_LocalCertificate((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
///
/// ``` QSslSocket* self ```
QSslCertificate* q_sslsocket_peer_certificate(void* self) {
    return QSslSocket_PeerCertificate((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslCertificate* */ q_sslsocket_peer_certificate_chain(void* self) {
    libqt_list _arr = QSslSocket_PeerCertificateChain((QSslSocket*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
///
/// ``` QSslSocket* self ```
QSslCipher* q_sslsocket_session_cipher(void* self) {
    return QSslSocket_SessionCipher((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_session_protocol(void* self) {
    return QSslSocket_SessionProtocol((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
///
/// ``` QSslSocket* self ```
libqt_list /* of QOcspResponse* */ q_sslsocket_ocsp_responses(void* self) {
    libqt_list _arr = QSslSocket_OcspResponses((QSslSocket*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, QSslKey* key ```
void q_sslsocket_set_private_key(void* self, void* key) {
    QSslSocket_SetPrivateKey((QSslSocket*)self, (QSslKey*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName ```
void q_sslsocket_set_private_key_with_file_name(void* self, const char* fileName) {
    QSslSocket_SetPrivateKeyWithFileName((QSslSocket*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
///
/// ``` QSslSocket* self ```
QSslKey* q_sslsocket_private_key(void* self) {
    return QSslSocket_PrivateKey((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_connected(void* self, int msecs) {
    return QSslSocket_WaitForConnected((QSslSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int)) {
    QSslSocket_OnWaitForConnected((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QSslSocket_QBaseWaitForConnected((QSslSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_wait_for_encrypted(void* self) {
    return QSslSocket_WaitForEncrypted((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_ready_read(void* self, int msecs) {
    return QSslSocket_WaitForReadyRead((QSslSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QSslSocket_OnWaitForReadyRead((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QSslSocket_QBaseWaitForReadyRead((QSslSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_bytes_written(void* self, int msecs) {
    return QSslSocket_WaitForBytesWritten((QSslSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QSslSocket_OnWaitForBytesWritten((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QSslSocket_QBaseWaitForBytesWritten((QSslSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_disconnected(void* self, int msecs) {
    return QSslSocket_WaitForDisconnected((QSslSocket*)self, msecs);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int)) {
    QSslSocket_OnWaitForDisconnected((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QSslSocket_QBaseWaitForDisconnected((QSslSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslError* */ q_sslsocket_ssl_handshake_errors(void* self) {
    libqt_list _arr = QSslSocket_SslHandshakeErrors((QSslSocket*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
///
///
bool q_sslsocket_supports_ssl() {
    return QSslSocket_SupportsSsl();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
///
///
int64_t q_sslsocket_ssl_library_version_number() {
    return QSslSocket_SslLibraryVersionNumber();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
///
///
const char* q_sslsocket_ssl_library_version_string() {
    libqt_string _str = QSslSocket_SslLibraryVersionString();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
///
///
int64_t q_sslsocket_ssl_library_build_version_number() {
    return QSslSocket_SslLibraryBuildVersionNumber();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
///
///
const char* q_sslsocket_ssl_library_build_version_string() {
    libqt_string _str = QSslSocket_SslLibraryBuildVersionString();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
///
///
const char** q_sslsocket_available_backends() {
    libqt_list _arr = QSslSocket_AvailableBackends();
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
///
///
const char* q_sslsocket_active_backend() {
    libqt_string _str = QSslSocket_ActiveBackend();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
///
/// ``` const char* backendName ```
bool q_sslsocket_set_active_backend(const char* backendName) {
    return QSslSocket_SetActiveBackend(qstring(backendName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
///
libqt_list /* of int64_t */ q_sslsocket_supported_protocols() {
    libqt_list _arr = QSslSocket_SupportedProtocols();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// ``` enum QSsl__SslProtocol protocol ```
bool q_sslsocket_is_protocol_supported(int64_t protocol) {
    return QSslSocket_IsProtocolSupported(protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
///
libqt_list /* of int64_t */ q_sslsocket_implemented_classes() {
    libqt_list _arr = QSslSocket_ImplementedClasses();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// ``` enum QSsl__ImplementedClass cl ```
bool q_sslsocket_is_class_implemented(int64_t cl) {
    return QSslSocket_IsClassImplemented(cl);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
///
libqt_list /* of int64_t */ q_sslsocket_supported_features() {
    libqt_list _arr = QSslSocket_SupportedFeatures();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// ``` enum QSsl__SupportedFeature feat ```
bool q_sslsocket_is_feature_supported(int64_t feat) {
    return QSslSocket_IsFeatureSupported(feat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// ``` QSslSocket* self, QSslError* errors[] ```
void q_sslsocket_ignore_ssl_errors(void* self, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QSslSocket_IgnoreSslErrors((QSslSocket*)self, errors_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
///
/// ``` QSslSocket* self ```
void q_sslsocket_continue_interrupted_handshake(void* self) {
    QSslSocket_ContinueInterruptedHandshake((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_client_encryption(void* self) {
    QSslSocket_StartClientEncryption((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_server_encryption(void* self) {
    QSslSocket_StartServerEncryption((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// ``` QSslSocket* self ```
void q_sslsocket_ignore_ssl_errors2(void* self) {
    QSslSocket_IgnoreSslErrors2((QSslSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// ``` QSslSocket* self ```
void q_sslsocket_encrypted(void* self) {
    QSslSocket_Encrypted((QSslSocket*)self);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*) ```
void q_sslsocket_on_encrypted(void* self, void (*slot)(void*)) {
    QSslSocket_Connect_Encrypted((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// ``` QSslSocket* self, QSslError* errorVal ```
void q_sslsocket_peer_verify_error(void* self, void* errorVal) {
    QSslSocket_PeerVerifyError((QSslSocket*)self, (QSslError*)errorVal);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*) ```
void q_sslsocket_on_peer_verify_error(void* self, void (*slot)(void*, void*)) {
    QSslSocket_Connect_PeerVerifyError((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// ``` QSslSocket* self, QSslError* errors[] ```
void q_sslsocket_ssl_errors(void* self, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QSslSocket_SslErrors((QSslSocket*)self, errors_list);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*[]) ```
void q_sslsocket_on_ssl_errors(void* self, void (*slot)(void*, void*)) {
    QSslSocket_Connect_SslErrors((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// ``` QSslSocket* self, enum QSslSocket__SslMode newMode ```
void q_sslsocket_mode_changed(void* self, int64_t newMode) {
    QSslSocket_ModeChanged((QSslSocket*)self, newMode);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSslSocket__SslMode) ```
void q_sslsocket_on_mode_changed(void* self, void (*slot)(void*, int64_t)) {
    QSslSocket_Connect_ModeChanged((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// ``` QSslSocket* self, long long totalBytes ```
void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes) {
    QSslSocket_EncryptedBytesWritten((QSslSocket*)self, totalBytes);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_encrypted_bytes_written(void* self, void (*slot)(void*, long long)) {
    QSslSocket_Connect_EncryptedBytesWritten((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// ``` QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator) {
    QSslSocket_PreSharedKeyAuthenticationRequired((QSslSocket*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslPreSharedKeyAuthenticator*) ```
void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*)) {
    QSslSocket_Connect_PreSharedKeyAuthenticationRequired((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// ``` QSslSocket* self ```
void q_sslsocket_new_session_ticket_received(void* self) {
    QSslSocket_NewSessionTicketReceived((QSslSocket*)self);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*) ```
void q_sslsocket_on_new_session_ticket_received(void* self, void (*slot)(void*)) {
    QSslSocket_Connect_NewSessionTicketReceived((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// ``` QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslsocket_alert_sent(void* self, int64_t level, int64_t typeVal, const char* description) {
    QSslSocket_AlertSent((QSslSocket*)self, level, typeVal, qstring(description));
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslsocket_on_alert_sent(void* self, void (*slot)(void*, int64_t, int64_t, const char*)) {
    QSslSocket_Connect_AlertSent((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// ``` QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslsocket_alert_received(void* self, int64_t level, int64_t typeVal, const char* description) {
    QSslSocket_AlertReceived((QSslSocket*)self, level, typeVal, qstring(description));
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslsocket_on_alert_received(void* self, void (*slot)(void*, int64_t, int64_t, const char*)) {
    QSslSocket_Connect_AlertReceived((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// ``` QSslSocket* self, QSslError* errorVal ```
void q_sslsocket_handshake_interrupted_on_error(void* self, void* errorVal) {
    QSslSocket_HandshakeInterruptedOnError((QSslSocket*)self, (QSslError*)errorVal);
}

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*) ```
void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*)) {
    QSslSocket_Connect_HandshakeInterruptedOnError((QSslSocket*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_data(void* self, char* data, long long maxlen) {
    return QSslSocket_ReadData((QSslSocket*)self, data, maxlen);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, char*, long long) ```
void q_sslsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSslSocket_OnReadData((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QSslSocket_QBaseReadData((QSslSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_skip_data(void* self, long long maxSize) {
    return QSslSocket_SkipData((QSslSocket*)self, maxSize);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QSslSocket_OnSkipData((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_qbase_skip_data(void* self, long long maxSize) {
    return QSslSocket_QBaseSkipData((QSslSocket*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_write_data(void* self, const char* data, long long lenVal) {
    return QSslSocket_WriteData((QSslSocket*)self, data, lenVal);
}

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, const char*, long long) ```
void q_sslsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QSslSocket_OnWriteData((QSslSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QSslSocket_QBaseWriteData((QSslSocket*)self, data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sslsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QSslSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sslsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSslSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int mode ```
void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int64_t mode) {
    QSslSocket_ConnectToHostEncrypted3((QSslSocket*)self, qstring(hostName), port, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QSslSocket_ConnectToHostEncrypted4((QSslSocket*)self, qstring(hostName), port, mode, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName, int mode ```
void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode) {
    QSslSocket_ConnectToHostEncrypted42((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode, int64_t protocol) {
    QSslSocket_ConnectToHostEncrypted5((QSslSocket*)self, qstring(hostName), port, qstring(sslPeerName), mode, protocol);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__EncodingFormat format ```
void q_sslsocket_set_local_certificate2(void* self, const char* fileName, int64_t format) {
    QSslSocket_SetLocalCertificate2((QSslSocket*)self, qstring(fileName), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm ```
void q_sslsocket_set_private_key2(void* self, const char* fileName, int64_t algorithm) {
    QSslSocket_SetPrivateKey2((QSslSocket*)self, qstring(fileName), algorithm);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
void q_sslsocket_set_private_key3(void* self, const char* fileName, int64_t algorithm, int64_t format) {
    QSslSocket_SetPrivateKey3((QSslSocket*)self, qstring(fileName), algorithm, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, const char* passPhrase ```
void q_sslsocket_set_private_key4(void* self, const char* fileName, int64_t algorithm, int64_t format, const char* passPhrase) {
    QSslSocket_SetPrivateKey4((QSslSocket*)self, qstring(fileName), algorithm, format, qstring(passPhrase));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_encrypted1(void* self, int msecs) {
    return QSslSocket_WaitForEncrypted1((QSslSocket*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_supported_protocols1(const char* backendName) {
    libqt_list _arr = QSslSocket_SupportedProtocols1(qstring(backendName));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// ``` enum QSsl__SslProtocol protocol, const char* backendName ```
bool q_sslsocket_is_protocol_supported2(int64_t protocol, const char* backendName) {
    return QSslSocket_IsProtocolSupported2(protocol, qstring(backendName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_implemented_classes1(const char* backendName) {
    libqt_list _arr = QSslSocket_ImplementedClasses1(qstring(backendName));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// ``` enum QSsl__ImplementedClass cl, const char* backendName ```
bool q_sslsocket_is_class_implemented2(int64_t cl, const char* backendName) {
    return QSslSocket_IsClassImplemented2(cl, qstring(backendName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_supported_features1(const char* backendName) {
    libqt_list _arr = QSslSocket_SupportedFeatures1(qstring(backendName));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// ``` enum QSsl__SupportedFeature feat, const char* backendName ```
bool q_sslsocket_is_feature_supported2(int64_t feat, const char* backendName) {
    return QSslSocket_IsFeatureSupported2(feat, qstring(backendName));
}

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSslSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_sslsocket_bind2(void* self, int64_t addr, unsigned short port) {
    return QTcpSocket_Bind2((QTcpSocket*)self, addr, port);
}

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSslSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_sslsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode) {
    return QTcpSocket_Bind3((QTcpSocket*)self, addr, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QSslSocket* self, int pauseMode ```
void q_sslsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port ```
void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QSslSocket* self ```
unsigned short q_sslsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QSslSocket* self ```
QHostAddress* q_sslsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QSslSocket* self ```
unsigned short q_sslsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QSslSocket* self ```
QHostAddress* q_sslsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QSslSocket* self ```
void q_sslsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QSslSocket* self, QNetworkProxy* networkProxy ```
void q_sslsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QSslSocket* self ```
QNetworkProxy* q_sslsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QSslSocket* self, const char* tag ```
void q_sslsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QSslSocket* self ```
void q_sslsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_host_found(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QSslSocket* self ```
void q_sslsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_connected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QSslSocket* self ```
void q_sslsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_sslsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_sslsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_sslsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_sslsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QSslSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_sslsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSslSocket* self, unsigned short port ```
bool q_sslsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSslSocket* self, unsigned short port, int mode ```
bool q_sslsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QSslSocket* self, bool enabled ```
void q_sslsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QSslSocket* self ```
char* q_sslsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self ```
char* q_sslsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data ```
long long q_sslsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data ```
long long q_sslsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QSslSocket* self, char c ```
void q_sslsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QSslSocket* self, char c ```
bool q_sslsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QSslSocket* self, char* c ```
bool q_sslsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSslSocket* self ```
void q_sslsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, int) ```
void q_sslsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSslSocket* self, long long bytes ```
void q_sslsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, long long) ```
void q_sslsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSslSocket* self, int channel, long long bytes ```
void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_sslsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSslSocket* self ```
void q_sslsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSslSocket* self ```
void q_sslsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSslSocket* self, const char* name ```
void q_sslsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSslSocket* self, bool b ```
bool q_sslsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSslSocket* self ```
QThread* q_sslsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSslSocket* self, QThread* thread ```
void q_sslsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslSocket* self, int interval ```
int32_t q_sslsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSslSocket* self, int id ```
void q_sslsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSslSocket* self ```
libqt_list /* of QObject* */ q_sslsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSslSocket* self, QObject* parent ```
void q_sslsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSslSocket* self, QObject* filterObj ```
void q_sslsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSslSocket* self, QObject* obj ```
void q_sslsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sslsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sslsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sslsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sslsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSslSocket* self ```
void q_sslsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSslSocket* self ```
void q_sslsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSslSocket* self, const char* name, QVariant* value ```
bool q_sslsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSslSocket* self, const char* name ```
QVariant* q_sslsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSslSocket* self ```
const char** q_sslsocket_dynamic_property_names(void* self) {
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
/// ``` QSslSocket* self ```
QBindingStorage* q_sslsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslSocket* self ```
QBindingStorage* q_sslsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslSocket* self ```
void q_sslsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSslSocket* self, void (*slot)(QObject*) ```
void q_sslsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSslSocket* self, const char* classname ```
bool q_sslsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSslSocket* self ```
void q_sslsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sslsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslSocket* self, QObject* param1 ```
void q_sslsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSslSocket* self, void (*slot)(QObject*, QObject*) ```
void q_sslsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sslsocket_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QSslSocket_Bind((QSslSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode) {
    return QSslSocket_QBaseBind((QSslSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QHostAddress*, unsigned short, int) ```
void q_sslsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t)) {
    QSslSocket_OnBind((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
intptr_t q_sslsocket_socket_descriptor(void* self) {
    return QSslSocket_SocketDescriptor((QSslSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
intptr_t q_sslsocket_qbase_socket_descriptor(void* self) {
    return QSslSocket_QBaseSocketDescriptor((QSslSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, intptr_t (*slot)() ```
void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*slot)()) {
    QSslSocket_OnSocketDescriptor((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_sequential(void* self) {
    return QSslSocket_IsSequential((QSslSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_is_sequential(void* self) {
    return QSslSocket_QBaseIsSequential((QSslSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_is_sequential(void* self, bool (*slot)()) {
    QSslSocket_OnIsSequential((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QSslSocket_ReadLineData((QSslSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QSslSocket_QBaseReadLineData((QSslSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, char*, long long) ```
void q_sslsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QSslSocket_OnReadLineData((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, int mode ```
bool q_sslsocket_open(void* self, int64_t mode) {
    return QSslSocket_Open((QSslSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, int mode ```
bool q_sslsocket_qbase_open(void* self, int64_t mode) {
    return QSslSocket_QBaseOpen((QSslSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QSslSocket_OnOpen((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_pos(void* self) {
    return QSslSocket_Pos((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_pos(void* self) {
    return QSslSocket_QBasePos((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_pos(void* self, long long (*slot)()) {
    QSslSocket_OnPos((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_size(void* self) {
    return QSslSocket_Size((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_size(void* self) {
    return QSslSocket_QBaseSize((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_size(void* self, long long (*slot)()) {
    QSslSocket_OnSize((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, long long pos ```
bool q_sslsocket_seek(void* self, long long pos) {
    return QSslSocket_Seek((QSslSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, long long pos ```
bool q_sslsocket_qbase_seek(void* self, long long pos) {
    return QSslSocket_QBaseSeek((QSslSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QSslSocket_OnSeek((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_reset(void* self) {
    return QSslSocket_Reset((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_reset(void* self) {
    return QSslSocket_QBaseReset((QSslSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_reset(void* self, bool (*slot)()) {
    QSslSocket_OnReset((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
bool q_sslsocket_event(void* self, void* event) {
    return QSslSocket_Event((QSslSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
bool q_sslsocket_qbase_event(void* self, void* event) {
    return QSslSocket_QBaseEvent((QSslSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QEvent*) ```
void q_sslsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QSslSocket_OnEvent((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QObject* watched, QEvent* event ```
bool q_sslsocket_event_filter(void* self, void* watched, void* event) {
    return QSslSocket_EventFilter((QSslSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QObject* watched, QEvent* event ```
bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QSslSocket_QBaseEventFilter((QSslSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QObject*, QEvent*) ```
void q_sslsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSslSocket_OnEventFilter((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QTimerEvent* event ```
void q_sslsocket_timer_event(void* self, void* event) {
    QSslSocket_TimerEvent((QSslSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QTimerEvent* event ```
void q_sslsocket_qbase_timer_event(void* self, void* event) {
    QSslSocket_QBaseTimerEvent((QSslSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QTimerEvent*) ```
void q_sslsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnTimerEvent((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QChildEvent* event ```
void q_sslsocket_child_event(void* self, void* event) {
    QSslSocket_ChildEvent((QSslSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QChildEvent* event ```
void q_sslsocket_qbase_child_event(void* self, void* event) {
    QSslSocket_QBaseChildEvent((QSslSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QChildEvent*) ```
void q_sslsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnChildEvent((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
void q_sslsocket_custom_event(void* self, void* event) {
    QSslSocket_CustomEvent((QSslSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
void q_sslsocket_qbase_custom_event(void* self, void* event) {
    QSslSocket_QBaseCustomEvent((QSslSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QEvent*) ```
void q_sslsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnCustomEvent((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_connect_notify(void* self, void* signal) {
    QSslSocket_ConnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_qbase_connect_notify(void* self, void* signal) {
    QSslSocket_QBaseConnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnConnectNotify((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_disconnect_notify(void* self, void* signal) {
    QSslSocket_DisconnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_qbase_disconnect_notify(void* self, void* signal) {
    QSslSocket_QBaseDisconnectNotify((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnDisconnectNotify((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState state ```
void q_sslsocket_set_socket_state(void* self, int64_t state) {
    QSslSocket_SetSocketState((QSslSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState state ```
void q_sslsocket_qbase_set_socket_state(void* self, int64_t state) {
    QSslSocket_QBaseSetSocketState((QSslSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketState) ```
void q_sslsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t)) {
    QSslSocket_OnSetSocketState((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sslsocket_set_socket_error(void* self, int64_t socketError) {
    QSslSocket_SetSocketError((QSslSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sslsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QSslSocket_QBaseSetSocketError((QSslSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketError) ```
void q_sslsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t)) {
    QSslSocket_OnSetSocketError((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_set_local_port(void* self, unsigned short port) {
    QSslSocket_SetLocalPort((QSslSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_qbase_set_local_port(void* self, unsigned short port) {
    QSslSocket_QBaseSetLocalPort((QSslSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, unsigned short) ```
void q_sslsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short)) {
    QSslSocket_OnSetLocalPort((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_set_local_address(void* self, void* address) {
    QSslSocket_SetLocalAddress((QSslSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_qbase_set_local_address(void* self, void* address) {
    QSslSocket_QBaseSetLocalAddress((QSslSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QHostAddress*) ```
void q_sslsocket_on_set_local_address(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnSetLocalAddress((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_set_peer_port(void* self, unsigned short port) {
    QSslSocket_SetPeerPort((QSslSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QSslSocket_QBaseSetPeerPort((QSslSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, unsigned short) ```
void q_sslsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short)) {
    QSslSocket_OnSetPeerPort((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_set_peer_address(void* self, void* address) {
    QSslSocket_SetPeerAddress((QSslSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_qbase_set_peer_address(void* self, void* address) {
    QSslSocket_QBaseSetPeerAddress((QSslSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QHostAddress*) ```
void q_sslsocket_on_set_peer_address(void* self, void (*slot)(void*, void*)) {
    QSslSocket_OnSetPeerAddress((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* name ```
void q_sslsocket_set_peer_name(void* self, const char* name) {
    QSslSocket_SetPeerName((QSslSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* name ```
void q_sslsocket_qbase_set_peer_name(void* self, const char* name) {
    QSslSocket_QBaseSetPeerName((QSslSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*)) {
    QSslSocket_OnSetPeerName((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, int openMode ```
void q_sslsocket_set_open_mode(void* self, int64_t openMode) {
    QSslSocket_SetOpenMode((QSslSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, int openMode ```
void q_sslsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QSslSocket_QBaseSetOpenMode((QSslSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QSslSocket_OnSetOpenMode((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* errorString ```
void q_sslsocket_set_error_string(void* self, const char* errorString) {
    QSslSocket_SetErrorString((QSslSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* errorString ```
void q_sslsocket_qbase_set_error_string(void* self, const char* errorString) {
    QSslSocket_QBaseSetErrorString((QSslSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QSslSocket_OnSetErrorString((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_sender(void* self) {
    return QSslSocket_Sender((QSslSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_qbase_sender(void* self) {
    return QSslSocket_QBaseSender((QSslSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, QObject* (*slot)() ```
void q_sslsocket_on_sender(void* self, QObject* (*slot)()) {
    QSslSocket_OnSender((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_sender_signal_index(void* self) {
    return QSslSocket_SenderSignalIndex((QSslSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_qbase_sender_signal_index(void* self) {
    return QSslSocket_QBaseSenderSignalIndex((QSslSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, int32_t (*slot)() ```
void q_sslsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSslSocket_OnSenderSignalIndex((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* signal ```
int32_t q_sslsocket_receivers(void* self, const char* signal) {
    return QSslSocket_Receivers((QSslSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* signal ```
int32_t q_sslsocket_qbase_receivers(void* self, const char* signal) {
    return QSslSocket_QBaseReceivers((QSslSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, int32_t (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSslSocket_OnReceivers((QSslSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
bool q_sslsocket_is_signal_connected(void* self, void* signal) {
    return QSslSocket_IsSignalConnected((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QSslSocket_QBaseIsSignalConnected((QSslSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSslSocket_OnIsSignalConnected((QSslSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSslSocket* self ```
void q_sslsocket_delete(void* self) {
    QSslSocket_Delete((QSslSocket*)(self));
}