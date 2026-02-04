#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLSOCKET_H
#define SRC_NETWORK_QT6C_LIBQSSLSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html)

/// q_sslsocket_new constructs a new QSslSocket object.
///
QSslSocket* q_sslsocket_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html)

/// q_sslsocket_new2 constructs a new QSslSocket object.
///
/// @param parent QObject*
///
QSslSocket* q_sslsocket_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSslSocket*
///
const QMetaObject* q_sslsocket_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback const QMetaObject* func()
///
void q_sslsocket_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
const QMetaObject* q_sslsocket_qbase_meta_object(void* self);

/// @param self QSslSocket*
/// @param param1 const char*
///
void* q_sslsocket_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void* func(QSslSocket* self, const char* param1)
///
void q_sslsocket_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSslSocket*
/// @param param1 const char*
///
void* q_sslsocket_qbase_metacast(void* self, const char* param1);

/// @param self QSslSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sslsocket_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback int32_t func(QSslSocket* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sslsocket_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSslSocket*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sslsocket_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sslsocket_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// @param self QSslSocket*
///
void q_sslsocket_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func()
///
void q_sslsocket_on_resume(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
void q_sslsocket_qbase_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
///
void q_sslsocket_connect_to_host_encrypted(void* self, const char* hostName, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
///
void q_sslsocket_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, const char* sslPeerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// @param self QSslSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_sslsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_sslsocket_on_set_socket_descriptor(void* self, bool (*callback)(void*, intptr_t, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param socketDescriptor intptr_t
/// @param state enum QAbstractSocket__SocketState
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_sslsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int32_t state, int32_t openMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_sslsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t openMode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, const char* hostName, unsigned short port, flag of enum QIODeviceBase__OpenModeFlag openMode, enum QAbstractSocket__NetworkLayerProtocol protocol)
///
void q_sslsocket_on_connect_to_host(void* self, void (*callback)(void*, const char*, unsigned short, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_sslsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int32_t openMode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// @param self QSslSocket*
///
void q_sslsocket_disconnect_from_host(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func()
///
void q_sslsocket_on_disconnect_from_host(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
void q_sslsocket_qbase_disconnect_from_host(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_sslsocket_set_socket_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value)
///
void q_sslsocket_on_set_socket_option(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
/// @param value QVariant*
///
void q_sslsocket_qbase_set_socket_option(void* self, int32_t option, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_sslsocket_socket_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback QVariant* func(QSslSocket* self, enum QAbstractSocket__SocketOption option)
///
void q_sslsocket_on_socket_option(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param option enum QAbstractSocket__SocketOption
///
QVariant* q_sslsocket_qbase_socket_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#mode)
///
/// @param self QSslSocket*
///
/// @return enum QSslSocket__SslMode
///
int32_t q_sslsocket_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_encrypted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
///
/// @param self QSslSocket*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_sslsocket_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
///
/// @param self QSslSocket*
/// @param protocol enum QSsl__SslProtocol
///
void q_sslsocket_set_protocol(void* self, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
///
/// @param self QSslSocket*
///
/// @return enum QSslSocket__PeerVerifyMode
///
int32_t q_sslsocket_peer_verify_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
///
/// @param self QSslSocket*
/// @param mode enum QSslSocket__PeerVerifyMode
///
void q_sslsocket_set_peer_verify_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_peer_verify_depth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
///
/// @param self QSslSocket*
/// @param depth int
///
void q_sslsocket_set_peer_verify_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslSocket*
///
const char* q_sslsocket_peer_verify_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
///
/// @param self QSslSocket*
/// @param hostName const char*
///
void q_sslsocket_set_peer_verify_name(void* self, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// @param self QSslSocket*
///
long long q_sslsocket_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long func()
///
void q_sslsocket_on_bytes_available(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
long long q_sslsocket_qbase_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// @param self QSslSocket*
///
long long q_sslsocket_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long func()
///
void q_sslsocket_on_bytes_to_write(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
long long q_sslsocket_qbase_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// @param self QSslSocket*
///
bool q_sslsocket_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func()
///
void q_sslsocket_on_can_read_line(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
bool q_sslsocket_qbase_can_read_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// @param self QSslSocket*
///
void q_sslsocket_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func()
///
void q_sslsocket_on_close(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
void q_sslsocket_qbase_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// @param self QSslSocket*
///
bool q_sslsocket_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func()
///
void q_sslsocket_on_at_end(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
///
/// Base class method implementation
///
/// @param self QSslSocket*
///
bool q_sslsocket_qbase_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// @param self QSslSocket*
/// @param size long long
///
void q_sslsocket_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, long long size)
///
void q_sslsocket_on_set_read_buffer_size(void* self, void (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param size long long
///
void q_sslsocket_qbase_set_read_buffer_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
///
/// @param self QSslSocket*
///
long long q_sslsocket_encrypted_bytes_available(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
///
/// @param self QSslSocket*
///
long long q_sslsocket_encrypted_bytes_to_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
///
/// @param self QSslSocket*
///
QSslConfiguration* q_sslsocket_ssl_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
///
/// @param self QSslSocket*
/// @param config QSslConfiguration*
///
void q_sslsocket_set_ssl_configuration(void* self, void* config);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
///
/// @param self QSslSocket*
/// @param localChain libqt_list of QSslCertificate*
///
void q_sslsocket_set_local_certificate_chain(void* self, libqt_list localChain);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
///
/// @param self QSslSocket*
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslsocket_local_certificate_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param certificate QSslCertificate*
///
void q_sslsocket_set_local_certificate(void* self, void* certificate);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param fileName const char*
///
void q_sslsocket_set_local_certificate2(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
///
/// @param self QSslSocket*
///
QSslCertificate* q_sslsocket_local_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
///
/// @param self QSslSocket*
///
QSslCertificate* q_sslsocket_peer_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
///
/// @param self QSslSocket*
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslsocket_peer_certificate_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
///
/// @param self QSslSocket*
///
QSslCipher* q_sslsocket_session_cipher(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
///
/// @param self QSslSocket*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_sslsocket_session_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
///
/// @param self QSslSocket*
///
/// @return libqt_list of QOcspResponse*
///
libqt_list q_sslsocket_ocsp_responses(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param key QSslKey*
///
void q_sslsocket_set_private_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
///
void q_sslsocket_set_private_key2(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
///
/// @param self QSslSocket*
///
QSslKey* q_sslsocket_private_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_wait_for_connected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, int msecs)
///
void q_sslsocket_on_wait_for_connected(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_qbase_wait_for_connected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// @param self QSslSocket*
///
bool q_sslsocket_wait_for_encrypted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, int msecs)
///
void q_sslsocket_on_wait_for_ready_read(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_qbase_wait_for_ready_read(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, int msecs)
///
void q_sslsocket_on_wait_for_bytes_written(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_qbase_wait_for_bytes_written(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_wait_for_disconnected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, int msecs)
///
void q_sslsocket_on_wait_for_disconnected(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_qbase_wait_for_disconnected(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
///
/// @param self QSslSocket*
///
/// @return libqt_list of QSslError*
///
libqt_list q_sslsocket_ssl_handshake_errors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
///
bool q_sslsocket_supports_ssl();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
///
int64_t q_sslsocket_ssl_library_version_number();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sslsocket_ssl_library_version_string();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
///
int64_t q_sslsocket_ssl_library_build_version_number();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sslsocket_ssl_library_build_version_string();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_sslsocket_available_backends();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sslsocket_active_backend();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
///
/// @param backendName const char*
///
bool q_sslsocket_set_active_backend(const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
/// @return libqt_list of enum QSsl__SslProtocol
///
libqt_list q_sslsocket_supported_protocols();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// @param protocol enum QSsl__SslProtocol
///
bool q_sslsocket_is_protocol_supported(int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
/// @return libqt_list of enum QSsl__ImplementedClass
///
libqt_list q_sslsocket_implemented_classes();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// @param cl enum QSsl__ImplementedClass
///
bool q_sslsocket_is_class_implemented(int32_t cl);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
/// @return libqt_list of enum QSsl__SupportedFeature
///
libqt_list q_sslsocket_supported_features();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// @param feat enum QSsl__SupportedFeature
///
bool q_sslsocket_is_feature_supported(int32_t feat);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// @param self QSslSocket*
/// @param errors libqt_list of QSslError*
///
void q_sslsocket_ignore_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
///
/// @param self QSslSocket*
///
void q_sslsocket_continue_interrupted_handshake(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
///
/// @param self QSslSocket*
///
void q_sslsocket_start_client_encryption(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
///
/// @param self QSslSocket*
///
void q_sslsocket_start_server_encryption(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
///
/// @param self QSslSocket*
///
void q_sslsocket_ignore_ssl_errors2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// @param self QSslSocket*
///
void q_sslsocket_encrypted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_encrypted(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// @param self QSslSocket*
/// @param error QSslError*
///
void q_sslsocket_peer_verify_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QSslError* error)
///
void q_sslsocket_on_peer_verify_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// @param self QSslSocket*
/// @param errors libqt_list of QSslError*
///
void q_sslsocket_ssl_errors(void* self, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, libqt_list of QSslError* errors)
///
void q_sslsocket_on_ssl_errors(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// @param self QSslSocket*
/// @param newMode enum QSslSocket__SslMode
///
void q_sslsocket_mode_changed(void* self, int32_t newMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QSslSocket__SslMode newMode)
///
void q_sslsocket_on_mode_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// @param self QSslSocket*
/// @param totalBytes long long
///
void q_sslsocket_encrypted_bytes_written(void* self, long long totalBytes);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, long long totalBytes)
///
void q_sslsocket_on_encrypted_bytes_written(void* self, void (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_sslsocket_pre_shared_key_authentication_required(void* self, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_sslsocket_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// @param self QSslSocket*
///
void q_sslsocket_new_session_ticket_received(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_new_session_ticket_received(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// @param self QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_sslsocket_alert_sent(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_sslsocket_on_alert_sent(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// @param self QSslSocket*
/// @param level enum QSsl__AlertLevel
/// @param type enum QSsl__AlertType
/// @param description const char*
///
void q_sslsocket_alert_received(void* self, int32_t level, int32_t type, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QSsl__AlertLevel level, enum QSsl__AlertType type, const char* description)
///
void q_sslsocket_on_alert_received(void* self, void (*callback)(void*, int32_t, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// @param self QSslSocket*
/// @param error QSslError*
///
void q_sslsocket_handshake_interrupted_on_error(void* self, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QSslError* error)
///
void q_sslsocket_on_handshake_interrupted_on_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long func(QSslSocket* self, char* data, long long maxlen)
///
void q_sslsocket_on_read_data(void* self, long long (*callback)(void*, char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_qbase_read_data(void* self, char* data, long long maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// @param self QSslSocket*
/// @param maxSize long long
///
long long q_sslsocket_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long func(QSslSocket* self, long long maxSize)
///
void q_sslsocket_on_skip_data(void* self, long long (*callback)(void*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param maxSize long long
///
long long q_sslsocket_qbase_skip_data(void* self, long long maxSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_sslsocket_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// Allows for overriding the related default method
///
/// @param self QSslSocket*
/// @param callback long long func(QSslSocket* self, const char* data, long long lenVal)
///
void q_sslsocket_on_write_data(void* self, long long (*callback)(void*, const char*, long long));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
///
/// Base class method implementation
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_sslsocket_qbase_write_data(void* self, const char* data, long long lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sslsocket_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sslsocket_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_sslsocket_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_sslsocket_connect_to_host_encrypted4(void* self, const char* hostName, unsigned short port, int32_t mode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_sslsocket_connect_to_host_encrypted42(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
///
/// @param self QSslSocket*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslPeerName const char*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
/// @param protocol enum QAbstractSocket__NetworkLayerProtocol
///
void q_sslsocket_connect_to_host_encrypted5(void* self, const char* hostName, unsigned short port, const char* sslPeerName, int32_t mode, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param format enum QSsl__EncodingFormat
///
void q_sslsocket_set_local_certificate22(void* self, const char* fileName, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
///
void q_sslsocket_set_private_key22(void* self, const char* fileName, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
///
void q_sslsocket_set_private_key3(void* self, const char* fileName, int32_t algorithm, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
///
/// @param self QSslSocket*
/// @param fileName const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param passPhrase const char*
///
void q_sslsocket_set_private_key4(void* self, const char* fileName, int32_t algorithm, int32_t format, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
///
/// @param self QSslSocket*
/// @param msecs int
///
bool q_sslsocket_wait_for_encrypted1(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__SslProtocol
///
libqt_list q_sslsocket_supported_protocols1(const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
///
/// @param protocol enum QSsl__SslProtocol
/// @param backendName const char*
///
bool q_sslsocket_is_protocol_supported2(int32_t protocol, const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__ImplementedClass
///
libqt_list q_sslsocket_implemented_classes1(const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
///
/// @param cl enum QSsl__ImplementedClass
/// @param backendName const char*
///
bool q_sslsocket_is_class_implemented2(int32_t cl, const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
///
/// @param backendName const char*
///
/// @return libqt_list of enum QSsl__SupportedFeature
///
libqt_list q_sslsocket_supported_features1(const char* backendName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
///
/// @param feat enum QSsl__SupportedFeature
/// @param backendName const char*
///
bool q_sslsocket_is_feature_supported2(int32_t feat, const char* backendName);

/// Inherited from QTcpSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSslSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
///
bool q_sslsocket_bind2(void* self, int32_t addr, unsigned short port);

/// Inherited from QTcpSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
///
/// @param self QSslSocket*
/// @param addr enum QHostAddress__SpecialAddress
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_sslsocket_bind3(void* self, int32_t addr, unsigned short port, int32_t mode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// @param self QSslSocket*
///
/// @return flag of enum QAbstractSocket__PauseMode
///
int32_t q_sslsocket_pause_mode(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// @param self QSslSocket*
/// @param pauseMode flag of enum QAbstractSocket__PauseMode
///
void q_sslsocket_set_pause_mode(void* self, int32_t pauseMode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
///
void q_sslsocket_connect_to_host2(void* self, void* address, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_valid(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// @param self QSslSocket*
///
unsigned short q_sslsocket_local_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// @param self QSslSocket*
///
QHostAddress* q_sslsocket_local_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// @param self QSslSocket*
///
unsigned short q_sslsocket_peer_port(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// @param self QSslSocket*
///
QHostAddress* q_sslsocket_peer_address(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslSocket*
///
const char* q_sslsocket_peer_name(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// @param self QSslSocket*
///
long long q_sslsocket_read_buffer_size(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// @param self QSslSocket*
///
void q_sslsocket_abort(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketType
///
int32_t q_sslsocket_socket_type(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketState
///
int32_t q_sslsocket_state(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// @param self QSslSocket*
///
/// @return enum QAbstractSocket__SocketError
///
int32_t q_sslsocket_error(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// @param self QSslSocket*
///
bool q_sslsocket_flush(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// @param self QSslSocket*
/// @param networkProxy QNetworkProxy*
///
void q_sslsocket_set_proxy(void* self, void* networkProxy);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// @param self QSslSocket*
///
QNetworkProxy* q_sslsocket_proxy(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslSocket*
///
const char* q_sslsocket_protocol_tag(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// @param self QSslSocket*
/// @param tag const char*
///
void q_sslsocket_set_protocol_tag(void* self, const char* tag);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSslSocket*
///
void q_sslsocket_host_found(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_host_found(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSslSocket*
///
void q_sslsocket_connected(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_connected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSslSocket*
///
void q_sslsocket_disconnected(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_disconnected(void* self, void (*callback)(void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSslSocket*
/// @param param1 enum QAbstractSocket__SocketState
///
void q_sslsocket_state_changed(void* self, int32_t param1);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QAbstractSocket__SocketState param1)
///
void q_sslsocket_on_state_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSslSocket*
/// @param param1 enum QAbstractSocket__SocketError
///
void q_sslsocket_error_occurred(void* self, int32_t param1);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QAbstractSocket__SocketError param1)
///
void q_sslsocket_on_error_occurred(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
///
void q_sslsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator)
///
void q_sslsocket_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSslSocket*
/// @param port unsigned short
///
bool q_sslsocket_bind1(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// @param self QSslSocket*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_sslsocket_bind22(void* self, unsigned short port, int32_t mode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
void q_sslsocket_connect_to_host3(void* self, void* address, unsigned short port, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// @param self QSslSocket*
///
/// @return flag of enum QIODeviceBase__OpenModeFlag
///
int32_t q_sslsocket_open_mode(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// @param self QSslSocket*
/// @param enabled bool
///
void q_sslsocket_set_text_mode_enabled(void* self, bool enabled);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_text_mode_enabled(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_open(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_readable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_writable(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_read_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_write_channel_count(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_current_read_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// @param self QSslSocket*
/// @param channel int
///
void q_sslsocket_set_current_read_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_current_write_channel(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// @param self QSslSocket*
/// @param channel int
///
void q_sslsocket_set_current_write_channel(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_read(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
/// @param maxlen long long
///
char* q_sslsocket_read2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
///
char* q_sslsocket_read_all(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_read_line(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
///
char* q_sslsocket_read_line2(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// @param self QSslSocket*
///
void q_sslsocket_start_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// @param self QSslSocket*
///
void q_sslsocket_commit_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// @param self QSslSocket*
///
void q_sslsocket_rollback_transaction(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_transaction_started(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
/// @param lenVal long long
///
long long q_sslsocket_write(void* self, const char* data, long long lenVal);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
///
long long q_sslsocket_write2(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// @param self QSslSocket*
/// @param data const char*
///
long long q_sslsocket_write3(void* self, const char* data);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_peek(void* self, char* data, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
/// @param maxlen long long
///
char* q_sslsocket_peek2(void* self, long long maxlen);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// @param self QSslSocket*
/// @param maxSize long long
///
long long q_sslsocket_skip(void* self, long long maxSize);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// @param self QSslSocket*
/// @param c char
///
void q_sslsocket_unget_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// @param self QSslSocket*
/// @param c char
///
bool q_sslsocket_put_char(void* self, char c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// @param self QSslSocket*
/// @param c char*
///
bool q_sslsocket_get_char(void* self, char* c);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslSocket*
///
const char* q_sslsocket_error_string(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSslSocket*
///
void q_sslsocket_ready_read(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_ready_read(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSslSocket*
/// @param channel int
///
void q_sslsocket_channel_ready_read(void* self, int channel);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, int channel)
///
void q_sslsocket_on_channel_ready_read(void* self, void (*callback)(void*, int));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSslSocket*
/// @param bytes long long
///
void q_sslsocket_bytes_written(void* self, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, long long bytes)
///
void q_sslsocket_on_bytes_written(void* self, void (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSslSocket*
/// @param channel int
/// @param bytes long long
///
void q_sslsocket_channel_bytes_written(void* self, int channel, long long bytes);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, int channel, long long bytes)
///
void q_sslsocket_on_channel_bytes_written(void* self, void (*callback)(void*, int, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSslSocket*
///
void q_sslsocket_about_to_close(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_about_to_close(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSslSocket*
///
void q_sslsocket_read_channel_finished(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_read_channel_finished(void* self, void (*callback)(void*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
/// @param maxlen long long
///
char* q_sslsocket_read_line1(void* self, long long maxlen);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslSocket*
///
const char* q_sslsocket_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSslSocket*
/// @param name char*
///
void q_sslsocket_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSslSocket*
///
bool q_sslsocket_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSslSocket*
/// @param b bool
///
bool q_sslsocket_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSslSocket*
///
QThread* q_sslsocket_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSslSocket*
/// @param thread QThread*
///
bool q_sslsocket_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param interval int
///
int32_t q_sslsocket_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param time int64_t of nanoseconds
///
int32_t q_sslsocket_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslSocket*
/// @param id int
///
void q_sslsocket_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSslSocket*
/// @param id enum Qt__TimerId
///
void q_sslsocket_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSslSocket*
///
/// @return libqt_list of QObject*
///
libqt_list q_sslsocket_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSslSocket*
/// @param parent QObject*
///
void q_sslsocket_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSslSocket*
/// @param filterObj QObject*
///
void q_sslsocket_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSslSocket*
/// @param obj QObject*
///
void q_sslsocket_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sslsocket_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sslsocket_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sslsocket_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sslsocket_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sslsocket_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
///
bool q_sslsocket_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
/// @param receiver QObject*
///
bool q_sslsocket_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sslsocket_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSslSocket*
///
void q_sslsocket_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSslSocket*
///
void q_sslsocket_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSslSocket*
/// @param name const char*
/// @param value QVariant*
///
bool q_sslsocket_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSslSocket*
/// @param name const char*
///
QVariant* q_sslsocket_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslSocket*
///
const char** q_sslsocket_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslSocket*
///
QBindingStorage* q_sslsocket_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSslSocket*
///
const QBindingStorage* q_sslsocket_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
///
void q_sslsocket_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self)
///
void q_sslsocket_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSslSocket*
///
QObject* q_sslsocket_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSslSocket*
/// @param classname const char*
///
bool q_sslsocket_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSslSocket*
///
void q_sslsocket_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sslsocket_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSslSocket*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sslsocket_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_sslsocket_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sslsocket_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSslSocket*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sslsocket_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
/// @param signal const char*
///
bool q_sslsocket_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sslsocket_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sslsocket_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSslSocket*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sslsocket_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param param1 QObject*
///
void q_sslsocket_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QObject* param1)
///
void q_sslsocket_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_sslsocket_bind(void* self, void* address, unsigned short port, int32_t mode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
/// @param port unsigned short
/// @param mode flag of enum QAbstractSocket__BindFlag
///
bool q_sslsocket_qbase_bind(void* self, void* address, unsigned short port, int32_t mode);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, QHostAddress* address, unsigned short port, flag of enum QAbstractSocket__BindFlag mode)
///
void q_sslsocket_on_bind(void* self, bool (*callback)(void*, void*, unsigned short, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
intptr_t q_sslsocket_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
intptr_t q_sslsocket_qbase_socket_descriptor(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback intptr_t func()
///
void q_sslsocket_on_socket_descriptor(void* self, intptr_t (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
bool q_sslsocket_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
bool q_sslsocket_qbase_is_sequential(void* self);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func()
///
void q_sslsocket_on_is_sequential(void* self, bool (*callback)());

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param data char*
/// @param maxlen long long
///
long long q_sslsocket_qbase_read_line_data(void* self, char* data, long long maxlen);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long func(QSslSocket* self, char* data, long long maxlen)
///
void q_sslsocket_on_read_line_data(void* self, long long (*callback)(void*, char*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_sslsocket_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
bool q_sslsocket_qbase_open(void* self, int32_t mode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void q_sslsocket_on_open(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
long long q_sslsocket_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
long long q_sslsocket_qbase_pos(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long func()
///
void q_sslsocket_on_pos(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
long long q_sslsocket_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
long long q_sslsocket_qbase_size(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback long long func()
///
void q_sslsocket_on_size(void* self, long long (*callback)());

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param pos long long
///
bool q_sslsocket_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param pos long long
///
bool q_sslsocket_qbase_seek(void* self, long long pos);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, long long pos)
///
void q_sslsocket_on_seek(void* self, bool (*callback)(void*, long long));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
bool q_sslsocket_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
bool q_sslsocket_qbase_reset(void* self);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func()
///
void q_sslsocket_on_reset(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
///
bool q_sslsocket_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
///
bool q_sslsocket_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, QEvent* event)
///
void q_sslsocket_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sslsocket_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sslsocket_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, QObject* watched, QEvent* event)
///
void q_sslsocket_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QTimerEvent*
///
void q_sslsocket_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QTimerEvent*
///
void q_sslsocket_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QTimerEvent* event)
///
void q_sslsocket_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QChildEvent*
///
void q_sslsocket_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QChildEvent*
///
void q_sslsocket_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QChildEvent* event)
///
void q_sslsocket_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
///
void q_sslsocket_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param event QEvent*
///
void q_sslsocket_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QEvent* event)
///
void q_sslsocket_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
void q_sslsocket_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
void q_sslsocket_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QMetaMethod* signal)
///
void q_sslsocket_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
void q_sslsocket_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
void q_sslsocket_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QMetaMethod* signal)
///
void q_sslsocket_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_sslsocket_set_socket_state(void* self, int32_t state);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param state enum QAbstractSocket__SocketState
///
void q_sslsocket_qbase_set_socket_state(void* self, int32_t state);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QAbstractSocket__SocketState state)
///
void q_sslsocket_on_set_socket_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_sslsocket_set_socket_error(void* self, int32_t socketError);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param socketError enum QAbstractSocket__SocketError
///
void q_sslsocket_qbase_set_socket_error(void* self, int32_t socketError);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, enum QAbstractSocket__SocketError socketError)
///
void q_sslsocket_on_set_socket_error(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
///
void q_sslsocket_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
///
void q_sslsocket_qbase_set_local_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, unsigned short port)
///
void q_sslsocket_on_set_local_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
///
void q_sslsocket_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
///
void q_sslsocket_qbase_set_local_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QHostAddress* address)
///
void q_sslsocket_on_set_local_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
///
void q_sslsocket_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param port unsigned short
///
void q_sslsocket_qbase_set_peer_port(void* self, unsigned short port);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, unsigned short port)
///
void q_sslsocket_on_set_peer_port(void* self, void (*callback)(void*, unsigned short));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
///
void q_sslsocket_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param address QHostAddress*
///
void q_sslsocket_qbase_set_peer_address(void* self, void* address);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, QHostAddress* address)
///
void q_sslsocket_on_set_peer_address(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param name const char*
///
void q_sslsocket_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param name const char*
///
void q_sslsocket_qbase_set_peer_name(void* self, const char* name);

/// Inherited from QAbstractSocket
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, const char* name)
///
void q_sslsocket_on_set_peer_name(void* self, void (*callback)(void*, const char*));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_sslsocket_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
///
void q_sslsocket_qbase_set_open_mode(void* self, int32_t openMode);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, flag of enum QIODeviceBase__OpenModeFlag openMode)
///
void q_sslsocket_on_set_open_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param errorString const char*
///
void q_sslsocket_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param errorString const char*
///
void q_sslsocket_qbase_set_error_string(void* self, const char* errorString);

/// Inherited from QIODevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, const char* errorString)
///
void q_sslsocket_on_set_error_string(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
QObject* q_sslsocket_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
QObject* q_sslsocket_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback QObject* func()
///
void q_sslsocket_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
///
int32_t q_sslsocket_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback int32_t func()
///
void q_sslsocket_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal const char*
///
int32_t q_sslsocket_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal const char*
///
int32_t q_sslsocket_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback int32_t func(QSslSocket* self, const char* signal)
///
void q_sslsocket_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
bool q_sslsocket_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSslSocket*
/// @param signal QMetaMethod*
///
bool q_sslsocket_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSslSocket*
/// @param callback bool func(QSslSocket* self, QMetaMethod* signal)
///
void q_sslsocket_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSslSocket*
/// @param callback void func(QSslSocket* self, const char* objectName)
///
void q_sslsocket_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#dtor.QSslSocket)
///
/// Delete this object from C++ memory.
///
/// @param self QSslSocket*
///
void q_sslsocket_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#public-types)

typedef enum {
    QSSLSOCKET_SSLMODE_UNENCRYPTEDMODE = 0,
    QSSLSOCKET_SSLMODE_SSLCLIENTMODE = 1,
    QSSLSOCKET_SSLMODE_SSLSERVERMODE = 2
} QSslSocket__SslMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#public-types)

typedef enum {
    QSSLSOCKET_PEERVERIFYMODE_VERIFYNONE = 0,
    QSSLSOCKET_PEERVERIFYMODE_QUERYPEER = 1,
    QSSLSOCKET_PEERVERIFYMODE_VERIFYPEER = 2,
    QSSLSOCKET_PEERVERIFYMODE_AUTOVERIFYPEER = 3
} QSslSocket__PeerVerifyMode;

#endif
