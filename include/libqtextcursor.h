#pragma once
#ifndef SRCQT6C_LIBQTEXTCURSOR_H
#define SRCQT6C_LIBQTEXTCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqimage.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextdocument.h"
#include "libqtextdocumentfragment.h"
#include "libqtextlist.h"
#include "libqtexttable.h"

QTextCursor* q_textcursor_new();
QTextCursor* q_textcursor_new2(void* document);
QTextCursor* q_textcursor_new3(void* frame);
QTextCursor* q_textcursor_new4(void* block);
QTextCursor* q_textcursor_new5(void* cursor);
void q_textcursor_operator_assign(void* self, void* other);
void q_textcursor_swap(void* self, void* other);
bool q_textcursor_is_null(void* self);
void q_textcursor_set_position(void* self, int pos);
int32_t q_textcursor_position(void* self);
int32_t q_textcursor_position_in_block(void* self);
int32_t q_textcursor_anchor(void* self);
void q_textcursor_insert_text(void* self, const char* text);
void q_textcursor_insert_text2(void* self, const char* text, void* format);
bool q_textcursor_move_position(void* self, int64_t op);
bool q_textcursor_visual_navigation(void* self);
void q_textcursor_set_visual_navigation(void* self, bool b);
void q_textcursor_set_vertical_movement_x(void* self, int x);
int32_t q_textcursor_vertical_movement_x(void* self);
void q_textcursor_set_keep_position_on_insert(void* self, bool b);
bool q_textcursor_keep_position_on_insert(void* self);
void q_textcursor_delete_char(void* self);
void q_textcursor_delete_previous_char(void* self);
void q_textcursor_select(void* self, int64_t selection);
bool q_textcursor_has_selection(void* self);
bool q_textcursor_has_complex_selection(void* self);
void q_textcursor_remove_selected_text(void* self);
void q_textcursor_clear_selection(void* self);
int32_t q_textcursor_selection_start(void* self);
int32_t q_textcursor_selection_end(void* self);
const char* q_textcursor_selected_text(void* self);
QTextDocumentFragment* q_textcursor_selection(void* self);
void q_textcursor_selected_table_cells(void* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns);
QTextBlock* q_textcursor_block(void* self);
QTextCharFormat* q_textcursor_char_format(void* self);
void q_textcursor_set_char_format(void* self, void* format);
void q_textcursor_merge_char_format(void* self, void* modifier);
QTextBlockFormat* q_textcursor_block_format(void* self);
void q_textcursor_set_block_format(void* self, void* format);
void q_textcursor_merge_block_format(void* self, void* modifier);
QTextCharFormat* q_textcursor_block_char_format(void* self);
void q_textcursor_set_block_char_format(void* self, void* format);
void q_textcursor_merge_block_char_format(void* self, void* modifier);
bool q_textcursor_at_block_start(void* self);
bool q_textcursor_at_block_end(void* self);
bool q_textcursor_at_start(void* self);
bool q_textcursor_at_end(void* self);
void q_textcursor_insert_block(void* self);
void q_textcursor_insert_block_with_format(void* self, void* format);
void q_textcursor_insert_block2(void* self, void* format, void* charFormat);
QTextList* q_textcursor_insert_list(void* self, void* format);
QTextList* q_textcursor_insert_list_with_style(void* self, int64_t style);
QTextList* q_textcursor_create_list(void* self, void* format);
QTextList* q_textcursor_create_list_with_style(void* self, int64_t style);
QTextList* q_textcursor_current_list(void* self);
QTextTable* q_textcursor_insert_table(void* self, int rows, int cols, void* format);
QTextTable* q_textcursor_insert_table2(void* self, int rows, int cols);
QTextTable* q_textcursor_current_table(void* self);
QTextFrame* q_textcursor_insert_frame(void* self, void* format);
QTextFrame* q_textcursor_current_frame(void* self);
void q_textcursor_insert_fragment(void* self, void* fragment);
void q_textcursor_insert_html(void* self, const char* html);
void q_textcursor_insert_markdown(void* self, const char* markdown);
void q_textcursor_insert_image(void* self, void* format, int64_t alignment);
void q_textcursor_insert_image_with_format(void* self, void* format);
void q_textcursor_insert_image_with_name(void* self, const char* name);
void q_textcursor_insert_image_with_image(void* self, void* image);
void q_textcursor_begin_edit_block(void* self);
void q_textcursor_join_previous_edit_block(void* self);
void q_textcursor_end_edit_block(void* self);
bool q_textcursor_operator_not_equal(void* self, void* rhs);
bool q_textcursor_operator_lesser(void* self, void* rhs);
bool q_textcursor_operator_lesser_or_equal(void* self, void* rhs);
bool q_textcursor_operator_equal(void* self, void* rhs);
bool q_textcursor_operator_greater_or_equal(void* self, void* rhs);
bool q_textcursor_operator_greater(void* self, void* rhs);
bool q_textcursor_is_copy_of(void* self, void* other);
int32_t q_textcursor_block_number(void* self);
int32_t q_textcursor_column_number(void* self);
QTextDocument* q_textcursor_document(void* self);
void q_textcursor_set_position2(void* self, int pos, int64_t mode);
bool q_textcursor_move_position2(void* self, int64_t op, int64_t param2);
bool q_textcursor_move_position3(void* self, int64_t op, int64_t param2, int n);
void q_textcursor_insert_markdown2(void* self, const char* markdown, int64_t features);
void q_textcursor_insert_image2(void* self, void* image, const char* name);
void q_textcursor_delete(void* self);

