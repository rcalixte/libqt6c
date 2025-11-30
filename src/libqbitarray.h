#pragma once
#ifndef SRC_QT6C_LIBQBITARRAY_H
#define SRC_QT6C_LIBQBITARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbitarray.html

/// q_bitarray_new constructs a new QBitArray object.
///
QBitArray* q_bitarray_new();

/// q_bitarray_new2 constructs a new QBitArray object.
///
/// @param size int64_t
QBitArray* q_bitarray_new2(int64_t size);

/// q_bitarray_new3 constructs a new QBitArray object.
///
/// @param other QBitArray*
QBitArray* q_bitarray_new3(void* other);

/// q_bitarray_new4 constructs a new QBitArray object.
///
/// @param size int64_t
/// @param val bool
QBitArray* q_bitarray_new4(int64_t size, bool val);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-eq)
///
/// @param self QBitArray*
/// @param other QBitArray*
void q_bitarray_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#swap)
///
/// @param self QBitArray*
/// @param other QBitArray*
void q_bitarray_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#size)
///
/// @param self QBitArray*
int64_t q_bitarray_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// @param self QBitArray*
int64_t q_bitarray_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// @param self QBitArray*
/// @param on bool
int64_t q_bitarray_count2(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
///
/// @param self QBitArray*
bool q_bitarray_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isNull)
///
/// @param self QBitArray*
bool q_bitarray_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#resize)
///
/// @param self QBitArray*
/// @param size int64_t
void q_bitarray_resize(void* self, int64_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#detach)
///
/// @param self QBitArray*
void q_bitarray_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
///
/// @param self QBitArray*
bool q_bitarray_is_detached(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clear)
///
/// @param self QBitArray*
void q_bitarray_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#testBit)
///
/// @param self QBitArray*
/// @param i int64_t
bool q_bitarray_test_bit(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// @param self QBitArray*
/// @param i int64_t
void q_bitarray_set_bit(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// @param self QBitArray*
/// @param i int64_t
/// @param val bool
void q_bitarray_set_bit2(void* self, int64_t i, bool val);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
///
/// @param self QBitArray*
/// @param i int64_t
void q_bitarray_clear_bit(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
///
/// @param self QBitArray*
/// @param i int64_t
bool q_bitarray_toggle_bit(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#at)
///
/// @param self QBitArray*
/// @param i int64_t
bool q_bitarray_at(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
///
/// @param self QBitArray*
/// @param i int64_t
QBitRef* q_bitarray_operator_subscript(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
///
/// @param self QBitArray*
/// @param i int64_t
bool q_bitarray_operator_subscript2(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-and-eq)
///
/// @param self QBitArray*
/// @param param1 QBitArray*
void q_bitarray_operator_bitwise_and_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-7c-eq)
///
/// @param self QBitArray*
/// @param param1 QBitArray*
void q_bitarray_operator_bitwise_or_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5e-eq)
///
/// @param self QBitArray*
/// @param param1 QBitArray*
void q_bitarray_operator_bitwise_not_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// @param self QBitArray*
/// @param aval bool
bool q_bitarray_fill(void* self, bool aval);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// @param self QBitArray*
/// @param val bool
/// @param first int64_t
/// @param last int64_t
void q_bitarray_fill2(void* self, bool val, int64_t first, int64_t last);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#truncate)
///
/// @param self QBitArray*
/// @param pos int64_t
void q_bitarray_truncate(void* self, int64_t pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#bits)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QBitArray*
const char* q_bitarray_bits(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
///
/// @param data const char*
/// @param lenVal int64_t
QBitArray* q_bitarray_from_bits(const char* data, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// @param self QBitArray*
/// @param endianness enum QSysInfo__Endian
uint32_t q_bitarray_to_u_int32(void* self, int32_t endianness);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// @param self QBitArray*
/// @param aval bool
/// @param asize int64_t
bool q_bitarray_fill22(void* self, bool aval, int64_t asize);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// @param self QBitArray*
/// @param endianness enum QSysInfo__Endian
/// @param ok bool*
uint32_t q_bitarray_to_u_int322(void* self, int32_t endianness, bool* ok);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#dtor.QBitArray)
///
/// Delete this object from C++ memory.
///
/// @param self QBitArray*
void q_bitarray_delete(void* self);

/// https://doc.qt.io/qt-6/qbitref.html

/// q_bitref_new constructs a new QBitRef object.
///
/// @param other QBitRef*
QBitRef* q_bitref_new(void* other);

/// q_bitref_new2 constructs a new QBitRef object.
///
/// @param param1 QBitRef*
QBitRef* q_bitref_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator)
///
/// @param self QBitRef*
bool q_bitref_to_bool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-not)
///
/// @param self QBitRef*
bool q_bitref_operator_not(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
///
/// @param self QBitRef*
/// @param val QBitRef*
void q_bitref_operator_assign(void* self, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
///
/// @param self QBitRef*
/// @param val bool
void q_bitref_operator_assign2(void* self, bool val);

/// [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#dtor.QBitRef)
///
/// Delete this object from C++ memory.
///
/// @param self QBitRef*
void q_bitref_delete(void* self);

#endif
