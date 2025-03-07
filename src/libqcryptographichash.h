#pragma once
#ifndef SRCQT6C_LIBQCRYPTOGRAPHICHASH_H
#define SRCQT6C_LIBQCRYPTOGRAPHICHASH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqiodevice.h"

QCryptographicHash* q_cryptographichash_new(int64_t method);
void q_cryptographichash_reset(void* self);
void q_cryptographichash_add_data(void* self, const char* data, int64_t length);
void q_cryptographichash_add_data_with_data(void* self, const char* data);
bool q_cryptographichash_add_data_with_device(void* self, void* device);
char* q_cryptographichash_result(void* self);
const char* q_cryptographichash_result_view(void* self);
char* q_cryptographichash_hash(const char* data, int64_t method);
int32_t q_cryptographichash_hash_length(int64_t method);
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
    QCRYPTOGRAPHICHASH_ALGORITHM_BLAKE2S_256 = 22
} QCryptographicHash__Algorithm;

#endif
