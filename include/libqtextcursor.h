#pragma once
#ifndef SRCQT6C_LIBQTEXTCURSOR_H
#define SRCQT6C_LIBQTEXTCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextcursor.html

/// q_textcursor_new constructs a new QTextCursor object.
///
///
QTextCursor* q_textcursor_new();

/// q_textcursor_new2 constructs a new QTextCursor object.
///
/// ``` QTextDocument* document ```
QTextCursor* q_textcursor_new2(void* document);

/// q_textcursor_new3 constructs a new QTextCursor object.
///
/// ``` QTextFrame* frame ```
QTextCursor* q_textcursor_new3(void* frame);

/// q_textcursor_new4 constructs a new QTextCursor object.
///
/// ``` QTextBlock* block ```
QTextCursor* q_textcursor_new4(void* block);

/// q_textcursor_new5 constructs a new QTextCursor object.
///
/// ``` QTextCursor* cursor ```
QTextCursor* q_textcursor_new5(void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator=)
///
/// ``` QTextCursor* self, QTextCursor* other ```
void q_textcursor_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#swap)
///
/// ``` QTextCursor* self, QTextCursor* other ```
void q_textcursor_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
///
/// ``` QTextCursor* self ```
bool q_textcursor_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// ``` QTextCursor* self, int pos ```
void q_textcursor_set_position(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#position)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_position_in_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_anchor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// ``` QTextCursor* self, const char* text ```
void q_textcursor_insert_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// ``` QTextCursor* self, const char* text, QTextCharFormat* format ```
void q_textcursor_insert_text2(void* self, const char* text, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op ```
bool q_textcursor_move_position(void* self, int64_t op);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
///
/// ``` QTextCursor* self ```
bool q_textcursor_visual_navigation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
///
/// ``` QTextCursor* self, bool b ```
void q_textcursor_set_visual_navigation(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
///
/// ``` QTextCursor* self, int x ```
void q_textcursor_set_vertical_movement_x(void* self, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_vertical_movement_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
///
/// ``` QTextCursor* self, bool b ```
void q_textcursor_set_keep_position_on_insert(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
///
/// ``` QTextCursor* self ```
bool q_textcursor_keep_position_on_insert(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
///
/// ``` QTextCursor* self ```
void q_textcursor_delete_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
///
/// ``` QTextCursor* self ```
void q_textcursor_delete_previous_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#select)
///
/// ``` QTextCursor* self, enum QTextCursor__SelectionType selection ```
void q_textcursor_select(void* self, int64_t selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
///
/// ``` QTextCursor* self ```
bool q_textcursor_has_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
///
/// ``` QTextCursor* self ```
bool q_textcursor_has_complex_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
///
/// ``` QTextCursor* self ```
void q_textcursor_remove_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
///
/// ``` QTextCursor* self ```
void q_textcursor_clear_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_selection_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_selection_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
///
/// ``` QTextCursor* self ```
const char* q_textcursor_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selection)
///
/// ``` QTextCursor* self ```
QTextDocumentFragment* q_textcursor_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
///
/// ``` QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns ```
void q_textcursor_selected_table_cells(void* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#block)
///
/// ``` QTextCursor* self ```
QTextBlock* q_textcursor_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
///
/// ``` QTextCursor* self ```
QTextCharFormat* q_textcursor_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* format ```
void q_textcursor_set_char_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* modifier ```
void q_textcursor_merge_char_format(void* self, void* modifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
///
/// ``` QTextCursor* self ```
QTextBlockFormat* q_textcursor_block_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
///
/// ``` QTextCursor* self, QTextBlockFormat* format ```
void q_textcursor_set_block_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
///
/// ``` QTextCursor* self, QTextBlockFormat* modifier ```
void q_textcursor_merge_block_format(void* self, void* modifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
///
/// ``` QTextCursor* self ```
QTextCharFormat* q_textcursor_block_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* format ```
void q_textcursor_set_block_char_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* modifier ```
void q_textcursor_merge_block_char_format(void* self, void* modifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_block_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_block_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_insert_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self, QTextBlockFormat* format ```
void q_textcursor_insert_block_with_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat ```
void q_textcursor_insert_block2(void* self, void* format, void* charFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// ``` QTextCursor* self, QTextListFormat* format ```
QTextList* q_textcursor_insert_list(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// ``` QTextCursor* self, enum QTextListFormat__Style style ```
QTextList* q_textcursor_insert_list_with_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// ``` QTextCursor* self, QTextListFormat* format ```
QTextList* q_textcursor_create_list(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// ``` QTextCursor* self, enum QTextListFormat__Style style ```
QTextList* q_textcursor_create_list_with_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
///
/// ``` QTextCursor* self ```
QTextList* q_textcursor_current_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// ``` QTextCursor* self, int rows, int cols, QTextTableFormat* format ```
QTextTable* q_textcursor_insert_table(void* self, int rows, int cols, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// ``` QTextCursor* self, int rows, int cols ```
QTextTable* q_textcursor_insert_table2(void* self, int rows, int cols);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
///
/// ``` QTextCursor* self ```
QTextTable* q_textcursor_current_table(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
///
/// ``` QTextCursor* self, QTextFrameFormat* format ```
QTextFrame* q_textcursor_insert_frame(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
///
/// ``` QTextCursor* self ```
QTextFrame* q_textcursor_current_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
///
/// ``` QTextCursor* self, QTextDocumentFragment* fragment ```
void q_textcursor_insert_fragment(void* self, void* fragment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
///
/// ``` QTextCursor* self, const char* html ```
void q_textcursor_insert_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// ``` QTextCursor* self, const char* markdown ```
void q_textcursor_insert_markdown(void* self, const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QTextImageFormat* format, enum QTextFrameFormat__Position alignment ```
void q_textcursor_insert_image(void* self, void* format, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QTextImageFormat* format ```
void q_textcursor_insert_image_with_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, const char* name ```
void q_textcursor_insert_image_with_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QImage* image ```
void q_textcursor_insert_image_with_image(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_begin_edit_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_join_previous_edit_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_end_edit_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator!=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_not_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_lesser(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_lesser_or_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator==)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_greater_or_equal(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_greater(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
///
/// ``` QTextCursor* self, QTextCursor* other ```
bool q_textcursor_is_copy_of(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_block_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_column_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#document)
///
/// ``` QTextCursor* self ```
QTextDocument* q_textcursor_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// ``` QTextCursor* self, int pos, enum QTextCursor__MoveMode mode ```
void q_textcursor_set_position2(void* self, int pos, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op, enum QTextCursor__MoveMode param2 ```
bool q_textcursor_move_position2(void* self, int64_t op, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op, enum QTextCursor__MoveMode param2, int n ```
bool q_textcursor_move_position3(void* self, int64_t op, int64_t param2, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// ``` QTextCursor* self, const char* markdown, int features ```
void q_textcursor_insert_markdown2(void* self, const char* markdown, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QImage* image, const char* name ```
void q_textcursor_insert_image2(void* self, void* image, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
///
/// Delete this object from C++ memory.
///
/// ``` QTextCursor* self ```
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
