#pragma once
#ifndef SRCQT6C_LIBQMAINWINDOW_H
#define SRCQT6C_LIBQMAINWINDOW_H

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
#include "libqdockwidget.h"
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
#include "libqmenubar.h"
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
#include "libqstatusbar.h"
#include <string.h>
#include "libqstyle.h"
#include "libqthread.h"
#include "libqtoolbar.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QMainWindow* q_mainwindow_new(void* parent);
QMainWindow* q_mainwindow_new2();
QMainWindow* q_mainwindow_new3(void* parent, int64_t flags);
QMetaObject* q_mainwindow_meta_object(void* self);
void* q_mainwindow_metacast(void* self, const char* param1);
int32_t q_mainwindow_metacall(void* self, int64_t param1, int param2, void* param3);
void q_mainwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_mainwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_mainwindow_tr(const char* s);
QSize* q_mainwindow_icon_size(void* self);
void q_mainwindow_set_icon_size(void* self, void* iconSize);
int64_t q_mainwindow_tool_button_style(void* self);
void q_mainwindow_set_tool_button_style(void* self, int64_t toolButtonStyle);
bool q_mainwindow_is_animated(void* self);
bool q_mainwindow_is_dock_nesting_enabled(void* self);
bool q_mainwindow_document_mode(void* self);
void q_mainwindow_set_document_mode(void* self, bool enabled);
int64_t q_mainwindow_tab_shape(void* self);
void q_mainwindow_set_tab_shape(void* self, int64_t tabShape);
int64_t q_mainwindow_tab_position(void* self, int64_t area);
void q_mainwindow_set_tab_position(void* self, int64_t areas, int64_t tabPosition);
void q_mainwindow_set_dock_options(void* self, int64_t options);
int64_t q_mainwindow_dock_options(void* self);
bool q_mainwindow_is_separator(void* self, void* pos);
QMenuBar* q_mainwindow_menu_bar(void* self);
void q_mainwindow_set_menu_bar(void* self, void* menubar);
QWidget* q_mainwindow_menu_widget(void* self);
void q_mainwindow_set_menu_widget(void* self, void* menubar);
QStatusBar* q_mainwindow_status_bar(void* self);
void q_mainwindow_set_status_bar(void* self, void* statusbar);
QWidget* q_mainwindow_central_widget(void* self);
void q_mainwindow_set_central_widget(void* self, void* widget);
QWidget* q_mainwindow_take_central_widget(void* self);
void q_mainwindow_set_corner(void* self, int64_t corner, int64_t area);
int64_t q_mainwindow_corner(void* self, int64_t corner);
void q_mainwindow_add_tool_bar_break(void* self);
void q_mainwindow_insert_tool_bar_break(void* self, void* before);
void q_mainwindow_add_tool_bar(void* self, int64_t area, void* toolbar);
void q_mainwindow_add_tool_bar_with_toolbar(void* self, void* toolbar);
QToolBar* q_mainwindow_add_tool_bar_with_title(void* self, const char* title);
void q_mainwindow_insert_tool_bar(void* self, void* before, void* toolbar);
void q_mainwindow_remove_tool_bar(void* self, void* toolbar);
void q_mainwindow_remove_tool_bar_break(void* self, void* before);
bool q_mainwindow_unified_title_and_tool_bar_on_mac(void* self);
int64_t q_mainwindow_tool_bar_area(void* self, void* toolbar);
bool q_mainwindow_tool_bar_break(void* self, void* toolbar);
void q_mainwindow_add_dock_widget(void* self, int64_t area, void* dockwidget);
void q_mainwindow_add_dock_widget2(void* self, int64_t area, void* dockwidget, int64_t orientation);
void q_mainwindow_split_dock_widget(void* self, void* after, void* dockwidget, int64_t orientation);
void q_mainwindow_tabify_dock_widget(void* self, void* first, void* second);
libqt_list /* of QDockWidget* */ q_mainwindow_tabified_dock_widgets(void* self, void* dockwidget);
void q_mainwindow_remove_dock_widget(void* self, void* dockwidget);
bool q_mainwindow_restore_dock_widget(void* self, void* dockwidget);
int64_t q_mainwindow_dock_widget_area(void* self, void* dockwidget);
void q_mainwindow_resize_docks(void* self, void* docks[], int* sizes[], int64_t orientation);
char* q_mainwindow_save_state(void* self);
bool q_mainwindow_restore_state(void* self, const char* state);
QMenu* q_mainwindow_create_popup_menu(void* self);
void q_mainwindow_on_create_popup_menu(void* self, QMenu* (*slot)());
QMenu* q_mainwindow_qbase_create_popup_menu(void* self);
void q_mainwindow_set_animated(void* self, bool enabled);
void q_mainwindow_set_dock_nesting_enabled(void* self, bool enabled);
void q_mainwindow_set_unified_title_and_tool_bar_on_mac(void* self, bool set);
void q_mainwindow_icon_size_changed(void* self, void* iconSize);
void q_mainwindow_on_icon_size_changed(void* self, void (*slot)(void*, void*));
void q_mainwindow_tool_button_style_changed(void* self, int64_t toolButtonStyle);
void q_mainwindow_on_tool_button_style_changed(void* self, void (*slot)(void*, int64_t));
void q_mainwindow_tabified_dock_widget_activated(void* self, void* dockWidget);
void q_mainwindow_on_tabified_dock_widget_activated(void* self, void (*slot)(void*, void*));
void q_mainwindow_context_menu_event(void* self, void* event);
void q_mainwindow_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_qbase_context_menu_event(void* self, void* event);
bool q_mainwindow_event(void* self, void* event);
void q_mainwindow_on_event(void* self, bool (*slot)(void*, void*));
bool q_mainwindow_qbase_event(void* self, void* event);
const char* q_mainwindow_tr2(const char* s, const char* c);
const char* q_mainwindow_tr3(const char* s, const char* c, int n);
void q_mainwindow_add_tool_bar_break1(void* self, int64_t area);
char* q_mainwindow_save_state1(void* self, int version);
bool q_mainwindow_restore_state2(void* self, const char* state, int version);
uintptr_t q_mainwindow_win_id(void* self);
void q_mainwindow_create_win_id(void* self);
uintptr_t q_mainwindow_internal_win_id(void* self);
uintptr_t q_mainwindow_effective_win_id(void* self);
QStyle* q_mainwindow_style(void* self);
void q_mainwindow_set_style(void* self, void* style);
bool q_mainwindow_is_top_level(void* self);
bool q_mainwindow_is_window(void* self);
bool q_mainwindow_is_modal(void* self);
int64_t q_mainwindow_window_modality(void* self);
void q_mainwindow_set_window_modality(void* self, int64_t windowModality);
bool q_mainwindow_is_enabled(void* self);
bool q_mainwindow_is_enabled_to(void* self, void* param1);
void q_mainwindow_set_enabled(void* self, bool enabled);
void q_mainwindow_set_disabled(void* self, bool disabled);
void q_mainwindow_set_window_modified(void* self, bool windowModified);
QRect* q_mainwindow_frame_geometry(void* self);
QRect* q_mainwindow_geometry(void* self);
QRect* q_mainwindow_normal_geometry(void* self);
int32_t q_mainwindow_x(void* self);
int32_t q_mainwindow_y(void* self);
QPoint* q_mainwindow_pos(void* self);
QSize* q_mainwindow_frame_size(void* self);
QSize* q_mainwindow_size(void* self);
int32_t q_mainwindow_width(void* self);
int32_t q_mainwindow_height(void* self);
QRect* q_mainwindow_rect(void* self);
QRect* q_mainwindow_children_rect(void* self);
QRegion* q_mainwindow_children_region(void* self);
QSize* q_mainwindow_minimum_size(void* self);
QSize* q_mainwindow_maximum_size(void* self);
int32_t q_mainwindow_minimum_width(void* self);
int32_t q_mainwindow_minimum_height(void* self);
int32_t q_mainwindow_maximum_width(void* self);
int32_t q_mainwindow_maximum_height(void* self);
void q_mainwindow_set_minimum_size(void* self, void* minimumSize);
void q_mainwindow_set_minimum_size2(void* self, int minw, int minh);
void q_mainwindow_set_maximum_size(void* self, void* maximumSize);
void q_mainwindow_set_maximum_size2(void* self, int maxw, int maxh);
void q_mainwindow_set_minimum_width(void* self, int minw);
void q_mainwindow_set_minimum_height(void* self, int minh);
void q_mainwindow_set_maximum_width(void* self, int maxw);
void q_mainwindow_set_maximum_height(void* self, int maxh);
QSize* q_mainwindow_size_increment(void* self);
void q_mainwindow_set_size_increment(void* self, void* sizeIncrement);
void q_mainwindow_set_size_increment2(void* self, int w, int h);
QSize* q_mainwindow_base_size(void* self);
void q_mainwindow_set_base_size(void* self, void* baseSize);
void q_mainwindow_set_base_size2(void* self, int basew, int baseh);
void q_mainwindow_set_fixed_size(void* self, void* fixedSize);
void q_mainwindow_set_fixed_size2(void* self, int w, int h);
void q_mainwindow_set_fixed_width(void* self, int w);
void q_mainwindow_set_fixed_height(void* self, int h);
QPointF* q_mainwindow_map_to_global(void* self, void* param1);
QPoint* q_mainwindow_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_mainwindow_map_from_global(void* self, void* param1);
QPoint* q_mainwindow_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_mainwindow_map_to_parent(void* self, void* param1);
QPoint* q_mainwindow_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_mainwindow_map_from_parent(void* self, void* param1);
QPoint* q_mainwindow_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_mainwindow_map_to(void* self, void* param1, void* param2);
QPoint* q_mainwindow_map_to2(void* self, void* param1, void* param2);
QPointF* q_mainwindow_map_from(void* self, void* param1, void* param2);
QPoint* q_mainwindow_map_from2(void* self, void* param1, void* param2);
QWidget* q_mainwindow_window(void* self);
QWidget* q_mainwindow_native_parent_widget(void* self);
QWidget* q_mainwindow_top_level_widget(void* self);
QPalette* q_mainwindow_palette(void* self);
void q_mainwindow_set_palette(void* self, void* palette);
void q_mainwindow_set_background_role(void* self, int64_t backgroundRole);
int64_t q_mainwindow_background_role(void* self);
void q_mainwindow_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_mainwindow_foreground_role(void* self);
QFont* q_mainwindow_font(void* self);
void q_mainwindow_set_font(void* self, void* font);
QFontMetrics* q_mainwindow_font_metrics(void* self);
QFontInfo* q_mainwindow_font_info(void* self);
QCursor* q_mainwindow_cursor(void* self);
void q_mainwindow_set_cursor(void* self, void* cursor);
void q_mainwindow_unset_cursor(void* self);
void q_mainwindow_set_mouse_tracking(void* self, bool enable);
bool q_mainwindow_has_mouse_tracking(void* self);
bool q_mainwindow_under_mouse(void* self);
void q_mainwindow_set_tablet_tracking(void* self, bool enable);
bool q_mainwindow_has_tablet_tracking(void* self);
void q_mainwindow_set_mask(void* self, void* mask);
void q_mainwindow_set_mask_with_mask(void* self, void* mask);
QRegion* q_mainwindow_mask(void* self);
void q_mainwindow_clear_mask(void* self);
void q_mainwindow_render(void* self, void* target);
void q_mainwindow_render_with_painter(void* self, void* painter);
QPixmap* q_mainwindow_grab(void* self);
QGraphicsEffect* q_mainwindow_graphics_effect(void* self);
void q_mainwindow_set_graphics_effect(void* self, void* effect);
void q_mainwindow_grab_gesture(void* self, int64_t typeVal);
void q_mainwindow_ungrab_gesture(void* self, int64_t typeVal);
void q_mainwindow_set_window_title(void* self, const char* windowTitle);
void q_mainwindow_set_style_sheet(void* self, const char* styleSheet);
const char* q_mainwindow_style_sheet(void* self);
const char* q_mainwindow_window_title(void* self);
void q_mainwindow_set_window_icon(void* self, void* icon);
QIcon* q_mainwindow_window_icon(void* self);
void q_mainwindow_set_window_icon_text(void* self, const char* windowIconText);
const char* q_mainwindow_window_icon_text(void* self);
void q_mainwindow_set_window_role(void* self, const char* windowRole);
const char* q_mainwindow_window_role(void* self);
void q_mainwindow_set_window_file_path(void* self, const char* filePath);
const char* q_mainwindow_window_file_path(void* self);
void q_mainwindow_set_window_opacity(void* self, double level);
double q_mainwindow_window_opacity(void* self);
bool q_mainwindow_is_window_modified(void* self);
void q_mainwindow_set_tool_tip(void* self, const char* toolTip);
const char* q_mainwindow_tool_tip(void* self);
void q_mainwindow_set_tool_tip_duration(void* self, int msec);
int32_t q_mainwindow_tool_tip_duration(void* self);
void q_mainwindow_set_status_tip(void* self, const char* statusTip);
const char* q_mainwindow_status_tip(void* self);
void q_mainwindow_set_whats_this(void* self, const char* whatsThis);
const char* q_mainwindow_whats_this(void* self);
const char* q_mainwindow_accessible_name(void* self);
void q_mainwindow_set_accessible_name(void* self, const char* name);
const char* q_mainwindow_accessible_description(void* self);
void q_mainwindow_set_accessible_description(void* self, const char* description);
void q_mainwindow_set_layout_direction(void* self, int64_t direction);
int64_t q_mainwindow_layout_direction(void* self);
void q_mainwindow_unset_layout_direction(void* self);
void q_mainwindow_set_locale(void* self, void* locale);
QLocale* q_mainwindow_locale(void* self);
void q_mainwindow_unset_locale(void* self);
bool q_mainwindow_is_right_to_left(void* self);
bool q_mainwindow_is_left_to_right(void* self);
void q_mainwindow_set_focus(void* self);
bool q_mainwindow_is_active_window(void* self);
void q_mainwindow_activate_window(void* self);
void q_mainwindow_clear_focus(void* self);
void q_mainwindow_set_focus_with_reason(void* self, int64_t reason);
int64_t q_mainwindow_focus_policy(void* self);
void q_mainwindow_set_focus_policy(void* self, int64_t policy);
bool q_mainwindow_has_focus(void* self);
void q_mainwindow_set_tab_order(void* param1, void* param2);
void q_mainwindow_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_mainwindow_focus_proxy(void* self);
int64_t q_mainwindow_context_menu_policy(void* self);
void q_mainwindow_set_context_menu_policy(void* self, int64_t policy);
void q_mainwindow_grab_mouse(void* self);
void q_mainwindow_grab_mouse_with_q_cursor(void* self, void* param1);
void q_mainwindow_release_mouse(void* self);
void q_mainwindow_grab_keyboard(void* self);
void q_mainwindow_release_keyboard(void* self);
int32_t q_mainwindow_grab_shortcut(void* self, void* key);
void q_mainwindow_release_shortcut(void* self, int id);
void q_mainwindow_set_shortcut_enabled(void* self, int id);
void q_mainwindow_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_mainwindow_mouse_grabber();
QWidget* q_mainwindow_keyboard_grabber();
bool q_mainwindow_updates_enabled(void* self);
void q_mainwindow_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_mainwindow_graphics_proxy_widget(void* self);
void q_mainwindow_update(void* self);
void q_mainwindow_repaint(void* self);
void q_mainwindow_update2(void* self, int x, int y, int w, int h);
void q_mainwindow_update_with_q_rect(void* self, void* param1);
void q_mainwindow_update_with_q_region(void* self, void* param1);
void q_mainwindow_repaint2(void* self, int x, int y, int w, int h);
void q_mainwindow_repaint_with_q_rect(void* self, void* param1);
void q_mainwindow_repaint_with_q_region(void* self, void* param1);
void q_mainwindow_set_hidden(void* self, bool hidden);
void q_mainwindow_show(void* self);
void q_mainwindow_hide(void* self);
void q_mainwindow_show_minimized(void* self);
void q_mainwindow_show_maximized(void* self);
void q_mainwindow_show_full_screen(void* self);
void q_mainwindow_show_normal(void* self);
bool q_mainwindow_close(void* self);
void q_mainwindow_raise(void* self);
void q_mainwindow_lower(void* self);
void q_mainwindow_stack_under(void* self, void* param1);
void q_mainwindow_move(void* self, int x, int y);
void q_mainwindow_move_with_q_point(void* self, void* param1);
void q_mainwindow_resize(void* self, int w, int h);
void q_mainwindow_resize_with_q_size(void* self, void* param1);
void q_mainwindow_set_geometry(void* self, int x, int y, int w, int h);
void q_mainwindow_set_geometry_with_geometry(void* self, void* geometry);
char* q_mainwindow_save_geometry(void* self);
bool q_mainwindow_restore_geometry(void* self, const char* geometry);
void q_mainwindow_adjust_size(void* self);
bool q_mainwindow_is_visible(void* self);
bool q_mainwindow_is_visible_to(void* self, void* param1);
bool q_mainwindow_is_hidden(void* self);
bool q_mainwindow_is_minimized(void* self);
bool q_mainwindow_is_maximized(void* self);
bool q_mainwindow_is_full_screen(void* self);
int64_t q_mainwindow_window_state(void* self);
void q_mainwindow_set_window_state(void* self, int64_t state);
void q_mainwindow_override_window_state(void* self, int64_t state);
QSizePolicy* q_mainwindow_size_policy(void* self);
void q_mainwindow_set_size_policy(void* self, void* sizePolicy);
void q_mainwindow_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_mainwindow_visible_region(void* self);
void q_mainwindow_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_mainwindow_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_mainwindow_contents_margins(void* self);
QRect* q_mainwindow_contents_rect(void* self);
QLayout* q_mainwindow_layout(void* self);
void q_mainwindow_set_layout(void* self, void* layout);
void q_mainwindow_update_geometry(void* self);
void q_mainwindow_set_parent(void* self, void* parent);
void q_mainwindow_set_parent2(void* self, void* parent, int64_t f);
void q_mainwindow_scroll(void* self, int dx, int dy);
void q_mainwindow_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_mainwindow_focus_widget(void* self);
QWidget* q_mainwindow_next_in_focus_chain(void* self);
QWidget* q_mainwindow_previous_in_focus_chain(void* self);
bool q_mainwindow_accept_drops(void* self);
void q_mainwindow_set_accept_drops(void* self, bool on);
void q_mainwindow_add_action(void* self, void* action);
void q_mainwindow_add_actions(void* self, void* actions[]);
void q_mainwindow_insert_actions(void* self, void* before, void* actions[]);
void q_mainwindow_insert_action(void* self, void* before, void* action);
void q_mainwindow_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_mainwindow_actions(void* self);
QAction* q_mainwindow_add_action_with_text(void* self, const char* text);
QAction* q_mainwindow_add_action2(void* self, void* icon, const char* text);
QAction* q_mainwindow_add_action3(void* self, const char* text, void* shortcut);
QAction* q_mainwindow_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_mainwindow_parent_widget(void* self);
void q_mainwindow_set_window_flags(void* self, int64_t typeVal);
int64_t q_mainwindow_window_flags(void* self);
void q_mainwindow_set_window_flag(void* self, int64_t param1);
void q_mainwindow_override_window_flags(void* self, int64_t typeVal);
int64_t q_mainwindow_window_type(void* self);
QWidget* q_mainwindow_find(uint64_t param1);
QWidget* q_mainwindow_child_at(void* self, int x, int y);
QWidget* q_mainwindow_child_at_with_q_point(void* self, void* p);
void q_mainwindow_set_attribute(void* self, int64_t param1);
bool q_mainwindow_test_attribute(void* self, int64_t param1);
void q_mainwindow_ensure_polished(void* self);
bool q_mainwindow_is_ancestor_of(void* self, void* child);
bool q_mainwindow_auto_fill_background(void* self);
void q_mainwindow_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_mainwindow_backing_store(void* self);
QWindow* q_mainwindow_window_handle(void* self);
QScreen* q_mainwindow_screen(void* self);
void q_mainwindow_set_screen(void* self, void* screen);
QWidget* q_mainwindow_create_window_container(void* window);
void q_mainwindow_window_title_changed(void* self, const char* title);
void q_mainwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_mainwindow_window_icon_changed(void* self, void* icon);
void q_mainwindow_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_mainwindow_window_icon_text_changed(void* self, const char* iconText);
void q_mainwindow_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_mainwindow_custom_context_menu_requested(void* self, void* pos);
void q_mainwindow_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_mainwindow_input_method_hints(void* self);
void q_mainwindow_set_input_method_hints(void* self, int64_t hints);
void q_mainwindow_render2(void* self, void* target, void* targetOffset);
void q_mainwindow_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_mainwindow_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_mainwindow_render22(void* self, void* painter, void* targetOffset);
void q_mainwindow_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_mainwindow_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_mainwindow_grab1(void* self, void* rectangle);
void q_mainwindow_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_mainwindow_grab_shortcut2(void* self, void* key, int64_t context);
void q_mainwindow_set_shortcut_enabled2(void* self, int id, bool enable);
void q_mainwindow_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_mainwindow_set_window_flag2(void* self, int64_t param1, bool on);
void q_mainwindow_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_mainwindow_create_window_container2(void* window, void* parent);
QWidget* q_mainwindow_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_mainwindow_object_name(void* self);
void q_mainwindow_set_object_name(void* self, const char* name);
bool q_mainwindow_is_widget_type(void* self);
bool q_mainwindow_is_window_type(void* self);
bool q_mainwindow_is_quick_item_type(void* self);
bool q_mainwindow_signals_blocked(void* self);
bool q_mainwindow_block_signals(void* self, bool b);
QThread* q_mainwindow_thread(void* self);
void q_mainwindow_move_to_thread(void* self, void* thread);
int32_t q_mainwindow_start_timer(void* self, int interval);
void q_mainwindow_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_mainwindow_children(void* self);
void q_mainwindow_install_event_filter(void* self, void* filterObj);
void q_mainwindow_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_mainwindow_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_mainwindow_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_mainwindow_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_mainwindow_disconnect_with_q_meta_object_connection(void* param1);
void q_mainwindow_dump_object_tree(void* self);
void q_mainwindow_dump_object_info(void* self);
bool q_mainwindow_set_property(void* self, const char* name, void* value);
QVariant* q_mainwindow_property(void* self, const char* name);
const char** q_mainwindow_dynamic_property_names(void* self);
QBindingStorage* q_mainwindow_binding_storage(void* self);
QBindingStorage* q_mainwindow_binding_storage2(void* self);
void q_mainwindow_destroyed(void* self);
void q_mainwindow_on_destroyed(void* self, void (*slot)(void*));
QObject* q_mainwindow_parent(void* self);
bool q_mainwindow_inherits(void* self, const char* classname);
void q_mainwindow_delete_later(void* self);
int32_t q_mainwindow_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_mainwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_mainwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_mainwindow_destroyed1(void* self, void* param1);
void q_mainwindow_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_mainwindow_painting_active(void* self);
int32_t q_mainwindow_width_m_m(void* self);
int32_t q_mainwindow_height_m_m(void* self);
int32_t q_mainwindow_logical_dpi_x(void* self);
int32_t q_mainwindow_logical_dpi_y(void* self);
int32_t q_mainwindow_physical_dpi_x(void* self);
int32_t q_mainwindow_physical_dpi_y(void* self);
double q_mainwindow_device_pixel_ratio(void* self);
double q_mainwindow_device_pixel_ratio_f(void* self);
int32_t q_mainwindow_color_count(void* self);
int32_t q_mainwindow_depth(void* self);
double q_mainwindow_device_pixel_ratio_f_scale();
int32_t q_mainwindow_dev_type(void* self);
int32_t q_mainwindow_qbase_dev_type(void* self);
void q_mainwindow_on_dev_type(void* self, int32_t (*slot)());
void q_mainwindow_set_visible(void* self, bool visible);
void q_mainwindow_qbase_set_visible(void* self, bool visible);
void q_mainwindow_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_mainwindow_size_hint(void* self);
QSize* q_mainwindow_qbase_size_hint(void* self);
void q_mainwindow_on_size_hint(void* self, QSize* (*slot)());
QSize* q_mainwindow_minimum_size_hint(void* self);
QSize* q_mainwindow_qbase_minimum_size_hint(void* self);
void q_mainwindow_on_minimum_size_hint(void* self, QSize* (*slot)());
int32_t q_mainwindow_height_for_width(void* self, int param1);
int32_t q_mainwindow_qbase_height_for_width(void* self, int param1);
void q_mainwindow_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_mainwindow_has_height_for_width(void* self);
bool q_mainwindow_qbase_has_height_for_width(void* self);
void q_mainwindow_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_mainwindow_paint_engine(void* self);
QPaintEngine* q_mainwindow_qbase_paint_engine(void* self);
void q_mainwindow_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_mainwindow_mouse_press_event(void* self, void* event);
void q_mainwindow_qbase_mouse_press_event(void* self, void* event);
void q_mainwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_mouse_release_event(void* self, void* event);
void q_mainwindow_qbase_mouse_release_event(void* self, void* event);
void q_mainwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_mouse_double_click_event(void* self, void* event);
void q_mainwindow_qbase_mouse_double_click_event(void* self, void* event);
void q_mainwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_mouse_move_event(void* self, void* event);
void q_mainwindow_qbase_mouse_move_event(void* self, void* event);
void q_mainwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_wheel_event(void* self, void* event);
void q_mainwindow_qbase_wheel_event(void* self, void* event);
void q_mainwindow_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_key_press_event(void* self, void* event);
void q_mainwindow_qbase_key_press_event(void* self, void* event);
void q_mainwindow_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_key_release_event(void* self, void* event);
void q_mainwindow_qbase_key_release_event(void* self, void* event);
void q_mainwindow_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_focus_in_event(void* self, void* event);
void q_mainwindow_qbase_focus_in_event(void* self, void* event);
void q_mainwindow_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_focus_out_event(void* self, void* event);
void q_mainwindow_qbase_focus_out_event(void* self, void* event);
void q_mainwindow_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_enter_event(void* self, void* event);
void q_mainwindow_qbase_enter_event(void* self, void* event);
void q_mainwindow_on_enter_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_leave_event(void* self, void* event);
void q_mainwindow_qbase_leave_event(void* self, void* event);
void q_mainwindow_on_leave_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_paint_event(void* self, void* event);
void q_mainwindow_qbase_paint_event(void* self, void* event);
void q_mainwindow_on_paint_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_move_event(void* self, void* event);
void q_mainwindow_qbase_move_event(void* self, void* event);
void q_mainwindow_on_move_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_resize_event(void* self, void* event);
void q_mainwindow_qbase_resize_event(void* self, void* event);
void q_mainwindow_on_resize_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_close_event(void* self, void* event);
void q_mainwindow_qbase_close_event(void* self, void* event);
void q_mainwindow_on_close_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_tablet_event(void* self, void* event);
void q_mainwindow_qbase_tablet_event(void* self, void* event);
void q_mainwindow_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_action_event(void* self, void* event);
void q_mainwindow_qbase_action_event(void* self, void* event);
void q_mainwindow_on_action_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_drag_enter_event(void* self, void* event);
void q_mainwindow_qbase_drag_enter_event(void* self, void* event);
void q_mainwindow_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_drag_move_event(void* self, void* event);
void q_mainwindow_qbase_drag_move_event(void* self, void* event);
void q_mainwindow_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_drag_leave_event(void* self, void* event);
void q_mainwindow_qbase_drag_leave_event(void* self, void* event);
void q_mainwindow_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_drop_event(void* self, void* event);
void q_mainwindow_qbase_drop_event(void* self, void* event);
void q_mainwindow_on_drop_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_show_event(void* self, void* event);
void q_mainwindow_qbase_show_event(void* self, void* event);
void q_mainwindow_on_show_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_hide_event(void* self, void* event);
void q_mainwindow_qbase_hide_event(void* self, void* event);
void q_mainwindow_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_mainwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_mainwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_mainwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
void q_mainwindow_change_event(void* self, void* param1);
void q_mainwindow_qbase_change_event(void* self, void* param1);
void q_mainwindow_on_change_event(void* self, void (*slot)(void*, void*));
int32_t q_mainwindow_metric(void* self, int64_t param1);
int32_t q_mainwindow_qbase_metric(void* self, int64_t param1);
void q_mainwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_mainwindow_init_painter(void* self, void* painter);
void q_mainwindow_qbase_init_painter(void* self, void* painter);
void q_mainwindow_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_mainwindow_redirected(void* self, void* offset);
QPaintDevice* q_mainwindow_qbase_redirected(void* self, void* offset);
void q_mainwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_mainwindow_shared_painter(void* self);
QPainter* q_mainwindow_qbase_shared_painter(void* self);
void q_mainwindow_on_shared_painter(void* self, QPainter* (*slot)());
void q_mainwindow_input_method_event(void* self, void* param1);
void q_mainwindow_qbase_input_method_event(void* self, void* param1);
void q_mainwindow_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_mainwindow_input_method_query(void* self, int64_t param1);
QVariant* q_mainwindow_qbase_input_method_query(void* self, int64_t param1);
void q_mainwindow_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_mainwindow_focus_next_prev_child(void* self, bool next);
bool q_mainwindow_qbase_focus_next_prev_child(void* self, bool next);
void q_mainwindow_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_mainwindow_event_filter(void* self, void* watched, void* event);
bool q_mainwindow_qbase_event_filter(void* self, void* watched, void* event);
void q_mainwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_mainwindow_timer_event(void* self, void* event);
void q_mainwindow_qbase_timer_event(void* self, void* event);
void q_mainwindow_on_timer_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_child_event(void* self, void* event);
void q_mainwindow_qbase_child_event(void* self, void* event);
void q_mainwindow_on_child_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_custom_event(void* self, void* event);
void q_mainwindow_qbase_custom_event(void* self, void* event);
void q_mainwindow_on_custom_event(void* self, void (*slot)(void*, void*));
void q_mainwindow_connect_notify(void* self, void* signal);
void q_mainwindow_qbase_connect_notify(void* self, void* signal);
void q_mainwindow_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_mainwindow_disconnect_notify(void* self, void* signal);
void q_mainwindow_qbase_disconnect_notify(void* self, void* signal);
void q_mainwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_mainwindow_update_micro_focus(void* self);
void q_mainwindow_qbase_update_micro_focus(void* self);
void q_mainwindow_on_update_micro_focus(void* self, void (*slot)());
void q_mainwindow_create(void* self);
void q_mainwindow_qbase_create(void* self);
void q_mainwindow_on_create(void* self, void (*slot)());
void q_mainwindow_destroy(void* self);
void q_mainwindow_qbase_destroy(void* self);
void q_mainwindow_on_destroy(void* self, void (*slot)());
bool q_mainwindow_focus_next_child(void* self);
bool q_mainwindow_qbase_focus_next_child(void* self);
void q_mainwindow_on_focus_next_child(void* self, bool (*slot)());
bool q_mainwindow_focus_previous_child(void* self);
bool q_mainwindow_qbase_focus_previous_child(void* self);
void q_mainwindow_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_mainwindow_sender(void* self);
QObject* q_mainwindow_qbase_sender(void* self);
void q_mainwindow_on_sender(void* self, QObject* (*slot)());
int32_t q_mainwindow_sender_signal_index(void* self);
int32_t q_mainwindow_qbase_sender_signal_index(void* self);
void q_mainwindow_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_mainwindow_receivers(void* self, const char* signal);
int32_t q_mainwindow_qbase_receivers(void* self, const char* signal);
void q_mainwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_mainwindow_is_signal_connected(void* self, void* signal);
bool q_mainwindow_qbase_is_signal_connected(void* self, void* signal);
void q_mainwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_mainwindow_delete(void* self);

/// https://doc.qt.io/qt-6/qmainwindow.html#types

typedef enum {
    QMAINWINDOW_DOCKOPTION_ANIMATEDDOCKS = 1,
    QMAINWINDOW_DOCKOPTION_ALLOWNESTEDDOCKS = 2,
    QMAINWINDOW_DOCKOPTION_ALLOWTABBEDDOCKS = 4,
    QMAINWINDOW_DOCKOPTION_FORCETABBEDDOCKS = 8,
    QMAINWINDOW_DOCKOPTION_VERTICALTABS = 16,
    QMAINWINDOW_DOCKOPTION_GROUPEDDRAGGING = 32
} QMainWindow__DockOption;

#endif
