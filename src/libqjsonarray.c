#include "libqjsonvalue.hpp"
#include <string.h>
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

QJsonArray* q_jsonarray_from_string_list(const char* list[]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = malloc(list_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < list_len; ++_i) {
        list_qstr[_i] = qstring(list[_i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    return QJsonArray_FromStringList(list_list);
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

QJsonValue* q_jsonarray_operator_subscript_with_qsizetype(void* self, int64_t i) {
    return QJsonArray_OperatorSubscriptWithQsizetype((QJsonArray*)self, i);
}

void q_jsonarray_swap(void* self, void* other) {
    QJsonArray_Swap((QJsonArray*)self, (QJsonArray*)other);
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
