#pragma once
#ifndef SRC_QT6C_LIBQTEXTCURSOR_H
#define SRC_QT6C_LIBQTEXTCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)

/// q_textcursor_new constructs a new QTextCursor object.
///
QTextCursor* q_textcursor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)

/// q_textcursor_new2 constructs a new QTextCursor object.
///
/// @param document QTextDocument*
///
QTextCursor* q_textcursor_new2(void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)

/// q_textcursor_new3 constructs a new QTextCursor object.
///
/// @param frame QTextFrame*
///
QTextCursor* q_textcursor_new3(void* frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)

/// q_textcursor_new4 constructs a new QTextCursor object.
///
/// @param block QTextBlock*
///
QTextCursor* q_textcursor_new4(void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html)

/// q_textcursor_new5 constructs a new QTextCursor object.
///
/// @param cursor QTextCursor*
///
QTextCursor* q_textcursor_new5(void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq)
///
/// @param self QTextCursor*
/// @param other QTextCursor*
///
void q_textcursor_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#swap)
///
/// @param self QTextCursor*
/// @param other QTextCursor*
///
void q_textcursor_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
///
/// @param self QTextCursor*
///
bool q_textcursor_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// @param self QTextCursor*
/// @param pos int
///
void q_textcursor_set_position(void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#position)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_position_in_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_anchor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// @param self QTextCursor*
/// @param text const char*
///
void q_textcursor_insert_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// @param self QTextCursor*
/// @param text const char*
/// @param format QTextCharFormat*
///
void q_textcursor_insert_text2(void* self, const char* text, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// @param self QTextCursor*
/// @param op enum QTextCursor__MoveOperation
///
bool q_textcursor_move_position(void* self, int32_t op);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
///
/// @param self QTextCursor*
///
bool q_textcursor_visual_navigation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
///
/// @param self QTextCursor*
/// @param b bool
///
void q_textcursor_set_visual_navigation(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
///
/// @param self QTextCursor*
/// @param x int
///
void q_textcursor_set_vertical_movement_x(void* self, int x);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_vertical_movement_x(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
///
/// @param self QTextCursor*
/// @param b bool
///
void q_textcursor_set_keep_position_on_insert(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
///
/// @param self QTextCursor*
///
bool q_textcursor_keep_position_on_insert(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
///
/// @param self QTextCursor*
///
void q_textcursor_delete_char(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
///
/// @param self QTextCursor*
///
void q_textcursor_delete_previous_char(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#select)
///
/// @param self QTextCursor*
/// @param selection enum QTextCursor__SelectionType
///
void q_textcursor_select(void* self, int32_t selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
///
/// @param self QTextCursor*
///
bool q_textcursor_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
///
/// @param self QTextCursor*
///
bool q_textcursor_has_complex_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
///
/// @param self QTextCursor*
///
void q_textcursor_remove_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
///
/// @param self QTextCursor*
///
void q_textcursor_clear_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_selection_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_selection_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextCursor*
///
const char* q_textcursor_selected_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selection)
///
/// @param self QTextCursor*
///
QTextDocumentFragment* q_textcursor_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
///
/// @param self QTextCursor*
/// @param firstRow int*
/// @param numRows int*
/// @param firstColumn int*
/// @param numColumns int*
///
void q_textcursor_selected_table_cells(void* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#block)
///
/// @param self QTextCursor*
///
QTextBlock* q_textcursor_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
///
/// @param self QTextCursor*
///
QTextCharFormat* q_textcursor_char_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
///
/// @param self QTextCursor*
/// @param format QTextCharFormat*
///
void q_textcursor_set_char_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
///
/// @param self QTextCursor*
/// @param modifier QTextCharFormat*
///
void q_textcursor_merge_char_format(void* self, void* modifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
///
/// @param self QTextCursor*
///
QTextBlockFormat* q_textcursor_block_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
///
/// @param self QTextCursor*
/// @param format QTextBlockFormat*
///
void q_textcursor_set_block_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
///
/// @param self QTextCursor*
/// @param modifier QTextBlockFormat*
///
void q_textcursor_merge_block_format(void* self, void* modifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
///
/// @param self QTextCursor*
///
QTextCharFormat* q_textcursor_block_char_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
///
/// @param self QTextCursor*
/// @param format QTextCharFormat*
///
void q_textcursor_set_block_char_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
///
/// @param self QTextCursor*
/// @param modifier QTextCharFormat*
///
void q_textcursor_merge_block_char_format(void* self, void* modifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
///
/// @param self QTextCursor*
///
bool q_textcursor_at_block_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
///
/// @param self QTextCursor*
///
bool q_textcursor_at_block_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
///
/// @param self QTextCursor*
///
bool q_textcursor_at_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
///
/// @param self QTextCursor*
///
bool q_textcursor_at_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// @param self QTextCursor*
///
void q_textcursor_insert_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// @param self QTextCursor*
/// @param format QTextBlockFormat*
///
void q_textcursor_insert_block2(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// @param self QTextCursor*
/// @param format QTextBlockFormat*
/// @param charFormat QTextCharFormat*
///
void q_textcursor_insert_block3(void* self, void* format, void* charFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// @param self QTextCursor*
/// @param format QTextListFormat*
///
QTextList* q_textcursor_insert_list(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// @param self QTextCursor*
/// @param style enum QTextListFormat__Style
///
QTextList* q_textcursor_insert_list2(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// @param self QTextCursor*
/// @param format QTextListFormat*
///
QTextList* q_textcursor_create_list(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// @param self QTextCursor*
/// @param style enum QTextListFormat__Style
///
QTextList* q_textcursor_create_list2(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
///
/// @param self QTextCursor*
///
QTextList* q_textcursor_current_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// @param self QTextCursor*
/// @param rows int
/// @param cols int
/// @param format QTextTableFormat*
///
QTextTable* q_textcursor_insert_table(void* self, int rows, int cols, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// @param self QTextCursor*
/// @param rows int
/// @param cols int
///
QTextTable* q_textcursor_insert_table2(void* self, int rows, int cols);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
///
/// @param self QTextCursor*
///
QTextTable* q_textcursor_current_table(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
///
/// @param self QTextCursor*
/// @param format QTextFrameFormat*
///
QTextFrame* q_textcursor_insert_frame(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
///
/// @param self QTextCursor*
///
QTextFrame* q_textcursor_current_frame(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
///
/// @param self QTextCursor*
/// @param fragment QTextDocumentFragment*
///
void q_textcursor_insert_fragment(void* self, void* fragment);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
///
/// @param self QTextCursor*
/// @param html const char*
///
void q_textcursor_insert_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// @param self QTextCursor*
/// @param markdown const char*
///
void q_textcursor_insert_markdown(void* self, const char* markdown);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// @param self QTextCursor*
/// @param format QTextImageFormat*
/// @param alignment enum QTextFrameFormat__Position
///
void q_textcursor_insert_image(void* self, void* format, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// @param self QTextCursor*
/// @param format QTextImageFormat*
///
void q_textcursor_insert_image2(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// @param self QTextCursor*
/// @param name const char*
///
void q_textcursor_insert_image3(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// @param self QTextCursor*
/// @param image QImage*
///
void q_textcursor_insert_image4(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
///
/// @param self QTextCursor*
///
void q_textcursor_begin_edit_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
///
/// @param self QTextCursor*
///
void q_textcursor_join_previous_edit_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
///
/// @param self QTextCursor*
///
void q_textcursor_end_edit_block(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-not-eq)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_not_equal(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_lesser(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-lt-eq)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_lesser_or_equal(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-eq-eq)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt-eq)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_greater_or_equal(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#operator-gt)
///
/// @param self QTextCursor*
/// @param rhs QTextCursor*
///
bool q_textcursor_operator_greater(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
///
/// @param self QTextCursor*
/// @param other QTextCursor*
///
bool q_textcursor_is_copy_of(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_block_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
///
/// @param self QTextCursor*
///
int32_t q_textcursor_column_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#document)
///
/// @param self QTextCursor*
///
QTextDocument* q_textcursor_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// @param self QTextCursor*
/// @param pos int
/// @param mode enum QTextCursor__MoveMode
///
void q_textcursor_set_position2(void* self, int pos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// @param self QTextCursor*
/// @param op enum QTextCursor__MoveOperation
/// @param param2 enum QTextCursor__MoveMode
///
bool q_textcursor_move_position2(void* self, int32_t op, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// @param self QTextCursor*
/// @param op enum QTextCursor__MoveOperation
/// @param param2 enum QTextCursor__MoveMode
/// @param n int
///
bool q_textcursor_move_position3(void* self, int32_t op, int32_t param2, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// @param self QTextCursor*
/// @param markdown const char*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
void q_textcursor_insert_markdown2(void* self, const char* markdown, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// @param self QTextCursor*
/// @param image QImage*
/// @param name const char*
///
void q_textcursor_insert_image22(void* self, void* image, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#dtor.QTextCursor)
///
/// Delete this object from C++ memory.
///
/// @param self QTextCursor*
///
void q_textcursor_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#public-types)

typedef enum {
    QTEXTCURSOR_MOVEMODE_MOVEANCHOR = 0,
    QTEXTCURSOR_MOVEMODE_KEEPANCHOR = 1
} QTextCursor__MoveMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qtextcursor.html#public-types)

typedef enum {
    QTEXTCURSOR_SELECTIONTYPE_WORDUNDERCURSOR = 0,
    QTEXTCURSOR_SELECTIONTYPE_LINEUNDERCURSOR = 1,
    QTEXTCURSOR_SELECTIONTYPE_BLOCKUNDERCURSOR = 2,
    QTEXTCURSOR_SELECTIONTYPE_DOCUMENT = 3
} QTextCursor__SelectionType;

#endif
