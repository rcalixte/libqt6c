#pragma once
#ifndef SRCQT6C_LIBQFONTCOMBOBOX_H
#define SRCQT6C_LIBQFONTCOMBOBOX_H

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
#include "libqcombobox.h"
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

QFontComboBox* q_fontcombobox_new(void* parent);
QFontComboBox* q_fontcombobox_new2();
QMetaObject* q_fontcombobox_meta_object(void* self);
void* q_fontcombobox_metacast(void* self, const char* param1);
int32_t q_fontcombobox_metacall(void* self, int64_t param1, int param2, void* param3);
void q_fontcombobox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_fontcombobox_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_fontcombobox_tr(const char* s);
void q_fontcombobox_set_writing_system(void* self, int64_t writingSystem);
int64_t q_fontcombobox_writing_system(void* self);
void q_fontcombobox_set_font_filters(void* self, int64_t filters);
int64_t q_fontcombobox_font_filters(void* self);
QFont* q_fontcombobox_current_font(void* self);
QSize* q_fontcombobox_size_hint(void* self);
void q_fontcombobox_on_size_hint(void* self, QSize* (*slot)());
QSize* q_fontcombobox_qbase_size_hint(void* self);
void q_fontcombobox_set_sample_text_for_system(void* self, int64_t writingSystem, const char* sampleText);
const char* q_fontcombobox_sample_text_for_system(void* self, int64_t writingSystem);
void q_fontcombobox_set_sample_text_for_font(void* self, const char* fontFamily, const char* sampleText);
const char* q_fontcombobox_sample_text_for_font(void* self, const char* fontFamily);
void q_fontcombobox_set_display_font(void* self, const char* fontFamily, void* font);
void q_fontcombobox_set_current_font(void* self, void* f);
void q_fontcombobox_current_font_changed(void* self, void* f);
void q_fontcombobox_on_current_font_changed(void* self, void (*slot)(void*, void*));
bool q_fontcombobox_event(void* self, void* e);
void q_fontcombobox_on_event(void* self, bool (*slot)(void*, void*));
bool q_fontcombobox_qbase_event(void* self, void* e);
const char* q_fontcombobox_tr2(const char* s, const char* c);
const char* q_fontcombobox_tr3(const char* s, const char* c, int n);
int32_t q_fontcombobox_max_visible_items(void* self);
void q_fontcombobox_set_max_visible_items(void* self, int maxItems);
int32_t q_fontcombobox_count(void* self);
void q_fontcombobox_set_max_count(void* self, int max);
int32_t q_fontcombobox_max_count(void* self);
bool q_fontcombobox_duplicates_enabled(void* self);
void q_fontcombobox_set_duplicates_enabled(void* self, bool enable);
void q_fontcombobox_set_frame(void* self, bool frame);
bool q_fontcombobox_has_frame(void* self);
int32_t q_fontcombobox_find_text(void* self, const char* text);
int32_t q_fontcombobox_find_data(void* self, void* data);
int64_t q_fontcombobox_insert_policy(void* self);
void q_fontcombobox_set_insert_policy(void* self, int64_t policy);
int64_t q_fontcombobox_size_adjust_policy(void* self);
void q_fontcombobox_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_fontcombobox_minimum_contents_length(void* self);
void q_fontcombobox_set_minimum_contents_length(void* self, int characters);
QSize* q_fontcombobox_icon_size(void* self);
void q_fontcombobox_set_icon_size(void* self, void* size);
void q_fontcombobox_set_placeholder_text(void* self, const char* placeholderText);
const char* q_fontcombobox_placeholder_text(void* self);
bool q_fontcombobox_is_editable(void* self);
void q_fontcombobox_set_editable(void* self, bool editable);
void q_fontcombobox_set_line_edit(void* self, void* edit);
QLineEdit* q_fontcombobox_line_edit(void* self);
void q_fontcombobox_set_validator(void* self, void* v);
QValidator* q_fontcombobox_validator(void* self);
void q_fontcombobox_set_completer(void* self, void* c);
QCompleter* q_fontcombobox_completer(void* self);
QAbstractItemDelegate* q_fontcombobox_item_delegate(void* self);
void q_fontcombobox_set_item_delegate(void* self, void* delegate);
QAbstractItemModel* q_fontcombobox_model(void* self);
QModelIndex* q_fontcombobox_root_model_index(void* self);
void q_fontcombobox_set_root_model_index(void* self, void* index);
int32_t q_fontcombobox_model_column(void* self);
void q_fontcombobox_set_model_column(void* self, int visibleColumn);
int32_t q_fontcombobox_current_index(void* self);
const char* q_fontcombobox_current_text(void* self);
QVariant* q_fontcombobox_current_data(void* self);
const char* q_fontcombobox_item_text(void* self, int index);
QIcon* q_fontcombobox_item_icon(void* self, int index);
QVariant* q_fontcombobox_item_data(void* self, int index);
void q_fontcombobox_add_item(void* self, const char* text);
void q_fontcombobox_add_item2(void* self, void* icon, const char* text);
void q_fontcombobox_add_items(void* self, const char* texts[]);
void q_fontcombobox_insert_item(void* self, int index, const char* text);
void q_fontcombobox_insert_item2(void* self, int index, void* icon, const char* text);
void q_fontcombobox_insert_items(void* self, int index, const char* texts[]);
void q_fontcombobox_insert_separator(void* self, int index);
void q_fontcombobox_remove_item(void* self, int index);
void q_fontcombobox_set_item_text(void* self, int index, const char* text);
void q_fontcombobox_set_item_icon(void* self, int index, void* icon);
void q_fontcombobox_set_item_data(void* self, int index, void* value);
QAbstractItemView* q_fontcombobox_view(void* self);
void q_fontcombobox_set_view(void* self, void* itemView);
QVariant* q_fontcombobox_input_method_query2(void* self, int64_t query, void* argument);
void q_fontcombobox_clear(void* self);
void q_fontcombobox_clear_edit_text(void* self);
void q_fontcombobox_set_edit_text(void* self, const char* text);
void q_fontcombobox_set_current_index(void* self, int index);
void q_fontcombobox_set_current_text(void* self, const char* text);
void q_fontcombobox_edit_text_changed(void* self, const char* param1);
void q_fontcombobox_on_edit_text_changed(void* self, void (*slot)(void*, const char*));
void q_fontcombobox_activated(void* self, int index);
void q_fontcombobox_on_activated(void* self, void (*slot)(void*, int));
void q_fontcombobox_text_activated(void* self, const char* param1);
void q_fontcombobox_on_text_activated(void* self, void (*slot)(void*, const char*));
void q_fontcombobox_highlighted(void* self, int index);
void q_fontcombobox_on_highlighted(void* self, void (*slot)(void*, int));
void q_fontcombobox_text_highlighted(void* self, const char* param1);
void q_fontcombobox_on_text_highlighted(void* self, void (*slot)(void*, const char*));
void q_fontcombobox_current_index_changed(void* self, int index);
void q_fontcombobox_on_current_index_changed(void* self, void (*slot)(void*, int));
void q_fontcombobox_current_text_changed(void* self, const char* param1);
void q_fontcombobox_on_current_text_changed(void* self, void (*slot)(void*, const char*));
int32_t q_fontcombobox_find_text2(void* self, const char* text, int64_t flags);
int32_t q_fontcombobox_find_data2(void* self, void* data, int role);
int32_t q_fontcombobox_find_data3(void* self, void* data, int role, int64_t flags);
QVariant* q_fontcombobox_current_data1(void* self, int role);
QVariant* q_fontcombobox_item_data2(void* self, int index, int role);
void q_fontcombobox_add_item22(void* self, const char* text, void* userData);
void q_fontcombobox_add_item3(void* self, void* icon, const char* text, void* userData);
void q_fontcombobox_insert_item3(void* self, int index, const char* text, void* userData);
void q_fontcombobox_insert_item4(void* self, int index, void* icon, const char* text, void* userData);
void q_fontcombobox_set_item_data3(void* self, int index, void* value, int role);
uintptr_t q_fontcombobox_win_id(void* self);
void q_fontcombobox_create_win_id(void* self);
uintptr_t q_fontcombobox_internal_win_id(void* self);
uintptr_t q_fontcombobox_effective_win_id(void* self);
QStyle* q_fontcombobox_style(void* self);
void q_fontcombobox_set_style(void* self, void* style);
bool q_fontcombobox_is_top_level(void* self);
bool q_fontcombobox_is_window(void* self);
bool q_fontcombobox_is_modal(void* self);
int64_t q_fontcombobox_window_modality(void* self);
void q_fontcombobox_set_window_modality(void* self, int64_t windowModality);
bool q_fontcombobox_is_enabled(void* self);
bool q_fontcombobox_is_enabled_to(void* self, void* param1);
void q_fontcombobox_set_enabled(void* self, bool enabled);
void q_fontcombobox_set_disabled(void* self, bool disabled);
void q_fontcombobox_set_window_modified(void* self, bool windowModified);
QRect* q_fontcombobox_frame_geometry(void* self);
QRect* q_fontcombobox_geometry(void* self);
QRect* q_fontcombobox_normal_geometry(void* self);
int32_t q_fontcombobox_x(void* self);
int32_t q_fontcombobox_y(void* self);
QPoint* q_fontcombobox_pos(void* self);
QSize* q_fontcombobox_frame_size(void* self);
QSize* q_fontcombobox_size(void* self);
int32_t q_fontcombobox_width(void* self);
int32_t q_fontcombobox_height(void* self);
QRect* q_fontcombobox_rect(void* self);
QRect* q_fontcombobox_children_rect(void* self);
QRegion* q_fontcombobox_children_region(void* self);
QSize* q_fontcombobox_minimum_size(void* self);
QSize* q_fontcombobox_maximum_size(void* self);
int32_t q_fontcombobox_minimum_width(void* self);
int32_t q_fontcombobox_minimum_height(void* self);
int32_t q_fontcombobox_maximum_width(void* self);
int32_t q_fontcombobox_maximum_height(void* self);
void q_fontcombobox_set_minimum_size(void* self, void* minimumSize);
void q_fontcombobox_set_minimum_size2(void* self, int minw, int minh);
void q_fontcombobox_set_maximum_size(void* self, void* maximumSize);
void q_fontcombobox_set_maximum_size2(void* self, int maxw, int maxh);
void q_fontcombobox_set_minimum_width(void* self, int minw);
void q_fontcombobox_set_minimum_height(void* self, int minh);
void q_fontcombobox_set_maximum_width(void* self, int maxw);
void q_fontcombobox_set_maximum_height(void* self, int maxh);
QSize* q_fontcombobox_size_increment(void* self);
void q_fontcombobox_set_size_increment(void* self, void* sizeIncrement);
void q_fontcombobox_set_size_increment2(void* self, int w, int h);
QSize* q_fontcombobox_base_size(void* self);
void q_fontcombobox_set_base_size(void* self, void* baseSize);
void q_fontcombobox_set_base_size2(void* self, int basew, int baseh);
void q_fontcombobox_set_fixed_size(void* self, void* fixedSize);
void q_fontcombobox_set_fixed_size2(void* self, int w, int h);
void q_fontcombobox_set_fixed_width(void* self, int w);
void q_fontcombobox_set_fixed_height(void* self, int h);
QPointF* q_fontcombobox_map_to_global(void* self, void* param1);
QPoint* q_fontcombobox_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_fontcombobox_map_from_global(void* self, void* param1);
QPoint* q_fontcombobox_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_fontcombobox_map_to_parent(void* self, void* param1);
QPoint* q_fontcombobox_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_fontcombobox_map_from_parent(void* self, void* param1);
QPoint* q_fontcombobox_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_fontcombobox_map_to(void* self, void* param1, void* param2);
QPoint* q_fontcombobox_map_to2(void* self, void* param1, void* param2);
QPointF* q_fontcombobox_map_from(void* self, void* param1, void* param2);
QPoint* q_fontcombobox_map_from2(void* self, void* param1, void* param2);
QWidget* q_fontcombobox_window(void* self);
QWidget* q_fontcombobox_native_parent_widget(void* self);
QWidget* q_fontcombobox_top_level_widget(void* self);
QPalette* q_fontcombobox_palette(void* self);
void q_fontcombobox_set_palette(void* self, void* palette);
void q_fontcombobox_set_background_role(void* self, int64_t backgroundRole);
int64_t q_fontcombobox_background_role(void* self);
void q_fontcombobox_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_fontcombobox_foreground_role(void* self);
QFont* q_fontcombobox_font(void* self);
void q_fontcombobox_set_font(void* self, void* font);
QFontMetrics* q_fontcombobox_font_metrics(void* self);
QFontInfo* q_fontcombobox_font_info(void* self);
QCursor* q_fontcombobox_cursor(void* self);
void q_fontcombobox_set_cursor(void* self, void* cursor);
void q_fontcombobox_unset_cursor(void* self);
void q_fontcombobox_set_mouse_tracking(void* self, bool enable);
bool q_fontcombobox_has_mouse_tracking(void* self);
bool q_fontcombobox_under_mouse(void* self);
void q_fontcombobox_set_tablet_tracking(void* self, bool enable);
bool q_fontcombobox_has_tablet_tracking(void* self);
void q_fontcombobox_set_mask(void* self, void* mask);
void q_fontcombobox_set_mask_with_mask(void* self, void* mask);
QRegion* q_fontcombobox_mask(void* self);
void q_fontcombobox_clear_mask(void* self);
void q_fontcombobox_render(void* self, void* target);
void q_fontcombobox_render_with_painter(void* self, void* painter);
QPixmap* q_fontcombobox_grab(void* self);
QGraphicsEffect* q_fontcombobox_graphics_effect(void* self);
void q_fontcombobox_set_graphics_effect(void* self, void* effect);
void q_fontcombobox_grab_gesture(void* self, int64_t typeVal);
void q_fontcombobox_ungrab_gesture(void* self, int64_t typeVal);
void q_fontcombobox_set_window_title(void* self, const char* windowTitle);
void q_fontcombobox_set_style_sheet(void* self, const char* styleSheet);
const char* q_fontcombobox_style_sheet(void* self);
const char* q_fontcombobox_window_title(void* self);
void q_fontcombobox_set_window_icon(void* self, void* icon);
QIcon* q_fontcombobox_window_icon(void* self);
void q_fontcombobox_set_window_icon_text(void* self, const char* windowIconText);
const char* q_fontcombobox_window_icon_text(void* self);
void q_fontcombobox_set_window_role(void* self, const char* windowRole);
const char* q_fontcombobox_window_role(void* self);
void q_fontcombobox_set_window_file_path(void* self, const char* filePath);
const char* q_fontcombobox_window_file_path(void* self);
void q_fontcombobox_set_window_opacity(void* self, double level);
double q_fontcombobox_window_opacity(void* self);
bool q_fontcombobox_is_window_modified(void* self);
void q_fontcombobox_set_tool_tip(void* self, const char* toolTip);
const char* q_fontcombobox_tool_tip(void* self);
void q_fontcombobox_set_tool_tip_duration(void* self, int msec);
int32_t q_fontcombobox_tool_tip_duration(void* self);
void q_fontcombobox_set_status_tip(void* self, const char* statusTip);
const char* q_fontcombobox_status_tip(void* self);
void q_fontcombobox_set_whats_this(void* self, const char* whatsThis);
const char* q_fontcombobox_whats_this(void* self);
const char* q_fontcombobox_accessible_name(void* self);
void q_fontcombobox_set_accessible_name(void* self, const char* name);
const char* q_fontcombobox_accessible_description(void* self);
void q_fontcombobox_set_accessible_description(void* self, const char* description);
void q_fontcombobox_set_layout_direction(void* self, int64_t direction);
int64_t q_fontcombobox_layout_direction(void* self);
void q_fontcombobox_unset_layout_direction(void* self);
void q_fontcombobox_set_locale(void* self, void* locale);
QLocale* q_fontcombobox_locale(void* self);
void q_fontcombobox_unset_locale(void* self);
bool q_fontcombobox_is_right_to_left(void* self);
bool q_fontcombobox_is_left_to_right(void* self);
void q_fontcombobox_set_focus(void* self);
bool q_fontcombobox_is_active_window(void* self);
void q_fontcombobox_activate_window(void* self);
void q_fontcombobox_clear_focus(void* self);
void q_fontcombobox_set_focus_with_reason(void* self, int64_t reason);
int64_t q_fontcombobox_focus_policy(void* self);
void q_fontcombobox_set_focus_policy(void* self, int64_t policy);
bool q_fontcombobox_has_focus(void* self);
void q_fontcombobox_set_tab_order(void* param1, void* param2);
void q_fontcombobox_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_fontcombobox_focus_proxy(void* self);
int64_t q_fontcombobox_context_menu_policy(void* self);
void q_fontcombobox_set_context_menu_policy(void* self, int64_t policy);
void q_fontcombobox_grab_mouse(void* self);
void q_fontcombobox_grab_mouse_with_q_cursor(void* self, void* param1);
void q_fontcombobox_release_mouse(void* self);
void q_fontcombobox_grab_keyboard(void* self);
void q_fontcombobox_release_keyboard(void* self);
int32_t q_fontcombobox_grab_shortcut(void* self, void* key);
void q_fontcombobox_release_shortcut(void* self, int id);
void q_fontcombobox_set_shortcut_enabled(void* self, int id);
void q_fontcombobox_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_fontcombobox_mouse_grabber();
QWidget* q_fontcombobox_keyboard_grabber();
bool q_fontcombobox_updates_enabled(void* self);
void q_fontcombobox_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_fontcombobox_graphics_proxy_widget(void* self);
void q_fontcombobox_update(void* self);
void q_fontcombobox_repaint(void* self);
void q_fontcombobox_update2(void* self, int x, int y, int w, int h);
void q_fontcombobox_update_with_q_rect(void* self, void* param1);
void q_fontcombobox_update_with_q_region(void* self, void* param1);
void q_fontcombobox_repaint2(void* self, int x, int y, int w, int h);
void q_fontcombobox_repaint_with_q_rect(void* self, void* param1);
void q_fontcombobox_repaint_with_q_region(void* self, void* param1);
void q_fontcombobox_set_hidden(void* self, bool hidden);
void q_fontcombobox_show(void* self);
void q_fontcombobox_hide(void* self);
void q_fontcombobox_show_minimized(void* self);
void q_fontcombobox_show_maximized(void* self);
void q_fontcombobox_show_full_screen(void* self);
void q_fontcombobox_show_normal(void* self);
bool q_fontcombobox_close(void* self);
void q_fontcombobox_raise(void* self);
void q_fontcombobox_lower(void* self);
void q_fontcombobox_stack_under(void* self, void* param1);
void q_fontcombobox_move(void* self, int x, int y);
void q_fontcombobox_move_with_q_point(void* self, void* param1);
void q_fontcombobox_resize(void* self, int w, int h);
void q_fontcombobox_resize_with_q_size(void* self, void* param1);
void q_fontcombobox_set_geometry(void* self, int x, int y, int w, int h);
void q_fontcombobox_set_geometry_with_geometry(void* self, void* geometry);
char* q_fontcombobox_save_geometry(void* self);
bool q_fontcombobox_restore_geometry(void* self, const char* geometry);
void q_fontcombobox_adjust_size(void* self);
bool q_fontcombobox_is_visible(void* self);
bool q_fontcombobox_is_visible_to(void* self, void* param1);
bool q_fontcombobox_is_hidden(void* self);
bool q_fontcombobox_is_minimized(void* self);
bool q_fontcombobox_is_maximized(void* self);
bool q_fontcombobox_is_full_screen(void* self);
int64_t q_fontcombobox_window_state(void* self);
void q_fontcombobox_set_window_state(void* self, int64_t state);
void q_fontcombobox_override_window_state(void* self, int64_t state);
QSizePolicy* q_fontcombobox_size_policy(void* self);
void q_fontcombobox_set_size_policy(void* self, void* sizePolicy);
void q_fontcombobox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_fontcombobox_visible_region(void* self);
void q_fontcombobox_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_fontcombobox_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_fontcombobox_contents_margins(void* self);
QRect* q_fontcombobox_contents_rect(void* self);
QLayout* q_fontcombobox_layout(void* self);
void q_fontcombobox_set_layout(void* self, void* layout);
void q_fontcombobox_update_geometry(void* self);
void q_fontcombobox_set_parent(void* self, void* parent);
void q_fontcombobox_set_parent2(void* self, void* parent, int64_t f);
void q_fontcombobox_scroll(void* self, int dx, int dy);
void q_fontcombobox_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_fontcombobox_focus_widget(void* self);
QWidget* q_fontcombobox_next_in_focus_chain(void* self);
QWidget* q_fontcombobox_previous_in_focus_chain(void* self);
bool q_fontcombobox_accept_drops(void* self);
void q_fontcombobox_set_accept_drops(void* self, bool on);
void q_fontcombobox_add_action(void* self, void* action);
void q_fontcombobox_add_actions(void* self, void* actions[]);
void q_fontcombobox_insert_actions(void* self, void* before, void* actions[]);
void q_fontcombobox_insert_action(void* self, void* before, void* action);
void q_fontcombobox_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_fontcombobox_actions(void* self);
QAction* q_fontcombobox_add_action_with_text(void* self, const char* text);
QAction* q_fontcombobox_add_action2(void* self, void* icon, const char* text);
QAction* q_fontcombobox_add_action3(void* self, const char* text, void* shortcut);
QAction* q_fontcombobox_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_fontcombobox_parent_widget(void* self);
void q_fontcombobox_set_window_flags(void* self, int64_t typeVal);
int64_t q_fontcombobox_window_flags(void* self);
void q_fontcombobox_set_window_flag(void* self, int64_t param1);
void q_fontcombobox_override_window_flags(void* self, int64_t typeVal);
int64_t q_fontcombobox_window_type(void* self);
QWidget* q_fontcombobox_find(uint64_t param1);
QWidget* q_fontcombobox_child_at(void* self, int x, int y);
QWidget* q_fontcombobox_child_at_with_q_point(void* self, void* p);
void q_fontcombobox_set_attribute(void* self, int64_t param1);
bool q_fontcombobox_test_attribute(void* self, int64_t param1);
void q_fontcombobox_ensure_polished(void* self);
bool q_fontcombobox_is_ancestor_of(void* self, void* child);
bool q_fontcombobox_auto_fill_background(void* self);
void q_fontcombobox_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_fontcombobox_backing_store(void* self);
QWindow* q_fontcombobox_window_handle(void* self);
QScreen* q_fontcombobox_screen(void* self);
void q_fontcombobox_set_screen(void* self, void* screen);
QWidget* q_fontcombobox_create_window_container(void* window);
void q_fontcombobox_window_title_changed(void* self, const char* title);
void q_fontcombobox_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_fontcombobox_window_icon_changed(void* self, void* icon);
void q_fontcombobox_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_fontcombobox_window_icon_text_changed(void* self, const char* iconText);
void q_fontcombobox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_fontcombobox_custom_context_menu_requested(void* self, void* pos);
void q_fontcombobox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_fontcombobox_input_method_hints(void* self);
void q_fontcombobox_set_input_method_hints(void* self, int64_t hints);
void q_fontcombobox_render2(void* self, void* target, void* targetOffset);
void q_fontcombobox_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_fontcombobox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_fontcombobox_render22(void* self, void* painter, void* targetOffset);
void q_fontcombobox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_fontcombobox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_fontcombobox_grab1(void* self, void* rectangle);
void q_fontcombobox_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_fontcombobox_grab_shortcut2(void* self, void* key, int64_t context);
void q_fontcombobox_set_shortcut_enabled2(void* self, int id, bool enable);
void q_fontcombobox_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_fontcombobox_set_window_flag2(void* self, int64_t param1, bool on);
void q_fontcombobox_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_fontcombobox_create_window_container2(void* window, void* parent);
QWidget* q_fontcombobox_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_fontcombobox_object_name(void* self);
void q_fontcombobox_set_object_name(void* self, const char* name);
bool q_fontcombobox_is_widget_type(void* self);
bool q_fontcombobox_is_window_type(void* self);
bool q_fontcombobox_is_quick_item_type(void* self);
bool q_fontcombobox_signals_blocked(void* self);
bool q_fontcombobox_block_signals(void* self, bool b);
QThread* q_fontcombobox_thread(void* self);
void q_fontcombobox_move_to_thread(void* self, void* thread);
int32_t q_fontcombobox_start_timer(void* self, int interval);
void q_fontcombobox_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_fontcombobox_children(void* self);
void q_fontcombobox_install_event_filter(void* self, void* filterObj);
void q_fontcombobox_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_fontcombobox_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_fontcombobox_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_fontcombobox_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_fontcombobox_disconnect_with_q_meta_object_connection(void* param1);
void q_fontcombobox_dump_object_tree(void* self);
void q_fontcombobox_dump_object_info(void* self);
bool q_fontcombobox_set_property(void* self, const char* name, void* value);
QVariant* q_fontcombobox_property(void* self, const char* name);
const char** q_fontcombobox_dynamic_property_names(void* self);
QBindingStorage* q_fontcombobox_binding_storage(void* self);
QBindingStorage* q_fontcombobox_binding_storage2(void* self);
void q_fontcombobox_destroyed(void* self);
void q_fontcombobox_on_destroyed(void* self, void (*slot)(void*));
QObject* q_fontcombobox_parent(void* self);
bool q_fontcombobox_inherits(void* self, const char* classname);
void q_fontcombobox_delete_later(void* self);
int32_t q_fontcombobox_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_fontcombobox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_fontcombobox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_fontcombobox_destroyed1(void* self, void* param1);
void q_fontcombobox_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_fontcombobox_painting_active(void* self);
int32_t q_fontcombobox_width_m_m(void* self);
int32_t q_fontcombobox_height_m_m(void* self);
int32_t q_fontcombobox_logical_dpi_x(void* self);
int32_t q_fontcombobox_logical_dpi_y(void* self);
int32_t q_fontcombobox_physical_dpi_x(void* self);
int32_t q_fontcombobox_physical_dpi_y(void* self);
double q_fontcombobox_device_pixel_ratio(void* self);
double q_fontcombobox_device_pixel_ratio_f(void* self);
int32_t q_fontcombobox_color_count(void* self);
int32_t q_fontcombobox_depth(void* self);
double q_fontcombobox_device_pixel_ratio_f_scale();
void q_fontcombobox_set_model(void* self, void* model);
void q_fontcombobox_qbase_set_model(void* self, void* model);
void q_fontcombobox_on_set_model(void* self, void (*slot)(void*, void*));
QSize* q_fontcombobox_minimum_size_hint(void* self);
QSize* q_fontcombobox_qbase_minimum_size_hint(void* self);
void q_fontcombobox_on_minimum_size_hint(void* self, QSize* (*slot)());
void q_fontcombobox_show_popup(void* self);
void q_fontcombobox_qbase_show_popup(void* self);
void q_fontcombobox_on_show_popup(void* self, void (*slot)());
void q_fontcombobox_hide_popup(void* self);
void q_fontcombobox_qbase_hide_popup(void* self);
void q_fontcombobox_on_hide_popup(void* self, void (*slot)());
QVariant* q_fontcombobox_input_method_query(void* self, int64_t param1);
QVariant* q_fontcombobox_qbase_input_method_query(void* self, int64_t param1);
void q_fontcombobox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
void q_fontcombobox_focus_in_event(void* self, void* e);
void q_fontcombobox_qbase_focus_in_event(void* self, void* e);
void q_fontcombobox_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_focus_out_event(void* self, void* e);
void q_fontcombobox_qbase_focus_out_event(void* self, void* e);
void q_fontcombobox_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_change_event(void* self, void* e);
void q_fontcombobox_qbase_change_event(void* self, void* e);
void q_fontcombobox_on_change_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_resize_event(void* self, void* e);
void q_fontcombobox_qbase_resize_event(void* self, void* e);
void q_fontcombobox_on_resize_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_paint_event(void* self, void* e);
void q_fontcombobox_qbase_paint_event(void* self, void* e);
void q_fontcombobox_on_paint_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_show_event(void* self, void* e);
void q_fontcombobox_qbase_show_event(void* self, void* e);
void q_fontcombobox_on_show_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_hide_event(void* self, void* e);
void q_fontcombobox_qbase_hide_event(void* self, void* e);
void q_fontcombobox_on_hide_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_mouse_press_event(void* self, void* e);
void q_fontcombobox_qbase_mouse_press_event(void* self, void* e);
void q_fontcombobox_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_mouse_release_event(void* self, void* e);
void q_fontcombobox_qbase_mouse_release_event(void* self, void* e);
void q_fontcombobox_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_key_press_event(void* self, void* e);
void q_fontcombobox_qbase_key_press_event(void* self, void* e);
void q_fontcombobox_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_key_release_event(void* self, void* e);
void q_fontcombobox_qbase_key_release_event(void* self, void* e);
void q_fontcombobox_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_wheel_event(void* self, void* e);
void q_fontcombobox_qbase_wheel_event(void* self, void* e);
void q_fontcombobox_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_context_menu_event(void* self, void* e);
void q_fontcombobox_qbase_context_menu_event(void* self, void* e);
void q_fontcombobox_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_input_method_event(void* self, void* param1);
void q_fontcombobox_qbase_input_method_event(void* self, void* param1);
void q_fontcombobox_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_init_style_option(void* self, void* option);
void q_fontcombobox_qbase_init_style_option(void* self, void* option);
void q_fontcombobox_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_fontcombobox_dev_type(void* self);
int32_t q_fontcombobox_qbase_dev_type(void* self);
void q_fontcombobox_on_dev_type(void* self, int32_t (*slot)());
void q_fontcombobox_set_visible(void* self, bool visible);
void q_fontcombobox_qbase_set_visible(void* self, bool visible);
void q_fontcombobox_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_fontcombobox_height_for_width(void* self, int param1);
int32_t q_fontcombobox_qbase_height_for_width(void* self, int param1);
void q_fontcombobox_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_fontcombobox_has_height_for_width(void* self);
bool q_fontcombobox_qbase_has_height_for_width(void* self);
void q_fontcombobox_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_fontcombobox_paint_engine(void* self);
QPaintEngine* q_fontcombobox_qbase_paint_engine(void* self);
void q_fontcombobox_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_fontcombobox_mouse_double_click_event(void* self, void* event);
void q_fontcombobox_qbase_mouse_double_click_event(void* self, void* event);
void q_fontcombobox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_mouse_move_event(void* self, void* event);
void q_fontcombobox_qbase_mouse_move_event(void* self, void* event);
void q_fontcombobox_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_enter_event(void* self, void* event);
void q_fontcombobox_qbase_enter_event(void* self, void* event);
void q_fontcombobox_on_enter_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_leave_event(void* self, void* event);
void q_fontcombobox_qbase_leave_event(void* self, void* event);
void q_fontcombobox_on_leave_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_move_event(void* self, void* event);
void q_fontcombobox_qbase_move_event(void* self, void* event);
void q_fontcombobox_on_move_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_close_event(void* self, void* event);
void q_fontcombobox_qbase_close_event(void* self, void* event);
void q_fontcombobox_on_close_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_tablet_event(void* self, void* event);
void q_fontcombobox_qbase_tablet_event(void* self, void* event);
void q_fontcombobox_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_action_event(void* self, void* event);
void q_fontcombobox_qbase_action_event(void* self, void* event);
void q_fontcombobox_on_action_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_drag_enter_event(void* self, void* event);
void q_fontcombobox_qbase_drag_enter_event(void* self, void* event);
void q_fontcombobox_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_drag_move_event(void* self, void* event);
void q_fontcombobox_qbase_drag_move_event(void* self, void* event);
void q_fontcombobox_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_drag_leave_event(void* self, void* event);
void q_fontcombobox_qbase_drag_leave_event(void* self, void* event);
void q_fontcombobox_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_drop_event(void* self, void* event);
void q_fontcombobox_qbase_drop_event(void* self, void* event);
void q_fontcombobox_on_drop_event(void* self, void (*slot)(void*, void*));
bool q_fontcombobox_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_fontcombobox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_fontcombobox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_fontcombobox_metric(void* self, int64_t param1);
int32_t q_fontcombobox_qbase_metric(void* self, int64_t param1);
void q_fontcombobox_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_fontcombobox_init_painter(void* self, void* painter);
void q_fontcombobox_qbase_init_painter(void* self, void* painter);
void q_fontcombobox_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_fontcombobox_redirected(void* self, void* offset);
QPaintDevice* q_fontcombobox_qbase_redirected(void* self, void* offset);
void q_fontcombobox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_fontcombobox_shared_painter(void* self);
QPainter* q_fontcombobox_qbase_shared_painter(void* self);
void q_fontcombobox_on_shared_painter(void* self, QPainter* (*slot)());
bool q_fontcombobox_focus_next_prev_child(void* self, bool next);
bool q_fontcombobox_qbase_focus_next_prev_child(void* self, bool next);
void q_fontcombobox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_fontcombobox_event_filter(void* self, void* watched, void* event);
bool q_fontcombobox_qbase_event_filter(void* self, void* watched, void* event);
void q_fontcombobox_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_fontcombobox_timer_event(void* self, void* event);
void q_fontcombobox_qbase_timer_event(void* self, void* event);
void q_fontcombobox_on_timer_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_child_event(void* self, void* event);
void q_fontcombobox_qbase_child_event(void* self, void* event);
void q_fontcombobox_on_child_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_custom_event(void* self, void* event);
void q_fontcombobox_qbase_custom_event(void* self, void* event);
void q_fontcombobox_on_custom_event(void* self, void (*slot)(void*, void*));
void q_fontcombobox_connect_notify(void* self, void* signal);
void q_fontcombobox_qbase_connect_notify(void* self, void* signal);
void q_fontcombobox_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_fontcombobox_disconnect_notify(void* self, void* signal);
void q_fontcombobox_qbase_disconnect_notify(void* self, void* signal);
void q_fontcombobox_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_fontcombobox_update_micro_focus(void* self);
void q_fontcombobox_qbase_update_micro_focus(void* self);
void q_fontcombobox_on_update_micro_focus(void* self, void (*slot)());
void q_fontcombobox_create(void* self);
void q_fontcombobox_qbase_create(void* self);
void q_fontcombobox_on_create(void* self, void (*slot)());
void q_fontcombobox_destroy(void* self);
void q_fontcombobox_qbase_destroy(void* self);
void q_fontcombobox_on_destroy(void* self, void (*slot)());
bool q_fontcombobox_focus_next_child(void* self);
bool q_fontcombobox_qbase_focus_next_child(void* self);
void q_fontcombobox_on_focus_next_child(void* self, bool (*slot)());
bool q_fontcombobox_focus_previous_child(void* self);
bool q_fontcombobox_qbase_focus_previous_child(void* self);
void q_fontcombobox_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_fontcombobox_sender(void* self);
QObject* q_fontcombobox_qbase_sender(void* self);
void q_fontcombobox_on_sender(void* self, QObject* (*slot)());
int32_t q_fontcombobox_sender_signal_index(void* self);
int32_t q_fontcombobox_qbase_sender_signal_index(void* self);
void q_fontcombobox_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_fontcombobox_receivers(void* self, const char* signal);
int32_t q_fontcombobox_qbase_receivers(void* self, const char* signal);
void q_fontcombobox_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_fontcombobox_is_signal_connected(void* self, void* signal);
bool q_fontcombobox_qbase_is_signal_connected(void* self, void* signal);
void q_fontcombobox_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_fontcombobox_delete(void* self);

/// https://doc.qt.io/qt-6/qfontcombobox.html#types

typedef enum {
    QFONTCOMBOBOX_FONTFILTER_ALLFONTS = 0,
    QFONTCOMBOBOX_FONTFILTER_SCALABLEFONTS = 1,
    QFONTCOMBOBOX_FONTFILTER_NONSCALABLEFONTS = 2,
    QFONTCOMBOBOX_FONTFILTER_MONOSPACEDFONTS = 4,
    QFONTCOMBOBOX_FONTFILTER_PROPORTIONALFONTS = 8
} QFontComboBox__FontFilter;

#endif
