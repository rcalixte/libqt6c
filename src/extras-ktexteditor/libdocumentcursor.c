#include "libcursor.hpp"
#include "libdocument.hpp"
#include "libdocumentcursor.hpp"
#include "libdocumentcursor.h"

KTextEditor__DocumentCursor* k_texteditor__documentcursor_new(void* document) {
    return KTextEditor__DocumentCursor_new((KTextEditor__Document*)document);
}

KTextEditor__DocumentCursor* k_texteditor__documentcursor_new2(void* document, void* position) {
    return KTextEditor__DocumentCursor_new2((KTextEditor__Document*)document, (KTextEditor__Cursor*)position);
}

KTextEditor__DocumentCursor* k_texteditor__documentcursor_new3(void* document, int line, int column) {
    return KTextEditor__DocumentCursor_new3((KTextEditor__Document*)document, line, column);
}

KTextEditor__DocumentCursor* k_texteditor__documentcursor_new4(void* other) {
    return KTextEditor__DocumentCursor_new4((KTextEditor__DocumentCursor*)other);
}

KTextEditor__Document* k_texteditor__documentcursor_document(void* self) {
    return KTextEditor__DocumentCursor_Document((KTextEditor__DocumentCursor*)self);
}

void k_texteditor__documentcursor_set_position(void* self, void* position) {
    KTextEditor__DocumentCursor_SetPosition((KTextEditor__DocumentCursor*)self, (KTextEditor__Cursor*)position);
}

int32_t k_texteditor__documentcursor_line(void* self) {
    return KTextEditor__DocumentCursor_Line((KTextEditor__DocumentCursor*)self);
}

int32_t k_texteditor__documentcursor_column(void* self) {
    return KTextEditor__DocumentCursor_Column((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_is_valid(void* self) {
    return KTextEditor__DocumentCursor_IsValid((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_is_valid_text_position(void* self) {
    return KTextEditor__DocumentCursor_IsValidTextPosition((KTextEditor__DocumentCursor*)self);
}

void k_texteditor__documentcursor_make_valid(void* self) {
    KTextEditor__DocumentCursor_MakeValid((KTextEditor__DocumentCursor*)self);
}

void k_texteditor__documentcursor_set_position2(void* self, int line, int column) {
    KTextEditor__DocumentCursor_SetPosition2((KTextEditor__DocumentCursor*)self, line, column);
}

void k_texteditor__documentcursor_set_line(void* self, int line) {
    KTextEditor__DocumentCursor_SetLine((KTextEditor__DocumentCursor*)self, line);
}

void k_texteditor__documentcursor_set_column(void* self, int column) {
    KTextEditor__DocumentCursor_SetColumn((KTextEditor__DocumentCursor*)self, column);
}

bool k_texteditor__documentcursor_at_start_of_line(void* self) {
    return KTextEditor__DocumentCursor_AtStartOfLine((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_at_end_of_line(void* self) {
    return KTextEditor__DocumentCursor_AtEndOfLine((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_at_start_of_document(void* self) {
    return KTextEditor__DocumentCursor_AtStartOfDocument((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_at_end_of_document(void* self) {
    return KTextEditor__DocumentCursor_AtEndOfDocument((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_goto_next_line(void* self) {
    return KTextEditor__DocumentCursor_GotoNextLine((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_goto_previous_line(void* self) {
    return KTextEditor__DocumentCursor_GotoPreviousLine((KTextEditor__DocumentCursor*)self);
}

bool k_texteditor__documentcursor_move(void* self, int chars) {
    return KTextEditor__DocumentCursor_Move((KTextEditor__DocumentCursor*)self, chars);
}

KTextEditor__Cursor* k_texteditor__documentcursor_to_cursor(void* self) {
    return KTextEditor__DocumentCursor_ToCursor((KTextEditor__DocumentCursor*)self);
}

void k_texteditor__documentcursor_operator_assign(void* self, void* other) {
    KTextEditor__DocumentCursor_OperatorAssign((KTextEditor__DocumentCursor*)self, (KTextEditor__DocumentCursor*)other);
}

bool k_texteditor__documentcursor_move2(void* self, int chars, int32_t wrapBehavior) {
    return KTextEditor__DocumentCursor_Move2((KTextEditor__DocumentCursor*)self, chars, wrapBehavior);
}

void k_texteditor__documentcursor_delete(void* self) {
    KTextEditor__DocumentCursor_Delete((KTextEditor__DocumentCursor*)(self));
}
