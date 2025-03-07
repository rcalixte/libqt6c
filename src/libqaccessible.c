#include "libqevent.hpp"
#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqaccessible.hpp"
#include "libqaccessible.h"

/// https://doc.qt.io/qt-6/qaccessibleinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
///
/// ``` QAccessibleInterface* self ```
bool q_accessibleinterface_is_valid(void* self) {
    return QAccessibleInterface_IsValid((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
///
/// ``` QAccessibleInterface* self ```
QObject* q_accessibleinterface_object(void* self) {
    return QAccessibleInterface_Object((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// ``` QAccessibleInterface* self ```
QWindow* q_accessibleinterface_window(void* self) {
    return QAccessibleInterface_Window((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// ``` QAccessibleInterface* self, int match ```
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleinterface_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleInterface_Relations((QAccessibleInterface*)self, match);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// ``` QAccessibleInterface* self ```
QAccessibleInterface* q_accessibleinterface_focus_child(void* self) {
    return QAccessibleInterface_FocusChild((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
///
/// ``` QAccessibleInterface* self, int x, int y ```
QAccessibleInterface* q_accessibleinterface_child_at(void* self, int x, int y) {
    return QAccessibleInterface_ChildAt((QAccessibleInterface*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// ``` QAccessibleInterface* self ```
QAccessibleInterface* q_accessibleinterface_parent(void* self) {
    return QAccessibleInterface_Parent((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// ``` QAccessibleInterface* self, int index ```
QAccessibleInterface* q_accessibleinterface_child(void* self, int index) {
    return QAccessibleInterface_Child((QAccessibleInterface*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// ``` QAccessibleInterface* self ```
int32_t q_accessibleinterface_child_count(void* self) {
    return QAccessibleInterface_ChildCount((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// ``` QAccessibleInterface* self, QAccessibleInterface* param1 ```
int32_t q_accessibleinterface_index_of_child(void* self, void* param1) {
    return QAccessibleInterface_IndexOfChild((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// ``` QAccessibleInterface* self, enum QAccessible__Text t ```
const char* q_accessibleinterface_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleInterface_Text((QAccessibleInterface*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
///
/// ``` QAccessibleInterface* self, enum QAccessible__Text t, const char* text ```
void q_accessibleinterface_set_text(void* self, int64_t t, const char* text) {
    QAccessibleInterface_SetText((QAccessibleInterface*)self, t, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
///
/// ``` QAccessibleInterface* self ```
QRect* q_accessibleinterface_rect(void* self) {
    return QAccessibleInterface_Rect((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// ``` QAccessibleInterface* self ```
int64_t q_accessibleinterface_role(void* self) {
    return QAccessibleInterface_Role((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// ``` QAccessibleInterface* self ```
QAccessible__State* q_accessibleinterface_state(void* self) {
    return QAccessibleInterface_State((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// ``` QAccessibleInterface* self ```
QColor* q_accessibleinterface_foreground_color(void* self) {
    return QAccessibleInterface_ForegroundColor((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// ``` QAccessibleInterface* self ```
QColor* q_accessibleinterface_background_color(void* self) {
    return QAccessibleInterface_BackgroundColor((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleTextInterface* q_accessibleinterface_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleEditableTextInterface* q_accessibleinterface_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleValueInterface* q_accessibleinterface_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleActionInterface* q_accessibleinterface_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleImageInterface* q_accessibleinterface_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleTableInterface* q_accessibleinterface_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleTableCellInterface* q_accessibleinterface_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// ``` QAccessibleInterface* self ```
QAccessibleHyperlinkInterface* q_accessibleinterface_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// ``` QAccessibleInterface* self, int id, void* data ```
void q_accessibleinterface_virtual_hook(void* self, int id, void* data) {
    QAccessibleInterface_VirtualHook((QAccessibleInterface*)self, id, data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// ``` QAccessibleInterface* self, enum QAccessible__InterfaceType param1 ```
void* q_accessibleinterface_interface_cast(void* self, int64_t param1) {
    return QAccessibleInterface_InterfaceCast((QAccessibleInterface*)self, param1);
}

/// https://doc.qt.io/qt-6/qaccessibletextinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
///
/// ``` QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset ```
void q_accessibletextinterface_selection(void* self, int selectionIndex, int* startOffset, int* endOffset) {
    QAccessibleTextInterface_Selection((QAccessibleTextInterface*)self, selectionIndex, startOffset, endOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
///
/// ``` QAccessibleTextInterface* self ```
int32_t q_accessibletextinterface_selection_count(void* self) {
    return QAccessibleTextInterface_SelectionCount((QAccessibleTextInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
///
/// ``` QAccessibleTextInterface* self, int startOffset, int endOffset ```
void q_accessibletextinterface_add_selection(void* self, int startOffset, int endOffset) {
    QAccessibleTextInterface_AddSelection((QAccessibleTextInterface*)self, startOffset, endOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
///
/// ``` QAccessibleTextInterface* self, int selectionIndex ```
void q_accessibletextinterface_remove_selection(void* self, int selectionIndex) {
    QAccessibleTextInterface_RemoveSelection((QAccessibleTextInterface*)self, selectionIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
///
/// ``` QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset ```
void q_accessibletextinterface_set_selection(void* self, int selectionIndex, int startOffset, int endOffset) {
    QAccessibleTextInterface_SetSelection((QAccessibleTextInterface*)self, selectionIndex, startOffset, endOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
///
/// ``` QAccessibleTextInterface* self ```
int32_t q_accessibletextinterface_cursor_position(void* self) {
    return QAccessibleTextInterface_CursorPosition((QAccessibleTextInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
///
/// ``` QAccessibleTextInterface* self, int position ```
void q_accessibletextinterface_set_cursor_position(void* self, int position) {
    QAccessibleTextInterface_SetCursorPosition((QAccessibleTextInterface*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
///
/// ``` QAccessibleTextInterface* self, int startOffset, int endOffset ```
const char* q_accessibletextinterface_text(void* self, int startOffset, int endOffset) {
    libqt_string _str = QAccessibleTextInterface_Text((QAccessibleTextInterface*)self, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
///
/// ``` QAccessibleTextInterface* self, int offset, enum QAccessible__TextBoundaryType boundaryType, int* startOffset, int* endOffset ```
const char* q_accessibletextinterface_text_before_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextBeforeOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
///
/// ``` QAccessibleTextInterface* self, int offset, enum QAccessible__TextBoundaryType boundaryType, int* startOffset, int* endOffset ```
const char* q_accessibletextinterface_text_after_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextAfterOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
///
/// ``` QAccessibleTextInterface* self, int offset, enum QAccessible__TextBoundaryType boundaryType, int* startOffset, int* endOffset ```
const char* q_accessibletextinterface_text_at_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextAtOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
///
/// ``` QAccessibleTextInterface* self ```
int32_t q_accessibletextinterface_character_count(void* self) {
    return QAccessibleTextInterface_CharacterCount((QAccessibleTextInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
///
/// ``` QAccessibleTextInterface* self, int offset ```
QRect* q_accessibletextinterface_character_rect(void* self, int offset) {
    return QAccessibleTextInterface_CharacterRect((QAccessibleTextInterface*)self, offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
///
/// ``` QAccessibleTextInterface* self, QPoint* point ```
int32_t q_accessibletextinterface_offset_at_point(void* self, void* point) {
    return QAccessibleTextInterface_OffsetAtPoint((QAccessibleTextInterface*)self, (QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
///
/// ``` QAccessibleTextInterface* self, int startIndex, int endIndex ```
void q_accessibletextinterface_scroll_to_substring(void* self, int startIndex, int endIndex) {
    QAccessibleTextInterface_ScrollToSubstring((QAccessibleTextInterface*)self, startIndex, endIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
///
/// ``` QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset ```
const char* q_accessibletextinterface_attributes(void* self, int offset, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_Attributes((QAccessibleTextInterface*)self, offset, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator=)
///
/// ``` QAccessibleTextInterface* self, QAccessibleTextInterface* param1 ```
void q_accessibletextinterface_operator_assign(void* self, void* param1) {
    QAccessibleTextInterface_OperatorAssign((QAccessibleTextInterface*)self, (QAccessibleTextInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextInterface* self ```
void q_accessibletextinterface_delete(void* self) {
    QAccessibleTextInterface_Delete((QAccessibleTextInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#deleteText)
///
/// ``` QAccessibleEditableTextInterface* self, int startOffset, int endOffset ```
void q_accessibleeditabletextinterface_delete_text(void* self, int startOffset, int endOffset) {
    QAccessibleEditableTextInterface_DeleteText((QAccessibleEditableTextInterface*)self, startOffset, endOffset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
///
/// ``` QAccessibleEditableTextInterface* self, int offset, const char* text ```
void q_accessibleeditabletextinterface_insert_text(void* self, int offset, const char* text) {
    QAccessibleEditableTextInterface_InsertText((QAccessibleEditableTextInterface*)self, offset, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
///
/// ``` QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const char* text ```
void q_accessibleeditabletextinterface_replace_text(void* self, int startOffset, int endOffset, const char* text) {
    QAccessibleEditableTextInterface_ReplaceText((QAccessibleEditableTextInterface*)self, startOffset, endOffset, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator=)
///
/// ``` QAccessibleEditableTextInterface* self, QAccessibleEditableTextInterface* param1 ```
void q_accessibleeditabletextinterface_operator_assign(void* self, void* param1) {
    QAccessibleEditableTextInterface_OperatorAssign((QAccessibleEditableTextInterface*)self, (QAccessibleEditableTextInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleEditableTextInterface* self ```
void q_accessibleeditabletextinterface_delete(void* self) {
    QAccessibleEditableTextInterface_Delete((QAccessibleEditableTextInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessiblevalueinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
///
/// ``` QAccessibleValueInterface* self ```
QVariant* q_accessiblevalueinterface_current_value(void* self) {
    return QAccessibleValueInterface_CurrentValue((QAccessibleValueInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
///
/// ``` QAccessibleValueInterface* self, QVariant* value ```
void q_accessiblevalueinterface_set_current_value(void* self, void* value) {
    QAccessibleValueInterface_SetCurrentValue((QAccessibleValueInterface*)self, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
///
/// ``` QAccessibleValueInterface* self ```
QVariant* q_accessiblevalueinterface_maximum_value(void* self) {
    return QAccessibleValueInterface_MaximumValue((QAccessibleValueInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
///
/// ``` QAccessibleValueInterface* self ```
QVariant* q_accessiblevalueinterface_minimum_value(void* self) {
    return QAccessibleValueInterface_MinimumValue((QAccessibleValueInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
///
/// ``` QAccessibleValueInterface* self ```
QVariant* q_accessiblevalueinterface_minimum_step_size(void* self) {
    return QAccessibleValueInterface_MinimumStepSize((QAccessibleValueInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator=)
///
/// ``` QAccessibleValueInterface* self, QAccessibleValueInterface* param1 ```
void q_accessiblevalueinterface_operator_assign(void* self, void* param1) {
    QAccessibleValueInterface_OperatorAssign((QAccessibleValueInterface*)self, (QAccessibleValueInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleValueInterface* self ```
void q_accessiblevalueinterface_delete(void* self) {
    QAccessibleValueInterface_Delete((QAccessibleValueInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletablecellinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
///
/// ``` QAccessibleTableCellInterface* self ```
bool q_accessibletablecellinterface_is_selected(void* self) {
    return QAccessibleTableCellInterface_IsSelected((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
///
/// ``` QAccessibleTableCellInterface* self ```
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_column_header_cells(void* self) {
    libqt_list _arr = QAccessibleTableCellInterface_ColumnHeaderCells((QAccessibleTableCellInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
///
/// ``` QAccessibleTableCellInterface* self ```
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_row_header_cells(void* self) {
    libqt_list _arr = QAccessibleTableCellInterface_RowHeaderCells((QAccessibleTableCellInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
///
/// ``` QAccessibleTableCellInterface* self ```
int32_t q_accessibletablecellinterface_column_index(void* self) {
    return QAccessibleTableCellInterface_ColumnIndex((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
///
/// ``` QAccessibleTableCellInterface* self ```
int32_t q_accessibletablecellinterface_row_index(void* self) {
    return QAccessibleTableCellInterface_RowIndex((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
///
/// ``` QAccessibleTableCellInterface* self ```
int32_t q_accessibletablecellinterface_column_extent(void* self) {
    return QAccessibleTableCellInterface_ColumnExtent((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
///
/// ``` QAccessibleTableCellInterface* self ```
int32_t q_accessibletablecellinterface_row_extent(void* self) {
    return QAccessibleTableCellInterface_RowExtent((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
///
/// ``` QAccessibleTableCellInterface* self ```
QAccessibleInterface* q_accessibletablecellinterface_table(void* self) {
    return QAccessibleTableCellInterface_Table((QAccessibleTableCellInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator=)
///
/// ``` QAccessibleTableCellInterface* self, QAccessibleTableCellInterface* param1 ```
void q_accessibletablecellinterface_operator_assign(void* self, void* param1) {
    QAccessibleTableCellInterface_OperatorAssign((QAccessibleTableCellInterface*)self, (QAccessibleTableCellInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTableCellInterface* self ```
void q_accessibletablecellinterface_delete(void* self) {
    QAccessibleTableCellInterface_Delete((QAccessibleTableCellInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletableinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
///
/// ``` QAccessibleTableInterface* self ```
QAccessibleInterface* q_accessibletableinterface_caption(void* self) {
    return QAccessibleTableInterface_Caption((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
///
/// ``` QAccessibleTableInterface* self ```
QAccessibleInterface* q_accessibletableinterface_summary(void* self) {
    return QAccessibleTableInterface_Summary((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
///
/// ``` QAccessibleTableInterface* self, int row, int column ```
QAccessibleInterface* q_accessibletableinterface_cell_at(void* self, int row, int column) {
    return QAccessibleTableInterface_CellAt((QAccessibleTableInterface*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
///
/// ``` QAccessibleTableInterface* self ```
int32_t q_accessibletableinterface_selected_cell_count(void* self) {
    return QAccessibleTableInterface_SelectedCellCount((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
///
/// ``` QAccessibleTableInterface* self ```
libqt_list /* of QAccessibleInterface* */ q_accessibletableinterface_selected_cells(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedCells((QAccessibleTableInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
///
/// ``` QAccessibleTableInterface* self, int column ```
const char* q_accessibletableinterface_column_description(void* self, int column) {
    libqt_string _str = QAccessibleTableInterface_ColumnDescription((QAccessibleTableInterface*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
///
/// ``` QAccessibleTableInterface* self, int row ```
const char* q_accessibletableinterface_row_description(void* self, int row) {
    libqt_string _str = QAccessibleTableInterface_RowDescription((QAccessibleTableInterface*)self, row);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
///
/// ``` QAccessibleTableInterface* self ```
int32_t q_accessibletableinterface_selected_column_count(void* self) {
    return QAccessibleTableInterface_SelectedColumnCount((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
///
/// ``` QAccessibleTableInterface* self ```
int32_t q_accessibletableinterface_selected_row_count(void* self) {
    return QAccessibleTableInterface_SelectedRowCount((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
///
/// ``` QAccessibleTableInterface* self ```
int32_t q_accessibletableinterface_column_count(void* self) {
    return QAccessibleTableInterface_ColumnCount((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
///
/// ``` QAccessibleTableInterface* self ```
int32_t q_accessibletableinterface_row_count(void* self) {
    return QAccessibleTableInterface_RowCount((QAccessibleTableInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
///
/// ``` QAccessibleTableInterface* self ```
libqt_list /* of int */ q_accessibletableinterface_selected_columns(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedColumns((QAccessibleTableInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
///
/// ``` QAccessibleTableInterface* self ```
libqt_list /* of int */ q_accessibletableinterface_selected_rows(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedRows((QAccessibleTableInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
///
/// ``` QAccessibleTableInterface* self, int column ```
bool q_accessibletableinterface_is_column_selected(void* self, int column) {
    return QAccessibleTableInterface_IsColumnSelected((QAccessibleTableInterface*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
///
/// ``` QAccessibleTableInterface* self, int row ```
bool q_accessibletableinterface_is_row_selected(void* self, int row) {
    return QAccessibleTableInterface_IsRowSelected((QAccessibleTableInterface*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
///
/// ``` QAccessibleTableInterface* self, int row ```
bool q_accessibletableinterface_select_row(void* self, int row) {
    return QAccessibleTableInterface_SelectRow((QAccessibleTableInterface*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
///
/// ``` QAccessibleTableInterface* self, int column ```
bool q_accessibletableinterface_select_column(void* self, int column) {
    return QAccessibleTableInterface_SelectColumn((QAccessibleTableInterface*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
///
/// ``` QAccessibleTableInterface* self, int row ```
bool q_accessibletableinterface_unselect_row(void* self, int row) {
    return QAccessibleTableInterface_UnselectRow((QAccessibleTableInterface*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
///
/// ``` QAccessibleTableInterface* self, int column ```
bool q_accessibletableinterface_unselect_column(void* self, int column) {
    return QAccessibleTableInterface_UnselectColumn((QAccessibleTableInterface*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
///
/// ``` QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event ```
void q_accessibletableinterface_model_change(void* self, void* event) {
    QAccessibleTableInterface_ModelChange((QAccessibleTableInterface*)self, (QAccessibleTableModelChangeEvent*)event);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTableInterface* self ```
void q_accessibletableinterface_delete(void* self) {
    QAccessibleTableInterface_Delete((QAccessibleTableInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibleactioninterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_accessibleactioninterface_tr(const char* sourceText) {
    libqt_string _str = QAccessibleActionInterface_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#actionNames)
///
/// ``` QAccessibleActionInterface* self ```
const char** q_accessibleactioninterface_action_names(void* self) {
    libqt_list _arr = QAccessibleActionInterface_ActionNames((QAccessibleActionInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// ``` QAccessibleActionInterface* self, const char* name ```
const char* q_accessibleactioninterface_localized_action_name(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionName((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// ``` QAccessibleActionInterface* self, const char* name ```
const char* q_accessibleactioninterface_localized_action_description(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionDescription((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
///
/// ``` QAccessibleActionInterface* self, const char* actionName ```
void q_accessibleactioninterface_do_action(void* self, const char* actionName) {
    QAccessibleActionInterface_DoAction((QAccessibleActionInterface*)self, qstring(actionName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
///
/// ``` QAccessibleActionInterface* self, const char* actionName ```
const char** q_accessibleactioninterface_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleActionInterface_KeyBindingsForAction((QAccessibleActionInterface*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
///
const char* q_accessibleactioninterface_press_action() {
    libqt_string _str = QAccessibleActionInterface_PressAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
///
const char* q_accessibleactioninterface_increase_action() {
    libqt_string _str = QAccessibleActionInterface_IncreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
///
const char* q_accessibleactioninterface_decrease_action() {
    libqt_string _str = QAccessibleActionInterface_DecreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
///
const char* q_accessibleactioninterface_show_menu_action() {
    libqt_string _str = QAccessibleActionInterface_ShowMenuAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
///
const char* q_accessibleactioninterface_set_focus_action() {
    libqt_string _str = QAccessibleActionInterface_SetFocusAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
///
const char* q_accessibleactioninterface_toggle_action() {
    libqt_string _str = QAccessibleActionInterface_ToggleAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
///
const char* q_accessibleactioninterface_scroll_left_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollLeftAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
///
const char* q_accessibleactioninterface_scroll_right_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollRightAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
///
const char* q_accessibleactioninterface_scroll_up_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollUpAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
///
const char* q_accessibleactioninterface_scroll_down_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollDownAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
///
const char* q_accessibleactioninterface_next_page_action() {
    libqt_string _str = QAccessibleActionInterface_NextPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
///
const char* q_accessibleactioninterface_previous_page_action() {
    libqt_string _str = QAccessibleActionInterface_PreviousPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#operator=)
///
/// ``` QAccessibleActionInterface* self, QAccessibleActionInterface* param1 ```
void q_accessibleactioninterface_operator_assign(void* self, void* param1) {
    QAccessibleActionInterface_OperatorAssign((QAccessibleActionInterface*)self, (QAccessibleActionInterface*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_accessibleactioninterface_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QAccessibleActionInterface_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_accessibleactioninterface_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QAccessibleActionInterface_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleActionInterface* self ```
void q_accessibleactioninterface_delete(void* self) {
    QAccessibleActionInterface_Delete((QAccessibleActionInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibleimageinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
///
/// ``` QAccessibleImageInterface* self ```
const char* q_accessibleimageinterface_image_description(void* self) {
    libqt_string _str = QAccessibleImageInterface_ImageDescription((QAccessibleImageInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
///
/// ``` QAccessibleImageInterface* self ```
QSize* q_accessibleimageinterface_image_size(void* self) {
    return QAccessibleImageInterface_ImageSize((QAccessibleImageInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
///
/// ``` QAccessibleImageInterface* self ```
QPoint* q_accessibleimageinterface_image_position(void* self) {
    return QAccessibleImageInterface_ImagePosition((QAccessibleImageInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator=)
///
/// ``` QAccessibleImageInterface* self, QAccessibleImageInterface* param1 ```
void q_accessibleimageinterface_operator_assign(void* self, void* param1) {
    QAccessibleImageInterface_OperatorAssign((QAccessibleImageInterface*)self, (QAccessibleImageInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleImageInterface* self ```
void q_accessibleimageinterface_delete(void* self) {
    QAccessibleImageInterface_Delete((QAccessibleImageInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
///
/// ``` QAccessibleHyperlinkInterface* self ```
const char* q_accessiblehyperlinkinterface_anchor(void* self) {
    libqt_string _str = QAccessibleHyperlinkInterface_Anchor((QAccessibleHyperlinkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
///
/// ``` QAccessibleHyperlinkInterface* self ```
const char* q_accessiblehyperlinkinterface_anchor_target(void* self) {
    libqt_string _str = QAccessibleHyperlinkInterface_AnchorTarget((QAccessibleHyperlinkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
///
/// ``` QAccessibleHyperlinkInterface* self ```
int32_t q_accessiblehyperlinkinterface_start_index(void* self) {
    return QAccessibleHyperlinkInterface_StartIndex((QAccessibleHyperlinkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
///
/// ``` QAccessibleHyperlinkInterface* self ```
int32_t q_accessiblehyperlinkinterface_end_index(void* self) {
    return QAccessibleHyperlinkInterface_EndIndex((QAccessibleHyperlinkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
///
/// ``` QAccessibleHyperlinkInterface* self ```
bool q_accessiblehyperlinkinterface_is_valid(void* self) {
    return QAccessibleHyperlinkInterface_IsValid((QAccessibleHyperlinkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator=)
///
/// ``` QAccessibleHyperlinkInterface* self, QAccessibleHyperlinkInterface* param1 ```
void q_accessiblehyperlinkinterface_operator_assign(void* self, void* param1) {
    QAccessibleHyperlinkInterface_OperatorAssign((QAccessibleHyperlinkInterface*)self, (QAccessibleHyperlinkInterface*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleHyperlinkInterface* self ```
void q_accessiblehyperlinkinterface_delete(void* self) {
    QAccessibleHyperlinkInterface_Delete((QAccessibleHyperlinkInterface*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibleevent.html

/// q_accessibleevent_new constructs a new QAccessibleEvent object.
///
/// ``` QObject* obj, enum QAccessible__Event typ ```
QAccessibleEvent* q_accessibleevent_new(void* obj, int64_t typ) {
    return QAccessibleEvent_new((QObject*)obj, typ);
}

/// q_accessibleevent_new2 constructs a new QAccessibleEvent object.
///
/// ``` QAccessibleInterface* iface, enum QAccessible__Event typ ```
QAccessibleEvent* q_accessibleevent_new2(void* iface, int64_t typ) {
    return QAccessibleEvent_new2((QAccessibleInterface*)iface, typ);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleEvent* self ```
int64_t q_accessibleevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleEvent* self ```
QObject* q_accessibleevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleEvent* self ```
uint32_t q_accessibleevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleEvent* self, int chld ```
void q_accessibleevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleEvent* self ```
int32_t q_accessibleevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// ``` QAccessibleEvent* self ```
QAccessibleInterface* q_accessibleevent_accessible_interface(void* self) {
    return QAccessibleEvent_AccessibleInterface((QAccessibleEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAccessibleEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibleevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleEvent_OnAccessibleInterface((QAccessibleEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAccessibleEvent* self ```
QAccessibleInterface* q_accessibleevent_qbase_accessible_interface(void* self) {
    return QAccessibleEvent_QBaseAccessibleInterface((QAccessibleEvent*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleEvent* self ```
void q_accessibleevent_delete(void* self) {
    QAccessibleEvent_Delete((QAccessibleEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html

/// q_accessiblestatechangeevent_new constructs a new QAccessibleStateChangeEvent object.
///
/// ``` QObject* obj, QAccessible__State* state ```
QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new(void* obj, void* state) {
    return QAccessibleStateChangeEvent_new((QObject*)obj, (QAccessible__State*)state);
}

/// q_accessiblestatechangeevent_new2 constructs a new QAccessibleStateChangeEvent object.
///
/// ``` QAccessibleInterface* iface, QAccessible__State* state ```
QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new2(void* iface, void* state) {
    return QAccessibleStateChangeEvent_new2((QAccessibleInterface*)iface, (QAccessible__State*)state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
///
/// ``` QAccessibleStateChangeEvent* self ```
QAccessible__State* q_accessiblestatechangeevent_changed_states(void* self) {
    return QAccessibleStateChangeEvent_ChangedStates((QAccessibleStateChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleStateChangeEvent* self ```
int64_t q_accessiblestatechangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleStateChangeEvent* self ```
QObject* q_accessiblestatechangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleStateChangeEvent* self ```
uint32_t q_accessiblestatechangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleStateChangeEvent* self, int chld ```
void q_accessiblestatechangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleStateChangeEvent* self ```
int32_t q_accessiblestatechangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleStateChangeEvent* self ```
QAccessibleInterface* q_accessiblestatechangeevent_accessible_interface(void* self) {
    return QAccessibleStateChangeEvent_AccessibleInterface((QAccessibleStateChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleStateChangeEvent* self ```
QAccessibleInterface* q_accessiblestatechangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleStateChangeEvent_QBaseAccessibleInterface((QAccessibleStateChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleStateChangeEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessiblestatechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleStateChangeEvent_OnAccessibleInterface((QAccessibleStateChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleStateChangeEvent* self ```
void q_accessiblestatechangeevent_delete(void* self) {
    QAccessibleStateChangeEvent_Delete((QAccessibleStateChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletextcursorevent.html

/// q_accessibletextcursorevent_new constructs a new QAccessibleTextCursorEvent object.
///
/// ``` QObject* obj, int cursorPos ```
QAccessibleTextCursorEvent* q_accessibletextcursorevent_new(void* obj, int cursorPos) {
    return QAccessibleTextCursorEvent_new((QObject*)obj, cursorPos);
}

/// q_accessibletextcursorevent_new2 constructs a new QAccessibleTextCursorEvent object.
///
/// ``` QAccessibleInterface* iface, int cursorPos ```
QAccessibleTextCursorEvent* q_accessibletextcursorevent_new2(void* iface, int cursorPos) {
    return QAccessibleTextCursorEvent_new2((QAccessibleInterface*)iface, cursorPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// ``` QAccessibleTextCursorEvent* self, int position ```
void q_accessibletextcursorevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// ``` QAccessibleTextCursorEvent* self ```
int32_t q_accessibletextcursorevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTextCursorEvent* self ```
int64_t q_accessibletextcursorevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTextCursorEvent* self ```
QObject* q_accessibletextcursorevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTextCursorEvent* self ```
uint32_t q_accessibletextcursorevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTextCursorEvent* self, int chld ```
void q_accessibletextcursorevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTextCursorEvent* self ```
int32_t q_accessibletextcursorevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTextCursorEvent* self ```
QAccessibleInterface* q_accessibletextcursorevent_accessible_interface(void* self) {
    return QAccessibleTextCursorEvent_AccessibleInterface((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTextCursorEvent* self ```
QAccessibleInterface* q_accessibletextcursorevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextCursorEvent_QBaseAccessibleInterface((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTextCursorEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletextcursorevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTextCursorEvent_OnAccessibleInterface((QAccessibleTextCursorEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextCursorEvent* self ```
void q_accessibletextcursorevent_delete(void* self) {
    QAccessibleTextCursorEvent_Delete((QAccessibleTextCursorEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletextselectionevent.html

/// q_accessibletextselectionevent_new constructs a new QAccessibleTextSelectionEvent object.
///
/// ``` QObject* obj, int start, int end ```
QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new(void* obj, int start, int end) {
    return QAccessibleTextSelectionEvent_new((QObject*)obj, start, end);
}

/// q_accessibletextselectionevent_new2 constructs a new QAccessibleTextSelectionEvent object.
///
/// ``` QAccessibleInterface* iface, int start, int end ```
QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new2(void* iface, int start, int end) {
    return QAccessibleTextSelectionEvent_new2((QAccessibleInterface*)iface, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#setSelection)
///
/// ``` QAccessibleTextSelectionEvent* self, int start, int end ```
void q_accessibletextselectionevent_set_selection(void* self, int start, int end) {
    QAccessibleTextSelectionEvent_SetSelection((QAccessibleTextSelectionEvent*)self, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
///
/// ``` QAccessibleTextSelectionEvent* self ```
int32_t q_accessibletextselectionevent_selection_start(void* self) {
    return QAccessibleTextSelectionEvent_SelectionStart((QAccessibleTextSelectionEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
///
/// ``` QAccessibleTextSelectionEvent* self ```
int32_t q_accessibletextselectionevent_selection_end(void* self) {
    return QAccessibleTextSelectionEvent_SelectionEnd((QAccessibleTextSelectionEvent*)self);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// ``` QAccessibleTextSelectionEvent* self, int position ```
void q_accessibletextselectionevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// ``` QAccessibleTextSelectionEvent* self ```
int32_t q_accessibletextselectionevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTextSelectionEvent* self ```
int64_t q_accessibletextselectionevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTextSelectionEvent* self ```
QObject* q_accessibletextselectionevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTextSelectionEvent* self ```
uint32_t q_accessibletextselectionevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTextSelectionEvent* self, int chld ```
void q_accessibletextselectionevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTextSelectionEvent* self ```
int32_t q_accessibletextselectionevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTextSelectionEvent* self ```
QAccessibleInterface* q_accessibletextselectionevent_accessible_interface(void* self) {
    return QAccessibleTextSelectionEvent_AccessibleInterface((QAccessibleTextSelectionEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTextSelectionEvent* self ```
QAccessibleInterface* q_accessibletextselectionevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextSelectionEvent_QBaseAccessibleInterface((QAccessibleTextSelectionEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTextSelectionEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletextselectionevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTextSelectionEvent_OnAccessibleInterface((QAccessibleTextSelectionEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextSelectionEvent* self ```
void q_accessibletextselectionevent_delete(void* self) {
    QAccessibleTextSelectionEvent_Delete((QAccessibleTextSelectionEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletextinsertevent.html

/// q_accessibletextinsertevent_new constructs a new QAccessibleTextInsertEvent object.
///
/// ``` QObject* obj, int position, const char* text ```
QAccessibleTextInsertEvent* q_accessibletextinsertevent_new(void* obj, int position, const char* text) {
    return QAccessibleTextInsertEvent_new((QObject*)obj, position, qstring(text));
}

/// q_accessibletextinsertevent_new2 constructs a new QAccessibleTextInsertEvent object.
///
/// ``` QAccessibleInterface* iface, int position, const char* text ```
QAccessibleTextInsertEvent* q_accessibletextinsertevent_new2(void* iface, int position, const char* text) {
    return QAccessibleTextInsertEvent_new2((QAccessibleInterface*)iface, position, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
///
/// ``` QAccessibleTextInsertEvent* self ```
const char* q_accessibletextinsertevent_text_inserted(void* self) {
    libqt_string _str = QAccessibleTextInsertEvent_TextInserted((QAccessibleTextInsertEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
///
/// ``` QAccessibleTextInsertEvent* self ```
int32_t q_accessibletextinsertevent_change_position(void* self) {
    return QAccessibleTextInsertEvent_ChangePosition((QAccessibleTextInsertEvent*)self);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// ``` QAccessibleTextInsertEvent* self, int position ```
void q_accessibletextinsertevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// ``` QAccessibleTextInsertEvent* self ```
int32_t q_accessibletextinsertevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTextInsertEvent* self ```
int64_t q_accessibletextinsertevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTextInsertEvent* self ```
QObject* q_accessibletextinsertevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTextInsertEvent* self ```
uint32_t q_accessibletextinsertevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTextInsertEvent* self, int chld ```
void q_accessibletextinsertevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTextInsertEvent* self ```
int32_t q_accessibletextinsertevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTextInsertEvent* self ```
QAccessibleInterface* q_accessibletextinsertevent_accessible_interface(void* self) {
    return QAccessibleTextInsertEvent_AccessibleInterface((QAccessibleTextInsertEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTextInsertEvent* self ```
QAccessibleInterface* q_accessibletextinsertevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextInsertEvent_QBaseAccessibleInterface((QAccessibleTextInsertEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTextInsertEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletextinsertevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTextInsertEvent_OnAccessibleInterface((QAccessibleTextInsertEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextInsertEvent* self ```
void q_accessibletextinsertevent_delete(void* self) {
    QAccessibleTextInsertEvent_Delete((QAccessibleTextInsertEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletextremoveevent.html

/// q_accessibletextremoveevent_new constructs a new QAccessibleTextRemoveEvent object.
///
/// ``` QObject* obj, int position, const char* text ```
QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new(void* obj, int position, const char* text) {
    return QAccessibleTextRemoveEvent_new((QObject*)obj, position, qstring(text));
}

/// q_accessibletextremoveevent_new2 constructs a new QAccessibleTextRemoveEvent object.
///
/// ``` QAccessibleInterface* iface, int position, const char* text ```
QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new2(void* iface, int position, const char* text) {
    return QAccessibleTextRemoveEvent_new2((QAccessibleInterface*)iface, position, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
///
/// ``` QAccessibleTextRemoveEvent* self ```
const char* q_accessibletextremoveevent_text_removed(void* self) {
    libqt_string _str = QAccessibleTextRemoveEvent_TextRemoved((QAccessibleTextRemoveEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
///
/// ``` QAccessibleTextRemoveEvent* self ```
int32_t q_accessibletextremoveevent_change_position(void* self) {
    return QAccessibleTextRemoveEvent_ChangePosition((QAccessibleTextRemoveEvent*)self);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// ``` QAccessibleTextRemoveEvent* self, int position ```
void q_accessibletextremoveevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// ``` QAccessibleTextRemoveEvent* self ```
int32_t q_accessibletextremoveevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTextRemoveEvent* self ```
int64_t q_accessibletextremoveevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTextRemoveEvent* self ```
QObject* q_accessibletextremoveevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTextRemoveEvent* self ```
uint32_t q_accessibletextremoveevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTextRemoveEvent* self, int chld ```
void q_accessibletextremoveevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTextRemoveEvent* self ```
int32_t q_accessibletextremoveevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTextRemoveEvent* self ```
QAccessibleInterface* q_accessibletextremoveevent_accessible_interface(void* self) {
    return QAccessibleTextRemoveEvent_AccessibleInterface((QAccessibleTextRemoveEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTextRemoveEvent* self ```
QAccessibleInterface* q_accessibletextremoveevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextRemoveEvent_QBaseAccessibleInterface((QAccessibleTextRemoveEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTextRemoveEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletextremoveevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTextRemoveEvent_OnAccessibleInterface((QAccessibleTextRemoveEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextRemoveEvent* self ```
void q_accessibletextremoveevent_delete(void* self) {
    QAccessibleTextRemoveEvent_Delete((QAccessibleTextRemoveEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletextupdateevent.html

/// q_accessibletextupdateevent_new constructs a new QAccessibleTextUpdateEvent object.
///
/// ``` QObject* obj, int position, const char* oldText, const char* text ```
QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new(void* obj, int position, const char* oldText, const char* text) {
    return QAccessibleTextUpdateEvent_new((QObject*)obj, position, qstring(oldText), qstring(text));
}

/// q_accessibletextupdateevent_new2 constructs a new QAccessibleTextUpdateEvent object.
///
/// ``` QAccessibleInterface* iface, int position, const char* oldText, const char* text ```
QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new2(void* iface, int position, const char* oldText, const char* text) {
    return QAccessibleTextUpdateEvent_new2((QAccessibleInterface*)iface, position, qstring(oldText), qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
///
/// ``` QAccessibleTextUpdateEvent* self ```
const char* q_accessibletextupdateevent_text_removed(void* self) {
    libqt_string _str = QAccessibleTextUpdateEvent_TextRemoved((QAccessibleTextUpdateEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
///
/// ``` QAccessibleTextUpdateEvent* self ```
const char* q_accessibletextupdateevent_text_inserted(void* self) {
    libqt_string _str = QAccessibleTextUpdateEvent_TextInserted((QAccessibleTextUpdateEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
///
/// ``` QAccessibleTextUpdateEvent* self ```
int32_t q_accessibletextupdateevent_change_position(void* self) {
    return QAccessibleTextUpdateEvent_ChangePosition((QAccessibleTextUpdateEvent*)self);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// ``` QAccessibleTextUpdateEvent* self, int position ```
void q_accessibletextupdateevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

/// Inherited from QAccessibleTextCursorEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// ``` QAccessibleTextUpdateEvent* self ```
int32_t q_accessibletextupdateevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTextUpdateEvent* self ```
int64_t q_accessibletextupdateevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTextUpdateEvent* self ```
QObject* q_accessibletextupdateevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTextUpdateEvent* self ```
uint32_t q_accessibletextupdateevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTextUpdateEvent* self, int chld ```
void q_accessibletextupdateevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTextUpdateEvent* self ```
int32_t q_accessibletextupdateevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTextUpdateEvent* self ```
QAccessibleInterface* q_accessibletextupdateevent_accessible_interface(void* self) {
    return QAccessibleTextUpdateEvent_AccessibleInterface((QAccessibleTextUpdateEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTextUpdateEvent* self ```
QAccessibleInterface* q_accessibletextupdateevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextUpdateEvent_QBaseAccessibleInterface((QAccessibleTextUpdateEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTextUpdateEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletextupdateevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTextUpdateEvent_OnAccessibleInterface((QAccessibleTextUpdateEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTextUpdateEvent* self ```
void q_accessibletextupdateevent_delete(void* self) {
    QAccessibleTextUpdateEvent_Delete((QAccessibleTextUpdateEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html

/// q_accessiblevaluechangeevent_new constructs a new QAccessibleValueChangeEvent object.
///
/// ``` QObject* obj, QVariant* val ```
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new(void* obj, void* val) {
    return QAccessibleValueChangeEvent_new((QObject*)obj, (QVariant*)val);
}

/// q_accessiblevaluechangeevent_new2 constructs a new QAccessibleValueChangeEvent object.
///
/// ``` QAccessibleInterface* iface, QVariant* val ```
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new2(void* iface, void* val) {
    return QAccessibleValueChangeEvent_new2((QAccessibleInterface*)iface, (QVariant*)val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
///
/// ``` QAccessibleValueChangeEvent* self, QVariant* val ```
void q_accessiblevaluechangeevent_set_value(void* self, void* val) {
    QAccessibleValueChangeEvent_SetValue((QAccessibleValueChangeEvent*)self, (QVariant*)val);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
///
/// ``` QAccessibleValueChangeEvent* self ```
QVariant* q_accessiblevaluechangeevent_value(void* self) {
    return QAccessibleValueChangeEvent_Value((QAccessibleValueChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleValueChangeEvent* self ```
int64_t q_accessiblevaluechangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleValueChangeEvent* self ```
QObject* q_accessiblevaluechangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleValueChangeEvent* self ```
uint32_t q_accessiblevaluechangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleValueChangeEvent* self, int chld ```
void q_accessiblevaluechangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleValueChangeEvent* self ```
int32_t q_accessiblevaluechangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleValueChangeEvent* self ```
QAccessibleInterface* q_accessiblevaluechangeevent_accessible_interface(void* self) {
    return QAccessibleValueChangeEvent_AccessibleInterface((QAccessibleValueChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleValueChangeEvent* self ```
QAccessibleInterface* q_accessiblevaluechangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleValueChangeEvent_QBaseAccessibleInterface((QAccessibleValueChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleValueChangeEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessiblevaluechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleValueChangeEvent_OnAccessibleInterface((QAccessibleValueChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleValueChangeEvent* self ```
void q_accessiblevaluechangeevent_delete(void* self) {
    QAccessibleValueChangeEvent_Delete((QAccessibleValueChangeEvent*)(self));
}

/// https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html

/// q_accessibletablemodelchangeevent_new constructs a new QAccessibleTableModelChangeEvent object.
///
/// ``` QObject* obj, enum QAccessibleTableModelChangeEvent__ModelChangeType changeType ```
QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new(void* obj, int64_t changeType) {
    return QAccessibleTableModelChangeEvent_new((QObject*)obj, changeType);
}

/// q_accessibletablemodelchangeevent_new2 constructs a new QAccessibleTableModelChangeEvent object.
///
/// ``` QAccessibleInterface* iface, enum QAccessibleTableModelChangeEvent__ModelChangeType changeType ```
QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new2(void* iface, int64_t changeType) {
    return QAccessibleTableModelChangeEvent_new2((QAccessibleInterface*)iface, changeType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
///
/// ``` QAccessibleTableModelChangeEvent* self, enum QAccessibleTableModelChangeEvent__ModelChangeType changeType ```
void q_accessibletablemodelchangeevent_set_model_change_type(void* self, int64_t changeType) {
    QAccessibleTableModelChangeEvent_SetModelChangeType((QAccessibleTableModelChangeEvent*)self, changeType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#modelChangeType)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int64_t q_accessibletablemodelchangeevent_model_change_type(void* self) {
    return QAccessibleTableModelChangeEvent_ModelChangeType((QAccessibleTableModelChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
///
/// ``` QAccessibleTableModelChangeEvent* self, int row ```
void q_accessibletablemodelchangeevent_set_first_row(void* self, int row) {
    QAccessibleTableModelChangeEvent_SetFirstRow((QAccessibleTableModelChangeEvent*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
///
/// ``` QAccessibleTableModelChangeEvent* self, int col ```
void q_accessibletablemodelchangeevent_set_first_column(void* self, int col) {
    QAccessibleTableModelChangeEvent_SetFirstColumn((QAccessibleTableModelChangeEvent*)self, col);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
///
/// ``` QAccessibleTableModelChangeEvent* self, int row ```
void q_accessibletablemodelchangeevent_set_last_row(void* self, int row) {
    QAccessibleTableModelChangeEvent_SetLastRow((QAccessibleTableModelChangeEvent*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
///
/// ``` QAccessibleTableModelChangeEvent* self, int col ```
void q_accessibletablemodelchangeevent_set_last_column(void* self, int col) {
    QAccessibleTableModelChangeEvent_SetLastColumn((QAccessibleTableModelChangeEvent*)self, col);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int32_t q_accessibletablemodelchangeevent_first_row(void* self) {
    return QAccessibleTableModelChangeEvent_FirstRow((QAccessibleTableModelChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int32_t q_accessibletablemodelchangeevent_first_column(void* self) {
    return QAccessibleTableModelChangeEvent_FirstColumn((QAccessibleTableModelChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int32_t q_accessibletablemodelchangeevent_last_row(void* self) {
    return QAccessibleTableModelChangeEvent_LastRow((QAccessibleTableModelChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int32_t q_accessibletablemodelchangeevent_last_column(void* self) {
    return QAccessibleTableModelChangeEvent_LastColumn((QAccessibleTableModelChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int64_t q_accessibletablemodelchangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
QObject* q_accessibletablemodelchangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
uint32_t q_accessibletablemodelchangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// ``` QAccessibleTableModelChangeEvent* self, int chld ```
void q_accessibletablemodelchangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// ``` QAccessibleTableModelChangeEvent* self ```
int32_t q_accessibletablemodelchangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAccessibleTableModelChangeEvent* self ```
QAccessibleInterface* q_accessibletablemodelchangeevent_accessible_interface(void* self) {
    return QAccessibleTableModelChangeEvent_AccessibleInterface((QAccessibleTableModelChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAccessibleTableModelChangeEvent* self ```
QAccessibleInterface* q_accessibletablemodelchangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleTableModelChangeEvent_QBaseAccessibleInterface((QAccessibleTableModelChangeEvent*)self);
}

/// Inherited from QAccessibleEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAccessibleTableModelChangeEvent* self, QAccessibleInterface* (*slot)() ```
void q_accessibletablemodelchangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)()) {
    QAccessibleTableModelChangeEvent_OnAccessibleInterface((QAccessibleTableModelChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessibleTableModelChangeEvent* self ```
void q_accessibletablemodelchangeevent_delete(void* self) {
    QAccessibleTableModelChangeEvent_Delete((QAccessibleTableModelChangeEvent*)(self));
}