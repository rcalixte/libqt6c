#pragma once
#ifndef LIBQHASHFUNCTIONS_H
#define LIBQHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qGlobalQHashSeed)
///
int32_t q_qhashfunctions_q_global_q_hash_seed();

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qSetGlobalQHashSeed)
///
/// @param newSeed int
///
void q_qhashfunctions_q_set_global_q_hash_seed(int newSeed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHashBits)
///
/// @param p void*
/// @param size size_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash_bits(void* p, size_t size, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash(char key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key unsigned char
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash2(unsigned char key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key signed char
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash3(signed char key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint16_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash4(uint16_t key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key short
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash5(short key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint32_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash6(uint32_t key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key int
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash7(int key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uintptr_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash8(uintptr_t key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key long
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash9(long key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint64_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash10(uint64_t key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key int64_t
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash11(int64_t key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key float
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash12(float key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key double
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash13(double key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QChar*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash19(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash20(char* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key const char*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash22(const char* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key const char*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash23(const char* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QBitArray*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash24(const void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash25(char* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QKeyCombination*
/// @param seed size_t
///
size_t q_qhashfunctions_q_hash26(void* key, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qt_hash)
///
/// @param key const char*
/// @param chained uint32_t
///
uint32_t q_qhashfunctions_hash(const char* key, uint32_t chained);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)

/// q_hashseed_new constructs a new QHashSeed object.
///
/// @param other QHashSeed*
///
QHashSeed* q_hashseed_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)

/// q_hashseed_new2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
///
/// @param other QHashSeed*
///
QHashSeed* q_hashseed_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)

/// q_hashseed_new3 constructs a new QHashSeed object.
///
QHashSeed* q_hashseed_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html)

/// q_hashseed_new4 constructs a new QHashSeed object.
///
/// @param d size_t
///
QHashSeed* q_hashseed_new4(size_t d);

/// q_hashseed_copy_assign shallow copies `other` into `self`.
///
/// @param self QHashSeed*
/// @param other QHashSeed*
///
void q_hashseed_copy_assign(void* self, void* other);

/// q_hashseed_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QHashSeed*
/// @param other QHashSeed*
///
void q_hashseed_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#operator-unsigned-long)
///
/// @param self const QHashSeed*
///
size_t q_hashseed_to_unsigned_long(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
///
QHashSeed* q_hashseed_global_seed();

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
///
void q_hashseed_set_deterministic_global_seed();

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
///
void q_hashseed_reset_random_global_seed();

/// [Upstream resources](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
///
/// Delete this object from C++ memory.
///
/// @param self QHashSeed*
///
void q_hashseed_delete(void* self);

#endif
