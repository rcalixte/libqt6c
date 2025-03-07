#pragma once
#ifndef SRCQT6C_LIBQTABBAR_H
#define SRCQT6C_LIBQTABBAR_H

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
#include "libqcolor.h"
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

QTabBar* q_tabbar_new(void* parent);
QTabBar* q_tabbar_new2();
QMetaObject* q_tabbar_meta_object(void* self);
void* q_tabbar_metacast(void* self, const char* param1);
int32_t q_tabbar_metacall(void* self, int64_t param1, int param2, void* param3);
void q_tabbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_tabbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_tabbar_tr(const char* s);
int64_t q_tabbar_shape(void* self);
void q_tabbar_set_shape(void* self, int64_t shape);
int32_t q_tabbar_add_tab(void* self, const char* text);
int32_t q_tabbar_add_tab2(void* self, void* icon, const char* text);
int32_t q_tabbar_insert_tab(void* self, int index, const char* text);
int32_t q_tabbar_insert_tab2(void* self, int index, void* icon, const char* text);
void q_tabbar_remove_tab(void* self, int index);
void q_tabbar_move_tab(void* self, int from, int to);
bool q_tabbar_is_tab_enabled(void* self, int index);
void q_tabbar_set_tab_enabled(void* self, int index, bool enabled);
bool q_tabbar_is_tab_visible(void* self, int index);
void q_tabbar_set_tab_visible(void* self, int index, bool visible);
const char* q_tabbar_tab_text(void* self, int index);
void q_tabbar_set_tab_text(void* self, int index, const char* text);
QColor* q_tabbar_tab_text_color(void* self, int index);
void q_tabbar_set_tab_text_color(void* self, int index, void* color);
QIcon* q_tabbar_tab_icon(void* self, int index);
void q_tabbar_set_tab_icon(void* self, int index, void* icon);
int64_t q_tabbar_elide_mode(void* self);
void q_tabbar_set_elide_mode(void* self, int64_t mode);
void q_tabbar_set_tab_tool_tip(void* self, int index, const char* tip);
const char* q_tabbar_tab_tool_tip(void* self, int index);
void q_tabbar_set_tab_whats_this(void* self, int index, const char* text);
const char* q_tabbar_tab_whats_this(void* self, int index);
void q_tabbar_set_tab_data(void* self, int index, void* data);
QVariant* q_tabbar_tab_data(void* self, int index);
QRect* q_tabbar_tab_rect(void* self, int index);
int32_t q_tabbar_tab_at(void* self, void* pos);
int32_t q_tabbar_current_index(void* self);
int32_t q_tabbar_count(void* self);
QSize* q_tabbar_size_hint(void* self);
void q_tabbar_on_size_hint(void* self, QSize* (*slot)());
QSize* q_tabbar_qbase_size_hint(void* self);
QSize* q_tabbar_minimum_size_hint(void* self);
void q_tabbar_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_tabbar_qbase_minimum_size_hint(void* self);
void q_tabbar_set_draw_base(void* self, bool drawTheBase);
bool q_tabbar_draw_base(void* self);
QSize* q_tabbar_icon_size(void* self);
void q_tabbar_set_icon_size(void* self, void* size);
bool q_tabbar_uses_scroll_buttons(void* self);
void q_tabbar_set_uses_scroll_buttons(void* self, bool useButtons);
bool q_tabbar_tabs_closable(void* self);
void q_tabbar_set_tabs_closable(void* self, bool closable);
void q_tabbar_set_tab_button(void* self, int index, int64_t position, void* widget);
QWidget* q_tabbar_tab_button(void* self, int index, int64_t position);
int64_t q_tabbar_selection_behavior_on_remove(void* self);
void q_tabbar_set_selection_behavior_on_remove(void* self, int64_t behavior);
bool q_tabbar_expanding(void* self);
void q_tabbar_set_expanding(void* self, bool enabled);
bool q_tabbar_is_movable(void* self);
void q_tabbar_set_movable(void* self, bool movable);
bool q_tabbar_document_mode(void* self);
void q_tabbar_set_document_mode(void* self, bool set);
bool q_tabbar_auto_hide(void* self);
void q_tabbar_set_auto_hide(void* self, bool hide);
bool q_tabbar_change_current_on_drag(void* self);
void q_tabbar_set_change_current_on_drag(void* self, bool change);
const char* q_tabbar_accessible_tab_name(void* self, int index);
void q_tabbar_set_accessible_tab_name(void* self, int index, const char* name);
void q_tabbar_set_current_index(void* self, int index);
void q_tabbar_current_changed(void* self, int index);
void q_tabbar_on_current_changed(void* self, void (*slot)(void*, int));
void q_tabbar_tab_close_requested(void* self, int index);
void q_tabbar_on_tab_close_requested(void* self, void (*slot)(void*, int));
void q_tabbar_tab_moved(void* self, int from, int to);
void q_tabbar_on_tab_moved(void* self, void (*slot)(void*, int, int));
void q_tabbar_tab_bar_clicked(void* self, int index);
void q_tabbar_on_tab_bar_clicked(void* self, void (*slot)(void*, int));
void q_tabbar_tab_bar_double_clicked(void* self, int index);
void q_tabbar_on_tab_bar_double_clicked(void* self, void (*slot)(void*, int));
QSize* q_tabbar_tab_size_hint(void* self, int index);
void q_tabbar_on_tab_size_hint(void* self, QSize* (*slot)(void*, int));
QSize* q_tabbar_qbase_tab_size_hint(void* self, int index);
QSize* q_tabbar_minimum_tab_size_hint(void* self, int index);
void q_tabbar_on_minimum_tab_size_hint(void* self, QSize* (*slot)(void*, int));
QSize* q_tabbar_qbase_minimum_tab_size_hint(void* self, int index);
void q_tabbar_tab_inserted(void* self, int index);
void q_tabbar_on_tab_inserted(void* self, void (*slot)(void*, int));
void q_tabbar_qbase_tab_inserted(void* self, int index);
void q_tabbar_tab_removed(void* self, int index);
void q_tabbar_on_tab_removed(void* self, void (*slot)(void*, int));
void q_tabbar_qbase_tab_removed(void* self, int index);
void q_tabbar_tab_layout_change(void* self);
void q_tabbar_on_tab_layout_change(void* self, void (*slot)());
void q_tabbar_qbase_tab_layout_change(void* self);
bool q_tabbar_event(void* self, void* param1);
void q_tabbar_on_event(void* self, bool (*slot)(void*, void*));
bool q_tabbar_qbase_event(void* self, void* param1);
void q_tabbar_resize_event(void* self, void* param1);
void q_tabbar_on_resize_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_resize_event(void* self, void* param1);
void q_tabbar_show_event(void* self, void* param1);
void q_tabbar_on_show_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_show_event(void* self, void* param1);
void q_tabbar_hide_event(void* self, void* param1);
void q_tabbar_on_hide_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_hide_event(void* self, void* param1);
void q_tabbar_paint_event(void* self, void* param1);
void q_tabbar_on_paint_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_paint_event(void* self, void* param1);
void q_tabbar_mouse_press_event(void* self, void* param1);
void q_tabbar_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_mouse_press_event(void* self, void* param1);
void q_tabbar_mouse_move_event(void* self, void* param1);
void q_tabbar_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_mouse_move_event(void* self, void* param1);
void q_tabbar_mouse_release_event(void* self, void* param1);
void q_tabbar_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_mouse_release_event(void* self, void* param1);
void q_tabbar_mouse_double_click_event(void* self, void* param1);
void q_tabbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_mouse_double_click_event(void* self, void* param1);
void q_tabbar_wheel_event(void* self, void* event);
void q_tabbar_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_wheel_event(void* self, void* event);
void q_tabbar_key_press_event(void* self, void* param1);
void q_tabbar_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_key_press_event(void* self, void* param1);
void q_tabbar_change_event(void* self, void* param1);
void q_tabbar_on_change_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_change_event(void* self, void* param1);
void q_tabbar_timer_event(void* self, void* event);
void q_tabbar_on_timer_event(void* self, void (*slot)(void*, void*));
void q_tabbar_qbase_timer_event(void* self, void* event);
void q_tabbar_init_style_option(void* self, void* option, int tabIndex);
void q_tabbar_on_init_style_option(void* self, void (*slot)(void*, void*, int));
void q_tabbar_qbase_init_style_option(void* self, void* option, int tabIndex);
const char* q_tabbar_tr2(const char* s, const char* c);
const char* q_tabbar_tr3(const char* s, const char* c, int n);
uintptr_t q_tabbar_win_id(void* self);
void q_tabbar_create_win_id(void* self);
uintptr_t q_tabbar_internal_win_id(void* self);
uintptr_t q_tabbar_effective_win_id(void* self);
QStyle* q_tabbar_style(void* self);
void q_tabbar_set_style(void* self, void* style);
bool q_tabbar_is_top_level(void* self);
bool q_tabbar_is_window(void* self);
bool q_tabbar_is_modal(void* self);
int64_t q_tabbar_window_modality(void* self);
void q_tabbar_set_window_modality(void* self, int64_t windowModality);
bool q_tabbar_is_enabled(void* self);
bool q_tabbar_is_enabled_to(void* self, void* param1);
void q_tabbar_set_enabled(void* self, bool enabled);
void q_tabbar_set_disabled(void* self, bool disabled);
void q_tabbar_set_window_modified(void* self, bool windowModified);
QRect* q_tabbar_frame_geometry(void* self);
QRect* q_tabbar_geometry(void* self);
QRect* q_tabbar_normal_geometry(void* self);
int32_t q_tabbar_x(void* self);
int32_t q_tabbar_y(void* self);
QPoint* q_tabbar_pos(void* self);
QSize* q_tabbar_frame_size(void* self);
QSize* q_tabbar_size(void* self);
int32_t q_tabbar_width(void* self);
int32_t q_tabbar_height(void* self);
QRect* q_tabbar_rect(void* self);
QRect* q_tabbar_children_rect(void* self);
QRegion* q_tabbar_children_region(void* self);
QSize* q_tabbar_minimum_size(void* self);
QSize* q_tabbar_maximum_size(void* self);
int32_t q_tabbar_minimum_width(void* self);
int32_t q_tabbar_minimum_height(void* self);
int32_t q_tabbar_maximum_width(void* self);
int32_t q_tabbar_maximum_height(void* self);
void q_tabbar_set_minimum_size(void* self, void* minimumSize);
void q_tabbar_set_minimum_size2(void* self, int minw, int minh);
void q_tabbar_set_maximum_size(void* self, void* maximumSize);
void q_tabbar_set_maximum_size2(void* self, int maxw, int maxh);
void q_tabbar_set_minimum_width(void* self, int minw);
void q_tabbar_set_minimum_height(void* self, int minh);
void q_tabbar_set_maximum_width(void* self, int maxw);
void q_tabbar_set_maximum_height(void* self, int maxh);
QSize* q_tabbar_size_increment(void* self);
void q_tabbar_set_size_increment(void* self, void* sizeIncrement);
void q_tabbar_set_size_increment2(void* self, int w, int h);
QSize* q_tabbar_base_size(void* self);
void q_tabbar_set_base_size(void* self, void* baseSize);
void q_tabbar_set_base_size2(void* self, int basew, int baseh);
void q_tabbar_set_fixed_size(void* self, void* fixedSize);
void q_tabbar_set_fixed_size2(void* self, int w, int h);
void q_tabbar_set_fixed_width(void* self, int w);
void q_tabbar_set_fixed_height(void* self, int h);
QPointF* q_tabbar_map_to_global(void* self, void* param1);
QPoint* q_tabbar_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_tabbar_map_from_global(void* self, void* param1);
QPoint* q_tabbar_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_tabbar_map_to_parent(void* self, void* param1);
QPoint* q_tabbar_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_tabbar_map_from_parent(void* self, void* param1);
QPoint* q_tabbar_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_tabbar_map_to(void* self, void* param1, void* param2);
QPoint* q_tabbar_map_to2(void* self, void* param1, void* param2);
QPointF* q_tabbar_map_from(void* self, void* param1, void* param2);
QPoint* q_tabbar_map_from2(void* self, void* param1, void* param2);
QWidget* q_tabbar_window(void* self);
QWidget* q_tabbar_native_parent_widget(void* self);
QWidget* q_tabbar_top_level_widget(void* self);
QPalette* q_tabbar_palette(void* self);
void q_tabbar_set_palette(void* self, void* palette);
void q_tabbar_set_background_role(void* self, int64_t backgroundRole);
int64_t q_tabbar_background_role(void* self);
void q_tabbar_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_tabbar_foreground_role(void* self);
QFont* q_tabbar_font(void* self);
void q_tabbar_set_font(void* self, void* font);
QFontMetrics* q_tabbar_font_metrics(void* self);
QFontInfo* q_tabbar_font_info(void* self);
QCursor* q_tabbar_cursor(void* self);
void q_tabbar_set_cursor(void* self, void* cursor);
void q_tabbar_unset_cursor(void* self);
void q_tabbar_set_mouse_tracking(void* self, bool enable);
bool q_tabbar_has_mouse_tracking(void* self);
bool q_tabbar_under_mouse(void* self);
void q_tabbar_set_tablet_tracking(void* self, bool enable);
bool q_tabbar_has_tablet_tracking(void* self);
void q_tabbar_set_mask(void* self, void* mask);
void q_tabbar_set_mask_with_mask(void* self, void* mask);
QRegion* q_tabbar_mask(void* self);
void q_tabbar_clear_mask(void* self);
void q_tabbar_render(void* self, void* target);
void q_tabbar_render_with_painter(void* self, void* painter);
QPixmap* q_tabbar_grab(void* self);
QGraphicsEffect* q_tabbar_graphics_effect(void* self);
void q_tabbar_set_graphics_effect(void* self, void* effect);
void q_tabbar_grab_gesture(void* self, int64_t typeVal);
void q_tabbar_ungrab_gesture(void* self, int64_t typeVal);
void q_tabbar_set_window_title(void* self, const char* windowTitle);
void q_tabbar_set_style_sheet(void* self, const char* styleSheet);
const char* q_tabbar_style_sheet(void* self);
const char* q_tabbar_window_title(void* self);
void q_tabbar_set_window_icon(void* self, void* icon);
QIcon* q_tabbar_window_icon(void* self);
void q_tabbar_set_window_icon_text(void* self, const char* windowIconText);
const char* q_tabbar_window_icon_text(void* self);
void q_tabbar_set_window_role(void* self, const char* windowRole);
const char* q_tabbar_window_role(void* self);
void q_tabbar_set_window_file_path(void* self, const char* filePath);
const char* q_tabbar_window_file_path(void* self);
void q_tabbar_set_window_opacity(void* self, double level);
double q_tabbar_window_opacity(void* self);
bool q_tabbar_is_window_modified(void* self);
void q_tabbar_set_tool_tip(void* self, const char* toolTip);
const char* q_tabbar_tool_tip(void* self);
void q_tabbar_set_tool_tip_duration(void* self, int msec);
int32_t q_tabbar_tool_tip_duration(void* self);
void q_tabbar_set_status_tip(void* self, const char* statusTip);
const char* q_tabbar_status_tip(void* self);
void q_tabbar_set_whats_this(void* self, const char* whatsThis);
const char* q_tabbar_whats_this(void* self);
const char* q_tabbar_accessible_name(void* self);
void q_tabbar_set_accessible_name(void* self, const char* name);
const char* q_tabbar_accessible_description(void* self);
void q_tabbar_set_accessible_description(void* self, const char* description);
void q_tabbar_set_layout_direction(void* self, int64_t direction);
int64_t q_tabbar_layout_direction(void* self);
void q_tabbar_unset_layout_direction(void* self);
void q_tabbar_set_locale(void* self, void* locale);
QLocale* q_tabbar_locale(void* self);
void q_tabbar_unset_locale(void* self);
bool q_tabbar_is_right_to_left(void* self);
bool q_tabbar_is_left_to_right(void* self);
void q_tabbar_set_focus(void* self);
bool q_tabbar_is_active_window(void* self);
void q_tabbar_activate_window(void* self);
void q_tabbar_clear_focus(void* self);
void q_tabbar_set_focus_with_reason(void* self, int64_t reason);
int64_t q_tabbar_focus_policy(void* self);
void q_tabbar_set_focus_policy(void* self, int64_t policy);
bool q_tabbar_has_focus(void* self);
void q_tabbar_set_tab_order(void* param1, void* param2);
void q_tabbar_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_tabbar_focus_proxy(void* self);
int64_t q_tabbar_context_menu_policy(void* self);
void q_tabbar_set_context_menu_policy(void* self, int64_t policy);
void q_tabbar_grab_mouse(void* self);
void q_tabbar_grab_mouse_with_q_cursor(void* self, void* param1);
void q_tabbar_release_mouse(void* self);
void q_tabbar_grab_keyboard(void* self);
void q_tabbar_release_keyboard(void* self);
int32_t q_tabbar_grab_shortcut(void* self, void* key);
void q_tabbar_release_shortcut(void* self, int id);
void q_tabbar_set_shortcut_enabled(void* self, int id);
void q_tabbar_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_tabbar_mouse_grabber();
QWidget* q_tabbar_keyboard_grabber();
bool q_tabbar_updates_enabled(void* self);
void q_tabbar_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_tabbar_graphics_proxy_widget(void* self);
void q_tabbar_update(void* self);
void q_tabbar_repaint(void* self);
void q_tabbar_update2(void* self, int x, int y, int w, int h);
void q_tabbar_update_with_q_rect(void* self, void* param1);
void q_tabbar_update_with_q_region(void* self, void* param1);
void q_tabbar_repaint2(void* self, int x, int y, int w, int h);
void q_tabbar_repaint_with_q_rect(void* self, void* param1);
void q_tabbar_repaint_with_q_region(void* self, void* param1);
void q_tabbar_set_hidden(void* self, bool hidden);
void q_tabbar_show(void* self);
void q_tabbar_hide(void* self);
void q_tabbar_show_minimized(void* self);
void q_tabbar_show_maximized(void* self);
void q_tabbar_show_full_screen(void* self);
void q_tabbar_show_normal(void* self);
bool q_tabbar_close(void* self);
void q_tabbar_raise(void* self);
void q_tabbar_lower(void* self);
void q_tabbar_stack_under(void* self, void* param1);
void q_tabbar_move(void* self, int x, int y);
void q_tabbar_move_with_q_point(void* self, void* param1);
void q_tabbar_resize(void* self, int w, int h);
void q_tabbar_resize_with_q_size(void* self, void* param1);
void q_tabbar_set_geometry(void* self, int x, int y, int w, int h);
void q_tabbar_set_geometry_with_geometry(void* self, void* geometry);
char* q_tabbar_save_geometry(void* self);
bool q_tabbar_restore_geometry(void* self, const char* geometry);
void q_tabbar_adjust_size(void* self);
bool q_tabbar_is_visible(void* self);
bool q_tabbar_is_visible_to(void* self, void* param1);
bool q_tabbar_is_hidden(void* self);
bool q_tabbar_is_minimized(void* self);
bool q_tabbar_is_maximized(void* self);
bool q_tabbar_is_full_screen(void* self);
int64_t q_tabbar_window_state(void* self);
void q_tabbar_set_window_state(void* self, int64_t state);
void q_tabbar_override_window_state(void* self, int64_t state);
QSizePolicy* q_tabbar_size_policy(void* self);
void q_tabbar_set_size_policy(void* self, void* sizePolicy);
void q_tabbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_tabbar_visible_region(void* self);
void q_tabbar_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_tabbar_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_tabbar_contents_margins(void* self);
QRect* q_tabbar_contents_rect(void* self);
QLayout* q_tabbar_layout(void* self);
void q_tabbar_set_layout(void* self, void* layout);
void q_tabbar_update_geometry(void* self);
void q_tabbar_set_parent(void* self, void* parent);
void q_tabbar_set_parent2(void* self, void* parent, int64_t f);
void q_tabbar_scroll(void* self, int dx, int dy);
void q_tabbar_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_tabbar_focus_widget(void* self);
QWidget* q_tabbar_next_in_focus_chain(void* self);
QWidget* q_tabbar_previous_in_focus_chain(void* self);
bool q_tabbar_accept_drops(void* self);
void q_tabbar_set_accept_drops(void* self, bool on);
void q_tabbar_add_action(void* self, void* action);
void q_tabbar_add_actions(void* self, void* actions[]);
void q_tabbar_insert_actions(void* self, void* before, void* actions[]);
void q_tabbar_insert_action(void* self, void* before, void* action);
void q_tabbar_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_tabbar_actions(void* self);
QAction* q_tabbar_add_action_with_text(void* self, const char* text);
QAction* q_tabbar_add_action2(void* self, void* icon, const char* text);
QAction* q_tabbar_add_action3(void* self, const char* text, void* shortcut);
QAction* q_tabbar_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_tabbar_parent_widget(void* self);
void q_tabbar_set_window_flags(void* self, int64_t typeVal);
int64_t q_tabbar_window_flags(void* self);
void q_tabbar_set_window_flag(void* self, int64_t param1);
void q_tabbar_override_window_flags(void* self, int64_t typeVal);
int64_t q_tabbar_window_type(void* self);
QWidget* q_tabbar_find(uint64_t param1);
QWidget* q_tabbar_child_at(void* self, int x, int y);
QWidget* q_tabbar_child_at_with_q_point(void* self, void* p);
void q_tabbar_set_attribute(void* self, int64_t param1);
bool q_tabbar_test_attribute(void* self, int64_t param1);
void q_tabbar_ensure_polished(void* self);
bool q_tabbar_is_ancestor_of(void* self, void* child);
bool q_tabbar_auto_fill_background(void* self);
void q_tabbar_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_tabbar_backing_store(void* self);
QWindow* q_tabbar_window_handle(void* self);
QScreen* q_tabbar_screen(void* self);
void q_tabbar_set_screen(void* self, void* screen);
QWidget* q_tabbar_create_window_container(void* window);
void q_tabbar_window_title_changed(void* self, const char* title);
void q_tabbar_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_tabbar_window_icon_changed(void* self, void* icon);
void q_tabbar_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_tabbar_window_icon_text_changed(void* self, const char* iconText);
void q_tabbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_tabbar_custom_context_menu_requested(void* self, void* pos);
void q_tabbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_tabbar_input_method_hints(void* self);
void q_tabbar_set_input_method_hints(void* self, int64_t hints);
void q_tabbar_render2(void* self, void* target, void* targetOffset);
void q_tabbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_tabbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_tabbar_render22(void* self, void* painter, void* targetOffset);
void q_tabbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_tabbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_tabbar_grab1(void* self, void* rectangle);
void q_tabbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_tabbar_grab_shortcut2(void* self, void* key, int64_t context);
void q_tabbar_set_shortcut_enabled2(void* self, int id, bool enable);
void q_tabbar_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_tabbar_set_window_flag2(void* self, int64_t param1, bool on);
void q_tabbar_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_tabbar_create_window_container2(void* window, void* parent);
QWidget* q_tabbar_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_tabbar_object_name(void* self);
void q_tabbar_set_object_name(void* self, const char* name);
bool q_tabbar_is_widget_type(void* self);
bool q_tabbar_is_window_type(void* self);
bool q_tabbar_is_quick_item_type(void* self);
bool q_tabbar_signals_blocked(void* self);
bool q_tabbar_block_signals(void* self, bool b);
QThread* q_tabbar_thread(void* self);
void q_tabbar_move_to_thread(void* self, void* thread);
int32_t q_tabbar_start_timer(void* self, int interval);
void q_tabbar_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_tabbar_children(void* self);
void q_tabbar_install_event_filter(void* self, void* filterObj);
void q_tabbar_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_tabbar_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_tabbar_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_tabbar_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_tabbar_disconnect_with_q_meta_object_connection(void* param1);
void q_tabbar_dump_object_tree(void* self);
void q_tabbar_dump_object_info(void* self);
bool q_tabbar_set_property(void* self, const char* name, void* value);
QVariant* q_tabbar_property(void* self, const char* name);
const char** q_tabbar_dynamic_property_names(void* self);
QBindingStorage* q_tabbar_binding_storage(void* self);
QBindingStorage* q_tabbar_binding_storage2(void* self);
void q_tabbar_destroyed(void* self);
void q_tabbar_on_destroyed(void* self, void (*slot)(void*));
QObject* q_tabbar_parent(void* self);
bool q_tabbar_inherits(void* self, const char* classname);
void q_tabbar_delete_later(void* self);
int32_t q_tabbar_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_tabbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_tabbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_tabbar_destroyed1(void* self, void* param1);
void q_tabbar_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_tabbar_painting_active(void* self);
int32_t q_tabbar_width_m_m(void* self);
int32_t q_tabbar_height_m_m(void* self);
int32_t q_tabbar_logical_dpi_x(void* self);
int32_t q_tabbar_logical_dpi_y(void* self);
int32_t q_tabbar_physical_dpi_x(void* self);
int32_t q_tabbar_physical_dpi_y(void* self);
double q_tabbar_device_pixel_ratio(void* self);
double q_tabbar_device_pixel_ratio_f(void* self);
int32_t q_tabbar_color_count(void* self);
int32_t q_tabbar_depth(void* self);
double q_tabbar_device_pixel_ratio_f_scale();
int32_t q_tabbar_dev_type(void* self);
int32_t q_tabbar_qbase_dev_type(void* self);
void q_tabbar_on_dev_type(void* self, int32_t (*slot)());
void q_tabbar_set_visible(void* self, bool visible);
void q_tabbar_qbase_set_visible(void* self, bool visible);
void q_tabbar_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_tabbar_height_for_width(void* self, int param1);
int32_t q_tabbar_qbase_height_for_width(void* self, int param1);
void q_tabbar_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_tabbar_has_height_for_width(void* self);
bool q_tabbar_qbase_has_height_for_width(void* self);
void q_tabbar_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_tabbar_paint_engine(void* self);
QPaintEngine* q_tabbar_qbase_paint_engine(void* self);
void q_tabbar_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_tabbar_key_release_event(void* self, void* event);
void q_tabbar_qbase_key_release_event(void* self, void* event);
void q_tabbar_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_tabbar_focus_in_event(void* self, void* event);
void q_tabbar_qbase_focus_in_event(void* self, void* event);
void q_tabbar_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_tabbar_focus_out_event(void* self, void* event);
void q_tabbar_qbase_focus_out_event(void* self, void* event);
void q_tabbar_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_tabbar_enter_event(void* self, void* event);
void q_tabbar_qbase_enter_event(void* self, void* event);
void q_tabbar_on_enter_event(void* self, void (*slot)(void*, void*));
void q_tabbar_leave_event(void* self, void* event);
void q_tabbar_qbase_leave_event(void* self, void* event);
void q_tabbar_on_leave_event(void* self, void (*slot)(void*, void*));
void q_tabbar_move_event(void* self, void* event);
void q_tabbar_qbase_move_event(void* self, void* event);
void q_tabbar_on_move_event(void* self, void (*slot)(void*, void*));
void q_tabbar_close_event(void* self, void* event);
void q_tabbar_qbase_close_event(void* self, void* event);
void q_tabbar_on_close_event(void* self, void (*slot)(void*, void*));
void q_tabbar_context_menu_event(void* self, void* event);
void q_tabbar_qbase_context_menu_event(void* self, void* event);
void q_tabbar_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_tabbar_tablet_event(void* self, void* event);
void q_tabbar_qbase_tablet_event(void* self, void* event);
void q_tabbar_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_tabbar_action_event(void* self, void* event);
void q_tabbar_qbase_action_event(void* self, void* event);
void q_tabbar_on_action_event(void* self, void (*slot)(void*, void*));
void q_tabbar_drag_enter_event(void* self, void* event);
void q_tabbar_qbase_drag_enter_event(void* self, void* event);
void q_tabbar_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_tabbar_drag_move_event(void* self, void* event);
void q_tabbar_qbase_drag_move_event(void* self, void* event);
void q_tabbar_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_tabbar_drag_leave_event(void* self, void* event);
void q_tabbar_qbase_drag_leave_event(void* self, void* event);
void q_tabbar_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_tabbar_drop_event(void* self, void* event);
void q_tabbar_qbase_drop_event(void* self, void* event);
void q_tabbar_on_drop_event(void* self, void (*slot)(void*, void*));
bool q_tabbar_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_tabbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_tabbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_tabbar_metric(void* self, int64_t param1);
int32_t q_tabbar_qbase_metric(void* self, int64_t param1);
void q_tabbar_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_tabbar_init_painter(void* self, void* painter);
void q_tabbar_qbase_init_painter(void* self, void* painter);
void q_tabbar_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_tabbar_redirected(void* self, void* offset);
QPaintDevice* q_tabbar_qbase_redirected(void* self, void* offset);
void q_tabbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_tabbar_shared_painter(void* self);
QPainter* q_tabbar_qbase_shared_painter(void* self);
void q_tabbar_on_shared_painter(void* self, QPainter* (*slot)());
void q_tabbar_input_method_event(void* self, void* param1);
void q_tabbar_qbase_input_method_event(void* self, void* param1);
void q_tabbar_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_tabbar_input_method_query(void* self, int64_t param1);
QVariant* q_tabbar_qbase_input_method_query(void* self, int64_t param1);
void q_tabbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_tabbar_focus_next_prev_child(void* self, bool next);
bool q_tabbar_qbase_focus_next_prev_child(void* self, bool next);
void q_tabbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_tabbar_event_filter(void* self, void* watched, void* event);
bool q_tabbar_qbase_event_filter(void* self, void* watched, void* event);
void q_tabbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_tabbar_child_event(void* self, void* event);
void q_tabbar_qbase_child_event(void* self, void* event);
void q_tabbar_on_child_event(void* self, void (*slot)(void*, void*));
void q_tabbar_custom_event(void* self, void* event);
void q_tabbar_qbase_custom_event(void* self, void* event);
void q_tabbar_on_custom_event(void* self, void (*slot)(void*, void*));
void q_tabbar_connect_notify(void* self, void* signal);
void q_tabbar_qbase_connect_notify(void* self, void* signal);
void q_tabbar_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_tabbar_disconnect_notify(void* self, void* signal);
void q_tabbar_qbase_disconnect_notify(void* self, void* signal);
void q_tabbar_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_tabbar_update_micro_focus(void* self);
void q_tabbar_qbase_update_micro_focus(void* self);
void q_tabbar_on_update_micro_focus(void* self, void (*slot)());
void q_tabbar_create(void* self);
void q_tabbar_qbase_create(void* self);
void q_tabbar_on_create(void* self, void (*slot)());
void q_tabbar_destroy(void* self);
void q_tabbar_qbase_destroy(void* self);
void q_tabbar_on_destroy(void* self, void (*slot)());
bool q_tabbar_focus_next_child(void* self);
bool q_tabbar_qbase_focus_next_child(void* self);
void q_tabbar_on_focus_next_child(void* self, bool (*slot)());
bool q_tabbar_focus_previous_child(void* self);
bool q_tabbar_qbase_focus_previous_child(void* self);
void q_tabbar_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_tabbar_sender(void* self);
QObject* q_tabbar_qbase_sender(void* self);
void q_tabbar_on_sender(void* self, QObject* (*slot)());
int32_t q_tabbar_sender_signal_index(void* self);
int32_t q_tabbar_qbase_sender_signal_index(void* self);
void q_tabbar_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_tabbar_receivers(void* self, const char* signal);
int32_t q_tabbar_qbase_receivers(void* self, const char* signal);
void q_tabbar_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_tabbar_is_signal_connected(void* self, void* signal);
bool q_tabbar_qbase_is_signal_connected(void* self, void* signal);
void q_tabbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_tabbar_delete(void* self);

