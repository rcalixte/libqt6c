#include "libqjsonvalue.hpp"
#include "libqvariant.hpp"
#include "libqjsonarray.hpp"
#include "libqjsonarray.h"

QJsonArray* q_jsonarray_new() {
    return QJsonArray_new();
}

QJsonArray* q_jsonarray_new2(void* other) {
    return QJsonArray_new2((QJsonArray*)other);
}

void q_jsonarray_operator_assign(void* self, void* other) {
    QJsonArray_OperatorAssign((QJsonArray*)self, (QJsonArray*)other);
}

QJsonArray* q_jsonarray_from_string_list(const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_jsonarray_from_string_list\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    QJsonArray* _out = QJsonArray_FromStringList(list_list);
    free(list_qstr);
    return _out;
}

QJsonArray* q_jsonarray_from_variant_list(libqt_list /* of QVariant* */ list) {
    return QJsonArray_FromVariantList(list);
}

libqt_list /* of QVariant* */ q_jsonarray_to_variant_list(void* self) {
    libqt_list _arr = QJsonArray_ToVariantList((QJsonArray*)self);
    return _arr;
}

int64_t q_jsonarray_size(void* self) {
    return QJsonArray_Size((QJsonArray*)self);
}

int64_t q_jsonarray_count(void* self) {
    return QJsonArray_Count((QJsonArray*)self);
}

bool q_jsonarray_is_empty(void* self) {
    return QJsonArray_IsEmpty((QJsonArray*)self);
}

QJsonValue* q_jsonarray_at(void* self, int64_t i) {
    return QJsonArray_At((QJsonArray*)self, i);
}

QJsonValue* q_jsonarray_first(void* self) {
    return QJsonArray_First((QJsonArray*)self);
}

QJsonValue* q_jsonarray_last(void* self) {
    return QJsonArray_Last((QJsonArray*)self);
}

void q_jsonarray_prepend(void* self, void* value) {
    QJsonArray_Prepend((QJsonArray*)self, (QJsonValue*)value);
}

void q_jsonarray_append(void* self, void* value) {
    QJsonArray_Append((QJsonArray*)self, (QJsonValue*)value);
}

void q_jsonarray_remove_at(void* self, int64_t i) {
    QJsonArray_RemoveAt((QJsonArray*)self, i);
}

QJsonValue* q_jsonarray_take_at(void* self, int64_t i) {
    return QJsonArray_TakeAt((QJsonArray*)self, i);
}

void q_jsonarray_remove_first(void* self) {
    QJsonArray_RemoveFirst((QJsonArray*)self);
}

void q_jsonarray_remove_last(void* self) {
    QJsonArray_RemoveLast((QJsonArray*)self);
}

void q_jsonarray_insert(void* self, int64_t i, void* value) {
    QJsonArray_Insert((QJsonArray*)self, i, (QJsonValue*)value);
}

void q_jsonarray_replace(void* self, int64_t i, void* value) {
    QJsonArray_Replace((QJsonArray*)self, i, (QJsonValue*)value);
}

bool q_jsonarray_contains(void* self, void* element) {
    return QJsonArray_Contains((QJsonArray*)self, (QJsonValue*)element);
}

QJsonValueRef* q_jsonarray_operator_subscript(void* self, int64_t i) {
    return QJsonArray_OperatorSubscript((QJsonArray*)self, i);
}

QJsonValue* q_jsonarray_operator_subscript2(void* self, int64_t i) {
    return QJsonArray_OperatorSubscript2((QJsonArray*)self, i);
}

void q_jsonarray_swap(void* self, void* other) {
    QJsonArray_Swap((QJsonArray*)self, (QJsonArray*)other);
}

