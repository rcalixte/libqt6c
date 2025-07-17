#pragma once
#ifndef SRCQT6C_LIBQBITARRAY_H
#define SRCQT6C_LIBQBITARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbitarray.html

/// q_bitarray_new constructs a new QBitArray object.
///
///
QBitArray* q_bitarray_new();

/// q_bitarray_new2 constructs a new QBitArray object.
///
/// ``` int64_t size ```
QBitArray* q_bitarray_new2(int64_t size);

/// q_bitarray_new3 constructs a new QBitArray object.
///
/// ``` QBitArray* other ```
QBitArray* q_bitarray_new3(void* other);

/// q_bitarray_new4 constructs a new QBitArray object.
///
/// ``` int64_t size, bool val ```
QBitArray* q_bitarray_new4(int64_t size, bool val);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-eq)
///
/// ``` QBitArray* self, QBitArray* other ```
void q_bitarray_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#swap)
///
/// ``` QBitArray* self, QBitArray* other ```
void q_bitarray_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#size)
///
/// ``` QBitArray* self ```
int64_t q_bitarray_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// ``` QBitArray* self ```
int64_t q_bitarray_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// ``` QBitArray* self, bool on ```
int64_t q_bitarray_count2(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isNull)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#resize)
///
/// ``` QBitArray* self, int64_t size ```
void q_bitarray_resize(void* self, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#detach)
///
/// ``` QBitArray* self ```
void q_bitarray_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clear)
///
/// ``` QBitArray* self ```
void q_bitarray_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#testBit)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_test_bit(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// ``` QBitArray* self, int64_t i ```
void q_bitarray_set_bit(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// ``` QBitArray* self, int64_t i, bool val ```
void q_bitarray_set_bit2(void* self, int64_t i, bool val);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
///
/// ``` QBitArray* self, int64_t i ```
void q_bitarray_clear_bit(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_toggle_bit(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#at)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_at(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
///
/// ``` QBitArray* self, int64_t i ```
QBitRef* q_bitarray_operator_subscript(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_operator_subscript2(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-and-eq)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_and_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-7c-eq)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_or_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator-5e-eq)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_not_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool aval ```
bool q_bitarray_fill(void* self, bool aval);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool val, int64_t first, int64_t last ```
void q_bitarray_fill2(void* self, bool val, int64_t first, int64_t last);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#truncate)
///
/// ``` QBitArray* self, int64_t pos ```
void q_bitarray_truncate(void* self, int64_t pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#bits)
///
/// ``` QBitArray* self ```
const char* q_bitarray_bits(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
///
/// ``` const char* data, int64_t lenVal ```
QBitArray* q_bitarray_from_bits(const char* data, int64_t lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// ``` QBitArray* self, enum QSysInfo__Endian endianness ```
uint32_t q_bitarray_to_u_int32(void* self, int64_t endianness);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool aval, int64_t asize ```
bool q_bitarray_fill22(void* self, bool aval, int64_t asize);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// ``` QBitArray* self, enum QSysInfo__Endian endianness, bool* ok ```
uint32_t q_bitarray_to_u_int322(void* self, int64_t endianness, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#dtor.QBitArray)
///
/// Delete this object from C++ memory.
///
/// ``` QBitArray* self ```
void q_bitarray_delete(void* self);

/// https://doc.qt.io/qt-6/qbitref.html

/// q_bitref_new constructs a new QBitRef object.
///
/// ``` QBitRef* other ```
QBitRef* q_bitref_new(void* other);

/// q_bitref_new2 constructs a new QBitRef object.
///
/// ``` QBitRef* param1 ```
QBitRef* q_bitref_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator)
///
/// ``` QBitRef* self ```
bool q_bitref_to_bool(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator-not)
///
/// ``` QBitRef* self ```
bool q_bitref_operator_not(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
///
/// ``` QBitRef* self, QBitRef* val ```
void q_bitref_operator_assign(void* self, void* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
///
/// ``` QBitRef* self, bool val ```
void q_bitref_operator_assign2(void* self, bool val);

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#dtor.QBitRef)
///
/// Delete this object from C++ memory.
///
/// ``` QBitRef* self ```
void q_bitref_delete(void* self);

#endif
