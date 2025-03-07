#pragma once
#ifndef SRCQT6C_LIBQCOMBOBOX_H
#define SRCQT6C_LIBQCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcompleter.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlineedit.h"
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
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvalidator.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QComboBox* q_combobox_new(void* parent);
QComboBox* q_combobox_new2();
QMetaObject* q_combobox_meta_object(void* self);
void* q_combobox_metacast(void* self, const char* param1);
int32_t q_combobox_metacall(void* self, int64_t param1, int param2, void* param3);
void q_combobox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_combobox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_combobox_tr(const char* s);
int32_t q_combobox_max_visible_items(void* self);
void q_combobox_set_max_visible_items(void* self, int maxItems);
int32_t q_combobox_count(void* self);
void q_combobox_set_max_count(void* self, int max);
int32_t q_combobox_max_count(void* self);
bool q_combobox_duplicates_enabled(void* self);
void q_combobox_set_duplicates_enabled(void* self, bool enable);
void q_combobox_set_frame(void* self, bool frame);
bool q_combobox_has_frame(void* self);
int32_t q_combobox_find_text(void* self, const char* text);
int32_t q_combobox_find_data(void* self, void* data);
int64_t q_combobox_insert_policy(void* self);
void q_combobox_set_insert_policy(void* self, int64_t policy);
int64_t q_combobox_size_adjust_policy(void* self);
void q_combobox_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_combobox_minimum_contents_length(void* self);
void q_combobox_set_minimum_contents_length(void* self, int characters);
QSize* q_combobox_icon_size(void* self);
void q_combobox_set_icon_size(void* self, void* size);
void q_combobox_set_placeholder_text(void* self, const char* placeholderText);
const char* q_combobox_placeholder_text(void* self);
bool q_combobox_is_editable(void* self);
void q_combobox_set_editable(void* self, bool editable);
void q_combobox_set_line_edit(void* self, void* edit);
QLineEdit* q_combobox_line_edit(void* self);
void q_combobox_set_validator(void* self, void* v);
QValidator* q_combobox_validator(void* self);
void q_combobox_set_completer(void* self, void* c);
QCompleter* q_combobox_completer(void* self);
QAbstractItemDelegate* q_combobox_item_delegate(void* self);
void q_combobox_set_item_delegate(void* self, void* delegate);
QAbstractItemModel* q_combobox_model(void* self);
void q_combobox_set_model(void* self, void* model);
void q_combobox_on_set_model(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_set_model(void* self, void* model);
QModelIndex* q_combobox_root_model_index(void* self);
void q_combobox_set_root_model_index(void* self, void* index);
int32_t q_combobox_model_column(void* self);
void q_combobox_set_model_column(void* self, int visibleColumn);
int32_t q_combobox_current_index(void* self);
const char* q_combobox_current_text(void* self);
QVariant* q_combobox_current_data(void* self);
const char* q_combobox_item_text(void* self, int index);
QIcon* q_combobox_item_icon(void* self, int index);
QVariant* q_combobox_item_data(void* self, int index);
void q_combobox_add_item(void* self, const char* text);
void q_combobox_add_item2(void* self, void* icon, const char* text);
void q_combobox_add_items(void* self, const char* texts[]);
void q_combobox_insert_item(void* self, int index, const char* text);
void q_combobox_insert_item2(void* self, int index, void* icon, const char* text);
void q_combobox_insert_items(void* self, int index, const char* texts[]);
void q_combobox_insert_separator(void* self, int index);
void q_combobox_remove_item(void* self, int index);
void q_combobox_set_item_text(void* self, int index, const char* text);
void q_combobox_set_item_icon(void* self, int index, void* icon);
void q_combobox_set_item_data(void* self, int index, void* value);
QAbstractItemView* q_combobox_view(void* self);
void q_combobox_set_view(void* self, void* itemView);
QSize* q_combobox_size_hint(void* self);
void q_combobox_on_size_hint(void* self, QSize* (*slot)());
QSize* q_combobox_qbase_size_hint(void* self);
QSize* q_combobox_minimum_size_hint(void* self);
void q_combobox_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_combobox_qbase_minimum_size_hint(void* self);
void q_combobox_show_popup(void* self);
void q_combobox_on_show_popup(void* self, void (*slot)());
void q_combobox_qbase_show_popup(void* self);
void q_combobox_hide_popup(void* self);
void q_combobox_on_hide_popup(void* self, void (*slot)());
void q_combobox_qbase_hide_popup(void* self);
bool q_combobox_event(void* self, void* event);
void q_combobox_on_event(void* self, bool (*slot)(void*, void*));
bool q_combobox_qbase_event(void* self, void* event);
QVariant* q_combobox_input_method_query(void* self, int64_t param1);
void q_combobox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_combobox_qbase_input_method_query(void* self, int64_t param1);
QVariant* q_combobox_input_method_query2(void* self, int64_t query, void* argument);
void q_combobox_clear(void* self);
void q_combobox_clear_edit_text(void* self);
void q_combobox_set_edit_text(void* self, const char* text);
void q_combobox_set_current_index(void* self, int index);
void q_combobox_set_current_text(void* self, const char* text);
void q_combobox_edit_text_changed(void* self, const char* param1);
void q_combobox_on_edit_text_changed(void* self, void (*slot)(void*, const char*));
void q_combobox_activated(void* self, int index);
void q_combobox_on_activated(void* self, void (*slot)(void*, int));
void q_combobox_text_activated(void* self, const char* param1);
void q_combobox_on_text_activated(void* self, void (*slot)(void*, const char*));
void q_combobox_highlighted(void* self, int index);
void q_combobox_on_highlighted(void* self, void (*slot)(void*, int));
void q_combobox_text_highlighted(void* self, const char* param1);
void q_combobox_on_text_highlighted(void* self, void (*slot)(void*, const char*));
void q_combobox_current_index_changed(void* self, int index);
void q_combobox_on_current_index_changed(void* self, void (*slot)(void*, int));
void q_combobox_current_text_changed(void* self, const char* param1);
void q_combobox_on_current_text_changed(void* self, void (*slot)(void*, const char*));
void q_combobox_focus_in_event(void* self, void* e);
void q_combobox_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_focus_in_event(void* self, void* e);
void q_combobox_focus_out_event(void* self, void* e);
void q_combobox_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_focus_out_event(void* self, void* e);
void q_combobox_change_event(void* self, void* e);
void q_combobox_on_change_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_change_event(void* self, void* e);
void q_combobox_resize_event(void* self, void* e);
void q_combobox_on_resize_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_resize_event(void* self, void* e);
void q_combobox_paint_event(void* self, void* e);
void q_combobox_on_paint_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_paint_event(void* self, void* e);
void q_combobox_show_event(void* self, void* e);
void q_combobox_on_show_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_show_event(void* self, void* e);
void q_combobox_hide_event(void* self, void* e);
void q_combobox_on_hide_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_hide_event(void* self, void* e);
void q_combobox_mouse_press_event(void* self, void* e);
void q_combobox_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_mouse_press_event(void* self, void* e);
void q_combobox_mouse_release_event(void* self, void* e);
void q_combobox_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_mouse_release_event(void* self, void* e);
void q_combobox_key_press_event(void* self, void* e);
void q_combobox_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_key_press_event(void* self, void* e);
void q_combobox_key_release_event(void* self, void* e);
void q_combobox_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_key_release_event(void* self, void* e);
void q_combobox_wheel_event(void* self, void* e);
void q_combobox_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_wheel_event(void* self, void* e);
void q_combobox_context_menu_event(void* self, void* e);
void q_combobox_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_context_menu_event(void* self, void* e);
void q_combobox_input_method_event(void* self, void* param1);
void q_combobox_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_input_method_event(void* self, void* param1);
void q_combobox_init_style_option(void* self, void* option);
void q_combobox_on_init_style_option(void* self, void (*slot)(void*, void*));
void q_combobox_qbase_init_style_option(void* self, void* option);
const char* q_combobox_tr2(const char* s, const char* c);
const char* q_combobox_tr3(const char* s, const char* c, int n);
int32_t q_combobox_find_text2(void* self, const char* text, int64_t flags);
int32_t q_combobox_find_data2(void* self, void* data, int role);
int32_t q_combobox_find_data3(void* self, void* data, int role, int64_t flags);
QVariant* q_combobox_current_data1(void* self, int role);
QVariant* q_combobox_item_data2(void* self, int index, int role);
void q_combobox_add_item22(void* self, const char* text, void* userData);
void q_combobox_add_item3(void* self, void* icon, const char* text, void* userData);
void q_combobox_insert_item3(void* self, int index, const char* text, void* userData);
void q_combobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);
void q_combobox_set_item_data3(void* self, int index, void* value, int role);
uintptr_t q_combobox_win_id(void* self);
void q_combobox_create_win_id(void* self);
uintptr_t q_combobox_internal_win_id(void* self);
uintptr_t q_combobox_effective_win_id(void* self);
QStyle* q_combobox_style(void* self);
void q_combobox_set_style(void* self, void* style);
bool q_combobox_is_top_level(void* self);
bool q_combobox_is_window(void* self);
bool q_combobox_is_modal(void* self);
int64_t q_combobox_window_modality(void* self);
void q_combobox_set_window_modality(void* self, int64_t windowModality);
bool q_combobox_is_enabled(void* self);
bool q_combobox_is_enabled_to(void* self, void* param1);
void q_combobox_set_enabled(void* self, bool enabled);
void q_combobox_set_disabled(void* self, bool disabled);
void q_combobox_set_window_modified(void* self, bool windowModified);
QRect* q_combobox_frame_geometry(void* self);
QRect* q_combobox_geometry(void* self);
QRect* q_combobox_normal_geometry(void* self);
int32_t q_combobox_x(void* self);
int32_t q_combobox_y(void* self);
QPoint* q_combobox_pos(void* self);
QSize* q_combobox_frame_size(void* self);
QSize* q_combobox_size(void* self);
int32_t q_combobox_width(void* self);
int32_t q_combobox_height(void* self);
QRect* q_combobox_rect(void* self);
QRect* q_combobox_children_rect(void* self);
QRegion* q_combobox_children_region(void* self);
QSize* q_combobox_minimum_size(void* self);
QSize* q_combobox_maximum_size(void* self);
int32_t q_combobox_minimum_width(void* self);
int32_t q_combobox_minimum_height(void* self);
int32_t q_combobox_maximum_width(void* self);
int32_t q_combobox_maximum_height(void* self);
void q_combobox_set_minimum_size(void* self, void* minimumSize);
void q_combobox_set_minimum_size2(void* self, int minw, int minh);
void q_combobox_set_maximum_size(void* self, void* maximumSize);
void q_combobox_set_maximum_size2(void* self, int maxw, int maxh);
void q_combobox_set_minimum_width(void* self, int minw);
void q_combobox_set_minimum_height(void* self, int minh);
void q_combobox_set_maximum_width(void* self, int maxw);
void q_combobox_set_maximum_height(void* self, int maxh);
QSize* q_combobox_size_increment(void* self);
void q_combobox_set_size_increment(void* self, void* sizeIncrement);
void q_combobox_set_size_increment2(void* self, int w, int h);
QSize* q_combobox_base_size(void* self);
void q_combobox_set_base_size(void* self, void* baseSize);
void q_combobox_set_base_size2(void* self, int basew, int baseh);
void q_combobox_set_fixed_size(void* self, void* fixedSize);
void q_combobox_set_fixed_size2(void* self, int w, int h);
void q_combobox_set_fixed_width(void* self, int w);
void q_combobox_set_fixed_height(void* self, int h);
QPointF* q_combobox_map_to_global(void* self, void* param1);
QPoint* q_combobox_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_combobox_map_from_global(void* self, void* param1);
QPoint* q_combobox_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_combobox_map_to_parent(void* self, void* param1);
QPoint* q_combobox_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_combobox_map_from_parent(void* self, void* param1);
QPoint* q_combobox_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_combobox_map_to(void* self, void* param1, void* param2);
QPoint* q_combobox_map_to2(void* self, void* param1, void* param2);
QPointF* q_combobox_map_from(void* self, void* param1, void* param2);
QPoint* q_combobox_map_from2(void* self, void* param1, void* param2);
QWidget* q_combobox_window(void* self);
QWidget* q_combobox_native_parent_widget(void* self);
QWidget* q_combobox_top_level_widget(void* self);
QPalette* q_combobox_palette(void* self);
void q_combobox_set_palette(void* self, void* palette);
void q_combobox_set_background_role(void* self, int64_t backgroundRole);
int64_t q_combobox_background_role(void* self);
void q_combobox_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_combobox_foreground_role(void* self);
QFont* q_combobox_font(void* self);
void q_combobox_set_font(void* self, void* font);
QFontMetrics* q_combobox_font_metrics(void* self);
QFontInfo* q_combobox_font_info(void* self);
QCursor* q_combobox_cursor(void* self);
void q_combobox_set_cursor(void* self, void* cursor);
void q_combobox_unset_cursor(void* self);
void q_combobox_set_mouse_tracking(void* self, bool enable);
bool q_combobox_has_mouse_tracking(void* self);
bool q_combobox_under_mouse(void* self);
void q_combobox_set_tablet_tracking(void* self, bool enable);
bool q_combobox_has_tablet_tracking(void* self);
void q_combobox_set_mask(void* self, void* mask);
void q_combobox_set_mask_with_mask(void* self, void* mask);
QRegion* q_combobox_mask(void* self);
void q_combobox_clear_mask(void* self);
void q_combobox_render(void* self, void* target);
void q_combobox_render_with_painter(void* self, void* painter);
QPixmap* q_combobox_grab(void* self);
QGraphicsEffect* q_combobox_graphics_effect(void* self);
void q_combobox_set_graphics_effect(void* self, void* effect);
void q_combobox_grab_gesture(void* self, int64_t typeVal);
void q_combobox_ungrab_gesture(void* self, int64_t typeVal);
void q_combobox_set_window_title(void* self, const char* windowTitle);
void q_combobox_set_style_sheet(void* self, const char* styleSheet);
const char* q_combobox_style_sheet(void* self);
const char* q_combobox_window_title(void* self);
void q_combobox_set_window_icon(void* self, void* icon);
QIcon* q_combobox_window_icon(void* self);
void q_combobox_set_window_icon_text(void* self, const char* windowIconText);
const char* q_combobox_window_icon_text(void* self);
void q_combobox_set_window_role(void* self, const char* windowRole);
const char* q_combobox_window_role(void* self);
void q_combobox_set_window_file_path(void* self, const char* filePath);
const char* q_combobox_window_file_path(void* self);
void q_combobox_set_window_opacity(void* self, double level);
double q_combobox_window_opacity(void* self);
bool q_combobox_is_window_modified(void* self);
void q_combobox_set_tool_tip(void* self, const char* toolTip);
const char* q_combobox_tool_tip(void* self);
void q_combobox_set_tool_tip_duration(void* self, int msec);
int32_t q_combobox_tool_tip_duration(void* self);
void q_combobox_set_status_tip(void* self, const char* statusTip);
const char* q_combobox_status_tip(void* self);
void q_combobox_set_whats_this(void* self, const char* whatsThis);
const char* q_combobox_whats_this(void* self);
const char* q_combobox_accessible_name(void* self);
void q_combobox_set_accessible_name(void* self, const char* name);
const char* q_combobox_accessible_description(void* self);
void q_combobox_set_accessible_description(void* self, const char* description);
void q_combobox_set_layout_direction(void* self, int64_t direction);
int64_t q_combobox_layout_direction(void* self);
void q_combobox_unset_layout_direction(void* self);
void q_combobox_set_locale(void* self, void* locale);
QLocale* q_combobox_locale(void* self);
void q_combobox_unset_locale(void* self);
bool q_combobox_is_right_to_left(void* self);
bool q_combobox_is_left_to_right(void* self);
void q_combobox_set_focus(void* self);
bool q_combobox_is_active_window(void* self);
void q_combobox_activate_window(void* self);
void q_combobox_clear_focus(void* self);
void q_combobox_set_focus_with_reason(void* self, int64_t reason);
int64_t q_combobox_focus_policy(void* self);
void q_combobox_set_focus_policy(void* self, int64_t policy);
bool q_combobox_has_focus(void* self);
void q_combobox_set_tab_order(void* param1, void* param2);
void q_combobox_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_combobox_focus_proxy(void* self);
int64_t q_combobox_context_menu_policy(void* self);
void q_combobox_set_context_menu_policy(void* self, int64_t policy);
void q_combobox_grab_mouse(void* self);
void q_combobox_grab_mouse_with_q_cursor(void* self, void* param1);
void q_combobox_release_mouse(void* self);
void q_combobox_grab_keyboard(void* self);
void q_combobox_release_keyboard(void* self);
int32_t q_combobox_grab_shortcut(void* self, void* key);
void q_combobox_release_shortcut(void* self, int id);
void q_combobox_set_shortcut_enabled(void* self, int id);
void q_combobox_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_combobox_mouse_grabber();
QWidget* q_combobox_keyboard_grabber();
bool q_combobox_updates_enabled(void* self);
void q_combobox_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_combobox_graphics_proxy_widget(void* self);
void q_combobox_update(void* self);
void q_combobox_repaint(void* self);
void q_combobox_update2(void* self, int x, int y, int w, int h);
void q_combobox_update_with_q_rect(void* self, void* param1);
void q_combobox_update_with_q_region(void* self, void* param1);
void q_combobox_repaint2(void* self, int x, int y, int w, int h);
void q_combobox_repaint_with_q_rect(void* self, void* param1);
void q_combobox_repaint_with_q_region(void* self, void* param1);
void q_combobox_set_hidden(void* self, bool hidden);
void q_combobox_show(void* self);
void q_combobox_hide(void* self);
void q_combobox_show_minimized(void* self);
void q_combobox_show_maximized(void* self);
void q_combobox_show_full_screen(void* self);
void q_combobox_show_normal(void* self);
bool q_combobox_close(void* self);
void q_combobox_raise(void* self);
void q_combobox_lower(void* self);
void q_combobox_stack_under(void* self, void* param1);
void q_combobox_move(void* self, int x, int y);
void q_combobox_move_with_q_point(void* self, void* param1);
void q_combobox_resize(void* self, int w, int h);
void q_combobox_resize_with_q_size(void* self, void* param1);
void q_combobox_set_geometry(void* self, int x, int y, int w, int h);
void q_combobox_set_geometry_with_geometry(void* self, void* geometry);
char* q_combobox_save_geometry(void* self);
bool q_combobox_restore_geometry(void* self, const char* geometry);
void q_combobox_adjust_size(void* self);
bool q_combobox_is_visible(void* self);
bool q_combobox_is_visible_to(void* self, void* param1);
bool q_combobox_is_hidden(void* self);
bool q_combobox_is_minimized(void* self);
bool q_combobox_is_maximized(void* self);
bool q_combobox_is_full_screen(void* self);
int64_t q_combobox_window_state(void* self);
void q_combobox_set_window_state(void* self, int64_t state);
void q_combobox_override_window_state(void* self, int64_t state);
QSizePolicy* q_combobox_size_policy(void* self);
void q_combobox_set_size_policy(void* self, void* sizePolicy);
void q_combobox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_combobox_visible_region(void* self);
void q_combobox_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_combobox_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_combobox_contents_margins(void* self);
QRect* q_combobox_contents_rect(void* self);
QLayout* q_combobox_layout(void* self);
void q_combobox_set_layout(void* self, void* layout);
void q_combobox_update_geometry(void* self);
void q_combobox_set_parent(void* self, void* parent);
void q_combobox_set_parent2(void* self, void* parent, int64_t f);
void q_combobox_scroll(void* self, int dx, int dy);
void q_combobox_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_combobox_focus_widget(void* self);
QWidget* q_combobox_next_in_focus_chain(void* self);
QWidget* q_combobox_previous_in_focus_chain(void* self);
bool q_combobox_accept_drops(void* self);
void q_combobox_set_accept_drops(void* self, bool on);
void q_combobox_add_action(void* self, void* action);
void q_combobox_add_actions(void* self, void* actions[]);
void q_combobox_insert_actions(void* self, void* before, void* actions[]);
void q_combobox_insert_action(void* self, void* before, void* action);
void q_combobox_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_combobox_actions(void* self);
QAction* q_combobox_add_action_with_text(void* self, const char* text);
QAction* q_combobox_add_action2(void* self, void* icon, const char* text);
QAction* q_combobox_add_action3(void* self, const char* text, void* shortcut);
QAction* q_combobox_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_combobox_parent_widget(void* self);
void q_combobox_set_window_flags(void* self, int64_t typeVal);
int64_t q_combobox_window_flags(void* self);
void q_combobox_set_window_flag(void* self, int64_t param1);
void q_combobox_override_window_flags(void* self, int64_t typeVal);
int64_t q_combobox_window_type(void* self);
QWidget* q_combobox_find(uint64_t param1);
QWidget* q_combobox_child_at(void* self, int x, int y);
QWidget* q_combobox_child_at_with_q_point(void* self, void* p);
void q_combobox_set_attribute(void* self, int64_t param1);
bool q_combobox_test_attribute(void* self, int64_t param1);
void q_combobox_ensure_polished(void* self);
bool q_combobox_is_ancestor_of(void* self, void* child);
bool q_combobox_auto_fill_background(void* self);
void q_combobox_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_combobox_backing_store(void* self);
QWindow* q_combobox_window_handle(void* self);
QScreen* q_combobox_screen(void* self);
void q_combobox_set_screen(void* self, void* screen);
QWidget* q_combobox_create_window_container(void* window);
void q_combobox_window_title_changed(void* self, const char* title);
void q_combobox_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_combobox_window_icon_changed(void* self, void* icon);
void q_combobox_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_combobox_window_icon_text_changed(void* self, const char* iconText);
void q_combobox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_combobox_custom_context_menu_requested(void* self, void* pos);
void q_combobox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_combobox_input_method_hints(void* self);
void q_combobox_set_input_method_hints(void* self, int64_t hints);
void q_combobox_render2(void* self, void* target, void* targetOffset);
void q_combobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_combobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_combobox_render22(void* self, void* painter, void* targetOffset);
void q_combobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_combobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_combobox_grab1(void* self, void* rectangle);
void q_combobox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_combobox_grab_shortcut2(void* self, void* key, int64_t context);
void q_combobox_set_shortcut_enabled2(void* self, int id, bool enable);
void q_combobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_combobox_set_window_flag2(void* self, int64_t param1, bool on);
void q_combobox_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_combobox_create_window_container2(void* window, void* parent);
QWidget* q_combobox_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_combobox_object_name(void* self);
void q_combobox_set_object_name(void* self, const char* name);
bool q_combobox_is_widget_type(void* self);
bool q_combobox_is_window_type(void* self);
bool q_combobox_is_quick_item_type(void* self);
bool q_combobox_signals_blocked(void* self);
bool q_combobox_block_signals(void* self, bool b);
QThread* q_combobox_thread(void* self);
void q_combobox_move_to_thread(void* self, void* thread);
int32_t q_combobox_start_timer(void* self, int interval);
void q_combobox_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_combobox_children(void* self);
void q_combobox_install_event_filter(void* self, void* filterObj);
void q_combobox_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_combobox_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_combobox_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_combobox_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_combobox_disconnect_with_q_meta_object_connection(void* param1);
void q_combobox_dump_object_tree(void* self);
void q_combobox_dump_object_info(void* self);
bool q_combobox_set_property(void* self, const char* name, void* value);
QVariant* q_combobox_property(void* self, const char* name);
const char** q_combobox_dynamic_property_names(void* self);
QBindingStorage* q_combobox_binding_storage(void* self);
QBindingStorage* q_combobox_binding_storage2(void* self);
void q_combobox_destroyed(void* self);
void q_combobox_on_destroyed(void* self, void (*slot)(void*));
QObject* q_combobox_parent(void* self);
bool q_combobox_inherits(void* self, const char* classname);
void q_combobox_delete_later(void* self);
int32_t q_combobox_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_combobox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_combobox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_combobox_destroyed1(void* self, void* param1);
void q_combobox_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_combobox_painting_active(void* self);
int32_t q_combobox_width_m_m(void* self);
int32_t q_combobox_height_m_m(void* self);
int32_t q_combobox_logical_dpi_x(void* self);
int32_t q_combobox_logical_dpi_y(void* self);
int32_t q_combobox_physical_dpi_x(void* self);
int32_t q_combobox_physical_dpi_y(void* self);
double q_combobox_device_pixel_ratio(void* self);
double q_combobox_device_pixel_ratio_f(void* self);
int32_t q_combobox_color_count(void* self);
int32_t q_combobox_depth(void* self);
double q_combobox_device_pixel_ratio_f_scale();
int32_t q_combobox_dev_type(void* self);
int32_t q_combobox_qbase_dev_type(void* self);
void q_combobox_on_dev_type(void* self, int32_t (*slot)());
void q_combobox_set_visible(void* self, bool visible);
void q_combobox_qbase_set_visible(void* self, bool visible);
void q_combobox_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_combobox_height_for_width(void* self, int param1);
int32_t q_combobox_qbase_height_for_width(void* self, int param1);
void q_combobox_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_combobox_has_height_for_width(void* self);
bool q_combobox_qbase_has_height_for_width(void* self);
void q_combobox_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_combobox_paint_engine(void* self);
QPaintEngine* q_combobox_qbase_paint_engine(void* self);
void q_combobox_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_combobox_mouse_double_click_event(void* self, void* event);
void q_combobox_qbase_mouse_double_click_event(void* self, void* event);
void q_combobox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_combobox_mouse_move_event(void* self, void* event);
void q_combobox_qbase_mouse_move_event(void* self, void* event);
void q_combobox_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_combobox_enter_event(void* self, void* event);
void q_combobox_qbase_enter_event(void* self, void* event);
void q_combobox_on_enter_event(void* self, void (*slot)(void*, void*));
void q_combobox_leave_event(void* self, void* event);
void q_combobox_qbase_leave_event(void* self, void* event);
void q_combobox_on_leave_event(void* self, void (*slot)(void*, void*));
void q_combobox_move_event(void* self, void* event);
void q_combobox_qbase_move_event(void* self, void* event);
void q_combobox_on_move_event(void* self, void (*slot)(void*, void*));
void q_combobox_close_event(void* self, void* event);
void q_combobox_qbase_close_event(void* self, void* event);
void q_combobox_on_close_event(void* self, void (*slot)(void*, void*));
void q_combobox_tablet_event(void* self, void* event);
void q_combobox_qbase_tablet_event(void* self, void* event);
void q_combobox_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_combobox_action_event(void* self, void* event);
void q_combobox_qbase_action_event(void* self, void* event);
void q_combobox_on_action_event(void* self, void (*slot)(void*, void*));
void q_combobox_drag_enter_event(void* self, void* event);
void q_combobox_qbase_drag_enter_event(void* self, void* event);
void q_combobox_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_combobox_drag_move_event(void* self, void* event);
void q_combobox_qbase_drag_move_event(void* self, void* event);
void q_combobox_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_combobox_drag_leave_event(void* self, void* event);
void q_combobox_qbase_drag_leave_event(void* self, void* event);
void q_combobox_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_combobox_drop_event(void* self, void* event);
void q_combobox_qbase_drop_event(void* self, void* event);
void q_combobox_on_drop_event(void* self, void (*slot)(void*, void*));
bool q_combobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_combobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_combobox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_combobox_metric(void* self, int64_t param1);
int32_t q_combobox_qbase_metric(void* self, int64_t param1);
void q_combobox_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_combobox_init_painter(void* self, void* painter);
void q_combobox_qbase_init_painter(void* self, void* painter);
void q_combobox_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_combobox_redirected(void* self, void* offset);
QPaintDevice* q_combobox_qbase_redirected(void* self, void* offset);
void q_combobox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_combobox_shared_painter(void* self);
QPainter* q_combobox_qbase_shared_painter(void* self);
void q_combobox_on_shared_painter(void* self, QPainter* (*slot)());
bool q_combobox_focus_next_prev_child(void* self, bool next);
bool q_combobox_qbase_focus_next_prev_child(void* self, bool next);
void q_combobox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_combobox_event_filter(void* self, void* watched, void* event);
bool q_combobox_qbase_event_filter(void* self, void* watched, void* event);
void q_combobox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_combobox_timer_event(void* self, void* event);
void q_combobox_qbase_timer_event(void* self, void* event);
void q_combobox_on_timer_event(void* self, void (*slot)(void*, void*));
void q_combobox_child_event(void* self, void* event);
void q_combobox_qbase_child_event(void* self, void* event);
void q_combobox_on_child_event(void* self, void (*slot)(void*, void*));
void q_combobox_custom_event(void* self, void* event);
void q_combobox_qbase_custom_event(void* self, void* event);
void q_combobox_on_custom_event(void* self, void (*slot)(void*, void*));
void q_combobox_connect_notify(void* self, void* signal);
void q_combobox_qbase_connect_notify(void* self, void* signal);
void q_combobox_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_combobox_disconnect_notify(void* self, void* signal);
void q_combobox_qbase_disconnect_notify(void* self, void* signal);
void q_combobox_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_combobox_update_micro_focus(void* self);
void q_combobox_qbase_update_micro_focus(void* self);
void q_combobox_on_update_micro_focus(void* self, void (*slot)());
void q_combobox_create(void* self);
void q_combobox_qbase_create(void* self);
void q_combobox_on_create(void* self, void (*slot)());
void q_combobox_destroy(void* self);
void q_combobox_qbase_destroy(void* self);
void q_combobox_on_destroy(void* self, void (*slot)());
bool q_combobox_focus_next_child(void* self);
bool q_combobox_qbase_focus_next_child(void* self);
void q_combobox_on_focus_next_child(void* self, bool (*slot)());
bool q_combobox_focus_previous_child(void* self);
bool q_combobox_qbase_focus_previous_child(void* self);
void q_combobox_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_combobox_sender(void* self);
QObject* q_combobox_qbase_sender(void* self);
void q_combobox_on_sender(void* self, QObject* (*slot)());
int32_t q_combobox_sender_signal_index(void* self);
int32_t q_combobox_qbase_sender_signal_index(void* self);
void q_combobox_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_combobox_receivers(void* self, const char* signal);
int32_t q_combobox_qbase_receivers(void* self, const char* signal);
void q_combobox_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_combobox_is_signal_connected(void* self, void* signal);
bool q_combobox_qbase_is_signal_connected(void* self, void* signal);
void q_combobox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_combobox_delete(void* self);

/// https://doc.qt.io/qt-6/qcombobox.html#types

typedef enum {
    QCOMBOBOX_INSERTPOLICY_NOINSERT = 0,
    QCOMBOBOX_INSERTPOLICY_INSERTATTOP = 1,
    QCOMBOBOX_INSERTPOLICY_INSERTATCURRENT = 2,
    QCOMBOBOX_INSERTPOLICY_INSERTATBOTTOM = 3,
    QCOMBOBOX_INSERTPOLICY_INSERTAFTERCURRENT = 4,
    QCOMBOBOX_INSERTPOLICY_INSERTBEFORECURRENT = 5,
    QCOMBOBOX_INSERTPOLICY_INSERTALPHABETICALLY = 6
} QComboBox__InsertPolicy;

typedef enum {
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTS = 0,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOCONTENTSONFIRSTSHOW = 1,
    QCOMBOBOX_SIZEADJUSTPOLICY_ADJUSTTOMINIMUMCONTENTSLENGTHWITHICON = 2
} QComboBox__SizeAdjustPolicy;

#endif
