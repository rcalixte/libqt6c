#pragma once
#ifndef SRC_QT6C_LIBQCRYPTOGRAPHICHASH_H
#define SRC_QT6C_LIBQCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html)

/// q_cryptographichash_new constructs a new QCryptographicHash object.
///
/// @param method enum QCryptographicHash__Algorithm
///
QCryptographicHash* q_cryptographichash_new(int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#swap)
///
/// @param self QCryptographicHash*
/// @param other QCryptographicHash*
///
void q_cryptographichash_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
///
/// @param self QCryptographicHash*
///
void q_cryptographichash_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#algorithm)
///
/// @param self QCryptographicHash*
///
/// @return enum QCryptographicHash__Algorithm
///
int32_t q_cryptographichash_algorithm(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// @param self QCryptographicHash*
/// @param data const char*
/// @param length int64_t
///
void q_cryptographichash_add_data(void* self, const char* data, int64_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// @param self QCryptographicHash*
/// @param data char*
///
void q_cryptographichash_add_data2(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// @param self QCryptographicHash*
/// @param device QIODevice*
///
bool q_cryptographichash_add_data3(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#result)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCryptographicHash*
///
char* q_cryptographichash_result(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QCryptographicHash*
///
char* q_cryptographichash_result_view(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param data char*
/// @param method enum QCryptographicHash__Algorithm
///
char* q_cryptographichash_hash(char* data, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param buffer libqt_list of char
/// @param data char*
/// @param method enum QCryptographicHash__Algorithm
///
char* q_cryptographichash_hash_into(libqt_list buffer, char* data, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param buffer libqt_list of unsigned char
/// @param data char*
/// @param method enum QCryptographicHash__Algorithm
///
char* q_cryptographichash_hash_into2(libqt_list buffer, char* data, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param buffer libqt_list of char
/// @param data libqt_list of char*
/// @param method enum QCryptographicHash__Algorithm
///
char* q_cryptographichash_hash_into4(libqt_list buffer, libqt_list data, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param buffer libqt_list of unsigned char
/// @param data libqt_list of char*
/// @param method enum QCryptographicHash__Algorithm
///
char* q_cryptographichash_hash_into5(libqt_list buffer, libqt_list data, int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
///
/// @param method enum QCryptographicHash__Algorithm
///
int32_t q_cryptographichash_hash_length(int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#supportsAlgorithm)
///
/// @param method enum QCryptographicHash__Algorithm
///
bool q_cryptographichash_supports_algorithm(int32_t method);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#dtor.QCryptographicHash)
///
/// Delete this object from C++ memory.
///
/// @param self QCryptographicHash*
///
void q_cryptographichash_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcryptographichash.html#public-types)

typedef enum {
    QCRYPTOGRAPHICHASH_ALGORITHM_MD4 = 0,
    QCRYPTOGRAPHICHASH_ALGORITHM_MD5 = 1,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA1 = 2,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA224 = 3,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA256 = 4,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA384 = 5,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA512 = 6,
    QCRYPTOGRAPHICHASH_ALGORITHM_KECCAK_224 = 7,
    QCRYPTOGRAPHICHASH_ALGORITHM_KECCAK_256 = 8,
    QCRYPTOGRAPHICHASH_ALGORITHM_KECCAK_384 = 9,
    QCRYPTOGRAPHICHASH_ALGORITHM_KECCAK_512 = 10,
    QCRYPTOGRAPHICHASH_ALGORITHM_REALSHA3_224 = 11,
    QCRYPTOGRAPHICHASH_ALGORITHM_REALSHA3_256 = 12,
    QCRYPTOGRAPHICHASH_ALGORITHM_REALSHA3_384 = 13,
    QCRYPTOGRAPHICHASH_ALGORITHM_REALSHA3_512 = 14,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA3_224 = 11,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA3_256 = 12,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA3_384 = 13,
    QCRYPTOGRAPHICHASH_ALGORITHM_SHA3_512 = 14,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2B_160 = 15,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2B_256 = 16,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2B_384 = 17,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2B_512 = 18,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2S_128 = 19,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2S_160 = 20,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2S_224 = 21,
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2S_256 = 22,
    QCRYPTOGRAPHICHASH_ALGORITHM_NUMALGORITHMS = 23
} QCryptographicHash__Algorithm;

#endif
