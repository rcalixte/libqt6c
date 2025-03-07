#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLE_H
#define SRCQT6C_LIBQACCESSIBLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqcolor.h"
#include "libqobject.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqvariant.h"
#include "libqwindow.h"

bool q_accessibleinterface_is_valid(void* self);
QObject* q_accessibleinterface_object(void* self);
QWindow* q_accessibleinterface_window(void* self);
libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int64_t  */ q_accessibleinterface_relations(void* self, int64_t match);
QAccessibleInterface* q_accessibleinterface_focus_child(void* self);
QAccessibleInterface* q_accessibleinterface_child_at(void* self, int x, int y);
QAccessibleInterface* q_accessibleinterface_parent(void* self);
QAccessibleInterface* q_accessibleinterface_child(void* self, int index);
int32_t q_accessibleinterface_child_count(void* self);
int32_t q_accessibleinterface_index_of_child(void* self, void* param1);
const char* q_accessibleinterface_text(void* self, int64_t t);
void q_accessibleinterface_set_text(void* self, int64_t t, const char* text);
QRect* q_accessibleinterface_rect(void* self);
int64_t q_accessibleinterface_role(void* self);
QAccessible__State* q_accessibleinterface_state(void* self);
QColor* q_accessibleinterface_foreground_color(void* self);
QColor* q_accessibleinterface_background_color(void* self);
QAccessibleTextInterface* q_accessibleinterface_text_interface(void* self);
QAccessibleEditableTextInterface* q_accessibleinterface_editable_text_interface(void* self);
QAccessibleValueInterface* q_accessibleinterface_value_interface(void* self);
QAccessibleActionInterface* q_accessibleinterface_action_interface(void* self);
QAccessibleImageInterface* q_accessibleinterface_image_interface(void* self);
QAccessibleTableInterface* q_accessibleinterface_table_interface(void* self);
QAccessibleTableCellInterface* q_accessibleinterface_table_cell_interface(void* self);
QAccessibleHyperlinkInterface* q_accessibleinterface_hyperlink_interface(void* self);
void q_accessibleinterface_virtual_hook(void* self, int id, void* data);
void* q_accessibleinterface_interface_cast(void* self, int64_t param1);
void q_accessibletextinterface_selection(void* self, int selectionIndex, int* startOffset, int* endOffset);
int32_t q_accessibletextinterface_selection_count(void* self);
void q_accessibletextinterface_add_selection(void* self, int startOffset, int endOffset);
void q_accessibletextinterface_remove_selection(void* self, int selectionIndex);
void q_accessibletextinterface_set_selection(void* self, int selectionIndex, int startOffset, int endOffset);
int32_t q_accessibletextinterface_cursor_position(void* self);
void q_accessibletextinterface_set_cursor_position(void* self, int position);
const char* q_accessibletextinterface_text(void* self, int startOffset, int endOffset);
const char* q_accessibletextinterface_text_before_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset);
const char* q_accessibletextinterface_text_after_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset);
const char* q_accessibletextinterface_text_at_offset(void* self, int offset, int64_t boundaryType, int* startOffset, int* endOffset);
int32_t q_accessibletextinterface_character_count(void* self);
QRect* q_accessibletextinterface_character_rect(void* self, int offset);
int32_t q_accessibletextinterface_offset_at_point(void* self, void* point);
void q_accessibletextinterface_scroll_to_substring(void* self, int startIndex, int endIndex);
const char* q_accessibletextinterface_attributes(void* self, int offset, int* startOffset, int* endOffset);
void q_accessibletextinterface_operator_assign(void* self, void* param1);
void q_accessibletextinterface_delete(void* self);

void q_accessibleeditabletextinterface_delete_text(void* self, int startOffset, int endOffset);
void q_accessibleeditabletextinterface_insert_text(void* self, int offset, const char* text);
void q_accessibleeditabletextinterface_replace_text(void* self, int startOffset, int endOffset, const char* text);
void q_accessibleeditabletextinterface_operator_assign(void* self, void* param1);
void q_accessibleeditabletextinterface_delete(void* self);

QVariant* q_accessiblevalueinterface_current_value(void* self);
void q_accessiblevalueinterface_set_current_value(void* self, void* value);
QVariant* q_accessiblevalueinterface_maximum_value(void* self);
QVariant* q_accessiblevalueinterface_minimum_value(void* self);
QVariant* q_accessiblevalueinterface_minimum_step_size(void* self);
void q_accessiblevalueinterface_operator_assign(void* self, void* param1);
void q_accessiblevalueinterface_delete(void* self);

