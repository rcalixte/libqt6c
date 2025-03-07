#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMVIEW_H
#define SRCQT6C_LIBQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractscrollarea.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqitemselectionmodel.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqscrollbar.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QAbstractItemView* q_abstractitemview_new(void* parent);
QAbstractItemView* q_abstractitemview_new2();
QMetaObject* q_abstractitemview_meta_object(void* self);
void* q_abstractitemview_metacast(void* self, const char* param1);
int32_t q_abstractitemview_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractitemview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractitemview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractitemview_tr(const char* s);
void q_abstractitemview_set_model(void* self, void* model);
void q_abstractitemview_on_set_model(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_set_model(void* self, void* model);
QAbstractItemModel* q_abstractitemview_model(void* self);
void q_abstractitemview_set_selection_model(void* self, void* selectionModel);
void q_abstractitemview_on_set_selection_model(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_set_selection_model(void* self, void* selectionModel);
QItemSelectionModel* q_abstractitemview_selection_model(void* self);
void q_abstractitemview_set_item_delegate(void* self, void* delegate);
QAbstractItemDelegate* q_abstractitemview_item_delegate(void* self);
void q_abstractitemview_set_selection_mode(void* self, int64_t mode);
int64_t q_abstractitemview_selection_mode(void* self);
void q_abstractitemview_set_selection_behavior(void* self, int64_t behavior);
int64_t q_abstractitemview_selection_behavior(void* self);
QModelIndex* q_abstractitemview_current_index(void* self);
QModelIndex* q_abstractitemview_root_index(void* self);
void q_abstractitemview_set_edit_triggers(void* self, int64_t triggers);
int64_t q_abstractitemview_edit_triggers(void* self);
void q_abstractitemview_set_vertical_scroll_mode(void* self, int64_t mode);
int64_t q_abstractitemview_vertical_scroll_mode(void* self);
void q_abstractitemview_reset_vertical_scroll_mode(void* self);
void q_abstractitemview_set_horizontal_scroll_mode(void* self, int64_t mode);
int64_t q_abstractitemview_horizontal_scroll_mode(void* self);
void q_abstractitemview_reset_horizontal_scroll_mode(void* self);
void q_abstractitemview_set_auto_scroll(void* self, bool enable);
bool q_abstractitemview_has_auto_scroll(void* self);
void q_abstractitemview_set_auto_scroll_margin(void* self, int margin);
int32_t q_abstractitemview_auto_scroll_margin(void* self);
void q_abstractitemview_set_tab_key_navigation(void* self, bool enable);
bool q_abstractitemview_tab_key_navigation(void* self);
void q_abstractitemview_set_drop_indicator_shown(void* self, bool enable);
bool q_abstractitemview_show_drop_indicator(void* self);
void q_abstractitemview_set_drag_enabled(void* self, bool enable);
bool q_abstractitemview_drag_enabled(void* self);
void q_abstractitemview_set_drag_drop_overwrite_mode(void* self, bool overwrite);
bool q_abstractitemview_drag_drop_overwrite_mode(void* self);
void q_abstractitemview_set_drag_drop_mode(void* self, int64_t behavior);
int64_t q_abstractitemview_drag_drop_mode(void* self);
void q_abstractitemview_set_default_drop_action(void* self, int64_t dropAction);
int64_t q_abstractitemview_default_drop_action(void* self);
void q_abstractitemview_set_alternating_row_colors(void* self, bool enable);
bool q_abstractitemview_alternating_row_colors(void* self);
void q_abstractitemview_set_icon_size(void* self, void* size);
QSize* q_abstractitemview_icon_size(void* self);
void q_abstractitemview_set_text_elide_mode(void* self, int64_t mode);
int64_t q_abstractitemview_text_elide_mode(void* self);
void q_abstractitemview_keyboard_search(void* self, const char* search);
void q_abstractitemview_on_keyboard_search(void* self, void (*slot)(void*, const char*));
void q_abstractitemview_qbase_keyboard_search(void* self, const char* search);
QRect* q_abstractitemview_visual_rect(void* self, void* index);
void q_abstractitemview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));
QRect* q_abstractitemview_qbase_visual_rect(void* self, void* index);
void q_abstractitemview_scroll_to(void* self, void* index, int64_t hint);
void q_abstractitemview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));
void q_abstractitemview_qbase_scroll_to(void* self, void* index, int64_t hint);
QModelIndex* q_abstractitemview_index_at(void* self, void* point);
void q_abstractitemview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));
QModelIndex* q_abstractitemview_qbase_index_at(void* self, void* point);
QSize* q_abstractitemview_size_hint_for_index(void* self, void* index);
int32_t q_abstractitemview_size_hint_for_row(void* self, int row);
void q_abstractitemview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));
int32_t q_abstractitemview_qbase_size_hint_for_row(void* self, int row);
int32_t q_abstractitemview_size_hint_for_column(void* self, int column);
void q_abstractitemview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));
int32_t q_abstractitemview_qbase_size_hint_for_column(void* self, int column);
void q_abstractitemview_open_persistent_editor(void* self, void* index);
void q_abstractitemview_close_persistent_editor(void* self, void* index);
bool q_abstractitemview_is_persistent_editor_open(void* self, void* index);
void q_abstractitemview_set_index_widget(void* self, void* index, void* widget);
QWidget* q_abstractitemview_index_widget(void* self, void* index);
void q_abstractitemview_set_item_delegate_for_row(void* self, int row, void* delegate);
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_row(void* self, int row);
void q_abstractitemview_set_item_delegate_for_column(void* self, int column, void* delegate);
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_column(void* self, int column);
QAbstractItemDelegate* q_abstractitemview_item_delegate_with_index(void* self, void* index);
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_index(void* self, void* index);
void q_abstractitemview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));
QAbstractItemDelegate* q_abstractitemview_qbase_item_delegate_for_index(void* self, void* index);
QVariant* q_abstractitemview_input_method_query(void* self, int64_t query);
void q_abstractitemview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_abstractitemview_qbase_input_method_query(void* self, int64_t query);
void q_abstractitemview_reset(void* self);
void q_abstractitemview_on_reset(void* self, void (*slot)());
void q_abstractitemview_qbase_reset(void* self);
void q_abstractitemview_set_root_index(void* self, void* index);
void q_abstractitemview_on_set_root_index(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_set_root_index(void* self, void* index);
void q_abstractitemview_do_items_layout(void* self);
void q_abstractitemview_on_do_items_layout(void* self, void (*slot)());
void q_abstractitemview_qbase_do_items_layout(void* self);
void q_abstractitemview_select_all(void* self);
void q_abstractitemview_on_select_all(void* self, void (*slot)());
void q_abstractitemview_qbase_select_all(void* self);
void q_abstractitemview_edit(void* self, void* index);
void q_abstractitemview_clear_selection(void* self);
void q_abstractitemview_set_current_index(void* self, void* index);
void q_abstractitemview_scroll_to_top(void* self);
void q_abstractitemview_scroll_to_bottom(void* self);
void q_abstractitemview_update(void* self, void* index);
void q_abstractitemview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);
void q_abstractitemview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*));
void q_abstractitemview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);
void q_abstractitemview_rows_inserted(void* self, void* parent, int start, int end);
void q_abstractitemview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));
void q_abstractitemview_qbase_rows_inserted(void* self, void* parent, int start, int end);
void q_abstractitemview_rows_about_to_be_removed(void* self, void* parent, int start, int end);
void q_abstractitemview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));
void q_abstractitemview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);
void q_abstractitemview_selection_changed(void* self, void* selected, void* deselected);
void q_abstractitemview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));
void q_abstractitemview_qbase_selection_changed(void* self, void* selected, void* deselected);
void q_abstractitemview_current_changed(void* self, void* current, void* previous);
void q_abstractitemview_on_current_changed(void* self, void (*slot)(void*, void*, void*));
void q_abstractitemview_qbase_current_changed(void* self, void* current, void* previous);
void q_abstractitemview_update_editor_data(void* self);
void q_abstractitemview_on_update_editor_data(void* self, void (*slot)());
void q_abstractitemview_qbase_update_editor_data(void* self);
void q_abstractitemview_update_editor_geometries(void* self);
void q_abstractitemview_on_update_editor_geometries(void* self, void (*slot)());
void q_abstractitemview_qbase_update_editor_geometries(void* self);
void q_abstractitemview_update_geometries(void* self);
void q_abstractitemview_on_update_geometries(void* self, void (*slot)());
void q_abstractitemview_qbase_update_geometries(void* self);
void q_abstractitemview_vertical_scrollbar_action(void* self, int action);
void q_abstractitemview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));
void q_abstractitemview_qbase_vertical_scrollbar_action(void* self, int action);
void q_abstractitemview_horizontal_scrollbar_action(void* self, int action);
void q_abstractitemview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));
void q_abstractitemview_qbase_horizontal_scrollbar_action(void* self, int action);
void q_abstractitemview_vertical_scrollbar_value_changed(void* self, int value);
void q_abstractitemview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));
void q_abstractitemview_qbase_vertical_scrollbar_value_changed(void* self, int value);
void q_abstractitemview_horizontal_scrollbar_value_changed(void* self, int value);
void q_abstractitemview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));
void q_abstractitemview_qbase_horizontal_scrollbar_value_changed(void* self, int value);
void q_abstractitemview_close_editor(void* self, void* editor, int64_t hint);
void q_abstractitemview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));
void q_abstractitemview_qbase_close_editor(void* self, void* editor, int64_t hint);
void q_abstractitemview_commit_data(void* self, void* editor);
void q_abstractitemview_on_commit_data(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_commit_data(void* self, void* editor);
void q_abstractitemview_editor_destroyed(void* self, void* editor);
void q_abstractitemview_on_editor_destroyed(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_editor_destroyed(void* self, void* editor);
void q_abstractitemview_pressed(void* self, void* index);
void q_abstractitemview_on_pressed(void* self, void (*slot)(void*, void*));
void q_abstractitemview_clicked(void* self, void* index);
void q_abstractitemview_on_clicked(void* self, void (*slot)(void*, void*));
void q_abstractitemview_double_clicked(void* self, void* index);
void q_abstractitemview_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_abstractitemview_activated(void* self, void* index);
void q_abstractitemview_on_activated(void* self, void (*slot)(void*, void*));
void q_abstractitemview_entered(void* self, void* index);
void q_abstractitemview_on_entered(void* self, void (*slot)(void*, void*));
void q_abstractitemview_viewport_entered(void* self);
void q_abstractitemview_on_viewport_entered(void* self, void (*slot)(void*));
void q_abstractitemview_icon_size_changed(void* self, void* size);
void q_abstractitemview_on_icon_size_changed(void* self, void (*slot)(void*, void*));
QModelIndex* q_abstractitemview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);
void q_abstractitemview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));
QModelIndex* q_abstractitemview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);
int32_t q_abstractitemview_horizontal_offset(void* self);
void q_abstractitemview_on_horizontal_offset(void* self, int32_t (*slot)());
int32_t q_abstractitemview_qbase_horizontal_offset(void* self);
int32_t q_abstractitemview_vertical_offset(void* self);
void q_abstractitemview_on_vertical_offset(void* self, int32_t (*slot)());
int32_t q_abstractitemview_qbase_vertical_offset(void* self);
bool q_abstractitemview_is_index_hidden(void* self, void* index);
void q_abstractitemview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));
bool q_abstractitemview_qbase_is_index_hidden(void* self, void* index);
void q_abstractitemview_set_selection(void* self, void* rect, int64_t command);
void q_abstractitemview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));
void q_abstractitemview_qbase_set_selection(void* self, void* rect, int64_t command);
QRegion* q_abstractitemview_visual_region_for_selection(void* self, void* selection);
void q_abstractitemview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));
QRegion* q_abstractitemview_qbase_visual_region_for_selection(void* self, void* selection);
libqt_list /* of QModelIndex* */ q_abstractitemview_selected_indexes(void* self);
void q_abstractitemview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());
libqt_list /* of QModelIndex* */ q_abstractitemview_qbase_selected_indexes(void* self);
bool q_abstractitemview_edit2(void* self, void* index, int64_t trigger, void* event);
void q_abstractitemview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));
bool q_abstractitemview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);
int64_t q_abstractitemview_selection_command(void* self, void* index, void* event);
void q_abstractitemview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));
int64_t q_abstractitemview_qbase_selection_command(void* self, void* index, void* event);
void q_abstractitemview_start_drag(void* self, int64_t supportedActions);
void q_abstractitemview_on_start_drag(void* self, void (*slot)(void*, int64_t));
void q_abstractitemview_qbase_start_drag(void* self, int64_t supportedActions);
void q_abstractitemview_init_view_item_option(void* self, void* option);
void q_abstractitemview_on_init_view_item_option(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_init_view_item_option(void* self, void* option);
int64_t q_abstractitemview_state(void* self);
void q_abstractitemview_on_state(void* self, int64_t (*slot)());
int64_t q_abstractitemview_qbase_state(void* self);
void q_abstractitemview_set_state(void* self, int64_t state);
void q_abstractitemview_on_set_state(void* self, void (*slot)(void*, int64_t));
void q_abstractitemview_qbase_set_state(void* self, int64_t state);
void q_abstractitemview_schedule_delayed_items_layout(void* self);
void q_abstractitemview_on_schedule_delayed_items_layout(void* self, void (*slot)());
void q_abstractitemview_qbase_schedule_delayed_items_layout(void* self);
void q_abstractitemview_execute_delayed_items_layout(void* self);
void q_abstractitemview_on_execute_delayed_items_layout(void* self, void (*slot)());
void q_abstractitemview_qbase_execute_delayed_items_layout(void* self);
void q_abstractitemview_set_dirty_region(void* self, void* region);
void q_abstractitemview_on_set_dirty_region(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_set_dirty_region(void* self, void* region);
void q_abstractitemview_scroll_dirty_region(void* self, int dx, int dy);
void q_abstractitemview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));
void q_abstractitemview_qbase_scroll_dirty_region(void* self, int dx, int dy);
QPoint* q_abstractitemview_dirty_region_offset(void* self);
void q_abstractitemview_on_dirty_region_offset(void* self, QPoint* (*slot)());
QPoint* q_abstractitemview_qbase_dirty_region_offset(void* self);
void q_abstractitemview_start_auto_scroll(void* self);
void q_abstractitemview_on_start_auto_scroll(void* self, void (*slot)());
void q_abstractitemview_qbase_start_auto_scroll(void* self);
void q_abstractitemview_stop_auto_scroll(void* self);
void q_abstractitemview_on_stop_auto_scroll(void* self, void (*slot)());
void q_abstractitemview_qbase_stop_auto_scroll(void* self);
void q_abstractitemview_do_auto_scroll(void* self);
void q_abstractitemview_on_do_auto_scroll(void* self, void (*slot)());
void q_abstractitemview_qbase_do_auto_scroll(void* self);
bool q_abstractitemview_focus_next_prev_child(void* self, bool next);
void q_abstractitemview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_abstractitemview_qbase_focus_next_prev_child(void* self, bool next);
bool q_abstractitemview_event(void* self, void* event);
void q_abstractitemview_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractitemview_qbase_event(void* self, void* event);
bool q_abstractitemview_viewport_event(void* self, void* event);
void q_abstractitemview_on_viewport_event(void* self, bool (*slot)(void*, void*));
bool q_abstractitemview_qbase_viewport_event(void* self, void* event);
void q_abstractitemview_mouse_press_event(void* self, void* event);
void q_abstractitemview_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_mouse_press_event(void* self, void* event);
void q_abstractitemview_mouse_move_event(void* self, void* event);
void q_abstractitemview_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_mouse_move_event(void* self, void* event);
void q_abstractitemview_mouse_release_event(void* self, void* event);
void q_abstractitemview_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_mouse_release_event(void* self, void* event);
void q_abstractitemview_mouse_double_click_event(void* self, void* event);
void q_abstractitemview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_mouse_double_click_event(void* self, void* event);
void q_abstractitemview_drag_enter_event(void* self, void* event);
void q_abstractitemview_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_drag_enter_event(void* self, void* event);
void q_abstractitemview_drag_move_event(void* self, void* event);
void q_abstractitemview_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_drag_move_event(void* self, void* event);
void q_abstractitemview_drag_leave_event(void* self, void* event);
void q_abstractitemview_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_drag_leave_event(void* self, void* event);
void q_abstractitemview_drop_event(void* self, void* event);
void q_abstractitemview_on_drop_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_drop_event(void* self, void* event);
void q_abstractitemview_focus_in_event(void* self, void* event);
void q_abstractitemview_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_focus_in_event(void* self, void* event);
void q_abstractitemview_focus_out_event(void* self, void* event);
void q_abstractitemview_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_focus_out_event(void* self, void* event);
void q_abstractitemview_key_press_event(void* self, void* event);
void q_abstractitemview_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_key_press_event(void* self, void* event);
void q_abstractitemview_resize_event(void* self, void* event);
void q_abstractitemview_on_resize_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_resize_event(void* self, void* event);
void q_abstractitemview_timer_event(void* self, void* event);
void q_abstractitemview_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_timer_event(void* self, void* event);
void q_abstractitemview_input_method_event(void* self, void* event);
void q_abstractitemview_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_qbase_input_method_event(void* self, void* event);
bool q_abstractitemview_event_filter(void* self, void* object, void* event);
void q_abstractitemview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_abstractitemview_qbase_event_filter(void* self, void* object, void* event);
int64_t q_abstractitemview_drop_indicator_position(void* self);
void q_abstractitemview_on_drop_indicator_position(void* self, int64_t (*slot)());
int64_t q_abstractitemview_qbase_drop_indicator_position(void* self);
QSize* q_abstractitemview_viewport_size_hint(void* self);
void q_abstractitemview_on_viewport_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractitemview_qbase_viewport_size_hint(void* self);
const char* q_abstractitemview_tr2(const char* s, const char* c);
const char* q_abstractitemview_tr3(const char* s, const char* c, int n);
int64_t q_abstractitemview_vertical_scroll_bar_policy(void* self);
void q_abstractitemview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_abstractitemview_vertical_scroll_bar(void* self);
void q_abstractitemview_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_abstractitemview_horizontal_scroll_bar_policy(void* self);
void q_abstractitemview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_abstractitemview_horizontal_scroll_bar(void* self);
void q_abstractitemview_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_abstractitemview_corner_widget(void* self);
void q_abstractitemview_set_corner_widget(void* self, void* widget);
void q_abstractitemview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_abstractitemview_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_abstractitemview_viewport(void* self);
void q_abstractitemview_set_viewport(void* self, void* widget);
QSize* q_abstractitemview_maximum_viewport_size(void* self);
int64_t q_abstractitemview_size_adjust_policy(void* self);
void q_abstractitemview_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_abstractitemview_frame_style(void* self);
void q_abstractitemview_set_frame_style(void* self, int frameStyle);
int32_t q_abstractitemview_frame_width(void* self);
int64_t q_abstractitemview_frame_shape(void* self);
void q_abstractitemview_set_frame_shape(void* self, int64_t frameShape);
int64_t q_abstractitemview_frame_shadow(void* self);
void q_abstractitemview_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_abstractitemview_line_width(void* self);
void q_abstractitemview_set_line_width(void* self, int lineWidth);
int32_t q_abstractitemview_mid_line_width(void* self);
void q_abstractitemview_set_mid_line_width(void* self, int midLineWidth);
QRect* q_abstractitemview_frame_rect(void* self);
void q_abstractitemview_set_frame_rect(void* self, void* frameRect);
uintptr_t q_abstractitemview_win_id(void* self);
void q_abstractitemview_create_win_id(void* self);
uintptr_t q_abstractitemview_internal_win_id(void* self);
uintptr_t q_abstractitemview_effective_win_id(void* self);
QStyle* q_abstractitemview_style(void* self);
void q_abstractitemview_set_style(void* self, void* style);
bool q_abstractitemview_is_top_level(void* self);
bool q_abstractitemview_is_window(void* self);
bool q_abstractitemview_is_modal(void* self);
int64_t q_abstractitemview_window_modality(void* self);
void q_abstractitemview_set_window_modality(void* self, int64_t windowModality);
bool q_abstractitemview_is_enabled(void* self);
bool q_abstractitemview_is_enabled_to(void* self, void* param1);
void q_abstractitemview_set_enabled(void* self, bool enabled);
void q_abstractitemview_set_disabled(void* self, bool disabled);
void q_abstractitemview_set_window_modified(void* self, bool windowModified);
QRect* q_abstractitemview_frame_geometry(void* self);
QRect* q_abstractitemview_geometry(void* self);
QRect* q_abstractitemview_normal_geometry(void* self);
int32_t q_abstractitemview_x(void* self);
int32_t q_abstractitemview_y(void* self);
QPoint* q_abstractitemview_pos(void* self);
QSize* q_abstractitemview_frame_size(void* self);
QSize* q_abstractitemview_size(void* self);
int32_t q_abstractitemview_width(void* self);
int32_t q_abstractitemview_height(void* self);
QRect* q_abstractitemview_rect(void* self);
QRect* q_abstractitemview_children_rect(void* self);
QRegion* q_abstractitemview_children_region(void* self);
QSize* q_abstractitemview_minimum_size(void* self);
QSize* q_abstractitemview_maximum_size(void* self);
int32_t q_abstractitemview_minimum_width(void* self);
int32_t q_abstractitemview_minimum_height(void* self);
int32_t q_abstractitemview_maximum_width(void* self);
int32_t q_abstractitemview_maximum_height(void* self);
void q_abstractitemview_set_minimum_size(void* self, void* minimumSize);
void q_abstractitemview_set_minimum_size2(void* self, int minw, int minh);
void q_abstractitemview_set_maximum_size(void* self, void* maximumSize);
void q_abstractitemview_set_maximum_size2(void* self, int maxw, int maxh);
void q_abstractitemview_set_minimum_width(void* self, int minw);
void q_abstractitemview_set_minimum_height(void* self, int minh);
void q_abstractitemview_set_maximum_width(void* self, int maxw);
void q_abstractitemview_set_maximum_height(void* self, int maxh);
QSize* q_abstractitemview_size_increment(void* self);
void q_abstractitemview_set_size_increment(void* self, void* sizeIncrement);
void q_abstractitemview_set_size_increment2(void* self, int w, int h);
QSize* q_abstractitemview_base_size(void* self);
void q_abstractitemview_set_base_size(void* self, void* baseSize);
void q_abstractitemview_set_base_size2(void* self, int basew, int baseh);
void q_abstractitemview_set_fixed_size(void* self, void* fixedSize);
void q_abstractitemview_set_fixed_size2(void* self, int w, int h);
void q_abstractitemview_set_fixed_width(void* self, int w);
void q_abstractitemview_set_fixed_height(void* self, int h);
QPointF* q_abstractitemview_map_to_global(void* self, void* param1);
QPoint* q_abstractitemview_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_abstractitemview_map_from_global(void* self, void* param1);
QPoint* q_abstractitemview_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_abstractitemview_map_to_parent(void* self, void* param1);
QPoint* q_abstractitemview_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractitemview_map_from_parent(void* self, void* param1);
QPoint* q_abstractitemview_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractitemview_map_to(void* self, void* param1, void* param2);
QPoint* q_abstractitemview_map_to2(void* self, void* param1, void* param2);
QPointF* q_abstractitemview_map_from(void* self, void* param1, void* param2);
QPoint* q_abstractitemview_map_from2(void* self, void* param1, void* param2);
QWidget* q_abstractitemview_window(void* self);
QWidget* q_abstractitemview_native_parent_widget(void* self);
QWidget* q_abstractitemview_top_level_widget(void* self);
QPalette* q_abstractitemview_palette(void* self);
void q_abstractitemview_set_palette(void* self, void* palette);
void q_abstractitemview_set_background_role(void* self, int64_t backgroundRole);
int64_t q_abstractitemview_background_role(void* self);
void q_abstractitemview_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_abstractitemview_foreground_role(void* self);
QFont* q_abstractitemview_font(void* self);
void q_abstractitemview_set_font(void* self, void* font);
QFontMetrics* q_abstractitemview_font_metrics(void* self);
QFontInfo* q_abstractitemview_font_info(void* self);
QCursor* q_abstractitemview_cursor(void* self);
void q_abstractitemview_set_cursor(void* self, void* cursor);
void q_abstractitemview_unset_cursor(void* self);
void q_abstractitemview_set_mouse_tracking(void* self, bool enable);
bool q_abstractitemview_has_mouse_tracking(void* self);
bool q_abstractitemview_under_mouse(void* self);
void q_abstractitemview_set_tablet_tracking(void* self, bool enable);
bool q_abstractitemview_has_tablet_tracking(void* self);
void q_abstractitemview_set_mask(void* self, void* mask);
void q_abstractitemview_set_mask_with_mask(void* self, void* mask);
QRegion* q_abstractitemview_mask(void* self);
void q_abstractitemview_clear_mask(void* self);
void q_abstractitemview_render(void* self, void* target);
void q_abstractitemview_render_with_painter(void* self, void* painter);
QPixmap* q_abstractitemview_grab(void* self);
QGraphicsEffect* q_abstractitemview_graphics_effect(void* self);
void q_abstractitemview_set_graphics_effect(void* self, void* effect);
void q_abstractitemview_grab_gesture(void* self, int64_t typeVal);
void q_abstractitemview_ungrab_gesture(void* self, int64_t typeVal);
void q_abstractitemview_set_window_title(void* self, const char* windowTitle);
void q_abstractitemview_set_style_sheet(void* self, const char* styleSheet);
const char* q_abstractitemview_style_sheet(void* self);
const char* q_abstractitemview_window_title(void* self);
void q_abstractitemview_set_window_icon(void* self, void* icon);
QIcon* q_abstractitemview_window_icon(void* self);
void q_abstractitemview_set_window_icon_text(void* self, const char* windowIconText);
const char* q_abstractitemview_window_icon_text(void* self);
void q_abstractitemview_set_window_role(void* self, const char* windowRole);
const char* q_abstractitemview_window_role(void* self);
void q_abstractitemview_set_window_file_path(void* self, const char* filePath);
const char* q_abstractitemview_window_file_path(void* self);
void q_abstractitemview_set_window_opacity(void* self, double level);
double q_abstractitemview_window_opacity(void* self);
bool q_abstractitemview_is_window_modified(void* self);
void q_abstractitemview_set_tool_tip(void* self, const char* toolTip);
const char* q_abstractitemview_tool_tip(void* self);
void q_abstractitemview_set_tool_tip_duration(void* self, int msec);
int32_t q_abstractitemview_tool_tip_duration(void* self);
void q_abstractitemview_set_status_tip(void* self, const char* statusTip);
const char* q_abstractitemview_status_tip(void* self);
void q_abstractitemview_set_whats_this(void* self, const char* whatsThis);
const char* q_abstractitemview_whats_this(void* self);
const char* q_abstractitemview_accessible_name(void* self);
void q_abstractitemview_set_accessible_name(void* self, const char* name);
const char* q_abstractitemview_accessible_description(void* self);
void q_abstractitemview_set_accessible_description(void* self, const char* description);
void q_abstractitemview_set_layout_direction(void* self, int64_t direction);
int64_t q_abstractitemview_layout_direction(void* self);
void q_abstractitemview_unset_layout_direction(void* self);
void q_abstractitemview_set_locale(void* self, void* locale);
QLocale* q_abstractitemview_locale(void* self);
void q_abstractitemview_unset_locale(void* self);
bool q_abstractitemview_is_right_to_left(void* self);
bool q_abstractitemview_is_left_to_right(void* self);
void q_abstractitemview_set_focus(void* self);
bool q_abstractitemview_is_active_window(void* self);
void q_abstractitemview_activate_window(void* self);
void q_abstractitemview_clear_focus(void* self);
void q_abstractitemview_set_focus_with_reason(void* self, int64_t reason);
int64_t q_abstractitemview_focus_policy(void* self);
void q_abstractitemview_set_focus_policy(void* self, int64_t policy);
bool q_abstractitemview_has_focus(void* self);
void q_abstractitemview_set_tab_order(void* param1, void* param2);
void q_abstractitemview_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_abstractitemview_focus_proxy(void* self);
int64_t q_abstractitemview_context_menu_policy(void* self);
void q_abstractitemview_set_context_menu_policy(void* self, int64_t policy);
void q_abstractitemview_grab_mouse(void* self);
void q_abstractitemview_grab_mouse_with_q_cursor(void* self, void* param1);
void q_abstractitemview_release_mouse(void* self);
void q_abstractitemview_grab_keyboard(void* self);
void q_abstractitemview_release_keyboard(void* self);
int32_t q_abstractitemview_grab_shortcut(void* self, void* key);
void q_abstractitemview_release_shortcut(void* self, int id);
void q_abstractitemview_set_shortcut_enabled(void* self, int id);
void q_abstractitemview_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_abstractitemview_mouse_grabber();
QWidget* q_abstractitemview_keyboard_grabber();
bool q_abstractitemview_updates_enabled(void* self);
void q_abstractitemview_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_abstractitemview_graphics_proxy_widget(void* self);
void q_abstractitemview_repaint(void* self);
void q_abstractitemview_update2(void* self, int x, int y, int w, int h);
void q_abstractitemview_update_with_q_rect(void* self, void* param1);
void q_abstractitemview_update_with_q_region(void* self, void* param1);
void q_abstractitemview_repaint2(void* self, int x, int y, int w, int h);
void q_abstractitemview_repaint_with_q_rect(void* self, void* param1);
void q_abstractitemview_repaint_with_q_region(void* self, void* param1);
void q_abstractitemview_set_hidden(void* self, bool hidden);
void q_abstractitemview_show(void* self);
void q_abstractitemview_hide(void* self);
void q_abstractitemview_show_minimized(void* self);
void q_abstractitemview_show_maximized(void* self);
void q_abstractitemview_show_full_screen(void* self);
void q_abstractitemview_show_normal(void* self);
bool q_abstractitemview_close(void* self);
void q_abstractitemview_raise(void* self);
void q_abstractitemview_lower(void* self);
void q_abstractitemview_stack_under(void* self, void* param1);
void q_abstractitemview_move(void* self, int x, int y);
void q_abstractitemview_move_with_q_point(void* self, void* param1);
void q_abstractitemview_resize(void* self, int w, int h);
void q_abstractitemview_resize_with_q_size(void* self, void* param1);
void q_abstractitemview_set_geometry(void* self, int x, int y, int w, int h);
void q_abstractitemview_set_geometry_with_geometry(void* self, void* geometry);
char* q_abstractitemview_save_geometry(void* self);
bool q_abstractitemview_restore_geometry(void* self, const char* geometry);
void q_abstractitemview_adjust_size(void* self);
bool q_abstractitemview_is_visible(void* self);
bool q_abstractitemview_is_visible_to(void* self, void* param1);
bool q_abstractitemview_is_hidden(void* self);
bool q_abstractitemview_is_minimized(void* self);
bool q_abstractitemview_is_maximized(void* self);
bool q_abstractitemview_is_full_screen(void* self);
int64_t q_abstractitemview_window_state(void* self);
void q_abstractitemview_set_window_state(void* self, int64_t state);
void q_abstractitemview_override_window_state(void* self, int64_t state);
QSizePolicy* q_abstractitemview_size_policy(void* self);
void q_abstractitemview_set_size_policy(void* self, void* sizePolicy);
void q_abstractitemview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_abstractitemview_visible_region(void* self);
void q_abstractitemview_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_abstractitemview_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_abstractitemview_contents_margins(void* self);
QRect* q_abstractitemview_contents_rect(void* self);
QLayout* q_abstractitemview_layout(void* self);
void q_abstractitemview_set_layout(void* self, void* layout);
void q_abstractitemview_update_geometry(void* self);
void q_abstractitemview_set_parent(void* self, void* parent);
void q_abstractitemview_set_parent2(void* self, void* parent, int64_t f);
void q_abstractitemview_scroll(void* self, int dx, int dy);
void q_abstractitemview_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_abstractitemview_focus_widget(void* self);
QWidget* q_abstractitemview_next_in_focus_chain(void* self);
QWidget* q_abstractitemview_previous_in_focus_chain(void* self);
bool q_abstractitemview_accept_drops(void* self);
void q_abstractitemview_set_accept_drops(void* self, bool on);
void q_abstractitemview_add_action(void* self, void* action);
void q_abstractitemview_add_actions(void* self, void* actions[]);
void q_abstractitemview_insert_actions(void* self, void* before, void* actions[]);
void q_abstractitemview_insert_action(void* self, void* before, void* action);
void q_abstractitemview_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_abstractitemview_actions(void* self);
QAction* q_abstractitemview_add_action_with_text(void* self, const char* text);
QAction* q_abstractitemview_add_action2(void* self, void* icon, const char* text);
QAction* q_abstractitemview_add_action3(void* self, const char* text, void* shortcut);
QAction* q_abstractitemview_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_abstractitemview_parent_widget(void* self);
void q_abstractitemview_set_window_flags(void* self, int64_t typeVal);
int64_t q_abstractitemview_window_flags(void* self);
void q_abstractitemview_set_window_flag(void* self, int64_t param1);
void q_abstractitemview_override_window_flags(void* self, int64_t typeVal);
int64_t q_abstractitemview_window_type(void* self);
QWidget* q_abstractitemview_find(uint64_t param1);
QWidget* q_abstractitemview_child_at(void* self, int x, int y);
QWidget* q_abstractitemview_child_at_with_q_point(void* self, void* p);
void q_abstractitemview_set_attribute(void* self, int64_t param1);
bool q_abstractitemview_test_attribute(void* self, int64_t param1);
void q_abstractitemview_ensure_polished(void* self);
bool q_abstractitemview_is_ancestor_of(void* self, void* child);
bool q_abstractitemview_auto_fill_background(void* self);
void q_abstractitemview_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_abstractitemview_backing_store(void* self);
QWindow* q_abstractitemview_window_handle(void* self);
QScreen* q_abstractitemview_screen(void* self);
void q_abstractitemview_set_screen(void* self, void* screen);
QWidget* q_abstractitemview_create_window_container(void* window);
void q_abstractitemview_window_title_changed(void* self, const char* title);
void q_abstractitemview_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_abstractitemview_window_icon_changed(void* self, void* icon);
void q_abstractitemview_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_abstractitemview_window_icon_text_changed(void* self, const char* iconText);
void q_abstractitemview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_abstractitemview_custom_context_menu_requested(void* self, void* pos);
void q_abstractitemview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_abstractitemview_input_method_hints(void* self);
void q_abstractitemview_set_input_method_hints(void* self, int64_t hints);
void q_abstractitemview_render2(void* self, void* target, void* targetOffset);
void q_abstractitemview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_abstractitemview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_abstractitemview_render22(void* self, void* painter, void* targetOffset);
void q_abstractitemview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_abstractitemview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_abstractitemview_grab1(void* self, void* rectangle);
void q_abstractitemview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_abstractitemview_grab_shortcut2(void* self, void* key, int64_t context);
void q_abstractitemview_set_shortcut_enabled2(void* self, int id, bool enable);
void q_abstractitemview_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_abstractitemview_set_window_flag2(void* self, int64_t param1, bool on);
void q_abstractitemview_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_abstractitemview_create_window_container2(void* window, void* parent);
QWidget* q_abstractitemview_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_abstractitemview_object_name(void* self);
void q_abstractitemview_set_object_name(void* self, const char* name);
bool q_abstractitemview_is_widget_type(void* self);
bool q_abstractitemview_is_window_type(void* self);
bool q_abstractitemview_is_quick_item_type(void* self);
bool q_abstractitemview_signals_blocked(void* self);
bool q_abstractitemview_block_signals(void* self, bool b);
QThread* q_abstractitemview_thread(void* self);
void q_abstractitemview_move_to_thread(void* self, void* thread);
int32_t q_abstractitemview_start_timer(void* self, int interval);
void q_abstractitemview_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractitemview_children(void* self);
void q_abstractitemview_install_event_filter(void* self, void* filterObj);
void q_abstractitemview_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractitemview_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractitemview_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractitemview_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractitemview_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractitemview_dump_object_tree(void* self);
void q_abstractitemview_dump_object_info(void* self);
bool q_abstractitemview_set_property(void* self, const char* name, void* value);
QVariant* q_abstractitemview_property(void* self, const char* name);
const char** q_abstractitemview_dynamic_property_names(void* self);
QBindingStorage* q_abstractitemview_binding_storage(void* self);
QBindingStorage* q_abstractitemview_binding_storage2(void* self);
void q_abstractitemview_destroyed(void* self);
void q_abstractitemview_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractitemview_parent(void* self);
bool q_abstractitemview_inherits(void* self, const char* classname);
void q_abstractitemview_delete_later(void* self);
int32_t q_abstractitemview_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractitemview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractitemview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractitemview_destroyed1(void* self, void* param1);
void q_abstractitemview_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractitemview_painting_active(void* self);
int32_t q_abstractitemview_width_m_m(void* self);
int32_t q_abstractitemview_height_m_m(void* self);
int32_t q_abstractitemview_logical_dpi_x(void* self);
int32_t q_abstractitemview_logical_dpi_y(void* self);
int32_t q_abstractitemview_physical_dpi_x(void* self);
int32_t q_abstractitemview_physical_dpi_y(void* self);
double q_abstractitemview_device_pixel_ratio(void* self);
double q_abstractitemview_device_pixel_ratio_f(void* self);
int32_t q_abstractitemview_color_count(void* self);
int32_t q_abstractitemview_depth(void* self);
double q_abstractitemview_device_pixel_ratio_f_scale();
QSize* q_abstractitemview_minimum_size_hint(void* self);
QSize* q_abstractitemview_qbase_minimum_size_hint(void* self);
void q_abstractitemview_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractitemview_size_hint(void* self);
QSize* q_abstractitemview_qbase_size_hint(void* self);
void q_abstractitemview_on_size_hint(void* self, QSize* (*slot)());
void q_abstractitemview_setup_viewport(void* self, void* viewport);
void q_abstractitemview_qbase_setup_viewport(void* self, void* viewport);
void q_abstractitemview_on_setup_viewport(void* self, void (*slot)(void*, void*));
void q_abstractitemview_paint_event(void* self, void* param1);
void q_abstractitemview_qbase_paint_event(void* self, void* param1);
void q_abstractitemview_on_paint_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_wheel_event(void* self, void* param1);
void q_abstractitemview_qbase_wheel_event(void* self, void* param1);
void q_abstractitemview_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_context_menu_event(void* self, void* param1);
void q_abstractitemview_qbase_context_menu_event(void* self, void* param1);
void q_abstractitemview_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_scroll_contents_by(void* self, int dx, int dy);
void q_abstractitemview_qbase_scroll_contents_by(void* self, int dx, int dy);
void q_abstractitemview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_abstractitemview_change_event(void* self, void* param1);
void q_abstractitemview_qbase_change_event(void* self, void* param1);
void q_abstractitemview_on_change_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_init_style_option(void* self, void* option);
void q_abstractitemview_qbase_init_style_option(void* self, void* option);
void q_abstractitemview_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_abstractitemview_dev_type(void* self);
int32_t q_abstractitemview_qbase_dev_type(void* self);
void q_abstractitemview_on_dev_type(void* self, int32_t (*slot)());
void q_abstractitemview_set_visible(void* self, bool visible);
void q_abstractitemview_qbase_set_visible(void* self, bool visible);
void q_abstractitemview_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_abstractitemview_height_for_width(void* self, int param1);
int32_t q_abstractitemview_qbase_height_for_width(void* self, int param1);
void q_abstractitemview_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_abstractitemview_has_height_for_width(void* self);
bool q_abstractitemview_qbase_has_height_for_width(void* self);
void q_abstractitemview_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_abstractitemview_paint_engine(void* self);
QPaintEngine* q_abstractitemview_qbase_paint_engine(void* self);
void q_abstractitemview_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_abstractitemview_key_release_event(void* self, void* event);
void q_abstractitemview_qbase_key_release_event(void* self, void* event);
void q_abstractitemview_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_enter_event(void* self, void* event);
void q_abstractitemview_qbase_enter_event(void* self, void* event);
void q_abstractitemview_on_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_leave_event(void* self, void* event);
void q_abstractitemview_qbase_leave_event(void* self, void* event);
void q_abstractitemview_on_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_move_event(void* self, void* event);
void q_abstractitemview_qbase_move_event(void* self, void* event);
void q_abstractitemview_on_move_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_close_event(void* self, void* event);
void q_abstractitemview_qbase_close_event(void* self, void* event);
void q_abstractitemview_on_close_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_tablet_event(void* self, void* event);
void q_abstractitemview_qbase_tablet_event(void* self, void* event);
void q_abstractitemview_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_action_event(void* self, void* event);
void q_abstractitemview_qbase_action_event(void* self, void* event);
void q_abstractitemview_on_action_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_show_event(void* self, void* event);
void q_abstractitemview_qbase_show_event(void* self, void* event);
void q_abstractitemview_on_show_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_hide_event(void* self, void* event);
void q_abstractitemview_qbase_hide_event(void* self, void* event);
void q_abstractitemview_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_abstractitemview_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_abstractitemview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractitemview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_abstractitemview_metric(void* self, int64_t param1);
int32_t q_abstractitemview_qbase_metric(void* self, int64_t param1);
void q_abstractitemview_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_abstractitemview_init_painter(void* self, void* painter);
void q_abstractitemview_qbase_init_painter(void* self, void* painter);
void q_abstractitemview_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_abstractitemview_redirected(void* self, void* offset);
QPaintDevice* q_abstractitemview_qbase_redirected(void* self, void* offset);
void q_abstractitemview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_abstractitemview_shared_painter(void* self);
QPainter* q_abstractitemview_qbase_shared_painter(void* self);
void q_abstractitemview_on_shared_painter(void* self, QPainter* (*slot)());
void q_abstractitemview_child_event(void* self, void* event);
void q_abstractitemview_qbase_child_event(void* self, void* event);
void q_abstractitemview_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_custom_event(void* self, void* event);
void q_abstractitemview_qbase_custom_event(void* self, void* event);
void q_abstractitemview_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractitemview_connect_notify(void* self, void* signal);
void q_abstractitemview_qbase_connect_notify(void* self, void* signal);
void q_abstractitemview_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractitemview_disconnect_notify(void* self, void* signal);
void q_abstractitemview_qbase_disconnect_notify(void* self, void* signal);
void q_abstractitemview_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_abstractitemview_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_abstractitemview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_abstractitemview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_abstractitemview_viewport_margins(void* self);
QMargins* q_abstractitemview_qbase_viewport_margins(void* self);
void q_abstractitemview_on_viewport_margins(void* self, QMargins* (*slot)());
void q_abstractitemview_draw_frame(void* self, void* param1);
void q_abstractitemview_qbase_draw_frame(void* self, void* param1);
void q_abstractitemview_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_abstractitemview_update_micro_focus(void* self);
void q_abstractitemview_qbase_update_micro_focus(void* self);
void q_abstractitemview_on_update_micro_focus(void* self, void (*slot)());
void q_abstractitemview_create(void* self);
void q_abstractitemview_qbase_create(void* self);
void q_abstractitemview_on_create(void* self, void (*slot)());
void q_abstractitemview_destroy(void* self);
void q_abstractitemview_qbase_destroy(void* self);
void q_abstractitemview_on_destroy(void* self, void (*slot)());
bool q_abstractitemview_focus_next_child(void* self);
bool q_abstractitemview_qbase_focus_next_child(void* self);
void q_abstractitemview_on_focus_next_child(void* self, bool (*slot)());
bool q_abstractitemview_focus_previous_child(void* self);
bool q_abstractitemview_qbase_focus_previous_child(void* self);
void q_abstractitemview_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_abstractitemview_sender(void* self);
QObject* q_abstractitemview_qbase_sender(void* self);
void q_abstractitemview_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractitemview_sender_signal_index(void* self);
int32_t q_abstractitemview_qbase_sender_signal_index(void* self);
void q_abstractitemview_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractitemview_receivers(void* self, const char* signal);
int32_t q_abstractitemview_qbase_receivers(void* self, const char* signal);
void q_abstractitemview_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractitemview_is_signal_connected(void* self, void* signal);
bool q_abstractitemview_qbase_is_signal_connected(void* self, void* signal);
void q_abstractitemview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractitemview_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractitemview.html#types

