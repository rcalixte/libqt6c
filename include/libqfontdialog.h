#pragma once
#ifndef SRCQT6C_LIBQFONTDIALOG_H
#define SRCQT6C_LIBQFONTDIALOG_H

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

QFontDialog* q_fontdialog_new(void* parent);
QFontDialog* q_fontdialog_new2();
QFontDialog* q_fontdialog_new3(void* initial);
QFontDialog* q_fontdialog_new4(void* initial, void* parent);
QMetaObject* q_fontdialog_meta_object(void* self);
void* q_fontdialog_metacast(void* self, const char* param1);
int32_t q_fontdialog_metacall(void* self, int64_t param1, int param2, void* param3);
void q_fontdialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_fontdialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_fontdialog_tr(const char* s);
void q_fontdialog_set_current_font(void* self, void* font);
QFont* q_fontdialog_current_font(void* self);
QFont* q_fontdialog_selected_font(void* self);
void q_fontdialog_set_option(void* self, int64_t option);
bool q_fontdialog_test_option(void* self, int64_t option);
void q_fontdialog_set_options(void* self, int64_t options);
int64_t q_fontdialog_options(void* self);
void q_fontdialog_set_visible(void* self, bool visible);
void q_fontdialog_on_set_visible(void* self, void (*slot)(void*, bool));
void q_fontdialog_qbase_set_visible(void* self, bool visible);
QFont* q_fontdialog_get_font(bool* ok);
QFont* q_fontdialog_get_font2(bool* ok, void* initial);
void q_fontdialog_current_font_changed(void* self, void* font);
void q_fontdialog_on_current_font_changed(void* self, void (*slot)(void*, void*));
void q_fontdialog_font_selected(void* self, void* font);
void q_fontdialog_on_font_selected(void* self, void (*slot)(void*, void*));
void q_fontdialog_change_event(void* self, void* event);
void q_fontdialog_on_change_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_qbase_change_event(void* self, void* event);
void q_fontdialog_done(void* self, int result);
void q_fontdialog_on_done(void* self, void (*slot)(void*, int));
void q_fontdialog_qbase_done(void* self, int result);
bool q_fontdialog_event_filter(void* self, void* object, void* event);
void q_fontdialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_fontdialog_qbase_event_filter(void* self, void* object, void* event);
const char* q_fontdialog_tr2(const char* s, const char* c);
const char* q_fontdialog_tr3(const char* s, const char* c, int n);
void q_fontdialog_set_option2(void* self, int64_t option, bool on);
QFont* q_fontdialog_get_font22(bool* ok, void* parent);
QFont* q_fontdialog_get_font3(bool* ok, void* initial, void* parent);
QFont* q_fontdialog_get_font4(bool* ok, void* initial, void* parent, const char* title);
QFont* q_fontdialog_get_font5(bool* ok, void* initial, void* parent, const char* title, int64_t options);
int32_t q_fontdialog_result(void* self);
void q_fontdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);
bool q_fontdialog_is_size_grip_enabled(void* self);
void q_fontdialog_set_modal(void* self, bool modal);
void q_fontdialog_set_result(void* self, int r);
void q_fontdialog_finished(void* self, int result);
void q_fontdialog_on_finished(void* self, void (*slot)(void*, int));
void q_fontdialog_accepted(void* self);
void q_fontdialog_on_accepted(void* self, void (*slot)(void*));
void q_fontdialog_rejected(void* self);
void q_fontdialog_on_rejected(void* self, void (*slot)(void*));
uintptr_t q_fontdialog_win_id(void* self);
void q_fontdialog_create_win_id(void* self);
uintptr_t q_fontdialog_internal_win_id(void* self);
uintptr_t q_fontdialog_effective_win_id(void* self);
QStyle* q_fontdialog_style(void* self);
void q_fontdialog_set_style(void* self, void* style);
bool q_fontdialog_is_top_level(void* self);
bool q_fontdialog_is_window(void* self);
bool q_fontdialog_is_modal(void* self);
int64_t q_fontdialog_window_modality(void* self);
void q_fontdialog_set_window_modality(void* self, int64_t windowModality);
bool q_fontdialog_is_enabled(void* self);
bool q_fontdialog_is_enabled_to(void* self, void* param1);
void q_fontdialog_set_enabled(void* self, bool enabled);
void q_fontdialog_set_disabled(void* self, bool disabled);
void q_fontdialog_set_window_modified(void* self, bool windowModified);
QRect* q_fontdialog_frame_geometry(void* self);
QRect* q_fontdialog_geometry(void* self);
QRect* q_fontdialog_normal_geometry(void* self);
int32_t q_fontdialog_x(void* self);
int32_t q_fontdialog_y(void* self);
QPoint* q_fontdialog_pos(void* self);
QSize* q_fontdialog_frame_size(void* self);
QSize* q_fontdialog_size(void* self);
int32_t q_fontdialog_width(void* self);
int32_t q_fontdialog_height(void* self);
QRect* q_fontdialog_rect(void* self);
QRect* q_fontdialog_children_rect(void* self);
QRegion* q_fontdialog_children_region(void* self);
QSize* q_fontdialog_minimum_size(void* self);
QSize* q_fontdialog_maximum_size(void* self);
int32_t q_fontdialog_minimum_width(void* self);
int32_t q_fontdialog_minimum_height(void* self);
int32_t q_fontdialog_maximum_width(void* self);
int32_t q_fontdialog_maximum_height(void* self);
void q_fontdialog_set_minimum_size(void* self, void* minimumSize);
void q_fontdialog_set_minimum_size2(void* self, int minw, int minh);
void q_fontdialog_set_maximum_size(void* self, void* maximumSize);
void q_fontdialog_set_maximum_size2(void* self, int maxw, int maxh);
void q_fontdialog_set_minimum_width(void* self, int minw);
void q_fontdialog_set_minimum_height(void* self, int minh);
void q_fontdialog_set_maximum_width(void* self, int maxw);
void q_fontdialog_set_maximum_height(void* self, int maxh);
QSize* q_fontdialog_size_increment(void* self);
void q_fontdialog_set_size_increment(void* self, void* sizeIncrement);
void q_fontdialog_set_size_increment2(void* self, int w, int h);
QSize* q_fontdialog_base_size(void* self);
void q_fontdialog_set_base_size(void* self, void* baseSize);
void q_fontdialog_set_base_size2(void* self, int basew, int baseh);
void q_fontdialog_set_fixed_size(void* self, void* fixedSize);
void q_fontdialog_set_fixed_size2(void* self, int w, int h);
void q_fontdialog_set_fixed_width(void* self, int w);
void q_fontdialog_set_fixed_height(void* self, int h);
QPointF* q_fontdialog_map_to_global(void* self, void* param1);
QPoint* q_fontdialog_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_fontdialog_map_from_global(void* self, void* param1);
QPoint* q_fontdialog_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_fontdialog_map_to_parent(void* self, void* param1);
QPoint* q_fontdialog_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_fontdialog_map_from_parent(void* self, void* param1);
QPoint* q_fontdialog_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_fontdialog_map_to(void* self, void* param1, void* param2);
QPoint* q_fontdialog_map_to2(void* self, void* param1, void* param2);
QPointF* q_fontdialog_map_from(void* self, void* param1, void* param2);
QPoint* q_fontdialog_map_from2(void* self, void* param1, void* param2);
QWidget* q_fontdialog_window(void* self);
QWidget* q_fontdialog_native_parent_widget(void* self);
QWidget* q_fontdialog_top_level_widget(void* self);
QPalette* q_fontdialog_palette(void* self);
void q_fontdialog_set_palette(void* self, void* palette);
void q_fontdialog_set_background_role(void* self, int64_t backgroundRole);
int64_t q_fontdialog_background_role(void* self);
void q_fontdialog_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_fontdialog_foreground_role(void* self);
QFont* q_fontdialog_font(void* self);
void q_fontdialog_set_font(void* self, void* font);
QFontMetrics* q_fontdialog_font_metrics(void* self);
QFontInfo* q_fontdialog_font_info(void* self);
QCursor* q_fontdialog_cursor(void* self);
void q_fontdialog_set_cursor(void* self, void* cursor);
void q_fontdialog_unset_cursor(void* self);
void q_fontdialog_set_mouse_tracking(void* self, bool enable);
bool q_fontdialog_has_mouse_tracking(void* self);
bool q_fontdialog_under_mouse(void* self);
void q_fontdialog_set_tablet_tracking(void* self, bool enable);
bool q_fontdialog_has_tablet_tracking(void* self);
void q_fontdialog_set_mask(void* self, void* mask);
void q_fontdialog_set_mask_with_mask(void* self, void* mask);
QRegion* q_fontdialog_mask(void* self);
void q_fontdialog_clear_mask(void* self);
void q_fontdialog_render(void* self, void* target);
void q_fontdialog_render_with_painter(void* self, void* painter);
QPixmap* q_fontdialog_grab(void* self);
QGraphicsEffect* q_fontdialog_graphics_effect(void* self);
void q_fontdialog_set_graphics_effect(void* self, void* effect);
void q_fontdialog_grab_gesture(void* self, int64_t typeVal);
void q_fontdialog_ungrab_gesture(void* self, int64_t typeVal);
void q_fontdialog_set_window_title(void* self, const char* windowTitle);
void q_fontdialog_set_style_sheet(void* self, const char* styleSheet);
const char* q_fontdialog_style_sheet(void* self);
const char* q_fontdialog_window_title(void* self);
void q_fontdialog_set_window_icon(void* self, void* icon);
QIcon* q_fontdialog_window_icon(void* self);
void q_fontdialog_set_window_icon_text(void* self, const char* windowIconText);
const char* q_fontdialog_window_icon_text(void* self);
void q_fontdialog_set_window_role(void* self, const char* windowRole);
const char* q_fontdialog_window_role(void* self);
void q_fontdialog_set_window_file_path(void* self, const char* filePath);
const char* q_fontdialog_window_file_path(void* self);
void q_fontdialog_set_window_opacity(void* self, double level);
double q_fontdialog_window_opacity(void* self);
bool q_fontdialog_is_window_modified(void* self);
void q_fontdialog_set_tool_tip(void* self, const char* toolTip);
const char* q_fontdialog_tool_tip(void* self);
void q_fontdialog_set_tool_tip_duration(void* self, int msec);
int32_t q_fontdialog_tool_tip_duration(void* self);
void q_fontdialog_set_status_tip(void* self, const char* statusTip);
const char* q_fontdialog_status_tip(void* self);
void q_fontdialog_set_whats_this(void* self, const char* whatsThis);
const char* q_fontdialog_whats_this(void* self);
const char* q_fontdialog_accessible_name(void* self);
void q_fontdialog_set_accessible_name(void* self, const char* name);
const char* q_fontdialog_accessible_description(void* self);
void q_fontdialog_set_accessible_description(void* self, const char* description);
void q_fontdialog_set_layout_direction(void* self, int64_t direction);
int64_t q_fontdialog_layout_direction(void* self);
void q_fontdialog_unset_layout_direction(void* self);
void q_fontdialog_set_locale(void* self, void* locale);
QLocale* q_fontdialog_locale(void* self);
void q_fontdialog_unset_locale(void* self);
bool q_fontdialog_is_right_to_left(void* self);
bool q_fontdialog_is_left_to_right(void* self);
void q_fontdialog_set_focus(void* self);
bool q_fontdialog_is_active_window(void* self);
void q_fontdialog_activate_window(void* self);
void q_fontdialog_clear_focus(void* self);
void q_fontdialog_set_focus_with_reason(void* self, int64_t reason);
int64_t q_fontdialog_focus_policy(void* self);
void q_fontdialog_set_focus_policy(void* self, int64_t policy);
bool q_fontdialog_has_focus(void* self);
void q_fontdialog_set_tab_order(void* param1, void* param2);
void q_fontdialog_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_fontdialog_focus_proxy(void* self);
int64_t q_fontdialog_context_menu_policy(void* self);
void q_fontdialog_set_context_menu_policy(void* self, int64_t policy);
void q_fontdialog_grab_mouse(void* self);
void q_fontdialog_grab_mouse_with_q_cursor(void* self, void* param1);
void q_fontdialog_release_mouse(void* self);
void q_fontdialog_grab_keyboard(void* self);
void q_fontdialog_release_keyboard(void* self);
int32_t q_fontdialog_grab_shortcut(void* self, void* key);
void q_fontdialog_release_shortcut(void* self, int id);
void q_fontdialog_set_shortcut_enabled(void* self, int id);
void q_fontdialog_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_fontdialog_mouse_grabber();
QWidget* q_fontdialog_keyboard_grabber();
bool q_fontdialog_updates_enabled(void* self);
void q_fontdialog_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_fontdialog_graphics_proxy_widget(void* self);
void q_fontdialog_update(void* self);
void q_fontdialog_repaint(void* self);
void q_fontdialog_update2(void* self, int x, int y, int w, int h);
void q_fontdialog_update_with_q_rect(void* self, void* param1);
void q_fontdialog_update_with_q_region(void* self, void* param1);
void q_fontdialog_repaint2(void* self, int x, int y, int w, int h);
void q_fontdialog_repaint_with_q_rect(void* self, void* param1);
void q_fontdialog_repaint_with_q_region(void* self, void* param1);
void q_fontdialog_set_hidden(void* self, bool hidden);
void q_fontdialog_show(void* self);
void q_fontdialog_hide(void* self);
void q_fontdialog_show_minimized(void* self);
void q_fontdialog_show_maximized(void* self);
void q_fontdialog_show_full_screen(void* self);
void q_fontdialog_show_normal(void* self);
bool q_fontdialog_close(void* self);
void q_fontdialog_raise(void* self);
void q_fontdialog_lower(void* self);
void q_fontdialog_stack_under(void* self, void* param1);
void q_fontdialog_move(void* self, int x, int y);
void q_fontdialog_move_with_q_point(void* self, void* param1);
void q_fontdialog_resize(void* self, int w, int h);
void q_fontdialog_resize_with_q_size(void* self, void* param1);
void q_fontdialog_set_geometry(void* self, int x, int y, int w, int h);
void q_fontdialog_set_geometry_with_geometry(void* self, void* geometry);
char* q_fontdialog_save_geometry(void* self);
bool q_fontdialog_restore_geometry(void* self, const char* geometry);
void q_fontdialog_adjust_size(void* self);
bool q_fontdialog_is_visible(void* self);
bool q_fontdialog_is_visible_to(void* self, void* param1);
bool q_fontdialog_is_hidden(void* self);
bool q_fontdialog_is_minimized(void* self);
bool q_fontdialog_is_maximized(void* self);
bool q_fontdialog_is_full_screen(void* self);
int64_t q_fontdialog_window_state(void* self);
void q_fontdialog_set_window_state(void* self, int64_t state);
void q_fontdialog_override_window_state(void* self, int64_t state);
QSizePolicy* q_fontdialog_size_policy(void* self);
void q_fontdialog_set_size_policy(void* self, void* sizePolicy);
void q_fontdialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_fontdialog_visible_region(void* self);
void q_fontdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_fontdialog_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_fontdialog_contents_margins(void* self);
QRect* q_fontdialog_contents_rect(void* self);
QLayout* q_fontdialog_layout(void* self);
void q_fontdialog_set_layout(void* self, void* layout);
void q_fontdialog_update_geometry(void* self);
void q_fontdialog_set_parent(void* self, void* parent);
void q_fontdialog_set_parent2(void* self, void* parent, int64_t f);
void q_fontdialog_scroll(void* self, int dx, int dy);
void q_fontdialog_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_fontdialog_focus_widget(void* self);
QWidget* q_fontdialog_next_in_focus_chain(void* self);
QWidget* q_fontdialog_previous_in_focus_chain(void* self);
bool q_fontdialog_accept_drops(void* self);
void q_fontdialog_set_accept_drops(void* self, bool on);
void q_fontdialog_add_action(void* self, void* action);
void q_fontdialog_add_actions(void* self, void* actions[]);
void q_fontdialog_insert_actions(void* self, void* before, void* actions[]);
void q_fontdialog_insert_action(void* self, void* before, void* action);
void q_fontdialog_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_fontdialog_actions(void* self);
QAction* q_fontdialog_add_action_with_text(void* self, const char* text);
QAction* q_fontdialog_add_action2(void* self, void* icon, const char* text);
QAction* q_fontdialog_add_action3(void* self, const char* text, void* shortcut);
QAction* q_fontdialog_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_fontdialog_parent_widget(void* self);
void q_fontdialog_set_window_flags(void* self, int64_t typeVal);
int64_t q_fontdialog_window_flags(void* self);
void q_fontdialog_set_window_flag(void* self, int64_t param1);
void q_fontdialog_override_window_flags(void* self, int64_t typeVal);
int64_t q_fontdialog_window_type(void* self);
QWidget* q_fontdialog_find(uint64_t param1);
QWidget* q_fontdialog_child_at(void* self, int x, int y);
QWidget* q_fontdialog_child_at_with_q_point(void* self, void* p);
void q_fontdialog_set_attribute(void* self, int64_t param1);
bool q_fontdialog_test_attribute(void* self, int64_t param1);
void q_fontdialog_ensure_polished(void* self);
bool q_fontdialog_is_ancestor_of(void* self, void* child);
bool q_fontdialog_auto_fill_background(void* self);
void q_fontdialog_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_fontdialog_backing_store(void* self);
QWindow* q_fontdialog_window_handle(void* self);
QScreen* q_fontdialog_screen(void* self);
void q_fontdialog_set_screen(void* self, void* screen);
QWidget* q_fontdialog_create_window_container(void* window);
void q_fontdialog_window_title_changed(void* self, const char* title);
void q_fontdialog_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_fontdialog_window_icon_changed(void* self, void* icon);
void q_fontdialog_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_fontdialog_window_icon_text_changed(void* self, const char* iconText);
void q_fontdialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_fontdialog_custom_context_menu_requested(void* self, void* pos);
void q_fontdialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_fontdialog_input_method_hints(void* self);
void q_fontdialog_set_input_method_hints(void* self, int64_t hints);
void q_fontdialog_render2(void* self, void* target, void* targetOffset);
void q_fontdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_fontdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_fontdialog_render22(void* self, void* painter, void* targetOffset);
void q_fontdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_fontdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_fontdialog_grab1(void* self, void* rectangle);
void q_fontdialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_fontdialog_grab_shortcut2(void* self, void* key, int64_t context);
void q_fontdialog_set_shortcut_enabled2(void* self, int id, bool enable);
void q_fontdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_fontdialog_set_window_flag2(void* self, int64_t param1, bool on);
void q_fontdialog_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_fontdialog_create_window_container2(void* window, void* parent);
QWidget* q_fontdialog_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_fontdialog_object_name(void* self);
void q_fontdialog_set_object_name(void* self, const char* name);
bool q_fontdialog_is_widget_type(void* self);
bool q_fontdialog_is_window_type(void* self);
bool q_fontdialog_is_quick_item_type(void* self);
bool q_fontdialog_signals_blocked(void* self);
bool q_fontdialog_block_signals(void* self, bool b);
QThread* q_fontdialog_thread(void* self);
void q_fontdialog_move_to_thread(void* self, void* thread);
int32_t q_fontdialog_start_timer(void* self, int interval);
void q_fontdialog_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_fontdialog_children(void* self);
void q_fontdialog_install_event_filter(void* self, void* filterObj);
void q_fontdialog_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_fontdialog_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_fontdialog_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_fontdialog_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_fontdialog_disconnect_with_q_meta_object_connection(void* param1);
void q_fontdialog_dump_object_tree(void* self);
void q_fontdialog_dump_object_info(void* self);
bool q_fontdialog_set_property(void* self, const char* name, void* value);
QVariant* q_fontdialog_property(void* self, const char* name);
const char** q_fontdialog_dynamic_property_names(void* self);
QBindingStorage* q_fontdialog_binding_storage(void* self);
QBindingStorage* q_fontdialog_binding_storage2(void* self);
void q_fontdialog_destroyed(void* self);
void q_fontdialog_on_destroyed(void* self, void (*slot)(void*));
QObject* q_fontdialog_parent(void* self);
bool q_fontdialog_inherits(void* self, const char* classname);
void q_fontdialog_delete_later(void* self);
int32_t q_fontdialog_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_fontdialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_fontdialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_fontdialog_destroyed1(void* self, void* param1);
void q_fontdialog_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_fontdialog_painting_active(void* self);
int32_t q_fontdialog_width_m_m(void* self);
int32_t q_fontdialog_height_m_m(void* self);
int32_t q_fontdialog_logical_dpi_x(void* self);
int32_t q_fontdialog_logical_dpi_y(void* self);
int32_t q_fontdialog_physical_dpi_x(void* self);
int32_t q_fontdialog_physical_dpi_y(void* self);
double q_fontdialog_device_pixel_ratio(void* self);
double q_fontdialog_device_pixel_ratio_f(void* self);
int32_t q_fontdialog_color_count(void* self);
int32_t q_fontdialog_depth(void* self);
double q_fontdialog_device_pixel_ratio_f_scale();
QSize* q_fontdialog_size_hint(void* self);
QSize* q_fontdialog_qbase_size_hint(void* self);
void q_fontdialog_on_size_hint(void* self, QSize* (*slot)());
QSize* q_fontdialog_minimum_size_hint(void* self);
QSize* q_fontdialog_qbase_minimum_size_hint(void* self);
void q_fontdialog_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_fontdialog_open(void* self);
void q_fontdialog_qbase_open(void* self);
void q_fontdialog_on_open(void* self, void (*slot)());
int32_t q_fontdialog_exec(void* self);
int32_t q_fontdialog_qbase_exec(void* self);
void q_fontdialog_on_exec(void* self, int32_t (*slot)());
void q_fontdialog_accept(void* self);
void q_fontdialog_qbase_accept(void* self);
void q_fontdialog_on_accept(void* self, void (*slot)());
void q_fontdialog_reject(void* self);
void q_fontdialog_qbase_reject(void* self);
void q_fontdialog_on_reject(void* self, void (*slot)());
void q_fontdialog_key_press_event(void* self, void* param1);
void q_fontdialog_qbase_key_press_event(void* self, void* param1);
void q_fontdialog_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_close_event(void* self, void* param1);
void q_fontdialog_qbase_close_event(void* self, void* param1);
void q_fontdialog_on_close_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_show_event(void* self, void* param1);
void q_fontdialog_qbase_show_event(void* self, void* param1);
void q_fontdialog_on_show_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_resize_event(void* self, void* param1);
void q_fontdialog_qbase_resize_event(void* self, void* param1);
void q_fontdialog_on_resize_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_context_menu_event(void* self, void* param1);
void q_fontdialog_qbase_context_menu_event(void* self, void* param1);
void q_fontdialog_on_context_menu_event(void* self, void (*slot)(void*, void*));
int32_t q_fontdialog_dev_type(void* self);
int32_t q_fontdialog_qbase_dev_type(void* self);
void q_fontdialog_on_dev_type(void* self, int32_t (*slot)());
int32_t q_fontdialog_height_for_width(void* self, int param1);
int32_t q_fontdialog_qbase_height_for_width(void* self, int param1);
void q_fontdialog_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_fontdialog_has_height_for_width(void* self);
bool q_fontdialog_qbase_has_height_for_width(void* self);
void q_fontdialog_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_fontdialog_paint_engine(void* self);
QPaintEngine* q_fontdialog_qbase_paint_engine(void* self);
void q_fontdialog_on_paint_engine(void* self, QPaintEngine* (*slot)());
bool q_fontdialog_event(void* self, void* event);
bool q_fontdialog_qbase_event(void* self, void* event);
void q_fontdialog_on_event(void* self, bool (*slot)(void*, void*));
void q_fontdialog_mouse_press_event(void* self, void* event);
void q_fontdialog_qbase_mouse_press_event(void* self, void* event);
void q_fontdialog_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_mouse_release_event(void* self, void* event);
void q_fontdialog_qbase_mouse_release_event(void* self, void* event);
void q_fontdialog_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_mouse_double_click_event(void* self, void* event);
void q_fontdialog_qbase_mouse_double_click_event(void* self, void* event);
void q_fontdialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_mouse_move_event(void* self, void* event);
void q_fontdialog_qbase_mouse_move_event(void* self, void* event);
void q_fontdialog_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_wheel_event(void* self, void* event);
void q_fontdialog_qbase_wheel_event(void* self, void* event);
void q_fontdialog_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_key_release_event(void* self, void* event);
void q_fontdialog_qbase_key_release_event(void* self, void* event);
void q_fontdialog_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_focus_in_event(void* self, void* event);
void q_fontdialog_qbase_focus_in_event(void* self, void* event);
void q_fontdialog_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_focus_out_event(void* self, void* event);
void q_fontdialog_qbase_focus_out_event(void* self, void* event);
void q_fontdialog_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_enter_event(void* self, void* event);
void q_fontdialog_qbase_enter_event(void* self, void* event);
void q_fontdialog_on_enter_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_leave_event(void* self, void* event);
void q_fontdialog_qbase_leave_event(void* self, void* event);
void q_fontdialog_on_leave_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_paint_event(void* self, void* event);
void q_fontdialog_qbase_paint_event(void* self, void* event);
void q_fontdialog_on_paint_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_move_event(void* self, void* event);
void q_fontdialog_qbase_move_event(void* self, void* event);
void q_fontdialog_on_move_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_tablet_event(void* self, void* event);
void q_fontdialog_qbase_tablet_event(void* self, void* event);
void q_fontdialog_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_action_event(void* self, void* event);
void q_fontdialog_qbase_action_event(void* self, void* event);
void q_fontdialog_on_action_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_drag_enter_event(void* self, void* event);
void q_fontdialog_qbase_drag_enter_event(void* self, void* event);
void q_fontdialog_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_drag_move_event(void* self, void* event);
void q_fontdialog_qbase_drag_move_event(void* self, void* event);
void q_fontdialog_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_drag_leave_event(void* self, void* event);
void q_fontdialog_qbase_drag_leave_event(void* self, void* event);
void q_fontdialog_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_drop_event(void* self, void* event);
void q_fontdialog_qbase_drop_event(void* self, void* event);
void q_fontdialog_on_drop_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_hide_event(void* self, void* event);
void q_fontdialog_qbase_hide_event(void* self, void* event);
void q_fontdialog_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_fontdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_fontdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_fontdialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_fontdialog_metric(void* self, int64_t param1);
int32_t q_fontdialog_qbase_metric(void* self, int64_t param1);
void q_fontdialog_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_fontdialog_init_painter(void* self, void* painter);
void q_fontdialog_qbase_init_painter(void* self, void* painter);
void q_fontdialog_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_fontdialog_redirected(void* self, void* offset);
QPaintDevice* q_fontdialog_qbase_redirected(void* self, void* offset);
void q_fontdialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_fontdialog_shared_painter(void* self);
QPainter* q_fontdialog_qbase_shared_painter(void* self);
void q_fontdialog_on_shared_painter(void* self, QPainter* (*slot)());
void q_fontdialog_input_method_event(void* self, void* param1);
void q_fontdialog_qbase_input_method_event(void* self, void* param1);
void q_fontdialog_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_fontdialog_input_method_query(void* self, int64_t param1);
QVariant* q_fontdialog_qbase_input_method_query(void* self, int64_t param1);
void q_fontdialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_fontdialog_focus_next_prev_child(void* self, bool next);
bool q_fontdialog_qbase_focus_next_prev_child(void* self, bool next);
void q_fontdialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_fontdialog_timer_event(void* self, void* event);
void q_fontdialog_qbase_timer_event(void* self, void* event);
void q_fontdialog_on_timer_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_child_event(void* self, void* event);
void q_fontdialog_qbase_child_event(void* self, void* event);
void q_fontdialog_on_child_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_custom_event(void* self, void* event);
void q_fontdialog_qbase_custom_event(void* self, void* event);
void q_fontdialog_on_custom_event(void* self, void (*slot)(void*, void*));
void q_fontdialog_connect_notify(void* self, void* signal);
void q_fontdialog_qbase_connect_notify(void* self, void* signal);
void q_fontdialog_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_fontdialog_disconnect_notify(void* self, void* signal);
void q_fontdialog_qbase_disconnect_notify(void* self, void* signal);
void q_fontdialog_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_fontdialog_adjust_position(void* self, void* param1);
void q_fontdialog_qbase_adjust_position(void* self, void* param1);
void q_fontdialog_on_adjust_position(void* self, void (*slot)(void*, void*));
void q_fontdialog_update_micro_focus(void* self);
void q_fontdialog_qbase_update_micro_focus(void* self);
void q_fontdialog_on_update_micro_focus(void* self, void (*slot)());
void q_fontdialog_create(void* self);
void q_fontdialog_qbase_create(void* self);
void q_fontdialog_on_create(void* self, void (*slot)());
void q_fontdialog_destroy(void* self);
void q_fontdialog_qbase_destroy(void* self);
void q_fontdialog_on_destroy(void* self, void (*slot)());
bool q_fontdialog_focus_next_child(void* self);
bool q_fontdialog_qbase_focus_next_child(void* self);
void q_fontdialog_on_focus_next_child(void* self, bool (*slot)());
bool q_fontdialog_focus_previous_child(void* self);
bool q_fontdialog_qbase_focus_previous_child(void* self);
void q_fontdialog_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_fontdialog_sender(void* self);
QObject* q_fontdialog_qbase_sender(void* self);
void q_fontdialog_on_sender(void* self, QObject* (*slot)());
int32_t q_fontdialog_sender_signal_index(void* self);
int32_t q_fontdialog_qbase_sender_signal_index(void* self);
void q_fontdialog_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_fontdialog_receivers(void* self, const char* signal);
int32_t q_fontdialog_qbase_receivers(void* self, const char* signal);
void q_fontdialog_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_fontdialog_is_signal_connected(void* self, void* signal);
bool q_fontdialog_qbase_is_signal_connected(void* self, void* signal);
void q_fontdialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_fontdialog_delete(void* self);

/// https://doc.qt.io/qt-6/qfontdialog.html#types

typedef enum {
    QFONTDIALOG_FONTDIALOGOPTION_NOBUTTONS = 1,
    QFONTDIALOG_FONTDIALOGOPTION_DONTUSENATIVEDIALOG = 2,
    QFONTDIALOG_FONTDIALOGOPTION_SCALABLEFONTS = 4,
    QFONTDIALOG_FONTDIALOGOPTION_NONSCALABLEFONTS = 8,
    QFONTDIALOG_FONTDIALOGOPTION_MONOSPACEDFONTS = 16,
    QFONTDIALOG_FONTDIALOGOPTION_PROPORTIONALFONTS = 32
} QFontDialog__FontDialogOption;

#endif
