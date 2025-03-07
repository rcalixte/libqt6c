#pragma once
#ifndef SRCQT6C_LIBQLINEEDIT_H
#define SRCQT6C_LIBQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcompleter.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmenu.h"
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
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvalidator.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QLineEdit* q_lineedit_new(void* parent);
QLineEdit* q_lineedit_new2();
QLineEdit* q_lineedit_new3(const char* param1);
QLineEdit* q_lineedit_new4(const char* param1, void* parent);
QMetaObject* q_lineedit_meta_object(void* self);
void* q_lineedit_metacast(void* self, const char* param1);
int32_t q_lineedit_metacall(void* self, int64_t param1, int param2, void* param3);
void q_lineedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_lineedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_lineedit_tr(const char* s);
const char* q_lineedit_text(void* self);
const char* q_lineedit_display_text(void* self);
const char* q_lineedit_placeholder_text(void* self);
void q_lineedit_set_placeholder_text(void* self, const char* placeholderText);
int32_t q_lineedit_max_length(void* self);
void q_lineedit_set_max_length(void* self, int maxLength);
void q_lineedit_set_frame(void* self, bool frame);
bool q_lineedit_has_frame(void* self);
void q_lineedit_set_clear_button_enabled(void* self, bool enable);
bool q_lineedit_is_clear_button_enabled(void* self);
int64_t q_lineedit_echo_mode(void* self);
void q_lineedit_set_echo_mode(void* self, int64_t echoMode);
bool q_lineedit_is_read_only(void* self);
void q_lineedit_set_read_only(void* self, bool readOnly);
void q_lineedit_set_validator(void* self, void* validator);
QValidator* q_lineedit_validator(void* self);
void q_lineedit_set_completer(void* self, void* completer);
QCompleter* q_lineedit_completer(void* self);
QSize* q_lineedit_size_hint(void* self);
void q_lineedit_on_size_hint(void* self, QSize* (*slot)());
QSize* q_lineedit_qbase_size_hint(void* self);
QSize* q_lineedit_minimum_size_hint(void* self);
void q_lineedit_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_lineedit_qbase_minimum_size_hint(void* self);
int32_t q_lineedit_cursor_position(void* self);
void q_lineedit_set_cursor_position(void* self, int cursorPosition);
int32_t q_lineedit_cursor_position_at(void* self, void* pos);
void q_lineedit_set_alignment(void* self, int64_t flag);
int64_t q_lineedit_alignment(void* self);
void q_lineedit_cursor_forward(void* self, bool mark);
void q_lineedit_cursor_backward(void* self, bool mark);
void q_lineedit_cursor_word_forward(void* self, bool mark);
void q_lineedit_cursor_word_backward(void* self, bool mark);
void q_lineedit_backspace(void* self);
void q_lineedit_del(void* self);
void q_lineedit_home(void* self, bool mark);
void q_lineedit_end(void* self, bool mark);
bool q_lineedit_is_modified(void* self);
void q_lineedit_set_modified(void* self, bool modified);
void q_lineedit_set_selection(void* self, int param1, int param2);
bool q_lineedit_has_selected_text(void* self);
const char* q_lineedit_selected_text(void* self);
int32_t q_lineedit_selection_start(void* self);
int32_t q_lineedit_selection_end(void* self);
int32_t q_lineedit_selection_length(void* self);
bool q_lineedit_is_undo_available(void* self);
bool q_lineedit_is_redo_available(void* self);
void q_lineedit_set_drag_enabled(void* self, bool b);
bool q_lineedit_drag_enabled(void* self);
void q_lineedit_set_cursor_move_style(void* self, int64_t style);
int64_t q_lineedit_cursor_move_style(void* self);
const char* q_lineedit_input_mask(void* self);
void q_lineedit_set_input_mask(void* self, const char* inputMask);
bool q_lineedit_has_acceptable_input(void* self);
void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom);
void q_lineedit_set_text_margins_with_margins(void* self, void* margins);
QMargins* q_lineedit_text_margins(void* self);
void q_lineedit_add_action(void* self, void* action, int64_t position);
QAction* q_lineedit_add_action2(void* self, void* icon, int64_t position);
void q_lineedit_set_text(void* self, const char* text);
void q_lineedit_clear(void* self);
void q_lineedit_select_all(void* self);
void q_lineedit_undo(void* self);
void q_lineedit_redo(void* self);
void q_lineedit_cut(void* self);
void q_lineedit_copy(void* self);
void q_lineedit_paste(void* self);
void q_lineedit_deselect(void* self);
void q_lineedit_insert(void* self, const char* param1);
QMenu* q_lineedit_create_standard_context_menu(void* self);
void q_lineedit_text_changed(void* self, const char* param1);
void q_lineedit_on_text_changed(void* self, void (*slot)(void*, const char*));
void q_lineedit_text_edited(void* self, const char* param1);
void q_lineedit_on_text_edited(void* self, void (*slot)(void*, const char*));
void q_lineedit_cursor_position_changed(void* self, int param1, int param2);
void q_lineedit_on_cursor_position_changed(void* self, void (*slot)(void*, int, int));
void q_lineedit_return_pressed(void* self);
void q_lineedit_on_return_pressed(void* self, void (*slot)(void*));
void q_lineedit_editing_finished(void* self);
void q_lineedit_on_editing_finished(void* self, void (*slot)(void*));
void q_lineedit_selection_changed(void* self);
void q_lineedit_on_selection_changed(void* self, void (*slot)(void*));
void q_lineedit_input_rejected(void* self);
void q_lineedit_on_input_rejected(void* self, void (*slot)(void*));
void q_lineedit_mouse_press_event(void* self, void* param1);
void q_lineedit_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_mouse_press_event(void* self, void* param1);
void q_lineedit_mouse_move_event(void* self, void* param1);
void q_lineedit_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_mouse_move_event(void* self, void* param1);
void q_lineedit_mouse_release_event(void* self, void* param1);
void q_lineedit_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_mouse_release_event(void* self, void* param1);
void q_lineedit_mouse_double_click_event(void* self, void* param1);
void q_lineedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_mouse_double_click_event(void* self, void* param1);
void q_lineedit_key_press_event(void* self, void* param1);
void q_lineedit_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_key_press_event(void* self, void* param1);
void q_lineedit_key_release_event(void* self, void* param1);
void q_lineedit_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_key_release_event(void* self, void* param1);
void q_lineedit_focus_in_event(void* self, void* param1);
void q_lineedit_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_focus_in_event(void* self, void* param1);
void q_lineedit_focus_out_event(void* self, void* param1);
void q_lineedit_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_focus_out_event(void* self, void* param1);
void q_lineedit_paint_event(void* self, void* param1);
void q_lineedit_on_paint_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_paint_event(void* self, void* param1);
void q_lineedit_drag_enter_event(void* self, void* param1);
void q_lineedit_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_drag_enter_event(void* self, void* param1);
void q_lineedit_drag_move_event(void* self, void* e);
void q_lineedit_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_drag_move_event(void* self, void* e);
void q_lineedit_drag_leave_event(void* self, void* e);
void q_lineedit_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_drag_leave_event(void* self, void* e);
void q_lineedit_drop_event(void* self, void* param1);
void q_lineedit_on_drop_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_drop_event(void* self, void* param1);
void q_lineedit_change_event(void* self, void* param1);
void q_lineedit_on_change_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_change_event(void* self, void* param1);
void q_lineedit_context_menu_event(void* self, void* param1);
void q_lineedit_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_context_menu_event(void* self, void* param1);
void q_lineedit_input_method_event(void* self, void* param1);
void q_lineedit_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_input_method_event(void* self, void* param1);
void q_lineedit_init_style_option(void* self, void* option);
void q_lineedit_on_init_style_option(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_init_style_option(void* self, void* option);
QVariant* q_lineedit_input_method_query(void* self, int64_t param1);
void q_lineedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_lineedit_qbase_input_method_query(void* self, int64_t param1);
QVariant* q_lineedit_input_method_query2(void* self, int64_t property, void* argument);
void q_lineedit_timer_event(void* self, void* param1);
void q_lineedit_on_timer_event(void* self, void (*slot)(void*, void*));
void q_lineedit_qbase_timer_event(void* self, void* param1);
bool q_lineedit_event(void* self, void* param1);
void q_lineedit_on_event(void* self, bool (*slot)(void*, void*));
bool q_lineedit_qbase_event(void* self, void* param1);
QRect* q_lineedit_cursor_rect(void* self);
void q_lineedit_on_cursor_rect(void* self, QRect* (*slot)());
QRect* q_lineedit_qbase_cursor_rect(void* self);
const char* q_lineedit_tr2(const char* s, const char* c);
const char* q_lineedit_tr3(const char* s, const char* c, int n);
void q_lineedit_cursor_forward2(void* self, bool mark, int steps);
void q_lineedit_cursor_backward2(void* self, bool mark, int steps);
uintptr_t q_lineedit_win_id(void* self);
void q_lineedit_create_win_id(void* self);
uintptr_t q_lineedit_internal_win_id(void* self);
uintptr_t q_lineedit_effective_win_id(void* self);
QStyle* q_lineedit_style(void* self);
void q_lineedit_set_style(void* self, void* style);
bool q_lineedit_is_top_level(void* self);
bool q_lineedit_is_window(void* self);
bool q_lineedit_is_modal(void* self);
int64_t q_lineedit_window_modality(void* self);
void q_lineedit_set_window_modality(void* self, int64_t windowModality);
bool q_lineedit_is_enabled(void* self);
bool q_lineedit_is_enabled_to(void* self, void* param1);
void q_lineedit_set_enabled(void* self, bool enabled);
void q_lineedit_set_disabled(void* self, bool disabled);
void q_lineedit_set_window_modified(void* self, bool windowModified);
QRect* q_lineedit_frame_geometry(void* self);
QRect* q_lineedit_geometry(void* self);
QRect* q_lineedit_normal_geometry(void* self);
int32_t q_lineedit_x(void* self);
int32_t q_lineedit_y(void* self);
QPoint* q_lineedit_pos(void* self);
QSize* q_lineedit_frame_size(void* self);
QSize* q_lineedit_size(void* self);
int32_t q_lineedit_width(void* self);
int32_t q_lineedit_height(void* self);
QRect* q_lineedit_rect(void* self);
QRect* q_lineedit_children_rect(void* self);
QRegion* q_lineedit_children_region(void* self);
QSize* q_lineedit_minimum_size(void* self);
QSize* q_lineedit_maximum_size(void* self);
int32_t q_lineedit_minimum_width(void* self);
int32_t q_lineedit_minimum_height(void* self);
int32_t q_lineedit_maximum_width(void* self);
int32_t q_lineedit_maximum_height(void* self);
void q_lineedit_set_minimum_size(void* self, void* minimumSize);
void q_lineedit_set_minimum_size2(void* self, int minw, int minh);
void q_lineedit_set_maximum_size(void* self, void* maximumSize);
void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh);
void q_lineedit_set_minimum_width(void* self, int minw);
void q_lineedit_set_minimum_height(void* self, int minh);
void q_lineedit_set_maximum_width(void* self, int maxw);
void q_lineedit_set_maximum_height(void* self, int maxh);
QSize* q_lineedit_size_increment(void* self);
void q_lineedit_set_size_increment(void* self, void* sizeIncrement);
void q_lineedit_set_size_increment2(void* self, int w, int h);
QSize* q_lineedit_base_size(void* self);
void q_lineedit_set_base_size(void* self, void* baseSize);
void q_lineedit_set_base_size2(void* self, int basew, int baseh);
void q_lineedit_set_fixed_size(void* self, void* fixedSize);
void q_lineedit_set_fixed_size2(void* self, int w, int h);
void q_lineedit_set_fixed_width(void* self, int w);
void q_lineedit_set_fixed_height(void* self, int h);
QPointF* q_lineedit_map_to_global(void* self, void* param1);
QPoint* q_lineedit_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_lineedit_map_from_global(void* self, void* param1);
QPoint* q_lineedit_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_lineedit_map_to_parent(void* self, void* param1);
QPoint* q_lineedit_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_lineedit_map_from_parent(void* self, void* param1);
QPoint* q_lineedit_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_lineedit_map_to(void* self, void* param1, void* param2);
QPoint* q_lineedit_map_to2(void* self, void* param1, void* param2);
QPointF* q_lineedit_map_from(void* self, void* param1, void* param2);
QPoint* q_lineedit_map_from2(void* self, void* param1, void* param2);
QWidget* q_lineedit_window(void* self);
QWidget* q_lineedit_native_parent_widget(void* self);
QWidget* q_lineedit_top_level_widget(void* self);
QPalette* q_lineedit_palette(void* self);
void q_lineedit_set_palette(void* self, void* palette);
void q_lineedit_set_background_role(void* self, int64_t backgroundRole);
int64_t q_lineedit_background_role(void* self);
void q_lineedit_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_lineedit_foreground_role(void* self);
QFont* q_lineedit_font(void* self);
void q_lineedit_set_font(void* self, void* font);
QFontMetrics* q_lineedit_font_metrics(void* self);
QFontInfo* q_lineedit_font_info(void* self);
QCursor* q_lineedit_cursor(void* self);
void q_lineedit_set_cursor(void* self, void* cursor);
void q_lineedit_unset_cursor(void* self);
void q_lineedit_set_mouse_tracking(void* self, bool enable);
bool q_lineedit_has_mouse_tracking(void* self);
bool q_lineedit_under_mouse(void* self);
void q_lineedit_set_tablet_tracking(void* self, bool enable);
bool q_lineedit_has_tablet_tracking(void* self);
void q_lineedit_set_mask(void* self, void* mask);
void q_lineedit_set_mask_with_mask(void* self, void* mask);
QRegion* q_lineedit_mask(void* self);
void q_lineedit_clear_mask(void* self);
void q_lineedit_render(void* self, void* target);
void q_lineedit_render_with_painter(void* self, void* painter);
QPixmap* q_lineedit_grab(void* self);
QGraphicsEffect* q_lineedit_graphics_effect(void* self);
void q_lineedit_set_graphics_effect(void* self, void* effect);
void q_lineedit_grab_gesture(void* self, int64_t typeVal);
void q_lineedit_ungrab_gesture(void* self, int64_t typeVal);
void q_lineedit_set_window_title(void* self, const char* windowTitle);
void q_lineedit_set_style_sheet(void* self, const char* styleSheet);
const char* q_lineedit_style_sheet(void* self);
const char* q_lineedit_window_title(void* self);
void q_lineedit_set_window_icon(void* self, void* icon);
QIcon* q_lineedit_window_icon(void* self);
void q_lineedit_set_window_icon_text(void* self, const char* windowIconText);
const char* q_lineedit_window_icon_text(void* self);
void q_lineedit_set_window_role(void* self, const char* windowRole);
const char* q_lineedit_window_role(void* self);
void q_lineedit_set_window_file_path(void* self, const char* filePath);
const char* q_lineedit_window_file_path(void* self);
void q_lineedit_set_window_opacity(void* self, double level);
double q_lineedit_window_opacity(void* self);
bool q_lineedit_is_window_modified(void* self);
void q_lineedit_set_tool_tip(void* self, const char* toolTip);
const char* q_lineedit_tool_tip(void* self);
void q_lineedit_set_tool_tip_duration(void* self, int msec);
int32_t q_lineedit_tool_tip_duration(void* self);
void q_lineedit_set_status_tip(void* self, const char* statusTip);
const char* q_lineedit_status_tip(void* self);
void q_lineedit_set_whats_this(void* self, const char* whatsThis);
const char* q_lineedit_whats_this(void* self);
const char* q_lineedit_accessible_name(void* self);
void q_lineedit_set_accessible_name(void* self, const char* name);
const char* q_lineedit_accessible_description(void* self);
void q_lineedit_set_accessible_description(void* self, const char* description);
void q_lineedit_set_layout_direction(void* self, int64_t direction);
int64_t q_lineedit_layout_direction(void* self);
void q_lineedit_unset_layout_direction(void* self);
void q_lineedit_set_locale(void* self, void* locale);
QLocale* q_lineedit_locale(void* self);
void q_lineedit_unset_locale(void* self);
bool q_lineedit_is_right_to_left(void* self);
bool q_lineedit_is_left_to_right(void* self);
void q_lineedit_set_focus(void* self);
bool q_lineedit_is_active_window(void* self);
void q_lineedit_activate_window(void* self);
void q_lineedit_clear_focus(void* self);
void q_lineedit_set_focus_with_reason(void* self, int64_t reason);
int64_t q_lineedit_focus_policy(void* self);
void q_lineedit_set_focus_policy(void* self, int64_t policy);
bool q_lineedit_has_focus(void* self);
void q_lineedit_set_tab_order(void* param1, void* param2);
void q_lineedit_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_lineedit_focus_proxy(void* self);
int64_t q_lineedit_context_menu_policy(void* self);
void q_lineedit_set_context_menu_policy(void* self, int64_t policy);
void q_lineedit_grab_mouse(void* self);
void q_lineedit_grab_mouse_with_q_cursor(void* self, void* param1);
void q_lineedit_release_mouse(void* self);
void q_lineedit_grab_keyboard(void* self);
void q_lineedit_release_keyboard(void* self);
int32_t q_lineedit_grab_shortcut(void* self, void* key);
void q_lineedit_release_shortcut(void* self, int id);
void q_lineedit_set_shortcut_enabled(void* self, int id);
void q_lineedit_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_lineedit_mouse_grabber();
QWidget* q_lineedit_keyboard_grabber();
bool q_lineedit_updates_enabled(void* self);
void q_lineedit_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(void* self);
void q_lineedit_update(void* self);
void q_lineedit_repaint(void* self);
void q_lineedit_update2(void* self, int x, int y, int w, int h);
void q_lineedit_update_with_q_rect(void* self, void* param1);
void q_lineedit_update_with_q_region(void* self, void* param1);
void q_lineedit_repaint2(void* self, int x, int y, int w, int h);
void q_lineedit_repaint_with_q_rect(void* self, void* param1);
void q_lineedit_repaint_with_q_region(void* self, void* param1);
void q_lineedit_set_hidden(void* self, bool hidden);
void q_lineedit_show(void* self);
void q_lineedit_hide(void* self);
void q_lineedit_show_minimized(void* self);
void q_lineedit_show_maximized(void* self);
void q_lineedit_show_full_screen(void* self);
void q_lineedit_show_normal(void* self);
bool q_lineedit_close(void* self);
void q_lineedit_raise(void* self);
void q_lineedit_lower(void* self);
void q_lineedit_stack_under(void* self, void* param1);
void q_lineedit_move(void* self, int x, int y);
void q_lineedit_move_with_q_point(void* self, void* param1);
void q_lineedit_resize(void* self, int w, int h);
void q_lineedit_resize_with_q_size(void* self, void* param1);
void q_lineedit_set_geometry(void* self, int x, int y, int w, int h);
void q_lineedit_set_geometry_with_geometry(void* self, void* geometry);
char* q_lineedit_save_geometry(void* self);
bool q_lineedit_restore_geometry(void* self, const char* geometry);
void q_lineedit_adjust_size(void* self);
bool q_lineedit_is_visible(void* self);
bool q_lineedit_is_visible_to(void* self, void* param1);
bool q_lineedit_is_hidden(void* self);
bool q_lineedit_is_minimized(void* self);
bool q_lineedit_is_maximized(void* self);
bool q_lineedit_is_full_screen(void* self);
int64_t q_lineedit_window_state(void* self);
void q_lineedit_set_window_state(void* self, int64_t state);
void q_lineedit_override_window_state(void* self, int64_t state);
QSizePolicy* q_lineedit_size_policy(void* self);
void q_lineedit_set_size_policy(void* self, void* sizePolicy);
void q_lineedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_lineedit_visible_region(void* self);
void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_lineedit_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_lineedit_contents_margins(void* self);
QRect* q_lineedit_contents_rect(void* self);
QLayout* q_lineedit_layout(void* self);
void q_lineedit_set_layout(void* self, void* layout);
void q_lineedit_update_geometry(void* self);
void q_lineedit_set_parent(void* self, void* parent);
void q_lineedit_set_parent2(void* self, void* parent, int64_t f);
void q_lineedit_scroll(void* self, int dx, int dy);
void q_lineedit_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_lineedit_focus_widget(void* self);
QWidget* q_lineedit_next_in_focus_chain(void* self);
QWidget* q_lineedit_previous_in_focus_chain(void* self);
bool q_lineedit_accept_drops(void* self);
void q_lineedit_set_accept_drops(void* self, bool on);
void q_lineedit_add_actions(void* self, void* actions[]);
void q_lineedit_insert_actions(void* self, void* before, void* actions[]);
void q_lineedit_insert_action(void* self, void* before, void* action);
void q_lineedit_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_lineedit_actions(void* self);
QAction* q_lineedit_add_action_with_text(void* self, const char* text);
QAction* q_lineedit_add_action3(void* self, const char* text, void* shortcut);
QAction* q_lineedit_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_lineedit_parent_widget(void* self);
void q_lineedit_set_window_flags(void* self, int64_t typeVal);
int64_t q_lineedit_window_flags(void* self);
void q_lineedit_set_window_flag(void* self, int64_t param1);
void q_lineedit_override_window_flags(void* self, int64_t typeVal);
int64_t q_lineedit_window_type(void* self);
QWidget* q_lineedit_find(uint64_t param1);
QWidget* q_lineedit_child_at(void* self, int x, int y);
QWidget* q_lineedit_child_at_with_q_point(void* self, void* p);
void q_lineedit_set_attribute(void* self, int64_t param1);
bool q_lineedit_test_attribute(void* self, int64_t param1);
void q_lineedit_ensure_polished(void* self);
bool q_lineedit_is_ancestor_of(void* self, void* child);
bool q_lineedit_auto_fill_background(void* self);
void q_lineedit_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_lineedit_backing_store(void* self);
QWindow* q_lineedit_window_handle(void* self);
QScreen* q_lineedit_screen(void* self);
void q_lineedit_set_screen(void* self, void* screen);
QWidget* q_lineedit_create_window_container(void* window);
void q_lineedit_window_title_changed(void* self, const char* title);
void q_lineedit_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_lineedit_window_icon_changed(void* self, void* icon);
void q_lineedit_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_lineedit_window_icon_text_changed(void* self, const char* iconText);
void q_lineedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_lineedit_custom_context_menu_requested(void* self, void* pos);
void q_lineedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_lineedit_input_method_hints(void* self);
void q_lineedit_set_input_method_hints(void* self, int64_t hints);
void q_lineedit_render2(void* self, void* target, void* targetOffset);
void q_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_lineedit_render22(void* self, void* painter, void* targetOffset);
void q_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_lineedit_grab1(void* self, void* rectangle);
void q_lineedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_lineedit_grab_shortcut2(void* self, void* key, int64_t context);
void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable);
void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_lineedit_set_window_flag2(void* self, int64_t param1, bool on);
void q_lineedit_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_lineedit_create_window_container2(void* window, void* parent);
QWidget* q_lineedit_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_lineedit_object_name(void* self);
void q_lineedit_set_object_name(void* self, const char* name);
bool q_lineedit_is_widget_type(void* self);
bool q_lineedit_is_window_type(void* self);
bool q_lineedit_is_quick_item_type(void* self);
bool q_lineedit_signals_blocked(void* self);
bool q_lineedit_block_signals(void* self, bool b);
QThread* q_lineedit_thread(void* self);
void q_lineedit_move_to_thread(void* self, void* thread);
int32_t q_lineedit_start_timer(void* self, int interval);
void q_lineedit_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_lineedit_children(void* self);
void q_lineedit_install_event_filter(void* self, void* filterObj);
void q_lineedit_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_lineedit_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_lineedit_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_lineedit_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_lineedit_disconnect_with_q_meta_object_connection(void* param1);
void q_lineedit_dump_object_tree(void* self);
void q_lineedit_dump_object_info(void* self);
bool q_lineedit_set_property(void* self, const char* name, void* value);
QVariant* q_lineedit_property(void* self, const char* name);
const char** q_lineedit_dynamic_property_names(void* self);
QBindingStorage* q_lineedit_binding_storage(void* self);
QBindingStorage* q_lineedit_binding_storage2(void* self);
void q_lineedit_destroyed(void* self);
void q_lineedit_on_destroyed(void* self, void (*slot)(void*));
QObject* q_lineedit_parent(void* self);
bool q_lineedit_inherits(void* self, const char* classname);
void q_lineedit_delete_later(void* self);
int32_t q_lineedit_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_lineedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_lineedit_destroyed1(void* self, void* param1);
void q_lineedit_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_lineedit_painting_active(void* self);
int32_t q_lineedit_width_m_m(void* self);
int32_t q_lineedit_height_m_m(void* self);
int32_t q_lineedit_logical_dpi_x(void* self);
int32_t q_lineedit_logical_dpi_y(void* self);
int32_t q_lineedit_physical_dpi_x(void* self);
int32_t q_lineedit_physical_dpi_y(void* self);
double q_lineedit_device_pixel_ratio(void* self);
double q_lineedit_device_pixel_ratio_f(void* self);
int32_t q_lineedit_color_count(void* self);
int32_t q_lineedit_depth(void* self);
double q_lineedit_device_pixel_ratio_f_scale();
int32_t q_lineedit_dev_type(void* self);
int32_t q_lineedit_qbase_dev_type(void* self);
void q_lineedit_on_dev_type(void* self, int32_t (*slot)());
void q_lineedit_set_visible(void* self, bool visible);
void q_lineedit_qbase_set_visible(void* self, bool visible);
void q_lineedit_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_lineedit_height_for_width(void* self, int param1);
int32_t q_lineedit_qbase_height_for_width(void* self, int param1);
void q_lineedit_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_lineedit_has_height_for_width(void* self);
bool q_lineedit_qbase_has_height_for_width(void* self);
void q_lineedit_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_lineedit_paint_engine(void* self);
QPaintEngine* q_lineedit_qbase_paint_engine(void* self);
void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_lineedit_wheel_event(void* self, void* event);
void q_lineedit_qbase_wheel_event(void* self, void* event);
void q_lineedit_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_lineedit_enter_event(void* self, void* event);
void q_lineedit_qbase_enter_event(void* self, void* event);
void q_lineedit_on_enter_event(void* self, void (*slot)(void*, void*));
void q_lineedit_leave_event(void* self, void* event);
void q_lineedit_qbase_leave_event(void* self, void* event);
void q_lineedit_on_leave_event(void* self, void (*slot)(void*, void*));
void q_lineedit_move_event(void* self, void* event);
void q_lineedit_qbase_move_event(void* self, void* event);
void q_lineedit_on_move_event(void* self, void (*slot)(void*, void*));
void q_lineedit_resize_event(void* self, void* event);
void q_lineedit_qbase_resize_event(void* self, void* event);
void q_lineedit_on_resize_event(void* self, void (*slot)(void*, void*));
void q_lineedit_close_event(void* self, void* event);
void q_lineedit_qbase_close_event(void* self, void* event);
void q_lineedit_on_close_event(void* self, void (*slot)(void*, void*));
void q_lineedit_tablet_event(void* self, void* event);
void q_lineedit_qbase_tablet_event(void* self, void* event);
void q_lineedit_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_lineedit_action_event(void* self, void* event);
void q_lineedit_qbase_action_event(void* self, void* event);
void q_lineedit_on_action_event(void* self, void (*slot)(void*, void*));
void q_lineedit_show_event(void* self, void* event);
void q_lineedit_qbase_show_event(void* self, void* event);
void q_lineedit_on_show_event(void* self, void (*slot)(void*, void*));
void q_lineedit_hide_event(void* self, void* event);
void q_lineedit_qbase_hide_event(void* self, void* event);
void q_lineedit_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_lineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_lineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_lineedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_lineedit_metric(void* self, int64_t param1);
int32_t q_lineedit_qbase_metric(void* self, int64_t param1);
void q_lineedit_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_lineedit_init_painter(void* self, void* painter);
void q_lineedit_qbase_init_painter(void* self, void* painter);
void q_lineedit_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_lineedit_redirected(void* self, void* offset);
QPaintDevice* q_lineedit_qbase_redirected(void* self, void* offset);
void q_lineedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_lineedit_shared_painter(void* self);
QPainter* q_lineedit_qbase_shared_painter(void* self);
void q_lineedit_on_shared_painter(void* self, QPainter* (*slot)());
bool q_lineedit_focus_next_prev_child(void* self, bool next);
bool q_lineedit_qbase_focus_next_prev_child(void* self, bool next);
void q_lineedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_lineedit_event_filter(void* self, void* watched, void* event);
bool q_lineedit_qbase_event_filter(void* self, void* watched, void* event);
void q_lineedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_lineedit_child_event(void* self, void* event);
void q_lineedit_qbase_child_event(void* self, void* event);
void q_lineedit_on_child_event(void* self, void (*slot)(void*, void*));
void q_lineedit_custom_event(void* self, void* event);
void q_lineedit_qbase_custom_event(void* self, void* event);
void q_lineedit_on_custom_event(void* self, void (*slot)(void*, void*));
void q_lineedit_connect_notify(void* self, void* signal);
void q_lineedit_qbase_connect_notify(void* self, void* signal);
void q_lineedit_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_lineedit_disconnect_notify(void* self, void* signal);
void q_lineedit_qbase_disconnect_notify(void* self, void* signal);
void q_lineedit_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_lineedit_update_micro_focus(void* self);
void q_lineedit_qbase_update_micro_focus(void* self);
void q_lineedit_on_update_micro_focus(void* self, void (*slot)());
void q_lineedit_create(void* self);
void q_lineedit_qbase_create(void* self);
void q_lineedit_on_create(void* self, void (*slot)());
void q_lineedit_destroy(void* self);
void q_lineedit_qbase_destroy(void* self);
void q_lineedit_on_destroy(void* self, void (*slot)());
bool q_lineedit_focus_next_child(void* self);
bool q_lineedit_qbase_focus_next_child(void* self);
void q_lineedit_on_focus_next_child(void* self, bool (*slot)());
bool q_lineedit_focus_previous_child(void* self);
bool q_lineedit_qbase_focus_previous_child(void* self);
void q_lineedit_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_lineedit_sender(void* self);
QObject* q_lineedit_qbase_sender(void* self);
void q_lineedit_on_sender(void* self, QObject* (*slot)());
int32_t q_lineedit_sender_signal_index(void* self);
int32_t q_lineedit_qbase_sender_signal_index(void* self);
void q_lineedit_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_lineedit_receivers(void* self, const char* signal);
int32_t q_lineedit_qbase_receivers(void* self, const char* signal);
void q_lineedit_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_lineedit_is_signal_connected(void* self, void* signal);
bool q_lineedit_qbase_is_signal_connected(void* self, void* signal);
void q_lineedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_lineedit_delete(void* self);

/// https://doc.qt.io/qt-6/qlineedit.html#types

typedef enum {
    QLINEEDIT_ACTIONPOSITION_LEADINGPOSITION = 0,
    QLINEEDIT_ACTIONPOSITION_TRAILINGPOSITION = 1
} QLineEdit__ActionPosition;

typedef enum {
    QLINEEDIT_ECHOMODE_NORMAL = 0,
    QLINEEDIT_ECHOMODE_NOECHO = 1,
    QLINEEDIT_ECHOMODE_PASSWORD = 2,
    QLINEEDIT_ECHOMODE_PASSWORDECHOONEDIT = 3
} QLineEdit__EchoMode;

#endif
