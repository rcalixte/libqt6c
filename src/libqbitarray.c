#include "libqbitarray.hpp"
#include "libqbitarray.h"

QBitArray* q_bitarray_new() {
    return QBitArray_new();
}

QBitArray* q_bitarray_new2(int64_t size) {
    return QBitArray_new2(size);
}

QBitArray* q_bitarray_new3(void* other) {
    return QBitArray_new3((QBitArray*)other);
}

QBitArray* q_bitarray_new4(int64_t size, bool val) {
    return QBitArray_new4(size, val);
}

void q_bitarray_operator_assign(void* self, void* other) {
    QBitArray_OperatorAssign((QBitArray*)self, (QBitArray*)other);
}

void q_bitarray_swap(void* self, void* other) {
    QBitArray_Swap((QBitArray*)self, (QBitArray*)other);
}

int64_t q_bitarray_size(void* self) {
    return QBitArray_Size((QBitArray*)self);
}

int64_t q_bitarray_count(void* self) {
    return QBitArray_Count((QBitArray*)self);
}

int64_t q_bitarray_count_with_on(void* self, bool on) {
    return QBitArray_CountWithOn((QBitArray*)self, on);
}

bool q_bitarray_is_empty(void* self) {
    return QBitArray_IsEmpty((QBitArray*)self);
}

bool q_bitarray_is_null(void* self) {
    return QBitArray_IsNull((QBitArray*)self);
}

void q_bitarray_resize(void* self, int64_t size) {
    QBitArray_Resize((QBitArray*)self, size);
}

void q_bitarray_detach(void* self) {
    QBitArray_Detach((QBitArray*)self);
}

bool q_bitarray_is_detached(void* self) {
    return QBitArray_IsDetached((QBitArray*)self);
}

void q_bitarray_clear(void* self) {
    QBitArray_Clear((QBitArray*)self);
}

bool q_bitarray_test_bit(void* self, int64_t i) {
    return QBitArray_TestBit((QBitArray*)self, i);
}

void q_bitarray_set_bit(void* self, int64_t i) {
    QBitArray_SetBit((QBitArray*)self, i);
}

void q_bitarray_set_bit2(void* self, int64_t i, bool val) {
    QBitArray_SetBit2((QBitArray*)self, i, val);
}

void q_bitarray_clear_bit(void* self, int64_t i) {
    QBitArray_ClearBit((QBitArray*)self, i);
}

bool q_bitarray_toggle_bit(void* self, int64_t i) {
    return QBitArray_ToggleBit((QBitArray*)self, i);
}

bool q_bitarray_at(void* self, int64_t i) {
    return QBitArray_At((QBitArray*)self, i);
}

QBitRef* q_bitarray_operator_subscript(void* self, int64_t i) {
    return QBitArray_OperatorSubscript((QBitArray*)self, i);
}

bool q_bitarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QBitArray_OperatorSubscriptWithQsizetype((QBitArray*)self, i);
}

void q_bitarray_operator_bitwise_and_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseAndAssign((QBitArray*)self, (QBitArray*)param1);
}

void q_bitarray_operator_bitwise_or_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseOrAssign((QBitArray*)self, (QBitArray*)param1);
}

void q_bitarray_operator_bitwise_not_assign(void* self, void* param1) {
    QBitArray_OperatorBitwiseNotAssign((QBitArray*)self, (QBitArray*)param1);
}

bool q_bitarray_operator_equal(void* self, void* other) {
    return QBitArray_OperatorEqual((QBitArray*)self, (QBitArray*)other);
}

bool q_bitarray_operator_not_equal(void* self, void* other) {
    return QBitArray_OperatorNotEqual((QBitArray*)self, (QBitArray*)other);
}

bool q_bitarray_fill(void* self, bool val) {
    return QBitArray_Fill((QBitArray*)self, val);
}

void q_bitarray_fill2(void* self, bool val, int64_t first, int64_t last) {
    QBitArray_Fill2((QBitArray*)self, val, first, last);
}

void q_bitarray_truncate(void* self, int64_t pos) {
    QBitArray_Truncate((QBitArray*)self, pos);
}

const char* q_bitarray_bits(void* self) {
    return QBitArray_Bits((QBitArray*)self);
}

QBitArray* q_bitarray_from_bits(const char* data, int64_t lenVal) {
    return QBitArray_FromBits(data, lenVal);
}

uint32_t q_bitarray_to_u_int32(void* self, int64_t endianness) {
    return QBitArray_ToUInt32((QBitArray*)self, endianness);
}

bool q_bitarray_fill22(void* self, bool val, int64_t size) {
    return QBitArray_Fill22((QBitArray*)self, val, size);
}

uint32_t q_bitarray_to_u_int322(void* self, int64_t endianness, bool* ok) {
    return QBitArray_ToUInt322((QBitArray*)self, endianness, (bool*)ok);
}

void q_bitarray_delete(void* self) {
    QBitArray_Delete((QBitArray*)(self));
}

QBitRef* q_bitref_new(void* other) {
    return QBitRef_new((QBitRef*)other);
}

QBitRef* q_bitref_new2(void* param1) {
    return QBitRef_new2((QBitRef*)param1);
}

bool q_bitref_to_bool(void* self) {
    return QBitRef_ToBool((QBitRef*)self);
}

bool q_bitref_operator_not(void* self) {
    return QBitRef_OperatorNot((QBitRef*)self);
}

void q_bitref_operator_assign(void* self, void* val) {
    QBitRef_OperatorAssign((QBitRef*)self, (QBitRef*)val);
}

void q_bitref_operator_assign_with_val(void* self, bool val) {
    QBitRef_OperatorAssignWithVal((QBitRef*)self, val);
}

void q_bitref_delete(void* self) {
    QBitRef_Delete((QBitRef*)(self));
}
