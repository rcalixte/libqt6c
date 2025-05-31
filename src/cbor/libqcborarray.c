#include "libqcborvalue.hpp"
#include "../libqjsonarray.hpp"
#include <string.h>
#include "libqcborarray.hpp"
#include "libqcborarray.h"

QCborArray* q_cborarray_new() {
    return QCborArray_new();
}

QCborArray* q_cborarray_new2(void* other) {
    return QCborArray_new2((QCborArray*)other);
}

void q_cborarray_operator_assign(void* self, void* other) {
    QCborArray_OperatorAssign((QCborArray*)self, (QCborArray*)other);
}

void q_cborarray_swap(void* self, void* other) {
    QCborArray_Swap((QCborArray*)self, (QCborArray*)other);
}

QCborValue* q_cborarray_to_cbor_value(void* self) {
    return QCborArray_ToCborValue((QCborArray*)self);
}

int64_t q_cborarray_size(void* self) {
    return QCborArray_Size((QCborArray*)self);
}

bool q_cborarray_is_empty(void* self) {
    return QCborArray_IsEmpty((QCborArray*)self);
}

void q_cborarray_clear(void* self) {
    QCborArray_Clear((QCborArray*)self);
}

QCborValue* q_cborarray_at(void* self, int64_t i) {
    return QCborArray_At((QCborArray*)self, i);
}

QCborValue* q_cborarray_first(void* self) {
    return QCborArray_First((QCborArray*)self);
}

QCborValue* q_cborarray_last(void* self) {
    return QCborArray_Last((QCborArray*)self);
}

const QCborValue* q_cborarray_operator_subscript(void* self, int64_t i) {
    return QCborArray_OperatorSubscript((QCborArray*)self, i);
}

QCborValueRef* q_cborarray_first2(void* self) {
    return QCborArray_First2((QCborArray*)self);
}

QCborValueRef* q_cborarray_last2(void* self) {
    return QCborArray_Last2((QCborArray*)self);
}

QCborValueRef* q_cborarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QCborArray_OperatorSubscriptWithQsizetype((QCborArray*)self, i);
}

void q_cborarray_insert(void* self, int64_t i, void* value) {
    QCborArray_Insert((QCborArray*)self, i, (QCborValue*)value);
}

void q_cborarray_prepend(void* self, void* value) {
    QCborArray_Prepend((QCborArray*)self, (QCborValue*)value);
}

void q_cborarray_append(void* self, void* value) {
    QCborArray_Append((QCborArray*)self, (QCborValue*)value);
}

QCborValue* q_cborarray_extract(void* self, void* it) {
    return QCborArray_Extract((QCborArray*)self, (QCborArray__ConstIterator*)it);
}

QCborValue* q_cborarray_extract_with_it(void* self, void* it) {
    return QCborArray_ExtractWithIt((QCborArray*)self, (QCborArray__Iterator*)it);
}

void q_cborarray_remove_at(void* self, int64_t i) {
    QCborArray_RemoveAt((QCborArray*)self, i);
}

QCborValue* q_cborarray_take_at(void* self, int64_t i) {
    return QCborArray_TakeAt((QCborArray*)self, i);
}

void q_cborarray_remove_first(void* self) {
    QCborArray_RemoveFirst((QCborArray*)self);
}

void q_cborarray_remove_last(void* self) {
    QCborArray_RemoveLast((QCborArray*)self);
}

QCborValue* q_cborarray_take_first(void* self) {
    return QCborArray_TakeFirst((QCborArray*)self);
}

QCborValue* q_cborarray_take_last(void* self) {
    return QCborArray_TakeLast((QCborArray*)self);
}

bool q_cborarray_contains(void* self, void* value) {
    return QCborArray_Contains((QCborArray*)self, (QCborValue*)value);
}

int32_t q_cborarray_compare(void* self, void* other) {
    return QCborArray_Compare((QCborArray*)self, (QCborArray*)other);
}

bool q_cborarray_operator_equal(void* self, void* other) {
    return QCborArray_OperatorEqual((QCborArray*)self, (QCborArray*)other);
}

bool q_cborarray_operator_not_equal(void* self, void* other) {
    return QCborArray_OperatorNotEqual((QCborArray*)self, (QCborArray*)other);
}

bool q_cborarray_operator_lesser(void* self, void* other) {
    return QCborArray_OperatorLesser((QCborArray*)self, (QCborArray*)other);
}

