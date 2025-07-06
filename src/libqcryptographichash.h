#pragma once
#ifndef SRCQT6C_LIBQCRYPTOGRAPHICHASH_H
#define SRCQT6C_LIBQCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcryptographichash.html

/// q_cryptographichash_new constructs a new QCryptographicHash object.
///
/// ``` enum QCryptographicHash__Algorithm method ```
QCryptographicHash* q_cryptographichash_new(int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#swap)
///
/// ``` QCryptographicHash* self, QCryptographicHash* other ```
void q_cryptographichash_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
///
/// ``` QCryptographicHash* self ```
void q_cryptographichash_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#algorithm)
///
/// ``` QCryptographicHash* self ```
int64_t q_cryptographichash_algorithm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, const char* data, int64_t length ```
void q_cryptographichash_add_data(void* self, const char* data, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, const char* data ```
void q_cryptographichash_add_data_with_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, QIODevice* device ```
bool q_cryptographichash_add_data_with_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#result)
///
/// ``` QCryptographicHash* self ```
char* q_cryptographichash_result(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
///
/// ``` QCryptographicHash* self ```
const char* q_cryptographichash_result_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
///
/// ``` const char* data, enum QCryptographicHash__Algorithm method ```
char* q_cryptographichash_hash(const char* data, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// ``` libqt_list /* of char */ buffer, const char* data, enum QCryptographicHash__Algorithm method ```
const char* q_cryptographichash_hash_into(libqt_list buffer, const char* data, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// ``` libqt_list /* of unsigned char */ buffer, const char* data, enum QCryptographicHash__Algorithm method ```
const char* q_cryptographichash_hash_into2(libqt_list buffer, const char* data, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// ``` libqt_list /* of char */ buffer, libqt_list /* of const char* */ data, enum QCryptographicHash__Algorithm method ```
const char* q_cryptographichash_hash_into4(libqt_list buffer, libqt_list data, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashInto)
///
/// ``` libqt_list /* of unsigned char */ buffer, libqt_list /* of const char* */ data, enum QCryptographicHash__Algorithm method ```
const char* q_cryptographichash_hash_into5(libqt_list buffer, libqt_list data, int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
///
/// ``` enum QCryptographicHash__Algorithm method ```
int32_t q_cryptographichash_hash_length(int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#supportsAlgorithm)
///
/// ``` enum QCryptographicHash__Algorithm method ```
bool q_cryptographichash_supports_algorithm(int64_t method);

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#dtor.QCryptographicHash)
///
/// Delete this object from C++ memory.
///
/// ``` QCryptographicHash* self ```
void q_cryptographichash_delete(void* self);

/// https://doc.qt.io/qt-6/qcryptographichash.html#types

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
