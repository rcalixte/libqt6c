#pragma once
#ifndef SRC_QT6C_LIBQACCESSIBLE_H
#define SRC_QT6C_LIBQACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
///
/// @param self QAccessibleInterface*
///
bool q_accessibleinterface_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
///
/// @param self QAccessibleInterface*
///
QObject* q_accessibleinterface_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// @param self QAccessibleInterface*
///
QWindow* q_accessibleinterface_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// @param self QAccessibleInterface*
/// @param match flag of enum QAccessible__RelationFlag
///
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleinterface_relations(void* self, int64_t match);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// @param self QAccessibleInterface*
///
QAccessibleInterface* q_accessibleinterface_focus_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
///
/// @param self QAccessibleInterface*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleinterface_child_at(void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// @param self QAccessibleInterface*
///
QAccessibleInterface* q_accessibleinterface_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// @param self QAccessibleInterface*
/// @param index int
///
QAccessibleInterface* q_accessibleinterface_child(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// @param self QAccessibleInterface*
///
int32_t q_accessibleinterface_child_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// @param self QAccessibleInterface*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleinterface_index_of_child(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleInterface*
/// @param t enum QAccessible__Text
///
const char* q_accessibleinterface_text(void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
///
/// @param self QAccessibleInterface*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleinterface_set_text(void* self, int32_t t, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
///
/// @param self QAccessibleInterface*
///
QRect* q_accessibleinterface_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// @param self QAccessibleInterface*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleinterface_role(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// @param self QAccessibleInterface*
///
QAccessible__State* q_accessibleinterface_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// @param self QAccessibleInterface*
///
QColor* q_accessibleinterface_foreground_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// @param self QAccessibleInterface*
///
QColor* q_accessibleinterface_background_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleTextInterface* q_accessibleinterface_text_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleEditableTextInterface* q_accessibleinterface_editable_text_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleValueInterface* q_accessibleinterface_value_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleActionInterface* q_accessibleinterface_action_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleImageInterface* q_accessibleinterface_image_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleTableInterface* q_accessibleinterface_table_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleTableCellInterface* q_accessibleinterface_table_cell_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleHyperlinkInterface* q_accessibleinterface_hyperlink_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleSelectionInterface* q_accessibleinterface_selection_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
///
/// @param self QAccessibleInterface*
///
QAccessibleAttributesInterface* q_accessibleinterface_attributes_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
///
/// @param self QAccessibleInterface*
/// @param id int
/// @param data void*
///
void q_accessibleinterface_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
///
/// @param self QAccessibleInterface*
/// @param param1 enum QAccessible__InterfaceType
///
void* q_accessibleinterface_interface_cast(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
///
/// @param self QAccessibleTextInterface*
/// @param selectionIndex int
/// @param startOffset int*
/// @param endOffset int*
///
void q_accessibletextinterface_selection(void* self, int selectionIndex, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
///
/// @param self QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_selection_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
///
/// @param self QAccessibleTextInterface*
/// @param startOffset int
/// @param endOffset int
///
void q_accessibletextinterface_add_selection(void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
///
/// @param self QAccessibleTextInterface*
/// @param selectionIndex int
///
void q_accessibletextinterface_remove_selection(void* self, int selectionIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
///
/// @param self QAccessibleTextInterface*
/// @param selectionIndex int
/// @param startOffset int
/// @param endOffset int
///
void q_accessibletextinterface_set_selection(void* self, int selectionIndex, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
///
/// @param self QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_cursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
///
/// @param self QAccessibleTextInterface*
/// @param position int
///
void q_accessibletextinterface_set_cursor_position(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInterface*
/// @param startOffset int
/// @param endOffset int
///
const char* q_accessibletextinterface_text(void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_before_offset(void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_after_offset(void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_at_offset(void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
///
/// @param self QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_character_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
///
/// @param self QAccessibleTextInterface*
/// @param offset int
///
QRect* q_accessibletextinterface_character_rect(void* self, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
///
/// @param self QAccessibleTextInterface*
/// @param point QPoint*
///
int32_t q_accessibletextinterface_offset_at_point(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
///
/// @param self QAccessibleTextInterface*
/// @param startIndex int
/// @param endIndex int
///
void q_accessibletextinterface_scroll_to_substring(void* self, int startIndex, int endIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInterface*
/// @param offset int
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_attributes(void* self, int offset, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator-eq)
///
/// @param self QAccessibleTextInterface*
/// @param param1 QAccessibleTextInterface*
///
void q_accessibletextinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#dtor.QAccessibleTextInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextInterface*
///
void q_accessibletextinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#deleteText)
///
/// @param self QAccessibleEditableTextInterface*
/// @param startOffset int
/// @param endOffset int
///
void q_accessibleeditabletextinterface_delete_text(void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
///
/// @param self QAccessibleEditableTextInterface*
/// @param offset int
/// @param text const char*
///
void q_accessibleeditabletextinterface_insert_text(void* self, int offset, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
///
/// @param self QAccessibleEditableTextInterface*
/// @param startOffset int
/// @param endOffset int
/// @param text const char*
///
void q_accessibleeditabletextinterface_replace_text(void* self, int startOffset, int endOffset, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator-eq)
///
/// @param self QAccessibleEditableTextInterface*
/// @param param1 QAccessibleEditableTextInterface*
///
void q_accessibleeditabletextinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#dtor.QAccessibleEditableTextInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleEditableTextInterface*
///
void q_accessibleeditabletextinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
///
/// @param self QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_current_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
///
/// @param self QAccessibleValueInterface*
/// @param value QVariant*
///
void q_accessiblevalueinterface_set_current_value(void* self, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
///
/// @param self QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_maximum_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
///
/// @param self QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_minimum_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
///
/// @param self QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_minimum_step_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator-eq)
///
/// @param self QAccessibleValueInterface*
/// @param param1 QAccessibleValueInterface*
///
void q_accessiblevalueinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#dtor.QAccessibleValueInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleValueInterface*
///
void q_accessiblevalueinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
///
/// @param self QAccessibleTableCellInterface*
///
bool q_accessibletablecellinterface_is_selected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
///
/// @param self QAccessibleTableCellInterface*
///
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_column_header_cells(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
///
/// @param self QAccessibleTableCellInterface*
///
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_row_header_cells(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
///
/// @param self QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_column_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
///
/// @param self QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_row_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
///
/// @param self QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_column_extent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
///
/// @param self QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_row_extent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
///
/// @param self QAccessibleTableCellInterface*
///
QAccessibleInterface* q_accessibletablecellinterface_table(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator-eq)
///
/// @param self QAccessibleTableCellInterface*
/// @param param1 QAccessibleTableCellInterface*
///
void q_accessibletablecellinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#dtor.QAccessibleTableCellInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTableCellInterface*
///
void q_accessibletablecellinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
///
/// @param self QAccessibleTableInterface*
///
QAccessibleInterface* q_accessibletableinterface_caption(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
///
/// @param self QAccessibleTableInterface*
///
QAccessibleInterface* q_accessibletableinterface_summary(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
///
/// @param self QAccessibleTableInterface*
/// @param row int
/// @param column int
///
QAccessibleInterface* q_accessibletableinterface_cell_at(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
///
/// @param self QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_cell_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
///
/// @param self QAccessibleTableInterface*
///
libqt_list /* of QAccessibleInterface* */ q_accessibletableinterface_selected_cells(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
const char* q_accessibletableinterface_column_description(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
const char* q_accessibletableinterface_row_description(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
///
/// @param self QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
///
/// @param self QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_row_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
///
/// @param self QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_column_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
///
/// @param self QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_row_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
///
/// @param self QAccessibleTableInterface*
///
libqt_list /* of int */ q_accessibletableinterface_selected_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
///
/// @param self QAccessibleTableInterface*
///
libqt_list /* of int */ q_accessibletableinterface_selected_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_is_column_selected(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_is_row_selected(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_select_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_select_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_unselect_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_unselect_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
///
/// @param self QAccessibleTableInterface*
/// @param event QAccessibleTableModelChangeEvent*
///
void q_accessibletableinterface_model_change(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#dtor.QAccessibleTableInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTableInterface*
///
void q_accessibletableinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
///
const char* q_accessibleactioninterface_tr(const char* sourceText);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#actionNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAccessibleActionInterface*
///
const char** q_accessibleactioninterface_action_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleActionInterface*
/// @param name const char*
///
const char* q_accessibleactioninterface_localized_action_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleActionInterface*
/// @param name const char*
///
const char* q_accessibleactioninterface_localized_action_description(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
///
/// @param self QAccessibleActionInterface*
/// @param actionName const char*
///
void q_accessibleactioninterface_do_action(void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAccessibleActionInterface*
/// @param actionName const char*
///
const char** q_accessibleactioninterface_key_bindings_for_action(void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_press_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_increase_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_decrease_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_show_menu_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_set_focus_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_toggle_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_scroll_left_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_scroll_right_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_scroll_up_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_scroll_down_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_next_page_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_accessibleactioninterface_previous_page_action();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#operator-eq)
///
/// @param self QAccessibleActionInterface*
/// @param param1 QAccessibleActionInterface*
///
void q_accessibleactioninterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* q_accessibleactioninterface_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_accessibleactioninterface_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#dtor.QAccessibleActionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleActionInterface*
///
void q_accessibleactioninterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleImageInterface*
///
const char* q_accessibleimageinterface_image_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
///
/// @param self QAccessibleImageInterface*
///
QSize* q_accessibleimageinterface_image_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
///
/// @param self QAccessibleImageInterface*
///
QPoint* q_accessibleimageinterface_image_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator-eq)
///
/// @param self QAccessibleImageInterface*
/// @param param1 QAccessibleImageInterface*
///
void q_accessibleimageinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#dtor.QAccessibleImageInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleImageInterface*
///
void q_accessibleimageinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleHyperlinkInterface*
///
const char* q_accessiblehyperlinkinterface_anchor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleHyperlinkInterface*
///
const char* q_accessiblehyperlinkinterface_anchor_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
///
/// @param self QAccessibleHyperlinkInterface*
///
int32_t q_accessiblehyperlinkinterface_start_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
///
/// @param self QAccessibleHyperlinkInterface*
///
int32_t q_accessiblehyperlinkinterface_end_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
///
/// @param self QAccessibleHyperlinkInterface*
///
bool q_accessiblehyperlinkinterface_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator-eq)
///
/// @param self QAccessibleHyperlinkInterface*
/// @param param1 QAccessibleHyperlinkInterface*
///
void q_accessiblehyperlinkinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#dtor.QAccessibleHyperlinkInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleHyperlinkInterface*
///
void q_accessiblehyperlinkinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItemCount)
///
/// @param self QAccessibleSelectionInterface*
///
int32_t q_accessibleselectioninterface_selected_item_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItems)
///
/// @param self QAccessibleSelectionInterface*
///
libqt_list /* of QAccessibleInterface* */ q_accessibleselectioninterface_selected_items(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItem)
///
/// @param self QAccessibleSelectionInterface*
/// @param selectionIndex int
///
QAccessibleInterface* q_accessibleselectioninterface_selected_item(void* self, int selectionIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#isSelected)
///
/// @param self QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_is_selected(void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#select)
///
/// @param self QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_select(void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#unselect)
///
/// @param self QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_unselect(void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectAll)
///
/// @param self QAccessibleSelectionInterface*
///
bool q_accessibleselectioninterface_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#clear)
///
/// @param self QAccessibleSelectionInterface*
///
bool q_accessibleselectioninterface_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#operator-eq)
///
/// @param self QAccessibleSelectionInterface*
/// @param param1 QAccessibleSelectionInterface*
///
void q_accessibleselectioninterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#dtor.QAccessibleSelectionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleSelectionInterface*
///
void q_accessibleselectioninterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeKeys)
///
/// @param self QAccessibleAttributesInterface*
///
/// @return libqt_list of enum QAccessible__Attribute
///
libqt_list /* of int32_t */ q_accessibleattributesinterface_attribute_keys(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeValue)
///
/// @param self QAccessibleAttributesInterface*
/// @param key enum QAccessible__Attribute
///
QVariant* q_accessibleattributesinterface_attribute_value(void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#operator-eq)
///
/// @param self QAccessibleAttributesInterface*
/// @param param1 QAccessibleAttributesInterface*
///
void q_accessibleattributesinterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#dtor.QAccessibleAttributesInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleAttributesInterface*
///
void q_accessibleattributesinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html)

/// q_accessibleevent_new constructs a new QAccessibleEvent object.
///
/// @param obj QObject*
/// @param typ enum QAccessible__Event
///
QAccessibleEvent* q_accessibleevent_new(void* obj, int32_t typ);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html)

/// q_accessibleevent_new2 constructs a new QAccessibleEvent object.
///
/// @param iface QAccessibleInterface*
/// @param typ enum QAccessible__Event
///
QAccessibleEvent* q_accessibleevent_new2(void* iface, int32_t typ);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibleevent_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleEvent*
///
QObject* q_accessibleevent_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleEvent*
///
uint32_t q_accessibleevent_unique_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleEvent*
/// @param chld int
///
void q_accessibleevent_set_child(void* self, int chld);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleEvent*
///
int32_t q_accessibleevent_child(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// @param self QAccessibleEvent*
///
QAccessibleInterface* q_accessibleevent_accessible_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Base class method implementation
///
/// @param self QAccessibleEvent*
///
QAccessibleInterface* q_accessibleevent_qbase_accessible_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#dtor.QAccessibleEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleEvent*
///
void q_accessibleevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html)

/// q_accessiblestatechangeevent_new constructs a new QAccessibleStateChangeEvent object.
///
/// @param obj QObject*
/// @param state QAccessible__State*
///
QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new(void* obj, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html)

/// q_accessiblestatechangeevent_new2 constructs a new QAccessibleStateChangeEvent object.
///
/// @param iface QAccessibleInterface*
/// @param state QAccessible__State*
///
QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new2(void* iface, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
///
/// @param self QAccessibleStateChangeEvent*
///
QAccessible__State* q_accessiblestatechangeevent_changed_states(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleStateChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessiblestatechangeevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleStateChangeEvent*
///
QObject* q_accessiblestatechangeevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleStateChangeEvent*
///
uint32_t q_accessiblestatechangeevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleStateChangeEvent*
/// @param chld int
///
void q_accessiblestatechangeevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleStateChangeEvent*
///
int32_t q_accessiblestatechangeevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleStateChangeEvent*
///
QAccessibleInterface* q_accessiblestatechangeevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleStateChangeEvent*
///
QAccessibleInterface* q_accessiblestatechangeevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleStateChangeEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessiblestatechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#dtor.QAccessibleStateChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleStateChangeEvent*
///
void q_accessiblestatechangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html)

/// q_accessibletextcursorevent_new constructs a new QAccessibleTextCursorEvent object.
///
/// @param obj QObject*
/// @param cursorPos int
///
QAccessibleTextCursorEvent* q_accessibletextcursorevent_new(void* obj, int cursorPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html)

/// q_accessibletextcursorevent_new2 constructs a new QAccessibleTextCursorEvent object.
///
/// @param iface QAccessibleInterface*
/// @param cursorPos int
///
QAccessibleTextCursorEvent* q_accessibletextcursorevent_new2(void* iface, int cursorPos);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// @param self QAccessibleTextCursorEvent*
/// @param position int
///
void q_accessibletextcursorevent_set_cursor_position(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// @param self QAccessibleTextCursorEvent*
///
int32_t q_accessibletextcursorevent_cursor_position(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTextCursorEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextcursorevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTextCursorEvent*
///
QObject* q_accessibletextcursorevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTextCursorEvent*
///
uint32_t q_accessibletextcursorevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTextCursorEvent*
/// @param chld int
///
void q_accessibletextcursorevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTextCursorEvent*
///
int32_t q_accessibletextcursorevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTextCursorEvent*
///
QAccessibleInterface* q_accessibletextcursorevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTextCursorEvent*
///
QAccessibleInterface* q_accessibletextcursorevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTextCursorEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletextcursorevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#dtor.QAccessibleTextCursorEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextCursorEvent*
///
void q_accessibletextcursorevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html)

/// q_accessibletextselectionevent_new constructs a new QAccessibleTextSelectionEvent object.
///
/// @param obj QObject*
/// @param start int
/// @param end int
///
QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new(void* obj, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html)

/// q_accessibletextselectionevent_new2 constructs a new QAccessibleTextSelectionEvent object.
///
/// @param iface QAccessibleInterface*
/// @param start int
/// @param end int
///
QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new2(void* iface, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#setSelection)
///
/// @param self QAccessibleTextSelectionEvent*
/// @param start int
/// @param end int
///
void q_accessibletextselectionevent_set_selection(void* self, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
///
/// @param self QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_selection_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
///
/// @param self QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_selection_end(void* self);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// @param self QAccessibleTextSelectionEvent*
/// @param position int
///
void q_accessibletextselectionevent_set_cursor_position(void* self, int position);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// @param self QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_cursor_position(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTextSelectionEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextselectionevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTextSelectionEvent*
///
QObject* q_accessibletextselectionevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTextSelectionEvent*
///
uint32_t q_accessibletextselectionevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTextSelectionEvent*
/// @param chld int
///
void q_accessibletextselectionevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTextSelectionEvent*
///
QAccessibleInterface* q_accessibletextselectionevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTextSelectionEvent*
///
QAccessibleInterface* q_accessibletextselectionevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTextSelectionEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletextselectionevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#dtor.QAccessibleTextSelectionEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextSelectionEvent*
///
void q_accessibletextselectionevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html)

/// q_accessibletextinsertevent_new constructs a new QAccessibleTextInsertEvent object.
///
/// @param obj QObject*
/// @param position int
/// @param text const char*
///
QAccessibleTextInsertEvent* q_accessibletextinsertevent_new(void* obj, int position, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html)

/// q_accessibletextinsertevent_new2 constructs a new QAccessibleTextInsertEvent object.
///
/// @param iface QAccessibleInterface*
/// @param position int
/// @param text const char*
///
QAccessibleTextInsertEvent* q_accessibletextinsertevent_new2(void* iface, int position, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextInsertEvent*
///
const char* q_accessibletextinsertevent_text_inserted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
///
/// @param self QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_change_position(void* self);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// @param self QAccessibleTextInsertEvent*
/// @param position int
///
void q_accessibletextinsertevent_set_cursor_position(void* self, int position);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// @param self QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_cursor_position(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTextInsertEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextinsertevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTextInsertEvent*
///
QObject* q_accessibletextinsertevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTextInsertEvent*
///
uint32_t q_accessibletextinsertevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTextInsertEvent*
/// @param chld int
///
void q_accessibletextinsertevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTextInsertEvent*
///
QAccessibleInterface* q_accessibletextinsertevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTextInsertEvent*
///
QAccessibleInterface* q_accessibletextinsertevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTextInsertEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletextinsertevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#dtor.QAccessibleTextInsertEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextInsertEvent*
///
void q_accessibletextinsertevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html)

/// q_accessibletextremoveevent_new constructs a new QAccessibleTextRemoveEvent object.
///
/// @param obj QObject*
/// @param position int
/// @param text const char*
///
QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new(void* obj, int position, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html)

/// q_accessibletextremoveevent_new2 constructs a new QAccessibleTextRemoveEvent object.
///
/// @param iface QAccessibleInterface*
/// @param position int
/// @param text const char*
///
QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new2(void* iface, int position, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextRemoveEvent*
///
const char* q_accessibletextremoveevent_text_removed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
///
/// @param self QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_change_position(void* self);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// @param self QAccessibleTextRemoveEvent*
/// @param position int
///
void q_accessibletextremoveevent_set_cursor_position(void* self, int position);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// @param self QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_cursor_position(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTextRemoveEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextremoveevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTextRemoveEvent*
///
QObject* q_accessibletextremoveevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTextRemoveEvent*
///
uint32_t q_accessibletextremoveevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTextRemoveEvent*
/// @param chld int
///
void q_accessibletextremoveevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTextRemoveEvent*
///
QAccessibleInterface* q_accessibletextremoveevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTextRemoveEvent*
///
QAccessibleInterface* q_accessibletextremoveevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTextRemoveEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletextremoveevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#dtor.QAccessibleTextRemoveEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextRemoveEvent*
///
void q_accessibletextremoveevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html)

/// q_accessibletextupdateevent_new constructs a new QAccessibleTextUpdateEvent object.
///
/// @param obj QObject*
/// @param position int
/// @param oldText const char*
/// @param text const char*
///
QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new(void* obj, int position, const char* oldText, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html)

/// q_accessibletextupdateevent_new2 constructs a new QAccessibleTextUpdateEvent object.
///
/// @param iface QAccessibleInterface*
/// @param position int
/// @param oldText const char*
/// @param text const char*
///
QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new2(void* iface, int position, const char* oldText, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextUpdateEvent*
///
const char* q_accessibletextupdateevent_text_removed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleTextUpdateEvent*
///
const char* q_accessibletextupdateevent_text_inserted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
///
/// @param self QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_change_position(void* self);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
///
/// @param self QAccessibleTextUpdateEvent*
/// @param position int
///
void q_accessibletextupdateevent_set_cursor_position(void* self, int position);

/// Inherited from QAccessibleTextCursorEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
///
/// @param self QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_cursor_position(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTextUpdateEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextupdateevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTextUpdateEvent*
///
QObject* q_accessibletextupdateevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTextUpdateEvent*
///
uint32_t q_accessibletextupdateevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTextUpdateEvent*
/// @param chld int
///
void q_accessibletextupdateevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTextUpdateEvent*
///
QAccessibleInterface* q_accessibletextupdateevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTextUpdateEvent*
///
QAccessibleInterface* q_accessibletextupdateevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTextUpdateEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletextupdateevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#dtor.QAccessibleTextUpdateEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTextUpdateEvent*
///
void q_accessibletextupdateevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)

/// q_accessiblevaluechangeevent_new constructs a new QAccessibleValueChangeEvent object.
///
/// @param obj QObject*
/// @param val QVariant*
///
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new(void* obj, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)

/// q_accessiblevaluechangeevent_new2 constructs a new QAccessibleValueChangeEvent object.
///
/// @param iface QAccessibleInterface*
/// @param val QVariant*
///
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new2(void* iface, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
///
/// @param self QAccessibleValueChangeEvent*
/// @param val QVariant*
///
void q_accessiblevaluechangeevent_set_value(void* self, void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
///
/// @param self QAccessibleValueChangeEvent*
///
QVariant* q_accessiblevaluechangeevent_value(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleValueChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessiblevaluechangeevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleValueChangeEvent*
///
QObject* q_accessiblevaluechangeevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleValueChangeEvent*
///
uint32_t q_accessiblevaluechangeevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleValueChangeEvent*
/// @param chld int
///
void q_accessiblevaluechangeevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleValueChangeEvent*
///
int32_t q_accessiblevaluechangeevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleValueChangeEvent*
///
QAccessibleInterface* q_accessiblevaluechangeevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleValueChangeEvent*
///
QAccessibleInterface* q_accessiblevaluechangeevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleValueChangeEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessiblevaluechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#dtor.QAccessibleValueChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleValueChangeEvent*
///
void q_accessiblevaluechangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html)

/// q_accessibletablemodelchangeevent_new constructs a new QAccessibleTableModelChangeEvent object.
///
/// @param obj QObject*
/// @param changeType enum QAccessibleTableModelChangeEvent__ModelChangeType
///
QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new(void* obj, int32_t changeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html)

/// q_accessibletablemodelchangeevent_new2 constructs a new QAccessibleTableModelChangeEvent object.
///
/// @param iface QAccessibleInterface*
/// @param changeType enum QAccessibleTableModelChangeEvent__ModelChangeType
///
QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new2(void* iface, int32_t changeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param changeType enum QAccessibleTableModelChangeEvent__ModelChangeType
///
void q_accessibletablemodelchangeevent_set_model_change_type(void* self, int32_t changeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#modelChangeType)
///
/// @param self QAccessibleTableModelChangeEvent*
///
/// @return enum QAccessibleTableModelChangeEvent__ModelChangeType
///
int32_t q_accessibletablemodelchangeevent_model_change_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param row int
///
void q_accessibletablemodelchangeevent_set_first_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param col int
///
void q_accessibletablemodelchangeevent_set_first_column(void* self, int col);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param row int
///
void q_accessibletablemodelchangeevent_set_last_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param col int
///
void q_accessibletablemodelchangeevent_set_last_column(void* self, int col);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
///
/// @param self QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_first_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
///
/// @param self QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_first_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
///
/// @param self QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_last_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
///
/// @param self QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_last_column(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleTableModelChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletablemodelchangeevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleTableModelChangeEvent*
///
QObject* q_accessibletablemodelchangeevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleTableModelChangeEvent*
///
uint32_t q_accessibletablemodelchangeevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param chld int
///
void q_accessibletablemodelchangeevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleTableModelChangeEvent*
///
QAccessibleInterface* q_accessibletablemodelchangeevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleTableModelChangeEvent*
///
QAccessibleInterface* q_accessibletablemodelchangeevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleTableModelChangeEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibletablemodelchangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#dtor.QAccessibleTableModelChangeEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleTableModelChangeEvent*
///
void q_accessibletablemodelchangeevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html)

/// q_accessibleannouncementevent_new constructs a new QAccessibleAnnouncementEvent object.
///
/// @param object QObject*
/// @param message const char*
///
QAccessibleAnnouncementEvent* q_accessibleannouncementevent_new(void* object, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html)

/// q_accessibleannouncementevent_new2 constructs a new QAccessibleAnnouncementEvent object.
///
/// @param iface QAccessibleInterface*
/// @param message const char*
///
QAccessibleAnnouncementEvent* q_accessibleannouncementevent_new2(void* iface, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#message)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleAnnouncementEvent*
///
const char* q_accessibleannouncementevent_message(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#politeness)
///
/// @param self QAccessibleAnnouncementEvent*
///
/// @return enum QAccessible__AnnouncementPoliteness
///
int32_t q_accessibleannouncementevent_politeness(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#setPoliteness)
///
/// @param self QAccessibleAnnouncementEvent*
/// @param politeness enum QAccessible__AnnouncementPoliteness
///
void q_accessibleannouncementevent_set_politeness(void* self, int32_t politeness);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self QAccessibleAnnouncementEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibleannouncementevent_type(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self QAccessibleAnnouncementEvent*
///
QObject* q_accessibleannouncementevent_object(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self QAccessibleAnnouncementEvent*
///
uint32_t q_accessibleannouncementevent_unique_id(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleAnnouncementEvent*
/// @param chld int
///
void q_accessibleannouncementevent_set_child(void* self, int chld);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self QAccessibleAnnouncementEvent*
///
int32_t q_accessibleannouncementevent_child(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleAnnouncementEvent*
///
QAccessibleInterface* q_accessibleannouncementevent_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleAnnouncementEvent*
///
QAccessibleInterface* q_accessibleannouncementevent_qbase_accessible_interface(void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleAnnouncementEvent*
/// @param callback QAccessibleInterface* func()
///
void q_accessibleannouncementevent_on_accessible_interface(void* self, QAccessibleInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#dtor.QAccessibleAnnouncementEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleAnnouncementEvent*
///
void q_accessibleannouncementevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#public-types)

typedef enum {
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_MODELRESET = 0,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_DATACHANGED = 1,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_ROWSINSERTED = 2,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_COLUMNSINSERTED = 3,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_ROWSREMOVED = 4,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_COLUMNSREMOVED = 5
} QAccessibleTableModelChangeEvent__ModelChangeType;

#endif