/// https://doc.qt.io/qt-6/qtabbar.html#types

typedef enum {
    QTABBAR_SHAPE_ROUNDEDNORTH = 0,
    QTABBAR_SHAPE_ROUNDEDSOUTH = 1,
    QTABBAR_SHAPE_ROUNDEDWEST = 2,
    QTABBAR_SHAPE_ROUNDEDEAST = 3,
    QTABBAR_SHAPE_TRIANGULARNORTH = 4,
    QTABBAR_SHAPE_TRIANGULARSOUTH = 5,
    QTABBAR_SHAPE_TRIANGULARWEST = 6,
    QTABBAR_SHAPE_TRIANGULAREAST = 7
} QTabBar__Shape;

typedef enum {
    QTABBAR_BUTTONPOSITION_LEFTSIDE = 0,
    QTABBAR_BUTTONPOSITION_RIGHTSIDE = 1
} QTabBar__ButtonPosition;

typedef enum {
    QTABBAR_SELECTIONBEHAVIOR_SELECTLEFTTAB = 0,
    QTABBAR_SELECTIONBEHAVIOR_SELECTRIGHTTAB = 1,
    QTABBAR_SELECTIONBEHAVIOR_SELECTPREVIOUSTAB = 2
} QTabBar__SelectionBehavior;

#endif
