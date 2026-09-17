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
/// @param size uintptr_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash_bits(void* p, uintptr_t size, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash(char key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key unsigned char
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash2(unsigned char key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key signed char
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash3(signed char key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint16_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash4(uint16_t key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key short
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash5(short key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint32_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash6(uint32_t key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key int
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash7(int key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uintptr_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash8(uintptr_t key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key long
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash9(long key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key uint64_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash10(uint64_t key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key int64_t
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash11(int64_t key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key float
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash12(float key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key double
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash13(double key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QChar*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash19(void* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash20(char* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key const char*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash22(const char* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key const char*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash23(const char* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QBitArray*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash24(void* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key char*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash25(char* key, uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qhashfunctions.html#qHash)
///
/// @param key QKeyCombination*
/// @param seed uintptr_t
///
uintptr_t q_qhashfunctions_q_hash26(void* key, uintptr_t seed);

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
QHashSeed* q_hashseed_new(void* other);

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
/// @param d uintptr_t
///
QHashSeed* q_hashseed_new4(uintptr_t d);

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
/// @param self QHashSeed*
///
uintptr_t q_hashseed_to_unsigned_long(void* self);

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