bool q_accessibletablecellinterface_is_selected(void* self);
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_column_header_cells(void* self);
libqt_list /* of QAccessibleInterface* */ q_accessibletablecellinterface_row_header_cells(void* self);
int32_t q_accessibletablecellinterface_column_index(void* self);
int32_t q_accessibletablecellinterface_row_index(void* self);
int32_t q_accessibletablecellinterface_column_extent(void* self);
int32_t q_accessibletablecellinterface_row_extent(void* self);
QAccessibleInterface* q_accessibletablecellinterface_table(void* self);
void q_accessibletablecellinterface_operator_assign(void* self, void* param1);
void q_accessibletablecellinterface_delete(void* self);

QAccessibleInterface* q_accessibletableinterface_caption(void* self);
QAccessibleInterface* q_accessibletableinterface_summary(void* self);
QAccessibleInterface* q_accessibletableinterface_cell_at(void* self, int row, int column);
int32_t q_accessibletableinterface_selected_cell_count(void* self);
libqt_list /* of QAccessibleInterface* */ q_accessibletableinterface_selected_cells(void* self);
const char* q_accessibletableinterface_column_description(void* self, int column);
const char* q_accessibletableinterface_row_description(void* self, int row);
int32_t q_accessibletableinterface_selected_column_count(void* self);
int32_t q_accessibletableinterface_selected_row_count(void* self);
int32_t q_accessibletableinterface_column_count(void* self);
int32_t q_accessibletableinterface_row_count(void* self);
libqt_list /* of int */ q_accessibletableinterface_selected_columns(void* self);
libqt_list /* of int */ q_accessibletableinterface_selected_rows(void* self);
bool q_accessibletableinterface_is_column_selected(void* self, int column);
bool q_accessibletableinterface_is_row_selected(void* self, int row);
bool q_accessibletableinterface_select_row(void* self, int row);
bool q_accessibletableinterface_select_column(void* self, int column);
bool q_accessibletableinterface_unselect_row(void* self, int row);
bool q_accessibletableinterface_unselect_column(void* self, int column);
void q_accessibletableinterface_model_change(void* self, void* event);
void q_accessibletableinterface_delete(void* self);

const char* q_accessibleactioninterface_tr(const char* sourceText);
const char** q_accessibleactioninterface_action_names(void* self);
const char* q_accessibleactioninterface_localized_action_name(void* self, const char* name);
const char* q_accessibleactioninterface_localized_action_description(void* self, const char* name);
void q_accessibleactioninterface_do_action(void* self, const char* actionName);
const char** q_accessibleactioninterface_key_bindings_for_action(void* self, const char* actionName);
const char* q_accessibleactioninterface_press_action();
const char* q_accessibleactioninterface_increase_action();
const char* q_accessibleactioninterface_decrease_action();
const char* q_accessibleactioninterface_show_menu_action();
const char* q_accessibleactioninterface_set_focus_action();
const char* q_accessibleactioninterface_toggle_action();
const char* q_accessibleactioninterface_scroll_left_action();
const char* q_accessibleactioninterface_scroll_right_action();
const char* q_accessibleactioninterface_scroll_up_action();
const char* q_accessibleactioninterface_scroll_down_action();
const char* q_accessibleactioninterface_next_page_action();
const char* q_accessibleactioninterface_previous_page_action();
void q_accessibleactioninterface_operator_assign(void* self, void* param1);
const char* q_accessibleactioninterface_tr2(const char* sourceText, const char* disambiguation);
const char* q_accessibleactioninterface_tr3(const char* sourceText, const char* disambiguation, int n);
void q_accessibleactioninterface_delete(void* self);

const char* q_accessibleimageinterface_image_description(void* self);
QSize* q_accessibleimageinterface_image_size(void* self);
QPoint* q_accessibleimageinterface_image_position(void* self);
void q_accessibleimageinterface_operator_assign(void* self, void* param1);
void q_accessibleimageinterface_delete(void* self);

const char* q_accessiblehyperlinkinterface_anchor(void* self);
const char* q_accessiblehyperlinkinterface_anchor_target(void* self);
int32_t q_accessiblehyperlinkinterface_start_index(void* self);
int32_t q_accessiblehyperlinkinterface_end_index(void* self);
bool q_accessiblehyperlinkinterface_is_valid(void* self);
void q_accessiblehyperlinkinterface_operator_assign(void* self, void* param1);
void q_accessiblehyperlinkinterface_delete(void* self);