typedef enum {
    QABSTRACTITEMVIEW_SELECTIONMODE_NOSELECTION = 0,
    QABSTRACTITEMVIEW_SELECTIONMODE_SINGLESELECTION = 1,
    QABSTRACTITEMVIEW_SELECTIONMODE_MULTISELECTION = 2,
    QABSTRACTITEMVIEW_SELECTIONMODE_EXTENDEDSELECTION = 3,
    QABSTRACTITEMVIEW_SELECTIONMODE_CONTIGUOUSSELECTION = 4
} QAbstractItemView__SelectionMode;

typedef enum {
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTITEMS = 0,
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTROWS = 1,
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTCOLUMNS = 2
} QAbstractItemView__SelectionBehavior;

typedef enum {
    QABSTRACTITEMVIEW_SCROLLHINT_ENSUREVISIBLE = 0,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATTOP = 1,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATBOTTOM = 2,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATCENTER = 3
} QAbstractItemView__ScrollHint;

typedef enum {
    QABSTRACTITEMVIEW_EDITTRIGGER_NOEDITTRIGGERS = 0,
    QABSTRACTITEMVIEW_EDITTRIGGER_CURRENTCHANGED = 1,
    QABSTRACTITEMVIEW_EDITTRIGGER_DOUBLECLICKED = 2,
    QABSTRACTITEMVIEW_EDITTRIGGER_SELECTEDCLICKED = 4,
    QABSTRACTITEMVIEW_EDITTRIGGER_EDITKEYPRESSED = 8,
    QABSTRACTITEMVIEW_EDITTRIGGER_ANYKEYPRESSED = 16,
    QABSTRACTITEMVIEW_EDITTRIGGER_ALLEDITTRIGGERS = 31
} QAbstractItemView__EditTrigger;

