#include "libqimage.hpp"
#include "libqtextobject.hpp"
#include "libqtextformat.hpp"
#include "libqtextdocument.hpp"
#include "libqtextdocumentfragment.hpp"
#include "libqtextlist.hpp"
#include "libqtexttable.hpp"
#include "libqtextcursor.hpp"
#include "libqtextcursor.h"

QTextCursor* q_textcursor_new() {
    return QTextCursor_new();
}

QTextCursor* q_textcursor_new2(void* document) {
    return QTextCursor_new2((QTextDocument*)document);
}

QTextCursor* q_textcursor_new3(void* frame) {
    return QTextCursor_new3((QTextFrame*)frame);
}

QTextCursor* q_textcursor_new4(void* block) {
    return QTextCursor_new4((QTextBlock*)block);
}

QTextCursor* q_textcursor_new5(void* cursor) {
    return QTextCursor_new5((QTextCursor*)cursor);
}

void q_textcursor_operator_assign(void* self, void* other) {
    QTextCursor_OperatorAssign((QTextCursor*)self, (QTextCursor*)other);
}

void q_textcursor_swap(void* self, void* other) {
    QTextCursor_Swap((QTextCursor*)self, (QTextCursor*)other);
}

bool q_textcursor_is_null(void* self) {
    return QTextCursor_IsNull((QTextCursor*)self);
}

void q_textcursor_set_position(void* self, int pos) {
    QTextCursor_SetPosition((QTextCursor*)self, pos);
}

int32_t q_textcursor_position(void* self) {
    return QTextCursor_Position((QTextCursor*)self);
}

int32_t q_textcursor_position_in_block(void* self) {
    return QTextCursor_PositionInBlock((QTextCursor*)self);
}

int32_t q_textcursor_anchor(void* self) {
    return QTextCursor_Anchor((QTextCursor*)self);
}

void q_textcursor_insert_text(void* self, const char* text) {
    QTextCursor_InsertText((QTextCursor*)self, qstring(text));
}

void q_textcursor_insert_text2(void* self, const char* text, void* format) {
    QTextCursor_InsertText2((QTextCursor*)self, qstring(text), (QTextCharFormat*)format);
}

bool q_textcursor_move_position(void* self, int32_t op) {
    return QTextCursor_MovePosition((QTextCursor*)self, op);
}

bool q_textcursor_visual_navigation(void* self) {
    return QTextCursor_VisualNavigation((QTextCursor*)self);
}

void q_textcursor_set_visual_navigation(void* self, bool b) {
    QTextCursor_SetVisualNavigation((QTextCursor*)self, b);
}

void q_textcursor_set_vertical_movement_x(void* self, int x) {
    QTextCursor_SetVerticalMovementX((QTextCursor*)self, x);
}

int32_t q_textcursor_vertical_movement_x(void* self) {
    return QTextCursor_VerticalMovementX((QTextCursor*)self);
}

void q_textcursor_set_keep_position_on_insert(void* self, bool b) {
    QTextCursor_SetKeepPositionOnInsert((QTextCursor*)self, b);
}

bool q_textcursor_keep_position_on_insert(void* self) {
    return QTextCursor_KeepPositionOnInsert((QTextCursor*)self);
}

void q_textcursor_delete_char(void* self) {
    QTextCursor_DeleteChar((QTextCursor*)self);
}

void q_textcursor_delete_previous_char(void* self) {
    QTextCursor_DeletePreviousChar((QTextCursor*)self);
}

void q_textcursor_select(void* self, int32_t selection) {
    QTextCursor_Select((QTextCursor*)self, selection);
}

bool q_textcursor_has_selection(void* self) {
    return QTextCursor_HasSelection((QTextCursor*)self);
}

bool q_textcursor_has_complex_selection(void* self) {
    return QTextCursor_HasComplexSelection((QTextCursor*)self);
}

void q_textcursor_remove_selected_text(void* self) {
    QTextCursor_RemoveSelectedText((QTextCursor*)self);
}

void q_textcursor_clear_selection(void* self) {
    QTextCursor_ClearSelection((QTextCursor*)self);
}

int32_t q_textcursor_selection_start(void* self) {
    return QTextCursor_SelectionStart((QTextCursor*)self);
}

