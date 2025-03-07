#pragma once
#ifndef SRCQT6C_LIBQCALENDARWIDGET_H
#define SRCQT6C_LIBQCALENDARWIDGET_H

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
#include "libqcalendar.h"
#include "libqcursor.h"
#include "libqdatetime.h"
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
#include "libqtextformat.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QCalendarWidget* q_calendarwidget_new(void* parent);
QCalendarWidget* q_calendarwidget_new2();
QMetaObject* q_calendarwidget_meta_object(void* self);
void* q_calendarwidget_metacast(void* self, const char* param1);
int32_t q_calendarwidget_metacall(void* self, int64_t param1, int param2, void* param3);
void q_calendarwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_calendarwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_calendarwidget_tr(const char* s);
QSize* q_calendarwidget_size_hint(void* self);
void q_calendarwidget_on_size_hint(void* self, QSize* (*slot)());
QSize* q_calendarwidget_qbase_size_hint(void* self);
QSize* q_calendarwidget_minimum_size_hint(void* self);
void q_calendarwidget_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_calendarwidget_qbase_minimum_size_hint(void* self);
QDate* q_calendarwidget_selected_date(void* self);
int32_t q_calendarwidget_year_shown(void* self);
int32_t q_calendarwidget_month_shown(void* self);
QDate* q_calendarwidget_minimum_date(void* self);
void q_calendarwidget_set_minimum_date(void* self, void* date);
QDate* q_calendarwidget_maximum_date(void* self);
void q_calendarwidget_set_maximum_date(void* self, void* date);
int64_t q_calendarwidget_first_day_of_week(void* self);
void q_calendarwidget_set_first_day_of_week(void* self, int64_t dayOfWeek);
bool q_calendarwidget_is_navigation_bar_visible(void* self);
bool q_calendarwidget_is_grid_visible(void* self);
QCalendar* q_calendarwidget_calendar(void* self);
void q_calendarwidget_set_calendar(void* self, void* calendar);
int64_t q_calendarwidget_selection_mode(void* self);
void q_calendarwidget_set_selection_mode(void* self, int64_t mode);
int64_t q_calendarwidget_horizontal_header_format(void* self);
void q_calendarwidget_set_horizontal_header_format(void* self, int64_t format);
int64_t q_calendarwidget_vertical_header_format(void* self);
void q_calendarwidget_set_vertical_header_format(void* self, int64_t format);
QTextCharFormat* q_calendarwidget_header_text_format(void* self);
void q_calendarwidget_set_header_text_format(void* self, void* format);
QTextCharFormat* q_calendarwidget_weekday_text_format(void* self, int64_t dayOfWeek);
void q_calendarwidget_set_weekday_text_format(void* self, int64_t dayOfWeek, void* format);
libqt_map /* of QDate* to QTextCharFormat* */ q_calendarwidget_date_text_format(void* self);
QTextCharFormat* q_calendarwidget_date_text_format_with_date(void* self, void* date);
void q_calendarwidget_set_date_text_format(void* self, void* date, void* format);
bool q_calendarwidget_is_date_edit_enabled(void* self);
void q_calendarwidget_set_date_edit_enabled(void* self, bool enable);
int32_t q_calendarwidget_date_edit_accept_delay(void* self);
void q_calendarwidget_set_date_edit_accept_delay(void* self, int delay);
bool q_calendarwidget_event(void* self, void* event);
void q_calendarwidget_on_event(void* self, bool (*slot)(void*, void*));
bool q_calendarwidget_qbase_event(void* self, void* event);
bool q_calendarwidget_event_filter(void* self, void* watched, void* event);
void q_calendarwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_calendarwidget_qbase_event_filter(void* self, void* watched, void* event);
void q_calendarwidget_mouse_press_event(void* self, void* event);
void q_calendarwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_qbase_mouse_press_event(void* self, void* event);
void q_calendarwidget_resize_event(void* self, void* event);
void q_calendarwidget_on_resize_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_qbase_resize_event(void* self, void* event);
void q_calendarwidget_key_press_event(void* self, void* event);
void q_calendarwidget_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_qbase_key_press_event(void* self, void* event);
void q_calendarwidget_paint_cell(void* self, void* painter, void* rect, void* date);
void q_calendarwidget_on_paint_cell(void* self, void (*slot)(void*, void*, void*, void*));
void q_calendarwidget_qbase_paint_cell(void* self, void* painter, void* rect, void* date);
void q_calendarwidget_update_cell(void* self, void* date);
void q_calendarwidget_on_update_cell(void* self, void (*slot)(void*, void*));
void q_calendarwidget_qbase_update_cell(void* self, void* date);
void q_calendarwidget_update_cells(void* self);
void q_calendarwidget_on_update_cells(void* self, void (*slot)());
void q_calendarwidget_qbase_update_cells(void* self);
void q_calendarwidget_set_selected_date(void* self, void* date);
void q_calendarwidget_set_date_range(void* self, void* min, void* max);
void q_calendarwidget_set_current_page(void* self, int year, int month);
void q_calendarwidget_set_grid_visible(void* self, bool show);
void q_calendarwidget_set_navigation_bar_visible(void* self, bool visible);
void q_calendarwidget_show_next_month(void* self);
void q_calendarwidget_show_previous_month(void* self);
void q_calendarwidget_show_next_year(void* self);
void q_calendarwidget_show_previous_year(void* self);
void q_calendarwidget_show_selected_date(void* self);
void q_calendarwidget_show_today(void* self);
void q_calendarwidget_selection_changed(void* self);
void q_calendarwidget_on_selection_changed(void* self, void (*slot)(void*));
void q_calendarwidget_clicked(void* self, void* date);
void q_calendarwidget_on_clicked(void* self, void (*slot)(void*, void*));
void q_calendarwidget_activated(void* self, void* date);
void q_calendarwidget_on_activated(void* self, void (*slot)(void*, void*));
void q_calendarwidget_current_page_changed(void* self, int year, int month);
void q_calendarwidget_on_current_page_changed(void* self, void (*slot)(void*, int, int));
const char* q_calendarwidget_tr2(const char* s, const char* c);
const char* q_calendarwidget_tr3(const char* s, const char* c, int n);
uintptr_t q_calendarwidget_win_id(void* self);
void q_calendarwidget_create_win_id(void* self);
uintptr_t q_calendarwidget_internal_win_id(void* self);
uintptr_t q_calendarwidget_effective_win_id(void* self);
QStyle* q_calendarwidget_style(void* self);
void q_calendarwidget_set_style(void* self, void* style);
bool q_calendarwidget_is_top_level(void* self);
bool q_calendarwidget_is_window(void* self);
bool q_calendarwidget_is_modal(void* self);
int64_t q_calendarwidget_window_modality(void* self);
void q_calendarwidget_set_window_modality(void* self, int64_t windowModality);
bool q_calendarwidget_is_enabled(void* self);
bool q_calendarwidget_is_enabled_to(void* self, void* param1);
void q_calendarwidget_set_enabled(void* self, bool enabled);
void q_calendarwidget_set_disabled(void* self, bool disabled);
void q_calendarwidget_set_window_modified(void* self, bool windowModified);
QRect* q_calendarwidget_frame_geometry(void* self);
QRect* q_calendarwidget_geometry(void* self);
QRect* q_calendarwidget_normal_geometry(void* self);
int32_t q_calendarwidget_x(void* self);
int32_t q_calendarwidget_y(void* self);
QPoint* q_calendarwidget_pos(void* self);
QSize* q_calendarwidget_frame_size(void* self);
QSize* q_calendarwidget_size(void* self);
int32_t q_calendarwidget_width(void* self);
int32_t q_calendarwidget_height(void* self);
QRect* q_calendarwidget_rect(void* self);
QRect* q_calendarwidget_children_rect(void* self);
QRegion* q_calendarwidget_children_region(void* self);
QSize* q_calendarwidget_minimum_size(void* self);
QSize* q_calendarwidget_maximum_size(void* self);
int32_t q_calendarwidget_minimum_width(void* self);
int32_t q_calendarwidget_minimum_height(void* self);
int32_t q_calendarwidget_maximum_width(void* self);
int32_t q_calendarwidget_maximum_height(void* self);
void q_calendarwidget_set_minimum_size(void* self, void* minimumSize);
void q_calendarwidget_set_minimum_size2(void* self, int minw, int minh);
void q_calendarwidget_set_maximum_size(void* self, void* maximumSize);
void q_calendarwidget_set_maximum_size2(void* self, int maxw, int maxh);
void q_calendarwidget_set_minimum_width(void* self, int minw);
void q_calendarwidget_set_minimum_height(void* self, int minh);
void q_calendarwidget_set_maximum_width(void* self, int maxw);
void q_calendarwidget_set_maximum_height(void* self, int maxh);
QSize* q_calendarwidget_size_increment(void* self);
void q_calendarwidget_set_size_increment(void* self, void* sizeIncrement);
void q_calendarwidget_set_size_increment2(void* self, int w, int h);
QSize* q_calendarwidget_base_size(void* self);
void q_calendarwidget_set_base_size(void* self, void* baseSize);
void q_calendarwidget_set_base_size2(void* self, int basew, int baseh);
void q_calendarwidget_set_fixed_size(void* self, void* fixedSize);
void q_calendarwidget_set_fixed_size2(void* self, int w, int h);
void q_calendarwidget_set_fixed_width(void* self, int w);
void q_calendarwidget_set_fixed_height(void* self, int h);
QPointF* q_calendarwidget_map_to_global(void* self, void* param1);
QPoint* q_calendarwidget_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_calendarwidget_map_from_global(void* self, void* param1);
QPoint* q_calendarwidget_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_calendarwidget_map_to_parent(void* self, void* param1);
QPoint* q_calendarwidget_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_calendarwidget_map_from_parent(void* self, void* param1);
QPoint* q_calendarwidget_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_calendarwidget_map_to(void* self, void* param1, void* param2);
QPoint* q_calendarwidget_map_to2(void* self, void* param1, void* param2);
QPointF* q_calendarwidget_map_from(void* self, void* param1, void* param2);
QPoint* q_calendarwidget_map_from2(void* self, void* param1, void* param2);
QWidget* q_calendarwidget_window(void* self);
QWidget* q_calendarwidget_native_parent_widget(void* self);
QWidget* q_calendarwidget_top_level_widget(void* self);
QPalette* q_calendarwidget_palette(void* self);
void q_calendarwidget_set_palette(void* self, void* palette);
void q_calendarwidget_set_background_role(void* self, int64_t backgroundRole);
int64_t q_calendarwidget_background_role(void* self);
void q_calendarwidget_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_calendarwidget_foreground_role(void* self);
QFont* q_calendarwidget_font(void* self);
void q_calendarwidget_set_font(void* self, void* font);
QFontMetrics* q_calendarwidget_font_metrics(void* self);
QFontInfo* q_calendarwidget_font_info(void* self);
QCursor* q_calendarwidget_cursor(void* self);
void q_calendarwidget_set_cursor(void* self, void* cursor);
void q_calendarwidget_unset_cursor(void* self);
void q_calendarwidget_set_mouse_tracking(void* self, bool enable);
bool q_calendarwidget_has_mouse_tracking(void* self);
bool q_calendarwidget_under_mouse(void* self);
void q_calendarwidget_set_tablet_tracking(void* self, bool enable);
bool q_calendarwidget_has_tablet_tracking(void* self);
void q_calendarwidget_set_mask(void* self, void* mask);
void q_calendarwidget_set_mask_with_mask(void* self, void* mask);
QRegion* q_calendarwidget_mask(void* self);
void q_calendarwidget_clear_mask(void* self);
void q_calendarwidget_render(void* self, void* target);
void q_calendarwidget_render_with_painter(void* self, void* painter);
QPixmap* q_calendarwidget_grab(void* self);
QGraphicsEffect* q_calendarwidget_graphics_effect(void* self);
void q_calendarwidget_set_graphics_effect(void* self, void* effect);
void q_calendarwidget_grab_gesture(void* self, int64_t typeVal);
void q_calendarwidget_ungrab_gesture(void* self, int64_t typeVal);
void q_calendarwidget_set_window_title(void* self, const char* windowTitle);
void q_calendarwidget_set_style_sheet(void* self, const char* styleSheet);
const char* q_calendarwidget_style_sheet(void* self);
const char* q_calendarwidget_window_title(void* self);
void q_calendarwidget_set_window_icon(void* self, void* icon);
QIcon* q_calendarwidget_window_icon(void* self);
void q_calendarwidget_set_window_icon_text(void* self, const char* windowIconText);
const char* q_calendarwidget_window_icon_text(void* self);
void q_calendarwidget_set_window_role(void* self, const char* windowRole);
const char* q_calendarwidget_window_role(void* self);
void q_calendarwidget_set_window_file_path(void* self, const char* filePath);
const char* q_calendarwidget_window_file_path(void* self);
void q_calendarwidget_set_window_opacity(void* self, double level);
double q_calendarwidget_window_opacity(void* self);
bool q_calendarwidget_is_window_modified(void* self);
void q_calendarwidget_set_tool_tip(void* self, const char* toolTip);
const char* q_calendarwidget_tool_tip(void* self);
void q_calendarwidget_set_tool_tip_duration(void* self, int msec);
int32_t q_calendarwidget_tool_tip_duration(void* self);
void q_calendarwidget_set_status_tip(void* self, const char* statusTip);
const char* q_calendarwidget_status_tip(void* self);
void q_calendarwidget_set_whats_this(void* self, const char* whatsThis);
const char* q_calendarwidget_whats_this(void* self);
const char* q_calendarwidget_accessible_name(void* self);
void q_calendarwidget_set_accessible_name(void* self, const char* name);
const char* q_calendarwidget_accessible_description(void* self);
void q_calendarwidget_set_accessible_description(void* self, const char* description);
void q_calendarwidget_set_layout_direction(void* self, int64_t direction);
int64_t q_calendarwidget_layout_direction(void* self);
void q_calendarwidget_unset_layout_direction(void* self);
void q_calendarwidget_set_locale(void* self, void* locale);
QLocale* q_calendarwidget_locale(void* self);
void q_calendarwidget_unset_locale(void* self);
bool q_calendarwidget_is_right_to_left(void* self);
bool q_calendarwidget_is_left_to_right(void* self);
void q_calendarwidget_set_focus(void* self);
bool q_calendarwidget_is_active_window(void* self);
void q_calendarwidget_activate_window(void* self);
void q_calendarwidget_clear_focus(void* self);
void q_calendarwidget_set_focus_with_reason(void* self, int64_t reason);
int64_t q_calendarwidget_focus_policy(void* self);
void q_calendarwidget_set_focus_policy(void* self, int64_t policy);
bool q_calendarwidget_has_focus(void* self);
void q_calendarwidget_set_tab_order(void* param1, void* param2);
void q_calendarwidget_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_calendarwidget_focus_proxy(void* self);
int64_t q_calendarwidget_context_menu_policy(void* self);
void q_calendarwidget_set_context_menu_policy(void* self, int64_t policy);
void q_calendarwidget_grab_mouse(void* self);
void q_calendarwidget_grab_mouse_with_q_cursor(void* self, void* param1);
void q_calendarwidget_release_mouse(void* self);
void q_calendarwidget_grab_keyboard(void* self);
void q_calendarwidget_release_keyboard(void* self);
int32_t q_calendarwidget_grab_shortcut(void* self, void* key);
void q_calendarwidget_release_shortcut(void* self, int id);
void q_calendarwidget_set_shortcut_enabled(void* self, int id);
void q_calendarwidget_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_calendarwidget_mouse_grabber();
QWidget* q_calendarwidget_keyboard_grabber();
bool q_calendarwidget_updates_enabled(void* self);
void q_calendarwidget_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_calendarwidget_graphics_proxy_widget(void* self);
void q_calendarwidget_update(void* self);
void q_calendarwidget_repaint(void* self);
void q_calendarwidget_update2(void* self, int x, int y, int w, int h);
void q_calendarwidget_update_with_q_rect(void* self, void* param1);
void q_calendarwidget_update_with_q_region(void* self, void* param1);
void q_calendarwidget_repaint2(void* self, int x, int y, int w, int h);
void q_calendarwidget_repaint_with_q_rect(void* self, void* param1);
void q_calendarwidget_repaint_with_q_region(void* self, void* param1);
void q_calendarwidget_set_hidden(void* self, bool hidden);
void q_calendarwidget_show(void* self);
void q_calendarwidget_hide(void* self);
void q_calendarwidget_show_minimized(void* self);
void q_calendarwidget_show_maximized(void* self);
void q_calendarwidget_show_full_screen(void* self);
void q_calendarwidget_show_normal(void* self);
bool q_calendarwidget_close(void* self);
void q_calendarwidget_raise(void* self);
void q_calendarwidget_lower(void* self);
void q_calendarwidget_stack_under(void* self, void* param1);
void q_calendarwidget_move(void* self, int x, int y);
void q_calendarwidget_move_with_q_point(void* self, void* param1);
void q_calendarwidget_resize(void* self, int w, int h);
void q_calendarwidget_resize_with_q_size(void* self, void* param1);
void q_calendarwidget_set_geometry(void* self, int x, int y, int w, int h);
void q_calendarwidget_set_geometry_with_geometry(void* self, void* geometry);
char* q_calendarwidget_save_geometry(void* self);
bool q_calendarwidget_restore_geometry(void* self, const char* geometry);
void q_calendarwidget_adjust_size(void* self);
bool q_calendarwidget_is_visible(void* self);
bool q_calendarwidget_is_visible_to(void* self, void* param1);
bool q_calendarwidget_is_hidden(void* self);
bool q_calendarwidget_is_minimized(void* self);
bool q_calendarwidget_is_maximized(void* self);
bool q_calendarwidget_is_full_screen(void* self);
int64_t q_calendarwidget_window_state(void* self);
void q_calendarwidget_set_window_state(void* self, int64_t state);
void q_calendarwidget_override_window_state(void* self, int64_t state);
QSizePolicy* q_calendarwidget_size_policy(void* self);
void q_calendarwidget_set_size_policy(void* self, void* sizePolicy);
void q_calendarwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_calendarwidget_visible_region(void* self);
void q_calendarwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_calendarwidget_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_calendarwidget_contents_margins(void* self);
QRect* q_calendarwidget_contents_rect(void* self);
QLayout* q_calendarwidget_layout(void* self);
void q_calendarwidget_set_layout(void* self, void* layout);
void q_calendarwidget_update_geometry(void* self);
void q_calendarwidget_set_parent(void* self, void* parent);
void q_calendarwidget_set_parent2(void* self, void* parent, int64_t f);
void q_calendarwidget_scroll(void* self, int dx, int dy);
void q_calendarwidget_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_calendarwidget_focus_widget(void* self);
QWidget* q_calendarwidget_next_in_focus_chain(void* self);
QWidget* q_calendarwidget_previous_in_focus_chain(void* self);
bool q_calendarwidget_accept_drops(void* self);
void q_calendarwidget_set_accept_drops(void* self, bool on);
void q_calendarwidget_add_action(void* self, void* action);
void q_calendarwidget_add_actions(void* self, void* actions[]);
void q_calendarwidget_insert_actions(void* self, void* before, void* actions[]);
void q_calendarwidget_insert_action(void* self, void* before, void* action);
void q_calendarwidget_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_calendarwidget_actions(void* self);
QAction* q_calendarwidget_add_action_with_text(void* self, const char* text);
QAction* q_calendarwidget_add_action2(void* self, void* icon, const char* text);
QAction* q_calendarwidget_add_action3(void* self, const char* text, void* shortcut);
QAction* q_calendarwidget_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_calendarwidget_parent_widget(void* self);
void q_calendarwidget_set_window_flags(void* self, int64_t typeVal);
int64_t q_calendarwidget_window_flags(void* self);
void q_calendarwidget_set_window_flag(void* self, int64_t param1);
void q_calendarwidget_override_window_flags(void* self, int64_t typeVal);
int64_t q_calendarwidget_window_type(void* self);
QWidget* q_calendarwidget_find(uint64_t param1);
QWidget* q_calendarwidget_child_at(void* self, int x, int y);
QWidget* q_calendarwidget_child_at_with_q_point(void* self, void* p);
void q_calendarwidget_set_attribute(void* self, int64_t param1);
bool q_calendarwidget_test_attribute(void* self, int64_t param1);
void q_calendarwidget_ensure_polished(void* self);
bool q_calendarwidget_is_ancestor_of(void* self, void* child);
bool q_calendarwidget_auto_fill_background(void* self);
void q_calendarwidget_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_calendarwidget_backing_store(void* self);
QWindow* q_calendarwidget_window_handle(void* self);
QScreen* q_calendarwidget_screen(void* self);
void q_calendarwidget_set_screen(void* self, void* screen);
QWidget* q_calendarwidget_create_window_container(void* window);
void q_calendarwidget_window_title_changed(void* self, const char* title);
void q_calendarwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_calendarwidget_window_icon_changed(void* self, void* icon);
void q_calendarwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_calendarwidget_window_icon_text_changed(void* self, const char* iconText);
void q_calendarwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_calendarwidget_custom_context_menu_requested(void* self, void* pos);
void q_calendarwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_calendarwidget_input_method_hints(void* self);
void q_calendarwidget_set_input_method_hints(void* self, int64_t hints);
void q_calendarwidget_render2(void* self, void* target, void* targetOffset);
void q_calendarwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_calendarwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_calendarwidget_render22(void* self, void* painter, void* targetOffset);
void q_calendarwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_calendarwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_calendarwidget_grab1(void* self, void* rectangle);
void q_calendarwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_calendarwidget_grab_shortcut2(void* self, void* key, int64_t context);
void q_calendarwidget_set_shortcut_enabled2(void* self, int id, bool enable);
void q_calendarwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_calendarwidget_set_window_flag2(void* self, int64_t param1, bool on);
void q_calendarwidget_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_calendarwidget_create_window_container2(void* window, void* parent);
QWidget* q_calendarwidget_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_calendarwidget_object_name(void* self);
void q_calendarwidget_set_object_name(void* self, const char* name);
bool q_calendarwidget_is_widget_type(void* self);
bool q_calendarwidget_is_window_type(void* self);
bool q_calendarwidget_is_quick_item_type(void* self);
bool q_calendarwidget_signals_blocked(void* self);
bool q_calendarwidget_block_signals(void* self, bool b);
QThread* q_calendarwidget_thread(void* self);
void q_calendarwidget_move_to_thread(void* self, void* thread);
int32_t q_calendarwidget_start_timer(void* self, int interval);
void q_calendarwidget_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_calendarwidget_children(void* self);
void q_calendarwidget_install_event_filter(void* self, void* filterObj);
void q_calendarwidget_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_calendarwidget_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_calendarwidget_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_calendarwidget_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_calendarwidget_disconnect_with_q_meta_object_connection(void* param1);
void q_calendarwidget_dump_object_tree(void* self);
void q_calendarwidget_dump_object_info(void* self);
bool q_calendarwidget_set_property(void* self, const char* name, void* value);
QVariant* q_calendarwidget_property(void* self, const char* name);
const char** q_calendarwidget_dynamic_property_names(void* self);
QBindingStorage* q_calendarwidget_binding_storage(void* self);
QBindingStorage* q_calendarwidget_binding_storage2(void* self);
void q_calendarwidget_destroyed(void* self);
void q_calendarwidget_on_destroyed(void* self, void (*slot)(void*));
QObject* q_calendarwidget_parent(void* self);
bool q_calendarwidget_inherits(void* self, const char* classname);
void q_calendarwidget_delete_later(void* self);
int32_t q_calendarwidget_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_calendarwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_calendarwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_calendarwidget_destroyed1(void* self, void* param1);
void q_calendarwidget_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_calendarwidget_painting_active(void* self);
int32_t q_calendarwidget_width_m_m(void* self);
int32_t q_calendarwidget_height_m_m(void* self);
int32_t q_calendarwidget_logical_dpi_x(void* self);
int32_t q_calendarwidget_logical_dpi_y(void* self);
int32_t q_calendarwidget_physical_dpi_x(void* self);
int32_t q_calendarwidget_physical_dpi_y(void* self);
double q_calendarwidget_device_pixel_ratio(void* self);
double q_calendarwidget_device_pixel_ratio_f(void* self);
int32_t q_calendarwidget_color_count(void* self);
int32_t q_calendarwidget_depth(void* self);
double q_calendarwidget_device_pixel_ratio_f_scale();
int32_t q_calendarwidget_dev_type(void* self);
int32_t q_calendarwidget_qbase_dev_type(void* self);
void q_calendarwidget_on_dev_type(void* self, int32_t (*slot)());
void q_calendarwidget_set_visible(void* self, bool visible);
void q_calendarwidget_qbase_set_visible(void* self, bool visible);
void q_calendarwidget_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_calendarwidget_height_for_width(void* self, int param1);
int32_t q_calendarwidget_qbase_height_for_width(void* self, int param1);
void q_calendarwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_calendarwidget_has_height_for_width(void* self);
bool q_calendarwidget_qbase_has_height_for_width(void* self);
void q_calendarwidget_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_calendarwidget_paint_engine(void* self);
QPaintEngine* q_calendarwidget_qbase_paint_engine(void* self);
void q_calendarwidget_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_calendarwidget_mouse_release_event(void* self, void* event);
void q_calendarwidget_qbase_mouse_release_event(void* self, void* event);
void q_calendarwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_mouse_double_click_event(void* self, void* event);
void q_calendarwidget_qbase_mouse_double_click_event(void* self, void* event);
void q_calendarwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_mouse_move_event(void* self, void* event);
void q_calendarwidget_qbase_mouse_move_event(void* self, void* event);
void q_calendarwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_wheel_event(void* self, void* event);
void q_calendarwidget_qbase_wheel_event(void* self, void* event);
void q_calendarwidget_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_key_release_event(void* self, void* event);
void q_calendarwidget_qbase_key_release_event(void* self, void* event);
void q_calendarwidget_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_focus_in_event(void* self, void* event);
void q_calendarwidget_qbase_focus_in_event(void* self, void* event);
void q_calendarwidget_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_focus_out_event(void* self, void* event);
void q_calendarwidget_qbase_focus_out_event(void* self, void* event);
void q_calendarwidget_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_enter_event(void* self, void* event);
void q_calendarwidget_qbase_enter_event(void* self, void* event);
void q_calendarwidget_on_enter_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_leave_event(void* self, void* event);
void q_calendarwidget_qbase_leave_event(void* self, void* event);
void q_calendarwidget_on_leave_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_paint_event(void* self, void* event);
void q_calendarwidget_qbase_paint_event(void* self, void* event);
void q_calendarwidget_on_paint_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_move_event(void* self, void* event);
void q_calendarwidget_qbase_move_event(void* self, void* event);
void q_calendarwidget_on_move_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_close_event(void* self, void* event);
void q_calendarwidget_qbase_close_event(void* self, void* event);
void q_calendarwidget_on_close_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_context_menu_event(void* self, void* event);
void q_calendarwidget_qbase_context_menu_event(void* self, void* event);
void q_calendarwidget_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_tablet_event(void* self, void* event);
void q_calendarwidget_qbase_tablet_event(void* self, void* event);
void q_calendarwidget_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_action_event(void* self, void* event);
void q_calendarwidget_qbase_action_event(void* self, void* event);
void q_calendarwidget_on_action_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_drag_enter_event(void* self, void* event);
void q_calendarwidget_qbase_drag_enter_event(void* self, void* event);
void q_calendarwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_drag_move_event(void* self, void* event);
void q_calendarwidget_qbase_drag_move_event(void* self, void* event);
void q_calendarwidget_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_drag_leave_event(void* self, void* event);
void q_calendarwidget_qbase_drag_leave_event(void* self, void* event);
void q_calendarwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_drop_event(void* self, void* event);
void q_calendarwidget_qbase_drop_event(void* self, void* event);
void q_calendarwidget_on_drop_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_show_event(void* self, void* event);
void q_calendarwidget_qbase_show_event(void* self, void* event);
void q_calendarwidget_on_show_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_hide_event(void* self, void* event);
void q_calendarwidget_qbase_hide_event(void* self, void* event);
void q_calendarwidget_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_calendarwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_calendarwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_calendarwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
void q_calendarwidget_change_event(void* self, void* param1);
void q_calendarwidget_qbase_change_event(void* self, void* param1);
void q_calendarwidget_on_change_event(void* self, void (*slot)(void*, void*));
int32_t q_calendarwidget_metric(void* self, int64_t param1);
int32_t q_calendarwidget_qbase_metric(void* self, int64_t param1);
void q_calendarwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_calendarwidget_init_painter(void* self, void* painter);
void q_calendarwidget_qbase_init_painter(void* self, void* painter);
void q_calendarwidget_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_calendarwidget_redirected(void* self, void* offset);
QPaintDevice* q_calendarwidget_qbase_redirected(void* self, void* offset);
void q_calendarwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_calendarwidget_shared_painter(void* self);
QPainter* q_calendarwidget_qbase_shared_painter(void* self);
void q_calendarwidget_on_shared_painter(void* self, QPainter* (*slot)());
void q_calendarwidget_input_method_event(void* self, void* param1);
void q_calendarwidget_qbase_input_method_event(void* self, void* param1);
void q_calendarwidget_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_calendarwidget_input_method_query(void* self, int64_t param1);
QVariant* q_calendarwidget_qbase_input_method_query(void* self, int64_t param1);
void q_calendarwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_calendarwidget_focus_next_prev_child(void* self, bool next);
bool q_calendarwidget_qbase_focus_next_prev_child(void* self, bool next);
void q_calendarwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_calendarwidget_timer_event(void* self, void* event);
void q_calendarwidget_qbase_timer_event(void* self, void* event);
void q_calendarwidget_on_timer_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_child_event(void* self, void* event);
void q_calendarwidget_qbase_child_event(void* self, void* event);
void q_calendarwidget_on_child_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_custom_event(void* self, void* event);
void q_calendarwidget_qbase_custom_event(void* self, void* event);
void q_calendarwidget_on_custom_event(void* self, void (*slot)(void*, void*));
void q_calendarwidget_connect_notify(void* self, void* signal);
void q_calendarwidget_qbase_connect_notify(void* self, void* signal);
void q_calendarwidget_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_calendarwidget_disconnect_notify(void* self, void* signal);
void q_calendarwidget_qbase_disconnect_notify(void* self, void* signal);
void q_calendarwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_calendarwidget_update_micro_focus(void* self);
void q_calendarwidget_qbase_update_micro_focus(void* self);
void q_calendarwidget_on_update_micro_focus(void* self, void (*slot)());
void q_calendarwidget_create(void* self);
void q_calendarwidget_qbase_create(void* self);
void q_calendarwidget_on_create(void* self, void (*slot)());
void q_calendarwidget_destroy(void* self);
void q_calendarwidget_qbase_destroy(void* self);
void q_calendarwidget_on_destroy(void* self, void (*slot)());
bool q_calendarwidget_focus_next_child(void* self);
bool q_calendarwidget_qbase_focus_next_child(void* self);
void q_calendarwidget_on_focus_next_child(void* self, bool (*slot)());
bool q_calendarwidget_focus_previous_child(void* self);
bool q_calendarwidget_qbase_focus_previous_child(void* self);
void q_calendarwidget_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_calendarwidget_sender(void* self);
QObject* q_calendarwidget_qbase_sender(void* self);
void q_calendarwidget_on_sender(void* self, QObject* (*slot)());
int32_t q_calendarwidget_sender_signal_index(void* self);
int32_t q_calendarwidget_qbase_sender_signal_index(void* self);
void q_calendarwidget_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_calendarwidget_receivers(void* self, const char* signal);
int32_t q_calendarwidget_qbase_receivers(void* self, const char* signal);
void q_calendarwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_calendarwidget_is_signal_connected(void* self, void* signal);
bool q_calendarwidget_qbase_is_signal_connected(void* self, void* signal);
void q_calendarwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_calendarwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendarwidget.html#types

typedef enum {
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_NOHORIZONTALHEADER = 0,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SINGLELETTERDAYNAMES = 1,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_SHORTDAYNAMES = 2,
    QCALENDARWIDGET_HORIZONTALHEADERFORMAT_LONGDAYNAMES = 3
} QCalendarWidget__HorizontalHeaderFormat;

typedef enum {
    QCALENDARWIDGET_VERTICALHEADERFORMAT_NOVERTICALHEADER = 0,
    QCALENDARWIDGET_VERTICALHEADERFORMAT_ISOWEEKNUMBERS = 1
} QCalendarWidget__VerticalHeaderFormat;

typedef enum {
    QCALENDARWIDGET_SELECTIONMODE_NOSELECTION = 0,
    QCALENDARWIDGET_SELECTIONMODE_SINGLESELECTION = 1
} QCalendarWidget__SelectionMode;

#endif