typedef enum {
    QABSTRACTITEMVIEW_SCROLLMODE_SCROLLPERITEM = 0,
    QABSTRACTITEMVIEW_SCROLLMODE_SCROLLPERPIXEL = 1
} QAbstractItemView__ScrollMode;

typedef enum {
    QABSTRACTITEMVIEW_DRAGDROPMODE_NODRAGDROP = 0,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DRAGONLY = 1,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DROPONLY = 2,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DRAGDROP = 3,
    QABSTRACTITEMVIEW_DRAGDROPMODE_INTERNALMOVE = 4
} QAbstractItemView__DragDropMode;

typedef enum {
    QABSTRACTITEMVIEW_CURSORACTION_MOVEUP = 0,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEDOWN = 1,
    QABSTRACTITEMVIEW_CURSORACTION_MOVELEFT = 2,
    QABSTRACTITEMVIEW_CURSORACTION_MOVERIGHT = 3,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEHOME = 4,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEEND = 5,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPAGEUP = 6,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPAGEDOWN = 7,
    QABSTRACTITEMVIEW_CURSORACTION_MOVENEXT = 8,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPREVIOUS = 9
} QAbstractItemView__CursorAction;

typedef enum {
    QABSTRACTITEMVIEW_STATE_NOSTATE = 0,
    QABSTRACTITEMVIEW_STATE_DRAGGINGSTATE = 1,
    QABSTRACTITEMVIEW_STATE_DRAGSELECTINGSTATE = 2,
    QABSTRACTITEMVIEW_STATE_EDITINGSTATE = 3,
    QABSTRACTITEMVIEW_STATE_EXPANDINGSTATE = 4,
    QABSTRACTITEMVIEW_STATE_COLLAPSINGSTATE = 5,
    QABSTRACTITEMVIEW_STATE_ANIMATINGSTATE = 6
} QAbstractItemView__State;

typedef enum {
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ONITEM = 0,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ABOVEITEM = 1,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_BELOWITEM = 2,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ONVIEWPORT = 3
} QAbstractItemView__DropIndicatorPosition;

#endif
