#pragma once
#ifndef SRCQT6C_LIBQFILEDIALOG_H
#define SRCQT6C_LIBQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractfileiconprovider.h"
#include "libqabstractitemdelegate.h"
#include "libqabstractproxymodel.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqdialog.h"
#include "libqdir.h"
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
#include "libqurl.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QFileDialog* q_filedialog_new(void* parent);
QFileDialog* q_filedialog_new2(void* parent, int64_t f);
QFileDialog* q_filedialog_new3();
QFileDialog* q_filedialog_new4(void* parent, const char* caption);
QFileDialog* q_filedialog_new5(void* parent, const char* caption, const char* directory);
QFileDialog* q_filedialog_new6(void* parent, const char* caption, const char* directory, const char* filter);
QMetaObject* q_filedialog_meta_object(void* self);
void* q_filedialog_metacast(void* self, const char* param1);
int32_t q_filedialog_metacall(void* self, int64_t param1, int param2, void* param3);
void q_filedialog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_filedialog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_filedialog_tr(const char* s);
void q_filedialog_set_directory(void* self, const char* directory);
void q_filedialog_set_directory_with_directory(void* self, void* directory);
QDir* q_filedialog_directory(void* self);
void q_filedialog_set_directory_url(void* self, void* directory);
QUrl* q_filedialog_directory_url(void* self);
void q_filedialog_select_file(void* self, const char* filename);
const char** q_filedialog_selected_files(void* self);
void q_filedialog_select_url(void* self, void* url);
libqt_list /* of QUrl* */ q_filedialog_selected_urls(void* self);
void q_filedialog_set_name_filter(void* self, const char* filter);
void q_filedialog_set_name_filters(void* self, const char* filters[]);
const char** q_filedialog_name_filters(void* self);
void q_filedialog_select_name_filter(void* self, const char* filter);
const char* q_filedialog_selected_mime_type_filter(void* self);
const char* q_filedialog_selected_name_filter(void* self);
void q_filedialog_set_mime_type_filters(void* self, const char* filters[]);
const char** q_filedialog_mime_type_filters(void* self);
void q_filedialog_select_mime_type_filter(void* self, const char* filter);
int64_t q_filedialog_filter(void* self);
void q_filedialog_set_filter(void* self, int64_t filters);
void q_filedialog_set_view_mode(void* self, int64_t mode);
int64_t q_filedialog_view_mode(void* self);
void q_filedialog_set_file_mode(void* self, int64_t mode);
int64_t q_filedialog_file_mode(void* self);
void q_filedialog_set_accept_mode(void* self, int64_t mode);
int64_t q_filedialog_accept_mode(void* self);
void q_filedialog_set_sidebar_urls(void* self, void* urls[]);
libqt_list /* of QUrl* */ q_filedialog_sidebar_urls(void* self);
char* q_filedialog_save_state(void* self);
bool q_filedialog_restore_state(void* self, const char* state);
void q_filedialog_set_default_suffix(void* self, const char* suffix);
const char* q_filedialog_default_suffix(void* self);
void q_filedialog_set_history(void* self, const char* paths[]);
const char** q_filedialog_history(void* self);
void q_filedialog_set_item_delegate(void* self, void* delegate);
QAbstractItemDelegate* q_filedialog_item_delegate(void* self);
void q_filedialog_set_icon_provider(void* self, void* provider);
QAbstractFileIconProvider* q_filedialog_icon_provider(void* self);
void q_filedialog_set_label_text(void* self, int64_t label, const char* text);
const char* q_filedialog_label_text(void* self, int64_t label);
void q_filedialog_set_supported_schemes(void* self, const char* schemes[]);
const char** q_filedialog_supported_schemes(void* self);
void q_filedialog_set_proxy_model(void* self, void* model);
QAbstractProxyModel* q_filedialog_proxy_model(void* self);
void q_filedialog_set_option(void* self, int64_t option);
bool q_filedialog_test_option(void* self, int64_t option);
void q_filedialog_set_options(void* self, int64_t options);
int64_t q_filedialog_options(void* self);
void q_filedialog_set_visible(void* self, bool visible);
void q_filedialog_on_set_visible(void* self, void (*slot)(void*, bool));
void q_filedialog_qbase_set_visible(void* self, bool visible);
void q_filedialog_file_selected(void* self, const char* file);
void q_filedialog_on_file_selected(void* self, void (*slot)(void*, const char*));
void q_filedialog_files_selected(void* self, const char* files[]);
void q_filedialog_on_files_selected(void* self, void (*slot)(void*, const char*));
void q_filedialog_current_changed(void* self, const char* path);
void q_filedialog_on_current_changed(void* self, void (*slot)(void*, const char*));
void q_filedialog_directory_entered(void* self, const char* directory);
void q_filedialog_on_directory_entered(void* self, void (*slot)(void*, const char*));
void q_filedialog_url_selected(void* self, void* url);
void q_filedialog_on_url_selected(void* self, void (*slot)(void*, void*));
void q_filedialog_urls_selected(void* self, void* urls[]);
void q_filedialog_on_urls_selected(void* self, void (*slot)(void*, void*));
void q_filedialog_current_url_changed(void* self, void* url);
void q_filedialog_on_current_url_changed(void* self, void (*slot)(void*, void*));
void q_filedialog_directory_url_entered(void* self, void* directory);
void q_filedialog_on_directory_url_entered(void* self, void (*slot)(void*, void*));
void q_filedialog_filter_selected(void* self, const char* filter);
void q_filedialog_on_filter_selected(void* self, void (*slot)(void*, const char*));
const char* q_filedialog_get_open_file_name();
QUrl* q_filedialog_get_open_file_url();
const char* q_filedialog_get_save_file_name();
QUrl* q_filedialog_get_save_file_url();
const char* q_filedialog_get_existing_directory();
QUrl* q_filedialog_get_existing_directory_url();
const char** q_filedialog_get_open_file_names();
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls();
void q_filedialog_save_file_content(const char* fileContent, const char* fileNameHint);
void q_filedialog_done(void* self, int result);
void q_filedialog_on_done(void* self, void (*slot)(void*, int));
void q_filedialog_qbase_done(void* self, int result);
void q_filedialog_accept(void* self);
void q_filedialog_on_accept(void* self, void (*slot)());
void q_filedialog_qbase_accept(void* self);
void q_filedialog_change_event(void* self, void* e);
void q_filedialog_on_change_event(void* self, void (*slot)(void*, void*));
void q_filedialog_qbase_change_event(void* self, void* e);
const char* q_filedialog_tr2(const char* s, const char* c);
const char* q_filedialog_tr3(const char* s, const char* c, int n);
void q_filedialog_set_option2(void* self, int64_t option, bool on);
const char* q_filedialog_get_open_file_name1(void* parent);
const char* q_filedialog_get_open_file_name2(void* parent, const char* caption);
const char* q_filedialog_get_open_file_name3(void* parent, const char* caption, const char* dir);
const char* q_filedialog_get_open_file_name4(void* parent, const char* caption, const char* dir, const char* filter);
QUrl* q_filedialog_get_open_file_url1(void* parent);
QUrl* q_filedialog_get_open_file_url2(void* parent, const char* caption);
QUrl* q_filedialog_get_open_file_url3(void* parent, const char* caption, void* dir);
QUrl* q_filedialog_get_open_file_url4(void* parent, const char* caption, void* dir, const char* filter);
const char* q_filedialog_get_save_file_name1(void* parent);
const char* q_filedialog_get_save_file_name2(void* parent, const char* caption);
const char* q_filedialog_get_save_file_name3(void* parent, const char* caption, const char* dir);
const char* q_filedialog_get_save_file_name4(void* parent, const char* caption, const char* dir, const char* filter);
QUrl* q_filedialog_get_save_file_url1(void* parent);
QUrl* q_filedialog_get_save_file_url2(void* parent, const char* caption);
QUrl* q_filedialog_get_save_file_url3(void* parent, const char* caption, void* dir);
QUrl* q_filedialog_get_save_file_url4(void* parent, const char* caption, void* dir, const char* filter);
const char* q_filedialog_get_existing_directory1(void* parent);
const char* q_filedialog_get_existing_directory2(void* parent, const char* caption);
const char* q_filedialog_get_existing_directory3(void* parent, const char* caption, const char* dir);
const char* q_filedialog_get_existing_directory4(void* parent, const char* caption, const char* dir, int64_t options);
QUrl* q_filedialog_get_existing_directory_url1(void* parent);
QUrl* q_filedialog_get_existing_directory_url2(void* parent, const char* caption);
QUrl* q_filedialog_get_existing_directory_url3(void* parent, const char* caption, void* dir);
QUrl* q_filedialog_get_existing_directory_url4(void* parent, const char* caption, void* dir, int64_t options);
QUrl* q_filedialog_get_existing_directory_url5(void* parent, const char* caption, void* dir, int64_t options, const char* supportedSchemes[]);
const char** q_filedialog_get_open_file_names1(void* parent);
const char** q_filedialog_get_open_file_names2(void* parent, const char* caption);
const char** q_filedialog_get_open_file_names3(void* parent, const char* caption, const char* dir);
const char** q_filedialog_get_open_file_names4(void* parent, const char* caption, const char* dir, const char* filter);
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls1(void* parent);
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls2(void* parent, const char* caption);
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls3(void* parent, const char* caption, void* dir);
libqt_list /* of QUrl* */ q_filedialog_get_open_file_urls4(void* parent, const char* caption, void* dir, const char* filter);
int32_t q_filedialog_result(void* self);
void q_filedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);
bool q_filedialog_is_size_grip_enabled(void* self);
void q_filedialog_set_modal(void* self, bool modal);
void q_filedialog_set_result(void* self, int r);
void q_filedialog_finished(void* self, int result);
void q_filedialog_on_finished(void* self, void (*slot)(void*, int));
void q_filedialog_accepted(void* self);
void q_filedialog_on_accepted(void* self, void (*slot)(void*));
void q_filedialog_rejected(void* self);
void q_filedialog_on_rejected(void* self, void (*slot)(void*));
uintptr_t q_filedialog_win_id(void* self);
void q_filedialog_create_win_id(void* self);
uintptr_t q_filedialog_internal_win_id(void* self);
uintptr_t q_filedialog_effective_win_id(void* self);
QStyle* q_filedialog_style(void* self);
void q_filedialog_set_style(void* self, void* style);
bool q_filedialog_is_top_level(void* self);
bool q_filedialog_is_window(void* self);
bool q_filedialog_is_modal(void* self);
int64_t q_filedialog_window_modality(void* self);
void q_filedialog_set_window_modality(void* self, int64_t windowModality);
bool q_filedialog_is_enabled(void* self);
bool q_filedialog_is_enabled_to(void* self, void* param1);
void q_filedialog_set_enabled(void* self, bool enabled);
void q_filedialog_set_disabled(void* self, bool disabled);
void q_filedialog_set_window_modified(void* self, bool windowModified);
QRect* q_filedialog_frame_geometry(void* self);
QRect* q_filedialog_geometry(void* self);
QRect* q_filedialog_normal_geometry(void* self);
int32_t q_filedialog_x(void* self);
int32_t q_filedialog_y(void* self);
QPoint* q_filedialog_pos(void* self);
QSize* q_filedialog_frame_size(void* self);
QSize* q_filedialog_size(void* self);
int32_t q_filedialog_width(void* self);
int32_t q_filedialog_height(void* self);
QRect* q_filedialog_rect(void* self);
QRect* q_filedialog_children_rect(void* self);
QRegion* q_filedialog_children_region(void* self);
QSize* q_filedialog_minimum_size(void* self);
QSize* q_filedialog_maximum_size(void* self);
int32_t q_filedialog_minimum_width(void* self);
int32_t q_filedialog_minimum_height(void* self);
int32_t q_filedialog_maximum_width(void* self);
int32_t q_filedialog_maximum_height(void* self);
void q_filedialog_set_minimum_size(void* self, void* minimumSize);
void q_filedialog_set_minimum_size2(void* self, int minw, int minh);
void q_filedialog_set_maximum_size(void* self, void* maximumSize);
void q_filedialog_set_maximum_size2(void* self, int maxw, int maxh);
void q_filedialog_set_minimum_width(void* self, int minw);
void q_filedialog_set_minimum_height(void* self, int minh);
void q_filedialog_set_maximum_width(void* self, int maxw);
void q_filedialog_set_maximum_height(void* self, int maxh);
QSize* q_filedialog_size_increment(void* self);
void q_filedialog_set_size_increment(void* self, void* sizeIncrement);
void q_filedialog_set_size_increment2(void* self, int w, int h);
QSize* q_filedialog_base_size(void* self);
void q_filedialog_set_base_size(void* self, void* baseSize);
void q_filedialog_set_base_size2(void* self, int basew, int baseh);
void q_filedialog_set_fixed_size(void* self, void* fixedSize);
void q_filedialog_set_fixed_size2(void* self, int w, int h);
void q_filedialog_set_fixed_width(void* self, int w);
void q_filedialog_set_fixed_height(void* self, int h);
QPointF* q_filedialog_map_to_global(void* self, void* param1);
QPoint* q_filedialog_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_filedialog_map_from_global(void* self, void* param1);
QPoint* q_filedialog_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_filedialog_map_to_parent(void* self, void* param1);
QPoint* q_filedialog_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_filedialog_map_from_parent(void* self, void* param1);
QPoint* q_filedialog_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_filedialog_map_to(void* self, void* param1, void* param2);
QPoint* q_filedialog_map_to2(void* self, void* param1, void* param2);
QPointF* q_filedialog_map_from(void* self, void* param1, void* param2);
QPoint* q_filedialog_map_from2(void* self, void* param1, void* param2);
QWidget* q_filedialog_window(void* self);
QWidget* q_filedialog_native_parent_widget(void* self);
QWidget* q_filedialog_top_level_widget(void* self);
QPalette* q_filedialog_palette(void* self);
void q_filedialog_set_palette(void* self, void* palette);
void q_filedialog_set_background_role(void* self, int64_t backgroundRole);
int64_t q_filedialog_background_role(void* self);
void q_filedialog_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_filedialog_foreground_role(void* self);
QFont* q_filedialog_font(void* self);
void q_filedialog_set_font(void* self, void* font);
QFontMetrics* q_filedialog_font_metrics(void* self);
QFontInfo* q_filedialog_font_info(void* self);
QCursor* q_filedialog_cursor(void* self);
void q_filedialog_set_cursor(void* self, void* cursor);
void q_filedialog_unset_cursor(void* self);
void q_filedialog_set_mouse_tracking(void* self, bool enable);
bool q_filedialog_has_mouse_tracking(void* self);
bool q_filedialog_under_mouse(void* self);
void q_filedialog_set_tablet_tracking(void* self, bool enable);
bool q_filedialog_has_tablet_tracking(void* self);
void q_filedialog_set_mask(void* self, void* mask);
void q_filedialog_set_mask_with_mask(void* self, void* mask);
QRegion* q_filedialog_mask(void* self);
void q_filedialog_clear_mask(void* self);
void q_filedialog_render(void* self, void* target);
void q_filedialog_render_with_painter(void* self, void* painter);
QPixmap* q_filedialog_grab(void* self);
QGraphicsEffect* q_filedialog_graphics_effect(void* self);
void q_filedialog_set_graphics_effect(void* self, void* effect);
void q_filedialog_grab_gesture(void* self, int64_t typeVal);
void q_filedialog_ungrab_gesture(void* self, int64_t typeVal);
void q_filedialog_set_window_title(void* self, const char* windowTitle);
void q_filedialog_set_style_sheet(void* self, const char* styleSheet);
const char* q_filedialog_style_sheet(void* self);
const char* q_filedialog_window_title(void* self);
void q_filedialog_set_window_icon(void* self, void* icon);
QIcon* q_filedialog_window_icon(void* self);
void q_filedialog_set_window_icon_text(void* self, const char* windowIconText);
const char* q_filedialog_window_icon_text(void* self);
void q_filedialog_set_window_role(void* self, const char* windowRole);
const char* q_filedialog_window_role(void* self);
void q_filedialog_set_window_file_path(void* self, const char* filePath);
const char* q_filedialog_window_file_path(void* self);
void q_filedialog_set_window_opacity(void* self, double level);
double q_filedialog_window_opacity(void* self);
bool q_filedialog_is_window_modified(void* self);
void q_filedialog_set_tool_tip(void* self, const char* toolTip);
const char* q_filedialog_tool_tip(void* self);
void q_filedialog_set_tool_tip_duration(void* self, int msec);
int32_t q_filedialog_tool_tip_duration(void* self);
void q_filedialog_set_status_tip(void* self, const char* statusTip);
const char* q_filedialog_status_tip(void* self);
void q_filedialog_set_whats_this(void* self, const char* whatsThis);
const char* q_filedialog_whats_this(void* self);
const char* q_filedialog_accessible_name(void* self);
void q_filedialog_set_accessible_name(void* self, const char* name);
const char* q_filedialog_accessible_description(void* self);
void q_filedialog_set_accessible_description(void* self, const char* description);
void q_filedialog_set_layout_direction(void* self, int64_t direction);
int64_t q_filedialog_layout_direction(void* self);
void q_filedialog_unset_layout_direction(void* self);
void q_filedialog_set_locale(void* self, void* locale);
QLocale* q_filedialog_locale(void* self);
void q_filedialog_unset_locale(void* self);
bool q_filedialog_is_right_to_left(void* self);
bool q_filedialog_is_left_to_right(void* self);
void q_filedialog_set_focus(void* self);
bool q_filedialog_is_active_window(void* self);
void q_filedialog_activate_window(void* self);
void q_filedialog_clear_focus(void* self);
void q_filedialog_set_focus_with_reason(void* self, int64_t reason);
int64_t q_filedialog_focus_policy(void* self);
void q_filedialog_set_focus_policy(void* self, int64_t policy);
bool q_filedialog_has_focus(void* self);
void q_filedialog_set_tab_order(void* param1, void* param2);
void q_filedialog_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_filedialog_focus_proxy(void* self);
int64_t q_filedialog_context_menu_policy(void* self);
void q_filedialog_set_context_menu_policy(void* self, int64_t policy);
void q_filedialog_grab_mouse(void* self);
void q_filedialog_grab_mouse_with_q_cursor(void* self, void* param1);
void q_filedialog_release_mouse(void* self);
void q_filedialog_grab_keyboard(void* self);
void q_filedialog_release_keyboard(void* self);
int32_t q_filedialog_grab_shortcut(void* self, void* key);
void q_filedialog_release_shortcut(void* self, int id);
void q_filedialog_set_shortcut_enabled(void* self, int id);
void q_filedialog_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_filedialog_mouse_grabber();
QWidget* q_filedialog_keyboard_grabber();
bool q_filedialog_updates_enabled(void* self);
void q_filedialog_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_filedialog_graphics_proxy_widget(void* self);
void q_filedialog_update(void* self);
void q_filedialog_repaint(void* self);
void q_filedialog_update2(void* self, int x, int y, int w, int h);
void q_filedialog_update_with_q_rect(void* self, void* param1);
void q_filedialog_update_with_q_region(void* self, void* param1);
void q_filedialog_repaint2(void* self, int x, int y, int w, int h);
void q_filedialog_repaint_with_q_rect(void* self, void* param1);
void q_filedialog_repaint_with_q_region(void* self, void* param1);
void q_filedialog_set_hidden(void* self, bool hidden);
void q_filedialog_show(void* self);
void q_filedialog_hide(void* self);
void q_filedialog_show_minimized(void* self);
void q_filedialog_show_maximized(void* self);
void q_filedialog_show_full_screen(void* self);
void q_filedialog_show_normal(void* self);
bool q_filedialog_close(void* self);
void q_filedialog_raise(void* self);
void q_filedialog_lower(void* self);
void q_filedialog_stack_under(void* self, void* param1);
void q_filedialog_move(void* self, int x, int y);
void q_filedialog_move_with_q_point(void* self, void* param1);
void q_filedialog_resize(void* self, int w, int h);
void q_filedialog_resize_with_q_size(void* self, void* param1);
void q_filedialog_set_geometry(void* self, int x, int y, int w, int h);
void q_filedialog_set_geometry_with_geometry(void* self, void* geometry);
char* q_filedialog_save_geometry(void* self);
bool q_filedialog_restore_geometry(void* self, const char* geometry);
void q_filedialog_adjust_size(void* self);
bool q_filedialog_is_visible(void* self);
bool q_filedialog_is_visible_to(void* self, void* param1);
bool q_filedialog_is_hidden(void* self);
bool q_filedialog_is_minimized(void* self);
bool q_filedialog_is_maximized(void* self);
bool q_filedialog_is_full_screen(void* self);
int64_t q_filedialog_window_state(void* self);
void q_filedialog_set_window_state(void* self, int64_t state);
void q_filedialog_override_window_state(void* self, int64_t state);
QSizePolicy* q_filedialog_size_policy(void* self);
void q_filedialog_set_size_policy(void* self, void* sizePolicy);
void q_filedialog_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_filedialog_visible_region(void* self);
void q_filedialog_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_filedialog_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_filedialog_contents_margins(void* self);
QRect* q_filedialog_contents_rect(void* self);
QLayout* q_filedialog_layout(void* self);
void q_filedialog_set_layout(void* self, void* layout);
void q_filedialog_update_geometry(void* self);
void q_filedialog_set_parent(void* self, void* parent);
void q_filedialog_set_parent2(void* self, void* parent, int64_t f);
void q_filedialog_scroll(void* self, int dx, int dy);
void q_filedialog_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_filedialog_focus_widget(void* self);
QWidget* q_filedialog_next_in_focus_chain(void* self);
QWidget* q_filedialog_previous_in_focus_chain(void* self);
bool q_filedialog_accept_drops(void* self);
void q_filedialog_set_accept_drops(void* self, bool on);
void q_filedialog_add_action(void* self, void* action);
void q_filedialog_add_actions(void* self, void* actions[]);
void q_filedialog_insert_actions(void* self, void* before, void* actions[]);
void q_filedialog_insert_action(void* self, void* before, void* action);
void q_filedialog_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_filedialog_actions(void* self);
QAction* q_filedialog_add_action_with_text(void* self, const char* text);
QAction* q_filedialog_add_action2(void* self, void* icon, const char* text);
QAction* q_filedialog_add_action3(void* self, const char* text, void* shortcut);
QAction* q_filedialog_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_filedialog_parent_widget(void* self);
void q_filedialog_set_window_flags(void* self, int64_t typeVal);
int64_t q_filedialog_window_flags(void* self);
void q_filedialog_set_window_flag(void* self, int64_t param1);
void q_filedialog_override_window_flags(void* self, int64_t typeVal);
int64_t q_filedialog_window_type(void* self);
QWidget* q_filedialog_find(uint64_t param1);
QWidget* q_filedialog_child_at(void* self, int x, int y);
QWidget* q_filedialog_child_at_with_q_point(void* self, void* p);
void q_filedialog_set_attribute(void* self, int64_t param1);
bool q_filedialog_test_attribute(void* self, int64_t param1);
void q_filedialog_ensure_polished(void* self);
bool q_filedialog_is_ancestor_of(void* self, void* child);
bool q_filedialog_auto_fill_background(void* self);
void q_filedialog_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_filedialog_backing_store(void* self);
QWindow* q_filedialog_window_handle(void* self);
QScreen* q_filedialog_screen(void* self);
void q_filedialog_set_screen(void* self, void* screen);
QWidget* q_filedialog_create_window_container(void* window);
void q_filedialog_window_title_changed(void* self, const char* title);
void q_filedialog_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_filedialog_window_icon_changed(void* self, void* icon);
void q_filedialog_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_filedialog_window_icon_text_changed(void* self, const char* iconText);
void q_filedialog_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_filedialog_custom_context_menu_requested(void* self, void* pos);
void q_filedialog_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_filedialog_input_method_hints(void* self);
void q_filedialog_set_input_method_hints(void* self, int64_t hints);
void q_filedialog_render2(void* self, void* target, void* targetOffset);
void q_filedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_filedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_filedialog_render22(void* self, void* painter, void* targetOffset);
void q_filedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_filedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_filedialog_grab1(void* self, void* rectangle);
void q_filedialog_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_filedialog_grab_shortcut2(void* self, void* key, int64_t context);
void q_filedialog_set_shortcut_enabled2(void* self, int id, bool enable);
void q_filedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_filedialog_set_window_flag2(void* self, int64_t param1, bool on);
void q_filedialog_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_filedialog_create_window_container2(void* window, void* parent);
QWidget* q_filedialog_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_filedialog_object_name(void* self);
void q_filedialog_set_object_name(void* self, const char* name);
bool q_filedialog_is_widget_type(void* self);
bool q_filedialog_is_window_type(void* self);
bool q_filedialog_is_quick_item_type(void* self);
bool q_filedialog_signals_blocked(void* self);
bool q_filedialog_block_signals(void* self, bool b);
QThread* q_filedialog_thread(void* self);
void q_filedialog_move_to_thread(void* self, void* thread);
int32_t q_filedialog_start_timer(void* self, int interval);
void q_filedialog_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_filedialog_children(void* self);
void q_filedialog_install_event_filter(void* self, void* filterObj);
void q_filedialog_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_filedialog_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_filedialog_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_filedialog_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_filedialog_disconnect_with_q_meta_object_connection(void* param1);
void q_filedialog_dump_object_tree(void* self);
void q_filedialog_dump_object_info(void* self);
bool q_filedialog_set_property(void* self, const char* name, void* value);
QVariant* q_filedialog_property(void* self, const char* name);
const char** q_filedialog_dynamic_property_names(void* self);
QBindingStorage* q_filedialog_binding_storage(void* self);
QBindingStorage* q_filedialog_binding_storage2(void* self);
void q_filedialog_destroyed(void* self);
void q_filedialog_on_destroyed(void* self, void (*slot)(void*));
QObject* q_filedialog_parent(void* self);
bool q_filedialog_inherits(void* self, const char* classname);
void q_filedialog_delete_later(void* self);
int32_t q_filedialog_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_filedialog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_filedialog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_filedialog_destroyed1(void* self, void* param1);
void q_filedialog_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_filedialog_painting_active(void* self);
int32_t q_filedialog_width_m_m(void* self);
int32_t q_filedialog_height_m_m(void* self);
int32_t q_filedialog_logical_dpi_x(void* self);
int32_t q_filedialog_logical_dpi_y(void* self);
int32_t q_filedialog_physical_dpi_x(void* self);
int32_t q_filedialog_physical_dpi_y(void* self);
double q_filedialog_device_pixel_ratio(void* self);
double q_filedialog_device_pixel_ratio_f(void* self);
int32_t q_filedialog_color_count(void* self);
int32_t q_filedialog_depth(void* self);
double q_filedialog_device_pixel_ratio_f_scale();
QSize* q_filedialog_size_hint(void* self);
QSize* q_filedialog_qbase_size_hint(void* self);
void q_filedialog_on_size_hint(void* self, QSize* (*slot)());
QSize* q_filedialog_minimum_size_hint(void* self);
QSize* q_filedialog_qbase_minimum_size_hint(void* self);
void q_filedialog_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_filedialog_open(void* self);
void q_filedialog_qbase_open(void* self);
void q_filedialog_on_open(void* self, void (*slot)());
int32_t q_filedialog_exec(void* self);
int32_t q_filedialog_qbase_exec(void* self);
void q_filedialog_on_exec(void* self, int32_t (*slot)());
void q_filedialog_reject(void* self);
void q_filedialog_qbase_reject(void* self);
void q_filedialog_on_reject(void* self, void (*slot)());
void q_filedialog_key_press_event(void* self, void* param1);
void q_filedialog_qbase_key_press_event(void* self, void* param1);
void q_filedialog_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_filedialog_close_event(void* self, void* param1);
void q_filedialog_qbase_close_event(void* self, void* param1);
void q_filedialog_on_close_event(void* self, void (*slot)(void*, void*));
void q_filedialog_show_event(void* self, void* param1);
void q_filedialog_qbase_show_event(void* self, void* param1);
void q_filedialog_on_show_event(void* self, void (*slot)(void*, void*));
void q_filedialog_resize_event(void* self, void* param1);
void q_filedialog_qbase_resize_event(void* self, void* param1);
void q_filedialog_on_resize_event(void* self, void (*slot)(void*, void*));
void q_filedialog_context_menu_event(void* self, void* param1);
void q_filedialog_qbase_context_menu_event(void* self, void* param1);
void q_filedialog_on_context_menu_event(void* self, void (*slot)(void*, void*));
bool q_filedialog_event_filter(void* self, void* param1, void* param2);
bool q_filedialog_qbase_event_filter(void* self, void* param1, void* param2);
void q_filedialog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
int32_t q_filedialog_dev_type(void* self);
int32_t q_filedialog_qbase_dev_type(void* self);
void q_filedialog_on_dev_type(void* self, int32_t (*slot)());
int32_t q_filedialog_height_for_width(void* self, int param1);
int32_t q_filedialog_qbase_height_for_width(void* self, int param1);
void q_filedialog_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_filedialog_has_height_for_width(void* self);
bool q_filedialog_qbase_has_height_for_width(void* self);
void q_filedialog_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_filedialog_paint_engine(void* self);
QPaintEngine* q_filedialog_qbase_paint_engine(void* self);
void q_filedialog_on_paint_engine(void* self, QPaintEngine* (*slot)());
bool q_filedialog_event(void* self, void* event);
bool q_filedialog_qbase_event(void* self, void* event);
void q_filedialog_on_event(void* self, bool (*slot)(void*, void*));
void q_filedialog_mouse_press_event(void* self, void* event);
void q_filedialog_qbase_mouse_press_event(void* self, void* event);
void q_filedialog_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_filedialog_mouse_release_event(void* self, void* event);
void q_filedialog_qbase_mouse_release_event(void* self, void* event);
void q_filedialog_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_filedialog_mouse_double_click_event(void* self, void* event);
void q_filedialog_qbase_mouse_double_click_event(void* self, void* event);
void q_filedialog_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_filedialog_mouse_move_event(void* self, void* event);
void q_filedialog_qbase_mouse_move_event(void* self, void* event);
void q_filedialog_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_filedialog_wheel_event(void* self, void* event);
void q_filedialog_qbase_wheel_event(void* self, void* event);
void q_filedialog_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_filedialog_key_release_event(void* self, void* event);
void q_filedialog_qbase_key_release_event(void* self, void* event);
void q_filedialog_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_filedialog_focus_in_event(void* self, void* event);
void q_filedialog_qbase_focus_in_event(void* self, void* event);
void q_filedialog_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_filedialog_focus_out_event(void* self, void* event);
void q_filedialog_qbase_focus_out_event(void* self, void* event);
void q_filedialog_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_filedialog_enter_event(void* self, void* event);
void q_filedialog_qbase_enter_event(void* self, void* event);
void q_filedialog_on_enter_event(void* self, void (*slot)(void*, void*));
void q_filedialog_leave_event(void* self, void* event);
void q_filedialog_qbase_leave_event(void* self, void* event);
void q_filedialog_on_leave_event(void* self, void (*slot)(void*, void*));
void q_filedialog_paint_event(void* self, void* event);
void q_filedialog_qbase_paint_event(void* self, void* event);
void q_filedialog_on_paint_event(void* self, void (*slot)(void*, void*));
void q_filedialog_move_event(void* self, void* event);
void q_filedialog_qbase_move_event(void* self, void* event);
void q_filedialog_on_move_event(void* self, void (*slot)(void*, void*));
void q_filedialog_tablet_event(void* self, void* event);
void q_filedialog_qbase_tablet_event(void* self, void* event);
void q_filedialog_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_filedialog_action_event(void* self, void* event);
void q_filedialog_qbase_action_event(void* self, void* event);
void q_filedialog_on_action_event(void* self, void (*slot)(void*, void*));
void q_filedialog_drag_enter_event(void* self, void* event);
void q_filedialog_qbase_drag_enter_event(void* self, void* event);
void q_filedialog_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_filedialog_drag_move_event(void* self, void* event);
void q_filedialog_qbase_drag_move_event(void* self, void* event);
void q_filedialog_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_filedialog_drag_leave_event(void* self, void* event);
void q_filedialog_qbase_drag_leave_event(void* self, void* event);
void q_filedialog_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_filedialog_drop_event(void* self, void* event);
void q_filedialog_qbase_drop_event(void* self, void* event);
void q_filedialog_on_drop_event(void* self, void (*slot)(void*, void*));
void q_filedialog_hide_event(void* self, void* event);
void q_filedialog_qbase_hide_event(void* self, void* event);
void q_filedialog_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_filedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_filedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_filedialog_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_filedialog_metric(void* self, int64_t param1);
int32_t q_filedialog_qbase_metric(void* self, int64_t param1);
void q_filedialog_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_filedialog_init_painter(void* self, void* painter);
void q_filedialog_qbase_init_painter(void* self, void* painter);
void q_filedialog_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_filedialog_redirected(void* self, void* offset);
QPaintDevice* q_filedialog_qbase_redirected(void* self, void* offset);
void q_filedialog_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_filedialog_shared_painter(void* self);
QPainter* q_filedialog_qbase_shared_painter(void* self);
void q_filedialog_on_shared_painter(void* self, QPainter* (*slot)());
void q_filedialog_input_method_event(void* self, void* param1);
void q_filedialog_qbase_input_method_event(void* self, void* param1);
void q_filedialog_on_input_method_event(void* self, void (*slot)(void*, void*));
QVariant* q_filedialog_input_method_query(void* self, int64_t param1);
QVariant* q_filedialog_qbase_input_method_query(void* self, int64_t param1);
void q_filedialog_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
bool q_filedialog_focus_next_prev_child(void* self, bool next);
bool q_filedialog_qbase_focus_next_prev_child(void* self, bool next);
void q_filedialog_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_filedialog_timer_event(void* self, void* event);
void q_filedialog_qbase_timer_event(void* self, void* event);
void q_filedialog_on_timer_event(void* self, void (*slot)(void*, void*));
void q_filedialog_child_event(void* self, void* event);
void q_filedialog_qbase_child_event(void* self, void* event);
void q_filedialog_on_child_event(void* self, void (*slot)(void*, void*));
void q_filedialog_custom_event(void* self, void* event);
void q_filedialog_qbase_custom_event(void* self, void* event);
void q_filedialog_on_custom_event(void* self, void (*slot)(void*, void*));
void q_filedialog_connect_notify(void* self, void* signal);
void q_filedialog_qbase_connect_notify(void* self, void* signal);
void q_filedialog_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_filedialog_disconnect_notify(void* self, void* signal);
void q_filedialog_qbase_disconnect_notify(void* self, void* signal);
void q_filedialog_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_filedialog_adjust_position(void* self, void* param1);
void q_filedialog_qbase_adjust_position(void* self, void* param1);
void q_filedialog_on_adjust_position(void* self, void (*slot)(void*, void*));
void q_filedialog_update_micro_focus(void* self);
void q_filedialog_qbase_update_micro_focus(void* self);
void q_filedialog_on_update_micro_focus(void* self, void (*slot)());
void q_filedialog_create(void* self);
void q_filedialog_qbase_create(void* self);
void q_filedialog_on_create(void* self, void (*slot)());
void q_filedialog_destroy(void* self);
void q_filedialog_qbase_destroy(void* self);
void q_filedialog_on_destroy(void* self, void (*slot)());
bool q_filedialog_focus_next_child(void* self);
bool q_filedialog_qbase_focus_next_child(void* self);
void q_filedialog_on_focus_next_child(void* self, bool (*slot)());
bool q_filedialog_focus_previous_child(void* self);
bool q_filedialog_qbase_focus_previous_child(void* self);
void q_filedialog_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_filedialog_sender(void* self);
QObject* q_filedialog_qbase_sender(void* self);
void q_filedialog_on_sender(void* self, QObject* (*slot)());
int32_t q_filedialog_sender_signal_index(void* self);
int32_t q_filedialog_qbase_sender_signal_index(void* self);
void q_filedialog_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_filedialog_receivers(void* self, const char* signal);
int32_t q_filedialog_qbase_receivers(void* self, const char* signal);
void q_filedialog_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_filedialog_is_signal_connected(void* self, void* signal);
bool q_filedialog_qbase_is_signal_connected(void* self, void* signal);
void q_filedialog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_filedialog_delete(void* self);

