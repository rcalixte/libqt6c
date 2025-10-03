#include "liblinerange.hpp"
#include "liblinerange.h"

KTextEditor__LineRange* k_texteditor__linerange_new(void* other) {
    return KTextEditor__LineRange_new((KTextEditor__LineRange*)other);
}

KTextEditor__LineRange* k_texteditor__linerange_new2(void* other) {
    return KTextEditor__LineRange_new2((KTextEditor__LineRange*)other);
}

KTextEditor__LineRange* k_texteditor__linerange_new3() {
    return KTextEditor__LineRange_new3();
}

KTextEditor__LineRange* k_texteditor__linerange_new4(int start, int end) {
    return KTextEditor__LineRange_new4(start, end);
}

KTextEditor__LineRange* k_texteditor__linerange_new5(void* param1) {
    return KTextEditor__LineRange_new5((KTextEditor__LineRange*)param1);
}

void k_texteditor__linerange_copy_assign(void* self, void* other) {
    KTextEditor__LineRange_CopyAssign((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)other);
}

void k_texteditor__linerange_move_assign(void* self, void* other) {
    KTextEditor__LineRange_MoveAssign((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)other);
}

bool k_texteditor__linerange_is_valid(void* self) {
    return KTextEditor__LineRange_IsValid((KTextEditor__LineRange*)self);
}

KTextEditor__LineRange* k_texteditor__linerange_invalid() {
    return KTextEditor__LineRange_Invalid();
}

const char* k_texteditor__linerange_to_string(void* self) {
    libqt_string _str = KTextEditor__LineRange_ToString((KTextEditor__LineRange*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_texteditor__linerange_start(void* self) {
    return KTextEditor__LineRange_Start((KTextEditor__LineRange*)self);
}

int32_t k_texteditor__linerange_end(void* self) {
    return KTextEditor__LineRange_End((KTextEditor__LineRange*)self);
}

void k_texteditor__linerange_set_range(void* self, void* range) {
    KTextEditor__LineRange_SetRange((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

void k_texteditor__linerange_set_range2(void* self, int start, int end) {
    KTextEditor__LineRange_SetRange2((KTextEditor__LineRange*)self, start, end);
}

void k_texteditor__linerange_set_both_lines(void* self, int line) {
    KTextEditor__LineRange_SetBothLines((KTextEditor__LineRange*)self, line);
}

void k_texteditor__linerange_set_start(void* self, int start) {
    KTextEditor__LineRange_SetStart((KTextEditor__LineRange*)self, start);
}

void k_texteditor__linerange_set_end(void* self, int end) {
    KTextEditor__LineRange_SetEnd((KTextEditor__LineRange*)self, end);
}

bool k_texteditor__linerange_expand_to_range(void* self, void* range) {
    return KTextEditor__LineRange_ExpandToRange((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

bool k_texteditor__linerange_confine_to_range(void* self, void* range) {
    return KTextEditor__LineRange_ConfineToRange((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

bool k_texteditor__linerange_on_single_line(void* self) {
    return KTextEditor__LineRange_OnSingleLine((KTextEditor__LineRange*)self);
}

int32_t k_texteditor__linerange_number_of_lines(void* self) {
    return KTextEditor__LineRange_NumberOfLines((KTextEditor__LineRange*)self);
}

bool k_texteditor__linerange_contains(void* self, void* range) {
    return KTextEditor__LineRange_Contains((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

bool k_texteditor__linerange_contains_line(void* self, int line) {
    return KTextEditor__LineRange_ContainsLine((KTextEditor__LineRange*)self, line);
}

bool k_texteditor__linerange_overlaps(void* self, void* range) {
    return KTextEditor__LineRange_Overlaps((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

bool k_texteditor__linerange_overlaps_line(void* self, int line) {
    return KTextEditor__LineRange_OverlapsLine((KTextEditor__LineRange*)self, line);
}

KTextEditor__LineRange* k_texteditor__linerange_intersect(void* self, void* range) {
    return KTextEditor__LineRange_Intersect((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

KTextEditor__LineRange* k_texteditor__linerange_encompass(void* self, void* range) {
    return KTextEditor__LineRange_Encompass((KTextEditor__LineRange*)self, (KTextEditor__LineRange*)range);
}

void k_texteditor__linerange_delete(void* self) {
    KTextEditor__LineRange_Delete((KTextEditor__LineRange*)(self));
}
