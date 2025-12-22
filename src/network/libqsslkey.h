#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLKEY_H
#define SRC_NETWORK_QT6C_LIBQSSLKEY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new constructs a new QSslKey object.
///
QSslKey* q_sslkey_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new2 constructs a new QSslKey object.
///
/// @param encoded const char*
/// @param algorithm enum QSsl__KeyAlgorithm
///
QSslKey* q_sslkey_new2(const char* encoded, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new3 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
///
QSslKey* q_sslkey_new3(void* device, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new4 constructs a new QSslKey object.
///
/// @param handle void*
///
QSslKey* q_sslkey_new4(void* handle);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new5 constructs a new QSslKey object.
///
/// @param other QSslKey*
///
QSslKey* q_sslkey_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new6 constructs a new QSslKey object.
///
/// @param encoded const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
///
QSslKey* q_sslkey_new6(const char* encoded, int32_t algorithm, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new7 constructs a new QSslKey object.
///
/// @param encoded const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new7(const char* encoded, int32_t algorithm, int32_t format, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new8 constructs a new QSslKey object.
///
/// @param encoded const char*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
/// @param passPhrase const char*
///
QSslKey* q_sslkey_new8(const char* encoded, int32_t algorithm, int32_t format, int32_t type, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new9 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
///
QSslKey* q_sslkey_new9(void* device, int32_t algorithm, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new10 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new10(void* device, int32_t algorithm, int32_t format, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new11 constructs a new QSslKey object.
///
/// @param device QIODevice*
/// @param algorithm enum QSsl__KeyAlgorithm
/// @param format enum QSsl__EncodingFormat
/// @param type enum QSsl__KeyType
/// @param passPhrase const char*
///
QSslKey* q_sslkey_new11(void* device, int32_t algorithm, int32_t format, int32_t type, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html)

/// q_sslkey_new12 constructs a new QSslKey object.
///
/// @param handle void*
/// @param type enum QSsl__KeyType
///
QSslKey* q_sslkey_new12(void* handle, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq)
///
/// @param self QSslKey*
/// @param other QSslKey*
///
void q_sslkey_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#swap)
///
/// @param self QSslKey*
/// @param other QSslKey*
///
void q_sslkey_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#isNull)
///
/// @param self QSslKey*
///
bool q_sslkey_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#clear)
///
/// @param self QSslKey*
///
void q_sslkey_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#length)
///
/// @param self QSslKey*
///
int32_t q_sslkey_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#type)
///
/// @param self QSslKey*
///
/// @return enum QSsl__KeyType
///
int32_t q_sslkey_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
///
/// @param self QSslKey*
///
/// @return enum QSsl__KeyAlgorithm
///
int32_t q_sslkey_algorithm(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslKey*
///
char* q_sslkey_to_pem(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslKey*
///
char* q_sslkey_to_der(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#handle)
///
/// @param self QSslKey*
///
void* q_sslkey_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-eq-eq)
///
/// @param self QSslKey*
/// @param key QSslKey*
///
bool q_sslkey_operator_equal(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#operator-not-eq)
///
/// @param self QSslKey*
/// @param key QSslKey*
///
bool q_sslkey_operator_not_equal(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslKey*
/// @param passPhrase const char*
///
char* q_sslkey_to_pem1(void* self, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslKey*
/// @param passPhrase const char*
///
char* q_sslkey_to_der1(void* self, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslkey.html#dtor.QSslKey)
///
/// Delete this object from C++ memory.
///
/// @param self QSslKey*
///
void q_sslkey_delete(void* self);

#endif
