#include "libcursor.hpp"
#include "libcursor.h"

KTextEditor__Cursor* k_texteditor__cursor_new(void* other) {
    return KTextEditor__Cursor_new((KTextEditor__Cursor*)other);
}

KTextEditor__Cursor* k_texteditor__cursor_new2(void* other) {
    return KTextEditor__Cursor_new2((KTextEditor__Cursor*)other);
}

KTextEditor__Cursor* k_texteditor__cursor_new3() {
    return KTextEditor__Cursor_new3();
}

KTextEditor__Cursor* k_texteditor__cursor_new4(int line, int column) {
    return KTextEditor__Cursor_new4(line, column);
}

KTextEditor__Cursor* k_texteditor__cursor_new5(void* param1) {
    return KTextEditor__Cursor_new5((KTextEditor__Cursor*)param1);
}

void k_texteditor__cursor_copy_assign(void* self, void* other) {
    KTextEditor__Cursor_CopyAssign((KTextEditor__Cursor*)self, (KTextEditor__Cursor*)other);
}

void k_texteditor__cursor_move_assign(void* self, void* other) {
    KTextEditor__Cursor_MoveAssign((KTextEditor__Cursor*)self, (KTextEditor__Cursor*)other);
}

bool k_texteditor__cursor_is_valid(void* self) {
    return KTextEditor__Cursor_IsValid((KTextEditor__Cursor*)self);
}

KTextEditor__Cursor* k_texteditor__cursor_invalid() {
    return KTextEditor__Cursor_Invalid();
}

KTextEditor__Cursor* k_texteditor__cursor_start() {
    return KTextEditor__Cursor_Start();
}

const char* k_texteditor__cursor_to_string(void* self) {
    libqt_string _str = KTextEditor__Cursor_ToString((KTextEditor__Cursor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__cursor_set_position(void* self, void* position) {
    KTextEditor__Cursor_SetPosition((KTextEditor__Cursor*)self, (KTextEditor__Cursor*)position);
}

void k_texteditor__cursor_set_position2(void* self, int line, int column) {
    KTextEditor__Cursor_SetPosition2((KTextEditor__Cursor*)self, line, column);
}

int32_t k_texteditor__cursor_line(void* self) {
    return KTextEditor__Cursor_Line((KTextEditor__Cursor*)self);
}

void k_texteditor__cursor_set_line(void* self, int line) {
    KTextEditor__Cursor_SetLine((KTextEditor__Cursor*)self, line);
}

int32_t k_texteditor__cursor_column(void* self) {
    return KTextEditor__Cursor_Column((KTextEditor__Cursor*)self);
}

void k_texteditor__cursor_set_column(void* self, int column) {
    KTextEditor__Cursor_SetColumn((KTextEditor__Cursor*)self, column);
}

bool k_texteditor__cursor_at_start_of_line(void* self) {
    return KTextEditor__Cursor_AtStartOfLine((KTextEditor__Cursor*)self);
}

bool k_texteditor__cursor_at_start_of_document(void* self) {
    return KTextEditor__Cursor_AtStartOfDocument((KTextEditor__Cursor*)self);
}

void k_texteditor__cursor_position(void* self, int* line, int* column) {
    KTextEditor__Cursor_Position((KTextEditor__Cursor*)self, line, column);
}

void k_texteditor__cursor_delete(void* self) {
    KTextEditor__Cursor_Delete((KTextEditor__Cursor*)(self));
}
