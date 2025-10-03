#include "libcursor.hpp"
#include "liblinerange.hpp"
#include "librange.hpp"
#include "librange.h"

KTextEditor__Range* k_texteditor__range_new(void* other) {
    return KTextEditor__Range_new((KTextEditor__Range*)other);
}

KTextEditor__Range* k_texteditor__range_new2(void* other) {
    return KTextEditor__Range_new2((KTextEditor__Range*)other);
}

KTextEditor__Range* k_texteditor__range_new3() {
    return KTextEditor__Range_new3();
}

KTextEditor__Range* k_texteditor__range_new4(void* start, void* end) {
    return KTextEditor__Range_new4((KTextEditor__Cursor*)start, (KTextEditor__Cursor*)end);
}

KTextEditor__Range* k_texteditor__range_new5(void* start, int width) {
    return KTextEditor__Range_new5((KTextEditor__Cursor*)start, width);
}

KTextEditor__Range* k_texteditor__range_new6(void* start, int endLine, int endColumn) {
    return KTextEditor__Range_new6((KTextEditor__Cursor*)start, endLine, endColumn);
}

KTextEditor__Range* k_texteditor__range_new7(int startLine, int startColumn, int endLine, int endColumn) {
    return KTextEditor__Range_new7(startLine, startColumn, endLine, endColumn);
}

KTextEditor__Range* k_texteditor__range_new8(void* param1) {
    return KTextEditor__Range_new8((KTextEditor__Range*)param1);
}

void k_texteditor__range_copy_assign(void* self, void* other) {
    KTextEditor__Range_CopyAssign((KTextEditor__Range*)self, (KTextEditor__Range*)other);
}

void k_texteditor__range_move_assign(void* self, void* other) {
    KTextEditor__Range_MoveAssign((KTextEditor__Range*)self, (KTextEditor__Range*)other);
}

bool k_texteditor__range_is_valid(void* self) {
    return KTextEditor__Range_IsValid((KTextEditor__Range*)self);
}

KTextEditor__Range* k_texteditor__range_invalid() {
    return KTextEditor__Range_Invalid();
}

const char* k_texteditor__range_to_string(void* self) {
    libqt_string _str = KTextEditor__Range_ToString((KTextEditor__Range*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KTextEditor__Cursor* k_texteditor__range_start(void* self) {
    return KTextEditor__Range_Start((KTextEditor__Range*)self);
}

KTextEditor__Cursor* k_texteditor__range_end(void* self) {
    return KTextEditor__Range_End((KTextEditor__Range*)self);
}

KTextEditor__LineRange* k_texteditor__range_to_line_range(void* self) {
    return KTextEditor__Range_ToLineRange((KTextEditor__Range*)self);
}

void k_texteditor__range_set_both_lines(void* self, int line) {
    KTextEditor__Range_SetBothLines((KTextEditor__Range*)self, line);
}

void k_texteditor__range_set_both_columns(void* self, int column) {
    KTextEditor__Range_SetBothColumns((KTextEditor__Range*)self, column);
}

void k_texteditor__range_set_range(void* self, void* range) {
    KTextEditor__Range_SetRange((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

void k_texteditor__range_set_range2(void* self, void* start, void* end) {
    KTextEditor__Range_SetRange2((KTextEditor__Range*)self, (KTextEditor__Cursor*)start, (KTextEditor__Cursor*)end);
}

void k_texteditor__range_set_start(void* self, void* start) {
    KTextEditor__Range_SetStart((KTextEditor__Range*)self, (KTextEditor__Cursor*)start);
}

void k_texteditor__range_set_end(void* self, void* end) {
    KTextEditor__Range_SetEnd((KTextEditor__Range*)self, (KTextEditor__Cursor*)end);
}

bool k_texteditor__range_expand_to_range(void* self, void* range) {
    return KTextEditor__Range_ExpandToRange((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__range_confine_to_range(void* self, void* range) {
    return KTextEditor__Range_ConfineToRange((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__range_on_single_line(void* self) {
    return KTextEditor__Range_OnSingleLine((KTextEditor__Range*)self);
}

int32_t k_texteditor__range_number_of_lines(void* self) {
    return KTextEditor__Range_NumberOfLines((KTextEditor__Range*)self);
}

int32_t k_texteditor__range_column_width(void* self) {
    return KTextEditor__Range_ColumnWidth((KTextEditor__Range*)self);
}

bool k_texteditor__range_is_empty(void* self) {
    return KTextEditor__Range_IsEmpty((KTextEditor__Range*)self);
}

bool k_texteditor__range_contains(void* self, void* range) {
    return KTextEditor__Range_Contains((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__range_contains2(void* self, void* cursor) {
    return KTextEditor__Range_Contains2((KTextEditor__Range*)self, (KTextEditor__Cursor*)cursor);
}

bool k_texteditor__range_contains_line(void* self, int line) {
    return KTextEditor__Range_ContainsLine((KTextEditor__Range*)self, line);
}

bool k_texteditor__range_contains_column(void* self, int column) {
    return KTextEditor__Range_ContainsColumn((KTextEditor__Range*)self, column);
}

bool k_texteditor__range_overlaps(void* self, void* range) {
    return KTextEditor__Range_Overlaps((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

bool k_texteditor__range_overlaps_line(void* self, int line) {
    return KTextEditor__Range_OverlapsLine((KTextEditor__Range*)self, line);
}

bool k_texteditor__range_overlaps_column(void* self, int column) {
    return KTextEditor__Range_OverlapsColumn((KTextEditor__Range*)self, column);
}

bool k_texteditor__range_boundary_at_cursor(void* self, void* cursor) {
    return KTextEditor__Range_BoundaryAtCursor((KTextEditor__Range*)self, (KTextEditor__Cursor*)cursor);
}

KTextEditor__Range* k_texteditor__range_intersect(void* self, void* range) {
    return KTextEditor__Range_Intersect((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

KTextEditor__Range* k_texteditor__range_encompass(void* self, void* range) {
    return KTextEditor__Range_Encompass((KTextEditor__Range*)self, (KTextEditor__Range*)range);
}

void k_texteditor__range_delete(void* self) {
    KTextEditor__Range_Delete((KTextEditor__Range*)(self));
}