QJsonArray__iterator* q_jsonarray_begin(void* self) {
    return QJsonArray_Begin((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_begin2(void* self) {
    return QJsonArray_Begin2((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_const_begin(void* self) {
    return QJsonArray_ConstBegin((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_cbegin(void* self) {
    return QJsonArray_Cbegin((QJsonArray*)self);
}

QJsonArray__iterator* q_jsonarray_end(void* self) {
    return QJsonArray_End((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_end2(void* self) {
    return QJsonArray_End2((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_const_end(void* self) {
    return QJsonArray_ConstEnd((QJsonArray*)self);
}

QJsonArray__const_iterator* q_jsonarray_cend(void* self) {
    return QJsonArray_Cend((QJsonArray*)self);
}

QJsonArray__iterator* q_jsonarray_insert2(void* self, void* before, void* value) {
    return QJsonArray_Insert2((QJsonArray*)self, (QJsonArray__iterator*)before, (QJsonValue*)value);
}

QJsonArray__iterator* q_jsonarray_erase(void* self, void* it) {
    return QJsonArray_Erase((QJsonArray*)self, (QJsonArray__iterator*)it);
}

QJsonArray* q_jsonarray_operator_plus(void* self, void* v) {
    return QJsonArray_OperatorPlus((QJsonArray*)self, (QJsonValue*)v);
}

QJsonArray* q_jsonarray_operator_plus_assign(void* self, void* v) {
    return QJsonArray_OperatorPlusAssign((QJsonArray*)self, (QJsonValue*)v);
}

QJsonArray* q_jsonarray_operator_shift_left(void* self, void* v) {
    return QJsonArray_OperatorShiftLeft((QJsonArray*)self, (QJsonValue*)v);
}

void q_jsonarray_push_back(void* self, void* t) {
    QJsonArray_PushBack((QJsonArray*)self, (QJsonValue*)t);
}

void q_jsonarray_push_front(void* self, void* t) {
    QJsonArray_PushFront((QJsonArray*)self, (QJsonValue*)t);
}

void q_jsonarray_pop_front(void* self) {
    QJsonArray_PopFront((QJsonArray*)self);
}

void q_jsonarray_pop_back(void* self) {
    QJsonArray_PopBack((QJsonArray*)self);
}

bool q_jsonarray_empty(void* self) {
    return QJsonArray_Empty((QJsonArray*)self);
}

void q_jsonarray_delete(void* self) {
    QJsonArray_Delete((QJsonArray*)(self));
}

QJsonArray__iterator* q_jsonarray__iterator_new(void* other) {
    return QJsonArray__iterator_new((QJsonArray__iterator*)other);
}

QJsonArray__iterator* q_jsonarray__iterator_new2() {
    return QJsonArray__iterator_new2();
}

QJsonArray__iterator* q_jsonarray__iterator_new3(void* array, int64_t index) {
    return QJsonArray__iterator_new3((QJsonArray*)array, index);
}

QJsonArray__iterator* q_jsonarray__iterator_new4(void* other) {
    return QJsonArray__iterator_new4((QJsonArray__iterator*)other);
}

void q_jsonarray__iterator_operator_assign(void* self, void* other) {
    QJsonArray__iterator_OperatorAssign((QJsonArray__iterator*)self, (QJsonArray__iterator*)other);
}

QJsonValueRef* q_jsonarray__iterator_operator_multiply(void* self) {
    return QJsonArray__iterator_OperatorMultiply((QJsonArray__iterator*)self);
}

const QJsonValueConstRef* q_jsonarray__iterator_operator_minus_greater(void* self) {
    return QJsonArray__iterator_OperatorMinusGreater((QJsonArray__iterator*)self);
}

QJsonValueRef* q_jsonarray__iterator_operator_minus_greater2(void* self) {
    return QJsonArray__iterator_OperatorMinusGreater2((QJsonArray__iterator*)self);
}

QJsonValueRef* q_jsonarray__iterator_operator_subscript(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorSubscript((QJsonArray__iterator*)self, j);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus(void* self) {
    return QJsonArray__iterator_OperatorPlusPlus((QJsonArray__iterator*)self);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_plus_plus2(void* self, int param1) {
    return QJsonArray__iterator_OperatorPlusPlus2((QJsonArray__iterator*)self, param1);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus(void* self) {
    return QJsonArray__iterator_OperatorMinusMinus((QJsonArray__iterator*)self);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_minus_minus2(void* self, int param1) {
    return QJsonArray__iterator_OperatorMinusMinus2((QJsonArray__iterator*)self, param1);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorPlusAssign((QJsonArray__iterator*)self, j);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorMinusAssign((QJsonArray__iterator*)self, j);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_plus(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorPlus((QJsonArray__iterator*)self, j);
}

QJsonArray__iterator* q_jsonarray__iterator_operator_minus(void* self, int64_t j) {
    return QJsonArray__iterator_OperatorMinus((QJsonArray__iterator*)self, j);
}

int64_t q_jsonarray__iterator_operator_minus2(void* self, void* j) {
    return QJsonArray__iterator_OperatorMinus2((QJsonArray__iterator*)self, (QJsonArray__iterator*)j);
}

void q_jsonarray__iterator_delete(void* self) {
    QJsonArray__iterator_Delete((QJsonArray__iterator*)(self));
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_new(void* other) {
    return QJsonArray__const_iterator_new((QJsonArray__const_iterator*)other);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_new2() {
    return QJsonArray__const_iterator_new2();
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_new3(void* array, int64_t index) {
    return QJsonArray__const_iterator_new3((QJsonArray*)array, index);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_new4(void* o) {
    return QJsonArray__const_iterator_new4((QJsonArray__iterator*)o);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_new5(void* other) {
    return QJsonArray__const_iterator_new5((QJsonArray__const_iterator*)other);
}

void q_jsonarray__const_iterator_operator_assign(void* self, void* other) {
    QJsonArray__const_iterator_OperatorAssign((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)other);
}

const QJsonValueConstRef* q_jsonarray__const_iterator_operator_multiply(void* self) {
    return QJsonArray__const_iterator_OperatorMultiply((QJsonArray__const_iterator*)self);
}

const QJsonValueConstRef* q_jsonarray__const_iterator_operator_minus_greater(void* self) {
    return QJsonArray__const_iterator_OperatorMinusGreater((QJsonArray__const_iterator*)self);
}

QJsonValueConstRef* q_jsonarray__const_iterator_operator_subscript(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorSubscript((QJsonArray__const_iterator*)self, j);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus(void* self) {
    return QJsonArray__const_iterator_OperatorPlusPlus((QJsonArray__const_iterator*)self);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_plus2(void* self, int param1) {
    return QJsonArray__const_iterator_OperatorPlusPlus2((QJsonArray__const_iterator*)self, param1);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus(void* self) {
    return QJsonArray__const_iterator_OperatorMinusMinus((QJsonArray__const_iterator*)self);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_minus2(void* self, int param1) {
    return QJsonArray__const_iterator_OperatorMinusMinus2((QJsonArray__const_iterator*)self, param1);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus_assign(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorPlusAssign((QJsonArray__const_iterator*)self, j);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus_assign(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorMinusAssign((QJsonArray__const_iterator*)self, j);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_plus(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorPlus((QJsonArray__const_iterator*)self, j);
}

QJsonArray__const_iterator* q_jsonarray__const_iterator_operator_minus(void* self, int64_t j) {
    return QJsonArray__const_iterator_OperatorMinus((QJsonArray__const_iterator*)self, j);
}

int64_t q_jsonarray__const_iterator_operator_minus2(void* self, void* j) {
    return QJsonArray__const_iterator_OperatorMinus2((QJsonArray__const_iterator*)self, (QJsonArray__const_iterator*)j);
}

void q_jsonarray__const_iterator_delete(void* self) {
    QJsonArray__const_iterator_Delete((QJsonArray__const_iterator*)(self));
}
