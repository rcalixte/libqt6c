#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLSOCKET_H
#define SRC_NETWORKQT6C_LIBQSSLSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslsocket.html

/// q_sslsocket_new constructs a new QSslSocket object.
///
QSslSocket* q_sslsocket_new();

/// q_sslsocket_new2 constructs a new QSslSocket object.
///
/// @param parent QObject*
QSslSocket* q_sslsocket_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSslSocket*
const QMetaObject* q_sslsocket_meta_object(void* self);

/// @param self QSslSocket*
/// @param param1 const char*
void* q_sslsocket_metacast(void* self, const char* param1);

/// @param self QSslSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sslsocket_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback int32_t fn(QSslSocket*, enum QMetaObject__Call, int, void*)
void q_sslsocket_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QSslSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sslsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sslsocket_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// @param self QSslSocket*
void q_sslsocket_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn()
void q_sslsocket_on_resume(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// Base class method implementation
///
/// @param self QSslSocket*
void q_sslsocket_qbase_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// @param self QSslSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, intptr_t, enum QAbstractSocket__SocketState, flag of enum QIODeviceBase__OpenModeFlag)
void q_sslsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, const char*, unsigned short, flag of enum QIODeviceBase__OpenModeFlag, enum QAbstractSocket__NetworkLayerProtocol)
void q_sslsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t openMode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// @param self QSslSocket*
void q_sslsocket_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn()
void q_sslsocket_on_disconnect_from_host(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// Base class method implementation
///
/// @param self QSslSocket*
void q_sslsocket_qbase_disconnect_from_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
void q_sslsocket_set_socket_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QAbstractSocket__SocketOption, QVariant*)
void q_sslsocket_on_set_socket_option(void* self, void (*callback)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
void q_sslsocket_qbase_set_socket_option(void* self, int64_t option, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
QVariant* q_sslsocket_socket_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback QVariant* fn(QSslSocket*, enum QAbstractSocket__SocketOption)
void q_sslsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
QVariant* q_sslsocket_qbase_socket_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#mode)
///
/// @param self QSslSocket*
///
/// @return enum QSslSocket__SslMode
int64_t q_sslsocket_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
///
/// @param self QSslSocket*
bool q_sslsocket_is_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
///
/// @param self QSslSocket*
///
/// @return enum QSsl__SslProtocol
int64_t q_sslsocket_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
///
/// @param self QSslSocket*
/// @param protocol enum QSsl__SslProtocol
void q_sslsocket_set_protocol(void* self, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
///
/// @param self QSslSocket*
///
/// @return enum QSslSocket__PeerVerifyMode
int64_t q_sslsocket_peer_verify_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
///
/// @param self QSslSocket*
/// @param mode enum QSslSocket__PeerVerifyMode
void q_sslsocket_set_peer_verify_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
///
/// @param self QSslSocket*
int32_t q_sslsocket_peer_verify_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
///
/// @param self QSslSocket*
/// @param depth int
void q_sslsocket_set_peer_verify_depth(void* self, int depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char* q_sslsocket_peer_verify_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
///
/// @param self QSslSocket*
/// @param hostName const char*
void q_sslsocket_set_peer_verify_name(void* self, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// @param self QSslSocket*
long long q_sslsocket_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long fn()
void q_sslsocket_on_bytes_available(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QSslSocket*
long long q_sslsocket_qbase_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// @param self QSslSocket*
long long q_sslsocket_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long fn()
void q_sslsocket_on_bytes_to_write(void* self, long long (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QSslSocket*
long long q_sslsocket_qbase_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// @param self QSslSocket*
bool q_sslsocket_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn()
void q_sslsocket_on_can_read_line(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QSslSocket*
bool q_sslsocket_qbase_can_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// @param self QSslSocket*
void q_sslsocket_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn()
void q_sslsocket_on_close(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// Base class method implementation
///
/// @param self QSslSocket*
void q_sslsocket_qbase_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// @param self QSslSocket*
bool q_sslsocket_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn()
void q_sslsocket_on_at_end(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// Base class method implementation
///
/// @param self QSslSocket*
bool q_sslsocket_qbase_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// @param self QSslSocket*
/// @param size long long
void q_sslsocket_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, long long)
void q_sslsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param size long long
void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
///
/// @param self QSslSocket*
long long q_sslsocket_encrypted_bytes_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
///
/// @param self QSslSocket*
long long q_sslsocket_encrypted_bytes_to_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
///
/// @param self QSslSocket*
QSslConfiguration* q_sslsocket_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
///
/// @param self QSslSocket*
/// @param config QSslConfiguration*
void q_sslsocket_set_ssl_configuration(void* self, void* config);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
///
/// @param self QSslSocket*
/// @param localChain libqt_list /* of QSslCertificate* */
void q_sslsocket_set_local_certificate_chain(void* self, libqt_list localChain);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
///
/// @param self QSslSocket*
libqt_list /* of QSslCertificate* */ q_sslsocket_local_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param certificate QSslCertificate*
void q_sslsocket_set_local_certificate(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param fileName const char*
void q_sslsocket_set_local_certificate2(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
///
/// @param self QSslSocket*
QSslCertificate* q_sslsocket_local_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
///
/// @param self QSslSocket*
QSslCertificate* q_sslsocket_peer_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
///
/// @param self QSslSocket*
libqt_list /* of QSslCertificate* */ q_sslsocket_peer_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
///
/// @param self QSslSocket*
QSslCipher* q_sslsocket_session_cipher(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
///
/// @param self QSslSocket*
///
/// @return enum QSsl__SslProtocol
int64_t q_sslsocket_session_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
///
/// @param self QSslSocket*
libqt_list /* of QOcspResponse* */ q_sslsocket_ocsp_responses(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param key QSslKey*
void q_sslsocket_set_private_key(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
void q_sslsocket_set_private_key2(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
///
/// @param self QSslSocket*
QSslKey* q_sslsocket_private_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_wait_for_connected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, int)
void q_sslsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// @param self QSslSocket*
bool q_sslsocket_wait_for_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, int)
void q_sslsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, int)
void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_wait_for_disconnected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, int)
void q_sslsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
///
/// @param self QSslSocket*
libqt_list /* of QSslError* */ q_sslsocket_ssl_handshake_errors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
///
bool q_sslsocket_supports_ssl();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
///
int64_t q_sslsocket_ssl_library_version_number();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sslsocket_ssl_library_version_string();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
///
int64_t q_sslsocket_ssl_library_build_version_number();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sslsocket_ssl_library_build_version_string();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_sslsocket_available_backends();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sslsocket_active_backend();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
///
/// @param backendName const char*
bool q_sslsocket_set_active_backend(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
///
/// @return libqt_list of enum QSsl__SslProtocol
libqt_list /* of int64_t */ q_sslsocket_supported_protocols();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// @param protocol enum QSsl__SslProtocol
bool q_sslsocket_is_protocol_supported(int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
///
/// @return libqt_list of enum QSsl__ImplementedClass
libqt_list /* of int64_t */ q_sslsocket_implemented_classes();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// @param cl enum QSsl__ImplementedClass
bool q_sslsocket_is_class_implemented(int64_t cl);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
///
/// @return libqt_list of enum QSsl__SupportedFeature
libqt_list /* of int64_t */ q_sslsocket_supported_features();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// @param feat enum QSsl__SupportedFeature
bool q_sslsocket_is_feature_supported(int64_t feat);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// @param self QSslSocket*
/// @param errors libqt_list /* of QSslError* */
void q_sslsocket_ignore_ssl_errors(void* self, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
///
/// @param self QSslSocket*
void q_sslsocket_continue_interrupted_handshake(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
///
/// @param self QSslSocket*
void q_sslsocket_start_client_encryption(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
///
/// @param self QSslSocket*
void q_sslsocket_start_server_encryption(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// @param self QSslSocket*
void q_sslsocket_ignore_ssl_errors2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// @param self QSslSocket*
void q_sslsocket_encrypted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_encrypted(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// @param self QSslSocket*
/// @param errorVal QSslError*
void q_sslsocket_peer_verify_error(void* self, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QSslError*)
void q_sslsocket_on_peer_verify_error(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// @param self QSslSocket*
/// @param errors libqt_list /* of QSslError* */
void q_sslsocket_ssl_errors(void* self, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, libqt_list /* of QSslError* */)
void q_sslsocket_on_ssl_errors(void* self, void (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// @param self QSslSocket*
/// @param newMode enum QSslSocket__SslMode
void q_sslsocket_mode_changed(void* self, int64_t newMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QSslSocket__SslMode)
void q_sslsocket_on_mode_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// @param self QSslSocket*
/// @param totalBytes long long
void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, long long)
void q_sslsocket_on_encrypted_bytes_written(void* self, void (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param authenticator QSslPreSharedKeyAuthenticator*
void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QSslPreSharedKeyAuthenticator*)
void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// @param self QSslSocket*
void q_sslsocket_new_session_ticket_received(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_new_session_ticket_received(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// @param self QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param typeVal enum QSsl__AlertType
/// @param description const char*
void q_sslsocket_alert_sent(void* self, int64_t level, int64_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*)
void q_sslsocket_on_alert_sent(void* self, void (*callback)(void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// @param self QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param typeVal enum QSsl__AlertType
/// @param description const char*
void q_sslsocket_alert_received(void* self, int64_t level, int64_t typeVal, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*)
void q_sslsocket_on_alert_received(void* self, void (*callback)(void*, int64_t, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// @param self QSslSocket*
/// @param errorVal QSslError*
void q_sslsocket_handshake_interrupted_on_error(void* self, void* errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QSslError*)
void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long fn(QSslSocket*, char*, long long)
void q_sslsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// @param self QSslSocket*
/// @param maxSize long long
long long q_sslsocket_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long fn(QSslSocket*, long long)
void q_sslsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param maxSize long long
long long q_sslsocket_qbase_skip_data(void* self, long long maxSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sslsocket_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long fn(QSslSocket*, const char*, long long)
void q_sslsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sslsocket_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sslsocket_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int64_t mode, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param format enum QSsl__EncodingFormat
void q_sslsocket_set_local_certificate22(void* self, const char* fileName, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
void q_sslsocket_set_private_key22(void* self, const char* fileName, int64_t algorithm);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
void q_sslsocket_set_private_key3(void* self, const char* fileName, int64_t algorithm, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param passPhrase const char*
void q_sslsocket_set_private_key4(void* self, const char* fileName, int64_t algorithm, int64_t format, const char* passPhrase);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// @param self QSslSocket*
/// @param msecs int
bool q_sslsocket_wait_for_encrypted1(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__SslProtocol
libqt_list /* of int64_t */ q_sslsocket_supported_protocols1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// @param protocol enum QSsl__SslProtocol
/// @param backendName const char*
bool q_sslsocket_is_protocol_supported2(int64_t protocol, const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__ImplementedClass
libqt_list /* of int64_t */ q_sslsocket_implemented_classes1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// @param cl enum QSsl__ImplementedClass
/// @param backendName const char*
bool q_sslsocket_is_class_implemented2(int64_t cl, const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__SupportedFeature
libqt_list /* of int64_t */ q_sslsocket_supported_features1(const char* backendName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// @param feat enum QSsl__SupportedFeature
/// @param backendName const char*
bool q_sslsocket_is_feature_supported2(int64_t feat, const char* backendName);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSslSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
bool q_sslsocket_bind2(void* self, int64_t addr, unsigned short port);

/// Inherited from QTcpSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSslSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sslsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// @param self QSslSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
int64_t q_sslsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// @param self QSslSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
void q_sslsocket_set_pause_mode(void* self, int64_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// @param self QSslSocket*
bool q_sslsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// @param self QSslSocket*
unsigned short q_sslsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// @param self QSslSocket*
QHostAddress* q_sslsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// @param self QSslSocket*
unsigned short q_sslsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// @param self QSslSocket*
QHostAddress* q_sslsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char* q_sslsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// @param self QSslSocket*
long long q_sslsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// @param self QSslSocket*
void q_sslsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketType
int64_t q_sslsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketState
int64_t q_sslsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketError
int64_t q_sslsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// @param self QSslSocket*
bool q_sslsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// @param self QSslSocket*
/// @param networkProxy QNetworkProxy*
void q_sslsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// @param self QSslSocket*
QNetworkProxy* q_sslsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char* q_sslsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// @param self QSslSocket*
/// @param tag const char*
void q_sslsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSslSocket*
void q_sslsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_host_found(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSslSocket*
void q_sslsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_connected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSslSocket*
void q_sslsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_disconnected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSslSocket*
/// @param param1 enum QAbstractSocket__SocketState
void q_sslsocket_state_changed(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QAbstractSocket__SocketState)
void q_sslsocket_on_state_changed(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSslSocket*
/// @param param1 enum QAbstractSocket__SocketError
void q_sslsocket_error_occurred(void* self, int64_t param1);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QAbstractSocket__SocketError)
void q_sslsocket_on_error_occurred(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QNetworkProxy*, QAuthenticator*)
void q_sslsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSslSocket*
/// @param port unsigned short
bool q_sslsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSslSocket*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sslsocket_bind22(void* self, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QSslSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
int64_t q_sslsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QSslSocket*
/// @param enabled bool
void q_sslsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QSslSocket*
bool q_sslsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QSslSocket*
bool q_sslsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QSslSocket*
bool q_sslsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QSslSocket*
bool q_sslsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QSslSocket*
int32_t q_sslsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QSslSocket*
int32_t q_sslsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QSslSocket*
int32_t q_sslsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QSslSocket*
/// @param channel int
void q_sslsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QSslSocket*
int32_t q_sslsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QSslSocket*
/// @param channel int
void q_sslsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
/// @param maxlen long long
char* q_sslsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
char* q_sslsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
char* q_sslsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QSslSocket*
void q_sslsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QSslSocket*
void q_sslsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QSslSocket*
void q_sslsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QSslSocket*
bool q_sslsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
long long q_sslsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
long long q_sslsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
long long q_sslsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
/// @param maxlen long long
char* q_sslsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QSslSocket*
/// @param maxSize long long
long long q_sslsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QSslSocket*
/// @param c char
void q_sslsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QSslSocket*
/// @param c char
bool q_sslsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QSslSocket*
/// @param c char*
bool q_sslsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char* q_sslsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSslSocket*
void q_sslsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSslSocket*
/// @param channel int
void q_sslsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, int)
void q_sslsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSslSocket*
/// @param bytes long long
void q_sslsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, long long)
void q_sslsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSslSocket*
/// @param channel int
/// @param bytes long long
void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, int, long long)
void q_sslsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSslSocket*
void q_sslsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSslSocket*
void q_sslsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
/// @param maxlen long long
char* q_sslsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char* q_sslsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSslSocket*
/// @param name char*
void q_sslsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSslSocket*
bool q_sslsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSslSocket*
bool q_sslsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSslSocket*
bool q_sslsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSslSocket*
bool q_sslsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSslSocket*
/// @param b bool
bool q_sslsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSslSocket*
QThread* q_sslsocket_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSslSocket*
/// @param thread QThread*
bool q_sslsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param interval int
int32_t q_sslsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslSocket*
/// @param id int
void q_sslsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslSocket*
/// @param id enum Qt__TimerId
void q_sslsocket_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSslSocket*
libqt_list /* of QObject* */ q_sslsocket_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSslSocket*
/// @param parent QObject*
void q_sslsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSslSocket*
/// @param filterObj QObject*
void q_sslsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSslSocket*
/// @param obj QObject*
void q_sslsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sslsocket_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sslsocket_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sslsocket_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sslsocket_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSslSocket*
void q_sslsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSslSocket*
void q_sslsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSslSocket*
/// @param name const char*
/// @param value QVariant*
bool q_sslsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSslSocket*
/// @param name const char*
QVariant* q_sslsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslSocket*
const char** q_sslsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslSocket*
QBindingStorage* q_sslsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslSocket*
const QBindingStorage* q_sslsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
void q_sslsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*)
void q_sslsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSslSocket*
QObject* q_sslsocket_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSslSocket*
/// @param classname const char*
bool q_sslsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSslSocket*
void q_sslsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSslSocket*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sslsocket_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sslsocket_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sslsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param param1 QObject*
void q_sslsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QObject*)
void q_sslsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sslsocket_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int64_t mode);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, QHostAddress*, unsigned short, flag of enum QAbstractSocket__BindFlag)
void q_sslsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
intptr_t q_sslsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
intptr_t q_sslsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback intptr_t fn()
void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
bool q_sslsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
bool q_sslsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn()
void q_sslsocket_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long fn(QSslSocket*, char*, long long)
void q_sslsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_sslsocket_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
bool q_sslsocket_qbase_open(void* self, int64_t mode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_sslsocket_on_open(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
long long q_sslsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
long long q_sslsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long fn()
void q_sslsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
long long q_sslsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
long long q_sslsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long fn()
void q_sslsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param pos long long
bool q_sslsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param pos long long
bool q_sslsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, long long)
void q_sslsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
bool q_sslsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
bool q_sslsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn()
void q_sslsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
bool q_sslsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
bool q_sslsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, QEvent*)
void q_sslsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_sslsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param watched QObject*
/// @param event QEvent*
bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, QObject*, QEvent*)
void q_sslsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QTimerEvent*
void q_sslsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QTimerEvent*
void q_sslsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QTimerEvent*)
void q_sslsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QChildEvent*
void q_sslsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QChildEvent*
void q_sslsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QChildEvent*)
void q_sslsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
void q_sslsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
void q_sslsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QEvent*)
void q_sslsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
void q_sslsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
void q_sslsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QMetaMethod*)
void q_sslsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
void q_sslsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
void q_sslsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QMetaMethod*)
void q_sslsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param state enum QAbstractSocket__SocketState
void q_sslsocket_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param state enum QAbstractSocket__SocketState
void q_sslsocket_qbase_set_socket_state(void* self, int64_t state);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QAbstractSocket__SocketState)
void q_sslsocket_on_set_socket_state(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param socketError enum QAbstractSocket__SocketError
void q_sslsocket_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param socketError enum QAbstractSocket__SocketError
void q_sslsocket_qbase_set_socket_error(void* self, int64_t socketError);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, enum QAbstractSocket__SocketError)
void q_sslsocket_on_set_socket_error(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
void q_sslsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
void q_sslsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, unsigned short)
void q_sslsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
void q_sslsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
void q_sslsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QHostAddress*)
void q_sslsocket_on_set_local_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
void q_sslsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, unsigned short)
void q_sslsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
void q_sslsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
void q_sslsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, QHostAddress*)
void q_sslsocket_on_set_peer_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param name const char*
void q_sslsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param name const char*
void q_sslsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, const char*)
void q_sslsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_sslsocket_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
void q_sslsocket_qbase_set_open_mode(void* self, int64_t openMode);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, flag of enum QIODeviceBase__OpenModeFlag)
void q_sslsocket_on_set_open_mode(void* self, void (*callback)(void*, int64_t));

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param errorString const char*
void q_sslsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param errorString const char*
void q_sslsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, const char*)
void q_sslsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
QObject* q_sslsocket_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
QObject* q_sslsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback QObject* fn()
void q_sslsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
int32_t q_sslsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
int32_t q_sslsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback int32_t fn()
void q_sslsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal const char*
int32_t q_sslsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal const char*
int32_t q_sslsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback int32_t fn(QSslSocket*, const char*)
void q_sslsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
bool q_sslsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool fn(QSslSocket*, QMetaMethod*)
void q_sslsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSslSocket*
/// @param callback void fn(QSslSocket*, const char*)
void q_sslsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#dtor.QSslSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QSslSocket*
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
