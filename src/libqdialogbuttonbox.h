#pragma once
#ifndef SRCQT6C_LIBQDIALOGBUTTONBOX_H
#define SRCQT6C_LIBQDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractbutton.h"
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

QDialogButtonBox* q_dialogbuttonbox_new(void* parent);
QDialogButtonBox* q_dialogbuttonbox_new2();
QDialogButtonBox* q_dialogbuttonbox_new3(int64_t orientation);
QDialogButtonBox* q_dialogbuttonbox_new4(int64_t buttons);
QDialogButtonBox* q_dialogbuttonbox_new5(int64_t buttons, int64_t orientation);
QDialogButtonBox* q_dialogbuttonbox_new6(int64_t orientation, void* parent);
QDialogButtonBox* q_dialogbuttonbox_new7(int64_t buttons, void* parent);
QDialogButtonBox* q_dialogbuttonbox_new8(int64_t buttons, int64_t orientation, void* parent);
QMetaObject* q_dialogbuttonbox_meta_object(void* self);
void* q_dialogbuttonbox_metacast(void* self, const char* param1);
int32_t q_dialogbuttonbox_metacall(void* self, int64_t param1, int param2, void* param3);
void q_dialogbuttonbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_dialogbuttonbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_dialogbuttonbox_tr(const char* s);
void q_dialogbuttonbox_set_orientation(void* self, int64_t orientation);
int64_t q_dialogbuttonbox_orientation(void* self);
void q_dialogbuttonbox_add_button(void* self, void* button, int64_t role);
QPushButton* q_dialogbuttonbox_add_button2(void* self, const char* text, int64_t role);
QPushButton* q_dialogbuttonbox_add_button_with_button(void* self, int64_t button);
void q_dialogbuttonbox_remove_button(void* self, void* button);
void q_dialogbuttonbox_clear(void* self);
libqt_list /* of QAbstractButton* */ q_dialogbuttonbox_buttons(void* self);
int64_t q_dialogbuttonbox_button_role(void* self, void* button);
void q_dialogbuttonbox_set_standard_buttons(void* self, int64_t buttons);
int64_t q_dialogbuttonbox_standard_buttons(void* self);
int64_t q_dialogbuttonbox_standard_button(void* self, void* button);
QPushButton* q_dialogbuttonbox_button(void* self, int64_t which);
void q_dialogbuttonbox_set_center_buttons(void* self, bool center);
bool q_dialogbuttonbox_center_buttons(void* self);
void q_dialogbuttonbox_clicked(void* self, void* button);
void q_dialogbuttonbox_on_clicked(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_accepted(void* self);
void q_dialogbuttonbox_on_accepted(void* self, void (*slot)(void*));
void q_dialogbuttonbox_help_requested(void* self);
void q_dialogbuttonbox_on_help_requested(void* self, void (*slot)(void*));
void q_dialogbuttonbox_rejected(void* self);
void q_dialogbuttonbox_on_rejected(void* self, void (*slot)(void*));
void q_dialogbuttonbox_change_event(void* self, void* event);
void q_dialogbuttonbox_on_change_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_qbase_change_event(void* self, void* event);
bool q_dialogbuttonbox_event(void* self, void* event);
void q_dialogbuttonbox_on_event(void* self, bool (*slot)(void*, void*));
bool q_dialogbuttonbox_qbase_event(void* self, void* event);
const char* q_dialogbuttonbox_tr2(const char* s, const char* c);
const char* q_dialogbuttonbox_tr3(const char* s, const char* c, int n);
uintptr_t q_dialogbuttonbox_win_id(void* self);
void q_dialogbuttonbox_create_win_id(void* self);
uintptr_t q_dialogbuttonbox_internal_win_id(void* self);
uintptr_t q_dialogbuttonbox_effective_win_id(void* self);
QStyle* q_dialogbuttonbox_style(void* self);
void q_dialogbuttonbox_set_style(void* self, void* style);
bool q_dialogbuttonbox_is_top_level(void* self);
bool q_dialogbuttonbox_is_window(void* self);
bool q_dialogbuttonbox_is_modal(void* self);
int64_t q_dialogbuttonbox_window_modality(void* self);
void q_dialogbuttonbox_set_window_modality(void* self, int64_t windowModality);
bool q_dialogbuttonbox_is_enabled(void* self);
bool q_dialogbuttonbox_is_enabled_to(void* self, void* param1);
void q_dialogbuttonbox_set_enabled(void* self, bool enabled);
void q_dialogbuttonbox_set_disabled(void* self, bool disabled);
void q_dialogbuttonbox_set_window_modified(void* self, bool windowModified);
QRect* q_dialogbuttonbox_frame_geometry(void* self);
QRect* q_dialogbuttonbox_geometry(void* self);
QRect* q_dialogbuttonbox_normal_geometry(void* self);
int32_t q_dialogbuttonbox_x(void* self);
int32_t q_dialogbuttonbox_y(void* self);
QPoint* q_dialogbuttonbox_pos(void* self);
QSize* q_dialogbuttonbox_frame_size(void* self);
QSize* q_dialogbuttonbox_size(void* self);
int32_t q_dialogbuttonbox_width(void* self);
int32_t q_dialogbuttonbox_height(void* self);
QRect* q_dialogbuttonbox_rect(void* self);
QRect* q_dialogbuttonbox_children_rect(void* self);
QRegion* q_dialogbuttonbox_children_region(void* self);
QSize* q_dialogbuttonbox_minimum_size(void* self);
QSize* q_dialogbuttonbox_maximum_size(void* self);
int32_t q_dialogbuttonbox_minimum_width(void* self);
int32_t q_dialogbuttonbox_minimum_height(void* self);
int32_t q_dialogbuttonbox_maximum_width(void* self);
int32_t q_dialogbuttonbox_maximum_height(void* self);
void q_dialogbuttonbox_set_minimum_size(void* self, void* minimumSize);
void q_dialogbuttonbox_set_minimum_size2(void* self, int minw, int minh);
void q_dialogbuttonbox_set_maximum_size(void* self, void* maximumSize);
void q_dialogbuttonbox_set_maximum_size2(void* self, int maxw, int maxh);
void q_dialogbuttonbox_set_minimum_width(void* self, int minw);
void q_dialogbuttonbox_set_minimum_height(void* self, int minh);
void q_dialogbuttonbox_set_maximum_width(void* self, int maxw);
void q_dialogbuttonbox_set_maximum_height(void* self, int maxh);
QSize* q_dialogbuttonbox_size_increment(void* self);
void q_dialogbuttonbox_set_size_increment(void* self, void* sizeIncrement);
void q_dialogbuttonbox_set_size_increment2(void* self, int w, int h);
QSize* q_dialogbuttonbox_base_size(void* self);
void q_dialogbuttonbox_set_base_size(void* self, void* baseSize);
void q_dialogbuttonbox_set_base_size2(void* self, int basew, int baseh);
void q_dialogbuttonbox_set_fixed_size(void* self, void* fixedSize);
void q_dialogbuttonbox_set_fixed_size2(void* self, int w, int h);
void q_dialogbuttonbox_set_fixed_width(void* self, int w);
void q_dialogbuttonbox_set_fixed_height(void* self, int h);
QPointF* q_dialogbuttonbox_map_to_global(void* self, void* param1);
QPoint* q_dialogbuttonbox_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_dialogbuttonbox_map_from_global(void* self, void* param1);
QPoint* q_dialogbuttonbox_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_dialogbuttonbox_map_to_parent(void* self, void* param1);
QPoint* q_dialogbuttonbox_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_dialogbuttonbox_map_from_parent(void* self, void* param1);
QPoint* q_dialogbuttonbox_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_dialogbuttonbox_map_to(void* self, void* param1, void* param2);
QPoint* q_dialogbuttonbox_map_to2(void* self, void* param1, void* param2);
QPointF* q_dialogbuttonbox_map_from(void* self, void* param1, void* param2);
QPoint* q_dialogbuttonbox_map_from2(void* self, void* param1, void* param2);
QWidget* q_dialogbuttonbox_window(void* self);
QWidget* q_dialogbuttonbox_native_parent_widget(void* self);
QWidget* q_dialogbuttonbox_top_level_widget(void* self);
QPalette* q_dialogbuttonbox_palette(void* self);
void q_dialogbuttonbox_set_palette(void* self, void* palette);
void q_dialogbuttonbox_set_background_role(void* self, int64_t backgroundRole);
int64_t q_dialogbuttonbox_background_role(void* self);
void q_dialogbuttonbox_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_dialogbuttonbox_foreground_role(void* self);
QFont* q_dialogbuttonbox_font(void* self);
void q_dialogbuttonbox_set_font(void* self, void* font);
QFontMetrics* q_dialogbuttonbox_font_metrics(void* self);
QFontInfo* q_dialogbuttonbox_font_info(void* self);
QCursor* q_dialogbuttonbox_cursor(void* self);
void q_dialogbuttonbox_set_cursor(void* self, void* cursor);
void q_dialogbuttonbox_unset_cursor(void* self);
void q_dialogbuttonbox_set_mouse_tracking(void* self, bool enable);
bool q_dialogbuttonbox_has_mouse_tracking(void* self);
bool q_dialogbuttonbox_under_mouse(void* self);
void q_dialogbuttonbox_set_tablet_tracking(void* self, bool enable);
bool q_dialogbuttonbox_has_tablet_tracking(void* self);
void q_dialogbuttonbox_set_mask(void* self, void* mask);
void q_dialogbuttonbox_set_mask_with_mask(void* self, void* mask);
QRegion* q_dialogbuttonbox_mask(void* self);
void q_dialogbuttonbox_clear_mask(void* self);
void q_dialogbuttonbox_render(void* self, void* target);
void q_dialogbuttonbox_render_with_painter(void* self, void* painter);
QPixmap* q_dialogbuttonbox_grab(void* self);
QGraphicsEffect* q_dialogbuttonbox_graphics_effect(void* self);
void q_dialogbuttonbox_set_graphics_effect(void* self, void* effect);
void q_dialogbuttonbox_grab_gesture(void* self, int64_t typeVal);
void q_dialogbuttonbox_ungrab_gesture(void* self, int64_t typeVal);
void q_dialogbuttonbox_set_window_title(void* self, const char* windowTitle);
void q_dialogbuttonbox_set_style_sheet(void* self, const char* styleSheet);
const char* q_dialogbuttonbox_style_sheet(void* self);
const char* q_dialogbuttonbox_window_title(void* self);
void q_dialogbuttonbox_set_window_icon(void* self, void* icon);
QIcon* q_dialogbuttonbox_window_icon(void* self);
void q_dialogbuttonbox_set_window_icon_text(void* self, const char* windowIconText);
const char* q_dialogbuttonbox_window_icon_text(void* self);
void q_dialogbuttonbox_set_window_role(void* self, const char* windowRole);
const char* q_dialogbuttonbox_window_role(void* self);
void q_dialogbuttonbox_set_window_file_path(void* self, const char* filePath);
const char* q_dialogbuttonbox_window_file_path(void* self);
void q_dialogbuttonbox_set_window_opacity(void* self, double level);
double q_dialogbuttonbox_window_opacity(void* self);
bool q_dialogbuttonbox_is_window_modified(void* self);
void q_dialogbuttonbox_set_tool_tip(void* self, const char* toolTip);
const char* q_dialogbuttonbox_tool_tip(void* self);
void q_dialogbuttonbox_set_tool_tip_duration(void* self, int msec);
int32_t q_dialogbuttonbox_tool_tip_duration(void* self);
void q_dialogbuttonbox_set_status_tip(void* self, const char* statusTip);
const char* q_dialogbuttonbox_status_tip(void* self);
void q_dialogbuttonbox_set_whats_this(void* self, const char* whatsThis);
const char* q_dialogbuttonbox_whats_this(void* self);
const char* q_dialogbuttonbox_accessible_name(void* self);
void q_dialogbuttonbox_set_accessible_name(void* self, const char* name);
const char* q_dialogbuttonbox_accessible_description(void* self);
void q_dialogbuttonbox_set_accessible_description(void* self, const char* description);
void q_dialogbuttonbox_set_layout_direction(void* self, int64_t direction);
int64_t q_dialogbuttonbox_layout_direction(void* self);
void q_dialogbuttonbox_unset_layout_direction(void* self);
void q_dialogbuttonbox_set_locale(void* self, void* locale);
QLocale* q_dialogbuttonbox_locale(void* self);
void q_dialogbuttonbox_unset_locale(void* self);
bool q_dialogbuttonbox_is_right_to_left(void* self);
bool q_dialogbuttonbox_is_left_to_right(void* self);
void q_dialogbuttonbox_set_focus(void* self);
bool q_dialogbuttonbox_is_active_window(void* self);
void q_dialogbuttonbox_activate_window(void* self);
void q_dialogbuttonbox_clear_focus(void* self);
void q_dialogbuttonbox_set_focus_with_reason(void* self, int64_t reason);
int64_t q_dialogbuttonbox_focus_policy(void* self);
void q_dialogbuttonbox_set_focus_policy(void* self, int64_t policy);
bool q_dialogbuttonbox_has_focus(void* self);
void q_dialogbuttonbox_set_tab_order(void* param1, void* param2);
void q_dialogbuttonbox_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_dialogbuttonbox_focus_proxy(void* self);
int64_t q_dialogbuttonbox_context_menu_policy(void* self);
void q_dialogbuttonbox_set_context_menu_policy(void* self, int64_t policy);
void q_dialogbuttonbox_grab_mouse(void* self);
void q_dialogbuttonbox_grab_mouse_with_q_cursor(void* self, void* param1);
void q_dialogbuttonbox_release_mouse(void* self);
void q_dialogbuttonbox_grab_keyboard(void* self);
void q_dialogbuttonbox_release_keyboard(void* self);
int32_t q_dialogbuttonbox_grab_shortcut(void* self, void* key);
void q_dialogbuttonbox_release_shortcut(void* self, int id);
void q_dialogbuttonbox_set_shortcut_enabled(void* self, int id);
void q_dialogbuttonbox_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_dialogbuttonbox_mouse_grabber();
QWidget* q_dialogbuttonbox_keyboard_grabber();
bool q_dialogbuttonbox_updates_enabled(void* self);
void q_dialogbuttonbox_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_dialogbuttonbox_graphics_proxy_widget(void* self);
void q_dialogbuttonbox_update(void* self);
void q_dialogbuttonbox_repaint(void* self);
void q_dialogbuttonbox_update2(void* self, int x, int y, int w, int h);
void q_dialogbuttonbox_update_with_q_rect(void* self, void* param1);
void q_dialogbuttonbox_update_with_q_region(void* self, void* param1);
void q_dialogbuttonbox_repaint2(void* self, int x, int y, int w, int h);
void q_dialogbuttonbox_repaint_with_q_rect(void* self, void* param1);
void q_dialogbuttonbox_repaint_with_q_region(void* self, void* param1);
void q_dialogbuttonbox_set_hidden(void* self, bool hidden);
void q_dialogbuttonbox_show(void* self);
void q_dialogbuttonbox_hide(void* self);
void q_dialogbuttonbox_show_minimized(void* self);
void q_dialogbuttonbox_show_maximized(void* self);
void q_dialogbuttonbox_show_full_screen(void* self);
void q_dialogbuttonbox_show_normal(void* self);
bool q_dialogbuttonbox_close(void* self);
void q_dialogbuttonbox_raise(void* self);
void q_dialogbuttonbox_lower(void* self);
void q_dialogbuttonbox_stack_under(void* self, void* param1);
void q_dialogbuttonbox_move(void* self, int x, int y);
void q_dialogbuttonbox_move_with_q_point(void* self, void* param1);
void q_dialogbuttonbox_resize(void* self, int w, int h);
void q_dialogbuttonbox_resize_with_q_size(void* self, void* param1);
void q_dialogbuttonbox_set_geometry(void* self, int x, int y, int w, int h);
void q_dialogbuttonbox_set_geometry_with_geometry(void* self, void* geometry);
char* q_dialogbuttonbox_save_geometry(void* self);
bool q_dialogbuttonbox_restore_geometry(void* self, const char* geometry);
void q_dialogbuttonbox_adjust_size(void* self);
bool q_dialogbuttonbox_is_visible(void* self);
bool q_dialogbuttonbox_is_visible_to(void* self, void* param1);
bool q_dialogbuttonbox_is_hidden(void* self);
bool q_dialogbuttonbox_is_minimized(void* self);
bool q_dialogbuttonbox_is_maximized(void* self);
bool q_dialogbuttonbox_is_full_screen(void* self);
int64_t q_dialogbuttonbox_window_state(void* self);
void q_dialogbuttonbox_set_window_state(void* self, int64_t state);
void q_dialogbuttonbox_override_window_state(void* self, int64_t state);
QSizePolicy* q_dialogbuttonbox_size_policy(void* self);
void q_dialogbuttonbox_set_size_policy(void* self, void* sizePolicy);
void q_dialogbuttonbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_dialogbuttonbox_visible_region(void* self);
void q_dialogbuttonbox_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_dialogbuttonbox_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_dialogbuttonbox_contents_margins(void* self);
QRect* q_dialogbuttonbox_contents_rect(void* self);
QLayout* q_dialogbuttonbox_layout(void* self);
void q_dialogbuttonbox_set_layout(void* self, void* layout);
void q_dialogbuttonbox_update_geometry(void* self);
void q_dialogbuttonbox_set_parent(void* self, void* parent);
void q_dialogbuttonbox_set_parent2(void* self, void* parent, int64_t f);
void q_dialogbuttonbox_scroll(void* self, int dx, int dy);
void q_dialogbuttonbox_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_dialogbuttonbox_focus_widget(void* self);
QWidget* q_dialogbuttonbox_next_in_focus_chain(void* self);
QWidget* q_dialogbuttonbox_previous_in_focus_chain(void* self);
bool q_dialogbuttonbox_accept_drops(void* self);
void q_dialogbuttonbox_set_accept_drops(void* self, bool on);
void q_dialogbuttonbox_add_action(void* self, void* action);
void q_dialogbuttonbox_add_actions(void* self, void* actions[]);
void q_dialogbuttonbox_insert_actions(void* self, void* before, void* actions[]);
void q_dialogbuttonbox_insert_action(void* self, void* before, void* action);
void q_dialogbuttonbox_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_dialogbuttonbox_actions(void* self);
QAction* q_dialogbuttonbox_add_action_with_text(void* self, const char* text);
QAction* q_dialogbuttonbox_add_action2(void* self, void* icon, const char* text);
QAction* q_dialogbuttonbox_add_action3(void* self, const char* text, void* shortcut);
QAction* q_dialogbuttonbox_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_dialogbuttonbox_parent_widget(void* self);
void q_dialogbuttonbox_set_window_flags(void* self, int64_t typeVal);
int64_t q_dialogbuttonbox_window_flags(void* self);
void q_dialogbuttonbox_set_window_flag(void* self, int64_t param1);
void q_dialogbuttonbox_override_window_flags(void* self, int64_t typeVal);
int64_t q_dialogbuttonbox_window_type(void* self);
QWidget* q_dialogbuttonbox_find(uint64_t param1);
QWidget* q_dialogbuttonbox_child_at(void* self, int x, int y);
QWidget* q_dialogbuttonbox_child_at_with_q_point(void* self, void* p);
void q_dialogbuttonbox_set_attribute(void* self, int64_t param1);
bool q_dialogbuttonbox_test_attribute(void* self, int64_t param1);
void q_dialogbuttonbox_ensure_polished(void* self);
bool q_dialogbuttonbox_is_ancestor_of(void* self, void* child);
bool q_dialogbuttonbox_auto_fill_background(void* self);
void q_dialogbuttonbox_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_dialogbuttonbox_backing_store(void* self);
QWindow* q_dialogbuttonbox_window_handle(void* self);
QScreen* q_dialogbuttonbox_screen(void* self);
void q_dialogbuttonbox_set_screen(void* self, void* screen);
QWidget* q_dialogbuttonbox_create_window_container(void* window);
void q_dialogbuttonbox_window_title_changed(void* self, const char* title);
void q_dialogbuttonbox_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_dialogbuttonbox_window_icon_changed(void* self, void* icon);
void q_dialogbuttonbox_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_window_icon_text_changed(void* self, const char* iconText);
void q_dialogbuttonbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_dialogbuttonbox_custom_context_menu_requested(void* self, void* pos);
void q_dialogbuttonbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_dialogbuttonbox_input_method_hints(void* self);
void q_dialogbuttonbox_set_input_method_hints(void* self, int64_t hints);
void q_dialogbuttonbox_render2(void* self, void* target, void* targetOffset);
void q_dialogbuttonbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_dialogbuttonbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_dialogbuttonbox_render22(void* self, void* painter, void* targetOffset);
void q_dialogbuttonbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_dialogbuttonbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_dialogbuttonbox_grab1(void* self, void* rectangle);
void q_dialogbuttonbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_dialogbuttonbox_grab_shortcut2(void* self, void* key, int64_t context);
void q_dialogbuttonbox_set_shortcut_enabled2(void* self, int id, bool enable);
void q_dialogbuttonbox_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_dialogbuttonbox_set_window_flag2(void* self, int64_t param1, bool on);
void q_dialogbuttonbox_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_dialogbuttonbox_create_window_container2(void* window, void* parent);
QWidget* q_dialogbuttonbox_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_dialogbuttonbox_object_name(void* self);
void q_dialogbuttonbox_set_object_name(void* self, const char* name);
bool q_dialogbuttonbox_is_widget_type(void* self);
bool q_dialogbuttonbox_is_window_type(void* self);
bool q_dialogbuttonbox_is_quick_item_type(void* self);
bool q_dialogbuttonbox_signals_blocked(void* self);
bool q_dialogbuttonbox_block_signals(void* self, bool b);
QThread* q_dialogbuttonbox_thread(void* self);
void q_dialogbuttonbox_move_to_thread(void* self, void* thread);
int32_t q_dialogbuttonbox_start_timer(void* self, int interval);
void q_dialogbuttonbox_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_dialogbuttonbox_children(void* self);
void q_dialogbuttonbox_install_event_filter(void* self, void* filterObj);
void q_dialogbuttonbox_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_dialogbuttonbox_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_dialogbuttonbox_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_dialogbuttonbox_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_dialogbuttonbox_disconnect_with_q_meta_object_connection(void* param1);
void q_dialogbuttonbox_dump_object_tree(void* self);
void q_dialogbuttonbox_dump_object_info(void* self);
bool q_dialogbuttonbox_set_property(void* self, const char* name, void* value);
QVariant* q_dialogbuttonbox_property(void* self, const char* name);
const char** q_dialogbuttonbox_dynamic_property_names(void* self);
QBindingStorage* q_dialogbuttonbox_binding_storage(void* self);
QBindingStorage* q_dialogbuttonbox_binding_storage2(void* self);
void q_dialogbuttonbox_destroyed(void* self);
void q_dialogbuttonbox_on_destroyed(void* self, void (*slot)(void*));
QObject* q_dialogbuttonbox_parent(void* self);
bool q_dialogbuttonbox_inherits(void* self, const char* classname);
void q_dialogbuttonbox_delete_later(void* self);
int32_t q_dialogbuttonbox_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_dialogbuttonbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_dialogbuttonbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_dialogbuttonbox_destroyed1(void* self, void* param1);
void q_dialogbuttonbox_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_dialogbuttonbox_painting_active(void* self);
int32_t q_dialogbuttonbox_width_m_m(void* self);
int32_t q_dialogbuttonbox_height_m_m(void* self);
int32_t q_dialogbuttonbox_logical_dpi_x(void* self);
int32_t q_dialogbuttonbox_logical_dpi_y(void* self);
int32_t q_dialogbuttonbox_physical_dpi_x(void* self);
int32_t q_dialogbuttonbox_physical_dpi_y(void* self);
double q_dialogbuttonbox_device_pixel_ratio(void* self);
double q_dialogbuttonbox_device_pixel_ratio_f(void* self);
int32_t q_dialogbuttonbox_color_count(void* self);
int32_t q_dialogbuttonbox_depth(void* self);
double q_dialogbuttonbox_device_pixel_ratio_f_scale();
int32_t q_dialogbuttonbox_dev_type(void* self);
int32_t q_dialogbuttonbox_qbase_dev_type(void* self);
void q_dialogbuttonbox_on_dev_type(void* self, int32_t (*slot)());
void q_dialogbuttonbox_set_visible(void* self, bool visible);
void q_dialogbuttonbox_qbase_set_visible(void* self, bool visible);
void q_dialogbuttonbox_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_dialogbuttonbox_size_hint(void* self);
QSize* q_dialogbuttonbox_qbase_size_hint(void* self);
void q_dialogbuttonbox_on_size_hint(void* self, QSize* (*slot)());
QSize* q_dialogbuttonbox_minimum_size_hint(void* self);
QSize* q_dialogbuttonbox_qbase_minimum_size_hint(void* self);
void q_dialogbuttonbox_on_minimum_size_hint(void* self, QSize* (*slot)());
int32_t q_dialogbuttonbox_height_for_width(void* self, int param1);
int32_t q_dialogbuttonbox_qbase_height_for_width(void* self, int param1);
void q_dialogbuttonbox_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_dialogbuttonbox_has_height_for_width(void* self);
bool q_dialogbuttonbox_qbase_has_height_for_width(void* self);
void q_dialogbuttonbox_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_dialogbuttonbox_paint_engine(void* self);
QPaintEngine* q_dialogbuttonbox_qbase_paint_engine(void* self);
void q_dialogbuttonbox_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_dialogbuttonbox_mouse_press_event(void* self, void* event);
void q_dialogbuttonbox_qbase_mouse_press_event(void* self, void* event);
void q_dialogbuttonbox_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_mouse_release_event(void* self, void* event);
void q_dialogbuttonbox_qbase_mouse_release_event(void* self, void* event);
void q_dialogbuttonbox_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_mouse_double_click_event(void* self, void* event);
void q_dialogbuttonbox_qbase_mouse_double_click_event(void* self, void* event);
void q_dialogbuttonbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_mouse_move_event(void* self, void* event);
void q_dialogbuttonbox_qbase_mouse_move_event(void* self, void* event);
void q_dialogbuttonbox_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_wheel_event(void* self, void* event);
void q_dialogbuttonbox_qbase_wheel_event(void* self, void* event);
void q_dialogbuttonbox_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_key_press_event(void* self, void* event);
void q_dialogbuttonbox_qbase_key_press_event(void* self, void* event);
void q_dialogbuttonbox_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_key_release_event(void* self, void* event);
void q_dialogbuttonbox_qbase_key_release_event(void* self, void* event);
void q_dialogbuttonbox_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_focus_in_event(void* self, void* event);
void q_dialogbuttonbox_qbase_focus_in_event(void* self, void* event);
void q_dialogbuttonbox_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_focus_out_event(void* self, void* event);
void q_dialogbuttonbox_qbase_focus_out_event(void* self, void* event);
void q_dialogbuttonbox_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_enter_event(void* self, void* event);
void q_dialogbuttonbox_qbase_enter_event(void* self, void* event);
void q_dialogbuttonbox_on_enter_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_leave_event(void* self, void* event);
void q_dialogbuttonbox_qbase_leave_event(void* self, void* event);
void q_dialogbuttonbox_on_leave_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_paint_event(void* self, void* event);
void q_dialogbuttonbox_qbase_paint_event(void* self, void* event);
void q_dialogbuttonbox_on_paint_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_move_event(void* self, void* event);
void q_dialogbuttonbox_qbase_move_event(void* self, void* event);
void q_dialogbuttonbox_on_move_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_resize_event(void* self, void* event);
void q_dialogbuttonbox_qbase_resize_event(void* self, void* event);
void q_dialogbuttonbox_on_resize_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_close_event(void* self, void* event);
void q_dialogbuttonbox_qbase_close_event(void* self, void* event);
void q_dialogbuttonbox_on_close_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_context_menu_event(void* self, void* event);
void q_dialogbuttonbox_qbase_context_menu_event(void* self, void* event);
void q_dialogbuttonbox_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_tablet_event(void* self, void* event);
void q_dialogbuttonbox_qbase_tablet_event(void* self, void* event);
void q_dialogbuttonbox_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_action_event(void* self, void* event);
void q_dialogbuttonbox_qbase_action_event(void* self, void* event);
void q_dialogbuttonbox_on_action_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_drag_enter_event(void* self, void* event);
void q_dialogbuttonbox_qbase_drag_enter_event(void* self, void* event);
void q_dialogbuttonbox_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_drag_move_event(void* self, void* event);
void q_dialogbuttonbox_qbase_drag_move_event(void* self, void* event);
void q_dialogbuttonbox_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_drag_leave_event(void* self, void* event);
void q_dialogbuttonbox_qbase_drag_leave_event(void* self, void* event);
void q_dialogbuttonbox_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_drop_event(void* self, void* event);
void q_dialogbuttonbox_qbase_drop_event(void* self, void* event);
void q_dialogbuttonbox_on_drop_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_show_event(void* self, void* event);
void q_dialogbuttonbox_qbase_show_event(void* self, void* event);
void q_dialogbuttonbox_on_show_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_hide_event(void* self, void* event);
void q_dialogbuttonbox_qbase_hide_event(void* self, void* event);
void q_dialogbuttonbox_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_dialogbuttonbox_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_dialogbuttonbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_dialogbuttonbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_dialogbuttonbox_metric(void* self, int64_t param1);
int32_t q_dialogbuttonbox_qbase_metric(void* self, int64_t param1);
void q_dialogbuttonbox_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_dialogbuttonbox_init_painter(void* self, void* painter);
void q_dialogbuttonbox_qbase_init_painter(void* self, void* painter);
void q_dialogbuttonbox_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_dialogbuttonbox_redirected(void* self, void* offset);
QPaintDevice* q_dialogbuttonbox_qbase_redirected(void* self, void* offset);
void q_dialogbuttonbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_dialogbuttonbox_shared_painter(void* self);
QPainter* q_dialogbuttonbox_qbase_shared_painter(void* self);
void q_dialogbuttonbox_on_shared_painter(void* self, QPainter* (*slot)());
void q_dialogbuttonbox_input_method_event(void* self, void* param1);
void q_dialogbuttonbox_qbase_input_method_event(void* self, void* param1);
void q_dialogbuttonbox_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_dialogbuttonbox_input_method_query(void* self, int64_t param1);
QVariant* q_dialogbuttonbox_qbase_input_method_query(void* self, int64_t param1);
void q_dialogbuttonbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_dialogbuttonbox_focus_next_prev_child(void* self, bool next);
bool q_dialogbuttonbox_qbase_focus_next_prev_child(void* self, bool next);
void q_dialogbuttonbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_dialogbuttonbox_event_filter(void* self, void* watched, void* event);
bool q_dialogbuttonbox_qbase_event_filter(void* self, void* watched, void* event);
void q_dialogbuttonbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_dialogbuttonbox_timer_event(void* self, void* event);
void q_dialogbuttonbox_qbase_timer_event(void* self, void* event);
void q_dialogbuttonbox_on_timer_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_child_event(void* self, void* event);
void q_dialogbuttonbox_qbase_child_event(void* self, void* event);
void q_dialogbuttonbox_on_child_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_custom_event(void* self, void* event);
void q_dialogbuttonbox_qbase_custom_event(void* self, void* event);
void q_dialogbuttonbox_on_custom_event(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_connect_notify(void* self, void* signal);
void q_dialogbuttonbox_qbase_connect_notify(void* self, void* signal);
void q_dialogbuttonbox_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_disconnect_notify(void* self, void* signal);
void q_dialogbuttonbox_qbase_disconnect_notify(void* self, void* signal);
void q_dialogbuttonbox_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_dialogbuttonbox_update_micro_focus(void* self);
void q_dialogbuttonbox_qbase_update_micro_focus(void* self);
void q_dialogbuttonbox_on_update_micro_focus(void* self, void (*slot)());
void q_dialogbuttonbox_create(void* self);
void q_dialogbuttonbox_qbase_create(void* self);
void q_dialogbuttonbox_on_create(void* self, void (*slot)());
void q_dialogbuttonbox_destroy(void* self);
void q_dialogbuttonbox_qbase_destroy(void* self);
void q_dialogbuttonbox_on_destroy(void* self, void (*slot)());
bool q_dialogbuttonbox_focus_next_child(void* self);
bool q_dialogbuttonbox_qbase_focus_next_child(void* self);
void q_dialogbuttonbox_on_focus_next_child(void* self, bool (*slot)());
bool q_dialogbuttonbox_focus_previous_child(void* self);
bool q_dialogbuttonbox_qbase_focus_previous_child(void* self);
void q_dialogbuttonbox_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_dialogbuttonbox_sender(void* self);
QObject* q_dialogbuttonbox_qbase_sender(void* self);
void q_dialogbuttonbox_on_sender(void* self, QObject* (*slot)());
int32_t q_dialogbuttonbox_sender_signal_index(void* self);
int32_t q_dialogbuttonbox_qbase_sender_signal_index(void* self);
void q_dialogbuttonbox_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_dialogbuttonbox_receivers(void* self, const char* signal);
int32_t q_dialogbuttonbox_qbase_receivers(void* self, const char* signal);
void q_dialogbuttonbox_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_dialogbuttonbox_is_signal_connected(void* self, void* signal);
bool q_dialogbuttonbox_qbase_is_signal_connected(void* self, void* signal);
void q_dialogbuttonbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_dialogbuttonbox_delete(void* self);

/// https://doc.qt.io/qt-6/qdialogbuttonbox.html#types

typedef enum {
    QDIALOGBUTTONBOX_BUTTONROLE_INVALIDROLE = -1,
    QDIALOGBUTTONBOX_BUTTONROLE_ACCEPTROLE = 0,
    QDIALOGBUTTONBOX_BUTTONROLE_REJECTROLE = 1,
    QDIALOGBUTTONBOX_BUTTONROLE_DESTRUCTIVEROLE = 2,
    QDIALOGBUTTONBOX_BUTTONROLE_ACTIONROLE = 3,
    QDIALOGBUTTONBOX_BUTTONROLE_HELPROLE = 4,
    QDIALOGBUTTONBOX_BUTTONROLE_YESROLE = 5,
    QDIALOGBUTTONBOX_BUTTONROLE_NOROLE = 6,
    QDIALOGBUTTONBOX_BUTTONROLE_RESETROLE = 7,
    QDIALOGBUTTONBOX_BUTTONROLE_APPLYROLE = 8,
    QDIALOGBUTTONBOX_BUTTONROLE_NROLES = 9
} QDialogButtonBox__ButtonRole;

typedef enum {
    QDIALOGBUTTONBOX_STANDARDBUTTON_NOBUTTON = 0,
    QDIALOGBUTTONBOX_STANDARDBUTTON_OK = 1024,
    QDIALOGBUTTONBOX_STANDARDBUTTON_SAVE = 2048,
    QDIALOGBUTTONBOX_STANDARDBUTTON_SAVEALL = 4096,
    QDIALOGBUTTONBOX_STANDARDBUTTON_OPEN = 8192,
    QDIALOGBUTTONBOX_STANDARDBUTTON_YES = 16384,
    QDIALOGBUTTONBOX_STANDARDBUTTON_YESTOALL = 32768,
    QDIALOGBUTTONBOX_STANDARDBUTTON_NO = 65536,
    QDIALOGBUTTONBOX_STANDARDBUTTON_NOTOALL = 131072,
    QDIALOGBUTTONBOX_STANDARDBUTTON_ABORT = 262144,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RETRY = 524288,
    QDIALOGBUTTONBOX_STANDARDBUTTON_IGNORE = 1048576,
    QDIALOGBUTTONBOX_STANDARDBUTTON_CLOSE = 2097152,
    QDIALOGBUTTONBOX_STANDARDBUTTON_CANCEL = 4194304,
    QDIALOGBUTTONBOX_STANDARDBUTTON_DISCARD = 8388608,
    QDIALOGBUTTONBOX_STANDARDBUTTON_HELP = 16777216,
    QDIALOGBUTTONBOX_STANDARDBUTTON_APPLY = 33554432,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RESET = 67108864,
    QDIALOGBUTTONBOX_STANDARDBUTTON_RESTOREDEFAULTS = 134217728,
    QDIALOGBUTTONBOX_STANDARDBUTTON_FIRSTBUTTON = 1024,
    QDIALOGBUTTONBOX_STANDARDBUTTON_LASTBUTTON = 134217728
} QDialogButtonBox__StandardButton;

typedef enum {
    QDIALOGBUTTONBOX_BUTTONLAYOUT_WINLAYOUT = 0,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_MACLAYOUT = 1,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_KDELAYOUT = 2,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_GNOMELAYOUT = 3,
    QDIALOGBUTTONBOX_BUTTONLAYOUT_ANDROIDLAYOUT = 4
} QDialogButtonBox__ButtonLayout;

#endif
