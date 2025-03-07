#pragma once
#ifndef SRCQT6C_LIBQABSTRACTSCROLLAREA_H
#define SRCQT6C_LIBQABSTRACTSCROLLAREA_H

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
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
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

QAbstractScrollArea* q_abstractscrollarea_new(void* parent);
QAbstractScrollArea* q_abstractscrollarea_new2();
QMetaObject* q_abstractscrollarea_meta_object(void* self);
void* q_abstractscrollarea_metacast(void* self, const char* param1);
int32_t q_abstractscrollarea_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractscrollarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractscrollarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractscrollarea_tr(const char* s);
int64_t q_abstractscrollarea_vertical_scroll_bar_policy(void* self);
void q_abstractscrollarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_abstractscrollarea_vertical_scroll_bar(void* self);
void q_abstractscrollarea_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_abstractscrollarea_horizontal_scroll_bar_policy(void* self);
void q_abstractscrollarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_abstractscrollarea_horizontal_scroll_bar(void* self);
void q_abstractscrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_abstractscrollarea_corner_widget(void* self);
void q_abstractscrollarea_set_corner_widget(void* self, void* widget);
void q_abstractscrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_abstractscrollarea_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_abstractscrollarea_viewport(void* self);
void q_abstractscrollarea_set_viewport(void* self, void* widget);
QSize* q_abstractscrollarea_maximum_viewport_size(void* self);
QSize* q_abstractscrollarea_minimum_size_hint(void* self);
void q_abstractscrollarea_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractscrollarea_qbase_minimum_size_hint(void* self);
QSize* q_abstractscrollarea_size_hint(void* self);
void q_abstractscrollarea_on_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractscrollarea_qbase_size_hint(void* self);
void q_abstractscrollarea_setup_viewport(void* self, void* viewport);
void q_abstractscrollarea_on_setup_viewport(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_setup_viewport(void* self, void* viewport);
int64_t q_abstractscrollarea_size_adjust_policy(void* self);
void q_abstractscrollarea_set_size_adjust_policy(void* self, int64_t policy);
void q_abstractscrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_abstractscrollarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
void q_abstractscrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_abstractscrollarea_set_viewport_margins_with_margins(void* self, void* margins);
void q_abstractscrollarea_on_set_viewport_margins_with_margins(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_set_viewport_margins_with_margins(void* self, void* margins);
QMargins* q_abstractscrollarea_viewport_margins(void* self);
void q_abstractscrollarea_on_viewport_margins(void* self, QMargins* (*slot)());
QMargins* q_abstractscrollarea_qbase_viewport_margins(void* self);
bool q_abstractscrollarea_event_filter(void* self, void* param1, void* param2);
void q_abstractscrollarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_abstractscrollarea_qbase_event_filter(void* self, void* param1, void* param2);
bool q_abstractscrollarea_event(void* self, void* param1);
void q_abstractscrollarea_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractscrollarea_qbase_event(void* self, void* param1);
bool q_abstractscrollarea_viewport_event(void* self, void* param1);
void q_abstractscrollarea_on_viewport_event(void* self, bool (*slot)(void*, void*));
bool q_abstractscrollarea_qbase_viewport_event(void* self, void* param1);
void q_abstractscrollarea_resize_event(void* self, void* param1);
void q_abstractscrollarea_on_resize_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_resize_event(void* self, void* param1);
void q_abstractscrollarea_paint_event(void* self, void* param1);
void q_abstractscrollarea_on_paint_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_paint_event(void* self, void* param1);
void q_abstractscrollarea_mouse_press_event(void* self, void* param1);
void q_abstractscrollarea_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_mouse_press_event(void* self, void* param1);
void q_abstractscrollarea_mouse_release_event(void* self, void* param1);
void q_abstractscrollarea_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_mouse_release_event(void* self, void* param1);
void q_abstractscrollarea_mouse_double_click_event(void* self, void* param1);
void q_abstractscrollarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_mouse_double_click_event(void* self, void* param1);
void q_abstractscrollarea_mouse_move_event(void* self, void* param1);
void q_abstractscrollarea_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_mouse_move_event(void* self, void* param1);
void q_abstractscrollarea_wheel_event(void* self, void* param1);
void q_abstractscrollarea_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_wheel_event(void* self, void* param1);
void q_abstractscrollarea_context_menu_event(void* self, void* param1);
void q_abstractscrollarea_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_context_menu_event(void* self, void* param1);
void q_abstractscrollarea_drag_enter_event(void* self, void* param1);
void q_abstractscrollarea_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_drag_enter_event(void* self, void* param1);
void q_abstractscrollarea_drag_move_event(void* self, void* param1);
void q_abstractscrollarea_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_drag_move_event(void* self, void* param1);
void q_abstractscrollarea_drag_leave_event(void* self, void* param1);
void q_abstractscrollarea_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_drag_leave_event(void* self, void* param1);
void q_abstractscrollarea_drop_event(void* self, void* param1);
void q_abstractscrollarea_on_drop_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_drop_event(void* self, void* param1);
void q_abstractscrollarea_key_press_event(void* self, void* param1);
void q_abstractscrollarea_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_qbase_key_press_event(void* self, void* param1);
void q_abstractscrollarea_scroll_contents_by(void* self, int dx, int dy);
void q_abstractscrollarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_abstractscrollarea_qbase_scroll_contents_by(void* self, int dx, int dy);
QSize* q_abstractscrollarea_viewport_size_hint(void* self);
void q_abstractscrollarea_on_viewport_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractscrollarea_qbase_viewport_size_hint(void* self);
const char* q_abstractscrollarea_tr2(const char* s, const char* c);
const char* q_abstractscrollarea_tr3(const char* s, const char* c, int n);
int32_t q_abstractscrollarea_frame_style(void* self);
void q_abstractscrollarea_set_frame_style(void* self, int frameStyle);
int32_t q_abstractscrollarea_frame_width(void* self);
int64_t q_abstractscrollarea_frame_shape(void* self);
void q_abstractscrollarea_set_frame_shape(void* self, int64_t frameShape);
int64_t q_abstractscrollarea_frame_shadow(void* self);
void q_abstractscrollarea_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_abstractscrollarea_line_width(void* self);
void q_abstractscrollarea_set_line_width(void* self, int lineWidth);
int32_t q_abstractscrollarea_mid_line_width(void* self);
void q_abstractscrollarea_set_mid_line_width(void* self, int midLineWidth);
QRect* q_abstractscrollarea_frame_rect(void* self);
void q_abstractscrollarea_set_frame_rect(void* self, void* frameRect);
uintptr_t q_abstractscrollarea_win_id(void* self);
void q_abstractscrollarea_create_win_id(void* self);
uintptr_t q_abstractscrollarea_internal_win_id(void* self);
uintptr_t q_abstractscrollarea_effective_win_id(void* self);
QStyle* q_abstractscrollarea_style(void* self);
void q_abstractscrollarea_set_style(void* self, void* style);
bool q_abstractscrollarea_is_top_level(void* self);
bool q_abstractscrollarea_is_window(void* self);
bool q_abstractscrollarea_is_modal(void* self);
int64_t q_abstractscrollarea_window_modality(void* self);
void q_abstractscrollarea_set_window_modality(void* self, int64_t windowModality);
bool q_abstractscrollarea_is_enabled(void* self);
bool q_abstractscrollarea_is_enabled_to(void* self, void* param1);
void q_abstractscrollarea_set_enabled(void* self, bool enabled);
void q_abstractscrollarea_set_disabled(void* self, bool disabled);
void q_abstractscrollarea_set_window_modified(void* self, bool windowModified);
QRect* q_abstractscrollarea_frame_geometry(void* self);
QRect* q_abstractscrollarea_geometry(void* self);
QRect* q_abstractscrollarea_normal_geometry(void* self);
int32_t q_abstractscrollarea_x(void* self);
int32_t q_abstractscrollarea_y(void* self);
QPoint* q_abstractscrollarea_pos(void* self);
QSize* q_abstractscrollarea_frame_size(void* self);
QSize* q_abstractscrollarea_size(void* self);
int32_t q_abstractscrollarea_width(void* self);
int32_t q_abstractscrollarea_height(void* self);
QRect* q_abstractscrollarea_rect(void* self);
QRect* q_abstractscrollarea_children_rect(void* self);
QRegion* q_abstractscrollarea_children_region(void* self);
QSize* q_abstractscrollarea_minimum_size(void* self);
QSize* q_abstractscrollarea_maximum_size(void* self);
int32_t q_abstractscrollarea_minimum_width(void* self);
int32_t q_abstractscrollarea_minimum_height(void* self);
int32_t q_abstractscrollarea_maximum_width(void* self);
int32_t q_abstractscrollarea_maximum_height(void* self);
void q_abstractscrollarea_set_minimum_size(void* self, void* minimumSize);
void q_abstractscrollarea_set_minimum_size2(void* self, int minw, int minh);
void q_abstractscrollarea_set_maximum_size(void* self, void* maximumSize);
void q_abstractscrollarea_set_maximum_size2(void* self, int maxw, int maxh);
void q_abstractscrollarea_set_minimum_width(void* self, int minw);
void q_abstractscrollarea_set_minimum_height(void* self, int minh);
void q_abstractscrollarea_set_maximum_width(void* self, int maxw);
void q_abstractscrollarea_set_maximum_height(void* self, int maxh);
QSize* q_abstractscrollarea_size_increment(void* self);
void q_abstractscrollarea_set_size_increment(void* self, void* sizeIncrement);
void q_abstractscrollarea_set_size_increment2(void* self, int w, int h);
QSize* q_abstractscrollarea_base_size(void* self);
void q_abstractscrollarea_set_base_size(void* self, void* baseSize);
void q_abstractscrollarea_set_base_size2(void* self, int basew, int baseh);
void q_abstractscrollarea_set_fixed_size(void* self, void* fixedSize);
void q_abstractscrollarea_set_fixed_size2(void* self, int w, int h);
void q_abstractscrollarea_set_fixed_width(void* self, int w);
void q_abstractscrollarea_set_fixed_height(void* self, int h);
QPointF* q_abstractscrollarea_map_to_global(void* self, void* param1);
QPoint* q_abstractscrollarea_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_abstractscrollarea_map_from_global(void* self, void* param1);
QPoint* q_abstractscrollarea_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_abstractscrollarea_map_to_parent(void* self, void* param1);
QPoint* q_abstractscrollarea_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractscrollarea_map_from_parent(void* self, void* param1);
QPoint* q_abstractscrollarea_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractscrollarea_map_to(void* self, void* param1, void* param2);
QPoint* q_abstractscrollarea_map_to2(void* self, void* param1, void* param2);
QPointF* q_abstractscrollarea_map_from(void* self, void* param1, void* param2);
QPoint* q_abstractscrollarea_map_from2(void* self, void* param1, void* param2);
QWidget* q_abstractscrollarea_window(void* self);
QWidget* q_abstractscrollarea_native_parent_widget(void* self);
QWidget* q_abstractscrollarea_top_level_widget(void* self);
QPalette* q_abstractscrollarea_palette(void* self);
void q_abstractscrollarea_set_palette(void* self, void* palette);
void q_abstractscrollarea_set_background_role(void* self, int64_t backgroundRole);
int64_t q_abstractscrollarea_background_role(void* self);
void q_abstractscrollarea_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_abstractscrollarea_foreground_role(void* self);
QFont* q_abstractscrollarea_font(void* self);
void q_abstractscrollarea_set_font(void* self, void* font);
QFontMetrics* q_abstractscrollarea_font_metrics(void* self);
QFontInfo* q_abstractscrollarea_font_info(void* self);
QCursor* q_abstractscrollarea_cursor(void* self);
void q_abstractscrollarea_set_cursor(void* self, void* cursor);
void q_abstractscrollarea_unset_cursor(void* self);
void q_abstractscrollarea_set_mouse_tracking(void* self, bool enable);
bool q_abstractscrollarea_has_mouse_tracking(void* self);
bool q_abstractscrollarea_under_mouse(void* self);
void q_abstractscrollarea_set_tablet_tracking(void* self, bool enable);
bool q_abstractscrollarea_has_tablet_tracking(void* self);
void q_abstractscrollarea_set_mask(void* self, void* mask);
void q_abstractscrollarea_set_mask_with_mask(void* self, void* mask);
QRegion* q_abstractscrollarea_mask(void* self);
void q_abstractscrollarea_clear_mask(void* self);
void q_abstractscrollarea_render(void* self, void* target);
void q_abstractscrollarea_render_with_painter(void* self, void* painter);
QPixmap* q_abstractscrollarea_grab(void* self);
QGraphicsEffect* q_abstractscrollarea_graphics_effect(void* self);
void q_abstractscrollarea_set_graphics_effect(void* self, void* effect);
void q_abstractscrollarea_grab_gesture(void* self, int64_t typeVal);
void q_abstractscrollarea_ungrab_gesture(void* self, int64_t typeVal);
void q_abstractscrollarea_set_window_title(void* self, const char* windowTitle);
void q_abstractscrollarea_set_style_sheet(void* self, const char* styleSheet);
const char* q_abstractscrollarea_style_sheet(void* self);
const char* q_abstractscrollarea_window_title(void* self);
void q_abstractscrollarea_set_window_icon(void* self, void* icon);
QIcon* q_abstractscrollarea_window_icon(void* self);
void q_abstractscrollarea_set_window_icon_text(void* self, const char* windowIconText);
const char* q_abstractscrollarea_window_icon_text(void* self);
void q_abstractscrollarea_set_window_role(void* self, const char* windowRole);
const char* q_abstractscrollarea_window_role(void* self);
void q_abstractscrollarea_set_window_file_path(void* self, const char* filePath);
const char* q_abstractscrollarea_window_file_path(void* self);
void q_abstractscrollarea_set_window_opacity(void* self, double level);
double q_abstractscrollarea_window_opacity(void* self);
bool q_abstractscrollarea_is_window_modified(void* self);
void q_abstractscrollarea_set_tool_tip(void* self, const char* toolTip);
const char* q_abstractscrollarea_tool_tip(void* self);
void q_abstractscrollarea_set_tool_tip_duration(void* self, int msec);
int32_t q_abstractscrollarea_tool_tip_duration(void* self);
void q_abstractscrollarea_set_status_tip(void* self, const char* statusTip);
const char* q_abstractscrollarea_status_tip(void* self);
void q_abstractscrollarea_set_whats_this(void* self, const char* whatsThis);
const char* q_abstractscrollarea_whats_this(void* self);
const char* q_abstractscrollarea_accessible_name(void* self);
void q_abstractscrollarea_set_accessible_name(void* self, const char* name);
const char* q_abstractscrollarea_accessible_description(void* self);
void q_abstractscrollarea_set_accessible_description(void* self, const char* description);
void q_abstractscrollarea_set_layout_direction(void* self, int64_t direction);
int64_t q_abstractscrollarea_layout_direction(void* self);
void q_abstractscrollarea_unset_layout_direction(void* self);
void q_abstractscrollarea_set_locale(void* self, void* locale);
QLocale* q_abstractscrollarea_locale(void* self);
void q_abstractscrollarea_unset_locale(void* self);
bool q_abstractscrollarea_is_right_to_left(void* self);
bool q_abstractscrollarea_is_left_to_right(void* self);
void q_abstractscrollarea_set_focus(void* self);
bool q_abstractscrollarea_is_active_window(void* self);
void q_abstractscrollarea_activate_window(void* self);
void q_abstractscrollarea_clear_focus(void* self);
void q_abstractscrollarea_set_focus_with_reason(void* self, int64_t reason);
int64_t q_abstractscrollarea_focus_policy(void* self);
void q_abstractscrollarea_set_focus_policy(void* self, int64_t policy);
bool q_abstractscrollarea_has_focus(void* self);
void q_abstractscrollarea_set_tab_order(void* param1, void* param2);
void q_abstractscrollarea_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_abstractscrollarea_focus_proxy(void* self);
int64_t q_abstractscrollarea_context_menu_policy(void* self);
void q_abstractscrollarea_set_context_menu_policy(void* self, int64_t policy);
void q_abstractscrollarea_grab_mouse(void* self);
void q_abstractscrollarea_grab_mouse_with_q_cursor(void* self, void* param1);
void q_abstractscrollarea_release_mouse(void* self);
void q_abstractscrollarea_grab_keyboard(void* self);
void q_abstractscrollarea_release_keyboard(void* self);
int32_t q_abstractscrollarea_grab_shortcut(void* self, void* key);
void q_abstractscrollarea_release_shortcut(void* self, int id);
void q_abstractscrollarea_set_shortcut_enabled(void* self, int id);
void q_abstractscrollarea_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_abstractscrollarea_mouse_grabber();
QWidget* q_abstractscrollarea_keyboard_grabber();
bool q_abstractscrollarea_updates_enabled(void* self);
void q_abstractscrollarea_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_abstractscrollarea_graphics_proxy_widget(void* self);
void q_abstractscrollarea_update(void* self);
void q_abstractscrollarea_repaint(void* self);
void q_abstractscrollarea_update2(void* self, int x, int y, int w, int h);
void q_abstractscrollarea_update_with_q_rect(void* self, void* param1);
void q_abstractscrollarea_update_with_q_region(void* self, void* param1);
void q_abstractscrollarea_repaint2(void* self, int x, int y, int w, int h);
void q_abstractscrollarea_repaint_with_q_rect(void* self, void* param1);
void q_abstractscrollarea_repaint_with_q_region(void* self, void* param1);
void q_abstractscrollarea_set_hidden(void* self, bool hidden);
void q_abstractscrollarea_show(void* self);
void q_abstractscrollarea_hide(void* self);
void q_abstractscrollarea_show_minimized(void* self);
void q_abstractscrollarea_show_maximized(void* self);
void q_abstractscrollarea_show_full_screen(void* self);
void q_abstractscrollarea_show_normal(void* self);
bool q_abstractscrollarea_close(void* self);
void q_abstractscrollarea_raise(void* self);
void q_abstractscrollarea_lower(void* self);
void q_abstractscrollarea_stack_under(void* self, void* param1);
void q_abstractscrollarea_move(void* self, int x, int y);
void q_abstractscrollarea_move_with_q_point(void* self, void* param1);
void q_abstractscrollarea_resize(void* self, int w, int h);
void q_abstractscrollarea_resize_with_q_size(void* self, void* param1);
void q_abstractscrollarea_set_geometry(void* self, int x, int y, int w, int h);
void q_abstractscrollarea_set_geometry_with_geometry(void* self, void* geometry);
char* q_abstractscrollarea_save_geometry(void* self);
bool q_abstractscrollarea_restore_geometry(void* self, const char* geometry);
void q_abstractscrollarea_adjust_size(void* self);
bool q_abstractscrollarea_is_visible(void* self);
bool q_abstractscrollarea_is_visible_to(void* self, void* param1);
bool q_abstractscrollarea_is_hidden(void* self);
bool q_abstractscrollarea_is_minimized(void* self);
bool q_abstractscrollarea_is_maximized(void* self);
bool q_abstractscrollarea_is_full_screen(void* self);
int64_t q_abstractscrollarea_window_state(void* self);
void q_abstractscrollarea_set_window_state(void* self, int64_t state);
void q_abstractscrollarea_override_window_state(void* self, int64_t state);
QSizePolicy* q_abstractscrollarea_size_policy(void* self);
void q_abstractscrollarea_set_size_policy(void* self, void* sizePolicy);
void q_abstractscrollarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_abstractscrollarea_visible_region(void* self);
void q_abstractscrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_abstractscrollarea_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_abstractscrollarea_contents_margins(void* self);
QRect* q_abstractscrollarea_contents_rect(void* self);
QLayout* q_abstractscrollarea_layout(void* self);
void q_abstractscrollarea_set_layout(void* self, void* layout);
void q_abstractscrollarea_update_geometry(void* self);
void q_abstractscrollarea_set_parent(void* self, void* parent);
void q_abstractscrollarea_set_parent2(void* self, void* parent, int64_t f);
void q_abstractscrollarea_scroll(void* self, int dx, int dy);
void q_abstractscrollarea_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_abstractscrollarea_focus_widget(void* self);
QWidget* q_abstractscrollarea_next_in_focus_chain(void* self);
QWidget* q_abstractscrollarea_previous_in_focus_chain(void* self);
bool q_abstractscrollarea_accept_drops(void* self);
void q_abstractscrollarea_set_accept_drops(void* self, bool on);
void q_abstractscrollarea_add_action(void* self, void* action);
void q_abstractscrollarea_add_actions(void* self, void* actions[]);
void q_abstractscrollarea_insert_actions(void* self, void* before, void* actions[]);
void q_abstractscrollarea_insert_action(void* self, void* before, void* action);
void q_abstractscrollarea_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_abstractscrollarea_actions(void* self);
QAction* q_abstractscrollarea_add_action_with_text(void* self, const char* text);
QAction* q_abstractscrollarea_add_action2(void* self, void* icon, const char* text);
QAction* q_abstractscrollarea_add_action3(void* self, const char* text, void* shortcut);
QAction* q_abstractscrollarea_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_abstractscrollarea_parent_widget(void* self);
void q_abstractscrollarea_set_window_flags(void* self, int64_t typeVal);
int64_t q_abstractscrollarea_window_flags(void* self);
void q_abstractscrollarea_set_window_flag(void* self, int64_t param1);
void q_abstractscrollarea_override_window_flags(void* self, int64_t typeVal);
int64_t q_abstractscrollarea_window_type(void* self);
QWidget* q_abstractscrollarea_find(uint64_t param1);
QWidget* q_abstractscrollarea_child_at(void* self, int x, int y);
QWidget* q_abstractscrollarea_child_at_with_q_point(void* self, void* p);
void q_abstractscrollarea_set_attribute(void* self, int64_t param1);
bool q_abstractscrollarea_test_attribute(void* self, int64_t param1);
void q_abstractscrollarea_ensure_polished(void* self);
bool q_abstractscrollarea_is_ancestor_of(void* self, void* child);
bool q_abstractscrollarea_auto_fill_background(void* self);
void q_abstractscrollarea_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_abstractscrollarea_backing_store(void* self);
QWindow* q_abstractscrollarea_window_handle(void* self);
QScreen* q_abstractscrollarea_screen(void* self);
void q_abstractscrollarea_set_screen(void* self, void* screen);
QWidget* q_abstractscrollarea_create_window_container(void* window);
void q_abstractscrollarea_window_title_changed(void* self, const char* title);
void q_abstractscrollarea_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_abstractscrollarea_window_icon_changed(void* self, void* icon);
void q_abstractscrollarea_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_window_icon_text_changed(void* self, const char* iconText);
void q_abstractscrollarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_abstractscrollarea_custom_context_menu_requested(void* self, void* pos);
void q_abstractscrollarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_abstractscrollarea_input_method_hints(void* self);
void q_abstractscrollarea_set_input_method_hints(void* self, int64_t hints);
void q_abstractscrollarea_render2(void* self, void* target, void* targetOffset);
void q_abstractscrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_abstractscrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_abstractscrollarea_render22(void* self, void* painter, void* targetOffset);
void q_abstractscrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_abstractscrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_abstractscrollarea_grab1(void* self, void* rectangle);
void q_abstractscrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_abstractscrollarea_grab_shortcut2(void* self, void* key, int64_t context);
void q_abstractscrollarea_set_shortcut_enabled2(void* self, int id, bool enable);
void q_abstractscrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_abstractscrollarea_set_window_flag2(void* self, int64_t param1, bool on);
void q_abstractscrollarea_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_abstractscrollarea_create_window_container2(void* window, void* parent);
QWidget* q_abstractscrollarea_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_abstractscrollarea_object_name(void* self);
void q_abstractscrollarea_set_object_name(void* self, const char* name);
bool q_abstractscrollarea_is_widget_type(void* self);
bool q_abstractscrollarea_is_window_type(void* self);
bool q_abstractscrollarea_is_quick_item_type(void* self);
bool q_abstractscrollarea_signals_blocked(void* self);
bool q_abstractscrollarea_block_signals(void* self, bool b);
QThread* q_abstractscrollarea_thread(void* self);
void q_abstractscrollarea_move_to_thread(void* self, void* thread);
int32_t q_abstractscrollarea_start_timer(void* self, int interval);
void q_abstractscrollarea_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractscrollarea_children(void* self);
void q_abstractscrollarea_install_event_filter(void* self, void* filterObj);
void q_abstractscrollarea_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractscrollarea_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractscrollarea_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractscrollarea_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractscrollarea_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractscrollarea_dump_object_tree(void* self);
void q_abstractscrollarea_dump_object_info(void* self);
bool q_abstractscrollarea_set_property(void* self, const char* name, void* value);
QVariant* q_abstractscrollarea_property(void* self, const char* name);
const char** q_abstractscrollarea_dynamic_property_names(void* self);
QBindingStorage* q_abstractscrollarea_binding_storage(void* self);
QBindingStorage* q_abstractscrollarea_binding_storage2(void* self);
void q_abstractscrollarea_destroyed(void* self);
void q_abstractscrollarea_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractscrollarea_parent(void* self);
bool q_abstractscrollarea_inherits(void* self, const char* classname);
void q_abstractscrollarea_delete_later(void* self);
int32_t q_abstractscrollarea_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractscrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractscrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractscrollarea_destroyed1(void* self, void* param1);
void q_abstractscrollarea_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractscrollarea_painting_active(void* self);
int32_t q_abstractscrollarea_width_m_m(void* self);
int32_t q_abstractscrollarea_height_m_m(void* self);
int32_t q_abstractscrollarea_logical_dpi_x(void* self);
int32_t q_abstractscrollarea_logical_dpi_y(void* self);
int32_t q_abstractscrollarea_physical_dpi_x(void* self);
int32_t q_abstractscrollarea_physical_dpi_y(void* self);
double q_abstractscrollarea_device_pixel_ratio(void* self);
double q_abstractscrollarea_device_pixel_ratio_f(void* self);
int32_t q_abstractscrollarea_color_count(void* self);
int32_t q_abstractscrollarea_depth(void* self);
double q_abstractscrollarea_device_pixel_ratio_f_scale();
void q_abstractscrollarea_change_event(void* self, void* param1);
void q_abstractscrollarea_qbase_change_event(void* self, void* param1);
void q_abstractscrollarea_on_change_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_init_style_option(void* self, void* option);
void q_abstractscrollarea_qbase_init_style_option(void* self, void* option);
void q_abstractscrollarea_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_abstractscrollarea_dev_type(void* self);
int32_t q_abstractscrollarea_qbase_dev_type(void* self);
void q_abstractscrollarea_on_dev_type(void* self, int32_t (*slot)());
void q_abstractscrollarea_set_visible(void* self, bool visible);
void q_abstractscrollarea_qbase_set_visible(void* self, bool visible);
void q_abstractscrollarea_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_abstractscrollarea_height_for_width(void* self, int param1);
int32_t q_abstractscrollarea_qbase_height_for_width(void* self, int param1);
void q_abstractscrollarea_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_abstractscrollarea_has_height_for_width(void* self);
bool q_abstractscrollarea_qbase_has_height_for_width(void* self);
void q_abstractscrollarea_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_abstractscrollarea_paint_engine(void* self);
QPaintEngine* q_abstractscrollarea_qbase_paint_engine(void* self);
void q_abstractscrollarea_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_abstractscrollarea_key_release_event(void* self, void* event);
void q_abstractscrollarea_qbase_key_release_event(void* self, void* event);
void q_abstractscrollarea_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_focus_in_event(void* self, void* event);
void q_abstractscrollarea_qbase_focus_in_event(void* self, void* event);
void q_abstractscrollarea_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_focus_out_event(void* self, void* event);
void q_abstractscrollarea_qbase_focus_out_event(void* self, void* event);
void q_abstractscrollarea_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_enter_event(void* self, void* event);
void q_abstractscrollarea_qbase_enter_event(void* self, void* event);
void q_abstractscrollarea_on_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_leave_event(void* self, void* event);
void q_abstractscrollarea_qbase_leave_event(void* self, void* event);
void q_abstractscrollarea_on_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_move_event(void* self, void* event);
void q_abstractscrollarea_qbase_move_event(void* self, void* event);
void q_abstractscrollarea_on_move_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_close_event(void* self, void* event);
void q_abstractscrollarea_qbase_close_event(void* self, void* event);
void q_abstractscrollarea_on_close_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_tablet_event(void* self, void* event);
void q_abstractscrollarea_qbase_tablet_event(void* self, void* event);
void q_abstractscrollarea_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_action_event(void* self, void* event);
void q_abstractscrollarea_qbase_action_event(void* self, void* event);
void q_abstractscrollarea_on_action_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_show_event(void* self, void* event);
void q_abstractscrollarea_qbase_show_event(void* self, void* event);
void q_abstractscrollarea_on_show_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_hide_event(void* self, void* event);
void q_abstractscrollarea_qbase_hide_event(void* self, void* event);
void q_abstractscrollarea_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_abstractscrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_abstractscrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractscrollarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_abstractscrollarea_metric(void* self, int64_t param1);
int32_t q_abstractscrollarea_qbase_metric(void* self, int64_t param1);
void q_abstractscrollarea_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_abstractscrollarea_init_painter(void* self, void* painter);
void q_abstractscrollarea_qbase_init_painter(void* self, void* painter);
void q_abstractscrollarea_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_abstractscrollarea_redirected(void* self, void* offset);
QPaintDevice* q_abstractscrollarea_qbase_redirected(void* self, void* offset);
void q_abstractscrollarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_abstractscrollarea_shared_painter(void* self);
QPainter* q_abstractscrollarea_qbase_shared_painter(void* self);
void q_abstractscrollarea_on_shared_painter(void* self, QPainter* (*slot)());
void q_abstractscrollarea_input_method_event(void* self, void* param1);
void q_abstractscrollarea_qbase_input_method_event(void* self, void* param1);
void q_abstractscrollarea_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_abstractscrollarea_input_method_query(void* self, int64_t param1);
QVariant* q_abstractscrollarea_qbase_input_method_query(void* self, int64_t param1);
void q_abstractscrollarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_abstractscrollarea_focus_next_prev_child(void* self, bool next);
bool q_abstractscrollarea_qbase_focus_next_prev_child(void* self, bool next);
void q_abstractscrollarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_abstractscrollarea_timer_event(void* self, void* event);
void q_abstractscrollarea_qbase_timer_event(void* self, void* event);
void q_abstractscrollarea_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_child_event(void* self, void* event);
void q_abstractscrollarea_qbase_child_event(void* self, void* event);
void q_abstractscrollarea_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_custom_event(void* self, void* event);
void q_abstractscrollarea_qbase_custom_event(void* self, void* event);
void q_abstractscrollarea_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_connect_notify(void* self, void* signal);
void q_abstractscrollarea_qbase_connect_notify(void* self, void* signal);
void q_abstractscrollarea_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_disconnect_notify(void* self, void* signal);
void q_abstractscrollarea_qbase_disconnect_notify(void* self, void* signal);
void q_abstractscrollarea_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_draw_frame(void* self, void* param1);
void q_abstractscrollarea_qbase_draw_frame(void* self, void* param1);
void q_abstractscrollarea_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_abstractscrollarea_update_micro_focus(void* self);
void q_abstractscrollarea_qbase_update_micro_focus(void* self);
void q_abstractscrollarea_on_update_micro_focus(void* self, void (*slot)());
void q_abstractscrollarea_create(void* self);
void q_abstractscrollarea_qbase_create(void* self);
void q_abstractscrollarea_on_create(void* self, void (*slot)());
void q_abstractscrollarea_destroy(void* self);
void q_abstractscrollarea_qbase_destroy(void* self);
void q_abstractscrollarea_on_destroy(void* self, void (*slot)());
bool q_abstractscrollarea_focus_next_child(void* self);
bool q_abstractscrollarea_qbase_focus_next_child(void* self);
void q_abstractscrollarea_on_focus_next_child(void* self, bool (*slot)());
bool q_abstractscrollarea_focus_previous_child(void* self);
bool q_abstractscrollarea_qbase_focus_previous_child(void* self);
void q_abstractscrollarea_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_abstractscrollarea_sender(void* self);
QObject* q_abstractscrollarea_qbase_sender(void* self);
void q_abstractscrollarea_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractscrollarea_sender_signal_index(void* self);
int32_t q_abstractscrollarea_qbase_sender_signal_index(void* self);
void q_abstractscrollarea_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractscrollarea_receivers(void* self, const char* signal);
int32_t q_abstractscrollarea_qbase_receivers(void* self, const char* signal);
void q_abstractscrollarea_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractscrollarea_is_signal_connected(void* self, void* signal);
bool q_abstractscrollarea_qbase_is_signal_connected(void* self, void* signal);
void q_abstractscrollarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractscrollarea_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractscrollarea.html#types

typedef enum {
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTIGNORED = 0,
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTTOCONTENTSONFIRSTSHOW = 1,
    QABSTRACTSCROLLAREA_SIZEADJUSTPOLICY_ADJUSTTOCONTENTS = 2
} QAbstractScrollArea__SizeAdjustPolicy;

#endif
