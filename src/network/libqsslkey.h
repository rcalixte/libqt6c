#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLKEY_H
#define SRC_NETWORKQT6C_LIBQSSLKEY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"

/// https://doc.qt.io/qt-6/qsslkey.html

/// q_sslkey_new constructs a new QSslKey object.
///
///
QSslKey* q_sslkey_new();

/// q_sslkey_new2 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm ```
QSslKey* q_sslkey_new2(const char* encoded, int64_t algorithm);

/// q_sslkey_new3 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm ```
QSslKey* q_sslkey_new3(void* device, int64_t algorithm);

/// q_sslkey_new4 constructs a new QSslKey object.
///
/// ``` void* handle ```
QSslKey* q_sslkey_new4(void* handle);

/// q_sslkey_new5 constructs a new QSslKey object.
///
/// ``` QSslKey* other ```
QSslKey* q_sslkey_new5(void* other);

/// q_sslkey_new6 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
QSslKey* q_sslkey_new6(const char* encoded, int64_t algorithm, int64_t format);

/// q_sslkey_new7 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new7(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal);

/// q_sslkey_new8 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal, const char* passPhrase ```
QSslKey* q_sslkey_new8(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase);

/// q_sslkey_new9 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
QSslKey* q_sslkey_new9(void* device, int64_t algorithm, int64_t format);

/// q_sslkey_new10 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new10(void* device, int64_t algorithm, int64_t format, int64_t typeVal);

/// q_sslkey_new11 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal, const char* passPhrase ```
QSslKey* q_sslkey_new11(void* device, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase);

/// q_sslkey_new12 constructs a new QSslKey object.
///
/// ``` void* handle, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new12(void* handle, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator=)
///
/// ``` QSslKey* self, QSslKey* other ```
void q_sslkey_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#swap)
///
/// ``` QSslKey* self, QSslKey* other ```
void q_sslkey_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#isNull)
///
/// ``` QSslKey* self ```
bool q_sslkey_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#clear)
///
/// ``` QSslKey* self ```
void q_sslkey_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#length)
///
/// ``` QSslKey* self ```
int32_t q_sslkey_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#type)
///
/// ``` QSslKey* self ```
int64_t q_sslkey_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
///
/// ``` QSslKey* self ```
int64_t q_sslkey_algorithm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// ``` QSslKey* self ```
char* q_sslkey_to_pem(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// ``` QSslKey* self ```
char* q_sslkey_to_der(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#handle)
///
/// ``` QSslKey* self ```
void* q_sslkey_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator==)
///
/// ``` QSslKey* self, QSslKey* key ```
bool q_sslkey_operator_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator!=)
///
/// ``` QSslKey* self, QSslKey* key ```
bool q_sslkey_operator_not_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// ``` QSslKey* self, const char* passPhrase ```
char* q_sslkey_to_pem1(void* self, const char* passPhrase);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// ``` QSslKey* self, const char* passPhrase ```
char* q_sslkey_to_der1(void* self, const char* passPhrase);

/// Delete this object from C++ memory.
///
/// ``` QSslKey* self ```
void q_sslkey_delete(void* self);

#endif
