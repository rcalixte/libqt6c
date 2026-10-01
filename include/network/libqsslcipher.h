#pragma once
#ifndef NETWORK_LIBQSSLCIPHER_H
#define NETWORK_LIBQSSLCIPHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)

/// q_sslcipher_new constructs a new QSslCipher object.
///
QSslCipher* q_sslcipher_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)

/// q_sslcipher_new2 constructs a new QSslCipher object.
///
/// @param name const char*
///
QSslCipher* q_sslcipher_new2(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)

/// q_sslcipher_new3 constructs a new QSslCipher object.
///
/// @param name const char*
/// @param protocol enum QSsl__SslProtocol
///
QSslCipher* q_sslcipher_new3(const char* name, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html)

/// q_sslcipher_new4 constructs a new QSslCipher object.
///
/// @param other QSslCipher*
///
QSslCipher* q_sslcipher_new4(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
///
void q_sslcipher_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#swap)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
///
void q_sslcipher_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq-eq)
///
/// @param self const QSslCipher*
/// @param other QSslCipher*
///
bool q_sslcipher_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#operator-not-eq)
///
/// @param self const QSslCipher*
/// @param other QSslCipher*
///
bool q_sslcipher_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
///
/// @param self const QSslCipher*
///
bool q_sslcipher_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSslCipher*
///
const char* q_sslcipher_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
///
/// @param self const QSslCipher*
///
int32_t q_sslcipher_supported_bits(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
///
/// @param self const QSslCipher*
///
int32_t q_sslcipher_used_bits(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSslCipher*
///
const char* q_sslcipher_key_exchange_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSslCipher*
///
const char* q_sslcipher_authentication_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSslCipher*
///
const char* q_sslcipher_encryption_method(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSslCipher*
///
const char* q_sslcipher_protocol_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
///
/// @param self const QSslCipher*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_sslcipher_protocol(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
///
/// Delete this object from C++ memory.
///
/// @param self QSslCipher*
///
void q_sslcipher_delete(void* self);

#endif
