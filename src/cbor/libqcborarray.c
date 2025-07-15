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

QCborValueRef* q_cborarray_operator_subscript2(void* self, int64_t i) {
    return QCborArray_OperatorSubscript2((QCborArray*)self, i);
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
