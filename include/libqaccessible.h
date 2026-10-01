#pragma once
#ifndef LIBQACCESSIBLE_H
#define LIBQACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

struct pair_qaccessibleinterface_int32_t;

typedef struct pair_qaccessibleinterface_int32_t pair_qaccessibleinterface_int32_t;

#ifndef PAIR_QACCESSIBLEINTERFACE_INT32_T
#define PAIR_QACCESSIBLEINTERFACE_INT32_T
struct pair_qaccessibleinterface_int32_t {
    QAccessibleInterface* first;
    int32_t second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
bool q_accessibleinterface_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
QObject* q_accessibleinterface_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
///
/// @param self const QAccessibleInterface*
///
QWindow* q_accessibleinterface_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
///
/// @param self const QAccessibleInterface*
/// @param match flag of enum QAccessible__RelationFlag
///
/// @return libqt_list of pair_qaccessibleinterface_int32_t tuple of QAccessibleInterface* and flag of enum QAccessible__RelationFlag
///
libqt_list q_accessibleinterface_relations(const void* self, int32_t match);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
///
/// @param self const QAccessibleInterface*
///
QAccessibleInterface* q_accessibleinterface_focus_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
/// @param x int
/// @param y int
///
QAccessibleInterface* q_accessibleinterface_child_at(const void* self, int x, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
QAccessibleInterface* q_accessibleinterface_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
/// @param index int
///
QAccessibleInterface* q_accessibleinterface_child(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
int32_t q_accessibleinterface_child_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
/// @param param1 QAccessibleInterface*
///
int32_t q_accessibleinterface_index_of_child(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleInterface*
/// @param t enum QAccessible__Text
///
const char* q_accessibleinterface_text(const void* self, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleInterface*
/// @param t enum QAccessible__Text
/// @param text const char*
///
void q_accessibleinterface_set_text(void* self, int32_t t, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
QRect* q_accessibleinterface_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
/// @return enum QAccessible__Role
///
int32_t q_accessibleinterface_role(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleInterface*
///
QAccessible__State* q_accessibleinterface_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
///
/// @param self const QAccessibleInterface*
///
QColor* q_accessibleinterface_foreground_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
///
/// @param self const QAccessibleInterface*
///
QColor* q_accessibleinterface_background_color(const void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#operator-eq)
///
/// @param self QAccessibleInterface*
/// @param param1 QAccessibleInterface*
///
void q_accessibleinterface_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
/// @param selectionIndex int
/// @param startOffset int*
/// @param endOffset int*
///
void q_accessibletextinterface_selection(const void* self, int selectionIndex, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_selection_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTextInterface*
/// @param startOffset int
/// @param endOffset int
///
void q_accessibletextinterface_add_selection(void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTextInterface*
/// @param selectionIndex int
///
void q_accessibletextinterface_remove_selection(void* self, int selectionIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTextInterface*
/// @param selectionIndex int
/// @param startOffset int
/// @param endOffset int
///
void q_accessibletextinterface_set_selection(void* self, int selectionIndex, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_cursor_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTextInterface*
/// @param position int
///
void q_accessibletextinterface_set_cursor_position(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextInterface*
/// @param startOffset int
/// @param endOffset int
///
const char* q_accessibletextinterface_text(const void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_before_offset(const void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_after_offset(const void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextInterface*
/// @param offset int
/// @param boundaryType enum QAccessible__TextBoundaryType
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_text_at_offset(const void* self, int offset, int32_t boundaryType, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
///
int32_t q_accessibletextinterface_character_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
/// @param offset int
///
QRect* q_accessibletextinterface_character_rect(const void* self, int offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTextInterface*
/// @param point QPoint*
///
int32_t q_accessibletextinterface_offset_at_point(const void* self, const void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTextInterface*
/// @param startIndex int
/// @param endIndex int
///
void q_accessibletextinterface_scroll_to_substring(void* self, int startIndex, int endIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextInterface*
/// @param offset int
/// @param startOffset int*
/// @param endOffset int*
///
const char* q_accessibletextinterface_attributes(const void* self, int offset, int* startOffset, int* endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator-eq)
///
/// @param self QAccessibleTextInterface*
/// @param param1 QAccessibleTextInterface*
///
void q_accessibletextinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleEditableTextInterface*
/// @param startOffset int
/// @param endOffset int
///
void q_accessibleeditabletextinterface_delete_text(void* self, int startOffset, int endOffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleEditableTextInterface*
/// @param offset int
/// @param text const char*
///
void q_accessibleeditabletextinterface_insert_text(void* self, int offset, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
///
/// @warning Use caution when calling this method as it might not be defined.
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
void q_accessibleeditabletextinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_current_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleValueInterface*
/// @param value QVariant*
///
void q_accessiblevalueinterface_set_current_value(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_maximum_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_minimum_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleValueInterface*
///
QVariant* q_accessiblevalueinterface_minimum_step_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator-eq)
///
/// @param self QAccessibleValueInterface*
/// @param param1 QAccessibleValueInterface*
///
void q_accessiblevalueinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
bool q_accessibletablecellinterface_is_selected(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
/// @return libqt_list of QAccessibleInterface*
///
libqt_list q_accessibletablecellinterface_column_header_cells(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
/// @return libqt_list of QAccessibleInterface*
///
libqt_list q_accessibletablecellinterface_row_header_cells(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_column_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_row_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_column_extent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
int32_t q_accessibletablecellinterface_row_extent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableCellInterface*
///
QAccessibleInterface* q_accessibletablecellinterface_table(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator-eq)
///
/// @param self QAccessibleTableCellInterface*
/// @param param1 QAccessibleTableCellInterface*
///
void q_accessibletablecellinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
QAccessibleInterface* q_accessibletableinterface_caption(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
QAccessibleInterface* q_accessibletableinterface_summary(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
/// @param row int
/// @param column int
///
QAccessibleInterface* q_accessibletableinterface_cell_at(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_cell_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
/// @return libqt_list of QAccessibleInterface*
///
libqt_list q_accessibletableinterface_selected_cells(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTableInterface*
/// @param column int
///
const char* q_accessibletableinterface_column_description(const void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTableInterface*
/// @param row int
///
const char* q_accessibletableinterface_row_description(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_column_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_selected_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_column_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
int32_t q_accessibletableinterface_row_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
/// @return libqt_list of int
///
libqt_list q_accessibletableinterface_selected_columns(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
///
/// @return libqt_list of int
///
libqt_list q_accessibletableinterface_selected_rows(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_is_column_selected(const void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_is_row_selected(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_select_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_select_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTableInterface*
/// @param row int
///
bool q_accessibletableinterface_unselect_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTableInterface*
/// @param column int
///
bool q_accessibletableinterface_unselect_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleTableInterface*
/// @param event QAccessibleTableModelChangeEvent*
///
void q_accessibletableinterface_model_change(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#operator-eq)
///
/// @param self QAccessibleTableInterface*
/// @param param1 QAccessibleTableInterface*
///
void q_accessibletableinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAccessibleActionInterface*
///
const char** q_accessibleactioninterface_action_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleActionInterface*
/// @param name const char*
///
const char* q_accessibleactioninterface_localized_action_name(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleActionInterface*
/// @param name const char*
///
const char* q_accessibleactioninterface_localized_action_description(const void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleActionInterface*
/// @param actionName const char*
///
void q_accessibleactioninterface_do_action(void* self, const char* actionName);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAccessibleActionInterface*
/// @param actionName const char*
///
const char** q_accessibleactioninterface_key_bindings_for_action(const void* self, const char* actionName);

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
void q_accessibleactioninterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleImageInterface*
///
const char* q_accessibleimageinterface_image_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleImageInterface*
///
QSize* q_accessibleimageinterface_image_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleImageInterface*
///
QPoint* q_accessibleimageinterface_image_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator-eq)
///
/// @param self QAccessibleImageInterface*
/// @param param1 QAccessibleImageInterface*
///
void q_accessibleimageinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleHyperlinkInterface*
///
const char* q_accessiblehyperlinkinterface_anchor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleHyperlinkInterface*
///
const char* q_accessiblehyperlinkinterface_anchor_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleHyperlinkInterface*
///
int32_t q_accessiblehyperlinkinterface_start_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleHyperlinkInterface*
///
int32_t q_accessiblehyperlinkinterface_end_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleHyperlinkInterface*
///
bool q_accessiblehyperlinkinterface_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator-eq)
///
/// @param self QAccessibleHyperlinkInterface*
/// @param param1 QAccessibleHyperlinkInterface*
///
void q_accessiblehyperlinkinterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleSelectionInterface*
///
int32_t q_accessibleselectioninterface_selected_item_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItems)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleSelectionInterface*
///
/// @return libqt_list of QAccessibleInterface*
///
libqt_list q_accessibleselectioninterface_selected_items(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItem)
///
/// @param self const QAccessibleSelectionInterface*
/// @param selectionIndex int
///
QAccessibleInterface* q_accessibleselectioninterface_selected_item(const void* self, int selectionIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#isSelected)
///
/// @param self const QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_is_selected(const void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#select)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_select(void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#unselect)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleSelectionInterface*
/// @param childItem QAccessibleInterface*
///
bool q_accessibleselectioninterface_unselect(void* self, void* childItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectAll)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleSelectionInterface*
///
bool q_accessibleselectioninterface_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#clear)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QAccessibleSelectionInterface*
///
bool q_accessibleselectioninterface_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#operator-eq)
///
/// @param self QAccessibleSelectionInterface*
/// @param param1 QAccessibleSelectionInterface*
///
void q_accessibleselectioninterface_operator_assign(void* self, const void* param1);

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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleAttributesInterface*
///
/// @return libqt_list of enum QAccessible__Attribute
///
libqt_list q_accessibleattributesinterface_attribute_keys(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeValue)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAccessibleAttributesInterface*
/// @param key enum QAccessible__Attribute
///
QVariant* q_accessibleattributesinterface_attribute_value(const void* self, int32_t key);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#operator-eq)
///
/// @param self QAccessibleAttributesInterface*
/// @param param1 QAccessibleAttributesInterface*
///
void q_accessibleattributesinterface_operator_assign(void* self, const void* param1);

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
/// @param self const QAccessibleEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibleevent_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleEvent*
///
QObject* q_accessibleevent_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleEvent*
///
uint32_t q_accessibleevent_unique_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
///
/// @param self QAccessibleEvent*
/// @param chld int
///
void q_accessibleevent_set_child(void* self, int chld);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
///
/// @param self const QAccessibleEvent*
///
int32_t q_accessibleevent_child(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// @param self const QAccessibleEvent*
///
QAccessibleInterface* q_accessibleevent_accessible_interface(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Allows for overriding the related default method
///
/// @param self const QAccessibleEvent*
/// @param callback QAccessibleInterface* func(const QAccessibleEvent* self)
///
void q_accessibleevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Base class method implementation
///
/// @param self const QAccessibleEvent*
///
QAccessibleInterface* q_accessibleevent_super_accessible_interface(const void* self);

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
/// @param self const QAccessibleStateChangeEvent*
///
QAccessible__State* q_accessiblestatechangeevent_changed_states(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleStateChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessiblestatechangeevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleStateChangeEvent*
///
QObject* q_accessiblestatechangeevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleStateChangeEvent*
///
uint32_t q_accessiblestatechangeevent_unique_id(const void* self);

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
/// @param self const QAccessibleStateChangeEvent*
///
int32_t q_accessiblestatechangeevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleStateChangeEvent*
///
QAccessibleInterface* q_accessiblestatechangeevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleStateChangeEvent*
///
QAccessibleInterface* q_accessiblestatechangeevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleStateChangeEvent*
/// @param callback QAccessibleInterface* func(QAccessibleStateChangeEvent* self)
///
void q_accessiblestatechangeevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTextCursorEvent*
///
int32_t q_accessibletextcursorevent_cursor_position(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTextCursorEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextcursorevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTextCursorEvent*
///
QObject* q_accessibletextcursorevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTextCursorEvent*
///
uint32_t q_accessibletextcursorevent_unique_id(const void* self);

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
/// @param self const QAccessibleTextCursorEvent*
///
int32_t q_accessibletextcursorevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTextCursorEvent*
///
QAccessibleInterface* q_accessibletextcursorevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTextCursorEvent*
///
QAccessibleInterface* q_accessibletextcursorevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTextCursorEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTextCursorEvent* self)
///
void q_accessibletextcursorevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_selection_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
///
/// @param self const QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_selection_end(const void* self);

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
/// @param self const QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_cursor_position(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTextSelectionEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextselectionevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTextSelectionEvent*
///
QObject* q_accessibletextselectionevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTextSelectionEvent*
///
uint32_t q_accessibletextselectionevent_unique_id(const void* self);

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
/// @param self const QAccessibleTextSelectionEvent*
///
int32_t q_accessibletextselectionevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTextSelectionEvent*
///
QAccessibleInterface* q_accessibletextselectionevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTextSelectionEvent*
///
QAccessibleInterface* q_accessibletextselectionevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTextSelectionEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTextSelectionEvent* self)
///
void q_accessibletextselectionevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTextInsertEvent*
///
const char* q_accessibletextinsertevent_text_inserted(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
///
/// @param self const QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_change_position(const void* self);

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
/// @param self const QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_cursor_position(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTextInsertEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextinsertevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTextInsertEvent*
///
QObject* q_accessibletextinsertevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTextInsertEvent*
///
uint32_t q_accessibletextinsertevent_unique_id(const void* self);

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
/// @param self const QAccessibleTextInsertEvent*
///
int32_t q_accessibletextinsertevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTextInsertEvent*
///
QAccessibleInterface* q_accessibletextinsertevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTextInsertEvent*
///
QAccessibleInterface* q_accessibletextinsertevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTextInsertEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTextInsertEvent* self)
///
void q_accessibletextinsertevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTextRemoveEvent*
///
const char* q_accessibletextremoveevent_text_removed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
///
/// @param self const QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_change_position(const void* self);

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
/// @param self const QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_cursor_position(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTextRemoveEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextremoveevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTextRemoveEvent*
///
QObject* q_accessibletextremoveevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTextRemoveEvent*
///
uint32_t q_accessibletextremoveevent_unique_id(const void* self);

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
/// @param self const QAccessibleTextRemoveEvent*
///
int32_t q_accessibletextremoveevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTextRemoveEvent*
///
QAccessibleInterface* q_accessibletextremoveevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTextRemoveEvent*
///
QAccessibleInterface* q_accessibletextremoveevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTextRemoveEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTextRemoveEvent* self)
///
void q_accessibletextremoveevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTextUpdateEvent*
///
const char* q_accessibletextupdateevent_text_removed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QAccessibleTextUpdateEvent*
///
const char* q_accessibletextupdateevent_text_inserted(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
///
/// @param self const QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_change_position(const void* self);

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
/// @param self const QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_cursor_position(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTextUpdateEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletextupdateevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTextUpdateEvent*
///
QObject* q_accessibletextupdateevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTextUpdateEvent*
///
uint32_t q_accessibletextupdateevent_unique_id(const void* self);

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
/// @param self const QAccessibleTextUpdateEvent*
///
int32_t q_accessibletextupdateevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTextUpdateEvent*
///
QAccessibleInterface* q_accessibletextupdateevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTextUpdateEvent*
///
QAccessibleInterface* q_accessibletextupdateevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTextUpdateEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTextUpdateEvent* self)
///
void q_accessibletextupdateevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new(void* obj, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)

/// q_accessiblevaluechangeevent_new2 constructs a new QAccessibleValueChangeEvent object.
///
/// @param iface QAccessibleInterface*
/// @param val QVariant*
///
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new2(void* iface, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
///
/// @param self QAccessibleValueChangeEvent*
/// @param val QVariant*
///
void q_accessiblevaluechangeevent_set_value(void* self, const void* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
///
/// @param self const QAccessibleValueChangeEvent*
///
QVariant* q_accessiblevaluechangeevent_value(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleValueChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessiblevaluechangeevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleValueChangeEvent*
///
QObject* q_accessiblevaluechangeevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleValueChangeEvent*
///
uint32_t q_accessiblevaluechangeevent_unique_id(const void* self);

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
/// @param self const QAccessibleValueChangeEvent*
///
int32_t q_accessiblevaluechangeevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleValueChangeEvent*
///
QAccessibleInterface* q_accessiblevaluechangeevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleValueChangeEvent*
///
QAccessibleInterface* q_accessiblevaluechangeevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleValueChangeEvent*
/// @param callback QAccessibleInterface* func(QAccessibleValueChangeEvent* self)
///
void q_accessiblevaluechangeevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleTableModelChangeEvent*
///
/// @return enum QAccessibleTableModelChangeEvent__ModelChangeType
///
int32_t q_accessibletablemodelchangeevent_model_change_type(const void* self);

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
/// @param self const QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_first_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_first_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_last_row(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_last_column(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibletablemodelchangeevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
QObject* q_accessibletablemodelchangeevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleTableModelChangeEvent*
///
uint32_t q_accessibletablemodelchangeevent_unique_id(const void* self);

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
/// @param self const QAccessibleTableModelChangeEvent*
///
int32_t q_accessibletablemodelchangeevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleTableModelChangeEvent*
///
QAccessibleInterface* q_accessibletablemodelchangeevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleTableModelChangeEvent*
///
QAccessibleInterface* q_accessibletablemodelchangeevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleTableModelChangeEvent*
/// @param callback QAccessibleInterface* func(QAccessibleTableModelChangeEvent* self)
///
void q_accessibletablemodelchangeevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

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
/// @param self const QAccessibleAnnouncementEvent*
///
const char* q_accessibleannouncementevent_message(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#politeness)
///
/// @param self const QAccessibleAnnouncementEvent*
///
/// @return enum QAccessible__AnnouncementPoliteness
///
int32_t q_accessibleannouncementevent_politeness(const void* self);

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
/// @param self const QAccessibleAnnouncementEvent*
///
/// @return enum QAccessible__Event
///
int32_t q_accessibleannouncementevent_type(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
///
/// @param self const QAccessibleAnnouncementEvent*
///
QObject* q_accessibleannouncementevent_object(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
///
/// @param self const QAccessibleAnnouncementEvent*
///
uint32_t q_accessibleannouncementevent_unique_id(const void* self);

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
/// @param self const QAccessibleAnnouncementEvent*
///
int32_t q_accessibleannouncementevent_child(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QAccessibleAnnouncementEvent*
///
QAccessibleInterface* q_accessibleannouncementevent_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QAccessibleAnnouncementEvent*
///
QAccessibleInterface* q_accessibleannouncementevent_super_accessible_interface(const void* self);

/// Inherited from QAccessibleEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QAccessibleAnnouncementEvent*
/// @param callback QAccessibleInterface* func(QAccessibleAnnouncementEvent* self)
///
void q_accessibleannouncementevent_on_accessible_interface(const void* self, QAccessibleInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#dtor.QAccessibleAnnouncementEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleAnnouncementEvent*
///
void q_accessibleannouncementevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-h.html#qAccessibleRoleString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param role enum QAccessible__Role
///
const char* q_qaccessible_h_q_accessible_role_string(int32_t role);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-h.html#qAccessibleEventString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param event enum QAccessible__Event
///
const char* q_qaccessible_h_q_accessible_event_string(int32_t event);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-h.html#qAccessibleLocalizedActionDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param actionName const char*
///
const char* q_qaccessible_h_q_accessible_localized_action_description(const char* actionName);

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
