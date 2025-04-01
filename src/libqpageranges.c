#include <string.h>
#include "libqpageranges.hpp"
#include "libqpageranges.h"

QPageRanges* q_pageranges_new() {
    return QPageRanges_new();
}

QPageRanges* q_pageranges_new2(void* other) {
    return QPageRanges_new2((QPageRanges*)other);
}

void q_pageranges_operator_assign(void* self, void* other) {
    QPageRanges_OperatorAssign((QPageRanges*)self, (QPageRanges*)other);
}

void q_pageranges_swap(void* self, void* other) {
    QPageRanges_Swap((QPageRanges*)self, (QPageRanges*)other);
}

void q_pageranges_add_page(void* self, int pageNumber) {
    QPageRanges_AddPage((QPageRanges*)self, pageNumber);
}

void q_pageranges_add_range(void* self, int from, int to) {
    QPageRanges_AddRange((QPageRanges*)self, from, to);
}

libqt_list /* of QPageRanges__Range* */ q_pageranges_to_range_list(void* self) {
    libqt_list _arr = QPageRanges_ToRangeList((QPageRanges*)self);
    return _arr;
}

void q_pageranges_clear(void* self) {
    QPageRanges_Clear((QPageRanges*)self);
}

const char* q_pageranges_to_string(void* self) {
    libqt_string _str = QPageRanges_ToString((QPageRanges*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPageRanges* q_pageranges_from_string(const char* ranges) {
    return QPageRanges_FromString(qstring(ranges));
}

bool q_pageranges_contains(void* self, int pageNumber) {
    return QPageRanges_Contains((QPageRanges*)self, pageNumber);
}

bool q_pageranges_is_empty(void* self) {
    return QPageRanges_IsEmpty((QPageRanges*)self);
}

int32_t q_pageranges_first_page(void* self) {
    return QPageRanges_FirstPage((QPageRanges*)self);
}

int32_t q_pageranges_last_page(void* self) {
    return QPageRanges_LastPage((QPageRanges*)self);
}

void q_pageranges_detach(void* self) {
    QPageRanges_Detach((QPageRanges*)self);
}

void q_pageranges_delete(void* self) {
    QPageRanges_Delete((QPageRanges*)(self));
}

QPageRanges__Range* q_pageranges__range_new(void* other) {
    return QPageRanges__Range_new((QPageRanges__Range*)other);
}

QPageRanges__Range* q_pageranges__range_new2(void* other) {
    return QPageRanges__Range_new2((QPageRanges__Range*)other);
}

QPageRanges__Range* q_pageranges__range_new3() {
    return QPageRanges__Range_new3();
}

QPageRanges__Range* q_pageranges__range_new4(void* param1) {
    return QPageRanges__Range_new4((QPageRanges__Range*)param1);
}

void q_pageranges__range_copy_assign(void* self, void* other) {
    QPageRanges__Range_CopyAssign((QPageRanges__Range*)self, (QPageRanges__Range*)other);
}

void q_pageranges__range_move_assign(void* self, void* other) {
    QPageRanges__Range_MoveAssign((QPageRanges__Range*)self, (QPageRanges__Range*)other);
}

bool q_pageranges__range_contains(void* self, int pageNumber) {
    return QPageRanges__Range_Contains((QPageRanges__Range*)self, pageNumber);
}

void q_pageranges__range_delete(void* self) {
    QPageRanges__Range_Delete((QPageRanges__Range*)(self));
}
