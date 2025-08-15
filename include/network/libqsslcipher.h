#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCIPHER_H
#define SRC_NETWORKQT6C_LIBQSSLCIPHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslcipher.html

/// q_sslcipher_new constructs a new QSslCipher object.
///
QSslCipher* q_sslcipher_new();

/// q_sslcipher_new2 constructs a new QSslCipher object.
///
/// @param name const char*
QSslCipher* q_sslcipher_new2(const char* name);

/// q_sslcipher_new3 constructs a new QSslCipher object.
///
/// @param name const char*
/// @param protocol enum QSsl__SslProtocol
QSslCipher* q_sslcipher_new3(const char* name, int64_t protocol);

/// q_sslcipher_new4 constructs a new QSslCipher object.
///
/// @param other QSslCipher*
QSslCipher* q_sslcipher_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
void q_sslcipher_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#swap)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
void q_sslcipher_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq-eq)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
bool q_sslcipher_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-not-eq)
///
/// @param self QSslCipher*
/// @param other QSslCipher*
bool q_sslcipher_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
///
/// @param self QSslCipher*
bool q_sslcipher_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslCipher*
const char* q_sslcipher_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
///
/// @param self QSslCipher*
int32_t q_sslcipher_supported_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
///
/// @param self QSslCipher*
int32_t q_sslcipher_used_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslCipher*
const char* q_sslcipher_key_exchange_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslCipher*
const char* q_sslcipher_authentication_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslCipher*
const char* q_sslcipher_encryption_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSslCipher*
const char* q_sslcipher_protocol_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
///
/// @param self QSslCipher*
///
/// @return enum QSsl__SslProtocol
int64_t q_sslcipher_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
///
/// Delete this object from C++ memory.
///
/// @param self QSslCipher*
void q_sslcipher_delete(void* self);

#endif
