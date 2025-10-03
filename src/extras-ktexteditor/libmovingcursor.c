#include "libcursor.hpp"
#include "libdocument.hpp"
#include "libmovingrange.hpp"
#include "libmovingcursor.hpp"
#include "libmovingcursor.h"

void k_texteditor__movingcursor_set_insert_behavior(void* self, int32_t insertBehavior) {
    KTextEditor__MovingCursor_SetInsertBehavior((KTextEditor__MovingCursor*)self, insertBehavior);
}

int32_t k_texteditor__movingcursor_insert_behavior(void* self) {
    return KTextEditor__MovingCursor_InsertBehavior((KTextEditor__MovingCursor*)self);
}

KTextEditor__Document* k_texteditor__movingcursor_document(void* self) {
    return KTextEditor__MovingCursor_Document((KTextEditor__MovingCursor*)self);
}

KTextEditor__MovingRange* k_texteditor__movingcursor_range(void* self) {
    return KTextEditor__MovingCursor_Range((KTextEditor__MovingCursor*)self);
}

void k_texteditor__movingcursor_set_position(void* self, void* position) {
    KTextEditor__MovingCursor_SetPosition((KTextEditor__MovingCursor*)self, (KTextEditor__Cursor*)position);
}

int32_t k_texteditor__movingcursor_line(void* self) {
    return KTextEditor__MovingCursor_Line((KTextEditor__MovingCursor*)self);
}

int32_t k_texteditor__movingcursor_column(void* self) {
    return KTextEditor__MovingCursor_Column((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_is_valid(void* self) {
    return KTextEditor__MovingCursor_IsValid((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_is_valid_text_position(void* self) {
    return KTextEditor__MovingCursor_IsValidTextPosition((KTextEditor__MovingCursor*)self);
}

void k_texteditor__movingcursor_set_position2(void* self, int line, int column) {
    KTextEditor__MovingCursor_SetPosition2((KTextEditor__MovingCursor*)self, line, column);
}

void k_texteditor__movingcursor_set_line(void* self, int line) {
    KTextEditor__MovingCursor_SetLine((KTextEditor__MovingCursor*)self, line);
}

void k_texteditor__movingcursor_set_column(void* self, int column) {
    KTextEditor__MovingCursor_SetColumn((KTextEditor__MovingCursor*)self, column);
}

bool k_texteditor__movingcursor_at_start_of_line(void* self) {
    return KTextEditor__MovingCursor_AtStartOfLine((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_at_end_of_line(void* self) {
    return KTextEditor__MovingCursor_AtEndOfLine((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_at_start_of_document(void* self) {
    return KTextEditor__MovingCursor_AtStartOfDocument((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_at_end_of_document(void* self) {
    return KTextEditor__MovingCursor_AtEndOfDocument((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_goto_next_line(void* self) {
    return KTextEditor__MovingCursor_GotoNextLine((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_goto_previous_line(void* self) {
    return KTextEditor__MovingCursor_GotoPreviousLine((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_move(void* self, int chars) {
    return KTextEditor__MovingCursor_Move((KTextEditor__MovingCursor*)self, chars);
}

const KTextEditor__Cursor* k_texteditor__movingcursor_to_cursor(void* self) {
    return KTextEditor__MovingCursor_ToCursor((KTextEditor__MovingCursor*)self);
}

bool k_texteditor__movingcursor_move2(void* self, int chars, int32_t wrapBehavior) {
    return KTextEditor__MovingCursor_Move2((KTextEditor__MovingCursor*)self, chars, wrapBehavior);
}

void k_texteditor__movingcursor_delete(void* self) {
    KTextEditor__MovingCursor_Delete((KTextEditor__MovingCursor*)(self));
}
