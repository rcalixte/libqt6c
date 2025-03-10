#pragma once
#ifndef SRCQT6C_LIBQPROGRESSDIALOG_H
#define SRCQT6C_LIBQPROGRESSDIALOG_H

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
#include "libqdialog.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlabel.h"
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
#include "libqprogressbar.h"
#include "libqpushbutton.h"
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

QProgressDialog* q_progressdialog_new(void* parent);
QProgressDialog* q_progressdialog_new2();
QProgressDialog* q_progressdialog_new3(const char* labelText, const char* cancelButtonText, int minimum, int maximum);
QProgressDialog* q_progressdialog_new4(void* parent, int64_t flags);
QProgressDialog* q_progressdialog_new5(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent);
QProgressDialog* q_progressdialog_new6(const char* labelText, const char* cancelButtonText, int minimum, int maximum, void* parent, int64_t flags);
QMetaObject* q_progressdialog_meta_object(void* self);
void* q_progressdialog_metacast(void* self, const char* param1);
int32_t q_progressdialog_metacall(void* self, int64_t param1, int param2, void* param3);
void q_progressdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_progressdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_progressdialog_tr(const char* s);
void q_progressdialog_set_label(void* self, void* label);
void q_progressdialog_set_cancel_button(void* self, void* button);
void q_progressdialog_set_bar(void* self, void* bar);
bool q_progressdialog_was_canceled(void* self);
int32_t q_progressdialog_minimum(void* self);
int32_t q_progressdialog_maximum(void* self);
int32_t q_progressdialog_value(void* self);
QSize* q_progressdialog_size_hint(void* self);
void q_progressdialog_on_size_hint(void* self, QSize* (*slot)());
QSize* q_progressdialog_qbase_size_hint(void* self);
const char* q_progressdialog_label_text(void* self);
int32_t q_progressdialog_minimum_duration(void* self);
void q_progressdialog_set_auto_reset(void* self, bool reset);
bool q_progressdialog_auto_reset(void* self);
void q_progressdialog_set_auto_close(void* self, bool close);
bool q_progressdialog_auto_close(void* self);
void q_progressdialog_cancel(void* self);
void q_progressdialog_reset(void* self);
void q_progressdialog_set_maximum(void* self, int maximum);
void q_progressdialog_set_minimum(void* self, int minimum);
void q_progressdialog_set_range(void* self, int minimum, int maximum);
void q_progressdialog_set_value(void* self, int progress);
void q_progressdialog_set_label_text(void* self, const char* text);
void q_progressdialog_set_cancel_button_text(void* self, const char* text);
void q_progressdialog_set_minimum_duration(void* self, int ms);
void q_progressdialog_canceled(void* self);
void q_progressdialog_on_canceled(void* self, void (*slot)(void*));
void q_progressdialog_resize_event(void* self, void* event);
void q_progressdialog_on_resize_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_qbase_resize_event(void* self, void* event);
void q_progressdialog_close_event(void* self, void* event);
void q_progressdialog_on_close_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_qbase_close_event(void* self, void* event);
void q_progressdialog_change_event(void* self, void* event);
void q_progressdialog_on_change_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_qbase_change_event(void* self, void* event);
void q_progressdialog_show_event(void* self, void* event);
void q_progressdialog_on_show_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_qbase_show_event(void* self, void* event);
void q_progressdialog_force_show(void* self);
void q_progressdialog_on_force_show(void* self, void (*slot)());
void q_progressdialog_qbase_force_show(void* self);
const char* q_progressdialog_tr2(const char* s, const char* c);
const char* q_progressdialog_tr3(const char* s, const char* c, int n);
int32_t q_progressdialog_result(void* self);
void q_progressdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);
bool q_progressdialog_is_size_grip_enabled(void* self);
void q_progressdialog_set_modal(void* self, bool modal);
void q_progressdialog_set_result(void* self, int r);
void q_progressdialog_finished(void* self, int result);
void q_progressdialog_on_finished(void* self, void (*slot)(void*, int));
void q_progressdialog_accepted(void* self);
void q_progressdialog_on_accepted(void* self, void (*slot)(void*));
void q_progressdialog_rejected(void* self);
void q_progressdialog_on_rejected(void* self, void (*slot)(void*));
uintptr_t q_progressdialog_win_id(void* self);
void q_progressdialog_create_win_id(void* self);
uintptr_t q_progressdialog_internal_win_id(void* self);
uintptr_t q_progressdialog_effective_win_id(void* self);
QStyle* q_progressdialog_style(void* self);
void q_progressdialog_set_style(void* self, void* style);
bool q_progressdialog_is_top_level(void* self);
bool q_progressdialog_is_window(void* self);
bool q_progressdialog_is_modal(void* self);
int64_t q_progressdialog_window_modality(void* self);
void q_progressdialog_set_window_modality(void* self, int64_t windowModality);
bool q_progressdialog_is_enabled(void* self);
bool q_progressdialog_is_enabled_to(void* self, void* param1);
void q_progressdialog_set_enabled(void* self, bool enabled);
void q_progressdialog_set_disabled(void* self, bool disabled);
void q_progressdialog_set_window_modified(void* self, bool windowModified);
QRect* q_progressdialog_frame_geometry(void* self);
QRect* q_progressdialog_geometry(void* self);
QRect* q_progressdialog_normal_geometry(void* self);
int32_t q_progressdialog_x(void* self);
int32_t q_progressdialog_y(void* self);
QPoint* q_progressdialog_pos(void* self);
QSize* q_progressdialog_frame_size(void* self);
QSize* q_progressdialog_size(void* self);
int32_t q_progressdialog_width(void* self);
int32_t q_progressdialog_height(void* self);
QRect* q_progressdialog_rect(void* self);
QRect* q_progressdialog_children_rect(void* self);
QRegion* q_progressdialog_children_region(void* self);
QSize* q_progressdialog_minimum_size(void* self);
QSize* q_progressdialog_maximum_size(void* self);
int32_t q_progressdialog_minimum_width(void* self);
int32_t q_progressdialog_minimum_height(void* self);
int32_t q_progressdialog_maximum_width(void* self);
int32_t q_progressdialog_maximum_height(void* self);
void q_progressdialog_set_minimum_size(void* self, void* minimumSize);
void q_progressdialog_set_minimum_size2(void* self, int minw, int minh);
void q_progressdialog_set_maximum_size(void* self, void* maximumSize);
void q_progressdialog_set_maximum_size2(void* self, int maxw, int maxh);
void q_progressdialog_set_minimum_width(void* self, int minw);
void q_progressdialog_set_minimum_height(void* self, int minh);
void q_progressdialog_set_maximum_width(void* self, int maxw);
void q_progressdialog_set_maximum_height(void* self, int maxh);
QSize* q_progressdialog_size_increment(void* self);
void q_progressdialog_set_size_increment(void* self, void* sizeIncrement);
void q_progressdialog_set_size_increment2(void* self, int w, int h);
QSize* q_progressdialog_base_size(void* self);
void q_progressdialog_set_base_size(void* self, void* baseSize);
void q_progressdialog_set_base_size2(void* self, int basew, int baseh);
void q_progressdialog_set_fixed_size(void* self, void* fixedSize);
void q_progressdialog_set_fixed_size2(void* self, int w, int h);
void q_progressdialog_set_fixed_width(void* self, int w);
void q_progressdialog_set_fixed_height(void* self, int h);
QPointF* q_progressdialog_map_to_global(void* self, void* param1);
QPoint* q_progressdialog_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_progressdialog_map_from_global(void* self, void* param1);
QPoint* q_progressdialog_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_progressdialog_map_to_parent(void* self, void* param1);
QPoint* q_progressdialog_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_progressdialog_map_from_parent(void* self, void* param1);
QPoint* q_progressdialog_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_progressdialog_map_to(void* self, void* param1, void* param2);
QPoint* q_progressdialog_map_to2(void* self, void* param1, void* param2);
QPointF* q_progressdialog_map_from(void* self, void* param1, void* param2);
QPoint* q_progressdialog_map_from2(void* self, void* param1, void* param2);
QWidget* q_progressdialog_window(void* self);
QWidget* q_progressdialog_native_parent_widget(void* self);
QWidget* q_progressdialog_top_level_widget(void* self);
QPalette* q_progressdialog_palette(void* self);
void q_progressdialog_set_palette(void* self, void* palette);
void q_progressdialog_set_background_role(void* self, int64_t backgroundRole);
int64_t q_progressdialog_background_role(void* self);
void q_progressdialog_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_progressdialog_foreground_role(void* self);
QFont* q_progressdialog_font(void* self);
void q_progressdialog_set_font(void* self, void* font);
QFontMetrics* q_progressdialog_font_metrics(void* self);
QFontInfo* q_progressdialog_font_info(void* self);
QCursor* q_progressdialog_cursor(void* self);
void q_progressdialog_set_cursor(void* self, void* cursor);
void q_progressdialog_unset_cursor(void* self);
void q_progressdialog_set_mouse_tracking(void* self, bool enable);
bool q_progressdialog_has_mouse_tracking(void* self);
bool q_progressdialog_under_mouse(void* self);
void q_progressdialog_set_tablet_tracking(void* self, bool enable);
bool q_progressdialog_has_tablet_tracking(void* self);
void q_progressdialog_set_mask(void* self, void* mask);
void q_progressdialog_set_mask_with_mask(void* self, void* mask);
QRegion* q_progressdialog_mask(void* self);
void q_progressdialog_clear_mask(void* self);
void q_progressdialog_render(void* self, void* target);
void q_progressdialog_render_with_painter(void* self, void* painter);
QPixmap* q_progressdialog_grab(void* self);
QGraphicsEffect* q_progressdialog_graphics_effect(void* self);
void q_progressdialog_set_graphics_effect(void* self, void* effect);
void q_progressdialog_grab_gesture(void* self, int64_t typeVal);
void q_progressdialog_ungrab_gesture(void* self, int64_t typeVal);
void q_progressdialog_set_window_title(void* self, const char* windowTitle);
void q_progressdialog_set_style_sheet(void* self, const char* styleSheet);
const char* q_progressdialog_style_sheet(void* self);
const char* q_progressdialog_window_title(void* self);
void q_progressdialog_set_window_icon(void* self, void* icon);
QIcon* q_progressdialog_window_icon(void* self);
void q_progressdialog_set_window_icon_text(void* self, const char* windowIconText);
const char* q_progressdialog_window_icon_text(void* self);
void q_progressdialog_set_window_role(void* self, const char* windowRole);
const char* q_progressdialog_window_role(void* self);
void q_progressdialog_set_window_file_path(void* self, const char* filePath);
const char* q_progressdialog_window_file_path(void* self);
void q_progressdialog_set_window_opacity(void* self, double level);
double q_progressdialog_window_opacity(void* self);
bool q_progressdialog_is_window_modified(void* self);
void q_progressdialog_set_tool_tip(void* self, const char* toolTip);
const char* q_progressdialog_tool_tip(void* self);
void q_progressdialog_set_tool_tip_duration(void* self, int msec);
int32_t q_progressdialog_tool_tip_duration(void* self);
void q_progressdialog_set_status_tip(void* self, const char* statusTip);
const char* q_progressdialog_status_tip(void* self);
void q_progressdialog_set_whats_this(void* self, const char* whatsThis);
const char* q_progressdialog_whats_this(void* self);
const char* q_progressdialog_accessible_name(void* self);
void q_progressdialog_set_accessible_name(void* self, const char* name);
const char* q_progressdialog_accessible_description(void* self);
void q_progressdialog_set_accessible_description(void* self, const char* description);
void q_progressdialog_set_layout_direction(void* self, int64_t direction);
int64_t q_progressdialog_layout_direction(void* self);
void q_progressdialog_unset_layout_direction(void* self);
void q_progressdialog_set_locale(void* self, void* locale);
QLocale* q_progressdialog_locale(void* self);
void q_progressdialog_unset_locale(void* self);
bool q_progressdialog_is_right_to_left(void* self);
bool q_progressdialog_is_left_to_right(void* self);
void q_progressdialog_set_focus(void* self);
bool q_progressdialog_is_active_window(void* self);
void q_progressdialog_activate_window(void* self);
void q_progressdialog_clear_focus(void* self);
void q_progressdialog_set_focus_with_reason(void* self, int64_t reason);
int64_t q_progressdialog_focus_policy(void* self);
void q_progressdialog_set_focus_policy(void* self, int64_t policy);
bool q_progressdialog_has_focus(void* self);
void q_progressdialog_set_tab_order(void* param1, void* param2);
void q_progressdialog_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_progressdialog_focus_proxy(void* self);
int64_t q_progressdialog_context_menu_policy(void* self);
void q_progressdialog_set_context_menu_policy(void* self, int64_t policy);
void q_progressdialog_grab_mouse(void* self);
void q_progressdialog_grab_mouse_with_q_cursor(void* self, void* param1);
void q_progressdialog_release_mouse(void* self);
void q_progressdialog_grab_keyboard(void* self);
void q_progressdialog_release_keyboard(void* self);
int32_t q_progressdialog_grab_shortcut(void* self, void* key);
void q_progressdialog_release_shortcut(void* self, int id);
void q_progressdialog_set_shortcut_enabled(void* self, int id);
void q_progressdialog_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_progressdialog_mouse_grabber();
QWidget* q_progressdialog_keyboard_grabber();
bool q_progressdialog_updates_enabled(void* self);
void q_progressdialog_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_progressdialog_graphics_proxy_widget(void* self);
void q_progressdialog_update(void* self);
void q_progressdialog_repaint(void* self);
void q_progressdialog_update2(void* self, int x, int y, int w, int h);
void q_progressdialog_update_with_q_rect(void* self, void* param1);
void q_progressdialog_update_with_q_region(void* self, void* param1);
void q_progressdialog_repaint2(void* self, int x, int y, int w, int h);
void q_progressdialog_repaint_with_q_rect(void* self, void* param1);
void q_progressdialog_repaint_with_q_region(void* self, void* param1);
void q_progressdialog_set_hidden(void* self, bool hidden);
void q_progressdialog_show(void* self);
void q_progressdialog_hide(void* self);
void q_progressdialog_show_minimized(void* self);
void q_progressdialog_show_maximized(void* self);
void q_progressdialog_show_full_screen(void* self);
void q_progressdialog_show_normal(void* self);
bool q_progressdialog_close(void* self);
void q_progressdialog_raise(void* self);
void q_progressdialog_lower(void* self);
void q_progressdialog_stack_under(void* self, void* param1);
void q_progressdialog_move(void* self, int x, int y);
void q_progressdialog_move_with_q_point(void* self, void* param1);
void q_progressdialog_resize(void* self, int w, int h);
void q_progressdialog_resize_with_q_size(void* self, void* param1);
void q_progressdialog_set_geometry(void* self, int x, int y, int w, int h);
void q_progressdialog_set_geometry_with_geometry(void* self, void* geometry);
char* q_progressdialog_save_geometry(void* self);
bool q_progressdialog_restore_geometry(void* self, const char* geometry);
void q_progressdialog_adjust_size(void* self);
bool q_progressdialog_is_visible(void* self);
bool q_progressdialog_is_visible_to(void* self, void* param1);
bool q_progressdialog_is_hidden(void* self);
bool q_progressdialog_is_minimized(void* self);
bool q_progressdialog_is_maximized(void* self);
bool q_progressdialog_is_full_screen(void* self);
int64_t q_progressdialog_window_state(void* self);
void q_progressdialog_set_window_state(void* self, int64_t state);
void q_progressdialog_override_window_state(void* self, int64_t state);
QSizePolicy* q_progressdialog_size_policy(void* self);
void q_progressdialog_set_size_policy(void* self, void* sizePolicy);
void q_progressdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_progressdialog_visible_region(void* self);
void q_progressdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_progressdialog_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_progressdialog_contents_margins(void* self);
QRect* q_progressdialog_contents_rect(void* self);
QLayout* q_progressdialog_layout(void* self);
void q_progressdialog_set_layout(void* self, void* layout);
void q_progressdialog_update_geometry(void* self);
void q_progressdialog_set_parent(void* self, void* parent);
void q_progressdialog_set_parent2(void* self, void* parent, int64_t f);
void q_progressdialog_scroll(void* self, int dx, int dy);
void q_progressdialog_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_progressdialog_focus_widget(void* self);
QWidget* q_progressdialog_next_in_focus_chain(void* self);
QWidget* q_progressdialog_previous_in_focus_chain(void* self);
bool q_progressdialog_accept_drops(void* self);
void q_progressdialog_set_accept_drops(void* self, bool on);
void q_progressdialog_add_action(void* self, void* action);
void q_progressdialog_add_actions(void* self, void* actions[]);
void q_progressdialog_insert_actions(void* self, void* before, void* actions[]);
void q_progressdialog_insert_action(void* self, void* before, void* action);
void q_progressdialog_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_progressdialog_actions(void* self);
QAction* q_progressdialog_add_action_with_text(void* self, const char* text);
QAction* q_progressdialog_add_action2(void* self, void* icon, const char* text);
QAction* q_progressdialog_add_action3(void* self, const char* text, void* shortcut);
QAction* q_progressdialog_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_progressdialog_parent_widget(void* self);
void q_progressdialog_set_window_flags(void* self, int64_t typeVal);
int64_t q_progressdialog_window_flags(void* self);
void q_progressdialog_set_window_flag(void* self, int64_t param1);
void q_progressdialog_override_window_flags(void* self, int64_t typeVal);
int64_t q_progressdialog_window_type(void* self);
QWidget* q_progressdialog_find(uint64_t param1);
QWidget* q_progressdialog_child_at(void* self, int x, int y);
QWidget* q_progressdialog_child_at_with_q_point(void* self, void* p);
void q_progressdialog_set_attribute(void* self, int64_t param1);
bool q_progressdialog_test_attribute(void* self, int64_t param1);
void q_progressdialog_ensure_polished(void* self);
bool q_progressdialog_is_ancestor_of(void* self, void* child);
bool q_progressdialog_auto_fill_background(void* self);
void q_progressdialog_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_progressdialog_backing_store(void* self);
QWindow* q_progressdialog_window_handle(void* self);
QScreen* q_progressdialog_screen(void* self);
void q_progressdialog_set_screen(void* self, void* screen);
QWidget* q_progressdialog_create_window_container(void* window);
void q_progressdialog_window_title_changed(void* self, const char* title);
void q_progressdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_progressdialog_window_icon_changed(void* self, void* icon);
void q_progressdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_progressdialog_window_icon_text_changed(void* self, const char* iconText);
void q_progressdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_progressdialog_custom_context_menu_requested(void* self, void* pos);
void q_progressdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_progressdialog_input_method_hints(void* self);
void q_progressdialog_set_input_method_hints(void* self, int64_t hints);
void q_progressdialog_render2(void* self, void* target, void* targetOffset);
void q_progressdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_progressdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_progressdialog_render22(void* self, void* painter, void* targetOffset);
void q_progressdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_progressdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_progressdialog_grab1(void* self, void* rectangle);
void q_progressdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_progressdialog_grab_shortcut2(void* self, void* key, int64_t context);
void q_progressdialog_set_shortcut_enabled2(void* self, int id, bool enable);
void q_progressdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_progressdialog_set_window_flag2(void* self, int64_t param1, bool on);
void q_progressdialog_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_progressdialog_create_window_container2(void* window, void* parent);
QWidget* q_progressdialog_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_progressdialog_object_name(void* self);
void q_progressdialog_set_object_name(void* self, const char* name);
bool q_progressdialog_is_widget_type(void* self);
bool q_progressdialog_is_window_type(void* self);
bool q_progressdialog_is_quick_item_type(void* self);
bool q_progressdialog_signals_blocked(void* self);
bool q_progressdialog_block_signals(void* self, bool b);
QThread* q_progressdialog_thread(void* self);
void q_progressdialog_move_to_thread(void* self, void* thread);
int32_t q_progressdialog_start_timer(void* self, int interval);
void q_progressdialog_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_progressdialog_children(void* self);
void q_progressdialog_install_event_filter(void* self, void* filterObj);
void q_progressdialog_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_progressdialog_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_progressdialog_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_progressdialog_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_progressdialog_disconnect_with_q_meta_object_connection(void* param1);
void q_progressdialog_dump_object_tree(void* self);
void q_progressdialog_dump_object_info(void* self);
bool q_progressdialog_set_property(void* self, const char* name, void* value);
QVariant* q_progressdialog_property(void* self, const char* name);
const char** q_progressdialog_dynamic_property_names(void* self);
QBindingStorage* q_progressdialog_binding_storage(void* self);
QBindingStorage* q_progressdialog_binding_storage2(void* self);
void q_progressdialog_destroyed(void* self);
void q_progressdialog_on_destroyed(void* self, void (*slot)(void*));
QObject* q_progressdialog_parent(void* self);
bool q_progressdialog_inherits(void* self, const char* classname);
void q_progressdialog_delete_later(void* self);
int32_t q_progressdialog_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_progressdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_progressdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_progressdialog_destroyed1(void* self, void* param1);
void q_progressdialog_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_progressdialog_painting_active(void* self);
int32_t q_progressdialog_width_m_m(void* self);
int32_t q_progressdialog_height_m_m(void* self);
int32_t q_progressdialog_logical_dpi_x(void* self);
int32_t q_progressdialog_logical_dpi_y(void* self);
int32_t q_progressdialog_physical_dpi_x(void* self);
int32_t q_progressdialog_physical_dpi_y(void* self);
double q_progressdialog_device_pixel_ratio(void* self);
double q_progressdialog_device_pixel_ratio_f(void* self);
int32_t q_progressdialog_color_count(void* self);
int32_t q_progressdialog_depth(void* self);
double q_progressdialog_device_pixel_ratio_f_scale();
void q_progressdialog_set_visible(void* self, bool visible);
void q_progressdialog_qbase_set_visible(void* self, bool visible);
void q_progressdialog_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_progressdialog_minimum_size_hint(void* self);
QSize* q_progressdialog_qbase_minimum_size_hint(void* self);
void q_progressdialog_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_progressdialog_open(void* self);
void q_progressdialog_qbase_open(void* self);
void q_progressdialog_on_open(void* self, void (*slot)());
int32_t q_progressdialog_exec(void* self);
int32_t q_progressdialog_qbase_exec(void* self);
void q_progressdialog_on_exec(void* self, int32_t (*slot)());
void q_progressdialog_done(void* self, int param1);
void q_progressdialog_qbase_done(void* self, int param1);
void q_progressdialog_on_done(void* self, void (*slot)(void*, int));
void q_progressdialog_accept(void* self);
void q_progressdialog_qbase_accept(void* self);
void q_progressdialog_on_accept(void* self, void (*slot)());
void q_progressdialog_reject(void* self);
void q_progressdialog_qbase_reject(void* self);
void q_progressdialog_on_reject(void* self, void (*slot)());
void q_progressdialog_key_press_event(void* self, void* param1);
void q_progressdialog_qbase_key_press_event(void* self, void* param1);
void q_progressdialog_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_context_menu_event(void* self, void* param1);
void q_progressdialog_qbase_context_menu_event(void* self, void* param1);
void q_progressdialog_on_context_menu_event(void* self, void (*slot)(void*, void*));
bool q_progressdialog_event_filter(void* self, void* param1, void* param2);
bool q_progressdialog_qbase_event_filter(void* self, void* param1, void* param2);
void q_progressdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
int32_t q_progressdialog_dev_type(void* self);
int32_t q_progressdialog_qbase_dev_type(void* self);
void q_progressdialog_on_dev_type(void* self, int32_t (*slot)());
int32_t q_progressdialog_height_for_width(void* self, int param1);
int32_t q_progressdialog_qbase_height_for_width(void* self, int param1);
void q_progressdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_progressdialog_has_height_for_width(void* self);
bool q_progressdialog_qbase_has_height_for_width(void* self);
void q_progressdialog_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_progressdialog_paint_engine(void* self);
QPaintEngine* q_progressdialog_qbase_paint_engine(void* self);
void q_progressdialog_on_paint_engine(void* self, QPaintEngine* (*slot)());
bool q_progressdialog_event(void* self, void* event);
bool q_progressdialog_qbase_event(void* self, void* event);
void q_progressdialog_on_event(void* self, bool (*slot)(void*, void*));
void q_progressdialog_mouse_press_event(void* self, void* event);
void q_progressdialog_qbase_mouse_press_event(void* self, void* event);
void q_progressdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_mouse_release_event(void* self, void* event);
void q_progressdialog_qbase_mouse_release_event(void* self, void* event);
void q_progressdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_mouse_double_click_event(void* self, void* event);
void q_progressdialog_qbase_mouse_double_click_event(void* self, void* event);
void q_progressdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_mouse_move_event(void* self, void* event);
void q_progressdialog_qbase_mouse_move_event(void* self, void* event);
void q_progressdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_wheel_event(void* self, void* event);
void q_progressdialog_qbase_wheel_event(void* self, void* event);
void q_progressdialog_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_key_release_event(void* self, void* event);
void q_progressdialog_qbase_key_release_event(void* self, void* event);
void q_progressdialog_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_focus_in_event(void* self, void* event);
void q_progressdialog_qbase_focus_in_event(void* self, void* event);
void q_progressdialog_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_focus_out_event(void* self, void* event);
void q_progressdialog_qbase_focus_out_event(void* self, void* event);
void q_progressdialog_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_enter_event(void* self, void* event);
void q_progressdialog_qbase_enter_event(void* self, void* event);
void q_progressdialog_on_enter_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_leave_event(void* self, void* event);
void q_progressdialog_qbase_leave_event(void* self, void* event);
void q_progressdialog_on_leave_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_paint_event(void* self, void* event);
void q_progressdialog_qbase_paint_event(void* self, void* event);
void q_progressdialog_on_paint_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_move_event(void* self, void* event);
void q_progressdialog_qbase_move_event(void* self, void* event);
void q_progressdialog_on_move_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_tablet_event(void* self, void* event);
void q_progressdialog_qbase_tablet_event(void* self, void* event);
void q_progressdialog_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_action_event(void* self, void* event);
void q_progressdialog_qbase_action_event(void* self, void* event);
void q_progressdialog_on_action_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_drag_enter_event(void* self, void* event);
void q_progressdialog_qbase_drag_enter_event(void* self, void* event);
void q_progressdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_drag_move_event(void* self, void* event);
void q_progressdialog_qbase_drag_move_event(void* self, void* event);
void q_progressdialog_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_drag_leave_event(void* self, void* event);
void q_progressdialog_qbase_drag_leave_event(void* self, void* event);
void q_progressdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_drop_event(void* self, void* event);
void q_progressdialog_qbase_drop_event(void* self, void* event);
void q_progressdialog_on_drop_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_hide_event(void* self, void* event);
void q_progressdialog_qbase_hide_event(void* self, void* event);
void q_progressdialog_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_progressdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_progressdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_progressdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_progressdialog_metric(void* self, int64_t param1);
int32_t q_progressdialog_qbase_metric(void* self, int64_t param1);
void q_progressdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_progressdialog_init_painter(void* self, void* painter);
void q_progressdialog_qbase_init_painter(void* self, void* painter);
void q_progressdialog_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_progressdialog_redirected(void* self, void* offset);
QPaintDevice* q_progressdialog_qbase_redirected(void* self, void* offset);
void q_progressdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_progressdialog_shared_painter(void* self);
QPainter* q_progressdialog_qbase_shared_painter(void* self);
void q_progressdialog_on_shared_painter(void* self, QPainter* (*slot)());
void q_progressdialog_input_method_event(void* self, void* param1);
void q_progressdialog_qbase_input_method_event(void* self, void* param1);
void q_progressdialog_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_progressdialog_input_method_query(void* self, int64_t param1);
QVariant* q_progressdialog_qbase_input_method_query(void* self, int64_t param1);
void q_progressdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_progressdialog_focus_next_prev_child(void* self, bool next);
bool q_progressdialog_qbase_focus_next_prev_child(void* self, bool next);
void q_progressdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_progressdialog_timer_event(void* self, void* event);
void q_progressdialog_qbase_timer_event(void* self, void* event);
void q_progressdialog_on_timer_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_child_event(void* self, void* event);
void q_progressdialog_qbase_child_event(void* self, void* event);
void q_progressdialog_on_child_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_custom_event(void* self, void* event);
void q_progressdialog_qbase_custom_event(void* self, void* event);
void q_progressdialog_on_custom_event(void* self, void (*slot)(void*, void*));
void q_progressdialog_connect_notify(void* self, void* signal);
void q_progressdialog_qbase_connect_notify(void* self, void* signal);
void q_progressdialog_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_progressdialog_disconnect_notify(void* self, void* signal);
void q_progressdialog_qbase_disconnect_notify(void* self, void* signal);
void q_progressdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_progressdialog_adjust_position(void* self, void* param1);
void q_progressdialog_qbase_adjust_position(void* self, void* param1);
void q_progressdialog_on_adjust_position(void* self, void (*slot)(void*, void*));
void q_progressdialog_update_micro_focus(void* self);
void q_progressdialog_qbase_update_micro_focus(void* self);
void q_progressdialog_on_update_micro_focus(void* self, void (*slot)());
void q_progressdialog_create(void* self);
void q_progressdialog_qbase_create(void* self);
void q_progressdialog_on_create(void* self, void (*slot)());
void q_progressdialog_destroy(void* self);
void q_progressdialog_qbase_destroy(void* self);
void q_progressdialog_on_destroy(void* self, void (*slot)());
bool q_progressdialog_focus_next_child(void* self);
bool q_progressdialog_qbase_focus_next_child(void* self);
void q_progressdialog_on_focus_next_child(void* self, bool (*slot)());
bool q_progressdialog_focus_previous_child(void* self);
bool q_progressdialog_qbase_focus_previous_child(void* self);
void q_progressdialog_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_progressdialog_sender(void* self);
QObject* q_progressdialog_qbase_sender(void* self);
void q_progressdialog_on_sender(void* self, QObject* (*slot)());
int32_t q_progressdialog_sender_signal_index(void* self);
int32_t q_progressdialog_qbase_sender_signal_index(void* self);
void q_progressdialog_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_progressdialog_receivers(void* self, const char* signal);
int32_t q_progressdialog_qbase_receivers(void* self, const char* signal);
void q_progressdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_progressdialog_is_signal_connected(void* self, void* signal);
bool q_progressdialog_qbase_is_signal_connected(void* self, void* signal);
void q_progressdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_progressdialog_delete(void* self);

#endif
