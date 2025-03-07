#include "libqjsonvalue.hpp"
#include <string.h>
#include "libqjsonarray.hpp"
#include "libqjsonarray.h"

/// https://doc.qt.io/qt-6/qjsonarray.html

/// q_jsonarray_new constructs a new QJsonArray object.
///
///
QJsonArray* q_jsonarray_new() {
    return QJsonArray_new();
}

/// q_jsonarray_new2 constructs a new QJsonArray object.
///
/// ``` QJsonArray* other ```
QJsonArray* q_jsonarray_new2(void* other) {
    return QJsonArray_new2((QJsonArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator=)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_operator_assign(void* self, void* other) {
    QJsonArray_OperatorAssign((QJsonArray*)self, (QJsonArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
///
/// ``` const char* list[] ```
QJsonArray* q_jsonarray_from_string_list(const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qstrlist(list_qstr, list_len);
    return QJsonArray_FromStringList(list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#size)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_size(void* self) {
    return QJsonArray_Size((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#count)
///
/// ``` QJsonArray* self ```
int64_t q_jsonarray_count(void* self) {
    return QJsonArray_Count((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_is_empty(void* self) {
    return QJsonArray_IsEmpty((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#at)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_at(void* self, int64_t i) {
    return QJsonArray_At((QJsonArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#first)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_first(void* self) {
    return QJsonArray_First((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#last)
///
/// ``` QJsonArray* self ```
QJsonValue* q_jsonarray_last(void* self) {
    return QJsonArray_Last((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_prepend(void* self, void* value) {
    QJsonArray_Prepend((QJsonArray*)self, (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#append)
///
/// ``` QJsonArray* self, QJsonValue* value ```
void q_jsonarray_append(void* self, void* value) {
    QJsonArray_Append((QJsonArray*)self, (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
///
/// ``` QJsonArray* self, int64_t i ```
void q_jsonarray_remove_at(void* self, int64_t i) {
    QJsonArray_RemoveAt((QJsonArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_take_at(void* self, int64_t i) {
    return QJsonArray_TakeAt((QJsonArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_first(void* self) {
    QJsonArray_RemoveFirst((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
///
/// ``` QJsonArray* self ```
void q_jsonarray_remove_last(void* self) {
    QJsonArray_RemoveLast((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_insert(void* self, int64_t i, void* value) {
    QJsonArray_Insert((QJsonArray*)self, i, (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#replace)
///
/// ``` QJsonArray* self, int64_t i, QJsonValue* value ```
void q_jsonarray_replace(void* self, int64_t i, void* value) {
    QJsonArray_Replace((QJsonArray*)self, i, (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#contains)
///
/// ``` QJsonArray* self, QJsonValue* element ```
bool q_jsonarray_contains(void* self, void* element) {
    return QJsonArray_Contains((QJsonArray*)self, (QJsonValue*)element);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i) {
    return QJsonArray_OperatorSubscript((QJsonArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
///
/// ``` QJsonArray* self, int64_t i ```
QJsonValue* q_jsonarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonArray_OperatorSubscriptWithQsizetype((QJsonArray*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator==)
///
/// ``` QJsonArray* self, QJsonArray* other ```
bool q_jsonarray_operator_equal(void* self, void* other) {
    return QJsonArray_OperatorEqual((QJsonArray*)self, (QJsonArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator!=)
///
/// ``` QJsonArray* self, QJsonArray* other ```
bool q_jsonarray_operator_not_equal(void* self, void* other) {
    return QJsonArray_OperatorNotEqual((QJsonArray*)self, (QJsonArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
///
/// ``` QJsonArray* self, QJsonArray* other ```
void q_jsonarray_swap(void* self, void* other) {
    QJsonArray_Swap((QJsonArray*)self, (QJsonArray*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// ``` QJsonArray* self ```
QJsonArray__iterator* q_jsonarray_begin(void* self) {
    return QJsonArray_Begin((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_begin2(void* self) {
    return QJsonArray_Begin2((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_const_begin(void* self) {
    return QJsonArray_ConstBegin((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_cbegin(void* self) {
    return QJsonArray_Cbegin((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// ``` QJsonArray* self ```
QJsonArray__iterator* q_jsonarray_end(void* self) {
    return QJsonArray_End((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_end2(void* self) {
    return QJsonArray_End2((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_const_end(void* self) {
    return QJsonArray_ConstEnd((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cend)
///
/// ``` QJsonArray* self ```
QJsonArray__const_iterator* q_jsonarray_cend(void* self) {
    return QJsonArray_Cend((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
///
/// ``` QJsonArray* self, QJsonArray__iterator* before, QJsonValue* value ```
QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, void* value) {
    return QJsonArray_Insert2((QJsonArray*)self, (QJsonArray__iterator*)before, (QJsonValue*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#erase)
///
/// ``` QJsonArray* self, QJsonArray__iterator* it ```
QJsonArray__iterator* q_jsonarray_erase(void* self, void* it) {
    return QJsonArray_Erase((QJsonArray*)self, (QJsonArray__iterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus(void* self, void* v) {
    return QJsonArray_OperatorPlus((QJsonArray*)self, (QJsonValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+=)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v) {
    return QJsonArray_OperatorPlusAssign((QJsonArray*)self, (QJsonValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator<<)
///
/// ``` QJsonArray* self, QJsonValue* v ```
QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v) {
    return QJsonArray_OperatorShiftLeft((QJsonArray*)self, (QJsonValue*)v);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_back(void* self, void* t) {
    QJsonArray_PushBack((QJsonArray*)self, (QJsonValue*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
///
/// ``` QJsonArray* self, QJsonValue* t ```
void q_jsonarray_push_front(void* self, void* t) {
    QJsonArray_PushFront((QJsonArray*)self, (QJsonValue*)t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_front(void* self) {
    QJsonArray_PopFront((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
///
/// ``` QJsonArray* self ```
void q_jsonarray_pop_back(void* self) {
    QJsonArray_PopBack((QJsonArray*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#empty)
///
/// ``` QJsonArray* self ```
bool q_jsonarray_empty(void* self) {
    return QJsonArray_Empty((QJsonArray*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonArray* self ```
void q_jsonarray_delete(void* self) {
    QJsonArray_Delete((QJsonArray*)(self));
}

/// https://doc.qt.io/qt-6/qjsonarray-iterator.html

/// q_jsonarray__iterator_new constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray__iterator* other ```
QJsonArray__iterator* q_jsonarray__iterator_new(void* other) {
    return QJsonArray__iterator_new((QJsonArray__iterator*)other);
}

/// q_jsonarray__iterator_new2 constructs a new QJsonArray::iterator object.
///
///
QJsonArray__iterator* q_jsonarray__iterator_new2() {
    return QJsonArray__iterator_new2();
}

/// q_jsonarray__iterator_new3 constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray* array, int64_t index ```
QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, int64_t index) {
    return QJsonArray__iterator_new3((QJsonArray*)array, index);
}

/// q_jsonarray__iterator_new4 constructs a new QJsonArray::iterator object.
///
/// ``` QJsonArray__iterator* other ```
QJsonArray__iterator* q_jsonarray__iterator_new4(void* other) {
    return QJsonArray__iterator_new4((QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
void q_jsonarray__iterator_operator_assign(void* self, void* other) {
    QJsonArray__iterator_OperatorAssign((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator*)
///
/// ``` QJsonArray__iterator* self ```
QJsonValueRef* q_jsonarray__iterator_operator_multiply(void* self) {
    return QJsonArray__iterator_OperatorMultiply((QJsonArray__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator->)
///
/// ``` QJsonArray__iterator* self ```
QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(void* self) {
    return QJsonArray__iterator_OperatorMinusGreater((QJsonArray__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator->)
///
/// ``` QJsonArray__iterator* self ```
QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self) {
    return QJsonArray__iterator_OperatorMinusGreater2((QJsonArray__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator[])
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonValueRef* q_jsonarray__iterator_operator_subscript(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorSubscript((QJsonArray__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator==)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* o ```
bool q_jsonarray__iterator_operator_equal(void* self, void* o) {
    return QJsonArray__iterator_OperatorEqual((QJsonArray__iterator*)self, (QJsonArray__iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator!=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* o ```
bool q_jsonarray__iterator_operator_not_equal(void* self, void* o) {
    return QJsonArray__iterator_OperatorNotEqual((QJsonArray__iterator*)self, (QJsonArray__iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
bool q_jsonarray__iterator_operator_lesser(void* self, void* other) {
    return QJsonArray__iterator_OperatorLesser((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
bool q_jsonarray__iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonArray__iterator_OperatorLesserOrEqual((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
bool q_jsonarray__iterator_operator_greater(void* self, void* other) {
    return QJsonArray__iterator_OperatorGreater((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* other ```
bool q_jsonarray__iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonArray__iterator_OperatorGreaterOrEqual((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator==)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* o ```
bool q_jsonarray__iterator_operator_equal_with_q_json_arrayconst_iterator(void* self, void* o) {
    return QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator!=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* o ```
bool q_jsonarray__iterator_operator_not_equal_with_q_json_arrayconst_iterator(void* self, void* o) {
    return QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__iterator_operator_lesser_with_other(void* self, void* other) {
    return QJsonArray__iterator_OperatorLesserWithOther((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__iterator_operator_lesser_or_equal_with_other(void* self, void* other) {
    return QJsonArray__iterator_OperatorLesserOrEqualWithOther((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__iterator_operator_greater_with_other(void* self, void* other) {
    return QJsonArray__iterator_OperatorGreaterWithOther((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>=)
///
/// ``` QJsonArray__iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__iterator_operator_greater_or_equal_with_other(void* self, void* other) {
    return QJsonArray__iterator_OperatorGreaterOrEqualWithOther((QJsonArray__iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator++)
///
/// ``` QJsonArray__iterator* self ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self) {
    return QJsonArray__iterator_OperatorPlusPlus((QJsonArray__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator++)
///
/// ``` QJsonArray__iterator* self, int param1 ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonArray__iterator_OperatorPlusPlusWithInt((QJsonArray__iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
///
/// ``` QJsonArray__iterator* self ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self) {
    return QJsonArray__iterator_OperatorMinusMinus((QJsonArray__iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
///
/// ``` QJsonArray__iterator* self, int param1 ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonArray__iterator_OperatorMinusMinusWithInt((QJsonArray__iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator+=)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorPlusAssign((QJsonArray__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-=)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorMinusAssign((QJsonArray__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator+)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_plus(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorPlus((QJsonArray__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
///
/// ``` QJsonArray__iterator* self, int64_t j ```
QJsonArray__iterator* q_jsonarray__iterator_operator_minus(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorMinus((QJsonArray__iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
///
/// ``` QJsonArray__iterator* self, QJsonArray__iterator* j ```
int64_t q_jsonarray__iterator_operator_minus_with_q_json_arrayiterator(void* self, void* j) {
    return QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator((QJsonArray__iterator*)self, (QJsonArray__iterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonArray__iterator* self ```
void q_jsonarray__iterator_delete(void* self) {
    QJsonArray__iterator_Delete((QJsonArray__iterator*)(self));
}

/// https://doc.qt.io/qt-6/qjsonarray-const_iterator.html

/// q_jsonarray__const_iterator_new constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__const_iterator* other ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new(void* other) {
    return QJsonArray__const_iterator_new((QJsonArray__const_iterator*)other);
}

/// q_jsonarray__const_iterator_new2 constructs a new QJsonArray::const_iterator object.
///
///
QJsonArray__const_iterator* q_jsonarray__const_iterator_new2() {
    return QJsonArray__const_iterator_new2();
}

/// q_jsonarray__const_iterator_new3 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray* array, int64_t index ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(void* array, int64_t index) {
    return QJsonArray__const_iterator_new3((QJsonArray*)array, index);
}

/// q_jsonarray__const_iterator_new4 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__iterator* o ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(void* o) {
    return QJsonArray__const_iterator_new4((QJsonArray__iterator*)o);
}

/// q_jsonarray__const_iterator_new5 constructs a new QJsonArray::const_iterator object.
///
/// ``` QJsonArray__const_iterator* other ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(void* other) {
    return QJsonArray__const_iterator_new5((QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator=)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
void q_jsonarray__const_iterator_operator_assign(void* self, void* other) {
    QJsonArray__const_iterator_OperatorAssign((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator*)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(void* self) {
    return QJsonArray__const_iterator_OperatorMultiply((QJsonArray__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator->)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(void* self) {
    return QJsonArray__const_iterator_OperatorMinusGreater((QJsonArray__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator[])
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorSubscript((QJsonArray__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator==)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* o ```
bool q_jsonarray__const_iterator_operator_equal(void* self, void* o) {
    return QJsonArray__const_iterator_OperatorEqual((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator!=)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* o ```
bool q_jsonarray__const_iterator_operator_not_equal(void* self, void* o) {
    return QJsonArray__const_iterator_OperatorNotEqual((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator<)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__const_iterator_operator_lesser(void* self, void* other) {
    return QJsonArray__const_iterator_OperatorLesser((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator<=)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__const_iterator_operator_lesser_or_equal(void* self, void* other) {
    return QJsonArray__const_iterator_OperatorLesserOrEqual((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator>)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__const_iterator_operator_greater(void* self, void* other) {
    return QJsonArray__const_iterator_OperatorGreater((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator>=)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* other ```
bool q_jsonarray__const_iterator_operator_greater_or_equal(void* self, void* other) {
    return QJsonArray__const_iterator_OperatorGreaterOrEqual((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator++)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self) {
    return QJsonArray__const_iterator_OperatorPlusPlus((QJsonArray__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator++)
///
/// ``` QJsonArray__const_iterator* self, int param1 ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus_with_int(void* self, int param1) {
    return QJsonArray__const_iterator_OperatorPlusPlusWithInt((QJsonArray__const_iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
///
/// ``` QJsonArray__const_iterator* self ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self) {
    return QJsonArray__const_iterator_OperatorMinusMinus((QJsonArray__const_iterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
///
/// ``` QJsonArray__const_iterator* self, int param1 ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus_with_int(void* self, int param1) {
    return QJsonArray__const_iterator_OperatorMinusMinusWithInt((QJsonArray__const_iterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator+=)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorPlusAssign((QJsonArray__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-=)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorMinusAssign((QJsonArray__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator+)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorPlus((QJsonArray__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
///
/// ``` QJsonArray__const_iterator* self, int64_t j ```
QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorMinus((QJsonArray__const_iterator*)self, j);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
///
/// ``` QJsonArray__const_iterator* self, QJsonArray__const_iterator* j ```
int64_t q_jsonarray__const_iterator_operator_minus_with_q_json_arrayconst_iterator(void* self, void* j) {
    return QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)j);
}

/// Delete this object from C++ memory.
///
/// ``` QJsonArray__const_iterator* self ```
void q_jsonarray__const_iterator_delete(void* self) {
    QJsonArray__const_iterator_Delete((QJsonArray__const_iterator*)(self));
}