/// https://doc.qt.io/qt-6/qfiledialog.html#types

typedef enum {
    QFILEDIALOG_VIEWMODE_DETAIL = 0,
    QFILEDIALOG_VIEWMODE_LIST = 1
} QFileDialog__ViewMode;

typedef enum {
    QFILEDIALOG_FILEMODE_ANYFILE = 0,
    QFILEDIALOG_FILEMODE_EXISTINGFILE = 1,
    QFILEDIALOG_FILEMODE_DIRECTORY = 2,
    QFILEDIALOG_FILEMODE_EXISTINGFILES = 3
} QFileDialog__FileMode;

typedef enum {
    QFILEDIALOG_ACCEPTMODE_ACCEPTOPEN = 0,
    QFILEDIALOG_ACCEPTMODE_ACCEPTSAVE = 1
} QFileDialog__AcceptMode;

typedef enum {
    QFILEDIALOG_DIALOGLABEL_LOOKIN = 0,
    QFILEDIALOG_DIALOGLABEL_FILENAME = 1,
    QFILEDIALOG_DIALOGLABEL_FILETYPE = 2,
    QFILEDIALOG_DIALOGLABEL_ACCEPT = 3,
    QFILEDIALOG_DIALOGLABEL_REJECT = 4
} QFileDialog__DialogLabel;

typedef enum {
    QFILEDIALOG_OPTION_SHOWDIRSONLY = 1,
    QFILEDIALOG_OPTION_DONTRESOLVESYMLINKS = 2,
    QFILEDIALOG_OPTION_DONTCONFIRMOVERWRITE = 4,
    QFILEDIALOG_OPTION_DONTUSENATIVEDIALOG = 8,
    QFILEDIALOG_OPTION_READONLY = 16,
    QFILEDIALOG_OPTION_HIDENAMEFILTERDETAILS = 32,
    QFILEDIALOG_OPTION_DONTUSECUSTOMDIRECTORYICONS = 64
} QFileDialog__Option;

#endif