int32_t q_textcursor_selection_end(void* self) {
    return QTextCursor_SelectionEnd((QTextCursor*)self);
}

const char* q_textcursor_selected_text(void* self) {
    libqt_string _str = QTextCursor_SelectedText((QTextCursor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QTextDocumentFragment* q_textcursor_selection(void* self) {
    return QTextCursor_Selection((QTextCursor*)self);
}

void q_textcursor_selected_table_cells(void* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns) {
    QTextCursor_SelectedTableCells((QTextCursor*)self, firstRow, numRows, firstColumn, numColumns);
}

QTextBlock* q_textcursor_block(void* self) {
    return QTextCursor_Block((QTextCursor*)self);
}

QTextCharFormat* q_textcursor_char_format(void* self) {
    return QTextCursor_CharFormat((QTextCursor*)self);
}

void q_textcursor_set_char_format(void* self, void* format) {
    QTextCursor_SetCharFormat((QTextCursor*)self, (QTextCharFormat*)format);
}

void q_textcursor_merge_char_format(void* self, void* modifier) {
    QTextCursor_MergeCharFormat((QTextCursor*)self, (QTextCharFormat*)modifier);
}

QTextBlockFormat* q_textcursor_block_format(void* self) {
    return QTextCursor_BlockFormat((QTextCursor*)self);
}

void q_textcursor_set_block_format(void* self, void* format) {
    QTextCursor_SetBlockFormat((QTextCursor*)self, (QTextBlockFormat*)format);
}

void q_textcursor_merge_block_format(void* self, void* modifier) {
    QTextCursor_MergeBlockFormat((QTextCursor*)self, (QTextBlockFormat*)modifier);
}

QTextCharFormat* q_textcursor_block_char_format(void* self) {
    return QTextCursor_BlockCharFormat((QTextCursor*)self);
}

void q_textcursor_set_block_char_format(void* self, void* format) {
    QTextCursor_SetBlockCharFormat((QTextCursor*)self, (QTextCharFormat*)format);
}

void q_textcursor_merge_block_char_format(void* self, void* modifier) {
    QTextCursor_MergeBlockCharFormat((QTextCursor*)self, (QTextCharFormat*)modifier);
}

bool q_textcursor_at_block_start(void* self) {
    return QTextCursor_AtBlockStart((QTextCursor*)self);
}

bool q_textcursor_at_block_end(void* self) {
    return QTextCursor_AtBlockEnd((QTextCursor*)self);
}

bool q_textcursor_at_start(void* self) {
    return QTextCursor_AtStart((QTextCursor*)self);
}

bool q_textcursor_at_end(void* self) {
    return QTextCursor_AtEnd((QTextCursor*)self);
}

void q_textcursor_insert_block(void* self) {
    QTextCursor_InsertBlock((QTextCursor*)self);
}

void q_textcursor_insert_block2(void* self, void* format) {
    QTextCursor_InsertBlock2((QTextCursor*)self, (QTextBlockFormat*)format);
}

void q_textcursor_insert_block3(void* self, void* format, void* charFormat) {
    QTextCursor_InsertBlock3((QTextCursor*)self, (QTextBlockFormat*)format, (QTextCharFormat*)charFormat);
}

QTextList* q_textcursor_insert_list(void* self, void* format) {
    return QTextCursor_InsertList((QTextCursor*)self, (QTextListFormat*)format);
}

QTextList* q_textcursor_insert_list2(void* self, int32_t style) {
    return QTextCursor_InsertList2((QTextCursor*)self, style);
}

QTextList* q_textcursor_create_list(void* self, void* format) {
    return QTextCursor_CreateList((QTextCursor*)self, (QTextListFormat*)format);
}

QTextList* q_textcursor_create_list2(void* self, int32_t style) {
    return QTextCursor_CreateList2((QTextCursor*)self, style);
}

QTextList* q_textcursor_current_list(void* self) {
    return QTextCursor_CurrentList((QTextCursor*)self);
}

QTextTable* q_textcursor_insert_table(void* self, int rows, int cols, void* format) {
    return QTextCursor_InsertTable((QTextCursor*)self, rows, cols, (QTextTableFormat*)format);
}

QTextTable* q_textcursor_insert_table2(void* self, int rows, int cols) {
    return QTextCursor_InsertTable2((QTextCursor*)self, rows, cols);
}

QTextTable* q_textcursor_current_table(void* self) {
    return QTextCursor_CurrentTable((QTextCursor*)self);
}

QTextFrame* q_textcursor_insert_frame(void* self, void* format) {
    return QTextCursor_InsertFrame((QTextCursor*)self, (QTextFrameFormat*)format);
}

QTextFrame* q_textcursor_current_frame(void* self) {
    return QTextCursor_CurrentFrame((QTextCursor*)self);
}

void q_textcursor_insert_fragment(void* self, void* fragment) {
    QTextCursor_InsertFragment((QTextCursor*)self, (QTextDocumentFragment*)fragment);
}

void q_textcursor_insert_html(void* self, const char* html) {
    QTextCursor_InsertHtml((QTextCursor*)self, qstring(html));
}

void q_textcursor_insert_markdown(void* self, const char* markdown) {
    QTextCursor_InsertMarkdown((QTextCursor*)self, qstring(markdown));
}

void q_textcursor_insert_image(void* self, void* format, int32_t alignment) {
    QTextCursor_InsertImage((QTextCursor*)self, (QTextImageFormat*)format, alignment);
}

void q_textcursor_insert_image2(void* self, void* format) {
    QTextCursor_InsertImage2((QTextCursor*)self, (QTextImageFormat*)format);
}

void q_textcursor_insert_image3(void* self, const char* name) {
    QTextCursor_InsertImage3((QTextCursor*)self, qstring(name));
}

void q_textcursor_insert_image4(void* self, void* image) {
    QTextCursor_InsertImage4((QTextCursor*)self, (QImage*)image);
}

void q_textcursor_begin_edit_block(void* self) {
    QTextCursor_BeginEditBlock((QTextCursor*)self);
}

void q_textcursor_join_previous_edit_block(void* self) {
    QTextCursor_JoinPreviousEditBlock((QTextCursor*)self);
}

void q_textcursor_end_edit_block(void* self) {
    QTextCursor_EndEditBlock((QTextCursor*)self);
}

bool q_textcursor_operator_not_equal(void* self, void* rhs) {
    return QTextCursor_OperatorNotEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_operator_lesser(void* self, void* rhs) {
    return QTextCursor_OperatorLesser((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_operator_lesser_or_equal(void* self, void* rhs) {
    return QTextCursor_OperatorLesserOrEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_operator_equal(void* self, void* rhs) {
    return QTextCursor_OperatorEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_operator_greater_or_equal(void* self, void* rhs) {
    return QTextCursor_OperatorGreaterOrEqual((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_operator_greater(void* self, void* rhs) {
    return QTextCursor_OperatorGreater((QTextCursor*)self, (QTextCursor*)rhs);
}

bool q_textcursor_is_copy_of(void* self, void* other) {
    return QTextCursor_IsCopyOf((QTextCursor*)self, (QTextCursor*)other);
}

int32_t q_textcursor_block_number(void* self) {
    return QTextCursor_BlockNumber((QTextCursor*)self);
}

int32_t q_textcursor_column_number(void* self) {
    return QTextCursor_ColumnNumber((QTextCursor*)self);
}

QTextDocument* q_textcursor_document(void* self) {
    return QTextCursor_Document((QTextCursor*)self);
}

void q_textcursor_set_position2(void* self, int pos, int32_t mode) {
    QTextCursor_SetPosition2((QTextCursor*)self, pos, mode);
}

bool q_textcursor_move_position2(void* self, int32_t op, int32_t param2) {
    return QTextCursor_MovePosition2((QTextCursor*)self, op, param2);
}

bool q_textcursor_move_position3(void* self, int32_t op, int32_t param2, int n) {
    return QTextCursor_MovePosition3((QTextCursor*)self, op, param2, n);
}

void q_textcursor_insert_markdown2(void* self, const char* markdown, int32_t features) {
    QTextCursor_InsertMarkdown2((QTextCursor*)self, qstring(markdown), features);
}

void q_textcursor_insert_image22(void* self, void* image, const char* name) {
    QTextCursor_InsertImage22((QTextCursor*)self, (QImage*)image, qstring(name));
}

void q_textcursor_delete(void* self) {
    QTextCursor_Delete((QTextCursor*)(self));
}
