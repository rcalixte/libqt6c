#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCIPHER_H
#define SRC_NETWORKQT6C_LIBQSSLCIPHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslcipher.html

/// q_sslcipher_new constructs a new QSslCipher object.
///
///
QSslCipher* q_sslcipher_new();

/// q_sslcipher_new2 constructs a new QSslCipher object.
///
/// ``` const char* name ```
QSslCipher* q_sslcipher_new2(const char* name);

/// q_sslcipher_new3 constructs a new QSslCipher object.
///
/// ``` const char* name, enum QSsl__SslProtocol protocol ```
QSslCipher* q_sslcipher_new3(const char* name, int64_t protocol);

/// q_sslcipher_new4 constructs a new QSslCipher object.
///
/// ``` QSslCipher* other ```
QSslCipher* q_sslcipher_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq)
///
/// ``` QSslCipher* self, QSslCipher* other ```
void q_sslcipher_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#swap)
///
/// ``` QSslCipher* self, QSslCipher* other ```
void q_sslcipher_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-eq-eq)
///
/// ``` QSslCipher* self, QSslCipher* other ```
bool q_sslcipher_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator-not-eq)
///
/// ``` QSslCipher* self, QSslCipher* other ```
bool q_sslcipher_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
///
/// ``` QSslCipher* self ```
bool q_sslcipher_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#name)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
///
/// ``` QSslCipher* self ```
int32_t q_sslcipher_supported_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
///
/// ``` QSslCipher* self ```
int32_t q_sslcipher_used_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_key_exchange_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_authentication_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_encryption_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_protocol_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
///
/// ``` QSslCipher* self ```
int64_t q_sslcipher_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#dtor.QSslCipher)
///
/// Delete this object from C++ memory.
///
/// ``` QSslCipher* self ```
void q_sslcipher_delete(void* self);

#endif
