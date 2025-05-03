#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSOCKET_H
#define SRC_NETWORKQT6C_LIBQSSLSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractsocket.h"
#include "../libqanystringview.h"
#include "libqauthenticator.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqiodevice.h"
#include "../libqiodevicebase.h"
#include "../libqmetaobject.h"
#include "libqnetworkproxy.h"
#include "../libqobject.h"
#include "libqocspresponse.h"
#include "libqsslcertificate.h"
#include "libqsslcipher.h"
#include "libqsslconfiguration.h"
#include "libqsslerror.h"
#include "libqsslkey.h"
#include "libqsslpresharedkeyauthenticator.h"
#include <string.h>
#include "libqtcpsocket.h"
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qsslsocket.html

/// q_sslsocket_new constructs a new QSslSocket object.
///
///
QSslSocket* q_sslsocket_new();

/// q_sslsocket_new2 constructs a new QSslSocket object.
///
/// ``` QObject* parent ```
QSslSocket* q_sslsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSslSocket* self ```
QMetaObject* q_sslsocket_meta_object(void* self);

/// ``` QSslSocket* self, const char* param1 ```
void* q_sslsocket_metacast(void* self, const char* param1);

/// ``` QSslSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, int32_t (*slot)(QSslSocket*, enum QMetaObject__Call, int, void*) ```
void q_sslsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sslsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// ``` QSslSocket* self ```
void q_sslsocket_resume(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_resume(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port ```
void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName ```
void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// ``` QSslSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_sslsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t));

/// Base class method implementation
///
/// ``` QSslSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int openMode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_sslsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t));

