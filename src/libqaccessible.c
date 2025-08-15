#include "libqcolor.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqaccessible.hpp"
#include "libqaccessible.h"

bool q_accessibleinterface_is_valid(void* self) {
    return QAccessibleInterface_IsValid((QAccessibleInterface*)self);
}

QObject* q_accessibleinterface_object(void* self) {
    return QAccessibleInterface_Object((QAccessibleInterface*)self);
}

QWindow* q_accessibleinterface_window(void* self) {
    return QAccessibleInterface_Window((QAccessibleInterface*)self);
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleinterface_relations(void* self, int64_t match) {
    libqt_list _arr = QAccessibleInterface_Relations((QAccessibleInterface*)self, match);
    return _arr;
}

QAccessibleInterface* q_accessibleinterface_focus_child(void* self) {
    return QAccessibleInterface_FocusChild((QAccessibleInterface*)self);
}

QAccessibleInterface* q_accessibleinterface_child_at(void* self, int x, int y) {
    return QAccessibleInterface_ChildAt((QAccessibleInterface*)self, x, y);
}

QAccessibleInterface* q_accessibleinterface_parent(void* self) {
    return QAccessibleInterface_Parent((QAccessibleInterface*)self);
}

QAccessibleInterface* q_accessibleinterface_child(void* self, int index) {
    return QAccessibleInterface_Child((QAccessibleInterface*)self, index);
}

int32_t q_accessibleinterface_child_count(void* self) {
    return QAccessibleInterface_ChildCount((QAccessibleInterface*)self);
}

int32_t q_accessibleinterface_index_of_child(void* self, void* param1) {
    return QAccessibleInterface_IndexOfChild((QAccessibleInterface*)self, (QAccessibleInterface*)param1);
}

const char* q_accessibleinterface_text(void* self, int64_t t) {
    libqt_string _str = QAccessibleInterface_Text((QAccessibleInterface*)self, t);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleinterface_set_text(void* self, int64_t t, const char* text) {
    QAccessibleInterface_SetText((QAccessibleInterface*)self, t, qstring(text));
}

QRect* q_accessibleinterface_rect(void* self) {
    return QAccessibleInterface_Rect((QAccessibleInterface*)self);
}

int64_t q_accessibleinterface_role(void* self) {
    return QAccessibleInterface_Role((QAccessibleInterface*)self);
}

QAccessible__State* q_accessibleinterface_state(void* self) {
    return QAccessibleInterface_State((QAccessibleInterface*)self);
}

QColor* q_accessibleinterface_foreground_color(void* self) {
    return QAccessibleInterface_ForegroundColor((QAccessibleInterface*)self);
}

QColor* q_accessibleinterface_background_color(void* self) {
    return QAccessibleInterface_BackgroundColor((QAccessibleInterface*)self);
}

QAccessibleTextInterface* q_accessibleinterface_text_interface(void* self) {
    return QAccessibleInterface_TextInterface((QAccessibleInterface*)self);
}

QAccessibleEditableTextInterface* q_accessibleinterface_editable_text_interface(void* self) {
    return QAccessibleInterface_EditableTextInterface((QAccessibleInterface*)self);
}

QAccessibleValueInterface* q_accessibleinterface_value_interface(void* self) {
    return QAccessibleInterface_ValueInterface((QAccessibleInterface*)self);
}

QAccessibleActionInterface* q_accessibleinterface_action_interface(void* self) {
    return QAccessibleInterface_ActionInterface((QAccessibleInterface*)self);
}

QAccessibleImageInterface* q_accessibleinterface_image_interface(void* self) {
    return QAccessibleInterface_ImageInterface((QAccessibleInterface*)self);
}

QAccessibleTableInterface* q_accessibleinterface_table_interface(void* self) {
    return QAccessibleInterface_TableInterface((QAccessibleInterface*)self);
}

QAccessibleTableCellInterface* q_accessibleinterface_table_cell_interface(void* self) {
    return QAccessibleInterface_TableCellInterface((QAccessibleInterface*)self);
}

QAccessibleHyperlinkInterface* q_accessibleinterface_hyperlink_interface(void* self) {
    return QAccessibleInterface_HyperlinkInterface((QAccessibleInterface*)self);
}

QAccessibleSelectionInterface* q_accessibleinterface_selection_interface(void* self) {
    return QAccessibleInterface_SelectionInterface((QAccessibleInterface*)self);
}

QAccessibleAttributesInterface* q_accessibleinterface_attributes_interface(void* self) {
    return QAccessibleInterface_AttributesInterface((QAccessibleInterface*)self);
}

void q_accessibleinterface_virtual_hook(void* self, int id, void* data) {
    QAccessibleInterface_VirtualHook((QAccessibleInterface*)self, id, data);
}

void* q_accessibleinterface_interface_cast(void* self, int64_t param1) {
    return QAccessibleInterface_InterfaceCast((QAccessibleInterface*)self, param1);
}

void q_accessibletextinterface_selection(void* self, int selectionIndex, int* startOffset, int* endOffset) {
    QAccessibleTextInterface_Selection((QAccessibleTextInterface*)self, selectionIndex, startOffset, endOffset);
}

int32_t q_accessibletextinterface_selection_count(void* self) {
    return QAccessibleTextInterface_SelectionCount((QAccessibleTextInterface*)self);
}

void q_accessibletextinterface_add_selection(void* self, int startOffset, int endOffset) {
    QAccessibleTextInterface_AddSelection((QAccessibleTextInterface*)self, startOffset, endOffset);
}

void q_accessibletextinterface_remove_selection(void* self, int selectionIndex) {
    QAccessibleTextInterface_RemoveSelection((QAccessibleTextInterface*)self, selectionIndex);
}

void q_accessibletextinterface_set_selection(void* self, int selectionIndex, int startOffset, int endOffset) {
    QAccessibleTextInterface_SetSelection((QAccessibleTextInterface*)self, selectionIndex, startOffset, endOffset);
}

int32_t q_accessibletextinterface_cursor_position(void* self) {
    return QAccessibleTextInterface_CursorPosition((QAccessibleTextInterface*)self);
}

void q_accessibletextinterface_set_cursor_position(void* self, int position) {
    QAccessibleTextInterface_SetCursorPosition((QAccessibleTextInterface*)self, position);
}

const char* q_accessibletextinterface_text(void* self, int startOffset, int endOffset) {
    libqt_string _str = QAccessibleTextInterface_Text((QAccessibleTextInterface*)self, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibletextinterface_text_before_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextBeforeOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibletextinterface_text_after_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextAfterOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibletextinterface_text_at_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_TextAtOffset((QAccessibleTextInterface*)self, offset, boundaryType, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibletextinterface_character_count(void* self) {
    return QAccessibleTextInterface_CharacterCount((QAccessibleTextInterface*)self);
}

QRect* q_accessibletextinterface_character_rect(void* self, int offset) {
    return QAccessibleTextInterface_CharacterRect((QAccessibleTextInterface*)self, offset);
}

int32_t q_accessibletextinterface_offset_at_point(void* self, void* point) {
    return QAccessibleTextInterface_OffsetAtPoint((QAccessibleTextInterface*)self, (QPoint*)point);
}

void q_accessibletextinterface_scroll_to_substring(void* self, int startIndex, int endIndex) {
    QAccessibleTextInterface_ScrollToSubstring((QAccessibleTextInterface*)self, startIndex, endIndex);
}

const char* q_accessibletextinterface_attributes(void* self, int offset, int* startOffset, int* endOffset) {
    libqt_string _str = QAccessibleTextInterface_Attributes((QAccessibleTextInterface*)self, offset, startOffset, endOffset);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibletextinterface_operator_assign(void* self, void* param1) {
    QAccessibleTextInterface_OperatorAssign((QAccessibleTextInterface*)self, (QAccessibleTextInterface*)param1);
}

void q_accessibletextinterface_delete(void* self) {
    QAccessibleTextInterface_Delete((QAccessibleTextInterface*)(self));
}

void q_accessibleeditabletextinterface_delete_text(void* self, int startOffset, int endOffset) {
    QAccessibleEditableTextInterface_DeleteText((QAccessibleEditableTextInterface*)self, startOffset, endOffset);
}

void q_accessibleeditabletextinterface_insert_text(void* self, int offset, const char* text) {
    QAccessibleEditableTextInterface_InsertText((QAccessibleEditableTextInterface*)self, offset, qstring(text));
}

void q_accessibleeditabletextinterface_replace_text(void* self, int startOffset, int endOffset, const char* text) {
    QAccessibleEditableTextInterface_ReplaceText((QAccessibleEditableTextInterface*)self, startOffset, endOffset, qstring(text));
}

void q_accessibleeditabletextinterface_operator_assign(void* self, void* param1) {
    QAccessibleEditableTextInterface_OperatorAssign((QAccessibleEditableTextInterface*)self, (QAccessibleEditableTextInterface*)param1);
}

void q_accessibleeditabletextinterface_delete(void* self) {
    QAccessibleEditableTextInterface_Delete((QAccessibleEditableTextInterface*)(self));
}

QVariant* q_accessiblevalueinterface_current_value(void* self) {
    return QAccessibleValueInterface_CurrentValue((QAccessibleValueInterface*)self);
}

void q_accessiblevalueinterface_set_current_value(void* self, void* value) {
    QAccessibleValueInterface_SetCurrentValue((QAccessibleValueInterface*)self, (QVariant*)value);
}

QVariant* q_accessiblevalueinterface_maximum_value(void* self) {
    return QAccessibleValueInterface_MaximumValue((QAccessibleValueInterface*)self);
}

QVariant* q_accessiblevalueinterface_minimum_value(void* self) {
    return QAccessibleValueInterface_MinimumValue((QAccessibleValueInterface*)self);
}

QVariant* q_accessiblevalueinterface_minimum_step_size(void* self) {
    return QAccessibleValueInterface_MinimumStepSize((QAccessibleValueInterface*)self);
}

void q_accessiblevalueinterface_operator_assign(void* self, void* param1) {
    QAccessibleValueInterface_OperatorAssign((QAccessibleValueInterface*)self, (QAccessibleValueInterface*)param1);
}

void q_accessiblevalueinterface_delete(void* self) {
    QAccessibleValueInterface_Delete((QAccessibleValueInterface*)(self));
}

bool q_accessibletablecellinterface_is_selected(void* self) {
    return QAccessibleTableCellInterface_IsSelected((QAccessibleTableCellInterface*)self);
}

libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_column_header_cells(void* self) {
    libqt_list _arr = QAccessibleTableCellInterface_ColumnHeaderCells((QAccessibleTableCellInterface*)self);
    return _arr;
}

libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_row_header_cells(void* self) {
    libqt_list _arr = QAccessibleTableCellInterface_RowHeaderCells((QAccessibleTableCellInterface*)self);
    return _arr;
}

int32_t q_accessibletablecellinterface_column_index(void* self) {
    return QAccessibleTableCellInterface_ColumnIndex((QAccessibleTableCellInterface*)self);
}

int32_t q_accessibletablecellinterface_row_index(void* self) {
    return QAccessibleTableCellInterface_RowIndex((QAccessibleTableCellInterface*)self);
}

int32_t q_accessibletablecellinterface_column_extent(void* self) {
    return QAccessibleTableCellInterface_ColumnExtent((QAccessibleTableCellInterface*)self);
}

int32_t q_accessibletablecellinterface_row_extent(void* self) {
    return QAccessibleTableCellInterface_RowExtent((QAccessibleTableCellInterface*)self);
}

QAccessibleInterface* q_accessibletablecellinterface_table(void* self) {
    return QAccessibleTableCellInterface_Table((QAccessibleTableCellInterface*)self);
}

void q_accessibletablecellinterface_operator_assign(void* self, void* param1) {
    QAccessibleTableCellInterface_OperatorAssign((QAccessibleTableCellInterface*)self, (QAccessibleTableCellInterface*)param1);
}

void q_accessibletablecellinterface_delete(void* self) {
    QAccessibleTableCellInterface_Delete((QAccessibleTableCellInterface*)(self));
}

QAccessibleInterface* q_accessibletableinterface_caption(void* self) {
    return QAccessibleTableInterface_Caption((QAccessibleTableInterface*)self);
}

QAccessibleInterface* q_accessibletableinterface_summary(void* self) {
    return QAccessibleTableInterface_Summary((QAccessibleTableInterface*)self);
}

QAccessibleInterface* q_accessibletableinterface_cell_at(void* self, int row, int column) {
    return QAccessibleTableInterface_CellAt((QAccessibleTableInterface*)self, row, column);
}

int32_t q_accessibletableinterface_selected_cell_count(void* self) {
    return QAccessibleTableInterface_SelectedCellCount((QAccessibleTableInterface*)self);
}

libqt_list /* of QAccessibleInterface* */ q_accessibletableinterface_selected_cells(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedCells((QAccessibleTableInterface*)self);
    return _arr;
}

const char* q_accessibletableinterface_column_description(void* self, int column) {
    libqt_string _str = QAccessibleTableInterface_ColumnDescription((QAccessibleTableInterface*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibletableinterface_row_description(void* self, int row) {
    libqt_string _str = QAccessibleTableInterface_RowDescription((QAccessibleTableInterface*)self, row);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibletableinterface_selected_column_count(void* self) {
    return QAccessibleTableInterface_SelectedColumnCount((QAccessibleTableInterface*)self);
}

int32_t q_accessibletableinterface_selected_row_count(void* self) {
    return QAccessibleTableInterface_SelectedRowCount((QAccessibleTableInterface*)self);
}

int32_t q_accessibletableinterface_column_count(void* self) {
    return QAccessibleTableInterface_ColumnCount((QAccessibleTableInterface*)self);
}

int32_t q_accessibletableinterface_row_count(void* self) {
    return QAccessibleTableInterface_RowCount((QAccessibleTableInterface*)self);
}

libqt_list /* of int */ q_accessibletableinterface_selected_columns(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedColumns((QAccessibleTableInterface*)self);
    return _arr;
}

libqt_list /* of int */ q_accessibletableinterface_selected_rows(void* self) {
    libqt_list _arr = QAccessibleTableInterface_SelectedRows((QAccessibleTableInterface*)self);
    return _arr;
}

bool q_accessibletableinterface_is_column_selected(void* self, int column) {
    return QAccessibleTableInterface_IsColumnSelected((QAccessibleTableInterface*)self, column);
}

bool q_accessibletableinterface_is_row_selected(void* self, int row) {
    return QAccessibleTableInterface_IsRowSelected((QAccessibleTableInterface*)self, row);
}

bool q_accessibletableinterface_select_row(void* self, int row) {
    return QAccessibleTableInterface_SelectRow((QAccessibleTableInterface*)self, row);
}

bool q_accessibletableinterface_select_column(void* self, int column) {
    return QAccessibleTableInterface_SelectColumn((QAccessibleTableInterface*)self, column);
}

bool q_accessibletableinterface_unselect_row(void* self, int row) {
    return QAccessibleTableInterface_UnselectRow((QAccessibleTableInterface*)self, row);
}

bool q_accessibletableinterface_unselect_column(void* self, int column) {
    return QAccessibleTableInterface_UnselectColumn((QAccessibleTableInterface*)self, column);
}

void q_accessibletableinterface_model_change(void* self, void* event) {
    QAccessibleTableInterface_ModelChange((QAccessibleTableInterface*)self, (QAccessibleTableModelChangeEvent*)event);
}

void q_accessibletableinterface_delete(void* self) {
    QAccessibleTableInterface_Delete((QAccessibleTableInterface*)(self));
}

const char* q_accessibleactioninterface_tr(const char* sourceText) {
    libqt_string _str = QAccessibleActionInterface_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_accessibleactioninterface_action_names(void* self) {
    libqt_list _arr = QAccessibleActionInterface_ActionNames((QAccessibleActionInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accessibleactioninterface_action_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_accessibleactioninterface_localized_action_name(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionName((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_localized_action_description(void* self, const char* name) {
    libqt_string _str = QAccessibleActionInterface_LocalizedActionDescription((QAccessibleActionInterface*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleactioninterface_do_action(void* self, const char* actionName) {
    QAccessibleActionInterface_DoAction((QAccessibleActionInterface*)self, qstring(actionName));
}

const char** q_accessibleactioninterface_key_bindings_for_action(void* self, const char* actionName) {
    libqt_list _arr = QAccessibleActionInterface_KeyBindingsForAction((QAccessibleActionInterface*)self, qstring(actionName));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_accessibleactioninterface_key_bindings_for_action");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_accessibleactioninterface_press_action() {
    libqt_string _str = QAccessibleActionInterface_PressAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_increase_action() {
    libqt_string _str = QAccessibleActionInterface_IncreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_decrease_action() {
    libqt_string _str = QAccessibleActionInterface_DecreaseAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_show_menu_action() {
    libqt_string _str = QAccessibleActionInterface_ShowMenuAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_set_focus_action() {
    libqt_string _str = QAccessibleActionInterface_SetFocusAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_toggle_action() {
    libqt_string _str = QAccessibleActionInterface_ToggleAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_scroll_left_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollLeftAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_scroll_right_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollRightAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_scroll_up_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollUpAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_scroll_down_action() {
    libqt_string _str = QAccessibleActionInterface_ScrollDownAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_next_page_action() {
    libqt_string _str = QAccessibleActionInterface_NextPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_previous_page_action() {
    libqt_string _str = QAccessibleActionInterface_PreviousPageAction();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleactioninterface_operator_assign(void* self, void* param1) {
    QAccessibleActionInterface_OperatorAssign((QAccessibleActionInterface*)self, (QAccessibleActionInterface*)param1);
}

const char* q_accessibleactioninterface_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QAccessibleActionInterface_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibleactioninterface_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QAccessibleActionInterface_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessibleactioninterface_delete(void* self) {
    QAccessibleActionInterface_Delete((QAccessibleActionInterface*)(self));
}

const char* q_accessibleimageinterface_image_description(void* self) {
    libqt_string _str = QAccessibleImageInterface_ImageDescription((QAccessibleImageInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_accessibleimageinterface_image_size(void* self) {
    return QAccessibleImageInterface_ImageSize((QAccessibleImageInterface*)self);
}

QPoint* q_accessibleimageinterface_image_position(void* self) {
    return QAccessibleImageInterface_ImagePosition((QAccessibleImageInterface*)self);
}

void q_accessibleimageinterface_operator_assign(void* self, void* param1) {
    QAccessibleImageInterface_OperatorAssign((QAccessibleImageInterface*)self, (QAccessibleImageInterface*)param1);
}

void q_accessibleimageinterface_delete(void* self) {
    QAccessibleImageInterface_Delete((QAccessibleImageInterface*)(self));
}

const char* q_accessiblehyperlinkinterface_anchor(void* self) {
    libqt_string _str = QAccessibleHyperlinkInterface_Anchor((QAccessibleHyperlinkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblehyperlinkinterface_anchor_target(void* self) {
    libqt_string _str = QAccessibleHyperlinkInterface_AnchorTarget((QAccessibleHyperlinkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessiblehyperlinkinterface_start_index(void* self) {
    return QAccessibleHyperlinkInterface_StartIndex((QAccessibleHyperlinkInterface*)self);
}

int32_t q_accessiblehyperlinkinterface_end_index(void* self) {
    return QAccessibleHyperlinkInterface_EndIndex((QAccessibleHyperlinkInterface*)self);
}

bool q_accessiblehyperlinkinterface_is_valid(void* self) {
    return QAccessibleHyperlinkInterface_IsValid((QAccessibleHyperlinkInterface*)self);
}

void q_accessiblehyperlinkinterface_operator_assign(void* self, void* param1) {
    QAccessibleHyperlinkInterface_OperatorAssign((QAccessibleHyperlinkInterface*)self, (QAccessibleHyperlinkInterface*)param1);
}

void q_accessiblehyperlinkinterface_delete(void* self) {
    QAccessibleHyperlinkInterface_Delete((QAccessibleHyperlinkInterface*)(self));
}

int32_t q_accessibleselectioninterface_selected_item_count(void* self) {
    return QAccessibleSelectionInterface_SelectedItemCount((QAccessibleSelectionInterface*)self);
}

libqt_list /* of QAccessibleInterface* */ q_accessibleselectioninterface_selected_items(void* self) {
    libqt_list _arr = QAccessibleSelectionInterface_SelectedItems((QAccessibleSelectionInterface*)self);
    return _arr;
}

QAccessibleInterface* q_accessibleselectioninterface_selected_item(void* self, int selectionIndex) {
    return QAccessibleSelectionInterface_SelectedItem((QAccessibleSelectionInterface*)self, selectionIndex);
}

bool q_accessibleselectioninterface_is_selected(void* self, void* childItem) {
    return QAccessibleSelectionInterface_IsSelected((QAccessibleSelectionInterface*)self, (QAccessibleInterface*)childItem);
}

bool q_accessibleselectioninterface_select(void* self, void* childItem) {
    return QAccessibleSelectionInterface_Select((QAccessibleSelectionInterface*)self, (QAccessibleInterface*)childItem);
}

bool q_accessibleselectioninterface_unselect(void* self, void* childItem) {
    return QAccessibleSelectionInterface_Unselect((QAccessibleSelectionInterface*)self, (QAccessibleInterface*)childItem);
}

bool q_accessibleselectioninterface_select_all(void* self) {
    return QAccessibleSelectionInterface_SelectAll((QAccessibleSelectionInterface*)self);
}

bool q_accessibleselectioninterface_clear(void* self) {
    return QAccessibleSelectionInterface_Clear((QAccessibleSelectionInterface*)self);
}

void q_accessibleselectioninterface_operator_assign(void* self, void* param1) {
    QAccessibleSelectionInterface_OperatorAssign((QAccessibleSelectionInterface*)self, (QAccessibleSelectionInterface*)param1);
}

void q_accessibleselectioninterface_delete(void* self) {
    QAccessibleSelectionInterface_Delete((QAccessibleSelectionInterface*)(self));
}

libqt_list /* of int64_t */ q_accessibleattributesinterface_attribute_keys(void* self) {
    libqt_list _arr = QAccessibleAttributesInterface_AttributeKeys((QAccessibleAttributesInterface*)self);
    return _arr;
}

QVariant* q_accessibleattributesinterface_attribute_value(void* self, int64_t key) {
    return QAccessibleAttributesInterface_AttributeValue((QAccessibleAttributesInterface*)self, key);
}

void q_accessibleattributesinterface_operator_assign(void* self, void* param1) {
    QAccessibleAttributesInterface_OperatorAssign((QAccessibleAttributesInterface*)self, (QAccessibleAttributesInterface*)param1);
}

void q_accessibleattributesinterface_delete(void* self) {
    QAccessibleAttributesInterface_Delete((QAccessibleAttributesInterface*)(self));
}

QAccessibleEvent* q_accessibleevent_new(void* obj, int64_t typ) {
    return QAccessibleEvent_new((QObject*)obj, typ);
}

QAccessibleEvent* q_accessibleevent_new2(void* iface, int64_t typ) {
    return QAccessibleEvent_new2((QAccessibleInterface*)iface, typ);
}

int64_t q_accessibleevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibleevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibleevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibleevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibleevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibleevent_accessible_interface(void* self) {
    return QAccessibleEvent_AccessibleInterface((QAccessibleEvent*)self);
}

void q_accessibleevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleEvent_OnAccessibleInterface((QAccessibleEvent*)self, (intptr_t)callback);
}

QAccessibleInterface* q_accessibleevent_qbase_accessible_interface(void* self) {
    return QAccessibleEvent_QBaseAccessibleInterface((QAccessibleEvent*)self);
}

void q_accessibleevent_delete(void* self) {
    QAccessibleEvent_Delete((QAccessibleEvent*)(self));
}

QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new(void* obj, void* state) {
    return QAccessibleStateChangeEvent_new((QObject*)obj, (QAccessible__State*)state);
}

QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new2(void* iface, void* state) {
    return QAccessibleStateChangeEvent_new2((QAccessibleInterface*)iface, (QAccessible__State*)state);
}

QAccessible__State* q_accessiblestatechangeevent_changed_states(void* self) {
    return QAccessibleStateChangeEvent_ChangedStates((QAccessibleStateChangeEvent*)self);
}

int64_t q_accessiblestatechangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessiblestatechangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessiblestatechangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessiblestatechangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessiblestatechangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessiblestatechangeevent_accessible_interface(void* self) {
    return QAccessibleStateChangeEvent_AccessibleInterface((QAccessibleStateChangeEvent*)self);
}

QAccessibleInterface* q_accessiblestatechangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleStateChangeEvent_QBaseAccessibleInterface((QAccessibleStateChangeEvent*)self);
}

void q_accessiblestatechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleStateChangeEvent_OnAccessibleInterface((QAccessibleStateChangeEvent*)self, (intptr_t)callback);
}

void q_accessiblestatechangeevent_delete(void* self) {
    QAccessibleStateChangeEvent_Delete((QAccessibleStateChangeEvent*)(self));
}

QAccessibleTextCursorEvent* q_accessibletextcursorevent_new(void* obj, int cursorPos) {
    return QAccessibleTextCursorEvent_new((QObject*)obj, cursorPos);
}

QAccessibleTextCursorEvent* q_accessibletextcursorevent_new2(void* iface, int cursorPos) {
    return QAccessibleTextCursorEvent_new2((QAccessibleInterface*)iface, cursorPos);
}

void q_accessibletextcursorevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

int32_t q_accessibletextcursorevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

int64_t q_accessibletextcursorevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletextcursorevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletextcursorevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletextcursorevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletextcursorevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletextcursorevent_accessible_interface(void* self) {
    return QAccessibleTextCursorEvent_AccessibleInterface((QAccessibleTextCursorEvent*)self);
}

QAccessibleInterface* q_accessibletextcursorevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextCursorEvent_QBaseAccessibleInterface((QAccessibleTextCursorEvent*)self);
}

void q_accessibletextcursorevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTextCursorEvent_OnAccessibleInterface((QAccessibleTextCursorEvent*)self, (intptr_t)callback);
}

void q_accessibletextcursorevent_delete(void* self) {
    QAccessibleTextCursorEvent_Delete((QAccessibleTextCursorEvent*)(self));
}

QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new(void* obj, int start, int end) {
    return QAccessibleTextSelectionEvent_new((QObject*)obj, start, end);
}

QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new2(void* iface, int start, int end) {
    return QAccessibleTextSelectionEvent_new2((QAccessibleInterface*)iface, start, end);
}

void q_accessibletextselectionevent_set_selection(void* self, int start, int end) {
    QAccessibleTextSelectionEvent_SetSelection((QAccessibleTextSelectionEvent*)self, start, end);
}

int32_t q_accessibletextselectionevent_selection_start(void* self) {
    return QAccessibleTextSelectionEvent_SelectionStart((QAccessibleTextSelectionEvent*)self);
}

int32_t q_accessibletextselectionevent_selection_end(void* self) {
    return QAccessibleTextSelectionEvent_SelectionEnd((QAccessibleTextSelectionEvent*)self);
}

void q_accessibletextselectionevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

int32_t q_accessibletextselectionevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

int64_t q_accessibletextselectionevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletextselectionevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletextselectionevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletextselectionevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletextselectionevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletextselectionevent_accessible_interface(void* self) {
    return QAccessibleTextSelectionEvent_AccessibleInterface((QAccessibleTextSelectionEvent*)self);
}

QAccessibleInterface* q_accessibletextselectionevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextSelectionEvent_QBaseAccessibleInterface((QAccessibleTextSelectionEvent*)self);
}

void q_accessibletextselectionevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTextSelectionEvent_OnAccessibleInterface((QAccessibleTextSelectionEvent*)self, (intptr_t)callback);
}

void q_accessibletextselectionevent_delete(void* self) {
    QAccessibleTextSelectionEvent_Delete((QAccessibleTextSelectionEvent*)(self));
}

QAccessibleTextInsertEvent* q_accessibletextinsertevent_new(void* obj, int position, const char* text) {
    return QAccessibleTextInsertEvent_new((QObject*)obj, position, qstring(text));
}

QAccessibleTextInsertEvent* q_accessibletextinsertevent_new2(void* iface, int position, const char* text) {
    return QAccessibleTextInsertEvent_new2((QAccessibleInterface*)iface, position, qstring(text));
}

const char* q_accessibletextinsertevent_text_inserted(void* self) {
    libqt_string _str = QAccessibleTextInsertEvent_TextInserted((QAccessibleTextInsertEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibletextinsertevent_change_position(void* self) {
    return QAccessibleTextInsertEvent_ChangePosition((QAccessibleTextInsertEvent*)self);
}

void q_accessibletextinsertevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

int32_t q_accessibletextinsertevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

int64_t q_accessibletextinsertevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletextinsertevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletextinsertevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletextinsertevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletextinsertevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletextinsertevent_accessible_interface(void* self) {
    return QAccessibleTextInsertEvent_AccessibleInterface((QAccessibleTextInsertEvent*)self);
}

QAccessibleInterface* q_accessibletextinsertevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextInsertEvent_QBaseAccessibleInterface((QAccessibleTextInsertEvent*)self);
}

void q_accessibletextinsertevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTextInsertEvent_OnAccessibleInterface((QAccessibleTextInsertEvent*)self, (intptr_t)callback);
}

void q_accessibletextinsertevent_delete(void* self) {
    QAccessibleTextInsertEvent_Delete((QAccessibleTextInsertEvent*)(self));
}

QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new(void* obj, int position, const char* text) {
    return QAccessibleTextRemoveEvent_new((QObject*)obj, position, qstring(text));
}

QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new2(void* iface, int position, const char* text) {
    return QAccessibleTextRemoveEvent_new2((QAccessibleInterface*)iface, position, qstring(text));
}

const char* q_accessibletextremoveevent_text_removed(void* self) {
    libqt_string _str = QAccessibleTextRemoveEvent_TextRemoved((QAccessibleTextRemoveEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibletextremoveevent_change_position(void* self) {
    return QAccessibleTextRemoveEvent_ChangePosition((QAccessibleTextRemoveEvent*)self);
}

void q_accessibletextremoveevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

int32_t q_accessibletextremoveevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

int64_t q_accessibletextremoveevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletextremoveevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletextremoveevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletextremoveevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletextremoveevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletextremoveevent_accessible_interface(void* self) {
    return QAccessibleTextRemoveEvent_AccessibleInterface((QAccessibleTextRemoveEvent*)self);
}

QAccessibleInterface* q_accessibletextremoveevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextRemoveEvent_QBaseAccessibleInterface((QAccessibleTextRemoveEvent*)self);
}

void q_accessibletextremoveevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTextRemoveEvent_OnAccessibleInterface((QAccessibleTextRemoveEvent*)self, (intptr_t)callback);
}

void q_accessibletextremoveevent_delete(void* self) {
    QAccessibleTextRemoveEvent_Delete((QAccessibleTextRemoveEvent*)(self));
}

QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new(void* obj, int position, const char* oldText, const char* text) {
    return QAccessibleTextUpdateEvent_new((QObject*)obj, position, qstring(oldText), qstring(text));
}

QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new2(void* iface, int position, const char* oldText, const char* text) {
    return QAccessibleTextUpdateEvent_new2((QAccessibleInterface*)iface, position, qstring(oldText), qstring(text));
}

const char* q_accessibletextupdateevent_text_removed(void* self) {
    libqt_string _str = QAccessibleTextUpdateEvent_TextRemoved((QAccessibleTextUpdateEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessibletextupdateevent_text_inserted(void* self) {
    libqt_string _str = QAccessibleTextUpdateEvent_TextInserted((QAccessibleTextUpdateEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_accessibletextupdateevent_change_position(void* self) {
    return QAccessibleTextUpdateEvent_ChangePosition((QAccessibleTextUpdateEvent*)self);
}

void q_accessibletextupdateevent_set_cursor_position(void* self, int position) {
    QAccessibleTextCursorEvent_SetCursorPosition((QAccessibleTextCursorEvent*)self, position);
}

int32_t q_accessibletextupdateevent_cursor_position(void* self) {
    return QAccessibleTextCursorEvent_CursorPosition((QAccessibleTextCursorEvent*)self);
}

int64_t q_accessibletextupdateevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletextupdateevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletextupdateevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletextupdateevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletextupdateevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletextupdateevent_accessible_interface(void* self) {
    return QAccessibleTextUpdateEvent_AccessibleInterface((QAccessibleTextUpdateEvent*)self);
}

QAccessibleInterface* q_accessibletextupdateevent_qbase_accessible_interface(void* self) {
    return QAccessibleTextUpdateEvent_QBaseAccessibleInterface((QAccessibleTextUpdateEvent*)self);
}

void q_accessibletextupdateevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTextUpdateEvent_OnAccessibleInterface((QAccessibleTextUpdateEvent*)self, (intptr_t)callback);
}

void q_accessibletextupdateevent_delete(void* self) {
    QAccessibleTextUpdateEvent_Delete((QAccessibleTextUpdateEvent*)(self));
}

QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new(void* obj, void* val) {
    return QAccessibleValueChangeEvent_new((QObject*)obj, (QVariant*)val);
}

QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new2(void* iface, void* val) {
    return QAccessibleValueChangeEvent_new2((QAccessibleInterface*)iface, (QVariant*)val);
}

void q_accessiblevaluechangeevent_set_value(void* self, void* val) {
    QAccessibleValueChangeEvent_SetValue((QAccessibleValueChangeEvent*)self, (QVariant*)val);
}

QVariant* q_accessiblevaluechangeevent_value(void* self) {
    return QAccessibleValueChangeEvent_Value((QAccessibleValueChangeEvent*)self);
}

int64_t q_accessiblevaluechangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessiblevaluechangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessiblevaluechangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessiblevaluechangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessiblevaluechangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessiblevaluechangeevent_accessible_interface(void* self) {
    return QAccessibleValueChangeEvent_AccessibleInterface((QAccessibleValueChangeEvent*)self);
}

QAccessibleInterface* q_accessiblevaluechangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleValueChangeEvent_QBaseAccessibleInterface((QAccessibleValueChangeEvent*)self);
}

void q_accessiblevaluechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleValueChangeEvent_OnAccessibleInterface((QAccessibleValueChangeEvent*)self, (intptr_t)callback);
}

void q_accessiblevaluechangeevent_delete(void* self) {
    QAccessibleValueChangeEvent_Delete((QAccessibleValueChangeEvent*)(self));
}

QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new(void* obj, int64_t changeType) {
    return QAccessibleTableModelChangeEvent_new((QObject*)obj, changeType);
}

QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new2(void* iface, int64_t changeType) {
    return QAccessibleTableModelChangeEvent_new2((QAccessibleInterface*)iface, changeType);
}

void q_accessibletablemodelchangeevent_set_model_change_type(void* self, int64_t changeType) {
    QAccessibleTableModelChangeEvent_SetModelChangeType((QAccessibleTableModelChangeEvent*)self, changeType);
}

int64_t q_accessibletablemodelchangeevent_model_change_type(void* self) {
    return QAccessibleTableModelChangeEvent_ModelChangeType((QAccessibleTableModelChangeEvent*)self);
}

void q_accessibletablemodelchangeevent_set_first_row(void* self, int row) {
    QAccessibleTableModelChangeEvent_SetFirstRow((QAccessibleTableModelChangeEvent*)self, row);
}

void q_accessibletablemodelchangeevent_set_first_column(void* self, int col) {
    QAccessibleTableModelChangeEvent_SetFirstColumn((QAccessibleTableModelChangeEvent*)self, col);
}

void q_accessibletablemodelchangeevent_set_last_row(void* self, int row) {
    QAccessibleTableModelChangeEvent_SetLastRow((QAccessibleTableModelChangeEvent*)self, row);
}

void q_accessibletablemodelchangeevent_set_last_column(void* self, int col) {
    QAccessibleTableModelChangeEvent_SetLastColumn((QAccessibleTableModelChangeEvent*)self, col);
}

int32_t q_accessibletablemodelchangeevent_first_row(void* self) {
    return QAccessibleTableModelChangeEvent_FirstRow((QAccessibleTableModelChangeEvent*)self);
}

int32_t q_accessibletablemodelchangeevent_first_column(void* self) {
    return QAccessibleTableModelChangeEvent_FirstColumn((QAccessibleTableModelChangeEvent*)self);
}

int32_t q_accessibletablemodelchangeevent_last_row(void* self) {
    return QAccessibleTableModelChangeEvent_LastRow((QAccessibleTableModelChangeEvent*)self);
}

int32_t q_accessibletablemodelchangeevent_last_column(void* self) {
    return QAccessibleTableModelChangeEvent_LastColumn((QAccessibleTableModelChangeEvent*)self);
}

int64_t q_accessibletablemodelchangeevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibletablemodelchangeevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibletablemodelchangeevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibletablemodelchangeevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibletablemodelchangeevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibletablemodelchangeevent_accessible_interface(void* self) {
    return QAccessibleTableModelChangeEvent_AccessibleInterface((QAccessibleTableModelChangeEvent*)self);
}

QAccessibleInterface* q_accessibletablemodelchangeevent_qbase_accessible_interface(void* self) {
    return QAccessibleTableModelChangeEvent_QBaseAccessibleInterface((QAccessibleTableModelChangeEvent*)self);
}

void q_accessibletablemodelchangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleTableModelChangeEvent_OnAccessibleInterface((QAccessibleTableModelChangeEvent*)self, (intptr_t)callback);
}

void q_accessibletablemodelchangeevent_delete(void* self) {
    QAccessibleTableModelChangeEvent_Delete((QAccessibleTableModelChangeEvent*)(self));
}

QAccessibleAnnouncementEvent* q_accessibleannouncementevent_new(void* object, const char* message) {
    return QAccessibleAnnouncementEvent_new((QObject*)object, qstring(message));
}

QAccessibleAnnouncementEvent* q_accessibleannouncementevent_new2(void* iface, const char* message) {
    return QAccessibleAnnouncementEvent_new2((QAccessibleInterface*)iface, qstring(message));
}

const char* q_accessibleannouncementevent_message(void* self) {
    libqt_string _str = QAccessibleAnnouncementEvent_Message((QAccessibleAnnouncementEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_accessibleannouncementevent_politeness(void* self) {
    return QAccessibleAnnouncementEvent_Politeness((QAccessibleAnnouncementEvent*)self);
}

void q_accessibleannouncementevent_set_politeness(void* self, int64_t politeness) {
    QAccessibleAnnouncementEvent_SetPoliteness((QAccessibleAnnouncementEvent*)self, politeness);
}

int64_t q_accessibleannouncementevent_type(void* self) {
    return QAccessibleEvent_Type((QAccessibleEvent*)self);
}

QObject* q_accessibleannouncementevent_object(void* self) {
    return QAccessibleEvent_Object((QAccessibleEvent*)self);
}

uint32_t q_accessibleannouncementevent_unique_id(void* self) {
    return QAccessibleEvent_UniqueId((QAccessibleEvent*)self);
}

void q_accessibleannouncementevent_set_child(void* self, int chld) {
    QAccessibleEvent_SetChild((QAccessibleEvent*)self, chld);
}

int32_t q_accessibleannouncementevent_child(void* self) {
    return QAccessibleEvent_Child((QAccessibleEvent*)self);
}

QAccessibleInterface* q_accessibleannouncementevent_accessible_interface(void* self) {
    return QAccessibleAnnouncementEvent_AccessibleInterface((QAccessibleAnnouncementEvent*)self);
}

QAccessibleInterface* q_accessibleannouncementevent_qbase_accessible_interface(void* self) {
    return QAccessibleAnnouncementEvent_QBaseAccessibleInterface((QAccessibleAnnouncementEvent*)self);
}

void q_accessibleannouncementevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)()) {
    QAccessibleAnnouncementEvent_OnAccessibleInterface((QAccessibleAnnouncementEvent*)self, (intptr_t)callback);
}

void q_accessibleannouncementevent_delete(void* self) {
    QAccessibleAnnouncementEvent_Delete((QAccessibleAnnouncementEvent*)(self));
}
