#pragma once
#ifndef SRCQT6C_LIBQABSTRACTSPINBOX_H
#define SRCQT6C_LIBQABSTRACTSPINBOX_H

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
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlineedit.h"
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
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QAbstractSpinBox* q_abstractspinbox_new(void* parent);
QAbstractSpinBox* q_abstractspinbox_new2();
QMetaObject* q_abstractspinbox_meta_object(void* self);
void* q_abstractspinbox_metacast(void* self, const char* param1);
int32_t q_abstractspinbox_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractspinbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractspinbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractspinbox_tr(const char* s);
int64_t q_abstractspinbox_button_symbols(void* self);
void q_abstractspinbox_set_button_symbols(void* self, int64_t bs);
void q_abstractspinbox_set_correction_mode(void* self, int64_t cm);
int64_t q_abstractspinbox_correction_mode(void* self);
bool q_abstractspinbox_has_acceptable_input(void* self);
const char* q_abstractspinbox_text(void* self);
const char* q_abstractspinbox_special_value_text(void* self);
void q_abstractspinbox_set_special_value_text(void* self, const char* txt);
bool q_abstractspinbox_wrapping(void* self);
void q_abstractspinbox_set_wrapping(void* self, bool w);
void q_abstractspinbox_set_read_only(void* self, bool r);
bool q_abstractspinbox_is_read_only(void* self);
void q_abstractspinbox_set_keyboard_tracking(void* self, bool kt);
bool q_abstractspinbox_keyboard_tracking(void* self);
void q_abstractspinbox_set_alignment(void* self, int64_t flag);
int64_t q_abstractspinbox_alignment(void* self);
void q_abstractspinbox_set_frame(void* self, bool frame);
bool q_abstractspinbox_has_frame(void* self);
void q_abstractspinbox_set_accelerated(void* self, bool on);
bool q_abstractspinbox_is_accelerated(void* self);
void q_abstractspinbox_set_group_separator_shown(void* self, bool shown);
bool q_abstractspinbox_is_group_separator_shown(void* self);
QSize* q_abstractspinbox_size_hint(void* self);
void q_abstractspinbox_on_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractspinbox_qbase_size_hint(void* self);
QSize* q_abstractspinbox_minimum_size_hint(void* self);
void q_abstractspinbox_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractspinbox_qbase_minimum_size_hint(void* self);
void q_abstractspinbox_interpret_text(void* self);
bool q_abstractspinbox_event(void* self, void* event);
void q_abstractspinbox_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractspinbox_qbase_event(void* self, void* event);
QVariant* q_abstractspinbox_input_method_query(void* self, int64_t param1);
void q_abstractspinbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_abstractspinbox_qbase_input_method_query(void* self, int64_t param1);
int64_t q_abstractspinbox_validate(void* self, const char* input, int* pos);
void q_abstractspinbox_on_validate(void* self, int64_t (*slot)(void*, const char*, int*));
int64_t q_abstractspinbox_qbase_validate(void* self, const char* input, int* pos);
void q_abstractspinbox_fixup(void* self, const char* input);
void q_abstractspinbox_on_fixup(void* self, void (*slot)(void*, const char*));
void q_abstractspinbox_qbase_fixup(void* self, const char* input);
void q_abstractspinbox_step_by(void* self, int steps);
void q_abstractspinbox_on_step_by(void* self, void (*slot)(void*, int));
void q_abstractspinbox_qbase_step_by(void* self, int steps);
void q_abstractspinbox_step_up(void* self);
void q_abstractspinbox_step_down(void* self);
void q_abstractspinbox_select_all(void* self);
void q_abstractspinbox_clear(void* self);
void q_abstractspinbox_on_clear(void* self, void (*slot)());
void q_abstractspinbox_qbase_clear(void* self);
void q_abstractspinbox_resize_event(void* self, void* event);
void q_abstractspinbox_on_resize_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_resize_event(void* self, void* event);
void q_abstractspinbox_key_press_event(void* self, void* event);
void q_abstractspinbox_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_key_press_event(void* self, void* event);
void q_abstractspinbox_key_release_event(void* self, void* event);
void q_abstractspinbox_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_key_release_event(void* self, void* event);
void q_abstractspinbox_wheel_event(void* self, void* event);
void q_abstractspinbox_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_wheel_event(void* self, void* event);
void q_abstractspinbox_focus_in_event(void* self, void* event);
void q_abstractspinbox_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_focus_in_event(void* self, void* event);
void q_abstractspinbox_focus_out_event(void* self, void* event);
void q_abstractspinbox_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_focus_out_event(void* self, void* event);
void q_abstractspinbox_context_menu_event(void* self, void* event);
void q_abstractspinbox_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_context_menu_event(void* self, void* event);
void q_abstractspinbox_change_event(void* self, void* event);
void q_abstractspinbox_on_change_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_change_event(void* self, void* event);
void q_abstractspinbox_close_event(void* self, void* event);
void q_abstractspinbox_on_close_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_close_event(void* self, void* event);
void q_abstractspinbox_hide_event(void* self, void* event);
void q_abstractspinbox_on_hide_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_hide_event(void* self, void* event);
void q_abstractspinbox_mouse_press_event(void* self, void* event);
void q_abstractspinbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_mouse_press_event(void* self, void* event);
void q_abstractspinbox_mouse_release_event(void* self, void* event);
void q_abstractspinbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_mouse_release_event(void* self, void* event);
void q_abstractspinbox_mouse_move_event(void* self, void* event);
void q_abstractspinbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_mouse_move_event(void* self, void* event);
void q_abstractspinbox_timer_event(void* self, void* event);
void q_abstractspinbox_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_timer_event(void* self, void* event);
void q_abstractspinbox_paint_event(void* self, void* event);
void q_abstractspinbox_on_paint_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_paint_event(void* self, void* event);
void q_abstractspinbox_show_event(void* self, void* event);
void q_abstractspinbox_on_show_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_show_event(void* self, void* event);
void q_abstractspinbox_init_style_option(void* self, void* option);
void q_abstractspinbox_on_init_style_option(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_init_style_option(void* self, void* option);
QLineEdit* q_abstractspinbox_line_edit(void* self);
void q_abstractspinbox_on_line_edit(void* self, QLineEdit* (*slot)());
QLineEdit* q_abstractspinbox_qbase_line_edit(void* self);
void q_abstractspinbox_set_line_edit(void* self, void* edit);
void q_abstractspinbox_on_set_line_edit(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_qbase_set_line_edit(void* self, void* edit);
int64_t q_abstractspinbox_step_enabled(void* self);
void q_abstractspinbox_on_step_enabled(void* self, int64_t (*slot)());
int64_t q_abstractspinbox_qbase_step_enabled(void* self);
void q_abstractspinbox_editing_finished(void* self);
void q_abstractspinbox_on_editing_finished(void* self, void (*slot)(void*));
const char* q_abstractspinbox_tr2(const char* s, const char* c);
const char* q_abstractspinbox_tr3(const char* s, const char* c, int n);
uintptr_t q_abstractspinbox_win_id(void* self);
void q_abstractspinbox_create_win_id(void* self);
uintptr_t q_abstractspinbox_internal_win_id(void* self);
uintptr_t q_abstractspinbox_effective_win_id(void* self);
QStyle* q_abstractspinbox_style(void* self);
void q_abstractspinbox_set_style(void* self, void* style);
bool q_abstractspinbox_is_top_level(void* self);
bool q_abstractspinbox_is_window(void* self);
bool q_abstractspinbox_is_modal(void* self);
int64_t q_abstractspinbox_window_modality(void* self);
void q_abstractspinbox_set_window_modality(void* self, int64_t windowModality);
bool q_abstractspinbox_is_enabled(void* self);
bool q_abstractspinbox_is_enabled_to(void* self, void* param1);
void q_abstractspinbox_set_enabled(void* self, bool enabled);
void q_abstractspinbox_set_disabled(void* self, bool disabled);
void q_abstractspinbox_set_window_modified(void* self, bool windowModified);
QRect* q_abstractspinbox_frame_geometry(void* self);
QRect* q_abstractspinbox_geometry(void* self);
QRect* q_abstractspinbox_normal_geometry(void* self);
int32_t q_abstractspinbox_x(void* self);
int32_t q_abstractspinbox_y(void* self);
QPoint* q_abstractspinbox_pos(void* self);
QSize* q_abstractspinbox_frame_size(void* self);
QSize* q_abstractspinbox_size(void* self);
int32_t q_abstractspinbox_width(void* self);
int32_t q_abstractspinbox_height(void* self);
QRect* q_abstractspinbox_rect(void* self);
QRect* q_abstractspinbox_children_rect(void* self);
QRegion* q_abstractspinbox_children_region(void* self);
QSize* q_abstractspinbox_minimum_size(void* self);
QSize* q_abstractspinbox_maximum_size(void* self);
int32_t q_abstractspinbox_minimum_width(void* self);
int32_t q_abstractspinbox_minimum_height(void* self);
int32_t q_abstractspinbox_maximum_width(void* self);
int32_t q_abstractspinbox_maximum_height(void* self);
void q_abstractspinbox_set_minimum_size(void* self, void* minimumSize);
void q_abstractspinbox_set_minimum_size2(void* self, int minw, int minh);
void q_abstractspinbox_set_maximum_size(void* self, void* maximumSize);
void q_abstractspinbox_set_maximum_size2(void* self, int maxw, int maxh);
void q_abstractspinbox_set_minimum_width(void* self, int minw);
void q_abstractspinbox_set_minimum_height(void* self, int minh);
void q_abstractspinbox_set_maximum_width(void* self, int maxw);
void q_abstractspinbox_set_maximum_height(void* self, int maxh);
QSize* q_abstractspinbox_size_increment(void* self);
void q_abstractspinbox_set_size_increment(void* self, void* sizeIncrement);
void q_abstractspinbox_set_size_increment2(void* self, int w, int h);
QSize* q_abstractspinbox_base_size(void* self);
void q_abstractspinbox_set_base_size(void* self, void* baseSize);
void q_abstractspinbox_set_base_size2(void* self, int basew, int baseh);
void q_abstractspinbox_set_fixed_size(void* self, void* fixedSize);
void q_abstractspinbox_set_fixed_size2(void* self, int w, int h);
void q_abstractspinbox_set_fixed_width(void* self, int w);
void q_abstractspinbox_set_fixed_height(void* self, int h);
QPointF* q_abstractspinbox_map_to_global(void* self, void* param1);
QPoint* q_abstractspinbox_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_abstractspinbox_map_from_global(void* self, void* param1);
QPoint* q_abstractspinbox_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_abstractspinbox_map_to_parent(void* self, void* param1);
QPoint* q_abstractspinbox_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractspinbox_map_from_parent(void* self, void* param1);
QPoint* q_abstractspinbox_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractspinbox_map_to(void* self, void* param1, void* param2);
QPoint* q_abstractspinbox_map_to2(void* self, void* param1, void* param2);
QPointF* q_abstractspinbox_map_from(void* self, void* param1, void* param2);
QPoint* q_abstractspinbox_map_from2(void* self, void* param1, void* param2);
QWidget* q_abstractspinbox_window(void* self);
QWidget* q_abstractspinbox_native_parent_widget(void* self);
QWidget* q_abstractspinbox_top_level_widget(void* self);
QPalette* q_abstractspinbox_palette(void* self);
void q_abstractspinbox_set_palette(void* self, void* palette);
void q_abstractspinbox_set_background_role(void* self, int64_t backgroundRole);
int64_t q_abstractspinbox_background_role(void* self);
void q_abstractspinbox_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_abstractspinbox_foreground_role(void* self);
QFont* q_abstractspinbox_font(void* self);
void q_abstractspinbox_set_font(void* self, void* font);
QFontMetrics* q_abstractspinbox_font_metrics(void* self);
QFontInfo* q_abstractspinbox_font_info(void* self);
QCursor* q_abstractspinbox_cursor(void* self);
void q_abstractspinbox_set_cursor(void* self, void* cursor);
void q_abstractspinbox_unset_cursor(void* self);
void q_abstractspinbox_set_mouse_tracking(void* self, bool enable);
bool q_abstractspinbox_has_mouse_tracking(void* self);
bool q_abstractspinbox_under_mouse(void* self);
void q_abstractspinbox_set_tablet_tracking(void* self, bool enable);
bool q_abstractspinbox_has_tablet_tracking(void* self);
void q_abstractspinbox_set_mask(void* self, void* mask);
void q_abstractspinbox_set_mask_with_mask(void* self, void* mask);
QRegion* q_abstractspinbox_mask(void* self);
void q_abstractspinbox_clear_mask(void* self);
void q_abstractspinbox_render(void* self, void* target);
void q_abstractspinbox_render_with_painter(void* self, void* painter);
QPixmap* q_abstractspinbox_grab(void* self);
QGraphicsEffect* q_abstractspinbox_graphics_effect(void* self);
void q_abstractspinbox_set_graphics_effect(void* self, void* effect);
void q_abstractspinbox_grab_gesture(void* self, int64_t typeVal);
void q_abstractspinbox_ungrab_gesture(void* self, int64_t typeVal);
void q_abstractspinbox_set_window_title(void* self, const char* windowTitle);
void q_abstractspinbox_set_style_sheet(void* self, const char* styleSheet);
const char* q_abstractspinbox_style_sheet(void* self);
const char* q_abstractspinbox_window_title(void* self);
void q_abstractspinbox_set_window_icon(void* self, void* icon);
QIcon* q_abstractspinbox_window_icon(void* self);
void q_abstractspinbox_set_window_icon_text(void* self, const char* windowIconText);
const char* q_abstractspinbox_window_icon_text(void* self);
void q_abstractspinbox_set_window_role(void* self, const char* windowRole);
const char* q_abstractspinbox_window_role(void* self);
void q_abstractspinbox_set_window_file_path(void* self, const char* filePath);
const char* q_abstractspinbox_window_file_path(void* self);
void q_abstractspinbox_set_window_opacity(void* self, double level);
double q_abstractspinbox_window_opacity(void* self);
bool q_abstractspinbox_is_window_modified(void* self);
void q_abstractspinbox_set_tool_tip(void* self, const char* toolTip);
const char* q_abstractspinbox_tool_tip(void* self);
void q_abstractspinbox_set_tool_tip_duration(void* self, int msec);
int32_t q_abstractspinbox_tool_tip_duration(void* self);
void q_abstractspinbox_set_status_tip(void* self, const char* statusTip);
const char* q_abstractspinbox_status_tip(void* self);
void q_abstractspinbox_set_whats_this(void* self, const char* whatsThis);
const char* q_abstractspinbox_whats_this(void* self);
const char* q_abstractspinbox_accessible_name(void* self);
void q_abstractspinbox_set_accessible_name(void* self, const char* name);
const char* q_abstractspinbox_accessible_description(void* self);
void q_abstractspinbox_set_accessible_description(void* self, const char* description);
void q_abstractspinbox_set_layout_direction(void* self, int64_t direction);
int64_t q_abstractspinbox_layout_direction(void* self);
void q_abstractspinbox_unset_layout_direction(void* self);
void q_abstractspinbox_set_locale(void* self, void* locale);
QLocale* q_abstractspinbox_locale(void* self);
void q_abstractspinbox_unset_locale(void* self);
bool q_abstractspinbox_is_right_to_left(void* self);
bool q_abstractspinbox_is_left_to_right(void* self);
void q_abstractspinbox_set_focus(void* self);
bool q_abstractspinbox_is_active_window(void* self);
void q_abstractspinbox_activate_window(void* self);
void q_abstractspinbox_clear_focus(void* self);
void q_abstractspinbox_set_focus_with_reason(void* self, int64_t reason);
int64_t q_abstractspinbox_focus_policy(void* self);
void q_abstractspinbox_set_focus_policy(void* self, int64_t policy);
bool q_abstractspinbox_has_focus(void* self);
void q_abstractspinbox_set_tab_order(void* param1, void* param2);
void q_abstractspinbox_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_abstractspinbox_focus_proxy(void* self);
int64_t q_abstractspinbox_context_menu_policy(void* self);
void q_abstractspinbox_set_context_menu_policy(void* self, int64_t policy);
void q_abstractspinbox_grab_mouse(void* self);
void q_abstractspinbox_grab_mouse_with_q_cursor(void* self, void* param1);
void q_abstractspinbox_release_mouse(void* self);
void q_abstractspinbox_grab_keyboard(void* self);
void q_abstractspinbox_release_keyboard(void* self);
int32_t q_abstractspinbox_grab_shortcut(void* self, void* key);
void q_abstractspinbox_release_shortcut(void* self, int id);
void q_abstractspinbox_set_shortcut_enabled(void* self, int id);
void q_abstractspinbox_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_abstractspinbox_mouse_grabber();
QWidget* q_abstractspinbox_keyboard_grabber();
bool q_abstractspinbox_updates_enabled(void* self);
void q_abstractspinbox_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_abstractspinbox_graphics_proxy_widget(void* self);
void q_abstractspinbox_update(void* self);
void q_abstractspinbox_repaint(void* self);
void q_abstractspinbox_update2(void* self, int x, int y, int w, int h);
void q_abstractspinbox_update_with_q_rect(void* self, void* param1);
void q_abstractspinbox_update_with_q_region(void* self, void* param1);
void q_abstractspinbox_repaint2(void* self, int x, int y, int w, int h);
void q_abstractspinbox_repaint_with_q_rect(void* self, void* param1);
void q_abstractspinbox_repaint_with_q_region(void* self, void* param1);
void q_abstractspinbox_set_hidden(void* self, bool hidden);
void q_abstractspinbox_show(void* self);
void q_abstractspinbox_hide(void* self);
void q_abstractspinbox_show_minimized(void* self);
void q_abstractspinbox_show_maximized(void* self);
void q_abstractspinbox_show_full_screen(void* self);
void q_abstractspinbox_show_normal(void* self);
bool q_abstractspinbox_close(void* self);
void q_abstractspinbox_raise(void* self);
void q_abstractspinbox_lower(void* self);
void q_abstractspinbox_stack_under(void* self, void* param1);
void q_abstractspinbox_move(void* self, int x, int y);
void q_abstractspinbox_move_with_q_point(void* self, void* param1);
void q_abstractspinbox_resize(void* self, int w, int h);
void q_abstractspinbox_resize_with_q_size(void* self, void* param1);
void q_abstractspinbox_set_geometry(void* self, int x, int y, int w, int h);
void q_abstractspinbox_set_geometry_with_geometry(void* self, void* geometry);
char* q_abstractspinbox_save_geometry(void* self);
bool q_abstractspinbox_restore_geometry(void* self, const char* geometry);
void q_abstractspinbox_adjust_size(void* self);
bool q_abstractspinbox_is_visible(void* self);
bool q_abstractspinbox_is_visible_to(void* self, void* param1);
bool q_abstractspinbox_is_hidden(void* self);
bool q_abstractspinbox_is_minimized(void* self);
bool q_abstractspinbox_is_maximized(void* self);
bool q_abstractspinbox_is_full_screen(void* self);
int64_t q_abstractspinbox_window_state(void* self);
void q_abstractspinbox_set_window_state(void* self, int64_t state);
void q_abstractspinbox_override_window_state(void* self, int64_t state);
QSizePolicy* q_abstractspinbox_size_policy(void* self);
void q_abstractspinbox_set_size_policy(void* self, void* sizePolicy);
void q_abstractspinbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_abstractspinbox_visible_region(void* self);
void q_abstractspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_abstractspinbox_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_abstractspinbox_contents_margins(void* self);
QRect* q_abstractspinbox_contents_rect(void* self);
QLayout* q_abstractspinbox_layout(void* self);
void q_abstractspinbox_set_layout(void* self, void* layout);
void q_abstractspinbox_update_geometry(void* self);
void q_abstractspinbox_set_parent(void* self, void* parent);
void q_abstractspinbox_set_parent2(void* self, void* parent, int64_t f);
void q_abstractspinbox_scroll(void* self, int dx, int dy);
void q_abstractspinbox_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_abstractspinbox_focus_widget(void* self);
QWidget* q_abstractspinbox_next_in_focus_chain(void* self);
QWidget* q_abstractspinbox_previous_in_focus_chain(void* self);
bool q_abstractspinbox_accept_drops(void* self);
void q_abstractspinbox_set_accept_drops(void* self, bool on);
void q_abstractspinbox_add_action(void* self, void* action);
void q_abstractspinbox_add_actions(void* self, void* actions[]);
void q_abstractspinbox_insert_actions(void* self, void* before, void* actions[]);
void q_abstractspinbox_insert_action(void* self, void* before, void* action);
void q_abstractspinbox_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_abstractspinbox_actions(void* self);
QAction* q_abstractspinbox_add_action_with_text(void* self, const char* text);
QAction* q_abstractspinbox_add_action2(void* self, void* icon, const char* text);
QAction* q_abstractspinbox_add_action3(void* self, const char* text, void* shortcut);
QAction* q_abstractspinbox_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_abstractspinbox_parent_widget(void* self);
void q_abstractspinbox_set_window_flags(void* self, int64_t typeVal);
int64_t q_abstractspinbox_window_flags(void* self);
void q_abstractspinbox_set_window_flag(void* self, int64_t param1);
void q_abstractspinbox_override_window_flags(void* self, int64_t typeVal);
int64_t q_abstractspinbox_window_type(void* self);
QWidget* q_abstractspinbox_find(uint64_t param1);
QWidget* q_abstractspinbox_child_at(void* self, int x, int y);
QWidget* q_abstractspinbox_child_at_with_q_point(void* self, void* p);
void q_abstractspinbox_set_attribute(void* self, int64_t param1);
bool q_abstractspinbox_test_attribute(void* self, int64_t param1);
void q_abstractspinbox_ensure_polished(void* self);
bool q_abstractspinbox_is_ancestor_of(void* self, void* child);
bool q_abstractspinbox_auto_fill_background(void* self);
void q_abstractspinbox_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_abstractspinbox_backing_store(void* self);
QWindow* q_abstractspinbox_window_handle(void* self);
QScreen* q_abstractspinbox_screen(void* self);
void q_abstractspinbox_set_screen(void* self, void* screen);
QWidget* q_abstractspinbox_create_window_container(void* window);
void q_abstractspinbox_window_title_changed(void* self, const char* title);
void q_abstractspinbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_abstractspinbox_window_icon_changed(void* self, void* icon);
void q_abstractspinbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_window_icon_text_changed(void* self, const char* iconText);
void q_abstractspinbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_abstractspinbox_custom_context_menu_requested(void* self, void* pos);
void q_abstractspinbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_abstractspinbox_input_method_hints(void* self);
void q_abstractspinbox_set_input_method_hints(void* self, int64_t hints);
void q_abstractspinbox_render2(void* self, void* target, void* targetOffset);
void q_abstractspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_abstractspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_abstractspinbox_render22(void* self, void* painter, void* targetOffset);
void q_abstractspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_abstractspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_abstractspinbox_grab1(void* self, void* rectangle);
void q_abstractspinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_abstractspinbox_grab_shortcut2(void* self, void* key, int64_t context);
void q_abstractspinbox_set_shortcut_enabled2(void* self, int id, bool enable);
void q_abstractspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_abstractspinbox_set_window_flag2(void* self, int64_t param1, bool on);
void q_abstractspinbox_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_abstractspinbox_create_window_container2(void* window, void* parent);
QWidget* q_abstractspinbox_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_abstractspinbox_object_name(void* self);
void q_abstractspinbox_set_object_name(void* self, const char* name);
bool q_abstractspinbox_is_widget_type(void* self);
bool q_abstractspinbox_is_window_type(void* self);
bool q_abstractspinbox_is_quick_item_type(void* self);
bool q_abstractspinbox_signals_blocked(void* self);
bool q_abstractspinbox_block_signals(void* self, bool b);
QThread* q_abstractspinbox_thread(void* self);
void q_abstractspinbox_move_to_thread(void* self, void* thread);
int32_t q_abstractspinbox_start_timer(void* self, int interval);
void q_abstractspinbox_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractspinbox_children(void* self);
void q_abstractspinbox_install_event_filter(void* self, void* filterObj);
void q_abstractspinbox_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractspinbox_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractspinbox_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractspinbox_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractspinbox_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractspinbox_dump_object_tree(void* self);
void q_abstractspinbox_dump_object_info(void* self);
bool q_abstractspinbox_set_property(void* self, const char* name, void* value);
QVariant* q_abstractspinbox_property(void* self, const char* name);
const char** q_abstractspinbox_dynamic_property_names(void* self);
QBindingStorage* q_abstractspinbox_binding_storage(void* self);
QBindingStorage* q_abstractspinbox_binding_storage2(void* self);
void q_abstractspinbox_destroyed(void* self);
void q_abstractspinbox_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractspinbox_parent(void* self);
bool q_abstractspinbox_inherits(void* self, const char* classname);
void q_abstractspinbox_delete_later(void* self);
int32_t q_abstractspinbox_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractspinbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractspinbox_destroyed1(void* self, void* param1);
void q_abstractspinbox_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractspinbox_painting_active(void* self);
int32_t q_abstractspinbox_width_m_m(void* self);
int32_t q_abstractspinbox_height_m_m(void* self);
int32_t q_abstractspinbox_logical_dpi_x(void* self);
int32_t q_abstractspinbox_logical_dpi_y(void* self);
int32_t q_abstractspinbox_physical_dpi_x(void* self);
int32_t q_abstractspinbox_physical_dpi_y(void* self);
double q_abstractspinbox_device_pixel_ratio(void* self);
double q_abstractspinbox_device_pixel_ratio_f(void* self);
int32_t q_abstractspinbox_color_count(void* self);
int32_t q_abstractspinbox_depth(void* self);
double q_abstractspinbox_device_pixel_ratio_f_scale();
int32_t q_abstractspinbox_dev_type(void* self);
int32_t q_abstractspinbox_qbase_dev_type(void* self);
void q_abstractspinbox_on_dev_type(void* self, int32_t (*slot)());
void q_abstractspinbox_set_visible(void* self, bool visible);
void q_abstractspinbox_qbase_set_visible(void* self, bool visible);
void q_abstractspinbox_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_abstractspinbox_height_for_width(void* self, int param1);
int32_t q_abstractspinbox_qbase_height_for_width(void* self, int param1);
void q_abstractspinbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_abstractspinbox_has_height_for_width(void* self);
bool q_abstractspinbox_qbase_has_height_for_width(void* self);
void q_abstractspinbox_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_abstractspinbox_paint_engine(void* self);
QPaintEngine* q_abstractspinbox_qbase_paint_engine(void* self);
void q_abstractspinbox_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_abstractspinbox_mouse_double_click_event(void* self, void* event);
void q_abstractspinbox_qbase_mouse_double_click_event(void* self, void* event);
void q_abstractspinbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_enter_event(void* self, void* event);
void q_abstractspinbox_qbase_enter_event(void* self, void* event);
void q_abstractspinbox_on_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_leave_event(void* self, void* event);
void q_abstractspinbox_qbase_leave_event(void* self, void* event);
void q_abstractspinbox_on_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_move_event(void* self, void* event);
void q_abstractspinbox_qbase_move_event(void* self, void* event);
void q_abstractspinbox_on_move_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_tablet_event(void* self, void* event);
void q_abstractspinbox_qbase_tablet_event(void* self, void* event);
void q_abstractspinbox_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_action_event(void* self, void* event);
void q_abstractspinbox_qbase_action_event(void* self, void* event);
void q_abstractspinbox_on_action_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_drag_enter_event(void* self, void* event);
void q_abstractspinbox_qbase_drag_enter_event(void* self, void* event);
void q_abstractspinbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_drag_move_event(void* self, void* event);
void q_abstractspinbox_qbase_drag_move_event(void* self, void* event);
void q_abstractspinbox_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_drag_leave_event(void* self, void* event);
void q_abstractspinbox_qbase_drag_leave_event(void* self, void* event);
void q_abstractspinbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_drop_event(void* self, void* event);
void q_abstractspinbox_qbase_drop_event(void* self, void* event);
void q_abstractspinbox_on_drop_event(void* self, void (*slot)(void*, void*));
bool q_abstractspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_abstractspinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractspinbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_abstractspinbox_metric(void* self, int64_t param1);
int32_t q_abstractspinbox_qbase_metric(void* self, int64_t param1);
void q_abstractspinbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_abstractspinbox_init_painter(void* self, void* painter);
void q_abstractspinbox_qbase_init_painter(void* self, void* painter);
void q_abstractspinbox_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_abstractspinbox_redirected(void* self, void* offset);
QPaintDevice* q_abstractspinbox_qbase_redirected(void* self, void* offset);
void q_abstractspinbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_abstractspinbox_shared_painter(void* self);
QPainter* q_abstractspinbox_qbase_shared_painter(void* self);
void q_abstractspinbox_on_shared_painter(void* self, QPainter* (*slot)());
void q_abstractspinbox_input_method_event(void* self, void* param1);
void q_abstractspinbox_qbase_input_method_event(void* self, void* param1);
void q_abstractspinbox_on_input_method_event(void* self, void (*slot)(void*, void*));
bool q_abstractspinbox_focus_next_prev_child(void* self, bool next);
bool q_abstractspinbox_qbase_focus_next_prev_child(void* self, bool next);
void q_abstractspinbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_abstractspinbox_event_filter(void* self, void* watched, void* event);
bool q_abstractspinbox_qbase_event_filter(void* self, void* watched, void* event);
void q_abstractspinbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_abstractspinbox_child_event(void* self, void* event);
void q_abstractspinbox_qbase_child_event(void* self, void* event);
void q_abstractspinbox_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_custom_event(void* self, void* event);
void q_abstractspinbox_qbase_custom_event(void* self, void* event);
void q_abstractspinbox_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_connect_notify(void* self, void* signal);
void q_abstractspinbox_qbase_connect_notify(void* self, void* signal);
void q_abstractspinbox_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_disconnect_notify(void* self, void* signal);
void q_abstractspinbox_qbase_disconnect_notify(void* self, void* signal);
void q_abstractspinbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_abstractspinbox_update_micro_focus(void* self);
void q_abstractspinbox_qbase_update_micro_focus(void* self);
void q_abstractspinbox_on_update_micro_focus(void* self, void (*slot)());
void q_abstractspinbox_create(void* self);
void q_abstractspinbox_qbase_create(void* self);
void q_abstractspinbox_on_create(void* self, void (*slot)());
void q_abstractspinbox_destroy(void* self);
void q_abstractspinbox_qbase_destroy(void* self);
void q_abstractspinbox_on_destroy(void* self, void (*slot)());
bool q_abstractspinbox_focus_next_child(void* self);
bool q_abstractspinbox_qbase_focus_next_child(void* self);
void q_abstractspinbox_on_focus_next_child(void* self, bool (*slot)());
bool q_abstractspinbox_focus_previous_child(void* self);
bool q_abstractspinbox_qbase_focus_previous_child(void* self);
void q_abstractspinbox_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_abstractspinbox_sender(void* self);
QObject* q_abstractspinbox_qbase_sender(void* self);
void q_abstractspinbox_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractspinbox_sender_signal_index(void* self);
int32_t q_abstractspinbox_qbase_sender_signal_index(void* self);
void q_abstractspinbox_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractspinbox_receivers(void* self, const char* signal);
int32_t q_abstractspinbox_qbase_receivers(void* self, const char* signal);
void q_abstractspinbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractspinbox_is_signal_connected(void* self, void* signal);
bool q_abstractspinbox_qbase_is_signal_connected(void* self, void* signal);
void q_abstractspinbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractspinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractspinbox.html#types

typedef enum {
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPNONE = 0,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPUPENABLED = 1,
    QABSTRACTSPINBOX_STEPENABLEDFLAG_STEPDOWNENABLED = 2
} QAbstractSpinBox__StepEnabledFlag;

typedef enum {
    QABSTRACTSPINBOX_BUTTONSYMBOLS_UPDOWNARROWS = 0,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_PLUSMINUS = 1,
    QABSTRACTSPINBOX_BUTTONSYMBOLS_NOBUTTONS = 2
} QAbstractSpinBox__ButtonSymbols;

typedef enum {
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTOPREVIOUSVALUE = 0,
    QABSTRACTSPINBOX_CORRECTIONMODE_CORRECTTONEARESTVALUE = 1
} QAbstractSpinBox__CorrectionMode;

typedef enum {
    QABSTRACTSPINBOX_STEPTYPE_DEFAULTSTEPTYPE = 0,
    QABSTRACTSPINBOX_STEPTYPE_ADAPTIVEDECIMALSTEPTYPE = 1
} QAbstractSpinBox__StepType;

#endif