/// Base class method implementation
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int openMode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// ``` QSslSocket* self ```
void q_sslsocket_disconnect_from_host(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_disconnect_from_host(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sslsocket_set_socket_option(void* self, int64_t option, void* value);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_sslsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_sslsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sslsocket_socket_option(void* self, int64_t option);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, QVariant* (*slot)(QSslSocket*, enum QAbstractSocket__SocketOption) ```
void q_sslsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_sslsocket_qbase_socket_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#mode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
///
/// ``` QSslSocket* self, enum QSsl__SslProtocol protocol ```
void q_sslsocket_set_protocol(void* self, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_peer_verify_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
///
/// ``` QSslSocket* self, enum QSslSocket__PeerVerifyMode mode ```
void q_sslsocket_set_peer_verify_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_peer_verify_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
///
/// ``` QSslSocket* self, int depth ```
void q_sslsocket_set_peer_verify_depth(void* self, int depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_peer_verify_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
///
/// ``` QSslSocket* self, const char* hostName ```
void q_sslsocket_set_peer_verify_name(void* self, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_bytes_available(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_bytes_available(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_bytes_to_write(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_bytes_to_write(void* self, long long (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_can_read_line(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_can_read_line(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// ``` QSslSocket* self ```
void q_sslsocket_close(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)() ```
void q_sslsocket_on_close(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
void q_sslsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_at_end(void* self);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_at_end(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// ``` QSslSocket* self, long long size ```
void q_sslsocket_set_read_buffer_size(void* self, long long size);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long));

/// Base class method implementation
///
/// ``` QSslSocket* self, long long size ```
void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_encrypted_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_encrypted_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
///
/// ``` QSslSocket* self ```
QSslConfiguration* q_sslsocket_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
///
/// ``` QSslSocket* self, QSslConfiguration* config ```
void q_sslsocket_set_ssl_configuration(void* self, void* config);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
///
/// ``` QSslSocket* self, QSslCertificate* localChain[] ```
void q_sslsocket_set_local_certificate_chain(void* self, void* localChain[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslCertificate* */ q_sslsocket_local_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, QSslCertificate* certificate ```
void q_sslsocket_set_local_certificate(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, const char* fileName ```
void q_sslsocket_set_local_certificate_with_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
///
/// ``` QSslSocket* self ```
QSslCertificate* q_sslsocket_local_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
///
/// ``` QSslSocket* self ```
QSslCertificate* q_sslsocket_peer_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslCertificate* */ q_sslsocket_peer_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
///
/// ``` QSslSocket* self ```
QSslCipher* q_sslsocket_session_cipher(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_session_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
///
/// ``` QSslSocket* self ```
libqt_list /* of QOcspResponse* */ q_sslsocket_ocsp_responses(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, QSslKey* key ```
void q_sslsocket_set_private_key(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName ```
void q_sslsocket_set_private_key_with_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
///
/// ``` QSslSocket* self ```
QSslKey* q_sslsocket_private_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_connected(void* self, int msecs);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_wait_for_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_ready_read(void* self, int msecs);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_bytes_written(void* self, int msecs);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_disconnected(void* self, int msecs);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
///
/// ``` QSslSocket* self ```
libqt_list /* of QSslError* */ q_sslsocket_ssl_handshake_errors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
///
///
bool q_sslsocket_supports_ssl();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
///
///
int64_t q_sslsocket_ssl_library_version_number();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
///
///
const char* q_sslsocket_ssl_library_version_string();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
///
///
int64_t q_sslsocket_ssl_library_build_version_number();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
///
///
const char* q_sslsocket_ssl_library_build_version_string();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
///
///
const char** q_sslsocket_available_backends();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
///
///
const char* q_sslsocket_active_backend();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
///
/// ``` const char* backendName ```
bool q_sslsocket_set_active_backend(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
///
libqt_list /* of int64_t */ q_sslsocket_supported_protocols();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// ``` enum QSsl__SslProtocol protocol ```
bool q_sslsocket_is_protocol_supported(int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
///
libqt_list /* of int64_t */ q_sslsocket_implemented_classes();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// ``` enum QSsl__ImplementedClass cl ```
bool q_sslsocket_is_class_implemented(int64_t cl);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
///
libqt_list /* of int64_t */ q_sslsocket_supported_features();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// ``` enum QSsl__SupportedFeature feat ```
bool q_sslsocket_is_feature_supported(int64_t feat);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// ``` QSslSocket* self, QSslError* errors[] ```
void q_sslsocket_ignore_ssl_errors(void* self, void* errors[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
///
/// ``` QSslSocket* self ```
void q_sslsocket_continue_interrupted_handshake(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_client_encryption(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_server_encryption(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// ``` QSslSocket* self ```
void q_sslsocket_ignore_ssl_errors2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// ``` QSslSocket* self ```
void q_sslsocket_encrypted(void* self);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*) ```
void q_sslsocket_on_encrypted(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// ``` QSslSocket* self, QSslError* errorVal ```
void q_sslsocket_peer_verify_error(void* self, void* errorVal);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*) ```
void q_sslsocket_on_peer_verify_error(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// ``` QSslSocket* self, QSslError* errors[] ```
void q_sslsocket_ssl_errors(void* self, void* errors[]);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*[]) ```
void q_sslsocket_on_ssl_errors(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// ``` QSslSocket* self, enum QSslSocket__SslMode newMode ```
void q_sslsocket_mode_changed(void* self, int64_t newMode);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSslSocket__SslMode) ```
void q_sslsocket_on_mode_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// ``` QSslSocket* self, long long totalBytes ```
void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_encrypted_bytes_written(void* self, void (*slot)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// ``` QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslPreSharedKeyAuthenticator*) ```
void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// ``` QSslSocket* self ```
void q_sslsocket_new_session_ticket_received(void* self);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*) ```
void q_sslsocket_on_new_session_ticket_received(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// ``` QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslsocket_alert_sent(void* self, int64_t level, int64_t typeVal, const char* description);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslsocket_on_alert_sent(void* self, void (*slot)(void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// ``` QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslsocket_alert_received(void* self, int64_t level, int64_t typeVal, const char* description);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslsocket_on_alert_received(void* self, void (*slot)(void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// ``` QSslSocket* self, QSslError* errorVal ```
void q_sslsocket_handshake_interrupted_on_error(void* self, void* errorVal);

/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QSslError*) ```
void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_data(void* self, char* data, long long maxlen);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, char*, long long) ```
void q_sslsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long));

/// Base class method implementation
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_skip_data(void* self, long long maxSize);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_skip_data(void* self, long long (*slot)(void*, long long));

/// Base class method implementation
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_write_data(void* self, const char* data, long long lenVal);

/// Allows for overriding the related default method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, const char*, long long) ```
void q_sslsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long));

/// Base class method implementation
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sslsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sslsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int mode ```
void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName, int mode ```
void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// ``` QSslSocket* self, const char* hostName, unsigned short port, const char* sslPeerName, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__EncodingFormat format ```
void q_sslsocket_set_local_certificate2(void* self, const char* fileName, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm ```
void q_sslsocket_set_private_key2(void* self, const char* fileName, int64_t algorithm);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
void q_sslsocket_set_private_key3(void* self, const char* fileName, int64_t algorithm, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// ``` QSslSocket* self, const char* fileName, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, const char* passPhrase ```
void q_sslsocket_set_private_key4(void* self, const char* fileName, int64_t algorithm, int64_t format, const char* passPhrase);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// ``` QSslSocket* self, int msecs ```
bool q_sslsocket_wait_for_encrypted1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_supported_protocols1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// ``` enum QSsl__SslProtocol protocol, const char* backendName ```
bool q_sslsocket_is_protocol_supported2(int64_t protocol, const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_implemented_classes1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// ``` enum QSsl__ImplementedClass cl, const char* backendName ```
bool q_sslsocket_is_class_implemented2(int64_t cl, const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
/// ``` const char* backendName ```
libqt_list /* of int64_t */ q_sslsocket_supported_features1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// ``` enum QSsl__SupportedFeature feat, const char* backendName ```
bool q_sslsocket_is_feature_supported2(int64_t feat, const char* backendName);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSslSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_sslsocket_bind2(void* self, int64_t addr, unsigned short port);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// ``` QSslSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_sslsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QSslSocket* self, int pauseMode ```
void q_sslsocket_set_pause_mode(void* self, int64_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port ```
void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QSslSocket* self ```
unsigned short q_sslsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QSslSocket* self ```
QHostAddress* q_sslsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QSslSocket* self ```
unsigned short q_sslsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QSslSocket* self ```
QHostAddress* q_sslsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QSslSocket* self ```
long long q_sslsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QSslSocket* self ```
void q_sslsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QSslSocket* self, QNetworkProxy* networkProxy ```
void q_sslsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QSslSocket* self ```
QNetworkProxy* q_sslsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QSslSocket* self, const char* tag ```
void q_sslsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QSslSocket* self ```
void q_sslsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_host_found(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QSslSocket* self ```
void q_sslsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_connected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QSslSocket* self ```
void q_sslsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*) ```
void q_sslsocket_on_disconnected(void* self, void (*slot)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_sslsocket_state_changed(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_sslsocket_on_state_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_sslsocket_error_occurred(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_sslsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QSslSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// ``` QSslSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_sslsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSslSocket* self, unsigned short port ```
bool q_sslsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QSslSocket* self, unsigned short port, int mode ```
bool q_sslsocket_bind22(void* self, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QSslSocket* self ```
int64_t q_sslsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QSslSocket* self, bool enabled ```
void q_sslsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_read_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QSslSocket* self ```
char* q_sslsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self ```
char* q_sslsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QSslSocket* self ```
void q_sslsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data, long long lenVal ```
long long q_sslsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data ```
long long q_sslsocket_write_with_data(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QSslSocket* self, const char* data ```
long long q_sslsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_peek_with_maxlen(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QSslSocket* self, long long maxSize ```
long long q_sslsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QSslSocket* self, char c ```
void q_sslsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QSslSocket* self, char c ```
bool q_sslsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QSslSocket* self, char* c ```
bool q_sslsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QSslSocket* self ```
void q_sslsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_ready_read(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QSslSocket* self, int channel ```
void q_sslsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, int) ```
void q_sslsocket_on_channel_ready_read(void* self, void (*slot)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QSslSocket* self, long long bytes ```
void q_sslsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, long long) ```
void q_sslsocket_on_bytes_written(void* self, void (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QSslSocket* self, int channel, long long bytes ```
void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_sslsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QSslSocket* self ```
void q_sslsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_about_to_close(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QSslSocket* self ```
void q_sslsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// ``` QSslSocket* self, void (*slot)(QIODevice*) ```
void q_sslsocket_on_read_channel_finished(void* self, void (*slot)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QSslSocket* self, long long maxlen ```
char* q_sslsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSslSocket* self ```
const char* q_sslsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSslSocket* self, char* name ```
void q_sslsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSslSocket* self ```
bool q_sslsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSslSocket* self, bool b ```
bool q_sslsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSslSocket* self ```
QThread* q_sslsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSslSocket* self, QThread* thread ```
void q_sslsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslSocket* self, int interval ```
int32_t q_sslsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSslSocket* self, int id ```
void q_sslsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSslSocket* self ```
libqt_list /* of QObject* */ q_sslsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSslSocket* self, QObject* parent ```
void q_sslsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSslSocket* self, QObject* filterObj ```
void q_sslsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSslSocket* self, QObject* obj ```
void q_sslsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sslsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sslsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sslsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sslsocket_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSslSocket* self ```
void q_sslsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSslSocket* self ```
void q_sslsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSslSocket* self, const char* name, QVariant* value ```
bool q_sslsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSslSocket* self, const char* name ```
QVariant* q_sslsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSslSocket* self ```
const char** q_sslsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslSocket* self ```
QBindingStorage* q_sslsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslSocket* self ```
QBindingStorage* q_sslsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslSocket* self ```
void q_sslsocket_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QSslSocket* self, void (*slot)(QObject*) ```
void q_sslsocket_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSslSocket* self, const char* classname ```
bool q_sslsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSslSocket* self ```
void q_sslsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sslsocket_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslSocket* self, QObject* param1 ```
void q_sslsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QSslSocket* self, void (*slot)(QObject*, QObject*) ```
void q_sslsocket_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sslsocket_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address, unsigned short port, int mode ```
bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QHostAddress*, unsigned short, int) ```
void q_sslsocket_on_bind(void* self, bool (*slot)(void*, void*, unsigned short, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
intptr_t q_sslsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
intptr_t q_sslsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, intptr_t (*slot)() ```
void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_is_sequential(void* self, bool (*slot)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, char* data, long long maxlen ```
long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)(QSslSocket*, char*, long long) ```
void q_sslsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, int mode ```
bool q_sslsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, int mode ```
bool q_sslsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_open(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_pos(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_pos(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_size(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
long long q_sslsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, long long (*slot)() ```
void q_sslsocket_on_size(void* self, long long (*slot)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, long long pos ```
bool q_sslsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, long long pos ```
bool q_sslsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, long long) ```
void q_sslsocket_on_seek(void* self, bool (*slot)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
bool q_sslsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)() ```
void q_sslsocket_on_reset(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
bool q_sslsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
bool q_sslsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QEvent*) ```
void q_sslsocket_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QObject* watched, QEvent* event ```
bool q_sslsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QObject* watched, QEvent* event ```
bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QObject*, QEvent*) ```
void q_sslsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QTimerEvent* event ```
void q_sslsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QTimerEvent* event ```
void q_sslsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QTimerEvent*) ```
void q_sslsocket_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QChildEvent* event ```
void q_sslsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QChildEvent* event ```
void q_sslsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QChildEvent*) ```
void q_sslsocket_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
void q_sslsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QEvent* event ```
void q_sslsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QEvent*) ```
void q_sslsocket_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
void q_sslsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState state ```
void q_sslsocket_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketState state ```
void q_sslsocket_qbase_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketState) ```
void q_sslsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sslsocket_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_sslsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, enum QAbstractSocket__SocketError) ```
void q_sslsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, unsigned short) ```
void q_sslsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QHostAddress*) ```
void q_sslsocket_on_set_local_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, unsigned short port ```
void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, unsigned short) ```
void q_sslsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QHostAddress* address ```
void q_sslsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, QHostAddress*) ```
void q_sslsocket_on_set_peer_address(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* name ```
void q_sslsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* name ```
void q_sslsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, int openMode ```
void q_sslsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, int openMode ```
void q_sslsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, int) ```
void q_sslsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* errorString ```
void q_sslsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* errorString ```
void q_sslsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, void (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_set_error_string(void* self, void (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
QObject* q_sslsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, QObject* (*slot)() ```
void q_sslsocket_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self ```
int32_t q_sslsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, int32_t (*slot)() ```
void q_sslsocket_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, const char* signal ```
int32_t q_sslsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, const char* signal ```
int32_t q_sslsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, int32_t (*slot)(QSslSocket*, const char*) ```
void q_sslsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
bool q_sslsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslSocket* self, QMetaMethod* signal ```
bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslSocket* self, bool (*slot)(QSslSocket*, QMetaMethod*) ```
void q_sslsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QSslSocket* self ```
void q_sslsocket_delete(void* self);

/// https://doc.qt.io/qt-6/qsslsocket.html#types

typedef enum {
    QSSLSOCKET_SSLMODE_UNENCRYPTEDMODE = 0,
    QSSLSOCKET_SSLMODE_SSLCLIENTMODE = 1,
    QSSLSOCKET_SSLMODE_SSLSERVERMODE = 2
} QSslSocket__SslMode;

typedef enum {
    QSSLSOCKET_PEERVERIFYMODE_VERIFYNONE = 0,
    QSSLSOCKET_PEERVERIFYMODE_QUERYPEER = 1,
    QSSLSOCKET_PEERVERIFYMODE_VERIFYPEER = 2,
    QSSLSOCKET_PEERVERIFYMODE_AUTOVERIFYPEER = 3
} QSslSocket__PeerVerifyMode;

#endif
