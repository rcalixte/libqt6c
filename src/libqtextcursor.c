#include "libqimage.hpp"
#include <string.h>
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextdocument.hpp"
#include "libqtextdocumentfragment.hpp"
#include "libqtextlist.hpp"
#include "libqtexttable.hpp"
#include "libqtextcursor.hpp"
#include "libqtextcursor.h"

/// https://doc.qt.io/qt-6/qtextcursor.html

/// q_textcursor_new constructs a new QTextCursor object.
///
///
QTextCursor* q_textcursor_new() {
    return QTextCursor_new();
}

/// q_textcursor_new2 constructs a new QTextCursor object.
///
/// ``` QTextDocument* document ```
QTextCursor* q_textcursor_new2(void* document) {
    return QTextCursor_new2((QTextDocument*)document);
}

/// q_textcursor_new3 constructs a new QTextCursor object.
///
/// ``` QTextFrame* frame ```
QTextCursor* q_textcursor_new3(void* frame) {
    return QTextCursor_new3((QTextFrame*)frame);
}

/// q_textcursor_new4 constructs a new QTextCursor object.
///
/// ``` QTextBlock* block ```
QTextCursor* q_textcursor_new4(void* block) {
    return QTextCursor_new4((QTextBlock*)block);
}

/// q_textcursor_new5 constructs a new QTextCursor object.
///
/// ``` QTextCursor* cursor ```
QTextCursor* q_textcursor_new5(void* cursor) {
    return QTextCursor_new5((QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator=)
///
/// ``` QTextCursor* self, QTextCursor* other ```
void q_textcursor_operator_assign(void* self, void* other) {
    QTextCursor_OperatorAssign((QTextCursor*)self, (QTextCursor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#swap)
///
/// ``` QTextCursor* self, QTextCursor* other ```
void q_textcursor_swap(void* self, void* other) {
    QTextCursor_Swap((QTextCursor*)self, (QTextCursor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isNull)
///
/// ``` QTextCursor* self ```
bool q_textcursor_is_null(void* self) {
    return QTextCursor_IsNull((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// ``` QTextCursor* self, int pos ```
void q_textcursor_set_position(void* self, int pos) {
    QTextCursor_SetPosition((QTextCursor*)self, pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#position)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_position(void* self) {
    return QTextCursor_Position((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#positionInBlock)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_position_in_block(void* self) {
    return QTextCursor_PositionInBlock((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#anchor)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_anchor(void* self) {
    return QTextCursor_Anchor((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// ``` QTextCursor* self, const char* text ```
void q_textcursor_insert_text(void* self, const char* text) {
    QTextCursor_InsertText((QTextCursor*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertText)
///
/// ``` QTextCursor* self, const char* text, QTextCharFormat* format ```
void q_textcursor_insert_text2(void* self, const char* text, void* format) {
    QTextCursor_InsertText2((QTextCursor*)self, qstring(text), (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op ```
bool q_textcursor_move_position(void* self, int64_t op) {
    return QTextCursor_MovePosition((QTextCursor*)self, op);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#visualNavigation)
///
/// ``` QTextCursor* self ```
bool q_textcursor_visual_navigation(void* self) {
    return QTextCursor_VisualNavigation((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVisualNavigation)
///
/// ``` QTextCursor* self, bool b ```
void q_textcursor_set_visual_navigation(void* self, bool b) {
    QTextCursor_SetVisualNavigation((QTextCursor*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setVerticalMovementX)
///
/// ``` QTextCursor* self, int x ```
void q_textcursor_set_vertical_movement_x(void* self, int x) {
    QTextCursor_SetVerticalMovementX((QTextCursor*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#verticalMovementX)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_vertical_movement_x(void* self) {
    return QTextCursor_VerticalMovementX((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setKeepPositionOnInsert)
///
/// ``` QTextCursor* self, bool b ```
void q_textcursor_set_keep_position_on_insert(void* self, bool b) {
    QTextCursor_SetKeepPositionOnInsert((QTextCursor*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#keepPositionOnInsert)
///
/// ``` QTextCursor* self ```
bool q_textcursor_keep_position_on_insert(void* self) {
    return QTextCursor_KeepPositionOnInsert((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deleteChar)
///
/// ``` QTextCursor* self ```
void q_textcursor_delete_char(void* self) {
    QTextCursor_DeleteChar((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#deletePreviousChar)
///
/// ``` QTextCursor* self ```
void q_textcursor_delete_previous_char(void* self) {
    QTextCursor_DeletePreviousChar((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#select)
///
/// ``` QTextCursor* self, enum QTextCursor__SelectionType selection ```
void q_textcursor_select(void* self, int64_t selection) {
    QTextCursor_Select((QTextCursor*)self, selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasSelection)
///
/// ``` QTextCursor* self ```
bool q_textcursor_has_selection(void* self) {
    return QTextCursor_HasSelection((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#hasComplexSelection)
///
/// ``` QTextCursor* self ```
bool q_textcursor_has_complex_selection(void* self) {
    return QTextCursor_HasComplexSelection((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#removeSelectedText)
///
/// ``` QTextCursor* self ```
void q_textcursor_remove_selected_text(void* self) {
    QTextCursor_RemoveSelectedText((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#clearSelection)
///
/// ``` QTextCursor* self ```
void q_textcursor_clear_selection(void* self) {
    QTextCursor_ClearSelection((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionStart)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_selection_start(void* self) {
    return QTextCursor_SelectionStart((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectionEnd)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_selection_end(void* self) {
    return QTextCursor_SelectionEnd((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedText)
///
/// ``` QTextCursor* self ```
const char* q_textcursor_selected_text(void* self) {
    libqt_string _str = QTextCursor_SelectedText((QTextCursor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selection)
///
/// ``` QTextCursor* self ```
QTextDocumentFragment* q_textcursor_selection(void* self) {
    return QTextCursor_Selection((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#selectedTableCells)
///
/// ``` QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns ```
void q_textcursor_selected_table_cells(void* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns) {
    QTextCursor_SelectedTableCells((QTextCursor*)self, firstRow, numRows, firstColumn, numColumns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#block)
///
/// ``` QTextCursor* self ```
QTextBlock* q_textcursor_block(void* self) {
    return QTextCursor_Block((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#charFormat)
///
/// ``` QTextCursor* self ```
QTextCharFormat* q_textcursor_char_format(void* self) {
    return QTextCursor_CharFormat((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* format ```
void q_textcursor_set_char_format(void* self, void* format) {
    QTextCursor_SetCharFormat((QTextCursor*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* modifier ```
void q_textcursor_merge_char_format(void* self, void* modifier) {
    QTextCursor_MergeCharFormat((QTextCursor*)self, (QTextCharFormat*)modifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockFormat)
///
/// ``` QTextCursor* self ```
QTextBlockFormat* q_textcursor_block_format(void* self) {
    return QTextCursor_BlockFormat((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockFormat)
///
/// ``` QTextCursor* self, QTextBlockFormat* format ```
void q_textcursor_set_block_format(void* self, void* format) {
    QTextCursor_SetBlockFormat((QTextCursor*)self, (QTextBlockFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockFormat)
///
/// ``` QTextCursor* self, QTextBlockFormat* modifier ```
void q_textcursor_merge_block_format(void* self, void* modifier) {
    QTextCursor_MergeBlockFormat((QTextCursor*)self, (QTextBlockFormat*)modifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockCharFormat)
///
/// ``` QTextCursor* self ```
QTextCharFormat* q_textcursor_block_char_format(void* self) {
    return QTextCursor_BlockCharFormat((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setBlockCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* format ```
void q_textcursor_set_block_char_format(void* self, void* format) {
    QTextCursor_SetBlockCharFormat((QTextCursor*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#mergeBlockCharFormat)
///
/// ``` QTextCursor* self, QTextCharFormat* modifier ```
void q_textcursor_merge_block_char_format(void* self, void* modifier) {
    QTextCursor_MergeBlockCharFormat((QTextCursor*)self, (QTextCharFormat*)modifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockStart)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_block_start(void* self) {
    return QTextCursor_AtBlockStart((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atBlockEnd)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_block_end(void* self) {
    return QTextCursor_AtBlockEnd((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atStart)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_start(void* self) {
    return QTextCursor_AtStart((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#atEnd)
///
/// ``` QTextCursor* self ```
bool q_textcursor_at_end(void* self) {
    return QTextCursor_AtEnd((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_insert_block(void* self) {
    QTextCursor_InsertBlock((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self, QTextBlockFormat* format ```
void q_textcursor_insert_block_with_format(void* self, void* format) {
    QTextCursor_InsertBlockWithFormat((QTextCursor*)self, (QTextBlockFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertBlock)
///
/// ``` QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat ```
void q_textcursor_insert_block2(void* self, void* format, void* charFormat) {
    QTextCursor_InsertBlock2((QTextCursor*)self, (QTextBlockFormat*)format, (QTextCharFormat*)charFormat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// ``` QTextCursor* self, QTextListFormat* format ```
QTextList* q_textcursor_insert_list(void* self, void* format) {
    return QTextCursor_InsertList((QTextCursor*)self, (QTextListFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertList)
///
/// ``` QTextCursor* self, enum QTextListFormat__Style style ```
QTextList* q_textcursor_insert_list_with_style(void* self, int64_t style) {
    return QTextCursor_InsertListWithStyle((QTextCursor*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// ``` QTextCursor* self, QTextListFormat* format ```
QTextList* q_textcursor_create_list(void* self, void* format) {
    return QTextCursor_CreateList((QTextCursor*)self, (QTextListFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#createList)
///
/// ``` QTextCursor* self, enum QTextListFormat__Style style ```
QTextList* q_textcursor_create_list_with_style(void* self, int64_t style) {
    return QTextCursor_CreateListWithStyle((QTextCursor*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentList)
///
/// ``` QTextCursor* self ```
QTextList* q_textcursor_current_list(void* self) {
    return QTextCursor_CurrentList((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// ``` QTextCursor* self, int rows, int cols, QTextTableFormat* format ```
QTextTable* q_textcursor_insert_table(void* self, int rows, int cols, void* format) {
    return QTextCursor_InsertTable((QTextCursor*)self, rows, cols, (QTextTableFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertTable)
///
/// ``` QTextCursor* self, int rows, int cols ```
QTextTable* q_textcursor_insert_table2(void* self, int rows, int cols) {
    return QTextCursor_InsertTable2((QTextCursor*)self, rows, cols);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentTable)
///
/// ``` QTextCursor* self ```
QTextTable* q_textcursor_current_table(void* self) {
    return QTextCursor_CurrentTable((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFrame)
///
/// ``` QTextCursor* self, QTextFrameFormat* format ```
QTextFrame* q_textcursor_insert_frame(void* self, void* format) {
    return QTextCursor_InsertFrame((QTextCursor*)self, (QTextFrameFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#currentFrame)
///
/// ``` QTextCursor* self ```
QTextFrame* q_textcursor_current_frame(void* self) {
    return QTextCursor_CurrentFrame((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertFragment)
///
/// ``` QTextCursor* self, QTextDocumentFragment* fragment ```
void q_textcursor_insert_fragment(void* self, void* fragment) {
    QTextCursor_InsertFragment((QTextCursor*)self, (QTextDocumentFragment*)fragment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertHtml)
///
/// ``` QTextCursor* self, const char* html ```
void q_textcursor_insert_html(void* self, const char* html) {
    QTextCursor_InsertHtml((QTextCursor*)self, qstring(html));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// ``` QTextCursor* self, const char* markdown ```
void q_textcursor_insert_markdown(void* self, const char* markdown) {
    QTextCursor_InsertMarkdown((QTextCursor*)self, qstring(markdown));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QTextImageFormat* format, enum QTextFrameFormat__Position alignment ```
void q_textcursor_insert_image(void* self, void* format, int64_t alignment) {
    QTextCursor_InsertImage((QTextCursor*)self, (QTextImageFormat*)format, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QTextImageFormat* format ```
void q_textcursor_insert_image_with_format(void* self, void* format) {
    QTextCursor_InsertImageWithFormat((QTextCursor*)self, (QTextImageFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, const char* name ```
void q_textcursor_insert_image_with_name(void* self, const char* name) {
    QTextCursor_InsertImageWithName((QTextCursor*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QImage* image ```
void q_textcursor_insert_image_with_image(void* self, void* image) {
    QTextCursor_InsertImageWithImage((QTextCursor*)self, (QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#beginEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_begin_edit_block(void* self) {
    QTextCursor_BeginEditBlock((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#joinPreviousEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_join_previous_edit_block(void* self) {
    QTextCursor_JoinPreviousEditBlock((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#endEditBlock)
///
/// ``` QTextCursor* self ```
void q_textcursor_end_edit_block(void* self) {
    QTextCursor_EndEditBlock((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator!=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_not_equal(void* self, void* rhs) {
    return QTextCursor_OperatorNotEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_lesser(void* self, void* rhs) {
    return QTextCursor_OperatorLesser((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator<=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_lesser_or_equal(void* self, void* rhs) {
    return QTextCursor_OperatorLesserOrEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator==)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_equal(void* self, void* rhs) {
    return QTextCursor_OperatorEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>=)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_greater_or_equal(void* self, void* rhs) {
    return QTextCursor_OperatorGreaterOrEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#operator>)
///
/// ``` QTextCursor* self, QTextCursor* rhs ```
bool q_textcursor_operator_greater(void* self, void* rhs) {
    return QTextCursor_OperatorGreater((QTextCursor*)self, (QTextCursor*)rhs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#isCopyOf)
///
/// ``` QTextCursor* self, QTextCursor* other ```
bool q_textcursor_is_copy_of(void* self, void* other) {
    return QTextCursor_IsCopyOf((QTextCursor*)self, (QTextCursor*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#blockNumber)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_block_number(void* self) {
    return QTextCursor_BlockNumber((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#columnNumber)
///
/// ``` QTextCursor* self ```
int32_t q_textcursor_column_number(void* self) {
    return QTextCursor_ColumnNumber((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#document)
///
/// ``` QTextCursor* self ```
QTextDocument* q_textcursor_document(void* self) {
    return QTextCursor_Document((QTextCursor*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#setPosition)
///
/// ``` QTextCursor* self, int pos, enum QTextCursor__MoveMode mode ```
void q_textcursor_set_position2(void* self, int pos, int64_t mode) {
    QTextCursor_SetPosition2((QTextCursor*)self, pos, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op, enum QTextCursor__MoveMode param2 ```
bool q_textcursor_move_position2(void* self, int64_t op, int64_t param2) {
    return QTextCursor_MovePosition2((QTextCursor*)self, op, param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#movePosition)
///
/// ``` QTextCursor* self, enum QTextCursor__MoveOperation op, enum QTextCursor__MoveMode param2, int n ```
bool q_textcursor_move_position3(void* self, int64_t op, int64_t param2, int n) {
    return QTextCursor_MovePosition3((QTextCursor*)self, op, param2, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertMarkdown)
///
/// ``` QTextCursor* self, const char* markdown, int features ```
void q_textcursor_insert_markdown2(void* self, const char* markdown, int64_t features) {
    QTextCursor_InsertMarkdown2((QTextCursor*)self, qstring(markdown), features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextcursor.html#insertImage)
///
/// ``` QTextCursor* self, QImage* image, const char* name ```
void q_textcursor_insert_image2(void* self, void* image, const char* name) {
    QTextCursor_InsertImage2((QTextCursor*)self, (QImage*)image, qstring(name));
}

/// Delete this object from C++ memory.
///
/// ``` QTextCursor* self ```
void q_textcursor_delete(void* self) {
    QTextCursor_Delete((QTextCursor*)(self));
}