QAccessibleEvent* q_accessibleevent_new(void* obj, int64_t typ);
QAccessibleEvent* q_accessibleevent_new2(void* iface, int64_t typ);
int64_t q_accessibleevent_type(void* self);
QObject* q_accessibleevent_object(void* self);
uint32_t q_accessibleevent_unique_id(void* self);
void q_accessibleevent_set_child(void* self, int chld);
int32_t q_accessibleevent_child(void* self);
QAccessibleInterface* q_accessibleevent_accessible_interface(void* self);
void q_accessibleevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
QAccessibleInterface* q_accessibleevent_qbase_accessible_interface(void* self);
void q_accessibleevent_delete(void* self);

QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new(void* obj, void* state);
QAccessibleStateChangeEvent* q_accessiblestatechangeevent_new2(void* iface, void* state);
QAccessible__State* q_accessiblestatechangeevent_changed_states(void* self);
int64_t q_accessiblestatechangeevent_type(void* self);
QObject* q_accessiblestatechangeevent_object(void* self);
uint32_t q_accessiblestatechangeevent_unique_id(void* self);
void q_accessiblestatechangeevent_set_child(void* self, int chld);
int32_t q_accessiblestatechangeevent_child(void* self);
QAccessibleInterface* q_accessiblestatechangeevent_accessible_interface(void* self);
QAccessibleInterface* q_accessiblestatechangeevent_qbase_accessible_interface(void* self);
void q_accessiblestatechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessiblestatechangeevent_delete(void* self);

QAccessibleTextCursorEvent* q_accessibletextcursorevent_new(void* obj, int cursorPos);
QAccessibleTextCursorEvent* q_accessibletextcursorevent_new2(void* iface, int cursorPos);
void q_accessibletextcursorevent_set_cursor_position(void* self, int position);
int32_t q_accessibletextcursorevent_cursor_position(void* self);
int64_t q_accessibletextcursorevent_type(void* self);
QObject* q_accessibletextcursorevent_object(void* self);
uint32_t q_accessibletextcursorevent_unique_id(void* self);
void q_accessibletextcursorevent_set_child(void* self, int chld);
int32_t q_accessibletextcursorevent_child(void* self);
QAccessibleInterface* q_accessibletextcursorevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletextcursorevent_qbase_accessible_interface(void* self);
void q_accessibletextcursorevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletextcursorevent_delete(void* self);

QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new(void* obj, int start, int end);
QAccessibleTextSelectionEvent* q_accessibletextselectionevent_new2(void* iface, int start, int end);
void q_accessibletextselectionevent_set_selection(void* self, int start, int end);
int32_t q_accessibletextselectionevent_selection_start(void* self);
int32_t q_accessibletextselectionevent_selection_end(void* self);
void q_accessibletextselectionevent_set_cursor_position(void* self, int position);
int32_t q_accessibletextselectionevent_cursor_position(void* self);
int64_t q_accessibletextselectionevent_type(void* self);
QObject* q_accessibletextselectionevent_object(void* self);
uint32_t q_accessibletextselectionevent_unique_id(void* self);
void q_accessibletextselectionevent_set_child(void* self, int chld);
int32_t q_accessibletextselectionevent_child(void* self);
QAccessibleInterface* q_accessibletextselectionevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletextselectionevent_qbase_accessible_interface(void* self);
void q_accessibletextselectionevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletextselectionevent_delete(void* self);

QAccessibleTextInsertEvent* q_accessibletextinsertevent_new(void* obj, int position, const char* text);
QAccessibleTextInsertEvent* q_accessibletextinsertevent_new2(void* iface, int position, const char* text);
const char* q_accessibletextinsertevent_text_inserted(void* self);
int32_t q_accessibletextinsertevent_change_position(void* self);
void q_accessibletextinsertevent_set_cursor_position(void* self, int position);
int32_t q_accessibletextinsertevent_cursor_position(void* self);
int64_t q_accessibletextinsertevent_type(void* self);
QObject* q_accessibletextinsertevent_object(void* self);
uint32_t q_accessibletextinsertevent_unique_id(void* self);
void q_accessibletextinsertevent_set_child(void* self, int chld);
int32_t q_accessibletextinsertevent_child(void* self);
QAccessibleInterface* q_accessibletextinsertevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletextinsertevent_qbase_accessible_interface(void* self);
void q_accessibletextinsertevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletextinsertevent_delete(void* self);

QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new(void* obj, int position, const char* text);
QAccessibleTextRemoveEvent* q_accessibletextremoveevent_new2(void* iface, int position, const char* text);
const char* q_accessibletextremoveevent_text_removed(void* self);
int32_t q_accessibletextremoveevent_change_position(void* self);
void q_accessibletextremoveevent_set_cursor_position(void* self, int position);
int32_t q_accessibletextremoveevent_cursor_position(void* self);
int64_t q_accessibletextremoveevent_type(void* self);
QObject* q_accessibletextremoveevent_object(void* self);
uint32_t q_accessibletextremoveevent_unique_id(void* self);
void q_accessibletextremoveevent_set_child(void* self, int chld);
int32_t q_accessibletextremoveevent_child(void* self);
QAccessibleInterface* q_accessibletextremoveevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletextremoveevent_qbase_accessible_interface(void* self);
void q_accessibletextremoveevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletextremoveevent_delete(void* self);

QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new(void* obj, int position, const char* oldText, const char* text);
QAccessibleTextUpdateEvent* q_accessibletextupdateevent_new2(void* iface, int position, const char* oldText, const char* text);
const char* q_accessibletextupdateevent_text_removed(void* self);
const char* q_accessibletextupdateevent_text_inserted(void* self);
int32_t q_accessibletextupdateevent_change_position(void* self);
void q_accessibletextupdateevent_set_cursor_position(void* self, int position);
int32_t q_accessibletextupdateevent_cursor_position(void* self);
int64_t q_accessibletextupdateevent_type(void* self);
QObject* q_accessibletextupdateevent_object(void* self);
uint32_t q_accessibletextupdateevent_unique_id(void* self);
void q_accessibletextupdateevent_set_child(void* self, int chld);
int32_t q_accessibletextupdateevent_child(void* self);
QAccessibleInterface* q_accessibletextupdateevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletextupdateevent_qbase_accessible_interface(void* self);
void q_accessibletextupdateevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletextupdateevent_delete(void* self);

QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new(void* obj, void* val);
QAccessibleValueChangeEvent* q_accessiblevaluechangeevent_new2(void* iface, void* val);
void q_accessiblevaluechangeevent_set_value(void* self, void* val);
QVariant* q_accessiblevaluechangeevent_value(void* self);
int64_t q_accessiblevaluechangeevent_type(void* self);
QObject* q_accessiblevaluechangeevent_object(void* self);
uint32_t q_accessiblevaluechangeevent_unique_id(void* self);
void q_accessiblevaluechangeevent_set_child(void* self, int chld);
int32_t q_accessiblevaluechangeevent_child(void* self);
QAccessibleInterface* q_accessiblevaluechangeevent_accessible_interface(void* self);
QAccessibleInterface* q_accessiblevaluechangeevent_qbase_accessible_interface(void* self);
void q_accessiblevaluechangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessiblevaluechangeevent_delete(void* self);

QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new(void* obj, int64_t changeType);
QAccessibleTableModelChangeEvent* q_accessibletablemodelchangeevent_new2(void* iface, int64_t changeType);
void q_accessibletablemodelchangeevent_set_model_change_type(void* self, int64_t changeType);
int64_t q_accessibletablemodelchangeevent_model_change_type(void* self);
void q_accessibletablemodelchangeevent_set_first_row(void* self, int row);
void q_accessibletablemodelchangeevent_set_first_column(void* self, int col);
void q_accessibletablemodelchangeevent_set_last_row(void* self, int row);
void q_accessibletablemodelchangeevent_set_last_column(void* self, int col);
int32_t q_accessibletablemodelchangeevent_first_row(void* self);
int32_t q_accessibletablemodelchangeevent_first_column(void* self);
int32_t q_accessibletablemodelchangeevent_last_row(void* self);
int32_t q_accessibletablemodelchangeevent_last_column(void* self);
int64_t q_accessibletablemodelchangeevent_type(void* self);
QObject* q_accessibletablemodelchangeevent_object(void* self);
uint32_t q_accessibletablemodelchangeevent_unique_id(void* self);
void q_accessibletablemodelchangeevent_set_child(void* self, int chld);
int32_t q_accessibletablemodelchangeevent_child(void* self);
QAccessibleInterface* q_accessibletablemodelchangeevent_accessible_interface(void* self);
QAccessibleInterface* q_accessibletablemodelchangeevent_qbase_accessible_interface(void* self);
void q_accessibletablemodelchangeevent_on_accessible_interface(void* self, QAccessibleInterface* (*slot)());
void q_accessibletablemodelchangeevent_delete(void* self);

/// https://doc.qt.io/qt-6/qaccessible.html#types

typedef enum {
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_MODELRESET = 0,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_DATACHANGED = 1,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_ROWSINSERTED = 2,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_COLUMNSINSERTED = 3,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_ROWSREMOVED = 4,
    QACCESSIBLETABLEMODELCHANGEEVENT_MODELCHANGETYPE_COLUMNSREMOVED = 5
} QAccessibleTableModelChangeEvent__ModelChangeType;

#endif
