#pragma once
#ifndef SRCQT6C_LIBQSCROLLAREA_H
#define SRCQT6C_LIBQSCROLLAREA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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

QScrollArea* q_scrollarea_new(void* parent);
QScrollArea* q_scrollarea_new2();
QMetaObject* q_scrollarea_meta_object(void* self);
void* q_scrollarea_metacast(void* self, const char* param1);
int32_t q_scrollarea_metacall(void* self, int64_t param1, int param2, void* param3);
void q_scrollarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_scrollarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_scrollarea_tr(const char* s);
QWidget* q_scrollarea_widget(void* self);
void q_scrollarea_set_widget(void* self, void* widget);
QWidget* q_scrollarea_take_widget(void* self);
bool q_scrollarea_widget_resizable(void* self);
void q_scrollarea_set_widget_resizable(void* self, bool resizable);
QSize* q_scrollarea_size_hint(void* self);
void q_scrollarea_on_size_hint(void* self, QSize* (*slot)());
QSize* q_scrollarea_qbase_size_hint(void* self);
bool q_scrollarea_focus_next_prev_child(void* self, bool next);
void q_scrollarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_scrollarea_qbase_focus_next_prev_child(void* self, bool next);
int64_t q_scrollarea_alignment(void* self);
void q_scrollarea_set_alignment(void* self, int64_t alignment);
void q_scrollarea_ensure_visible(void* self, int x, int y);
void q_scrollarea_ensure_widget_visible(void* self, void* childWidget);
bool q_scrollarea_event(void* self, void* param1);
void q_scrollarea_on_event(void* self, bool (*slot)(void*, void*));
bool q_scrollarea_qbase_event(void* self, void* param1);
bool q_scrollarea_event_filter(void* self, void* param1, void* param2);
void q_scrollarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_scrollarea_qbase_event_filter(void* self, void* param1, void* param2);
void q_scrollarea_resize_event(void* self, void* param1);
void q_scrollarea_on_resize_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_qbase_resize_event(void* self, void* param1);
void q_scrollarea_scroll_contents_by(void* self, int dx, int dy);
void q_scrollarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_scrollarea_qbase_scroll_contents_by(void* self, int dx, int dy);
QSize* q_scrollarea_viewport_size_hint(void* self);
void q_scrollarea_on_viewport_size_hint(void* self, QSize* (*slot)());
QSize* q_scrollarea_qbase_viewport_size_hint(void* self);
const char* q_scrollarea_tr2(const char* s, const char* c);
const char* q_scrollarea_tr3(const char* s, const char* c, int n);
void q_scrollarea_ensure_visible3(void* self, int x, int y, int xmargin);
void q_scrollarea_ensure_visible4(void* self, int x, int y, int xmargin, int ymargin);
void q_scrollarea_ensure_widget_visible2(void* self, void* childWidget, int xmargin);
void q_scrollarea_ensure_widget_visible3(void* self, void* childWidget, int xmargin, int ymargin);
int64_t q_scrollarea_vertical_scroll_bar_policy(void* self);
void q_scrollarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_scrollarea_vertical_scroll_bar(void* self);
void q_scrollarea_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_scrollarea_horizontal_scroll_bar_policy(void* self);
void q_scrollarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_scrollarea_horizontal_scroll_bar(void* self);
void q_scrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_scrollarea_corner_widget(void* self);
void q_scrollarea_set_corner_widget(void* self, void* widget);
void q_scrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_scrollarea_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_scrollarea_viewport(void* self);
void q_scrollarea_set_viewport(void* self, void* widget);
QSize* q_scrollarea_maximum_viewport_size(void* self);
int64_t q_scrollarea_size_adjust_policy(void* self);
void q_scrollarea_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_scrollarea_frame_style(void* self);
void q_scrollarea_set_frame_style(void* self, int frameStyle);
int32_t q_scrollarea_frame_width(void* self);
int64_t q_scrollarea_frame_shape(void* self);
void q_scrollarea_set_frame_shape(void* self, int64_t frameShape);
int64_t q_scrollarea_frame_shadow(void* self);
void q_scrollarea_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_scrollarea_line_width(void* self);
void q_scrollarea_set_line_width(void* self, int lineWidth);
int32_t q_scrollarea_mid_line_width(void* self);
void q_scrollarea_set_mid_line_width(void* self, int midLineWidth);
QRect* q_scrollarea_frame_rect(void* self);
void q_scrollarea_set_frame_rect(void* self, void* frameRect);
uintptr_t q_scrollarea_win_id(void* self);
void q_scrollarea_create_win_id(void* self);
uintptr_t q_scrollarea_internal_win_id(void* self);
uintptr_t q_scrollarea_effective_win_id(void* self);
QStyle* q_scrollarea_style(void* self);
void q_scrollarea_set_style(void* self, void* style);
bool q_scrollarea_is_top_level(void* self);
bool q_scrollarea_is_window(void* self);
bool q_scrollarea_is_modal(void* self);
int64_t q_scrollarea_window_modality(void* self);
void q_scrollarea_set_window_modality(void* self, int64_t windowModality);
bool q_scrollarea_is_enabled(void* self);
bool q_scrollarea_is_enabled_to(void* self, void* param1);
void q_scrollarea_set_enabled(void* self, bool enabled);
void q_scrollarea_set_disabled(void* self, bool disabled);
void q_scrollarea_set_window_modified(void* self, bool windowModified);
QRect* q_scrollarea_frame_geometry(void* self);
QRect* q_scrollarea_geometry(void* self);
QRect* q_scrollarea_normal_geometry(void* self);
int32_t q_scrollarea_x(void* self);
int32_t q_scrollarea_y(void* self);
QPoint* q_scrollarea_pos(void* self);
QSize* q_scrollarea_frame_size(void* self);
QSize* q_scrollarea_size(void* self);
int32_t q_scrollarea_width(void* self);
int32_t q_scrollarea_height(void* self);
QRect* q_scrollarea_rect(void* self);
QRect* q_scrollarea_children_rect(void* self);
QRegion* q_scrollarea_children_region(void* self);
QSize* q_scrollarea_minimum_size(void* self);
QSize* q_scrollarea_maximum_size(void* self);
int32_t q_scrollarea_minimum_width(void* self);
int32_t q_scrollarea_minimum_height(void* self);
int32_t q_scrollarea_maximum_width(void* self);
int32_t q_scrollarea_maximum_height(void* self);
void q_scrollarea_set_minimum_size(void* self, void* minimumSize);
void q_scrollarea_set_minimum_size2(void* self, int minw, int minh);
void q_scrollarea_set_maximum_size(void* self, void* maximumSize);
void q_scrollarea_set_maximum_size2(void* self, int maxw, int maxh);
void q_scrollarea_set_minimum_width(void* self, int minw);
void q_scrollarea_set_minimum_height(void* self, int minh);
void q_scrollarea_set_maximum_width(void* self, int maxw);
void q_scrollarea_set_maximum_height(void* self, int maxh);
QSize* q_scrollarea_size_increment(void* self);
void q_scrollarea_set_size_increment(void* self, void* sizeIncrement);
void q_scrollarea_set_size_increment2(void* self, int w, int h);
QSize* q_scrollarea_base_size(void* self);
void q_scrollarea_set_base_size(void* self, void* baseSize);
void q_scrollarea_set_base_size2(void* self, int basew, int baseh);
void q_scrollarea_set_fixed_size(void* self, void* fixedSize);
void q_scrollarea_set_fixed_size2(void* self, int w, int h);
void q_scrollarea_set_fixed_width(void* self, int w);
void q_scrollarea_set_fixed_height(void* self, int h);
QPointF* q_scrollarea_map_to_global(void* self, void* param1);
QPoint* q_scrollarea_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_scrollarea_map_from_global(void* self, void* param1);
QPoint* q_scrollarea_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_scrollarea_map_to_parent(void* self, void* param1);
QPoint* q_scrollarea_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_scrollarea_map_from_parent(void* self, void* param1);
QPoint* q_scrollarea_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_scrollarea_map_to(void* self, void* param1, void* param2);
QPoint* q_scrollarea_map_to2(void* self, void* param1, void* param2);
QPointF* q_scrollarea_map_from(void* self, void* param1, void* param2);
QPoint* q_scrollarea_map_from2(void* self, void* param1, void* param2);
QWidget* q_scrollarea_window(void* self);
QWidget* q_scrollarea_native_parent_widget(void* self);
QWidget* q_scrollarea_top_level_widget(void* self);
QPalette* q_scrollarea_palette(void* self);
void q_scrollarea_set_palette(void* self, void* palette);
void q_scrollarea_set_background_role(void* self, int64_t backgroundRole);
int64_t q_scrollarea_background_role(void* self);
void q_scrollarea_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_scrollarea_foreground_role(void* self);
QFont* q_scrollarea_font(void* self);
void q_scrollarea_set_font(void* self, void* font);
QFontMetrics* q_scrollarea_font_metrics(void* self);
QFontInfo* q_scrollarea_font_info(void* self);
QCursor* q_scrollarea_cursor(void* self);
void q_scrollarea_set_cursor(void* self, void* cursor);
void q_scrollarea_unset_cursor(void* self);
void q_scrollarea_set_mouse_tracking(void* self, bool enable);
bool q_scrollarea_has_mouse_tracking(void* self);
bool q_scrollarea_under_mouse(void* self);
void q_scrollarea_set_tablet_tracking(void* self, bool enable);
bool q_scrollarea_has_tablet_tracking(void* self);
void q_scrollarea_set_mask(void* self, void* mask);
void q_scrollarea_set_mask_with_mask(void* self, void* mask);
QRegion* q_scrollarea_mask(void* self);
void q_scrollarea_clear_mask(void* self);
void q_scrollarea_render(void* self, void* target);
void q_scrollarea_render_with_painter(void* self, void* painter);
QPixmap* q_scrollarea_grab(void* self);
QGraphicsEffect* q_scrollarea_graphics_effect(void* self);
void q_scrollarea_set_graphics_effect(void* self, void* effect);
void q_scrollarea_grab_gesture(void* self, int64_t typeVal);
void q_scrollarea_ungrab_gesture(void* self, int64_t typeVal);
void q_scrollarea_set_window_title(void* self, const char* windowTitle);
void q_scrollarea_set_style_sheet(void* self, const char* styleSheet);
const char* q_scrollarea_style_sheet(void* self);
const char* q_scrollarea_window_title(void* self);
void q_scrollarea_set_window_icon(void* self, void* icon);
QIcon* q_scrollarea_window_icon(void* self);
void q_scrollarea_set_window_icon_text(void* self, const char* windowIconText);
const char* q_scrollarea_window_icon_text(void* self);
void q_scrollarea_set_window_role(void* self, const char* windowRole);
const char* q_scrollarea_window_role(void* self);
void q_scrollarea_set_window_file_path(void* self, const char* filePath);
const char* q_scrollarea_window_file_path(void* self);
void q_scrollarea_set_window_opacity(void* self, double level);
double q_scrollarea_window_opacity(void* self);
bool q_scrollarea_is_window_modified(void* self);
void q_scrollarea_set_tool_tip(void* self, const char* toolTip);
const char* q_scrollarea_tool_tip(void* self);
void q_scrollarea_set_tool_tip_duration(void* self, int msec);
int32_t q_scrollarea_tool_tip_duration(void* self);
void q_scrollarea_set_status_tip(void* self, const char* statusTip);
const char* q_scrollarea_status_tip(void* self);
void q_scrollarea_set_whats_this(void* self, const char* whatsThis);
const char* q_scrollarea_whats_this(void* self);
const char* q_scrollarea_accessible_name(void* self);
void q_scrollarea_set_accessible_name(void* self, const char* name);
const char* q_scrollarea_accessible_description(void* self);
void q_scrollarea_set_accessible_description(void* self, const char* description);
void q_scrollarea_set_layout_direction(void* self, int64_t direction);
int64_t q_scrollarea_layout_direction(void* self);
void q_scrollarea_unset_layout_direction(void* self);
void q_scrollarea_set_locale(void* self, void* locale);
QLocale* q_scrollarea_locale(void* self);
void q_scrollarea_unset_locale(void* self);
bool q_scrollarea_is_right_to_left(void* self);
bool q_scrollarea_is_left_to_right(void* self);
void q_scrollarea_set_focus(void* self);
bool q_scrollarea_is_active_window(void* self);
void q_scrollarea_activate_window(void* self);
void q_scrollarea_clear_focus(void* self);
void q_scrollarea_set_focus_with_reason(void* self, int64_t reason);
int64_t q_scrollarea_focus_policy(void* self);
void q_scrollarea_set_focus_policy(void* self, int64_t policy);
bool q_scrollarea_has_focus(void* self);
void q_scrollarea_set_tab_order(void* param1, void* param2);
void q_scrollarea_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_scrollarea_focus_proxy(void* self);
int64_t q_scrollarea_context_menu_policy(void* self);
void q_scrollarea_set_context_menu_policy(void* self, int64_t policy);
void q_scrollarea_grab_mouse(void* self);
void q_scrollarea_grab_mouse_with_q_cursor(void* self, void* param1);
void q_scrollarea_release_mouse(void* self);
void q_scrollarea_grab_keyboard(void* self);
void q_scrollarea_release_keyboard(void* self);
int32_t q_scrollarea_grab_shortcut(void* self, void* key);
void q_scrollarea_release_shortcut(void* self, int id);
void q_scrollarea_set_shortcut_enabled(void* self, int id);
void q_scrollarea_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_scrollarea_mouse_grabber();
QWidget* q_scrollarea_keyboard_grabber();
bool q_scrollarea_updates_enabled(void* self);
void q_scrollarea_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_scrollarea_graphics_proxy_widget(void* self);
void q_scrollarea_update(void* self);
void q_scrollarea_repaint(void* self);
void q_scrollarea_update2(void* self, int x, int y, int w, int h);
void q_scrollarea_update_with_q_rect(void* self, void* param1);
void q_scrollarea_update_with_q_region(void* self, void* param1);
void q_scrollarea_repaint2(void* self, int x, int y, int w, int h);
void q_scrollarea_repaint_with_q_rect(void* self, void* param1);
void q_scrollarea_repaint_with_q_region(void* self, void* param1);
void q_scrollarea_set_hidden(void* self, bool hidden);
void q_scrollarea_show(void* self);
void q_scrollarea_hide(void* self);
void q_scrollarea_show_minimized(void* self);
void q_scrollarea_show_maximized(void* self);
void q_scrollarea_show_full_screen(void* self);
void q_scrollarea_show_normal(void* self);
bool q_scrollarea_close(void* self);
void q_scrollarea_raise(void* self);
void q_scrollarea_lower(void* self);
void q_scrollarea_stack_under(void* self, void* param1);
void q_scrollarea_move(void* self, int x, int y);
void q_scrollarea_move_with_q_point(void* self, void* param1);
void q_scrollarea_resize(void* self, int w, int h);
void q_scrollarea_resize_with_q_size(void* self, void* param1);
void q_scrollarea_set_geometry(void* self, int x, int y, int w, int h);
void q_scrollarea_set_geometry_with_geometry(void* self, void* geometry);
char* q_scrollarea_save_geometry(void* self);
bool q_scrollarea_restore_geometry(void* self, const char* geometry);
void q_scrollarea_adjust_size(void* self);
bool q_scrollarea_is_visible(void* self);
bool q_scrollarea_is_visible_to(void* self, void* param1);
bool q_scrollarea_is_hidden(void* self);
bool q_scrollarea_is_minimized(void* self);
bool q_scrollarea_is_maximized(void* self);
bool q_scrollarea_is_full_screen(void* self);
int64_t q_scrollarea_window_state(void* self);
void q_scrollarea_set_window_state(void* self, int64_t state);
void q_scrollarea_override_window_state(void* self, int64_t state);
QSizePolicy* q_scrollarea_size_policy(void* self);
void q_scrollarea_set_size_policy(void* self, void* sizePolicy);
void q_scrollarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_scrollarea_visible_region(void* self);
void q_scrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_scrollarea_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_scrollarea_contents_margins(void* self);
QRect* q_scrollarea_contents_rect(void* self);
QLayout* q_scrollarea_layout(void* self);
void q_scrollarea_set_layout(void* self, void* layout);
void q_scrollarea_update_geometry(void* self);
void q_scrollarea_set_parent(void* self, void* parent);
void q_scrollarea_set_parent2(void* self, void* parent, int64_t f);
void q_scrollarea_scroll(void* self, int dx, int dy);
void q_scrollarea_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_scrollarea_focus_widget(void* self);
QWidget* q_scrollarea_next_in_focus_chain(void* self);
QWidget* q_scrollarea_previous_in_focus_chain(void* self);
bool q_scrollarea_accept_drops(void* self);
void q_scrollarea_set_accept_drops(void* self, bool on);
void q_scrollarea_add_action(void* self, void* action);
void q_scrollarea_add_actions(void* self, void* actions[]);
void q_scrollarea_insert_actions(void* self, void* before, void* actions[]);
void q_scrollarea_insert_action(void* self, void* before, void* action);
void q_scrollarea_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_scrollarea_actions(void* self);
QAction* q_scrollarea_add_action_with_text(void* self, const char* text);
QAction* q_scrollarea_add_action2(void* self, void* icon, const char* text);
QAction* q_scrollarea_add_action3(void* self, const char* text, void* shortcut);
QAction* q_scrollarea_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_scrollarea_parent_widget(void* self);
void q_scrollarea_set_window_flags(void* self, int64_t typeVal);
int64_t q_scrollarea_window_flags(void* self);
void q_scrollarea_set_window_flag(void* self, int64_t param1);
void q_scrollarea_override_window_flags(void* self, int64_t typeVal);
int64_t q_scrollarea_window_type(void* self);
QWidget* q_scrollarea_find(uint64_t param1);
QWidget* q_scrollarea_child_at(void* self, int x, int y);
QWidget* q_scrollarea_child_at_with_q_point(void* self, void* p);
void q_scrollarea_set_attribute(void* self, int64_t param1);
bool q_scrollarea_test_attribute(void* self, int64_t param1);
void q_scrollarea_ensure_polished(void* self);
bool q_scrollarea_is_ancestor_of(void* self, void* child);
bool q_scrollarea_auto_fill_background(void* self);
void q_scrollarea_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_scrollarea_backing_store(void* self);
QWindow* q_scrollarea_window_handle(void* self);
QScreen* q_scrollarea_screen(void* self);
void q_scrollarea_set_screen(void* self, void* screen);
QWidget* q_scrollarea_create_window_container(void* window);
void q_scrollarea_window_title_changed(void* self, const char* title);
void q_scrollarea_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_scrollarea_window_icon_changed(void* self, void* icon);
void q_scrollarea_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_scrollarea_window_icon_text_changed(void* self, const char* iconText);
void q_scrollarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_scrollarea_custom_context_menu_requested(void* self, void* pos);
void q_scrollarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_scrollarea_input_method_hints(void* self);
void q_scrollarea_set_input_method_hints(void* self, int64_t hints);
void q_scrollarea_render2(void* self, void* target, void* targetOffset);
void q_scrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_scrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_scrollarea_render22(void* self, void* painter, void* targetOffset);
void q_scrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_scrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_scrollarea_grab1(void* self, void* rectangle);
void q_scrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_scrollarea_grab_shortcut2(void* self, void* key, int64_t context);
void q_scrollarea_set_shortcut_enabled2(void* self, int id, bool enable);
void q_scrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_scrollarea_set_window_flag2(void* self, int64_t param1, bool on);
void q_scrollarea_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_scrollarea_create_window_container2(void* window, void* parent);
QWidget* q_scrollarea_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_scrollarea_object_name(void* self);
void q_scrollarea_set_object_name(void* self, const char* name);
bool q_scrollarea_is_widget_type(void* self);
bool q_scrollarea_is_window_type(void* self);
bool q_scrollarea_is_quick_item_type(void* self);
bool q_scrollarea_signals_blocked(void* self);
bool q_scrollarea_block_signals(void* self, bool b);
QThread* q_scrollarea_thread(void* self);
void q_scrollarea_move_to_thread(void* self, void* thread);
int32_t q_scrollarea_start_timer(void* self, int interval);
void q_scrollarea_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_scrollarea_children(void* self);
void q_scrollarea_install_event_filter(void* self, void* filterObj);
void q_scrollarea_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_scrollarea_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_scrollarea_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_scrollarea_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_scrollarea_disconnect_with_q_meta_object_connection(void* param1);
void q_scrollarea_dump_object_tree(void* self);
void q_scrollarea_dump_object_info(void* self);
bool q_scrollarea_set_property(void* self, const char* name, void* value);
QVariant* q_scrollarea_property(void* self, const char* name);
const char** q_scrollarea_dynamic_property_names(void* self);
QBindingStorage* q_scrollarea_binding_storage(void* self);
QBindingStorage* q_scrollarea_binding_storage2(void* self);
void q_scrollarea_destroyed(void* self);
void q_scrollarea_on_destroyed(void* self, void (*slot)(void*));
QObject* q_scrollarea_parent(void* self);
bool q_scrollarea_inherits(void* self, const char* classname);
void q_scrollarea_delete_later(void* self);
int32_t q_scrollarea_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_scrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_scrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_scrollarea_destroyed1(void* self, void* param1);
void q_scrollarea_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_scrollarea_painting_active(void* self);
int32_t q_scrollarea_width_m_m(void* self);
int32_t q_scrollarea_height_m_m(void* self);
int32_t q_scrollarea_logical_dpi_x(void* self);
int32_t q_scrollarea_logical_dpi_y(void* self);
int32_t q_scrollarea_physical_dpi_x(void* self);
int32_t q_scrollarea_physical_dpi_y(void* self);
double q_scrollarea_device_pixel_ratio(void* self);
double q_scrollarea_device_pixel_ratio_f(void* self);
int32_t q_scrollarea_color_count(void* self);
int32_t q_scrollarea_depth(void* self);
double q_scrollarea_device_pixel_ratio_f_scale();
QSize* q_scrollarea_minimum_size_hint(void* self);
QSize* q_scrollarea_qbase_minimum_size_hint(void* self);
void q_scrollarea_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_scrollarea_setup_viewport(void* self, void* viewport);
void q_scrollarea_qbase_setup_viewport(void* self, void* viewport);
void q_scrollarea_on_setup_viewport(void* self, void (*slot)(void*, void*));
bool q_scrollarea_viewport_event(void* self, void* param1);
bool q_scrollarea_qbase_viewport_event(void* self, void* param1);
void q_scrollarea_on_viewport_event(void* self, bool (*slot)(void*, void*));
void q_scrollarea_paint_event(void* self, void* param1);
void q_scrollarea_qbase_paint_event(void* self, void* param1);
void q_scrollarea_on_paint_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_mouse_press_event(void* self, void* param1);
void q_scrollarea_qbase_mouse_press_event(void* self, void* param1);
void q_scrollarea_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_mouse_release_event(void* self, void* param1);
void q_scrollarea_qbase_mouse_release_event(void* self, void* param1);
void q_scrollarea_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_mouse_double_click_event(void* self, void* param1);
void q_scrollarea_qbase_mouse_double_click_event(void* self, void* param1);
void q_scrollarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_mouse_move_event(void* self, void* param1);
void q_scrollarea_qbase_mouse_move_event(void* self, void* param1);
void q_scrollarea_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_wheel_event(void* self, void* param1);
void q_scrollarea_qbase_wheel_event(void* self, void* param1);
void q_scrollarea_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_context_menu_event(void* self, void* param1);
void q_scrollarea_qbase_context_menu_event(void* self, void* param1);
void q_scrollarea_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_drag_enter_event(void* self, void* param1);
void q_scrollarea_qbase_drag_enter_event(void* self, void* param1);
void q_scrollarea_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_drag_move_event(void* self, void* param1);
void q_scrollarea_qbase_drag_move_event(void* self, void* param1);
void q_scrollarea_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_drag_leave_event(void* self, void* param1);
void q_scrollarea_qbase_drag_leave_event(void* self, void* param1);
void q_scrollarea_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_drop_event(void* self, void* param1);
void q_scrollarea_qbase_drop_event(void* self, void* param1);
void q_scrollarea_on_drop_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_key_press_event(void* self, void* param1);
void q_scrollarea_qbase_key_press_event(void* self, void* param1);
void q_scrollarea_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_change_event(void* self, void* param1);
void q_scrollarea_qbase_change_event(void* self, void* param1);
void q_scrollarea_on_change_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_init_style_option(void* self, void* option);
void q_scrollarea_qbase_init_style_option(void* self, void* option);
void q_scrollarea_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_scrollarea_dev_type(void* self);
int32_t q_scrollarea_qbase_dev_type(void* self);
void q_scrollarea_on_dev_type(void* self, int32_t (*slot)());
void q_scrollarea_set_visible(void* self, bool visible);
void q_scrollarea_qbase_set_visible(void* self, bool visible);
void q_scrollarea_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_scrollarea_height_for_width(void* self, int param1);
int32_t q_scrollarea_qbase_height_for_width(void* self, int param1);
void q_scrollarea_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_scrollarea_has_height_for_width(void* self);
bool q_scrollarea_qbase_has_height_for_width(void* self);
void q_scrollarea_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_scrollarea_paint_engine(void* self);
QPaintEngine* q_scrollarea_qbase_paint_engine(void* self);
void q_scrollarea_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_scrollarea_key_release_event(void* self, void* event);
void q_scrollarea_qbase_key_release_event(void* self, void* event);
void q_scrollarea_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_focus_in_event(void* self, void* event);
void q_scrollarea_qbase_focus_in_event(void* self, void* event);
void q_scrollarea_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_focus_out_event(void* self, void* event);
void q_scrollarea_qbase_focus_out_event(void* self, void* event);
void q_scrollarea_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_enter_event(void* self, void* event);
void q_scrollarea_qbase_enter_event(void* self, void* event);
void q_scrollarea_on_enter_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_leave_event(void* self, void* event);
void q_scrollarea_qbase_leave_event(void* self, void* event);
void q_scrollarea_on_leave_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_move_event(void* self, void* event);
void q_scrollarea_qbase_move_event(void* self, void* event);
void q_scrollarea_on_move_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_close_event(void* self, void* event);
void q_scrollarea_qbase_close_event(void* self, void* event);
void q_scrollarea_on_close_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_tablet_event(void* self, void* event);
void q_scrollarea_qbase_tablet_event(void* self, void* event);
void q_scrollarea_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_action_event(void* self, void* event);
void q_scrollarea_qbase_action_event(void* self, void* event);
void q_scrollarea_on_action_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_show_event(void* self, void* event);
void q_scrollarea_qbase_show_event(void* self, void* event);
void q_scrollarea_on_show_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_hide_event(void* self, void* event);
void q_scrollarea_qbase_hide_event(void* self, void* event);
void q_scrollarea_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_scrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_scrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_scrollarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_scrollarea_metric(void* self, int64_t param1);
int32_t q_scrollarea_qbase_metric(void* self, int64_t param1);
void q_scrollarea_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_scrollarea_init_painter(void* self, void* painter);
void q_scrollarea_qbase_init_painter(void* self, void* painter);
void q_scrollarea_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_scrollarea_redirected(void* self, void* offset);
QPaintDevice* q_scrollarea_qbase_redirected(void* self, void* offset);
void q_scrollarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_scrollarea_shared_painter(void* self);
QPainter* q_scrollarea_qbase_shared_painter(void* self);
void q_scrollarea_on_shared_painter(void* self, QPainter* (*slot)());
void q_scrollarea_input_method_event(void* self, void* param1);
void q_scrollarea_qbase_input_method_event(void* self, void* param1);
void q_scrollarea_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_scrollarea_input_method_query(void* self, int64_t param1);
QVariant* q_scrollarea_qbase_input_method_query(void* self, int64_t param1);
void q_scrollarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
void q_scrollarea_timer_event(void* self, void* event);
void q_scrollarea_qbase_timer_event(void* self, void* event);
void q_scrollarea_on_timer_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_child_event(void* self, void* event);
void q_scrollarea_qbase_child_event(void* self, void* event);
void q_scrollarea_on_child_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_custom_event(void* self, void* event);
void q_scrollarea_qbase_custom_event(void* self, void* event);
void q_scrollarea_on_custom_event(void* self, void (*slot)(void*, void*));
void q_scrollarea_connect_notify(void* self, void* signal);
void q_scrollarea_qbase_connect_notify(void* self, void* signal);
void q_scrollarea_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_scrollarea_disconnect_notify(void* self, void* signal);
void q_scrollarea_qbase_disconnect_notify(void* self, void* signal);
void q_scrollarea_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_scrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_scrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_scrollarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_scrollarea_viewport_margins(void* self);
QMargins* q_scrollarea_qbase_viewport_margins(void* self);
void q_scrollarea_on_viewport_margins(void* self, QMargins* (*slot)());
void q_scrollarea_draw_frame(void* self, void* param1);
void q_scrollarea_qbase_draw_frame(void* self, void* param1);
void q_scrollarea_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_scrollarea_update_micro_focus(void* self);
void q_scrollarea_qbase_update_micro_focus(void* self);
void q_scrollarea_on_update_micro_focus(void* self, void (*slot)());
void q_scrollarea_create(void* self);
void q_scrollarea_qbase_create(void* self);
void q_scrollarea_on_create(void* self, void (*slot)());
void q_scrollarea_destroy(void* self);
void q_scrollarea_qbase_destroy(void* self);
void q_scrollarea_on_destroy(void* self, void (*slot)());
bool q_scrollarea_focus_next_child(void* self);
bool q_scrollarea_qbase_focus_next_child(void* self);
void q_scrollarea_on_focus_next_child(void* self, bool (*slot)());
bool q_scrollarea_focus_previous_child(void* self);
bool q_scrollarea_qbase_focus_previous_child(void* self);
void q_scrollarea_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_scrollarea_sender(void* self);
QObject* q_scrollarea_qbase_sender(void* self);
void q_scrollarea_on_sender(void* self, QObject* (*slot)());
int32_t q_scrollarea_sender_signal_index(void* self);
int32_t q_scrollarea_qbase_sender_signal_index(void* self);
void q_scrollarea_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_scrollarea_receivers(void* self, const char* signal);
int32_t q_scrollarea_qbase_receivers(void* self, const char* signal);
void q_scrollarea_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_scrollarea_is_signal_connected(void* self, void* signal);
bool q_scrollarea_qbase_is_signal_connected(void* self, void* signal);
void q_scrollarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_scrollarea_delete(void* self);

#endif
