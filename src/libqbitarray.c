#include "libqbitarray.hpp"
#include "libqbitarray.h"

/// https://doc.qt.io/qt-6/qbitarray.html

/// q_bitarray_new constructs a new QBitArray object.
///
///
QBitArray* q_bitarray_new() {
    return QBitArray_new();
}

/// q_bitarray_new2 constructs a new QBitArray object.
///
/// ``` int64_t size ```
QBitArray* q_bitarray_new2(int64_t size) {
    return QBitArray_new2(size);
}

/// q_bitarray_new3 constructs a new QBitArray object.
///
/// ``` QBitArray* other ```
QBitArray* q_bitarray_new3(void* other) {
    return QBitArray_new3((QBitArray*)other);
}

/// q_bitarray_new4 constructs a new QBitArray object.
///
/// ``` int64_t size, bool val ```
QBitArray* q_bitarray_new4(int64_t size, bool val) {
    return QBitArray_new4(size, val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator=)
///
/// ``` QBitArray* self, QBitArray* other ```
void q_bitarray_operator_assign(void* self, void* other) {
    QBitArray_OperatorAssign((QBitArray*)self, (QBitArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#swap)
///
/// ``` QBitArray* self, QBitArray* other ```
void q_bitarray_swap(void* self, void* other) {
    QBitArray_Swap((QBitArray*)self, (QBitArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#size)
///
/// ``` QBitArray* self ```
int64_t q_bitarray_size(void* self) {
    return QBitArray_Size((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// ``` QBitArray* self ```
int64_t q_bitarray_count(void* self) {
    return QBitArray_Count((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
///
/// ``` QBitArray* self, bool on ```
int64_t q_bitarray_count_with_on(void* self, bool on) {
    return QBitArray_CountWithOn((QBitArray*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_empty(void* self) {
    return QBitArray_IsEmpty((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isNull)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_null(void* self) {
    return QBitArray_IsNull((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#resize)
///
/// ``` QBitArray* self, int64_t size ```
void q_bitarray_resize(void* self, int64_t size) {
    QBitArray_Resize((QBitArray*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#detach)
///
/// ``` QBitArray* self ```
void q_bitarray_detach(void* self) {
    QBitArray_Detach((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
///
/// ``` QBitArray* self ```
bool q_bitarray_is_detached(void* self) {
    return QBitArray_IsDetached((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clear)
///
/// ``` QBitArray* self ```
void q_bitarray_clear(void* self) {
    QBitArray_Clear((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#testBit)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_test_bit(void* self, int64_t i) {
    return QBitArray_TestBit((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// ``` QBitArray* self, int64_t i ```
void q_bitarray_set_bit(void* self, int64_t i) {
    QBitArray_SetBit((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
///
/// ``` QBitArray* self, int64_t i, bool val ```
void q_bitarray_set_bit2(void* self, int64_t i, bool val) {
    QBitArray_SetBit2((QBitArray*)self, i, val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
///
/// ``` QBitArray* self, int64_t i ```
void q_bitarray_clear_bit(void* self, int64_t i) {
    QBitArray_ClearBit((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_toggle_bit(void* self, int64_t i) {
    return QBitArray_ToggleBit((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#at)
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_at(void* self, int64_t i) {
    return QBitArray_At((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator[])
///
/// ``` QBitArray* self, int64_t i ```
QBitRef* q_bitarray_operator_subscript(void* self, int64_t i) {
    return QBitArray_OperatorSubscript((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator[])
///
/// ``` QBitArray* self, int64_t i ```
bool q_bitarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QBitArray_OperatorSubscriptWithQsizetype((QBitArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator&=)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_and_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseAndAssign((QBitArray*)self, (QBitArray*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator|=)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_or_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseOrAssign((QBitArray*)self, (QBitArray*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator^=)
///
/// ``` QBitArray* self, QBitArray* param1 ```
void q_bitarray_operator_bitwise_not_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseNotAssign((QBitArray*)self, (QBitArray*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator==)
///
/// ``` QBitArray* self, QBitArray* other ```
bool q_bitarray_operator_equal(void* self, void* other) {
    return QBitArray_OperatorEqual((QBitArray*)self, (QBitArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator!=)
///
/// ``` QBitArray* self, QBitArray* other ```
bool q_bitarray_operator_not_equal(void* self, void* other) {
    return QBitArray_OperatorNotEqual((QBitArray*)self, (QBitArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool val ```
bool q_bitarray_fill(void* self, bool val) {
    return QBitArray_Fill((QBitArray*)self, val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool val, int64_t first, int64_t last ```
void q_bitarray_fill2(void* self, bool val, int64_t first, int64_t last) {
    QBitArray_Fill2((QBitArray*)self, val, first, last);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#truncate)
///
/// ``` QBitArray* self, int64_t pos ```
void q_bitarray_truncate(void* self, int64_t pos) {
    QBitArray_Truncate((QBitArray*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#bits)
///
/// ``` QBitArray* self ```
const char* q_bitarray_bits(void* self) {
    return QBitArray_Bits((QBitArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
///
/// ``` const char* data, int64_t lenVal ```
QBitArray* q_bitarray_from_bits(const char* data, int64_t lenVal) {
    return QBitArray_FromBits(data, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// ``` QBitArray* self, enum QSysInfo__Endian endianness ```
uint32_t q_bitarray_to_u_int32(void* self, int64_t endianness) {
    return QBitArray_ToUInt32((QBitArray*)self, endianness);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
///
/// ``` QBitArray* self, bool val, int64_t size ```
bool q_bitarray_fill22(void* self, bool val, int64_t size) {
    return QBitArray_Fill22((QBitArray*)self, val, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
///
/// ``` QBitArray* self, enum QSysInfo__Endian endianness, bool* ok ```
uint32_t q_bitarray_to_u_int322(void* self, int64_t endianness, bool* ok) {
    return QBitArray_ToUInt322((QBitArray*)self, endianness, (bool*)ok);
}

/// Delete this object from C++ memory.
///
/// ``` QBitArray* self ```
void q_bitarray_delete(void* self) {
    QBitArray_Delete((QBitArray*)(self));
}

/// https://doc.qt.io/qt-6/qbitref.html

/// q_bitref_new constructs a new QBitRef object.
///
/// ``` QBitRef* other ```
QBitRef* q_bitref_new(void* other) {
    return QBitRef_new((QBitRef*)other);
}

/// q_bitref_new2 constructs a new QBitRef object.
///
/// ``` QBitRef* param1 ```
QBitRef* q_bitref_new2(void* param1) {
    return QBitRef_new2((QBitRef*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator bool)
///
/// ``` QBitRef* self ```
bool q_bitref_to_bool(void* self) {
    return QBitRef_ToBool((QBitRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator!)
///
/// ``` QBitRef* self ```
bool q_bitref_operator_not(void* self) {
    return QBitRef_OperatorNot((QBitRef*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator=)
///
/// ``` QBitRef* self, QBitRef* val ```
void q_bitref_operator_assign(void* self, void* val) {
    QBitRef_OperatorAssign((QBitRef*)self, (QBitRef*)val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator=)
///
/// ``` QBitRef* self, bool val ```
void q_bitref_operator_assign_with_val(void* self, bool val) {
    QBitRef_OperatorAssignWithVal((QBitRef*)self, val);
}

/// Delete this object from C++ memory.
///
/// ``` QBitRef* self ```
void q_bitref_delete(void* self) {
    QBitRef_Delete((QBitRef*)(self));
}