#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTPREVIEWWIDGET_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqaction.h"
#include "../libqevent.h"
#include "../libqanystringview.h"
#include "../libqbackingstore.h"
#include "../libqbindingstorage.h"
#include "../libqbitmap.h"
#include "../libqcursor.h"
#include "../libqfont.h"
#include "../libqfontinfo.h"
#include "../libqfontmetrics.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsproxywidget.h"
#include "../libqicon.h"
#include "../libqkeysequence.h"
#include "../libqlayout.h"
#include "../libqlocale.h"
#include "../libqmargins.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpalette.h"
#include "../libqpixmap.h"
#include "../libqpoint.h"
#include "libqprinter.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqscreen.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqthread.h"
#include "../libqvariant.h"
#include "../libqwidget.h"
#include "../libqwindow.h"

QPrintPreviewWidget* q_printpreviewwidget_new(void* parent);
QPrintPreviewWidget* q_printpreviewwidget_new2(void* printer);
QPrintPreviewWidget* q_printpreviewwidget_new3();
QPrintPreviewWidget* q_printpreviewwidget_new4(void* printer, void* parent);
QPrintPreviewWidget* q_printpreviewwidget_new5(void* printer, void* parent, int64_t flags);
QPrintPreviewWidget* q_printpreviewwidget_new6(void* parent, int64_t flags);
QMetaObject* q_printpreviewwidget_meta_object(void* self);
void* q_printpreviewwidget_metacast(void* self, const char* param1);
int32_t q_printpreviewwidget_metacall(void* self, int64_t param1, int param2, void* param3);
void q_printpreviewwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_printpreviewwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_printpreviewwidget_tr(const char* s);
double q_printpreviewwidget_zoom_factor(void* self);
int64_t q_printpreviewwidget_orientation(void* self);
int64_t q_printpreviewwidget_view_mode(void* self);
int64_t q_printpreviewwidget_zoom_mode(void* self);
int32_t q_printpreviewwidget_current_page(void* self);
int32_t q_printpreviewwidget_page_count(void* self);
void q_printpreviewwidget_set_visible(void* self, bool visible);
void q_printpreviewwidget_on_set_visible(void* self, void (*slot)(void*, bool));
void q_printpreviewwidget_qbase_set_visible(void* self, bool visible);
void q_printpreviewwidget_print(void* self);
void q_printpreviewwidget_zoom_in(void* self);
void q_printpreviewwidget_zoom_out(void* self);
void q_printpreviewwidget_set_zoom_factor(void* self, double zoomFactor);
void q_printpreviewwidget_set_orientation(void* self, int64_t orientation);
void q_printpreviewwidget_set_view_mode(void* self, int64_t viewMode);
void q_printpreviewwidget_set_zoom_mode(void* self, int64_t zoomMode);
void q_printpreviewwidget_set_current_page(void* self, int pageNumber);
void q_printpreviewwidget_fit_to_width(void* self);
void q_printpreviewwidget_fit_in_view(void* self);
void q_printpreviewwidget_set_landscape_orientation(void* self);
void q_printpreviewwidget_set_portrait_orientation(void* self);
void q_printpreviewwidget_set_single_page_view_mode(void* self);
void q_printpreviewwidget_set_facing_pages_view_mode(void* self);
void q_printpreviewwidget_set_all_pages_view_mode(void* self);
void q_printpreviewwidget_update_preview(void* self);
void q_printpreviewwidget_paint_requested(void* self, void* printer);
void q_printpreviewwidget_on_paint_requested(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_preview_changed(void* self);
void q_printpreviewwidget_on_preview_changed(void* self, void (*slot)(void*));
const char* q_printpreviewwidget_tr2(const char* s, const char* c);
const char* q_printpreviewwidget_tr3(const char* s, const char* c, int n);
void q_printpreviewwidget_zoom_in1(void* self, double zoom);
void q_printpreviewwidget_zoom_out1(void* self, double zoom);
uintptr_t q_printpreviewwidget_win_id(void* self);
void q_printpreviewwidget_create_win_id(void* self);
uintptr_t q_printpreviewwidget_internal_win_id(void* self);
uintptr_t q_printpreviewwidget_effective_win_id(void* self);
QStyle* q_printpreviewwidget_style(void* self);
void q_printpreviewwidget_set_style(void* self, void* style);
bool q_printpreviewwidget_is_top_level(void* self);
bool q_printpreviewwidget_is_window(void* self);
bool q_printpreviewwidget_is_modal(void* self);
int64_t q_printpreviewwidget_window_modality(void* self);
void q_printpreviewwidget_set_window_modality(void* self, int64_t windowModality);
bool q_printpreviewwidget_is_enabled(void* self);
bool q_printpreviewwidget_is_enabled_to(void* self, void* param1);
void q_printpreviewwidget_set_enabled(void* self, bool enabled);
void q_printpreviewwidget_set_disabled(void* self, bool disabled);
void q_printpreviewwidget_set_window_modified(void* self, bool windowModified);
QRect* q_printpreviewwidget_frame_geometry(void* self);
QRect* q_printpreviewwidget_geometry(void* self);
QRect* q_printpreviewwidget_normal_geometry(void* self);
int32_t q_printpreviewwidget_x(void* self);
int32_t q_printpreviewwidget_y(void* self);
QPoint* q_printpreviewwidget_pos(void* self);
QSize* q_printpreviewwidget_frame_size(void* self);
QSize* q_printpreviewwidget_size(void* self);
int32_t q_printpreviewwidget_width(void* self);
int32_t q_printpreviewwidget_height(void* self);
QRect* q_printpreviewwidget_rect(void* self);
QRect* q_printpreviewwidget_children_rect(void* self);
QRegion* q_printpreviewwidget_children_region(void* self);
QSize* q_printpreviewwidget_minimum_size(void* self);
QSize* q_printpreviewwidget_maximum_size(void* self);
int32_t q_printpreviewwidget_minimum_width(void* self);
int32_t q_printpreviewwidget_minimum_height(void* self);
int32_t q_printpreviewwidget_maximum_width(void* self);
int32_t q_printpreviewwidget_maximum_height(void* self);
void q_printpreviewwidget_set_minimum_size(void* self, void* minimumSize);
void q_printpreviewwidget_set_minimum_size2(void* self, int minw, int minh);
void q_printpreviewwidget_set_maximum_size(void* self, void* maximumSize);
void q_printpreviewwidget_set_maximum_size2(void* self, int maxw, int maxh);
void q_printpreviewwidget_set_minimum_width(void* self, int minw);
void q_printpreviewwidget_set_minimum_height(void* self, int minh);
void q_printpreviewwidget_set_maximum_width(void* self, int maxw);
void q_printpreviewwidget_set_maximum_height(void* self, int maxh);
QSize* q_printpreviewwidget_size_increment(void* self);
void q_printpreviewwidget_set_size_increment(void* self, void* sizeIncrement);
void q_printpreviewwidget_set_size_increment2(void* self, int w, int h);
QSize* q_printpreviewwidget_base_size(void* self);
void q_printpreviewwidget_set_base_size(void* self, void* baseSize);
void q_printpreviewwidget_set_base_size2(void* self, int basew, int baseh);
void q_printpreviewwidget_set_fixed_size(void* self, void* fixedSize);
void q_printpreviewwidget_set_fixed_size2(void* self, int w, int h);
void q_printpreviewwidget_set_fixed_width(void* self, int w);
void q_printpreviewwidget_set_fixed_height(void* self, int h);
QPointF* q_printpreviewwidget_map_to_global(void* self, void* param1);
QPoint* q_printpreviewwidget_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_printpreviewwidget_map_from_global(void* self, void* param1);
QPoint* q_printpreviewwidget_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_printpreviewwidget_map_to_parent(void* self, void* param1);
QPoint* q_printpreviewwidget_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_printpreviewwidget_map_from_parent(void* self, void* param1);
QPoint* q_printpreviewwidget_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_printpreviewwidget_map_to(void* self, void* param1, void* param2);
QPoint* q_printpreviewwidget_map_to2(void* self, void* param1, void* param2);
QPointF* q_printpreviewwidget_map_from(void* self, void* param1, void* param2);
QPoint* q_printpreviewwidget_map_from2(void* self, void* param1, void* param2);
QWidget* q_printpreviewwidget_window(void* self);
QWidget* q_printpreviewwidget_native_parent_widget(void* self);
QWidget* q_printpreviewwidget_top_level_widget(void* self);
QPalette* q_printpreviewwidget_palette(void* self);
void q_printpreviewwidget_set_palette(void* self, void* palette);
void q_printpreviewwidget_set_background_role(void* self, int64_t backgroundRole);
int64_t q_printpreviewwidget_background_role(void* self);
void q_printpreviewwidget_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_printpreviewwidget_foreground_role(void* self);
QFont* q_printpreviewwidget_font(void* self);
void q_printpreviewwidget_set_font(void* self, void* font);
QFontMetrics* q_printpreviewwidget_font_metrics(void* self);
QFontInfo* q_printpreviewwidget_font_info(void* self);
QCursor* q_printpreviewwidget_cursor(void* self);
void q_printpreviewwidget_set_cursor(void* self, void* cursor);
void q_printpreviewwidget_unset_cursor(void* self);
void q_printpreviewwidget_set_mouse_tracking(void* self, bool enable);
bool q_printpreviewwidget_has_mouse_tracking(void* self);
bool q_printpreviewwidget_under_mouse(void* self);
void q_printpreviewwidget_set_tablet_tracking(void* self, bool enable);
bool q_printpreviewwidget_has_tablet_tracking(void* self);
void q_printpreviewwidget_set_mask(void* self, void* mask);
void q_printpreviewwidget_set_mask_with_mask(void* self, void* mask);
QRegion* q_printpreviewwidget_mask(void* self);
void q_printpreviewwidget_clear_mask(void* self);
void q_printpreviewwidget_render(void* self, void* target);
void q_printpreviewwidget_render_with_painter(void* self, void* painter);
QPixmap* q_printpreviewwidget_grab(void* self);
QGraphicsEffect* q_printpreviewwidget_graphics_effect(void* self);
void q_printpreviewwidget_set_graphics_effect(void* self, void* effect);
void q_printpreviewwidget_grab_gesture(void* self, int64_t typeVal);
void q_printpreviewwidget_ungrab_gesture(void* self, int64_t typeVal);
void q_printpreviewwidget_set_window_title(void* self, const char* windowTitle);
void q_printpreviewwidget_set_style_sheet(void* self, const char* styleSheet);
const char* q_printpreviewwidget_style_sheet(void* self);
const char* q_printpreviewwidget_window_title(void* self);
void q_printpreviewwidget_set_window_icon(void* self, void* icon);
QIcon* q_printpreviewwidget_window_icon(void* self);
void q_printpreviewwidget_set_window_icon_text(void* self, const char* windowIconText);
const char* q_printpreviewwidget_window_icon_text(void* self);
void q_printpreviewwidget_set_window_role(void* self, const char* windowRole);
const char* q_printpreviewwidget_window_role(void* self);
void q_printpreviewwidget_set_window_file_path(void* self, const char* filePath);
const char* q_printpreviewwidget_window_file_path(void* self);
void q_printpreviewwidget_set_window_opacity(void* self, double level);
double q_printpreviewwidget_window_opacity(void* self);
bool q_printpreviewwidget_is_window_modified(void* self);
void q_printpreviewwidget_set_tool_tip(void* self, const char* toolTip);
const char* q_printpreviewwidget_tool_tip(void* self);
void q_printpreviewwidget_set_tool_tip_duration(void* self, int msec);
int32_t q_printpreviewwidget_tool_tip_duration(void* self);
void q_printpreviewwidget_set_status_tip(void* self, const char* statusTip);
const char* q_printpreviewwidget_status_tip(void* self);
void q_printpreviewwidget_set_whats_this(void* self, const char* whatsThis);
const char* q_printpreviewwidget_whats_this(void* self);
const char* q_printpreviewwidget_accessible_name(void* self);
void q_printpreviewwidget_set_accessible_name(void* self, const char* name);
const char* q_printpreviewwidget_accessible_description(void* self);
void q_printpreviewwidget_set_accessible_description(void* self, const char* description);
void q_printpreviewwidget_set_layout_direction(void* self, int64_t direction);
int64_t q_printpreviewwidget_layout_direction(void* self);
void q_printpreviewwidget_unset_layout_direction(void* self);
void q_printpreviewwidget_set_locale(void* self, void* locale);
QLocale* q_printpreviewwidget_locale(void* self);
void q_printpreviewwidget_unset_locale(void* self);
bool q_printpreviewwidget_is_right_to_left(void* self);
bool q_printpreviewwidget_is_left_to_right(void* self);
void q_printpreviewwidget_set_focus(void* self);
bool q_printpreviewwidget_is_active_window(void* self);
void q_printpreviewwidget_activate_window(void* self);
void q_printpreviewwidget_clear_focus(void* self);
void q_printpreviewwidget_set_focus_with_reason(void* self, int64_t reason);
int64_t q_printpreviewwidget_focus_policy(void* self);
void q_printpreviewwidget_set_focus_policy(void* self, int64_t policy);
bool q_printpreviewwidget_has_focus(void* self);
void q_printpreviewwidget_set_tab_order(void* param1, void* param2);
void q_printpreviewwidget_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_printpreviewwidget_focus_proxy(void* self);
int64_t q_printpreviewwidget_context_menu_policy(void* self);
void q_printpreviewwidget_set_context_menu_policy(void* self, int64_t policy);
void q_printpreviewwidget_grab_mouse(void* self);
void q_printpreviewwidget_grab_mouse_with_q_cursor(void* self, void* param1);
void q_printpreviewwidget_release_mouse(void* self);
void q_printpreviewwidget_grab_keyboard(void* self);
void q_printpreviewwidget_release_keyboard(void* self);
int32_t q_printpreviewwidget_grab_shortcut(void* self, void* key);
void q_printpreviewwidget_release_shortcut(void* self, int id);
void q_printpreviewwidget_set_shortcut_enabled(void* self, int id);
void q_printpreviewwidget_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_printpreviewwidget_mouse_grabber();
QWidget* q_printpreviewwidget_keyboard_grabber();
bool q_printpreviewwidget_updates_enabled(void* self);
void q_printpreviewwidget_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_printpreviewwidget_graphics_proxy_widget(void* self);
void q_printpreviewwidget_update(void* self);
void q_printpreviewwidget_repaint(void* self);
void q_printpreviewwidget_update2(void* self, int x, int y, int w, int h);
void q_printpreviewwidget_update_with_q_rect(void* self, void* param1);
void q_printpreviewwidget_update_with_q_region(void* self, void* param1);
void q_printpreviewwidget_repaint2(void* self, int x, int y, int w, int h);
void q_printpreviewwidget_repaint_with_q_rect(void* self, void* param1);
void q_printpreviewwidget_repaint_with_q_region(void* self, void* param1);
void q_printpreviewwidget_set_hidden(void* self, bool hidden);
void q_printpreviewwidget_show(void* self);
void q_printpreviewwidget_hide(void* self);
void q_printpreviewwidget_show_minimized(void* self);
void q_printpreviewwidget_show_maximized(void* self);
void q_printpreviewwidget_show_full_screen(void* self);
void q_printpreviewwidget_show_normal(void* self);
bool q_printpreviewwidget_close(void* self);
void q_printpreviewwidget_raise(void* self);
void q_printpreviewwidget_lower(void* self);
void q_printpreviewwidget_stack_under(void* self, void* param1);
void q_printpreviewwidget_move(void* self, int x, int y);
void q_printpreviewwidget_move_with_q_point(void* self, void* param1);
void q_printpreviewwidget_resize(void* self, int w, int h);
void q_printpreviewwidget_resize_with_q_size(void* self, void* param1);
void q_printpreviewwidget_set_geometry(void* self, int x, int y, int w, int h);
void q_printpreviewwidget_set_geometry_with_geometry(void* self, void* geometry);
char* q_printpreviewwidget_save_geometry(void* self);
bool q_printpreviewwidget_restore_geometry(void* self, const char* geometry);
void q_printpreviewwidget_adjust_size(void* self);
bool q_printpreviewwidget_is_visible(void* self);
bool q_printpreviewwidget_is_visible_to(void* self, void* param1);
bool q_printpreviewwidget_is_hidden(void* self);
bool q_printpreviewwidget_is_minimized(void* self);
bool q_printpreviewwidget_is_maximized(void* self);
bool q_printpreviewwidget_is_full_screen(void* self);
int64_t q_printpreviewwidget_window_state(void* self);
void q_printpreviewwidget_set_window_state(void* self, int64_t state);
void q_printpreviewwidget_override_window_state(void* self, int64_t state);
QSizePolicy* q_printpreviewwidget_size_policy(void* self);
void q_printpreviewwidget_set_size_policy(void* self, void* sizePolicy);
void q_printpreviewwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_printpreviewwidget_visible_region(void* self);
void q_printpreviewwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_printpreviewwidget_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_printpreviewwidget_contents_margins(void* self);
QRect* q_printpreviewwidget_contents_rect(void* self);
QLayout* q_printpreviewwidget_layout(void* self);
void q_printpreviewwidget_set_layout(void* self, void* layout);
void q_printpreviewwidget_update_geometry(void* self);
void q_printpreviewwidget_set_parent(void* self, void* parent);
void q_printpreviewwidget_set_parent2(void* self, void* parent, int64_t f);
void q_printpreviewwidget_scroll(void* self, int dx, int dy);
void q_printpreviewwidget_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_printpreviewwidget_focus_widget(void* self);
QWidget* q_printpreviewwidget_next_in_focus_chain(void* self);
QWidget* q_printpreviewwidget_previous_in_focus_chain(void* self);
bool q_printpreviewwidget_accept_drops(void* self);
void q_printpreviewwidget_set_accept_drops(void* self, bool on);
void q_printpreviewwidget_add_action(void* self, void* action);
void q_printpreviewwidget_add_actions(void* self, void* actions[]);
void q_printpreviewwidget_insert_actions(void* self, void* before, void* actions[]);
void q_printpreviewwidget_insert_action(void* self, void* before, void* action);
void q_printpreviewwidget_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_printpreviewwidget_actions(void* self);
QAction* q_printpreviewwidget_add_action_with_text(void* self, const char* text);
QAction* q_printpreviewwidget_add_action2(void* self, void* icon, const char* text);
QAction* q_printpreviewwidget_add_action3(void* self, const char* text, void* shortcut);
QAction* q_printpreviewwidget_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_printpreviewwidget_parent_widget(void* self);
void q_printpreviewwidget_set_window_flags(void* self, int64_t typeVal);
int64_t q_printpreviewwidget_window_flags(void* self);
void q_printpreviewwidget_set_window_flag(void* self, int64_t param1);
void q_printpreviewwidget_override_window_flags(void* self, int64_t typeVal);
int64_t q_printpreviewwidget_window_type(void* self);
QWidget* q_printpreviewwidget_find(uint64_t param1);
QWidget* q_printpreviewwidget_child_at(void* self, int x, int y);
QWidget* q_printpreviewwidget_child_at_with_q_point(void* self, void* p);
void q_printpreviewwidget_set_attribute(void* self, int64_t param1);
bool q_printpreviewwidget_test_attribute(void* self, int64_t param1);
void q_printpreviewwidget_ensure_polished(void* self);
bool q_printpreviewwidget_is_ancestor_of(void* self, void* child);
bool q_printpreviewwidget_auto_fill_background(void* self);
void q_printpreviewwidget_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_printpreviewwidget_backing_store(void* self);
QWindow* q_printpreviewwidget_window_handle(void* self);
QScreen* q_printpreviewwidget_screen(void* self);
void q_printpreviewwidget_set_screen(void* self, void* screen);
QWidget* q_printpreviewwidget_create_window_container(void* window);
void q_printpreviewwidget_window_title_changed(void* self, const char* title);
void q_printpreviewwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_printpreviewwidget_window_icon_changed(void* self, void* icon);
void q_printpreviewwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_window_icon_text_changed(void* self, const char* iconText);
void q_printpreviewwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_printpreviewwidget_custom_context_menu_requested(void* self, void* pos);
void q_printpreviewwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_printpreviewwidget_input_method_hints(void* self);
void q_printpreviewwidget_set_input_method_hints(void* self, int64_t hints);
void q_printpreviewwidget_render2(void* self, void* target, void* targetOffset);
void q_printpreviewwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_printpreviewwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_printpreviewwidget_render22(void* self, void* painter, void* targetOffset);
void q_printpreviewwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_printpreviewwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_printpreviewwidget_grab1(void* self, void* rectangle);
void q_printpreviewwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_printpreviewwidget_grab_shortcut2(void* self, void* key, int64_t context);
void q_printpreviewwidget_set_shortcut_enabled2(void* self, int id, bool enable);
void q_printpreviewwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_printpreviewwidget_set_window_flag2(void* self, int64_t param1, bool on);
void q_printpreviewwidget_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_printpreviewwidget_create_window_container2(void* window, void* parent);
QWidget* q_printpreviewwidget_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_printpreviewwidget_object_name(void* self);
void q_printpreviewwidget_set_object_name(void* self, const char* name);
bool q_printpreviewwidget_is_widget_type(void* self);
bool q_printpreviewwidget_is_window_type(void* self);
bool q_printpreviewwidget_is_quick_item_type(void* self);
bool q_printpreviewwidget_signals_blocked(void* self);
bool q_printpreviewwidget_block_signals(void* self, bool b);
QThread* q_printpreviewwidget_thread(void* self);
void q_printpreviewwidget_move_to_thread(void* self, void* thread);
int32_t q_printpreviewwidget_start_timer(void* self, int interval);
void q_printpreviewwidget_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_printpreviewwidget_children(void* self);
void q_printpreviewwidget_install_event_filter(void* self, void* filterObj);
void q_printpreviewwidget_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_printpreviewwidget_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_printpreviewwidget_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_printpreviewwidget_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_printpreviewwidget_disconnect_with_q_meta_object_connection(void* param1);
void q_printpreviewwidget_dump_object_tree(void* self);
void q_printpreviewwidget_dump_object_info(void* self);
bool q_printpreviewwidget_set_property(void* self, const char* name, void* value);
QVariant* q_printpreviewwidget_property(void* self, const char* name);
const char** q_printpreviewwidget_dynamic_property_names(void* self);
QBindingStorage* q_printpreviewwidget_binding_storage(void* self);
QBindingStorage* q_printpreviewwidget_binding_storage2(void* self);
void q_printpreviewwidget_destroyed(void* self);
void q_printpreviewwidget_on_destroyed(void* self, void (*slot)(void*));
QObject* q_printpreviewwidget_parent(void* self);
bool q_printpreviewwidget_inherits(void* self, const char* classname);
void q_printpreviewwidget_delete_later(void* self);
int32_t q_printpreviewwidget_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_printpreviewwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_printpreviewwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_printpreviewwidget_destroyed1(void* self, void* param1);
void q_printpreviewwidget_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_printpreviewwidget_painting_active(void* self);
int32_t q_printpreviewwidget_width_m_m(void* self);
int32_t q_printpreviewwidget_height_m_m(void* self);
int32_t q_printpreviewwidget_logical_dpi_x(void* self);
int32_t q_printpreviewwidget_logical_dpi_y(void* self);
int32_t q_printpreviewwidget_physical_dpi_x(void* self);
int32_t q_printpreviewwidget_physical_dpi_y(void* self);
double q_printpreviewwidget_device_pixel_ratio(void* self);
double q_printpreviewwidget_device_pixel_ratio_f(void* self);
int32_t q_printpreviewwidget_color_count(void* self);
int32_t q_printpreviewwidget_depth(void* self);
double q_printpreviewwidget_device_pixel_ratio_f_scale();
int32_t q_printpreviewwidget_dev_type(void* self);
int32_t q_printpreviewwidget_qbase_dev_type(void* self);
void q_printpreviewwidget_on_dev_type(void* self, int32_t (*slot)());
QSize* q_printpreviewwidget_size_hint(void* self);
QSize* q_printpreviewwidget_qbase_size_hint(void* self);
void q_printpreviewwidget_on_size_hint(void* self, QSize* (*slot)());
QSize* q_printpreviewwidget_minimum_size_hint(void* self);
QSize* q_printpreviewwidget_qbase_minimum_size_hint(void* self);
void q_printpreviewwidget_on_minimum_size_hint(void* self, QSize* (*slot)());
int32_t q_printpreviewwidget_height_for_width(void* self, int param1);
int32_t q_printpreviewwidget_qbase_height_for_width(void* self, int param1);
void q_printpreviewwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_printpreviewwidget_has_height_for_width(void* self);
bool q_printpreviewwidget_qbase_has_height_for_width(void* self);
void q_printpreviewwidget_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_printpreviewwidget_paint_engine(void* self);
QPaintEngine* q_printpreviewwidget_qbase_paint_engine(void* self);
void q_printpreviewwidget_on_paint_engine(void* self, QPaintEngine* (*slot)());
bool q_printpreviewwidget_event(void* self, void* event);
bool q_printpreviewwidget_qbase_event(void* self, void* event);
void q_printpreviewwidget_on_event(void* self, bool (*slot)(void*, void*));
void q_printpreviewwidget_mouse_press_event(void* self, void* event);
void q_printpreviewwidget_qbase_mouse_press_event(void* self, void* event);
void q_printpreviewwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_mouse_release_event(void* self, void* event);
void q_printpreviewwidget_qbase_mouse_release_event(void* self, void* event);
void q_printpreviewwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_mouse_double_click_event(void* self, void* event);
void q_printpreviewwidget_qbase_mouse_double_click_event(void* self, void* event);
void q_printpreviewwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_mouse_move_event(void* self, void* event);
void q_printpreviewwidget_qbase_mouse_move_event(void* self, void* event);
void q_printpreviewwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_wheel_event(void* self, void* event);
void q_printpreviewwidget_qbase_wheel_event(void* self, void* event);
void q_printpreviewwidget_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_key_press_event(void* self, void* event);
void q_printpreviewwidget_qbase_key_press_event(void* self, void* event);
void q_printpreviewwidget_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_key_release_event(void* self, void* event);
void q_printpreviewwidget_qbase_key_release_event(void* self, void* event);
void q_printpreviewwidget_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_focus_in_event(void* self, void* event);
void q_printpreviewwidget_qbase_focus_in_event(void* self, void* event);
void q_printpreviewwidget_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_focus_out_event(void* self, void* event);
void q_printpreviewwidget_qbase_focus_out_event(void* self, void* event);
void q_printpreviewwidget_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_enter_event(void* self, void* event);
void q_printpreviewwidget_qbase_enter_event(void* self, void* event);
void q_printpreviewwidget_on_enter_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_leave_event(void* self, void* event);
void q_printpreviewwidget_qbase_leave_event(void* self, void* event);
void q_printpreviewwidget_on_leave_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_paint_event(void* self, void* event);
void q_printpreviewwidget_qbase_paint_event(void* self, void* event);
void q_printpreviewwidget_on_paint_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_move_event(void* self, void* event);
void q_printpreviewwidget_qbase_move_event(void* self, void* event);
void q_printpreviewwidget_on_move_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_resize_event(void* self, void* event);
void q_printpreviewwidget_qbase_resize_event(void* self, void* event);
void q_printpreviewwidget_on_resize_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_close_event(void* self, void* event);
void q_printpreviewwidget_qbase_close_event(void* self, void* event);
void q_printpreviewwidget_on_close_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_context_menu_event(void* self, void* event);
void q_printpreviewwidget_qbase_context_menu_event(void* self, void* event);
void q_printpreviewwidget_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_tablet_event(void* self, void* event);
void q_printpreviewwidget_qbase_tablet_event(void* self, void* event);
void q_printpreviewwidget_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_action_event(void* self, void* event);
void q_printpreviewwidget_qbase_action_event(void* self, void* event);
void q_printpreviewwidget_on_action_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_drag_enter_event(void* self, void* event);
void q_printpreviewwidget_qbase_drag_enter_event(void* self, void* event);
void q_printpreviewwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_drag_move_event(void* self, void* event);
void q_printpreviewwidget_qbase_drag_move_event(void* self, void* event);
void q_printpreviewwidget_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_drag_leave_event(void* self, void* event);
void q_printpreviewwidget_qbase_drag_leave_event(void* self, void* event);
void q_printpreviewwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_drop_event(void* self, void* event);
void q_printpreviewwidget_qbase_drop_event(void* self, void* event);
void q_printpreviewwidget_on_drop_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_show_event(void* self, void* event);
void q_printpreviewwidget_qbase_show_event(void* self, void* event);
void q_printpreviewwidget_on_show_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_hide_event(void* self, void* event);
void q_printpreviewwidget_qbase_hide_event(void* self, void* event);
void q_printpreviewwidget_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_printpreviewwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_printpreviewwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_printpreviewwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
void q_printpreviewwidget_change_event(void* self, void* param1);
void q_printpreviewwidget_qbase_change_event(void* self, void* param1);
void q_printpreviewwidget_on_change_event(void* self, void (*slot)(void*, void*));
int32_t q_printpreviewwidget_metric(void* self, int64_t param1);
int32_t q_printpreviewwidget_qbase_metric(void* self, int64_t param1);
void q_printpreviewwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_printpreviewwidget_init_painter(void* self, void* painter);
void q_printpreviewwidget_qbase_init_painter(void* self, void* painter);
void q_printpreviewwidget_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_printpreviewwidget_redirected(void* self, void* offset);
QPaintDevice* q_printpreviewwidget_qbase_redirected(void* self, void* offset);
void q_printpreviewwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_printpreviewwidget_shared_painter(void* self);
QPainter* q_printpreviewwidget_qbase_shared_painter(void* self);
void q_printpreviewwidget_on_shared_painter(void* self, QPainter* (*slot)());
void q_printpreviewwidget_input_method_event(void* self, void* param1);
void q_printpreviewwidget_qbase_input_method_event(void* self, void* param1);
void q_printpreviewwidget_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_printpreviewwidget_input_method_query(void* self, int64_t param1);
QVariant* q_printpreviewwidget_qbase_input_method_query(void* self, int64_t param1);
void q_printpreviewwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_printpreviewwidget_focus_next_prev_child(void* self, bool next);
bool q_printpreviewwidget_qbase_focus_next_prev_child(void* self, bool next);
void q_printpreviewwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_printpreviewwidget_event_filter(void* self, void* watched, void* event);
bool q_printpreviewwidget_qbase_event_filter(void* self, void* watched, void* event);
void q_printpreviewwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_printpreviewwidget_timer_event(void* self, void* event);
void q_printpreviewwidget_qbase_timer_event(void* self, void* event);
void q_printpreviewwidget_on_timer_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_child_event(void* self, void* event);
void q_printpreviewwidget_qbase_child_event(void* self, void* event);
void q_printpreviewwidget_on_child_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_custom_event(void* self, void* event);
void q_printpreviewwidget_qbase_custom_event(void* self, void* event);
void q_printpreviewwidget_on_custom_event(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_connect_notify(void* self, void* signal);
void q_printpreviewwidget_qbase_connect_notify(void* self, void* signal);
void q_printpreviewwidget_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_disconnect_notify(void* self, void* signal);
void q_printpreviewwidget_qbase_disconnect_notify(void* self, void* signal);
void q_printpreviewwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_printpreviewwidget_update_micro_focus(void* self);
void q_printpreviewwidget_qbase_update_micro_focus(void* self);
void q_printpreviewwidget_on_update_micro_focus(void* self, void (*slot)());
void q_printpreviewwidget_create(void* self);
void q_printpreviewwidget_qbase_create(void* self);
void q_printpreviewwidget_on_create(void* self, void (*slot)());
void q_printpreviewwidget_destroy(void* self);
void q_printpreviewwidget_qbase_destroy(void* self);
void q_printpreviewwidget_on_destroy(void* self, void (*slot)());
bool q_printpreviewwidget_focus_next_child(void* self);
bool q_printpreviewwidget_qbase_focus_next_child(void* self);
void q_printpreviewwidget_on_focus_next_child(void* self, bool (*slot)());
bool q_printpreviewwidget_focus_previous_child(void* self);
bool q_printpreviewwidget_qbase_focus_previous_child(void* self);
void q_printpreviewwidget_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_printpreviewwidget_sender(void* self);
QObject* q_printpreviewwidget_qbase_sender(void* self);
void q_printpreviewwidget_on_sender(void* self, QObject* (*slot)());
int32_t q_printpreviewwidget_sender_signal_index(void* self);
int32_t q_printpreviewwidget_qbase_sender_signal_index(void* self);
void q_printpreviewwidget_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_printpreviewwidget_receivers(void* self, const char* signal);
int32_t q_printpreviewwidget_qbase_receivers(void* self, const char* signal);
void q_printpreviewwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_printpreviewwidget_is_signal_connected(void* self, void* signal);
bool q_printpreviewwidget_qbase_is_signal_connected(void* self, void* signal);
void q_printpreviewwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_printpreviewwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qprintpreviewwidget.html#types

typedef enum {
    QPRINTPREVIEWWIDGET_VIEWMODE_SINGLEPAGEVIEW = 0,
    QPRINTPREVIEWWIDGET_VIEWMODE_FACINGPAGESVIEW = 1,
    QPRINTPREVIEWWIDGET_VIEWMODE_ALLPAGESVIEW = 2
} QPrintPreviewWidget__ViewMode;

typedef enum {
    QPRINTPREVIEWWIDGET_ZOOMMODE_CUSTOMZOOM = 0,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITTOWIDTH = 1,
    QPRINTPREVIEWWIDGET_ZOOMMODE_FITINVIEW = 2
} QPrintPreviewWidget__ZoomMode;

#endif
