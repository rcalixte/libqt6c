#include "libqcborvalue.hpp"
#include "../libqjsonarray.hpp"
#include <string.h>
#include "libqcborarray.hpp"
#include "libqcborarray.h"

/// https://doc.qt.io/qt-6/qcborarray.html

/// q_cborarray_new constructs a new QCborArray object.
///
///
QCborArray* q_cborarray_new() {
    return QCborArray_new();
}

/// q_cborarray_new2 constructs a new QCborArray object.
///
/// ``` QCborArray* other ```
QCborArray* q_cborarray_new2(void* other) {
    return QCborArray_new2((QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator=)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_operator_assign(void* self, void* other) {
    QCborArray_OperatorAssign((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#swap)
///
/// ``` QCborArray* self, QCborArray* other ```
void q_cborarray_swap(void* self, void* other) {
    QCborArray_Swap((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_to_cbor_value(void* self) {
    return QCborArray_ToCborValue((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#size)
///
/// ``` QCborArray* self ```
int64_t q_cborarray_size(void* self) {
    return QCborArray_Size((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
///
/// ``` QCborArray* self ```
bool q_cborarray_is_empty(void* self) {
    return QCborArray_IsEmpty((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#clear)
///
/// ``` QCborArray* self ```
void q_cborarray_clear(void* self) {
    QCborArray_Clear((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#at)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_at(void* self, int64_t i) {
    return QCborArray_At((QCborArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_first(void* self) {
    return QCborArray_First((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_last(void* self) {
    return QCborArray_Last((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_operator_subscript(void* self, int64_t i) {
    return QCborArray_OperatorSubscript((QCborArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_first2(void* self) {
    return QCborArray_First2((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
///
/// ``` QCborArray* self ```
QCborValueRef* q_cborarray_last2(void* self) {
    return QCborArray_Last2((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
///
/// ``` QCborArray* self, int64_t i ```
QCborValueRef* q_cborarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QCborArray_OperatorSubscriptWithQsizetype((QCborArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, int64_t i, QCborValue* value ```
void q_cborarray_insert(void* self, int64_t i, void* value) {
    QCborArray_Insert((QCborArray*)self, i, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#prepend)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_prepend(void* self, void* value) {
    QCborArray_Prepend((QCborArray*)self, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#append)
///
/// ``` QCborArray* self, QCborValue* value ```
void q_cborarray_append(void* self, void* value) {
    QCborArray_Append((QCborArray*)self, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* it ```
QCborValue* q_cborarray_extract(void* self, void* it) {
    return QCborArray_Extract((QCborArray*)self, (QCborArray__ConstIterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#extract)
///
/// ``` QCborArray* self, QCborArray__Iterator* it ```
QCborValue* q_cborarray_extract_with_it(void* self, void* it) {
    return QCborArray_ExtractWithIt((QCborArray*)self, (QCborArray__Iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
///
/// ``` QCborArray* self, int64_t i ```
void q_cborarray_remove_at(void* self, int64_t i) {
    QCborArray_RemoveAt((QCborArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
///
/// ``` QCborArray* self, int64_t i ```
QCborValue* q_cborarray_take_at(void* self, int64_t i) {
    return QCborArray_TakeAt((QCborArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_first(void* self) {
    QCborArray_RemoveFirst((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
///
/// ``` QCborArray* self ```
void q_cborarray_remove_last(void* self) {
    QCborArray_RemoveLast((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_first(void* self) {
    return QCborArray_TakeFirst((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
///
/// ``` QCborArray* self ```
QCborValue* q_cborarray_take_last(void* self) {
    return QCborArray_TakeLast((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#contains)
///
/// ``` QCborArray* self, QCborValue* value ```
bool q_cborarray_contains(void* self, void* value) {
    return QCborArray_Contains((QCborArray*)self, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#compare)
///
/// ``` QCborArray* self, QCborArray* other ```
int32_t q_cborarray_compare(void* self, void* other) {
    return QCborArray_Compare((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator==)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_equal(void* self, void* other) {
    return QCborArray_OperatorEqual((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator!=)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_not_equal(void* self, void* other) {
    return QCborArray_OperatorNotEqual((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<)
///
/// ``` QCborArray* self, QCborArray* other ```
bool q_cborarray_operator_lesser(void* self, void* other) {
    return QCborArray_OperatorLesser((QCborArray*)self, (QCborArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// ``` QCborArray* self ```
QCborArray__Iterator* q_cborarray_begin(void* self) {
    return QCborArray_Begin((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constBegin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_const_begin(void* self) {
    return QCborArray_ConstBegin((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#begin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_begin2(void* self) {
    return QCborArray_Begin2((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cbegin)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_cbegin(void* self) {
    return QCborArray_Cbegin((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// ``` QCborArray* self ```
QCborArray__Iterator* q_cborarray_end(void* self) {
    return QCborArray_End((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#constEnd)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_const_end(void* self) {
    return QCborArray_ConstEnd((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#end)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_end2(void* self) {
    return QCborArray_End2((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#cend)
///
/// ``` QCborArray* self ```
QCborArray__ConstIterator* q_cborarray_cend(void* self) {
    return QCborArray_Cend((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, QCborArray__Iterator* before, QCborValue* value ```
QCborArray__Iterator* q_cborarray_insert2(void* self, void* before, void* value) {
    return QCborArray_Insert2((QCborArray*)self, (QCborArray__Iterator*)before, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* before, QCborValue* value ```
QCborArray__Iterator* q_cborarray_insert3(void* self, void* before, void* value) {
    return QCborArray_Insert3((QCborArray*)self, (QCborArray__ConstIterator*)before, (QCborValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// ``` QCborArray* self, QCborArray__Iterator* it ```
QCborArray__Iterator* q_cborarray_erase(void* self, void* it) {
    return QCborArray_Erase((QCborArray*)self, (QCborArray__Iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#erase)
///
/// ``` QCborArray* self, QCborArray__ConstIterator* it ```
QCborArray__Iterator* q_cborarray_erase_with_it(void* self, void* it) {
    return QCborArray_EraseWithIt((QCborArray*)self, (QCborArray__ConstIterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_back)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_back(void* self, void* t) {
    QCborArray_PushBack((QCborArray*)self, (QCborValue*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_front)
///
/// ``` QCborArray* self, QCborValue* t ```
void q_cborarray_push_front(void* self, void* t) {
    QCborArray_PushFront((QCborArray*)self, (QCborValue*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_front(void* self) {
    QCborArray_PopFront((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
///
/// ``` QCborArray* self ```
void q_cborarray_pop_back(void* self) {
    QCborArray_PopBack((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#empty)
///
/// ``` QCborArray* self ```
bool q_cborarray_empty(void* self) {
    return QCborArray_Empty((QCborArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus(void* self, void* v) {
    return QCborArray_OperatorPlus((QCborArray*)self, (QCborValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+=)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_plus_assign(void* self, void* v) {
    return QCborArray_OperatorPlusAssign((QCborArray*)self, (QCborValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<<)
///
/// ``` QCborArray* self, QCborValue* v ```
QCborArray* q_cborarray_operator_shift_left(void* self, void* v) {
    return QCborArray_OperatorShiftLeft((QCborArray*)self, (QCborValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
///
/// ``` const char* list[] ```
QCborArray* q_cborarray_from_string_list(const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qstrlist(list_qstr, list_len);
    return QCborArray_FromStringList(list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
///
/// ``` QJsonArray* array ```
QCborArray* q_cborarray_from_json_array(void* array) {
    return QCborArray_FromJsonArray((QJsonArray*)array);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
///
/// ``` QCborArray* self ```
QJsonArray* q_cborarray_to_json_array(void* self) {
    return QCborArray_ToJsonArray((QCborArray*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QCborArray* self ```
void q_cborarray_delete(void* self) {
    QCborArray_Delete((QCborArray*)(self));
}

/// https://doc.qt.io/qt-6/qcborarray-iterator.html

/// q_cborarray__iterator_new constructs a new QCborArray::Iterator object.
///
/// ``` QCborArray__Iterator* other ```
QCborArray__Iterator* q_cborarray__iterator_new(void* other) {
    return QCborArray__Iterator_new((QCborArray__Iterator*)other);
}

/// q_cborarray__iterator_new2 constructs a new QCborArray::Iterator object.
///
///
QCborArray__Iterator* q_cborarray__iterator_new2() {
    return QCborArray__Iterator_new2();
}

/// q_cborarray__iterator_new3 constructs a new QCborArray::Iterator object.
///
/// ``` QCborArray__Iterator* param1 ```
QCborArray__Iterator* q_cborarray__iterator_new3(void* param1) {
    return QCborArray__Iterator_new3((QCborArray__Iterator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
void q_cborarray__iterator_operator_assign(void* self, void* other) {
    QCborArray__Iterator_OperatorAssign((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator*)
///
/// ``` QCborArray__Iterator* self ```
QCborValueRef* q_cborarray__iterator_operator_multiply(void* self) {
    return QCborArray__Iterator_OperatorMultiply((QCborArray__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator->)
///
/// ``` QCborArray__Iterator* self ```
QCborValueRef* q_cborarray__iterator_operator_minus_greater(void* self) {
    return QCborArray__Iterator_OperatorMinusGreater((QCborArray__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator->)
///
/// ``` QCborArray__Iterator* self ```
QCborValueConstRef* q_cborarray__iterator_operator_minus_greater2(void* self) {
    return QCborArray__Iterator_OperatorMinusGreater2((QCborArray__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator[])
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborValueRef* q_cborarray__iterator_operator_subscript(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorSubscript((QCborArray__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator==)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* o ```
bool q_cborarray__iterator_operator_equal(void* self, void* o) {
    return QCborArray__Iterator_OperatorEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator!=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* o ```
bool q_cborarray__iterator_operator_not_equal(void* self, void* o) {
    return QCborArray__Iterator_OperatorNotEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_lesser(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesser((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserOrEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_greater(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreater((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>=)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* other ```
bool q_cborarray__iterator_operator_greater_or_equal(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterOrEqual((QCborArray__Iterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator==)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__iterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__Iterator_OperatorEqualWithQCborArrayConstIterator((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator!=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__iterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__Iterator_OperatorNotEqualWithQCborArrayConstIterator((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_lesser_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator<=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorLesserOrEqualWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_greater_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator>=)
///
/// ``` QCborArray__Iterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborArray__Iterator_OperatorGreaterOrEqualWithOther((QCborArray__Iterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator++)
///
/// ``` QCborArray__Iterator* self ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus(void* self) {
    return QCborArray__Iterator_OperatorPlusPlus((QCborArray__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator++)
///
/// ``` QCborArray__Iterator* self, int param1 ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborArray__Iterator_OperatorPlusPlusWithInt((QCborArray__Iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator--)
///
/// ``` QCborArray__Iterator* self ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus(void* self) {
    return QCborArray__Iterator_OperatorMinusMinus((QCborArray__Iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator--)
///
/// ``` QCborArray__Iterator* self, int param1 ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborArray__Iterator_OperatorMinusMinusWithInt((QCborArray__Iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator+=)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus_assign(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorPlusAssign((QCborArray__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-=)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus_assign(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorMinusAssign((QCborArray__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator+)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_plus(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorPlus((QCborArray__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-)
///
/// ``` QCborArray__Iterator* self, int64_t j ```
QCborArray__Iterator* q_cborarray__iterator_operator_minus(void* self, int64_t j) {
    return QCborArray__Iterator_OperatorMinus((QCborArray__Iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__iterator.html#operator-)
///
/// ``` QCborArray__Iterator* self, QCborArray__Iterator* j ```
int64_t q_cborarray__iterator_operator_minus_with_q_cbor_array_iterator(void* self, void* j) {
    return QCborArray__Iterator_OperatorMinusWithQCborArrayIterator((QCborArray__Iterator*)self, (QCborArray__Iterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QCborArray__Iterator* self ```
void q_cborarray__iterator_delete(void* self) {
    QCborArray__Iterator_Delete((QCborArray__Iterator*)(self));
}

/// https://doc.qt.io/qt-6/qcborarray-constiterator.html

/// q_cborarray__constiterator_new constructs a new QCborArray::ConstIterator object.
///
/// ``` QCborArray__ConstIterator* other ```
QCborArray__ConstIterator* q_cborarray__constiterator_new(void* other) {
    return QCborArray__ConstIterator_new((QCborArray__ConstIterator*)other);
}

/// q_cborarray__constiterator_new2 constructs a new QCborArray::ConstIterator object.
///
///
QCborArray__ConstIterator* q_cborarray__constiterator_new2() {
    return QCborArray__ConstIterator_new2();
}

/// q_cborarray__constiterator_new3 constructs a new QCborArray::ConstIterator object.
///
/// ``` QCborArray__ConstIterator* param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_new3(void* param1) {
    return QCborArray__ConstIterator_new3((QCborArray__ConstIterator*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
void q_cborarray__constiterator_operator_assign(void* self, void* other) {
    QCborArray__ConstIterator_OperatorAssign((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator*)
///
/// ``` QCborArray__ConstIterator* self ```
QCborValueConstRef* q_cborarray__constiterator_operator_multiply(void* self) {
    return QCborArray__ConstIterator_OperatorMultiply((QCborArray__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator->)
///
/// ``` QCborArray__ConstIterator* self ```
QCborValueConstRef* q_cborarray__constiterator_operator_minus_greater(void* self) {
    return QCborArray__ConstIterator_OperatorMinusGreater((QCborArray__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator[])
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborValueConstRef* q_cborarray__constiterator_operator_subscript(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorSubscript((QCborArray__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator==)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* o ```
bool q_cborarray__constiterator_operator_equal(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator!=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* o ```
bool q_cborarray__constiterator_operator_not_equal(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorNotEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_lesser(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesser((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_lesser_or_equal(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserOrEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_greater(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreater((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__Iterator* other ```
bool q_cborarray__constiterator_operator_greater_or_equal(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterOrEqual((QCborArray__ConstIterator*)self, (QCborArray__Iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator==)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__constiterator_operator_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorEqualWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator!=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* o ```
bool q_cborarray__constiterator_operator_not_equal_with_q_cbor_array_const_iterator(void* self, void* o) {
    return QCborArray__ConstIterator_OperatorNotEqualWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_lesser_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator<=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorLesserOrEqualWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_greater_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator>=)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* other ```
bool q_cborarray__constiterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QCborArray__ConstIterator_OperatorGreaterOrEqualWithOther((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator++)
///
/// ``` QCborArray__ConstIterator* self ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus(void* self) {
    return QCborArray__ConstIterator_OperatorPlusPlus((QCborArray__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator++)
///
/// ``` QCborArray__ConstIterator* self, int param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_plus_with_int(void* self, int param1) {
    return QCborArray__ConstIterator_OperatorPlusPlusWithInt((QCborArray__ConstIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator--)
///
/// ``` QCborArray__ConstIterator* self ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus(void* self) {
    return QCborArray__ConstIterator_OperatorMinusMinus((QCborArray__ConstIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator--)
///
/// ``` QCborArray__ConstIterator* self, int param1 ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_minus_with_int(void* self, int param1) {
    return QCborArray__ConstIterator_OperatorMinusMinusWithInt((QCborArray__ConstIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator+=)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus_assign(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorPlusAssign((QCborArray__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-=)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus_assign(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorMinusAssign((QCborArray__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator+)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_plus(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorPlus((QCborArray__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-)
///
/// ``` QCborArray__ConstIterator* self, int64_t j ```
QCborArray__ConstIterator* q_cborarray__constiterator_operator_minus(void* self, int64_t j) {
    return QCborArray__ConstIterator_OperatorMinus((QCborArray__ConstIterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborarray__constiterator.html#operator-)
///
/// ``` QCborArray__ConstIterator* self, QCborArray__ConstIterator* j ```
int64_t q_cborarray__constiterator_operator_minus_with_q_cbor_array_const_iterator(void* self, void* j) {
    return QCborArray__ConstIterator_OperatorMinusWithQCborArrayConstIterator((QCborArray__ConstIterator*)self, (QCborArray__ConstIterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QCborArray__ConstIterator* self ```
void q_cborarray__constiterator_delete(void* self) {
    QCborArray__ConstIterator_Delete((QCborArray__ConstIterator*)(self));
}