QCborArray__Iterator* q_cborarray_begin(void* self) {
    return QCborArray_Begin((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_const_begin(void* self) {
    return QCborArray_ConstBegin((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_begin2(void* self) {
    return QCborArray_Begin2((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_cbegin(void* self) {
    return QCborArray_Cbegin((QCborArray*)self);
}

QCborArray__Iterator* q_cborarray_end(void* self) {
    return QCborArray_End((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_const_end(void* self) {
    return QCborArray_ConstEnd((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_end2(void* self) {
    return QCborArray_End2((QCborArray*)self);
}

QCborArray__ConstIterator* q_cborarray_cend(void* self) {
    return QCborArray_Cend((QCborArray*)self);
}

QCborArray__Iterator* q_cborarray_insert2(void* self, void* before, void* value) {
    return QCborArray_Insert2((QCborArray*)self, (QCborArray__Iterator*)before, (QCborValue*)value);
}

QCborArray__Iterator* q_cborarray_insert3(void* self, void* before, void* value) {
    return QCborArray_Insert3((QCborArray*)self, (QCborArray__ConstIterator*)before, (QCborValue*)value);
}

QCborArray__Iterator* q_cborarray_erase(void* self, void* it) {
    return QCborArray_Erase((QCborArray*)self, (QCborArray__Iterator*)it);
}

QCborArray__Iterator* q_cborarray_erase_with_it(void* self, void* it) {
    return QCborArray_EraseWithIt((QCborArray*)self, (QCborArray__ConstIterator*)it);
}

void q_cborarray_push_back(void* self, void* t) {
    QCborArray_PushBack((QCborArray*)self, (QCborValue*)t);
}

void q_cborarray_push_front(void* self, void* t) {
    QCborArray_PushFront((QCborArray*)self, (QCborValue*)t);
}

void q_cborarray_pop_front(void* self) {
    QCborArray_PopFront((QCborArray*)self);
}

void q_cborarray_pop_back(void* self) {
    QCborArray_PopBack((QCborArray*)self);
}

bool q_cborarray_empty(void* self) {
    return QCborArray_Empty((QCborArray*)self);
}

QCborArray* q_cborarray_operator_plus(void* self, void* v) {
    return QCborArray_OperatorPlus((QCborArray*)self, (QCborValue*)v);
}

QCborArray* q_cborarray_operator_plus_assign(void* self, void* v) {
    return QCborArray_OperatorPlusAssign((QCborArray*)self, (QCborValue*)v);
}

QCborArray* q_cborarray_operator_shift_left(void* self, void* v) {
    return QCborArray_OperatorShiftLeft((QCborArray*)self, (QCborValue*)v);
}

QCborArray* q_cborarray_from_string_list(const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    return QCborArray_FromStringList(list_list);
}

QCborArray* q_cborarray_from_json_array(void* array) {
    return QCborArray_FromJsonArray((QJsonArray*)array);
}

QJsonArray* q_cborarray_to_json_array(void* self) {
    return QCborArray_ToJsonArray((QCborArray*)self);
}

void q_cborarray_delete(void* self) {
    QCborArray_Delete((QCborArray*)(self));
}

QCborArray__Iterator* q_cborarray__iterator_new(void* other) {
    return QCborArray__Iterator_new((QCborArray__Iterator*)other);
}

QCborArray__Iterator* q_cborarray__iterator_new2() {
    return QCborArray__Iterator_new2();
}

QCborArray__Iterator* q_cborarray__iterator_new3(void* param1) {
    return QCborArray__Iterator_new3((QCborArray__Iterator*)param1);
}

void q_cborarray__iterator_operator_assign(void* self, void* other) {
    QCborArray__Iterator_OperatorAssign((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

QCborValueRef* q_cborarray__iterator_operator_multiply(void* self) {
    return QCborArray__Iterator_OperatorMultiply((QCborArray__Iterator*)self);
}

QCborValueRef* q_cborarray__iterator_operator_minus_greater(void* self) {
    return QCborArray__Iterator_OperatorMinusGreater((QCborArray__Iterator*)self);
}

const QCborValueConstRef* q_cborarray__iterator_operator_minus_greater2(void* self) {
    return QCborArray__Iterator_OperatorMinusGreater2((QCborArray__Iterator*)self);
}

QCborValueRef* q_cborarray__iterator_operator_subscript(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorSubscript((QCborArray__Iterator*)self, j);
}

bool q_cborarray__iterator_operator_equal(void* self, void* o) {
    return QCborArray__Iterator_OperatorEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)o);
}

bool q_cborarray__iterator_operator_not_equal(void* self, void* o) {
    return QCborArray__Iterator_OperatorNotEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)o);
}

bool q_cborarray__iterator_operator_lesser(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesser((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserOrEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__iterator_operator_greater(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreater((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__iterator_operator_greater_or_equal(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterOrEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__iterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)o);
}

bool q_cborarray__iterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)o);
}

bool q_cborarray__iterator_operator_lesser_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserOrEqualWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__iterator_operator_greater_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterOrEqualWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus(void* self) {
    return QCborArray__Iterator_OperatorPlusPlus((QCborArray__Iterator*)self);
}

QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborArray__Iterator_OperatorPlusPlusWithInt((QCborArray__Iterator*)self, param1);
}

QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus(void* self) {
    return QCborArray__Iterator_OperatorMinusMinus((QCborArray__Iterator*)self);
}

QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborArray__Iterator_OperatorMinusMinusWithInt((QCborArray__Iterator*)self, param1);
}

QCborArray__Iterator* q_cborarray__iterator_operator_plus_assign(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorPlusAssign((QCborArray__Iterator*)self, j);
}

QCborArray__Iterator* q_cborarray__iterator_operator_minus_assign(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorMinusAssign((QCborArray__Iterator*)self, j);
}

QCborArray__Iterator* q_cborarray__iterator_operator_plus(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorPlus((QCborArray__Iterator*)self, j);
}

QCborArray__Iterator* q_cborarray__iterator_operator_minus(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorMinus((QCborArray__Iterator*)self, j);
}

int64_t q_cborarray__iterator_operator_minus_with_q_cbor_array_iterator(void* self, void* j) {
    return QCborArray__Iterator_OperatorMinusWithQCborArrayIterator((QCborArray__Iterator*)self, (QCborArray__Iterator*)j);
}

void q_cborarray__iterator_delete(void* self) {
    QCborArray__Iterator_Delete((QCborArray__Iterator*)(self));
}

QCborArray__ConstIterator* q_cborarray__constiterator_new(void* other) {
    return QCborArray__ConstIterator_new((QCborArray__ConstIterator*)other);
}

QCborArray__ConstIterator* q_cborarray__constiterator_new2() {
    return QCborArray__ConstIterator_new2();
}

QCborArray__ConstIterator* q_cborarray__constiterator_new3(void* param1) {
    return QCborArray__ConstIterator_new3((QCborArray__ConstIterator*)param1);
}

void q_cborarray__constiterator_operator_assign(void* self, void* other) {
    QCborArray__ConstIterator_OperatorAssign((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

QCborValueConstRef* q_cborarray__constiterator_operator_multiply(void* self) {
    return QCborArray__ConstIterator_OperatorMultiply((QCborArray__ConstIterator*)self);
}

const QCborValueConstRef* q_cborarray__constiterator_operator_minus_greater(void* self) {
    return QCborArray__ConstIterator_OperatorMinusGreater((QCborArray__ConstIterator*)self);
}

QCborValueConstRef* q_cborarray__constiterator_operator_subscript(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorSubscript((QCborArray__ConstIterator*)self, j);
}

bool q_cborarray__constiterator_operator_equal(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)o);
}

bool q_cborarray__constiterator_operator_not_equal(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorNotEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)o);
}

bool q_cborarray__constiterator_operator_lesser(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesser((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__constiterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserOrEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__constiterator_operator_greater(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreater((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__constiterator_operator_greater_or_equal(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterOrEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

bool q_cborarray__constiterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)o);
}

bool q_cborarray__constiterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)o);
}

bool q_cborarray__constiterator_operator_lesser_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__constiterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserOrEqualWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__constiterator_operator_greater_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

bool q_cborarray__constiterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus(void* self) {
    return QCborArray__ConstIterator_OperatorPlusPlus((QCborArray__ConstIterator*)self);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborArray__ConstIterator_OperatorPlusPlusWithInt((QCborArray__ConstIterator*)self, param1);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus(void* self) {
    return QCborArray__ConstIterator_OperatorMinusMinus((QCborArray__ConstIterator*)self);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborArray__ConstIterator_OperatorMinusMinusWithInt((QCborArray__ConstIterator*)self, param1);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_assign(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorPlusAssign((QCborArray__ConstIterator*)self, j);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_assign(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorMinusAssign((QCborArray__ConstIterator*)self, j);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorPlus((QCborArray__ConstIterator*)self, j);
}

QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorMinus((QCborArray__ConstIterator*)self, j);
}

int64_t q_cborarray__constiterator_operator_minus_with_q_cbor_array_const_iterator(void* self, void* j) {
    return QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)j);
}

void q_cborarray__constiterator_delete(void* self) {
    QCborArray__ConstIterator_Delete((QCborArray__ConstIterator*)(self));
}
