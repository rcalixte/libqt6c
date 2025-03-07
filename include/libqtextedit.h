#pragma once
#ifndef SRCQT6C_LIBQTEXTEDIT_H
#define SRCQT6C_LIBQTEXTEDIT_H

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
#include "libqcolor.h"
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
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpagedpaintdevice.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqregularexpression.h"
#include "libqscreen.h"
#include "libqscrollbar.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqtextformat.h"
#include "libqtextcursor.h"
#include "libqtextdocument.h"
#include "libqthread.h"
#include "libqurl.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

QTextEdit* q_textedit_new(void* parent);
QTextEdit* q_textedit_new2();
QTextEdit* q_textedit_new3(const char* text);
QTextEdit* q_textedit_new4(const char* text, void* parent);
QMetaObject* q_textedit_meta_object(void* self);
void* q_textedit_metacast(void* self, const char* param1);
int32_t q_textedit_metacall(void* self, int64_t param1, int param2, void* param3);
void q_textedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_textedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textedit_tr(const char* s);
void q_textedit_set_document(void* self, void* document);
QTextDocument* q_textedit_document(void* self);
void q_textedit_set_placeholder_text(void* self, const char* placeholderText);
const char* q_textedit_placeholder_text(void* self);
void q_textedit_set_text_cursor(void* self, void* cursor);
QTextCursor* q_textedit_text_cursor(void* self);
bool q_textedit_is_read_only(void* self);
void q_textedit_set_read_only(void* self, bool ro);
void q_textedit_set_text_interaction_flags(void* self, int64_t flags);
int64_t q_textedit_text_interaction_flags(void* self);
double q_textedit_font_point_size(void* self);
const char* q_textedit_font_family(void* self);
int32_t q_textedit_font_weight(void* self);
bool q_textedit_font_underline(void* self);
bool q_textedit_font_italic(void* self);
QColor* q_textedit_text_color(void* self);
QColor* q_textedit_text_background_color(void* self);
QFont* q_textedit_current_font(void* self);
int64_t q_textedit_alignment(void* self);
void q_textedit_merge_current_char_format(void* self, void* modifier);
void q_textedit_set_current_char_format(void* self, void* format);
QTextCharFormat* q_textedit_current_char_format(void* self);
int64_t q_textedit_auto_formatting(void* self);
void q_textedit_set_auto_formatting(void* self, int64_t features);
bool q_textedit_tab_changes_focus(void* self);
void q_textedit_set_tab_changes_focus(void* self, bool b);
void q_textedit_set_document_title(void* self, const char* title);
const char* q_textedit_document_title(void* self);
bool q_textedit_is_undo_redo_enabled(void* self);
void q_textedit_set_undo_redo_enabled(void* self, bool enable);
int64_t q_textedit_line_wrap_mode(void* self);
void q_textedit_set_line_wrap_mode(void* self, int64_t mode);
int32_t q_textedit_line_wrap_column_or_width(void* self);
void q_textedit_set_line_wrap_column_or_width(void* self, int w);
int64_t q_textedit_word_wrap_mode(void* self);
void q_textedit_set_word_wrap_mode(void* self, int64_t policy);
bool q_textedit_find(void* self, const char* exp);
bool q_textedit_find_with_exp(void* self, void* exp);
const char* q_textedit_to_plain_text(void* self);
const char* q_textedit_to_html(void* self);
const char* q_textedit_to_markdown(void* self);
void q_textedit_ensure_cursor_visible(void* self);
QVariant* q_textedit_load_resource(void* self, int typeVal, void* name);
void q_textedit_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*));
QVariant* q_textedit_qbase_load_resource(void* self, int typeVal, void* name);
QMenu* q_textedit_create_standard_context_menu(void* self);
QMenu* q_textedit_create_standard_context_menu_with_position(void* self, void* position);
QTextCursor* q_textedit_cursor_for_position(void* self, void* pos);
QRect* q_textedit_cursor_rect(void* self, void* cursor);
QRect* q_textedit_cursor_rect2(void* self);
const char* q_textedit_anchor_at(void* self, void* pos);
bool q_textedit_overwrite_mode(void* self);
void q_textedit_set_overwrite_mode(void* self, bool overwrite);
double q_textedit_tab_stop_distance(void* self);
void q_textedit_set_tab_stop_distance(void* self, double distance);
int32_t q_textedit_cursor_width(void* self);
void q_textedit_set_cursor_width(void* self, int width);
bool q_textedit_accept_rich_text(void* self);
void q_textedit_set_accept_rich_text(void* self, bool accept);
void q_textedit_set_extra_selections(void* self, void* selections[]);
libqt_list /* of QTextEdit__ExtraSelection* */ q_textedit_extra_selections(void* self);
void q_textedit_move_cursor(void* self, int64_t operation);
bool q_textedit_can_paste(void* self);
void q_textedit_print(void* self, void* printer);
QVariant* q_textedit_input_method_query(void* self, int64_t property);
void q_textedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));
QVariant* q_textedit_qbase_input_method_query(void* self, int64_t property);
QVariant* q_textedit_input_method_query2(void* self, int64_t query, void* argument);
void q_textedit_set_font_point_size(void* self, double s);
void q_textedit_set_font_family(void* self, const char* fontFamily);
void q_textedit_set_font_weight(void* self, int w);
void q_textedit_set_font_underline(void* self, bool b);
void q_textedit_set_font_italic(void* self, bool b);
void q_textedit_set_text_color(void* self, void* c);
void q_textedit_set_text_background_color(void* self, void* c);
void q_textedit_set_current_font(void* self, void* f);
void q_textedit_set_alignment(void* self, int64_t a);
void q_textedit_set_plain_text(void* self, const char* text);
void q_textedit_set_html(void* self, const char* text);
void q_textedit_set_markdown(void* self, const char* markdown);
void q_textedit_set_text(void* self, const char* text);
void q_textedit_cut(void* self);
void q_textedit_copy(void* self);
void q_textedit_paste(void* self);
void q_textedit_undo(void* self);
void q_textedit_redo(void* self);
void q_textedit_clear(void* self);
void q_textedit_select_all(void* self);
void q_textedit_insert_plain_text(void* self, const char* text);
void q_textedit_insert_html(void* self, const char* text);
void q_textedit_append(void* self, const char* text);
void q_textedit_scroll_to_anchor(void* self, const char* name);
void q_textedit_zoom_in(void* self);
void q_textedit_zoom_out(void* self);
void q_textedit_text_changed(void* self);
void q_textedit_on_text_changed(void* self, void (*slot)(void*));
void q_textedit_undo_available(void* self, bool b);
void q_textedit_on_undo_available(void* self, void (*slot)(void*, bool));
void q_textedit_redo_available(void* self, bool b);
void q_textedit_on_redo_available(void* self, void (*slot)(void*, bool));
void q_textedit_current_char_format_changed(void* self, void* format);
void q_textedit_on_current_char_format_changed(void* self, void (*slot)(void*, void*));
void q_textedit_copy_available(void* self, bool b);
void q_textedit_on_copy_available(void* self, void (*slot)(void*, bool));
void q_textedit_selection_changed(void* self);
void q_textedit_on_selection_changed(void* self, void (*slot)(void*));
void q_textedit_cursor_position_changed(void* self);
void q_textedit_on_cursor_position_changed(void* self, void (*slot)(void*));
bool q_textedit_event(void* self, void* e);
void q_textedit_on_event(void* self, bool (*slot)(void*, void*));
bool q_textedit_qbase_event(void* self, void* e);
void q_textedit_timer_event(void* self, void* e);
void q_textedit_on_timer_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_timer_event(void* self, void* e);
void q_textedit_key_press_event(void* self, void* e);
void q_textedit_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_key_press_event(void* self, void* e);
void q_textedit_key_release_event(void* self, void* e);
void q_textedit_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_key_release_event(void* self, void* e);
void q_textedit_resize_event(void* self, void* e);
void q_textedit_on_resize_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_resize_event(void* self, void* e);
void q_textedit_paint_event(void* self, void* e);
void q_textedit_on_paint_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_paint_event(void* self, void* e);
void q_textedit_mouse_press_event(void* self, void* e);
void q_textedit_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_mouse_press_event(void* self, void* e);
void q_textedit_mouse_move_event(void* self, void* e);
void q_textedit_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_mouse_move_event(void* self, void* e);
void q_textedit_mouse_release_event(void* self, void* e);
void q_textedit_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_mouse_release_event(void* self, void* e);
void q_textedit_mouse_double_click_event(void* self, void* e);
void q_textedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_mouse_double_click_event(void* self, void* e);
bool q_textedit_focus_next_prev_child(void* self, bool next);
void q_textedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
bool q_textedit_qbase_focus_next_prev_child(void* self, bool next);
void q_textedit_context_menu_event(void* self, void* e);
void q_textedit_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_context_menu_event(void* self, void* e);
void q_textedit_drag_enter_event(void* self, void* e);
void q_textedit_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_drag_enter_event(void* self, void* e);
void q_textedit_drag_leave_event(void* self, void* e);
void q_textedit_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_drag_leave_event(void* self, void* e);
void q_textedit_drag_move_event(void* self, void* e);
void q_textedit_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_drag_move_event(void* self, void* e);
void q_textedit_drop_event(void* self, void* e);
void q_textedit_on_drop_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_drop_event(void* self, void* e);
void q_textedit_focus_in_event(void* self, void* e);
void q_textedit_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_focus_in_event(void* self, void* e);
void q_textedit_focus_out_event(void* self, void* e);
void q_textedit_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_focus_out_event(void* self, void* e);
void q_textedit_show_event(void* self, void* param1);
void q_textedit_on_show_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_show_event(void* self, void* param1);
void q_textedit_change_event(void* self, void* e);
void q_textedit_on_change_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_change_event(void* self, void* e);
void q_textedit_wheel_event(void* self, void* e);
void q_textedit_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_wheel_event(void* self, void* e);
QMimeData* q_textedit_create_mime_data_from_selection(void* self);
void q_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)());
QMimeData* q_textedit_qbase_create_mime_data_from_selection(void* self);
bool q_textedit_can_insert_from_mime_data(void* self, void* source);
void q_textedit_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*));
bool q_textedit_qbase_can_insert_from_mime_data(void* self, void* source);
void q_textedit_insert_from_mime_data(void* self, void* source);
void q_textedit_on_insert_from_mime_data(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_insert_from_mime_data(void* self, void* source);
void q_textedit_input_method_event(void* self, void* param1);
void q_textedit_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_input_method_event(void* self, void* param1);
void q_textedit_scroll_contents_by(void* self, int dx, int dy);
void q_textedit_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
void q_textedit_qbase_scroll_contents_by(void* self, int dx, int dy);
void q_textedit_do_set_text_cursor(void* self, void* cursor);
void q_textedit_on_do_set_text_cursor(void* self, void (*slot)(void*, void*));
void q_textedit_qbase_do_set_text_cursor(void* self, void* cursor);
void q_textedit_zoom_in_f(void* self, float range);
void q_textedit_on_zoom_in_f(void* self, void (*slot)(void*, float));
void q_textedit_qbase_zoom_in_f(void* self, float range);
const char* q_textedit_tr2(const char* s, const char* c);
const char* q_textedit_tr3(const char* s, const char* c, int n);
bool q_textedit_find2(void* self, const char* exp, int64_t options);
bool q_textedit_find22(void* self, void* exp, int64_t options);
const char* q_textedit_to_markdown1(void* self, int64_t features);
void q_textedit_move_cursor2(void* self, int64_t operation, int64_t mode);
void q_textedit_zoom_in1(void* self, int range);
void q_textedit_zoom_out1(void* self, int range);
int64_t q_textedit_vertical_scroll_bar_policy(void* self);
void q_textedit_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_textedit_vertical_scroll_bar(void* self);
void q_textedit_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_textedit_horizontal_scroll_bar_policy(void* self);
void q_textedit_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_textedit_horizontal_scroll_bar(void* self);
void q_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_textedit_corner_widget(void* self);
void q_textedit_set_corner_widget(void* self, void* widget);
void q_textedit_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_textedit_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_textedit_viewport(void* self);
void q_textedit_set_viewport(void* self, void* widget);
QSize* q_textedit_maximum_viewport_size(void* self);
int64_t q_textedit_size_adjust_policy(void* self);
void q_textedit_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_textedit_frame_style(void* self);
void q_textedit_set_frame_style(void* self, int frameStyle);
int32_t q_textedit_frame_width(void* self);
int64_t q_textedit_frame_shape(void* self);
void q_textedit_set_frame_shape(void* self, int64_t frameShape);
int64_t q_textedit_frame_shadow(void* self);
void q_textedit_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_textedit_line_width(void* self);
void q_textedit_set_line_width(void* self, int lineWidth);
int32_t q_textedit_mid_line_width(void* self);
void q_textedit_set_mid_line_width(void* self, int midLineWidth);
QRect* q_textedit_frame_rect(void* self);
void q_textedit_set_frame_rect(void* self, void* frameRect);
uintptr_t q_textedit_win_id(void* self);
void q_textedit_create_win_id(void* self);
uintptr_t q_textedit_internal_win_id(void* self);
uintptr_t q_textedit_effective_win_id(void* self);
QStyle* q_textedit_style(void* self);
void q_textedit_set_style(void* self, void* style);
bool q_textedit_is_top_level(void* self);
bool q_textedit_is_window(void* self);
bool q_textedit_is_modal(void* self);
int64_t q_textedit_window_modality(void* self);
void q_textedit_set_window_modality(void* self, int64_t windowModality);
bool q_textedit_is_enabled(void* self);
bool q_textedit_is_enabled_to(void* self, void* param1);
void q_textedit_set_enabled(void* self, bool enabled);
void q_textedit_set_disabled(void* self, bool disabled);
void q_textedit_set_window_modified(void* self, bool windowModified);
QRect* q_textedit_frame_geometry(void* self);
QRect* q_textedit_geometry(void* self);
QRect* q_textedit_normal_geometry(void* self);
int32_t q_textedit_x(void* self);
int32_t q_textedit_y(void* self);
QPoint* q_textedit_pos(void* self);
QSize* q_textedit_frame_size(void* self);
QSize* q_textedit_size(void* self);
int32_t q_textedit_width(void* self);
int32_t q_textedit_height(void* self);
QRect* q_textedit_rect(void* self);
QRect* q_textedit_children_rect(void* self);
QRegion* q_textedit_children_region(void* self);
QSize* q_textedit_minimum_size(void* self);
QSize* q_textedit_maximum_size(void* self);
int32_t q_textedit_minimum_width(void* self);
int32_t q_textedit_minimum_height(void* self);
int32_t q_textedit_maximum_width(void* self);
int32_t q_textedit_maximum_height(void* self);
void q_textedit_set_minimum_size(void* self, void* minimumSize);
void q_textedit_set_minimum_size2(void* self, int minw, int minh);
void q_textedit_set_maximum_size(void* self, void* maximumSize);
void q_textedit_set_maximum_size2(void* self, int maxw, int maxh);
void q_textedit_set_minimum_width(void* self, int minw);
void q_textedit_set_minimum_height(void* self, int minh);
void q_textedit_set_maximum_width(void* self, int maxw);
void q_textedit_set_maximum_height(void* self, int maxh);
QSize* q_textedit_size_increment(void* self);
void q_textedit_set_size_increment(void* self, void* sizeIncrement);
void q_textedit_set_size_increment2(void* self, int w, int h);
QSize* q_textedit_base_size(void* self);
void q_textedit_set_base_size(void* self, void* baseSize);
void q_textedit_set_base_size2(void* self, int basew, int baseh);
void q_textedit_set_fixed_size(void* self, void* fixedSize);
void q_textedit_set_fixed_size2(void* self, int w, int h);
void q_textedit_set_fixed_width(void* self, int w);
void q_textedit_set_fixed_height(void* self, int h);
QPointF* q_textedit_map_to_global(void* self, void* param1);
QPoint* q_textedit_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_textedit_map_from_global(void* self, void* param1);
QPoint* q_textedit_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_textedit_map_to_parent(void* self, void* param1);
QPoint* q_textedit_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_textedit_map_from_parent(void* self, void* param1);
QPoint* q_textedit_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_textedit_map_to(void* self, void* param1, void* param2);
QPoint* q_textedit_map_to2(void* self, void* param1, void* param2);
QPointF* q_textedit_map_from(void* self, void* param1, void* param2);
QPoint* q_textedit_map_from2(void* self, void* param1, void* param2);
QWidget* q_textedit_window(void* self);
QWidget* q_textedit_native_parent_widget(void* self);
QWidget* q_textedit_top_level_widget(void* self);
QPalette* q_textedit_palette(void* self);
void q_textedit_set_palette(void* self, void* palette);
void q_textedit_set_background_role(void* self, int64_t backgroundRole);
int64_t q_textedit_background_role(void* self);
void q_textedit_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_textedit_foreground_role(void* self);
QFont* q_textedit_font(void* self);
void q_textedit_set_font(void* self, void* font);
QFontMetrics* q_textedit_font_metrics(void* self);
QFontInfo* q_textedit_font_info(void* self);
QCursor* q_textedit_cursor(void* self);
void q_textedit_set_cursor(void* self, void* cursor);
void q_textedit_unset_cursor(void* self);
void q_textedit_set_mouse_tracking(void* self, bool enable);
bool q_textedit_has_mouse_tracking(void* self);
bool q_textedit_under_mouse(void* self);
void q_textedit_set_tablet_tracking(void* self, bool enable);
bool q_textedit_has_tablet_tracking(void* self);
void q_textedit_set_mask(void* self, void* mask);
void q_textedit_set_mask_with_mask(void* self, void* mask);
QRegion* q_textedit_mask(void* self);
void q_textedit_clear_mask(void* self);
void q_textedit_render(void* self, void* target);
void q_textedit_render_with_painter(void* self, void* painter);
QPixmap* q_textedit_grab(void* self);
QGraphicsEffect* q_textedit_graphics_effect(void* self);
void q_textedit_set_graphics_effect(void* self, void* effect);
void q_textedit_grab_gesture(void* self, int64_t typeVal);
void q_textedit_ungrab_gesture(void* self, int64_t typeVal);
void q_textedit_set_window_title(void* self, const char* windowTitle);
void q_textedit_set_style_sheet(void* self, const char* styleSheet);
const char* q_textedit_style_sheet(void* self);
const char* q_textedit_window_title(void* self);
void q_textedit_set_window_icon(void* self, void* icon);
QIcon* q_textedit_window_icon(void* self);
void q_textedit_set_window_icon_text(void* self, const char* windowIconText);
const char* q_textedit_window_icon_text(void* self);
void q_textedit_set_window_role(void* self, const char* windowRole);
const char* q_textedit_window_role(void* self);
void q_textedit_set_window_file_path(void* self, const char* filePath);
const char* q_textedit_window_file_path(void* self);
void q_textedit_set_window_opacity(void* self, double level);
double q_textedit_window_opacity(void* self);
bool q_textedit_is_window_modified(void* self);
void q_textedit_set_tool_tip(void* self, const char* toolTip);
const char* q_textedit_tool_tip(void* self);
void q_textedit_set_tool_tip_duration(void* self, int msec);
int32_t q_textedit_tool_tip_duration(void* self);
void q_textedit_set_status_tip(void* self, const char* statusTip);
const char* q_textedit_status_tip(void* self);
void q_textedit_set_whats_this(void* self, const char* whatsThis);
const char* q_textedit_whats_this(void* self);
const char* q_textedit_accessible_name(void* self);
void q_textedit_set_accessible_name(void* self, const char* name);
const char* q_textedit_accessible_description(void* self);
void q_textedit_set_accessible_description(void* self, const char* description);
void q_textedit_set_layout_direction(void* self, int64_t direction);
int64_t q_textedit_layout_direction(void* self);
void q_textedit_unset_layout_direction(void* self);
void q_textedit_set_locale(void* self, void* locale);
QLocale* q_textedit_locale(void* self);
void q_textedit_unset_locale(void* self);
bool q_textedit_is_right_to_left(void* self);
bool q_textedit_is_left_to_right(void* self);
void q_textedit_set_focus(void* self);
bool q_textedit_is_active_window(void* self);
void q_textedit_activate_window(void* self);
void q_textedit_clear_focus(void* self);
void q_textedit_set_focus_with_reason(void* self, int64_t reason);
int64_t q_textedit_focus_policy(void* self);
void q_textedit_set_focus_policy(void* self, int64_t policy);
bool q_textedit_has_focus(void* self);
void q_textedit_set_tab_order(void* param1, void* param2);
void q_textedit_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_textedit_focus_proxy(void* self);
int64_t q_textedit_context_menu_policy(void* self);
void q_textedit_set_context_menu_policy(void* self, int64_t policy);
void q_textedit_grab_mouse(void* self);
void q_textedit_grab_mouse_with_q_cursor(void* self, void* param1);
void q_textedit_release_mouse(void* self);
void q_textedit_grab_keyboard(void* self);
void q_textedit_release_keyboard(void* self);
int32_t q_textedit_grab_shortcut(void* self, void* key);
void q_textedit_release_shortcut(void* self, int id);
void q_textedit_set_shortcut_enabled(void* self, int id);
void q_textedit_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_textedit_mouse_grabber();
QWidget* q_textedit_keyboard_grabber();
bool q_textedit_updates_enabled(void* self);
void q_textedit_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_textedit_graphics_proxy_widget(void* self);
void q_textedit_update(void* self);
void q_textedit_repaint(void* self);
void q_textedit_update2(void* self, int x, int y, int w, int h);
void q_textedit_update_with_q_rect(void* self, void* param1);
void q_textedit_update_with_q_region(void* self, void* param1);
void q_textedit_repaint2(void* self, int x, int y, int w, int h);
void q_textedit_repaint_with_q_rect(void* self, void* param1);
void q_textedit_repaint_with_q_region(void* self, void* param1);
void q_textedit_set_hidden(void* self, bool hidden);
void q_textedit_show(void* self);
void q_textedit_hide(void* self);
void q_textedit_show_minimized(void* self);
void q_textedit_show_maximized(void* self);
void q_textedit_show_full_screen(void* self);
void q_textedit_show_normal(void* self);
bool q_textedit_close(void* self);
void q_textedit_raise(void* self);
void q_textedit_lower(void* self);
void q_textedit_stack_under(void* self, void* param1);
void q_textedit_move(void* self, int x, int y);
void q_textedit_move_with_q_point(void* self, void* param1);
void q_textedit_resize(void* self, int w, int h);
void q_textedit_resize_with_q_size(void* self, void* param1);
void q_textedit_set_geometry(void* self, int x, int y, int w, int h);
void q_textedit_set_geometry_with_geometry(void* self, void* geometry);
char* q_textedit_save_geometry(void* self);
bool q_textedit_restore_geometry(void* self, const char* geometry);
void q_textedit_adjust_size(void* self);
bool q_textedit_is_visible(void* self);
bool q_textedit_is_visible_to(void* self, void* param1);
bool q_textedit_is_hidden(void* self);
bool q_textedit_is_minimized(void* self);
bool q_textedit_is_maximized(void* self);
bool q_textedit_is_full_screen(void* self);
int64_t q_textedit_window_state(void* self);
void q_textedit_set_window_state(void* self, int64_t state);
void q_textedit_override_window_state(void* self, int64_t state);
QSizePolicy* q_textedit_size_policy(void* self);
void q_textedit_set_size_policy(void* self, void* sizePolicy);
void q_textedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_textedit_visible_region(void* self);
void q_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_textedit_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_textedit_contents_margins(void* self);
QRect* q_textedit_contents_rect(void* self);
QLayout* q_textedit_layout(void* self);
void q_textedit_set_layout(void* self, void* layout);
void q_textedit_update_geometry(void* self);
void q_textedit_set_parent(void* self, void* parent);
void q_textedit_set_parent2(void* self, void* parent, int64_t f);
void q_textedit_scroll(void* self, int dx, int dy);
void q_textedit_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_textedit_focus_widget(void* self);
QWidget* q_textedit_next_in_focus_chain(void* self);
QWidget* q_textedit_previous_in_focus_chain(void* self);
bool q_textedit_accept_drops(void* self);
void q_textedit_set_accept_drops(void* self, bool on);
void q_textedit_add_action(void* self, void* action);
void q_textedit_add_actions(void* self, void* actions[]);
void q_textedit_insert_actions(void* self, void* before, void* actions[]);
void q_textedit_insert_action(void* self, void* before, void* action);
void q_textedit_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_textedit_actions(void* self);
QAction* q_textedit_add_action_with_text(void* self, const char* text);
QAction* q_textedit_add_action2(void* self, void* icon, const char* text);
QAction* q_textedit_add_action3(void* self, const char* text, void* shortcut);
QAction* q_textedit_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_textedit_parent_widget(void* self);
void q_textedit_set_window_flags(void* self, int64_t typeVal);
int64_t q_textedit_window_flags(void* self);
void q_textedit_set_window_flag(void* self, int64_t param1);
void q_textedit_override_window_flags(void* self, int64_t typeVal);
int64_t q_textedit_window_type(void* self);
QWidget* q_textedit_child_at(void* self, int x, int y);
QWidget* q_textedit_child_at_with_q_point(void* self, void* p);
void q_textedit_set_attribute(void* self, int64_t param1);
bool q_textedit_test_attribute(void* self, int64_t param1);
void q_textedit_ensure_polished(void* self);
bool q_textedit_is_ancestor_of(void* self, void* child);
bool q_textedit_auto_fill_background(void* self);
void q_textedit_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_textedit_backing_store(void* self);
QWindow* q_textedit_window_handle(void* self);
QScreen* q_textedit_screen(void* self);
void q_textedit_set_screen(void* self, void* screen);
QWidget* q_textedit_create_window_container(void* window);
void q_textedit_window_title_changed(void* self, const char* title);
void q_textedit_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_textedit_window_icon_changed(void* self, void* icon);
void q_textedit_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_textedit_window_icon_text_changed(void* self, const char* iconText);
void q_textedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_textedit_custom_context_menu_requested(void* self, void* pos);
void q_textedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_textedit_input_method_hints(void* self);
void q_textedit_set_input_method_hints(void* self, int64_t hints);
void q_textedit_render2(void* self, void* target, void* targetOffset);
void q_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_textedit_render22(void* self, void* painter, void* targetOffset);
void q_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_textedit_grab1(void* self, void* rectangle);
void q_textedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_textedit_grab_shortcut2(void* self, void* key, int64_t context);
void q_textedit_set_shortcut_enabled2(void* self, int id, bool enable);
void q_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_textedit_set_window_flag2(void* self, int64_t param1, bool on);
void q_textedit_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_textedit_create_window_container2(void* window, void* parent);
QWidget* q_textedit_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_textedit_object_name(void* self);
void q_textedit_set_object_name(void* self, const char* name);
bool q_textedit_is_widget_type(void* self);
bool q_textedit_is_window_type(void* self);
bool q_textedit_is_quick_item_type(void* self);
bool q_textedit_signals_blocked(void* self);
bool q_textedit_block_signals(void* self, bool b);
QThread* q_textedit_thread(void* self);
void q_textedit_move_to_thread(void* self, void* thread);
int32_t q_textedit_start_timer(void* self, int interval);
void q_textedit_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textedit_children(void* self);
void q_textedit_install_event_filter(void* self, void* filterObj);
void q_textedit_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textedit_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textedit_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textedit_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textedit_disconnect_with_q_meta_object_connection(void* param1);
void q_textedit_dump_object_tree(void* self);
void q_textedit_dump_object_info(void* self);
bool q_textedit_set_property(void* self, const char* name, void* value);
QVariant* q_textedit_property(void* self, const char* name);
const char** q_textedit_dynamic_property_names(void* self);
QBindingStorage* q_textedit_binding_storage(void* self);
QBindingStorage* q_textedit_binding_storage2(void* self);
void q_textedit_destroyed(void* self);
void q_textedit_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textedit_parent(void* self);
bool q_textedit_inherits(void* self, const char* classname);
void q_textedit_delete_later(void* self);
int32_t q_textedit_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textedit_destroyed1(void* self, void* param1);
void q_textedit_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_textedit_painting_active(void* self);
int32_t q_textedit_width_m_m(void* self);
int32_t q_textedit_height_m_m(void* self);
int32_t q_textedit_logical_dpi_x(void* self);
int32_t q_textedit_logical_dpi_y(void* self);
int32_t q_textedit_physical_dpi_x(void* self);
int32_t q_textedit_physical_dpi_y(void* self);
double q_textedit_device_pixel_ratio(void* self);
double q_textedit_device_pixel_ratio_f(void* self);
int32_t q_textedit_color_count(void* self);
int32_t q_textedit_depth(void* self);
double q_textedit_device_pixel_ratio_f_scale();
QSize* q_textedit_minimum_size_hint(void* self);
QSize* q_textedit_qbase_minimum_size_hint(void* self);
void q_textedit_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_textedit_size_hint(void* self);
QSize* q_textedit_qbase_size_hint(void* self);
void q_textedit_on_size_hint(void* self, QSize* (*slot)());
void q_textedit_setup_viewport(void* self, void* viewport);
void q_textedit_qbase_setup_viewport(void* self, void* viewport);
void q_textedit_on_setup_viewport(void* self, void (*slot)(void*, void*));
bool q_textedit_event_filter(void* self, void* param1, void* param2);
bool q_textedit_qbase_event_filter(void* self, void* param1, void* param2);
void q_textedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_textedit_viewport_event(void* self, void* param1);
bool q_textedit_qbase_viewport_event(void* self, void* param1);
void q_textedit_on_viewport_event(void* self, bool (*slot)(void*, void*));
QSize* q_textedit_viewport_size_hint(void* self);
QSize* q_textedit_qbase_viewport_size_hint(void* self);
void q_textedit_on_viewport_size_hint(void* self, QSize* (*slot)());
void q_textedit_init_style_option(void* self, void* option);
void q_textedit_qbase_init_style_option(void* self, void* option);
void q_textedit_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_textedit_dev_type(void* self);
int32_t q_textedit_qbase_dev_type(void* self);
void q_textedit_on_dev_type(void* self, int32_t (*slot)());
void q_textedit_set_visible(void* self, bool visible);
void q_textedit_qbase_set_visible(void* self, bool visible);
void q_textedit_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_textedit_height_for_width(void* self, int param1);
int32_t q_textedit_qbase_height_for_width(void* self, int param1);
void q_textedit_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_textedit_has_height_for_width(void* self);
bool q_textedit_qbase_has_height_for_width(void* self);
void q_textedit_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_textedit_paint_engine(void* self);
QPaintEngine* q_textedit_qbase_paint_engine(void* self);
void q_textedit_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_textedit_enter_event(void* self, void* event);
void q_textedit_qbase_enter_event(void* self, void* event);
void q_textedit_on_enter_event(void* self, void (*slot)(void*, void*));
void q_textedit_leave_event(void* self, void* event);
void q_textedit_qbase_leave_event(void* self, void* event);
void q_textedit_on_leave_event(void* self, void (*slot)(void*, void*));
void q_textedit_move_event(void* self, void* event);
void q_textedit_qbase_move_event(void* self, void* event);
void q_textedit_on_move_event(void* self, void (*slot)(void*, void*));
void q_textedit_close_event(void* self, void* event);
void q_textedit_qbase_close_event(void* self, void* event);
void q_textedit_on_close_event(void* self, void (*slot)(void*, void*));
void q_textedit_tablet_event(void* self, void* event);
void q_textedit_qbase_tablet_event(void* self, void* event);
void q_textedit_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_textedit_action_event(void* self, void* event);
void q_textedit_qbase_action_event(void* self, void* event);
void q_textedit_on_action_event(void* self, void (*slot)(void*, void*));
void q_textedit_hide_event(void* self, void* event);
void q_textedit_qbase_hide_event(void* self, void* event);
void q_textedit_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_textedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_textedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_textedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_textedit_metric(void* self, int64_t param1);
int32_t q_textedit_qbase_metric(void* self, int64_t param1);
void q_textedit_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_textedit_init_painter(void* self, void* painter);
void q_textedit_qbase_init_painter(void* self, void* painter);
void q_textedit_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_textedit_redirected(void* self, void* offset);
QPaintDevice* q_textedit_qbase_redirected(void* self, void* offset);
void q_textedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_textedit_shared_painter(void* self);
QPainter* q_textedit_qbase_shared_painter(void* self);
void q_textedit_on_shared_painter(void* self, QPainter* (*slot)());
void q_textedit_child_event(void* self, void* event);
void q_textedit_qbase_child_event(void* self, void* event);
void q_textedit_on_child_event(void* self, void (*slot)(void*, void*));
void q_textedit_custom_event(void* self, void* event);
void q_textedit_qbase_custom_event(void* self, void* event);
void q_textedit_on_custom_event(void* self, void (*slot)(void*, void*));
void q_textedit_connect_notify(void* self, void* signal);
void q_textedit_qbase_connect_notify(void* self, void* signal);
void q_textedit_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_textedit_disconnect_notify(void* self, void* signal);
void q_textedit_qbase_disconnect_notify(void* self, void* signal);
void q_textedit_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_textedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_textedit_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_textedit_viewport_margins(void* self);
QMargins* q_textedit_qbase_viewport_margins(void* self);
void q_textedit_on_viewport_margins(void* self, QMargins* (*slot)());
void q_textedit_draw_frame(void* self, void* param1);
void q_textedit_qbase_draw_frame(void* self, void* param1);
void q_textedit_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_textedit_update_micro_focus(void* self);
void q_textedit_qbase_update_micro_focus(void* self);
void q_textedit_on_update_micro_focus(void* self, void (*slot)());
void q_textedit_create(void* self);
void q_textedit_qbase_create(void* self);
void q_textedit_on_create(void* self, void (*slot)());
void q_textedit_destroy(void* self);
void q_textedit_qbase_destroy(void* self);
void q_textedit_on_destroy(void* self, void (*slot)());
bool q_textedit_focus_next_child(void* self);
bool q_textedit_qbase_focus_next_child(void* self);
void q_textedit_on_focus_next_child(void* self, bool (*slot)());
bool q_textedit_focus_previous_child(void* self);
bool q_textedit_qbase_focus_previous_child(void* self);
void q_textedit_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_textedit_sender(void* self);
QObject* q_textedit_qbase_sender(void* self);
void q_textedit_on_sender(void* self, QObject* (*slot)());
int32_t q_textedit_sender_signal_index(void* self);
int32_t q_textedit_qbase_sender_signal_index(void* self);
void q_textedit_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_textedit_receivers(void* self, const char* signal);
int32_t q_textedit_qbase_receivers(void* self, const char* signal);
void q_textedit_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_textedit_is_signal_connected(void* self, void* signal);
bool q_textedit_qbase_is_signal_connected(void* self, void* signal);
void q_textedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_textedit_delete(void* self);

QTextEdit__ExtraSelection* q_textedit__extraselection_new(void* param1);
void q_textedit__extraselection_operator_assign(void* self, void* param1);
void q_textedit__extraselection_delete(void* self);

/// https://doc.qt.io/qt-6/qtextedit.html#types

typedef enum {
    QTEXTEDIT_LINEWRAPMODE_NOWRAP = 0,
    QTEXTEDIT_LINEWRAPMODE_WIDGETWIDTH = 1,
    QTEXTEDIT_LINEWRAPMODE_FIXEDPIXELWIDTH = 2,
    QTEXTEDIT_LINEWRAPMODE_FIXEDCOLUMNWIDTH = 3
} QTextEdit__LineWrapMode;

typedef enum {
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTONONE = 0,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOBULLETLIST = 1,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOALL = 4294967295
} QTextEdit__AutoFormattingFlag;

#endif