/// https://doc.qt.io/qt-6/qtextcursor.html#types

typedef enum {
    QTEXTCURSOR_MOVEMODE_MOVEANCHOR = 0,
    QTEXTCURSOR_MOVEMODE_KEEPANCHOR = 1
} QTextCursor__MoveMode;

typedef enum {
    QTEXTCURSOR_MOVEOPERATION_NOMOVE = 0,
    QTEXTCURSOR_MOVEOPERATION_START = 1,
    QTEXTCURSOR_MOVEOPERATION_UP = 2,
    QTEXTCURSOR_MOVEOPERATION_STARTOFLINE = 3,
    QTEXTCURSOR_MOVEOPERATION_STARTOFBLOCK = 4,
    QTEXTCURSOR_MOVEOPERATION_STARTOFWORD = 5,
    QTEXTCURSOR_MOVEOPERATION_PREVIOUSBLOCK = 6,
    QTEXTCURSOR_MOVEOPERATION_PREVIOUSCHARACTER = 7,
    QTEXTCURSOR_MOVEOPERATION_PREVIOUSWORD = 8,
    QTEXTCURSOR_MOVEOPERATION_LEFT = 9,
    QTEXTCURSOR_MOVEOPERATION_WORDLEFT = 10,
    QTEXTCURSOR_MOVEOPERATION_END = 11,
    QTEXTCURSOR_MOVEOPERATION_DOWN = 12,
    QTEXTCURSOR_MOVEOPERATION_ENDOFLINE = 13,
    QTEXTCURSOR_MOVEOPERATION_ENDOFWORD = 14,
    QTEXTCURSOR_MOVEOPERATION_ENDOFBLOCK = 15,
    QTEXTCURSOR_MOVEOPERATION_NEXTBLOCK = 16,
    QTEXTCURSOR_MOVEOPERATION_NEXTCHARACTER = 17,
    QTEXTCURSOR_MOVEOPERATION_NEXTWORD = 18,
    QTEXTCURSOR_MOVEOPERATION_RIGHT = 19,
    QTEXTCURSOR_MOVEOPERATION_WORDRIGHT = 20,
    QTEXTCURSOR_MOVEOPERATION_NEXTCELL = 21,
    QTEXTCURSOR_MOVEOPERATION_PREVIOUSCELL = 22,
    QTEXTCURSOR_MOVEOPERATION_NEXTROW = 23,
    QTEXTCURSOR_MOVEOPERATION_PREVIOUSROW = 24
} QTextCursor__MoveOperation;

typedef enum {
    QTEXTCURSOR_SELECTIONTYPE_WORDUNDERCURSOR = 0,
    QTEXTCURSOR_SELECTIONTYPE_LINEUNDERCURSOR = 1,
    QTEXTCURSOR_SELECTIONTYPE_BLOCKUNDERCURSOR = 2,
    QTEXTCURSOR_SELECTIONTYPE_DOCUMENT = 3
} QTextCursor__SelectionType;

#endif
