#pragma once
#ifndef SRCQT6C_LIBQABSTRACTSLIDER_H
#define SRCQT6C_LIBQABSTRACTSLIDER_H

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
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QAbstractSlider* q_abstractslider_new(void* parent);
QAbstractSlider* q_abstractslider_new2();
QMetaObject* q_abstractslider_meta_object(void* self);
void* q_abstractslider_metacast(void* self, const char* param1);
int32_t q_abstractslider_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractslider_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractslider_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractslider_tr(const char* s);
int64_t q_abstractslider_orientation(void* self);
void q_abstractslider_set_minimum(void* self, int minimum);
int32_t q_abstractslider_minimum(void* self);
void q_abstractslider_set_maximum(void* self, int maximum);
int32_t q_abstractslider_maximum(void* self);
void q_abstractslider_set_single_step(void* self, int singleStep);
int32_t q_abstractslider_single_step(void* self);
void q_abstractslider_set_page_step(void* self, int pageStep);
int32_t q_abstractslider_page_step(void* self);
void q_abstractslider_set_tracking(void* self, bool enable);
bool q_abstractslider_has_tracking(void* self);
void q_abstractslider_set_slider_down(void* self, bool sliderDown);
bool q_abstractslider_is_slider_down(void* self);
void q_abstractslider_set_slider_position(void* self, int sliderPosition);
int32_t q_abstractslider_slider_position(void* self);
void q_abstractslider_set_inverted_appearance(void* self, bool invertedAppearance);
bool q_abstractslider_inverted_appearance(void* self);
void q_abstractslider_set_inverted_controls(void* self, bool invertedControls);
bool q_abstractslider_inverted_controls(void* self);
int32_t q_abstractslider_value(void* self);
void q_abstractslider_trigger_action(void* self, int64_t action);
void q_abstractslider_set_value(void* self, int value);
void q_abstractslider_set_orientation(void* self, int64_t orientation);
void q_abstractslider_set_range(void* self, int min, int max);
void q_abstractslider_value_changed(void* self, int value);
void q_abstractslider_on_value_changed(void* self, void (*slot)(void*, int));
void q_abstractslider_slider_pressed(void* self);
void q_abstractslider_on_slider_pressed(void* self, void (*slot)(void*));
void q_abstractslider_slider_moved(void* self, int position);
void q_abstractslider_on_slider_moved(void* self, void (*slot)(void*, int));
void q_abstractslider_slider_released(void* self);
void q_abstractslider_on_slider_released(void* self, void (*slot)(void*));
void q_abstractslider_range_changed(void* self, int min, int max);
void q_abstractslider_on_range_changed(void* self, void (*slot)(void*, int, int));
void q_abstractslider_action_triggered(void* self, int action);
void q_abstractslider_on_action_triggered(void* self, void (*slot)(void*, int));
bool q_abstractslider_event(void* self, void* e);
void q_abstractslider_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractslider_qbase_event(void* self, void* e);
void q_abstractslider_set_repeat_action(void* self, int64_t action);
void q_abstractslider_on_set_repeat_action(void* self, void (*slot)(void*, int64_t));
void q_abstractslider_qbase_set_repeat_action(void* self, int64_t action);
int64_t q_abstractslider_repeat_action(void* self);
void q_abstractslider_on_repeat_action(void* self, int64_t (*slot)());
int64_t q_abstractslider_qbase_repeat_action(void* self);
void q_abstractslider_slider_change(void* self, int64_t change);
void q_abstractslider_on_slider_change(void* self, void (*slot)(void*, int64_t));
void q_abstractslider_qbase_slider_change(void* self, int64_t change);
void q_abstractslider_key_press_event(void* self, void* ev);
void q_abstractslider_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_qbase_key_press_event(void* self, void* ev);
void q_abstractslider_timer_event(void* self, void* param1);
void q_abstractslider_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_qbase_timer_event(void* self, void* param1);
void q_abstractslider_wheel_event(void* self, void* e);
void q_abstractslider_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_qbase_wheel_event(void* self, void* e);
void q_abstractslider_change_event(void* self, void* e);
void q_abstractslider_on_change_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_qbase_change_event(void* self, void* e);
const char* q_abstractslider_tr2(const char* s, const char* c);
const char* q_abstractslider_tr3(const char* s, const char* c, int n);
void q_abstractslider_set_repeat_action2(void* self, int64_t action, int thresholdTime);
void q_abstractslider_on_set_repeat_action2(void* self, void (*slot)(void*, int64_t, int));
void q_abstractslider_qbase_set_repeat_action2(void* self, int64_t action, int thresholdTime);
void q_abstractslider_set_repeat_action3(void* self, int64_t action, int thresholdTime, int repeatTime);
void q_abstractslider_on_set_repeat_action3(void* self, void (*slot)(void*, int64_t, int, int));
void q_abstractslider_qbase_set_repeat_action3(void* self, int64_t action, int thresholdTime, int repeatTime);
uintptr_t q_abstractslider_win_id(void* self);
void q_abstractslider_create_win_id(void* self);
uintptr_t q_abstractslider_internal_win_id(void* self);
uintptr_t q_abstractslider_effective_win_id(void* self);
QStyle* q_abstractslider_style(void* self);
void q_abstractslider_set_style(void* self, void* style);
bool q_abstractslider_is_top_level(void* self);
bool q_abstractslider_is_window(void* self);
bool q_abstractslider_is_modal(void* self);
int64_t q_abstractslider_window_modality(void* self);
void q_abstractslider_set_window_modality(void* self, int64_t windowModality);
bool q_abstractslider_is_enabled(void* self);
bool q_abstractslider_is_enabled_to(void* self, void* param1);
void q_abstractslider_set_enabled(void* self, bool enabled);
void q_abstractslider_set_disabled(void* self, bool disabled);
void q_abstractslider_set_window_modified(void* self, bool windowModified);
QRect* q_abstractslider_frame_geometry(void* self);
QRect* q_abstractslider_geometry(void* self);
QRect* q_abstractslider_normal_geometry(void* self);
int32_t q_abstractslider_x(void* self);
int32_t q_abstractslider_y(void* self);
QPoint* q_abstractslider_pos(void* self);
QSize* q_abstractslider_frame_size(void* self);
QSize* q_abstractslider_size(void* self);
int32_t q_abstractslider_width(void* self);
int32_t q_abstractslider_height(void* self);
QRect* q_abstractslider_rect(void* self);
QRect* q_abstractslider_children_rect(void* self);
QRegion* q_abstractslider_children_region(void* self);
QSize* q_abstractslider_minimum_size(void* self);
QSize* q_abstractslider_maximum_size(void* self);
int32_t q_abstractslider_minimum_width(void* self);
int32_t q_abstractslider_minimum_height(void* self);
int32_t q_abstractslider_maximum_width(void* self);
int32_t q_abstractslider_maximum_height(void* self);
void q_abstractslider_set_minimum_size(void* self, void* minimumSize);
void q_abstractslider_set_minimum_size2(void* self, int minw, int minh);
void q_abstractslider_set_maximum_size(void* self, void* maximumSize);
void q_abstractslider_set_maximum_size2(void* self, int maxw, int maxh);
void q_abstractslider_set_minimum_width(void* self, int minw);
void q_abstractslider_set_minimum_height(void* self, int minh);
void q_abstractslider_set_maximum_width(void* self, int maxw);
void q_abstractslider_set_maximum_height(void* self, int maxh);
QSize* q_abstractslider_size_increment(void* self);
void q_abstractslider_set_size_increment(void* self, void* sizeIncrement);
void q_abstractslider_set_size_increment2(void* self, int w, int h);
QSize* q_abstractslider_base_size(void* self);
void q_abstractslider_set_base_size(void* self, void* baseSize);
void q_abstractslider_set_base_size2(void* self, int basew, int baseh);
void q_abstractslider_set_fixed_size(void* self, void* fixedSize);
void q_abstractslider_set_fixed_size2(void* self, int w, int h);
void q_abstractslider_set_fixed_width(void* self, int w);
void q_abstractslider_set_fixed_height(void* self, int h);
QPointF* q_abstractslider_map_to_global(void* self, void* param1);
QPoint* q_abstractslider_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_abstractslider_map_from_global(void* self, void* param1);
QPoint* q_abstractslider_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_abstractslider_map_to_parent(void* self, void* param1);
QPoint* q_abstractslider_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractslider_map_from_parent(void* self, void* param1);
QPoint* q_abstractslider_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_abstractslider_map_to(void* self, void* param1, void* param2);
QPoint* q_abstractslider_map_to2(void* self, void* param1, void* param2);
QPointF* q_abstractslider_map_from(void* self, void* param1, void* param2);
QPoint* q_abstractslider_map_from2(void* self, void* param1, void* param2);
QWidget* q_abstractslider_window(void* self);
QWidget* q_abstractslider_native_parent_widget(void* self);
QWidget* q_abstractslider_top_level_widget(void* self);
QPalette* q_abstractslider_palette(void* self);
void q_abstractslider_set_palette(void* self, void* palette);
void q_abstractslider_set_background_role(void* self, int64_t backgroundRole);
int64_t q_abstractslider_background_role(void* self);
void q_abstractslider_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_abstractslider_foreground_role(void* self);
QFont* q_abstractslider_font(void* self);
void q_abstractslider_set_font(void* self, void* font);
QFontMetrics* q_abstractslider_font_metrics(void* self);
QFontInfo* q_abstractslider_font_info(void* self);
QCursor* q_abstractslider_cursor(void* self);
void q_abstractslider_set_cursor(void* self, void* cursor);
void q_abstractslider_unset_cursor(void* self);
void q_abstractslider_set_mouse_tracking(void* self, bool enable);
bool q_abstractslider_has_mouse_tracking(void* self);
bool q_abstractslider_under_mouse(void* self);
void q_abstractslider_set_tablet_tracking(void* self, bool enable);
bool q_abstractslider_has_tablet_tracking(void* self);
void q_abstractslider_set_mask(void* self, void* mask);
void q_abstractslider_set_mask_with_mask(void* self, void* mask);
QRegion* q_abstractslider_mask(void* self);
void q_abstractslider_clear_mask(void* self);
void q_abstractslider_render(void* self, void* target);
void q_abstractslider_render_with_painter(void* self, void* painter);
QPixmap* q_abstractslider_grab(void* self);
QGraphicsEffect* q_abstractslider_graphics_effect(void* self);
void q_abstractslider_set_graphics_effect(void* self, void* effect);
void q_abstractslider_grab_gesture(void* self, int64_t typeVal);
void q_abstractslider_ungrab_gesture(void* self, int64_t typeVal);
void q_abstractslider_set_window_title(void* self, const char* windowTitle);
void q_abstractslider_set_style_sheet(void* self, const char* styleSheet);
const char* q_abstractslider_style_sheet(void* self);
const char* q_abstractslider_window_title(void* self);
void q_abstractslider_set_window_icon(void* self, void* icon);
QIcon* q_abstractslider_window_icon(void* self);
void q_abstractslider_set_window_icon_text(void* self, const char* windowIconText);
const char* q_abstractslider_window_icon_text(void* self);
void q_abstractslider_set_window_role(void* self, const char* windowRole);
const char* q_abstractslider_window_role(void* self);
void q_abstractslider_set_window_file_path(void* self, const char* filePath);
const char* q_abstractslider_window_file_path(void* self);
void q_abstractslider_set_window_opacity(void* self, double level);
double q_abstractslider_window_opacity(void* self);
bool q_abstractslider_is_window_modified(void* self);
void q_abstractslider_set_tool_tip(void* self, const char* toolTip);
const char* q_abstractslider_tool_tip(void* self);
void q_abstractslider_set_tool_tip_duration(void* self, int msec);
int32_t q_abstractslider_tool_tip_duration(void* self);
void q_abstractslider_set_status_tip(void* self, const char* statusTip);
const char* q_abstractslider_status_tip(void* self);
void q_abstractslider_set_whats_this(void* self, const char* whatsThis);
const char* q_abstractslider_whats_this(void* self);
const char* q_abstractslider_accessible_name(void* self);
void q_abstractslider_set_accessible_name(void* self, const char* name);
const char* q_abstractslider_accessible_description(void* self);
void q_abstractslider_set_accessible_description(void* self, const char* description);
void q_abstractslider_set_layout_direction(void* self, int64_t direction);
int64_t q_abstractslider_layout_direction(void* self);
void q_abstractslider_unset_layout_direction(void* self);
void q_abstractslider_set_locale(void* self, void* locale);
QLocale* q_abstractslider_locale(void* self);
void q_abstractslider_unset_locale(void* self);
bool q_abstractslider_is_right_to_left(void* self);
bool q_abstractslider_is_left_to_right(void* self);
void q_abstractslider_set_focus(void* self);
bool q_abstractslider_is_active_window(void* self);
void q_abstractslider_activate_window(void* self);
void q_abstractslider_clear_focus(void* self);
void q_abstractslider_set_focus_with_reason(void* self, int64_t reason);
int64_t q_abstractslider_focus_policy(void* self);
void q_abstractslider_set_focus_policy(void* self, int64_t policy);
bool q_abstractslider_has_focus(void* self);
void q_abstractslider_set_tab_order(void* param1, void* param2);
void q_abstractslider_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_abstractslider_focus_proxy(void* self);
int64_t q_abstractslider_context_menu_policy(void* self);
void q_abstractslider_set_context_menu_policy(void* self, int64_t policy);
void q_abstractslider_grab_mouse(void* self);
void q_abstractslider_grab_mouse_with_q_cursor(void* self, void* param1);
void q_abstractslider_release_mouse(void* self);
void q_abstractslider_grab_keyboard(void* self);
void q_abstractslider_release_keyboard(void* self);
int32_t q_abstractslider_grab_shortcut(void* self, void* key);
void q_abstractslider_release_shortcut(void* self, int id);
void q_abstractslider_set_shortcut_enabled(void* self, int id);
void q_abstractslider_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_abstractslider_mouse_grabber();
QWidget* q_abstractslider_keyboard_grabber();
bool q_abstractslider_updates_enabled(void* self);
void q_abstractslider_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_abstractslider_graphics_proxy_widget(void* self);
void q_abstractslider_update(void* self);
void q_abstractslider_repaint(void* self);
void q_abstractslider_update2(void* self, int x, int y, int w, int h);
void q_abstractslider_update_with_q_rect(void* self, void* param1);
void q_abstractslider_update_with_q_region(void* self, void* param1);
void q_abstractslider_repaint2(void* self, int x, int y, int w, int h);
void q_abstractslider_repaint_with_q_rect(void* self, void* param1);
void q_abstractslider_repaint_with_q_region(void* self, void* param1);
void q_abstractslider_set_hidden(void* self, bool hidden);
void q_abstractslider_show(void* self);
void q_abstractslider_hide(void* self);
void q_abstractslider_show_minimized(void* self);
void q_abstractslider_show_maximized(void* self);
void q_abstractslider_show_full_screen(void* self);
void q_abstractslider_show_normal(void* self);
bool q_abstractslider_close(void* self);
void q_abstractslider_raise(void* self);
void q_abstractslider_lower(void* self);
void q_abstractslider_stack_under(void* self, void* param1);
void q_abstractslider_move(void* self, int x, int y);
void q_abstractslider_move_with_q_point(void* self, void* param1);
void q_abstractslider_resize(void* self, int w, int h);
void q_abstractslider_resize_with_q_size(void* self, void* param1);
void q_abstractslider_set_geometry(void* self, int x, int y, int w, int h);
void q_abstractslider_set_geometry_with_geometry(void* self, void* geometry);
char* q_abstractslider_save_geometry(void* self);
bool q_abstractslider_restore_geometry(void* self, const char* geometry);
void q_abstractslider_adjust_size(void* self);
bool q_abstractslider_is_visible(void* self);
bool q_abstractslider_is_visible_to(void* self, void* param1);
bool q_abstractslider_is_hidden(void* self);
bool q_abstractslider_is_minimized(void* self);
bool q_abstractslider_is_maximized(void* self);
bool q_abstractslider_is_full_screen(void* self);
int64_t q_abstractslider_window_state(void* self);
void q_abstractslider_set_window_state(void* self, int64_t state);
void q_abstractslider_override_window_state(void* self, int64_t state);
QSizePolicy* q_abstractslider_size_policy(void* self);
void q_abstractslider_set_size_policy(void* self, void* sizePolicy);
void q_abstractslider_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_abstractslider_visible_region(void* self);
void q_abstractslider_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_abstractslider_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_abstractslider_contents_margins(void* self);
QRect* q_abstractslider_contents_rect(void* self);
QLayout* q_abstractslider_layout(void* self);
void q_abstractslider_set_layout(void* self, void* layout);
void q_abstractslider_update_geometry(void* self);
void q_abstractslider_set_parent(void* self, void* parent);
void q_abstractslider_set_parent2(void* self, void* parent, int64_t f);
void q_abstractslider_scroll(void* self, int dx, int dy);
void q_abstractslider_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_abstractslider_focus_widget(void* self);
QWidget* q_abstractslider_next_in_focus_chain(void* self);
QWidget* q_abstractslider_previous_in_focus_chain(void* self);
bool q_abstractslider_accept_drops(void* self);
void q_abstractslider_set_accept_drops(void* self, bool on);
void q_abstractslider_add_action(void* self, void* action);
void q_abstractslider_add_actions(void* self, void* actions[]);
void q_abstractslider_insert_actions(void* self, void* before, void* actions[]);
void q_abstractslider_insert_action(void* self, void* before, void* action);
void q_abstractslider_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_abstractslider_actions(void* self);
QAction* q_abstractslider_add_action_with_text(void* self, const char* text);
QAction* q_abstractslider_add_action2(void* self, void* icon, const char* text);
QAction* q_abstractslider_add_action3(void* self, const char* text, void* shortcut);
QAction* q_abstractslider_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_abstractslider_parent_widget(void* self);
void q_abstractslider_set_window_flags(void* self, int64_t typeVal);
int64_t q_abstractslider_window_flags(void* self);
void q_abstractslider_set_window_flag(void* self, int64_t param1);
void q_abstractslider_override_window_flags(void* self, int64_t typeVal);
int64_t q_abstractslider_window_type(void* self);
QWidget* q_abstractslider_find(uint64_t param1);
QWidget* q_abstractslider_child_at(void* self, int x, int y);
QWidget* q_abstractslider_child_at_with_q_point(void* self, void* p);
void q_abstractslider_set_attribute(void* self, int64_t param1);
bool q_abstractslider_test_attribute(void* self, int64_t param1);
void q_abstractslider_ensure_polished(void* self);
bool q_abstractslider_is_ancestor_of(void* self, void* child);
bool q_abstractslider_auto_fill_background(void* self);
void q_abstractslider_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_abstractslider_backing_store(void* self);
QWindow* q_abstractslider_window_handle(void* self);
QScreen* q_abstractslider_screen(void* self);
void q_abstractslider_set_screen(void* self, void* screen);
QWidget* q_abstractslider_create_window_container(void* window);
void q_abstractslider_window_title_changed(void* self, const char* title);
void q_abstractslider_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_abstractslider_window_icon_changed(void* self, void* icon);
void q_abstractslider_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_abstractslider_window_icon_text_changed(void* self, const char* iconText);
void q_abstractslider_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_abstractslider_custom_context_menu_requested(void* self, void* pos);
void q_abstractslider_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_abstractslider_input_method_hints(void* self);
void q_abstractslider_set_input_method_hints(void* self, int64_t hints);
void q_abstractslider_render2(void* self, void* target, void* targetOffset);
void q_abstractslider_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_abstractslider_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_abstractslider_render22(void* self, void* painter, void* targetOffset);
void q_abstractslider_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_abstractslider_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_abstractslider_grab1(void* self, void* rectangle);
void q_abstractslider_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_abstractslider_grab_shortcut2(void* self, void* key, int64_t context);
void q_abstractslider_set_shortcut_enabled2(void* self, int id, bool enable);
void q_abstractslider_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_abstractslider_set_window_flag2(void* self, int64_t param1, bool on);
void q_abstractslider_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_abstractslider_create_window_container2(void* window, void* parent);
QWidget* q_abstractslider_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_abstractslider_object_name(void* self);
void q_abstractslider_set_object_name(void* self, const char* name);
bool q_abstractslider_is_widget_type(void* self);
bool q_abstractslider_is_window_type(void* self);
bool q_abstractslider_is_quick_item_type(void* self);
bool q_abstractslider_signals_blocked(void* self);
bool q_abstractslider_block_signals(void* self, bool b);
QThread* q_abstractslider_thread(void* self);
void q_abstractslider_move_to_thread(void* self, void* thread);
int32_t q_abstractslider_start_timer(void* self, int interval);
void q_abstractslider_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractslider_children(void* self);
void q_abstractslider_install_event_filter(void* self, void* filterObj);
void q_abstractslider_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractslider_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractslider_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractslider_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractslider_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractslider_dump_object_tree(void* self);
void q_abstractslider_dump_object_info(void* self);
bool q_abstractslider_set_property(void* self, const char* name, void* value);
QVariant* q_abstractslider_property(void* self, const char* name);
const char** q_abstractslider_dynamic_property_names(void* self);
QBindingStorage* q_abstractslider_binding_storage(void* self);
QBindingStorage* q_abstractslider_binding_storage2(void* self);
void q_abstractslider_destroyed(void* self);
void q_abstractslider_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractslider_parent(void* self);
bool q_abstractslider_inherits(void* self, const char* classname);
void q_abstractslider_delete_later(void* self);
int32_t q_abstractslider_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractslider_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractslider_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractslider_destroyed1(void* self, void* param1);
void q_abstractslider_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractslider_painting_active(void* self);
int32_t q_abstractslider_width_m_m(void* self);
int32_t q_abstractslider_height_m_m(void* self);
int32_t q_abstractslider_logical_dpi_x(void* self);
int32_t q_abstractslider_logical_dpi_y(void* self);
int32_t q_abstractslider_physical_dpi_x(void* self);
int32_t q_abstractslider_physical_dpi_y(void* self);
double q_abstractslider_device_pixel_ratio(void* self);
double q_abstractslider_device_pixel_ratio_f(void* self);
int32_t q_abstractslider_color_count(void* self);
int32_t q_abstractslider_depth(void* self);
double q_abstractslider_device_pixel_ratio_f_scale();
int32_t q_abstractslider_dev_type(void* self);
int32_t q_abstractslider_qbase_dev_type(void* self);
void q_abstractslider_on_dev_type(void* self, int32_t (*slot)());
void q_abstractslider_set_visible(void* self, bool visible);
void q_abstractslider_qbase_set_visible(void* self, bool visible);
void q_abstractslider_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_abstractslider_size_hint(void* self);
QSize* q_abstractslider_qbase_size_hint(void* self);
void q_abstractslider_on_size_hint(void* self, QSize* (*slot)());
QSize* q_abstractslider_minimum_size_hint(void* self);
QSize* q_abstractslider_qbase_minimum_size_hint(void* self);
void q_abstractslider_on_minimum_size_hint(void* self, QSize* (*slot)());
int32_t q_abstractslider_height_for_width(void* self, int param1);
int32_t q_abstractslider_qbase_height_for_width(void* self, int param1);
void q_abstractslider_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_abstractslider_has_height_for_width(void* self);
bool q_abstractslider_qbase_has_height_for_width(void* self);
void q_abstractslider_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_abstractslider_paint_engine(void* self);
QPaintEngine* q_abstractslider_qbase_paint_engine(void* self);
void q_abstractslider_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_abstractslider_mouse_press_event(void* self, void* event);
void q_abstractslider_qbase_mouse_press_event(void* self, void* event);
void q_abstractslider_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_mouse_release_event(void* self, void* event);
void q_abstractslider_qbase_mouse_release_event(void* self, void* event);
void q_abstractslider_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_mouse_double_click_event(void* self, void* event);
void q_abstractslider_qbase_mouse_double_click_event(void* self, void* event);
void q_abstractslider_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_mouse_move_event(void* self, void* event);
void q_abstractslider_qbase_mouse_move_event(void* self, void* event);
void q_abstractslider_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_key_release_event(void* self, void* event);
void q_abstractslider_qbase_key_release_event(void* self, void* event);
void q_abstractslider_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_focus_in_event(void* self, void* event);
void q_abstractslider_qbase_focus_in_event(void* self, void* event);
void q_abstractslider_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_focus_out_event(void* self, void* event);
void q_abstractslider_qbase_focus_out_event(void* self, void* event);
void q_abstractslider_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_enter_event(void* self, void* event);
void q_abstractslider_qbase_enter_event(void* self, void* event);
void q_abstractslider_on_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_leave_event(void* self, void* event);
void q_abstractslider_qbase_leave_event(void* self, void* event);
void q_abstractslider_on_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_paint_event(void* self, void* event);
void q_abstractslider_qbase_paint_event(void* self, void* event);
void q_abstractslider_on_paint_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_move_event(void* self, void* event);
void q_abstractslider_qbase_move_event(void* self, void* event);
void q_abstractslider_on_move_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_resize_event(void* self, void* event);
void q_abstractslider_qbase_resize_event(void* self, void* event);
void q_abstractslider_on_resize_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_close_event(void* self, void* event);
void q_abstractslider_qbase_close_event(void* self, void* event);
void q_abstractslider_on_close_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_context_menu_event(void* self, void* event);
void q_abstractslider_qbase_context_menu_event(void* self, void* event);
void q_abstractslider_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_tablet_event(void* self, void* event);
void q_abstractslider_qbase_tablet_event(void* self, void* event);
void q_abstractslider_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_action_event(void* self, void* event);
void q_abstractslider_qbase_action_event(void* self, void* event);
void q_abstractslider_on_action_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_drag_enter_event(void* self, void* event);
void q_abstractslider_qbase_drag_enter_event(void* self, void* event);
void q_abstractslider_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_drag_move_event(void* self, void* event);
void q_abstractslider_qbase_drag_move_event(void* self, void* event);
void q_abstractslider_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_drag_leave_event(void* self, void* event);
void q_abstractslider_qbase_drag_leave_event(void* self, void* event);
void q_abstractslider_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_drop_event(void* self, void* event);
void q_abstractslider_qbase_drop_event(void* self, void* event);
void q_abstractslider_on_drop_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_show_event(void* self, void* event);
void q_abstractslider_qbase_show_event(void* self, void* event);
void q_abstractslider_on_show_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_hide_event(void* self, void* event);
void q_abstractslider_qbase_hide_event(void* self, void* event);
void q_abstractslider_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_abstractslider_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_abstractslider_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractslider_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_abstractslider_metric(void* self, int64_t param1);
int32_t q_abstractslider_qbase_metric(void* self, int64_t param1);
void q_abstractslider_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_abstractslider_init_painter(void* self, void* painter);
void q_abstractslider_qbase_init_painter(void* self, void* painter);
void q_abstractslider_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_abstractslider_redirected(void* self, void* offset);
QPaintDevice* q_abstractslider_qbase_redirected(void* self, void* offset);
void q_abstractslider_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_abstractslider_shared_painter(void* self);
QPainter* q_abstractslider_qbase_shared_painter(void* self);
void q_abstractslider_on_shared_painter(void* self, QPainter* (*slot)());
void q_abstractslider_input_method_event(void* self, void* param1);
void q_abstractslider_qbase_input_method_event(void* self, void* param1);
void q_abstractslider_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_abstractslider_input_method_query(void* self, int64_t param1);
QVariant* q_abstractslider_qbase_input_method_query(void* self, int64_t param1);
void q_abstractslider_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_abstractslider_focus_next_prev_child(void* self, bool next);
bool q_abstractslider_qbase_focus_next_prev_child(void* self, bool next);
void q_abstractslider_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_abstractslider_event_filter(void* self, void* watched, void* event);
bool q_abstractslider_qbase_event_filter(void* self, void* watched, void* event);
void q_abstractslider_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_abstractslider_child_event(void* self, void* event);
void q_abstractslider_qbase_child_event(void* self, void* event);
void q_abstractslider_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_custom_event(void* self, void* event);
void q_abstractslider_qbase_custom_event(void* self, void* event);
void q_abstractslider_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractslider_connect_notify(void* self, void* signal);
void q_abstractslider_qbase_connect_notify(void* self, void* signal);
void q_abstractslider_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractslider_disconnect_notify(void* self, void* signal);
void q_abstractslider_qbase_disconnect_notify(void* self, void* signal);
void q_abstractslider_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_abstractslider_update_micro_focus(void* self);
void q_abstractslider_qbase_update_micro_focus(void* self);
void q_abstractslider_on_update_micro_focus(void* self, void (*slot)());
void q_abstractslider_create(void* self);
void q_abstractslider_qbase_create(void* self);
void q_abstractslider_on_create(void* self, void (*slot)());
void q_abstractslider_destroy(void* self);
void q_abstractslider_qbase_destroy(void* self);
void q_abstractslider_on_destroy(void* self, void (*slot)());
bool q_abstractslider_focus_next_child(void* self);
bool q_abstractslider_qbase_focus_next_child(void* self);
void q_abstractslider_on_focus_next_child(void* self, bool (*slot)());
bool q_abstractslider_focus_previous_child(void* self);
bool q_abstractslider_qbase_focus_previous_child(void* self);
void q_abstractslider_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_abstractslider_sender(void* self);
QObject* q_abstractslider_qbase_sender(void* self);
void q_abstractslider_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractslider_sender_signal_index(void* self);
int32_t q_abstractslider_qbase_sender_signal_index(void* self);
void q_abstractslider_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractslider_receivers(void* self, const char* signal);
int32_t q_abstractslider_qbase_receivers(void* self, const char* signal);
void q_abstractslider_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractslider_is_signal_connected(void* self, void* signal);
bool q_abstractslider_qbase_is_signal_connected(void* self, void* signal);
void q_abstractslider_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractslider_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractslider.html#types

typedef enum {
    QABSTRACTSLIDER_SLIDERACTION_SLIDERNOACTION = 0,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERSINGLESTEPADD = 1,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERSINGLESTEPSUB = 2,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERPAGESTEPADD = 3,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERPAGESTEPSUB = 4,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERTOMINIMUM = 5,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERTOMAXIMUM = 6,
    QABSTRACTSLIDER_SLIDERACTION_SLIDERMOVE = 7
} QAbstractSlider__SliderAction;

typedef enum {
    QABSTRACTSLIDER_SLIDERCHANGE_SLIDERRANGECHANGE = 0,
    QABSTRACTSLIDER_SLIDERCHANGE_SLIDERORIENTATIONCHANGE = 1,
    QABSTRACTSLIDER_SLIDERCHANGE_SLIDERSTEPSCHANGE = 2,
    QABSTRACTSLIDER_SLIDERCHANGE_SLIDERVALUECHANGE = 3
} QAbstractSlider__SliderChange;

#endif
