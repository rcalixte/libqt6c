#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEVIEW_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEVIEW_H

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
#include "../libqmenu.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpagelayout.h"
#include "../libqpageranges.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpalette.h"
#include "../libqpixmap.h"
#include "../libqpoint.h"
#include "../printsupport/libqprinter.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqscreen.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "libqwebenginecontextmenurequest.h"
#include "libqwebenginehistory.h"
#include "libqwebenginehttprequest.h"
#include "libqwebenginepage.h"
#include "libqwebengineprofile.h"
#include "libqwebenginesettings.h"
#include "../libqwidget.h"
#include "../libqwindow.h"

QWebEngineView* q_webengineview_new(void* parent);
QWebEngineView* q_webengineview_new2();
QWebEngineView* q_webengineview_new3(void* profile);
QWebEngineView* q_webengineview_new4(void* page);
QWebEngineView* q_webengineview_new5(void* profile, void* parent);
QWebEngineView* q_webengineview_new6(void* page, void* parent);
QMetaObject* q_webengineview_meta_object(void* self);
void* q_webengineview_metacast(void* self, const char* param1);
int32_t q_webengineview_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webengineview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webengineview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webengineview_tr(const char* s);
QWebEngineView* q_webengineview_for_page(void* page);
QWebEnginePage* q_webengineview_page(void* self);
void q_webengineview_set_page(void* self, void* page);
void q_webengineview_load(void* self, void* url);
void q_webengineview_load_with_request(void* self, void* request);
void q_webengineview_set_html(void* self, const char* html);
void q_webengineview_set_content(void* self, const char* data);
QWebEngineHistory* q_webengineview_history(void* self);
const char* q_webengineview_title(void* self);
void q_webengineview_set_url(void* self, void* url);
QUrl* q_webengineview_url(void* self);
QUrl* q_webengineview_icon_url(void* self);
QIcon* q_webengineview_icon(void* self);
bool q_webengineview_has_selection(void* self);
const char* q_webengineview_selected_text(void* self);
QAction* q_webengineview_page_action(void* self, int64_t action);
void q_webengineview_trigger_page_action(void* self, int64_t action);
double q_webengineview_zoom_factor(void* self);
void q_webengineview_set_zoom_factor(void* self, double factor);
QSize* q_webengineview_size_hint(void* self);
void q_webengineview_on_size_hint(void* self, QSize* (*slot)());
QSize* q_webengineview_qbase_size_hint(void* self);
QWebEngineSettings* q_webengineview_settings(void* self);
QMenu* q_webengineview_create_standard_context_menu(void* self);
QWebEngineContextMenuRequest* q_webengineview_last_context_menu_request(void* self);
void q_webengineview_print_to_pdf(void* self, const char* filePath);
void q_webengineview_print(void* self, void* printer);
void q_webengineview_stop(void* self);
void q_webengineview_back(void* self);
void q_webengineview_forward(void* self);
void q_webengineview_reload(void* self);
void q_webengineview_load_started(void* self);
void q_webengineview_on_load_started(void* self, void (*slot)(void*));
void q_webengineview_load_progress(void* self, int progress);
void q_webengineview_on_load_progress(void* self, void (*slot)(void*, int));
void q_webengineview_load_finished(void* self, bool param1);
void q_webengineview_on_load_finished(void* self, void (*slot)(void*, bool));
void q_webengineview_title_changed(void* self, const char* title);
void q_webengineview_on_title_changed(void* self, void (*slot)(void*, const char*));
void q_webengineview_selection_changed(void* self);
void q_webengineview_on_selection_changed(void* self, void (*slot)(void*));
void q_webengineview_url_changed(void* self, void* param1);
void q_webengineview_on_url_changed(void* self, void (*slot)(void*, void*));
void q_webengineview_icon_url_changed(void* self, void* param1);
void q_webengineview_on_icon_url_changed(void* self, void (*slot)(void*, void*));
void q_webengineview_icon_changed(void* self, void* param1);
void q_webengineview_on_icon_changed(void* self, void (*slot)(void*, void*));
void q_webengineview_render_process_terminated(void* self, int64_t terminationStatus, int exitCode);
void q_webengineview_on_render_process_terminated(void* self, void (*slot)(void*, int64_t, int));
void q_webengineview_pdf_printing_finished(void* self, const char* filePath, bool success);
void q_webengineview_on_pdf_printing_finished(void* self, void (*slot)(void*, const char*, bool));
void q_webengineview_print_requested(void* self);
void q_webengineview_on_print_requested(void* self, void (*slot)(void*));
void q_webengineview_print_finished(void* self, bool success);
void q_webengineview_on_print_finished(void* self, void (*slot)(void*, bool));
QWebEngineView* q_webengineview_create_window(void* self, int64_t typeVal);
void q_webengineview_on_create_window(void* self, QWebEngineView* (*slot)(void*, int64_t));
QWebEngineView* q_webengineview_qbase_create_window(void* self, int64_t typeVal);
void q_webengineview_context_menu_event(void* self, void* param1);
void q_webengineview_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_context_menu_event(void* self, void* param1);
bool q_webengineview_event(void* self, void* param1);
void q_webengineview_on_event(void* self, bool (*slot)(void*, void*));
bool q_webengineview_qbase_event(void* self, void* param1);
void q_webengineview_show_event(void* self, void* param1);
void q_webengineview_on_show_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_show_event(void* self, void* param1);
void q_webengineview_hide_event(void* self, void* param1);
void q_webengineview_on_hide_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_hide_event(void* self, void* param1);
void q_webengineview_close_event(void* self, void* param1);
void q_webengineview_on_close_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_close_event(void* self, void* param1);
void q_webengineview_drag_enter_event(void* self, void* e);
void q_webengineview_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_drag_enter_event(void* self, void* e);
void q_webengineview_drag_leave_event(void* self, void* e);
void q_webengineview_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_drag_leave_event(void* self, void* e);
void q_webengineview_drag_move_event(void* self, void* e);
void q_webengineview_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_drag_move_event(void* self, void* e);
void q_webengineview_drop_event(void* self, void* e);
void q_webengineview_on_drop_event(void* self, void (*slot)(void*, void*));
void q_webengineview_qbase_drop_event(void* self, void* e);
const char* q_webengineview_tr2(const char* s, const char* c);
const char* q_webengineview_tr3(const char* s, const char* c, int n);
void q_webengineview_set_html2(void* self, const char* html, void* baseUrl);
void q_webengineview_set_content2(void* self, const char* data, const char* mimeType);
void q_webengineview_set_content3(void* self, const char* data, const char* mimeType, void* baseUrl);
void q_webengineview_trigger_page_action2(void* self, int64_t action, bool checked);
void q_webengineview_print_to_pdf2(void* self, const char* filePath, void* layout);
void q_webengineview_print_to_pdf3(void* self, const char* filePath, void* layout, void* ranges);
uintptr_t q_webengineview_win_id(void* self);
void q_webengineview_create_win_id(void* self);
uintptr_t q_webengineview_internal_win_id(void* self);
uintptr_t q_webengineview_effective_win_id(void* self);
QStyle* q_webengineview_style(void* self);
void q_webengineview_set_style(void* self, void* style);
bool q_webengineview_is_top_level(void* self);
bool q_webengineview_is_window(void* self);
bool q_webengineview_is_modal(void* self);
int64_t q_webengineview_window_modality(void* self);
void q_webengineview_set_window_modality(void* self, int64_t windowModality);
bool q_webengineview_is_enabled(void* self);
bool q_webengineview_is_enabled_to(void* self, void* param1);
void q_webengineview_set_enabled(void* self, bool enabled);
void q_webengineview_set_disabled(void* self, bool disabled);
void q_webengineview_set_window_modified(void* self, bool windowModified);
QRect* q_webengineview_frame_geometry(void* self);
QRect* q_webengineview_geometry(void* self);
QRect* q_webengineview_normal_geometry(void* self);
int32_t q_webengineview_x(void* self);
int32_t q_webengineview_y(void* self);
QPoint* q_webengineview_pos(void* self);
QSize* q_webengineview_frame_size(void* self);
QSize* q_webengineview_size(void* self);
int32_t q_webengineview_width(void* self);
int32_t q_webengineview_height(void* self);
QRect* q_webengineview_rect(void* self);
QRect* q_webengineview_children_rect(void* self);
QRegion* q_webengineview_children_region(void* self);
QSize* q_webengineview_minimum_size(void* self);
QSize* q_webengineview_maximum_size(void* self);
int32_t q_webengineview_minimum_width(void* self);
int32_t q_webengineview_minimum_height(void* self);
int32_t q_webengineview_maximum_width(void* self);
int32_t q_webengineview_maximum_height(void* self);
void q_webengineview_set_minimum_size(void* self, void* minimumSize);
void q_webengineview_set_minimum_size2(void* self, int minw, int minh);
void q_webengineview_set_maximum_size(void* self, void* maximumSize);
void q_webengineview_set_maximum_size2(void* self, int maxw, int maxh);
void q_webengineview_set_minimum_width(void* self, int minw);
void q_webengineview_set_minimum_height(void* self, int minh);
void q_webengineview_set_maximum_width(void* self, int maxw);
void q_webengineview_set_maximum_height(void* self, int maxh);
QSize* q_webengineview_size_increment(void* self);
void q_webengineview_set_size_increment(void* self, void* sizeIncrement);
void q_webengineview_set_size_increment2(void* self, int w, int h);
QSize* q_webengineview_base_size(void* self);
void q_webengineview_set_base_size(void* self, void* baseSize);
void q_webengineview_set_base_size2(void* self, int basew, int baseh);
void q_webengineview_set_fixed_size(void* self, void* fixedSize);
void q_webengineview_set_fixed_size2(void* self, int w, int h);
void q_webengineview_set_fixed_width(void* self, int w);
void q_webengineview_set_fixed_height(void* self, int h);
QPointF* q_webengineview_map_to_global(void* self, void* param1);
QPoint* q_webengineview_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_webengineview_map_from_global(void* self, void* param1);
QPoint* q_webengineview_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_webengineview_map_to_parent(void* self, void* param1);
QPoint* q_webengineview_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_webengineview_map_from_parent(void* self, void* param1);
QPoint* q_webengineview_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_webengineview_map_to(void* self, void* param1, void* param2);
QPoint* q_webengineview_map_to2(void* self, void* param1, void* param2);
QPointF* q_webengineview_map_from(void* self, void* param1, void* param2);
QPoint* q_webengineview_map_from2(void* self, void* param1, void* param2);
QWidget* q_webengineview_window(void* self);
QWidget* q_webengineview_native_parent_widget(void* self);
QWidget* q_webengineview_top_level_widget(void* self);
QPalette* q_webengineview_palette(void* self);
void q_webengineview_set_palette(void* self, void* palette);
void q_webengineview_set_background_role(void* self, int64_t backgroundRole);
int64_t q_webengineview_background_role(void* self);
void q_webengineview_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_webengineview_foreground_role(void* self);
QFont* q_webengineview_font(void* self);
void q_webengineview_set_font(void* self, void* font);
QFontMetrics* q_webengineview_font_metrics(void* self);
QFontInfo* q_webengineview_font_info(void* self);
QCursor* q_webengineview_cursor(void* self);
void q_webengineview_set_cursor(void* self, void* cursor);
void q_webengineview_unset_cursor(void* self);
void q_webengineview_set_mouse_tracking(void* self, bool enable);
bool q_webengineview_has_mouse_tracking(void* self);
bool q_webengineview_under_mouse(void* self);
void q_webengineview_set_tablet_tracking(void* self, bool enable);
bool q_webengineview_has_tablet_tracking(void* self);
void q_webengineview_set_mask(void* self, void* mask);
void q_webengineview_set_mask_with_mask(void* self, void* mask);
QRegion* q_webengineview_mask(void* self);
void q_webengineview_clear_mask(void* self);
void q_webengineview_render(void* self, void* target);
void q_webengineview_render_with_painter(void* self, void* painter);
QPixmap* q_webengineview_grab(void* self);
QGraphicsEffect* q_webengineview_graphics_effect(void* self);
void q_webengineview_set_graphics_effect(void* self, void* effect);
void q_webengineview_grab_gesture(void* self, int64_t typeVal);
void q_webengineview_ungrab_gesture(void* self, int64_t typeVal);
void q_webengineview_set_window_title(void* self, const char* windowTitle);
void q_webengineview_set_style_sheet(void* self, const char* styleSheet);
const char* q_webengineview_style_sheet(void* self);
const char* q_webengineview_window_title(void* self);
void q_webengineview_set_window_icon(void* self, void* icon);
QIcon* q_webengineview_window_icon(void* self);
void q_webengineview_set_window_icon_text(void* self, const char* windowIconText);
const char* q_webengineview_window_icon_text(void* self);
void q_webengineview_set_window_role(void* self, const char* windowRole);
const char* q_webengineview_window_role(void* self);
void q_webengineview_set_window_file_path(void* self, const char* filePath);
const char* q_webengineview_window_file_path(void* self);
void q_webengineview_set_window_opacity(void* self, double level);
double q_webengineview_window_opacity(void* self);
bool q_webengineview_is_window_modified(void* self);
void q_webengineview_set_tool_tip(void* self, const char* toolTip);
const char* q_webengineview_tool_tip(void* self);
void q_webengineview_set_tool_tip_duration(void* self, int msec);
int32_t q_webengineview_tool_tip_duration(void* self);
void q_webengineview_set_status_tip(void* self, const char* statusTip);
const char* q_webengineview_status_tip(void* self);
void q_webengineview_set_whats_this(void* self, const char* whatsThis);
const char* q_webengineview_whats_this(void* self);
const char* q_webengineview_accessible_name(void* self);
void q_webengineview_set_accessible_name(void* self, const char* name);
const char* q_webengineview_accessible_description(void* self);
void q_webengineview_set_accessible_description(void* self, const char* description);
void q_webengineview_set_layout_direction(void* self, int64_t direction);
int64_t q_webengineview_layout_direction(void* self);
void q_webengineview_unset_layout_direction(void* self);
void q_webengineview_set_locale(void* self, void* locale);
QLocale* q_webengineview_locale(void* self);
void q_webengineview_unset_locale(void* self);
bool q_webengineview_is_right_to_left(void* self);
bool q_webengineview_is_left_to_right(void* self);
void q_webengineview_set_focus(void* self);
bool q_webengineview_is_active_window(void* self);
void q_webengineview_activate_window(void* self);
void q_webengineview_clear_focus(void* self);
void q_webengineview_set_focus_with_reason(void* self, int64_t reason);
int64_t q_webengineview_focus_policy(void* self);
void q_webengineview_set_focus_policy(void* self, int64_t policy);
bool q_webengineview_has_focus(void* self);
void q_webengineview_set_tab_order(void* param1, void* param2);
void q_webengineview_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_webengineview_focus_proxy(void* self);
int64_t q_webengineview_context_menu_policy(void* self);
void q_webengineview_set_context_menu_policy(void* self, int64_t policy);
void q_webengineview_grab_mouse(void* self);
void q_webengineview_grab_mouse_with_q_cursor(void* self, void* param1);
void q_webengineview_release_mouse(void* self);
void q_webengineview_grab_keyboard(void* self);
void q_webengineview_release_keyboard(void* self);
int32_t q_webengineview_grab_shortcut(void* self, void* key);
void q_webengineview_release_shortcut(void* self, int id);
void q_webengineview_set_shortcut_enabled(void* self, int id);
void q_webengineview_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_webengineview_mouse_grabber();
QWidget* q_webengineview_keyboard_grabber();
bool q_webengineview_updates_enabled(void* self);
void q_webengineview_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_webengineview_graphics_proxy_widget(void* self);
void q_webengineview_update(void* self);
void q_webengineview_repaint(void* self);
void q_webengineview_update2(void* self, int x, int y, int w, int h);
void q_webengineview_update_with_q_rect(void* self, void* param1);
void q_webengineview_update_with_q_region(void* self, void* param1);
void q_webengineview_repaint2(void* self, int x, int y, int w, int h);
void q_webengineview_repaint_with_q_rect(void* self, void* param1);
void q_webengineview_repaint_with_q_region(void* self, void* param1);
void q_webengineview_set_hidden(void* self, bool hidden);
void q_webengineview_show(void* self);
void q_webengineview_hide(void* self);
void q_webengineview_show_minimized(void* self);
void q_webengineview_show_maximized(void* self);
void q_webengineview_show_full_screen(void* self);
void q_webengineview_show_normal(void* self);
bool q_webengineview_close(void* self);
void q_webengineview_raise(void* self);
void q_webengineview_lower(void* self);
void q_webengineview_stack_under(void* self, void* param1);
void q_webengineview_move(void* self, int x, int y);
void q_webengineview_move_with_q_point(void* self, void* param1);
void q_webengineview_resize(void* self, int w, int h);
void q_webengineview_resize_with_q_size(void* self, void* param1);
void q_webengineview_set_geometry(void* self, int x, int y, int w, int h);
void q_webengineview_set_geometry_with_geometry(void* self, void* geometry);
char* q_webengineview_save_geometry(void* self);
bool q_webengineview_restore_geometry(void* self, const char* geometry);
void q_webengineview_adjust_size(void* self);
bool q_webengineview_is_visible(void* self);
bool q_webengineview_is_visible_to(void* self, void* param1);
bool q_webengineview_is_hidden(void* self);
bool q_webengineview_is_minimized(void* self);
bool q_webengineview_is_maximized(void* self);
bool q_webengineview_is_full_screen(void* self);
int64_t q_webengineview_window_state(void* self);
void q_webengineview_set_window_state(void* self, int64_t state);
void q_webengineview_override_window_state(void* self, int64_t state);
QSizePolicy* q_webengineview_size_policy(void* self);
void q_webengineview_set_size_policy(void* self, void* sizePolicy);
void q_webengineview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_webengineview_visible_region(void* self);
void q_webengineview_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_webengineview_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_webengineview_contents_margins(void* self);
QRect* q_webengineview_contents_rect(void* self);
QLayout* q_webengineview_layout(void* self);
void q_webengineview_set_layout(void* self, void* layout);
void q_webengineview_update_geometry(void* self);
void q_webengineview_set_parent(void* self, void* parent);
void q_webengineview_set_parent2(void* self, void* parent, int64_t f);
void q_webengineview_scroll(void* self, int dx, int dy);
void q_webengineview_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_webengineview_focus_widget(void* self);
QWidget* q_webengineview_next_in_focus_chain(void* self);
QWidget* q_webengineview_previous_in_focus_chain(void* self);
bool q_webengineview_accept_drops(void* self);
void q_webengineview_set_accept_drops(void* self, bool on);
void q_webengineview_add_action(void* self, void* action);
void q_webengineview_add_actions(void* self, void* actions[]);
void q_webengineview_insert_actions(void* self, void* before, void* actions[]);
void q_webengineview_insert_action(void* self, void* before, void* action);
void q_webengineview_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_webengineview_actions(void* self);
QAction* q_webengineview_add_action_with_text(void* self, const char* text);
QAction* q_webengineview_add_action2(void* self, void* icon, const char* text);
QAction* q_webengineview_add_action3(void* self, const char* text, void* shortcut);
QAction* q_webengineview_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_webengineview_parent_widget(void* self);
void q_webengineview_set_window_flags(void* self, int64_t typeVal);
int64_t q_webengineview_window_flags(void* self);
void q_webengineview_set_window_flag(void* self, int64_t param1);
void q_webengineview_override_window_flags(void* self, int64_t typeVal);
int64_t q_webengineview_window_type(void* self);
QWidget* q_webengineview_find(uint64_t param1);
QWidget* q_webengineview_child_at(void* self, int x, int y);
QWidget* q_webengineview_child_at_with_q_point(void* self, void* p);
void q_webengineview_set_attribute(void* self, int64_t param1);
bool q_webengineview_test_attribute(void* self, int64_t param1);
void q_webengineview_ensure_polished(void* self);
bool q_webengineview_is_ancestor_of(void* self, void* child);
bool q_webengineview_auto_fill_background(void* self);
void q_webengineview_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_webengineview_backing_store(void* self);
QWindow* q_webengineview_window_handle(void* self);
QScreen* q_webengineview_screen(void* self);
void q_webengineview_set_screen(void* self, void* screen);
QWidget* q_webengineview_create_window_container(void* window);
void q_webengineview_window_title_changed(void* self, const char* title);
void q_webengineview_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_webengineview_window_icon_changed(void* self, void* icon);
void q_webengineview_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_webengineview_window_icon_text_changed(void* self, const char* iconText);
void q_webengineview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_webengineview_custom_context_menu_requested(void* self, void* pos);
void q_webengineview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_webengineview_input_method_hints(void* self);
void q_webengineview_set_input_method_hints(void* self, int64_t hints);
void q_webengineview_render2(void* self, void* target, void* targetOffset);
void q_webengineview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_webengineview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_webengineview_render22(void* self, void* painter, void* targetOffset);
void q_webengineview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_webengineview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_webengineview_grab1(void* self, void* rectangle);
void q_webengineview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_webengineview_grab_shortcut2(void* self, void* key, int64_t context);
void q_webengineview_set_shortcut_enabled2(void* self, int id, bool enable);
void q_webengineview_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_webengineview_set_window_flag2(void* self, int64_t param1, bool on);
void q_webengineview_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_webengineview_create_window_container2(void* window, void* parent);
QWidget* q_webengineview_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_webengineview_object_name(void* self);
void q_webengineview_set_object_name(void* self, const char* name);
bool q_webengineview_is_widget_type(void* self);
bool q_webengineview_is_window_type(void* self);
bool q_webengineview_is_quick_item_type(void* self);
bool q_webengineview_signals_blocked(void* self);
bool q_webengineview_block_signals(void* self, bool b);
QThread* q_webengineview_thread(void* self);
void q_webengineview_move_to_thread(void* self, void* thread);
int32_t q_webengineview_start_timer(void* self, int interval);
void q_webengineview_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webengineview_children(void* self);
void q_webengineview_install_event_filter(void* self, void* filterObj);
void q_webengineview_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webengineview_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webengineview_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webengineview_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webengineview_disconnect_with_q_meta_object_connection(void* param1);
void q_webengineview_dump_object_tree(void* self);
void q_webengineview_dump_object_info(void* self);
bool q_webengineview_set_property(void* self, const char* name, void* value);
QVariant* q_webengineview_property(void* self, const char* name);
const char** q_webengineview_dynamic_property_names(void* self);
QBindingStorage* q_webengineview_binding_storage(void* self);
QBindingStorage* q_webengineview_binding_storage2(void* self);
void q_webengineview_destroyed(void* self);
void q_webengineview_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webengineview_parent(void* self);
bool q_webengineview_inherits(void* self, const char* classname);
void q_webengineview_delete_later(void* self);
int32_t q_webengineview_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webengineview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webengineview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webengineview_destroyed1(void* self, void* param1);
void q_webengineview_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webengineview_painting_active(void* self);
int32_t q_webengineview_width_m_m(void* self);
int32_t q_webengineview_height_m_m(void* self);
int32_t q_webengineview_logical_dpi_x(void* self);
int32_t q_webengineview_logical_dpi_y(void* self);
int32_t q_webengineview_physical_dpi_x(void* self);
int32_t q_webengineview_physical_dpi_y(void* self);
double q_webengineview_device_pixel_ratio(void* self);
double q_webengineview_device_pixel_ratio_f(void* self);
int32_t q_webengineview_color_count(void* self);
int32_t q_webengineview_depth(void* self);
double q_webengineview_device_pixel_ratio_f_scale();
int32_t q_webengineview_dev_type(void* self);
int32_t q_webengineview_qbase_dev_type(void* self);
void q_webengineview_on_dev_type(void* self, int32_t (*slot)());
void q_webengineview_set_visible(void* self, bool visible);
void q_webengineview_qbase_set_visible(void* self, bool visible);
void q_webengineview_on_set_visible(void* self, void (*slot)(void*, bool));
QSize* q_webengineview_minimum_size_hint(void* self);
QSize* q_webengineview_qbase_minimum_size_hint(void* self);
void q_webengineview_on_minimum_size_hint(void* self, QSize* (*slot)());
int32_t q_webengineview_height_for_width(void* self, int param1);
int32_t q_webengineview_qbase_height_for_width(void* self, int param1);
void q_webengineview_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_webengineview_has_height_for_width(void* self);
bool q_webengineview_qbase_has_height_for_width(void* self);
void q_webengineview_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_webengineview_paint_engine(void* self);
QPaintEngine* q_webengineview_qbase_paint_engine(void* self);
void q_webengineview_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_webengineview_mouse_press_event(void* self, void* event);
void q_webengineview_qbase_mouse_press_event(void* self, void* event);
void q_webengineview_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_webengineview_mouse_release_event(void* self, void* event);
void q_webengineview_qbase_mouse_release_event(void* self, void* event);
void q_webengineview_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_webengineview_mouse_double_click_event(void* self, void* event);
void q_webengineview_qbase_mouse_double_click_event(void* self, void* event);
void q_webengineview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_webengineview_mouse_move_event(void* self, void* event);
void q_webengineview_qbase_mouse_move_event(void* self, void* event);
void q_webengineview_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_webengineview_wheel_event(void* self, void* event);
void q_webengineview_qbase_wheel_event(void* self, void* event);
void q_webengineview_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_webengineview_key_press_event(void* self, void* event);
void q_webengineview_qbase_key_press_event(void* self, void* event);
void q_webengineview_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_webengineview_key_release_event(void* self, void* event);
void q_webengineview_qbase_key_release_event(void* self, void* event);
void q_webengineview_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_webengineview_focus_in_event(void* self, void* event);
void q_webengineview_qbase_focus_in_event(void* self, void* event);
void q_webengineview_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_webengineview_focus_out_event(void* self, void* event);
void q_webengineview_qbase_focus_out_event(void* self, void* event);
void q_webengineview_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_webengineview_enter_event(void* self, void* event);
void q_webengineview_qbase_enter_event(void* self, void* event);
void q_webengineview_on_enter_event(void* self, void (*slot)(void*, void*));
void q_webengineview_leave_event(void* self, void* event);
void q_webengineview_qbase_leave_event(void* self, void* event);
void q_webengineview_on_leave_event(void* self, void (*slot)(void*, void*));
void q_webengineview_paint_event(void* self, void* event);
void q_webengineview_qbase_paint_event(void* self, void* event);
void q_webengineview_on_paint_event(void* self, void (*slot)(void*, void*));
void q_webengineview_move_event(void* self, void* event);
void q_webengineview_qbase_move_event(void* self, void* event);
void q_webengineview_on_move_event(void* self, void (*slot)(void*, void*));
void q_webengineview_resize_event(void* self, void* event);
void q_webengineview_qbase_resize_event(void* self, void* event);
void q_webengineview_on_resize_event(void* self, void (*slot)(void*, void*));
void q_webengineview_tablet_event(void* self, void* event);
void q_webengineview_qbase_tablet_event(void* self, void* event);
void q_webengineview_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_webengineview_action_event(void* self, void* event);
void q_webengineview_qbase_action_event(void* self, void* event);
void q_webengineview_on_action_event(void* self, void (*slot)(void*, void*));
bool q_webengineview_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_webengineview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_webengineview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
void q_webengineview_change_event(void* self, void* param1);
void q_webengineview_qbase_change_event(void* self, void* param1);
void q_webengineview_on_change_event(void* self, void (*slot)(void*, void*));
int32_t q_webengineview_metric(void* self, int64_t param1);
int32_t q_webengineview_qbase_metric(void* self, int64_t param1);
void q_webengineview_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_webengineview_init_painter(void* self, void* painter);
void q_webengineview_qbase_init_painter(void* self, void* painter);
void q_webengineview_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_webengineview_redirected(void* self, void* offset);
QPaintDevice* q_webengineview_qbase_redirected(void* self, void* offset);
void q_webengineview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_webengineview_shared_painter(void* self);
QPainter* q_webengineview_qbase_shared_painter(void* self);
void q_webengineview_on_shared_painter(void* self, QPainter* (*slot)());
void q_webengineview_input_method_event(void* self, void* param1);
void q_webengineview_qbase_input_method_event(void* self, void* param1);
void q_webengineview_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_webengineview_input_method_query(void* self, int64_t param1);
QVariant* q_webengineview_qbase_input_method_query(void* self, int64_t param1);
void q_webengineview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_webengineview_focus_next_prev_child(void* self, bool next);
bool q_webengineview_qbase_focus_next_prev_child(void* self, bool next);
void q_webengineview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_webengineview_event_filter(void* self, void* watched, void* event);
bool q_webengineview_qbase_event_filter(void* self, void* watched, void* event);
void q_webengineview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webengineview_timer_event(void* self, void* event);
void q_webengineview_qbase_timer_event(void* self, void* event);
void q_webengineview_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webengineview_child_event(void* self, void* event);
void q_webengineview_qbase_child_event(void* self, void* event);
void q_webengineview_on_child_event(void* self, void (*slot)(void*, void*));
void q_webengineview_custom_event(void* self, void* event);
void q_webengineview_qbase_custom_event(void* self, void* event);
void q_webengineview_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webengineview_connect_notify(void* self, void* signal);
void q_webengineview_qbase_connect_notify(void* self, void* signal);
void q_webengineview_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webengineview_disconnect_notify(void* self, void* signal);
void q_webengineview_qbase_disconnect_notify(void* self, void* signal);
void q_webengineview_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_webengineview_update_micro_focus(void* self);
void q_webengineview_qbase_update_micro_focus(void* self);
void q_webengineview_on_update_micro_focus(void* self, void (*slot)());
void q_webengineview_create(void* self);
void q_webengineview_qbase_create(void* self);
void q_webengineview_on_create(void* self, void (*slot)());
void q_webengineview_destroy(void* self);
void q_webengineview_qbase_destroy(void* self);
void q_webengineview_on_destroy(void* self, void (*slot)());
bool q_webengineview_focus_next_child(void* self);
bool q_webengineview_qbase_focus_next_child(void* self);
void q_webengineview_on_focus_next_child(void* self, bool (*slot)());
bool q_webengineview_focus_previous_child(void* self);
bool q_webengineview_qbase_focus_previous_child(void* self);
void q_webengineview_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_webengineview_sender(void* self);
QObject* q_webengineview_qbase_sender(void* self);
void q_webengineview_on_sender(void* self, QObject* (*slot)());
int32_t q_webengineview_sender_signal_index(void* self);
int32_t q_webengineview_qbase_sender_signal_index(void* self);
void q_webengineview_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webengineview_receivers(void* self, const char* signal);
int32_t q_webengineview_qbase_receivers(void* self, const char* signal);
void q_webengineview_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webengineview_is_signal_connected(void* self, void* signal);
bool q_webengineview_qbase_is_signal_connected(void* self, void* signal);
void q_webengineview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_webengineview_delete(void* self);

#endif
