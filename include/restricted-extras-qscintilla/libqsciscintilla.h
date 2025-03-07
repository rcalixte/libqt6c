#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractscrollarea.h"
#include "../libqaction.h"
#include "../libqevent.h"
#include "../libqanystringview.h"
#include "../libqbackingstore.h"
#include "../libqbindingstorage.h"
#include "../libqbitmap.h"
#include "../libqcolor.h"
#include "../libqcursor.h"
#include "../libqfont.h"
#include "../libqfontinfo.h"
#include "../libqfontmetrics.h"
#include "../libqframe.h"
#include "../libqgraphicseffect.h"
#include "../libqgraphicsproxywidget.h"
#include "../libqiodevice.h"
#include "../libqicon.h"
#include "../libqimage.h"
#include "../libqkeysequence.h"
#include "../libqlayout.h"
#include "../libqlocale.h"
#include "../libqmargins.h"
#include "../libqmenu.h"
#include "../libqmetaobject.h"
#include "../libqmimedata.h"
#include "../libqobject.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpalette.h"
#include "../libqpixmap.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqregion.h"
#include "../libqscreen.h"
#include "../libqscrollbar.h"
#include "../libqsize.h"
#include "../libqsizepolicy.h"
#include <string.h>
#include "../libqstyle.h"
#include "../libqstyleoption.h"
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"
#include "../libqwidget.h"
#include "../libqwindow.h"

QsciScintilla* q_sciscintilla_new(void* parent);
QsciScintilla* q_sciscintilla_new2();
QMetaObject* q_sciscintilla_meta_object(void* self);
void* q_sciscintilla_metacast(void* self, const char* param1);
int32_t q_sciscintilla_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sciscintilla_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sciscintilla_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sciscintilla_tr(const char* s);
const char** q_sciscintilla_api_context(void* self, int pos, int* context_start, int* last_word_start);
void q_sciscintilla_on_api_context(void* self, const char** (*slot)(void*, int, int*, int*));
const char** q_sciscintilla_qbase_api_context(void* self, int pos, int* context_start, int* last_word_start);
void q_sciscintilla_annotate(void* self, int line, const char* text, int style);
void q_sciscintilla_annotate2(void* self, int line, const char* text, void* style);
void q_sciscintilla_annotate3(void* self, int line, void* text);
const char* q_sciscintilla_annotation(void* self, int line);
int64_t q_sciscintilla_annotation_display(void* self);
void q_sciscintilla_clear_annotations(void* self);
bool q_sciscintilla_auto_completion_case_sensitivity(void* self);
bool q_sciscintilla_auto_completion_fillups_enabled(void* self);
bool q_sciscintilla_auto_completion_replace_word(void* self);
bool q_sciscintilla_auto_completion_show_single(void* self);
int64_t q_sciscintilla_auto_completion_source(void* self);
int32_t q_sciscintilla_auto_completion_threshold(void* self);
int64_t q_sciscintilla_auto_completion_use_single(void* self);
bool q_sciscintilla_auto_indent(void* self);
bool q_sciscintilla_backspace_unindents(void* self);
void q_sciscintilla_begin_undo_action(void* self);
int64_t q_sciscintilla_brace_matching(void* self);
char* q_sciscintilla_bytes(void* self, int start, int end);
int64_t q_sciscintilla_call_tips_position(void* self);
int64_t q_sciscintilla_call_tips_style(void* self);
int32_t q_sciscintilla_call_tips_visible(void* self);
void q_sciscintilla_cancel_find(void* self);
void q_sciscintilla_cancel_list(void* self);
bool q_sciscintilla_case_sensitive(void* self);
void q_sciscintilla_clear_folds(void* self);
void q_sciscintilla_clear_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);
void q_sciscintilla_clear_registered_images(void* self);
QColor* q_sciscintilla_color(void* self);
libqt_list /* of int */ q_sciscintilla_contracted_folds(void* self);
void q_sciscintilla_convert_eols(void* self, int64_t mode);
QMenu* q_sciscintilla_create_standard_context_menu(void* self);
QsciDocument* q_sciscintilla_document(void* self);
void q_sciscintilla_end_undo_action(void* self);
QColor* q_sciscintilla_edge_color(void* self);
int32_t q_sciscintilla_edge_column(void* self);
int64_t q_sciscintilla_edge_mode(void* self);
void q_sciscintilla_set_font(void* self, void* f);
int64_t q_sciscintilla_eol_mode(void* self);
bool q_sciscintilla_eol_visibility(void* self);
int32_t q_sciscintilla_extra_ascent(void* self);
int32_t q_sciscintilla_extra_descent(void* self);
void q_sciscintilla_fill_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);
bool q_sciscintilla_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);
void q_sciscintilla_on_find_first(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool));
bool q_sciscintilla_qbase_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);
bool q_sciscintilla_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);
void q_sciscintilla_on_find_first_in_selection(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, bool, bool));
bool q_sciscintilla_qbase_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);
bool q_sciscintilla_find_next(void* self);
void q_sciscintilla_on_find_next(void* self, bool (*slot)());
bool q_sciscintilla_qbase_find_next(void* self);
bool q_sciscintilla_find_matching_brace(void* self, int64_t* brace, int64_t* other, int64_t mode);
int32_t q_sciscintilla_first_visible_line(void* self);
int64_t q_sciscintilla_folding(void* self);
void q_sciscintilla_get_cursor_position(void* self, int* line, int* index);
void q_sciscintilla_get_selection(void* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo);
bool q_sciscintilla_has_selected_text(void* self);
int32_t q_sciscintilla_indentation(void* self, int line);
bool q_sciscintilla_indentation_guides(void* self);
bool q_sciscintilla_indentations_use_tabs(void* self);
int32_t q_sciscintilla_indentation_width(void* self);
int32_t q_sciscintilla_indicator_define(void* self, int64_t style);
bool q_sciscintilla_indicator_draw_under(void* self, int indicatorNumber);
bool q_sciscintilla_is_call_tip_active(void* self);
bool q_sciscintilla_is_list_active(void* self);
bool q_sciscintilla_is_modified(void* self);
bool q_sciscintilla_is_read_only(void* self);
bool q_sciscintilla_is_redo_available(void* self);
bool q_sciscintilla_is_undo_available(void* self);
bool q_sciscintilla_is_utf8(void* self);
bool q_sciscintilla_is_word_character(void* self, char ch);
int32_t q_sciscintilla_line_at(void* self, void* point);
void q_sciscintilla_line_index_from_position(void* self, int position, int* line, int* index);
int32_t q_sciscintilla_line_length(void* self, int line);
int32_t q_sciscintilla_lines(void* self);
int32_t q_sciscintilla_length(void* self);
QsciLexer* q_sciscintilla_lexer(void* self);
QColor* q_sciscintilla_margin_background_color(void* self, int margin);
bool q_sciscintilla_margin_line_numbers(void* self, int margin);
int32_t q_sciscintilla_margin_marker_mask(void* self, int margin);
int32_t q_sciscintilla_margin_options(void* self);
bool q_sciscintilla_margin_sensitivity(void* self, int margin);
int64_t q_sciscintilla_margin_type(void* self, int margin);
int32_t q_sciscintilla_margin_width(void* self, int margin);
int32_t q_sciscintilla_margins(void* self);
int32_t q_sciscintilla_marker_define(void* self, int64_t sym);
int32_t q_sciscintilla_marker_define_with_ch(void* self, char ch);
int32_t q_sciscintilla_marker_define_with_pm(void* self, void* pm);
int32_t q_sciscintilla_marker_define_with_im(void* self, void* im);
int32_t q_sciscintilla_marker_add(void* self, int linenr, int markerNumber);
uint32_t q_sciscintilla_markers_at_line(void* self, int linenr);
void q_sciscintilla_marker_delete(void* self, int linenr);
void q_sciscintilla_marker_delete_all(void* self);
void q_sciscintilla_marker_delete_handle(void* self, int mhandle);
int32_t q_sciscintilla_marker_line(void* self, int mhandle);
int32_t q_sciscintilla_marker_find_next(void* self, int linenr, uint32_t mask);
int32_t q_sciscintilla_marker_find_previous(void* self, int linenr, uint32_t mask);
bool q_sciscintilla_overwrite_mode(void* self);
QColor* q_sciscintilla_paper(void* self);
int32_t q_sciscintilla_position_from_line_index(void* self, int line, int index);
bool q_sciscintilla_read(void* self, void* io);
void q_sciscintilla_recolor(void* self, int start, int end);
void q_sciscintilla_on_recolor(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_qbase_recolor(void* self, int start, int end);
void q_sciscintilla_register_image(void* self, int id, void* pm);
void q_sciscintilla_register_image2(void* self, int id, void* im);
void q_sciscintilla_replace(void* self, const char* replaceStr);
void q_sciscintilla_on_replace(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_qbase_replace(void* self, const char* replaceStr);
void q_sciscintilla_reset_fold_margin_colors(void* self);
void q_sciscintilla_reset_hotspot_background_color(void* self);
void q_sciscintilla_reset_hotspot_foreground_color(void* self);
int32_t q_sciscintilla_scroll_width(void* self);
bool q_sciscintilla_scroll_width_tracking(void* self);
void q_sciscintilla_set_fold_margin_colors(void* self, void* fore, void* back);
void q_sciscintilla_set_annotation_display(void* self, int64_t display);
void q_sciscintilla_set_auto_completion_fillups_enabled(void* self, bool enabled);
void q_sciscintilla_set_auto_completion_fillups(void* self, const char* fillups);
void q_sciscintilla_set_auto_completion_word_separators(void* self, const char* separators[]);
void q_sciscintilla_set_call_tips_background_color(void* self, void* col);
void q_sciscintilla_set_call_tips_foreground_color(void* self, void* col);
void q_sciscintilla_set_call_tips_highlight_color(void* self, void* col);
void q_sciscintilla_set_call_tips_position(void* self, int64_t position);
void q_sciscintilla_set_call_tips_style(void* self, int64_t style);
void q_sciscintilla_set_call_tips_visible(void* self, int nr);
void q_sciscintilla_set_contracted_folds(void* self, int* folds[]);
void q_sciscintilla_set_document(void* self, void* document);
void q_sciscintilla_add_edge_column(void* self, int colnr, void* col);
void q_sciscintilla_clear_edge_columns(void* self);
void q_sciscintilla_set_edge_color(void* self, void* col);
void q_sciscintilla_set_edge_column(void* self, int colnr);
void q_sciscintilla_set_edge_mode(void* self, int64_t mode);
void q_sciscintilla_set_first_visible_line(void* self, int linenr);
void q_sciscintilla_set_indicator_draw_under(void* self, bool under);
void q_sciscintilla_set_indicator_foreground_color(void* self, void* col);
void q_sciscintilla_set_indicator_hover_foreground_color(void* self, void* col);
void q_sciscintilla_set_indicator_hover_style(void* self, int64_t style);
void q_sciscintilla_set_indicator_outline_color(void* self, void* col);
void q_sciscintilla_set_margin_background_color(void* self, int margin, void* col);
void q_sciscintilla_set_margin_options(void* self, int options);
void q_sciscintilla_set_margin_text(void* self, int line, const char* text, int style);
void q_sciscintilla_set_margin_text2(void* self, int line, const char* text, void* style);
void q_sciscintilla_set_margin_text3(void* self, int line, void* text);
void q_sciscintilla_set_margin_type(void* self, int margin, int64_t typeVal);
void q_sciscintilla_clear_margin_text(void* self);
void q_sciscintilla_set_margins(void* self, int margins);
void q_sciscintilla_set_marker_background_color(void* self, void* col);
void q_sciscintilla_set_marker_foreground_color(void* self, void* col);
void q_sciscintilla_set_matched_brace_background_color(void* self, void* col);
void q_sciscintilla_set_matched_brace_foreground_color(void* self, void* col);
void q_sciscintilla_set_matched_brace_indicator(void* self, int indicatorNumber);
void q_sciscintilla_reset_matched_brace_indicator(void* self);
void q_sciscintilla_set_scroll_width(void* self, int pixelWidth);
void q_sciscintilla_set_scroll_width_tracking(void* self, bool enabled);
void q_sciscintilla_set_tab_draw_mode(void* self, int64_t mode);
void q_sciscintilla_set_unmatched_brace_background_color(void* self, void* col);
void q_sciscintilla_set_unmatched_brace_foreground_color(void* self, void* col);
void q_sciscintilla_set_unmatched_brace_indicator(void* self, int indicatorNumber);
void q_sciscintilla_reset_unmatched_brace_indicator(void* self);
void q_sciscintilla_set_wrap_visual_flags(void* self, int64_t endFlag);
const char* q_sciscintilla_selected_text(void* self);
bool q_sciscintilla_selection_to_eol(void* self);
void q_sciscintilla_set_hotspot_background_color(void* self, void* col);
void q_sciscintilla_set_hotspot_foreground_color(void* self, void* col);
void q_sciscintilla_set_hotspot_underline(void* self, bool enable);
void q_sciscintilla_set_hotspot_wrap(void* self, bool enable);
void q_sciscintilla_set_selection_to_eol(void* self, bool filled);
void q_sciscintilla_set_extra_ascent(void* self, int extra);
void q_sciscintilla_set_extra_descent(void* self, int extra);
void q_sciscintilla_set_overwrite_mode(void* self, bool overwrite);
void q_sciscintilla_set_whitespace_background_color(void* self, void* col);
void q_sciscintilla_set_whitespace_foreground_color(void* self, void* col);
void q_sciscintilla_set_whitespace_size(void* self, int size);
void q_sciscintilla_set_wrap_indent_mode(void* self, int64_t mode);
void q_sciscintilla_show_user_list(void* self, int id, const char* list[]);
QsciCommandSet* q_sciscintilla_standard_commands(void* self);
int64_t q_sciscintilla_tab_draw_mode(void* self);
bool q_sciscintilla_tab_indents(void* self);
int32_t q_sciscintilla_tab_width(void* self);
const char* q_sciscintilla_text(void* self);
const char* q_sciscintilla_text_with_line(void* self, int line);
const char* q_sciscintilla_text2(void* self, int start, int end);
int32_t q_sciscintilla_text_height(void* self, int linenr);
int32_t q_sciscintilla_whitespace_size(void* self);
int64_t q_sciscintilla_whitespace_visibility(void* self);
const char* q_sciscintilla_word_at_line_index(void* self, int line, int index);
const char* q_sciscintilla_word_at_point(void* self, void* point);
const char* q_sciscintilla_word_characters(void* self);
int64_t q_sciscintilla_wrap_mode(void* self);
int64_t q_sciscintilla_wrap_indent_mode(void* self);
bool q_sciscintilla_write(void* self, void* io);
void q_sciscintilla_append(void* self, const char* text);
void q_sciscintilla_on_append(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_qbase_append(void* self, const char* text);
void q_sciscintilla_auto_complete_from_all(void* self);
void q_sciscintilla_on_auto_complete_from_all(void* self, void (*slot)());
void q_sciscintilla_qbase_auto_complete_from_all(void* self);
void q_sciscintilla_auto_complete_from_a_p_is(void* self);
void q_sciscintilla_on_auto_complete_from_a_p_is(void* self, void (*slot)());
void q_sciscintilla_qbase_auto_complete_from_a_p_is(void* self);
void q_sciscintilla_auto_complete_from_document(void* self);
void q_sciscintilla_on_auto_complete_from_document(void* self, void (*slot)());
void q_sciscintilla_qbase_auto_complete_from_document(void* self);
void q_sciscintilla_call_tip(void* self);
void q_sciscintilla_on_call_tip(void* self, void (*slot)());
void q_sciscintilla_qbase_call_tip(void* self);
void q_sciscintilla_clear(void* self);
void q_sciscintilla_on_clear(void* self, void (*slot)());
void q_sciscintilla_qbase_clear(void* self);
void q_sciscintilla_copy(void* self);
void q_sciscintilla_on_copy(void* self, void (*slot)());
void q_sciscintilla_qbase_copy(void* self);
void q_sciscintilla_cut(void* self);
void q_sciscintilla_on_cut(void* self, void (*slot)());
void q_sciscintilla_qbase_cut(void* self);
void q_sciscintilla_ensure_cursor_visible(void* self);
void q_sciscintilla_on_ensure_cursor_visible(void* self, void (*slot)());
void q_sciscintilla_qbase_ensure_cursor_visible(void* self);
void q_sciscintilla_ensure_line_visible(void* self, int line);
void q_sciscintilla_on_ensure_line_visible(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_ensure_line_visible(void* self, int line);
void q_sciscintilla_fold_all(void* self, bool children);
void q_sciscintilla_on_fold_all(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_fold_all(void* self, bool children);
void q_sciscintilla_fold_line(void* self, int line);
void q_sciscintilla_on_fold_line(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_fold_line(void* self, int line);
void q_sciscintilla_indent(void* self, int line);
void q_sciscintilla_on_indent(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_indent(void* self, int line);
void q_sciscintilla_insert(void* self, const char* text);
void q_sciscintilla_on_insert(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_qbase_insert(void* self, const char* text);
void q_sciscintilla_insert_at(void* self, const char* text, int line, int index);
void q_sciscintilla_on_insert_at(void* self, void (*slot)(void*, const char*, int, int));
void q_sciscintilla_qbase_insert_at(void* self, const char* text, int line, int index);
void q_sciscintilla_move_to_matching_brace(void* self);
void q_sciscintilla_on_move_to_matching_brace(void* self, void (*slot)());
void q_sciscintilla_qbase_move_to_matching_brace(void* self);
void q_sciscintilla_paste(void* self);
void q_sciscintilla_on_paste(void* self, void (*slot)());
void q_sciscintilla_qbase_paste(void* self);
void q_sciscintilla_redo(void* self);
void q_sciscintilla_on_redo(void* self, void (*slot)());
void q_sciscintilla_qbase_redo(void* self);
void q_sciscintilla_remove_selected_text(void* self);
void q_sciscintilla_on_remove_selected_text(void* self, void (*slot)());
void q_sciscintilla_qbase_remove_selected_text(void* self);
void q_sciscintilla_replace_selected_text(void* self, const char* text);
void q_sciscintilla_on_replace_selected_text(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_qbase_replace_selected_text(void* self, const char* text);
void q_sciscintilla_reset_selection_background_color(void* self);
void q_sciscintilla_on_reset_selection_background_color(void* self, void (*slot)());
void q_sciscintilla_qbase_reset_selection_background_color(void* self);
void q_sciscintilla_reset_selection_foreground_color(void* self);
void q_sciscintilla_on_reset_selection_foreground_color(void* self, void (*slot)());
void q_sciscintilla_qbase_reset_selection_foreground_color(void* self);
void q_sciscintilla_select_all(void* self, bool selectVal);
void q_sciscintilla_on_select_all(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_select_all(void* self, bool selectVal);
void q_sciscintilla_select_to_matching_brace(void* self);
void q_sciscintilla_on_select_to_matching_brace(void* self, void (*slot)());
void q_sciscintilla_qbase_select_to_matching_brace(void* self);
void q_sciscintilla_set_auto_completion_case_sensitivity(void* self, bool cs);
void q_sciscintilla_on_set_auto_completion_case_sensitivity(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_auto_completion_case_sensitivity(void* self, bool cs);
void q_sciscintilla_set_auto_completion_replace_word(void* self, bool replace);
void q_sciscintilla_on_set_auto_completion_replace_word(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_auto_completion_replace_word(void* self, bool replace);
void q_sciscintilla_set_auto_completion_show_single(void* self, bool single);
void q_sciscintilla_on_set_auto_completion_show_single(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_auto_completion_show_single(void* self, bool single);
void q_sciscintilla_set_auto_completion_source(void* self, int64_t source);
void q_sciscintilla_on_set_auto_completion_source(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_auto_completion_source(void* self, int64_t source);
void q_sciscintilla_set_auto_completion_threshold(void* self, int thresh);
void q_sciscintilla_on_set_auto_completion_threshold(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_set_auto_completion_threshold(void* self, int thresh);
void q_sciscintilla_set_auto_completion_use_single(void* self, int64_t single);
void q_sciscintilla_on_set_auto_completion_use_single(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_auto_completion_use_single(void* self, int64_t single);
void q_sciscintilla_set_auto_indent(void* self, bool autoindent);
void q_sciscintilla_on_set_auto_indent(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_auto_indent(void* self, bool autoindent);
void q_sciscintilla_set_brace_matching(void* self, int64_t bm);
void q_sciscintilla_on_set_brace_matching(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_brace_matching(void* self, int64_t bm);
void q_sciscintilla_set_backspace_unindents(void* self, bool unindent);
void q_sciscintilla_on_set_backspace_unindents(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_backspace_unindents(void* self, bool unindent);
void q_sciscintilla_set_caret_foreground_color(void* self, void* col);
void q_sciscintilla_on_set_caret_foreground_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_caret_foreground_color(void* self, void* col);
void q_sciscintilla_set_caret_line_background_color(void* self, void* col);
void q_sciscintilla_on_set_caret_line_background_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_caret_line_background_color(void* self, void* col);
void q_sciscintilla_set_caret_line_frame_width(void* self, int width);
void q_sciscintilla_on_set_caret_line_frame_width(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_set_caret_line_frame_width(void* self, int width);
void q_sciscintilla_set_caret_line_visible(void* self, bool enable);
void q_sciscintilla_on_set_caret_line_visible(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_caret_line_visible(void* self, bool enable);
void q_sciscintilla_set_caret_width(void* self, int width);
void q_sciscintilla_on_set_caret_width(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_set_caret_width(void* self, int width);
void q_sciscintilla_set_color(void* self, void* c);
void q_sciscintilla_on_set_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_color(void* self, void* c);
void q_sciscintilla_set_cursor_position(void* self, int line, int index);
void q_sciscintilla_on_set_cursor_position(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_qbase_set_cursor_position(void* self, int line, int index);
void q_sciscintilla_set_eol_mode(void* self, int64_t mode);
void q_sciscintilla_on_set_eol_mode(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_eol_mode(void* self, int64_t mode);
void q_sciscintilla_set_eol_visibility(void* self, bool visible);
void q_sciscintilla_on_set_eol_visibility(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_eol_visibility(void* self, bool visible);
void q_sciscintilla_set_folding(void* self, int64_t fold, int margin);
void q_sciscintilla_on_set_folding(void* self, void (*slot)(void*, int64_t, int));
void q_sciscintilla_qbase_set_folding(void* self, int64_t fold, int margin);
void q_sciscintilla_set_indentation(void* self, int line, int indentation);
void q_sciscintilla_on_set_indentation(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_qbase_set_indentation(void* self, int line, int indentation);
void q_sciscintilla_set_indentation_guides(void* self, bool enable);
void q_sciscintilla_on_set_indentation_guides(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_indentation_guides(void* self, bool enable);
void q_sciscintilla_set_indentation_guides_background_color(void* self, void* col);
void q_sciscintilla_on_set_indentation_guides_background_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_indentation_guides_background_color(void* self, void* col);
void q_sciscintilla_set_indentation_guides_foreground_color(void* self, void* col);
void q_sciscintilla_on_set_indentation_guides_foreground_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_indentation_guides_foreground_color(void* self, void* col);
void q_sciscintilla_set_indentations_use_tabs(void* self, bool tabs);
void q_sciscintilla_on_set_indentations_use_tabs(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_indentations_use_tabs(void* self, bool tabs);
void q_sciscintilla_set_indentation_width(void* self, int width);
void q_sciscintilla_on_set_indentation_width(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_set_indentation_width(void* self, int width);
void q_sciscintilla_set_lexer(void* self, void* lexer);
void q_sciscintilla_on_set_lexer(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_lexer(void* self, void* lexer);
void q_sciscintilla_set_margins_background_color(void* self, void* col);
void q_sciscintilla_on_set_margins_background_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_margins_background_color(void* self, void* col);
void q_sciscintilla_set_margins_font(void* self, void* f);
void q_sciscintilla_on_set_margins_font(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_margins_font(void* self, void* f);
void q_sciscintilla_set_margins_foreground_color(void* self, void* col);
void q_sciscintilla_on_set_margins_foreground_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_margins_foreground_color(void* self, void* col);
void q_sciscintilla_set_margin_line_numbers(void* self, int margin, bool lnrs);
void q_sciscintilla_on_set_margin_line_numbers(void* self, void (*slot)(void*, int, bool));
void q_sciscintilla_qbase_set_margin_line_numbers(void* self, int margin, bool lnrs);
void q_sciscintilla_set_margin_marker_mask(void* self, int margin, int mask);
void q_sciscintilla_on_set_margin_marker_mask(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_qbase_set_margin_marker_mask(void* self, int margin, int mask);
void q_sciscintilla_set_margin_sensitivity(void* self, int margin, bool sens);
void q_sciscintilla_on_set_margin_sensitivity(void* self, void (*slot)(void*, int, bool));
void q_sciscintilla_qbase_set_margin_sensitivity(void* self, int margin, bool sens);
void q_sciscintilla_set_margin_width(void* self, int margin, int width);
void q_sciscintilla_on_set_margin_width(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_qbase_set_margin_width(void* self, int margin, int width);
void q_sciscintilla_set_margin_width2(void* self, int margin, const char* s);
void q_sciscintilla_on_set_margin_width2(void* self, void (*slot)(void*, int, const char*));
void q_sciscintilla_qbase_set_margin_width2(void* self, int margin, const char* s);
void q_sciscintilla_set_modified(void* self, bool m);
void q_sciscintilla_on_set_modified(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_modified(void* self, bool m);
void q_sciscintilla_set_paper(void* self, void* c);
void q_sciscintilla_on_set_paper(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_paper(void* self, void* c);
void q_sciscintilla_set_read_only(void* self, bool ro);
void q_sciscintilla_on_set_read_only(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_read_only(void* self, bool ro);
void q_sciscintilla_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);
void q_sciscintilla_on_set_selection(void* self, void (*slot)(void*, int, int, int, int));
void q_sciscintilla_qbase_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);
void q_sciscintilla_set_selection_background_color(void* self, void* col);
void q_sciscintilla_on_set_selection_background_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_selection_background_color(void* self, void* col);
void q_sciscintilla_set_selection_foreground_color(void* self, void* col);
void q_sciscintilla_on_set_selection_foreground_color(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_set_selection_foreground_color(void* self, void* col);
void q_sciscintilla_set_tab_indents(void* self, bool indent);
void q_sciscintilla_on_set_tab_indents(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_tab_indents(void* self, bool indent);
void q_sciscintilla_set_tab_width(void* self, int width);
void q_sciscintilla_on_set_tab_width(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_set_tab_width(void* self, int width);
void q_sciscintilla_set_text(void* self, const char* text);
void q_sciscintilla_on_set_text(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_qbase_set_text(void* self, const char* text);
void q_sciscintilla_set_utf8(void* self, bool cp);
void q_sciscintilla_on_set_utf8(void* self, void (*slot)(void*, bool));
void q_sciscintilla_qbase_set_utf8(void* self, bool cp);
void q_sciscintilla_set_whitespace_visibility(void* self, int64_t mode);
void q_sciscintilla_on_set_whitespace_visibility(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_whitespace_visibility(void* self, int64_t mode);
void q_sciscintilla_set_wrap_mode(void* self, int64_t mode);
void q_sciscintilla_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t));
void q_sciscintilla_qbase_set_wrap_mode(void* self, int64_t mode);
void q_sciscintilla_undo(void* self);
void q_sciscintilla_on_undo(void* self, void (*slot)());
void q_sciscintilla_qbase_undo(void* self);
void q_sciscintilla_unindent(void* self, int line);
void q_sciscintilla_on_unindent(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_unindent(void* self, int line);
void q_sciscintilla_zoom_in(void* self, int range);
void q_sciscintilla_on_zoom_in(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_zoom_in(void* self, int range);
void q_sciscintilla_zoom_in2(void* self);
void q_sciscintilla_on_zoom_in2(void* self, void (*slot)());
void q_sciscintilla_qbase_zoom_in2(void* self);
void q_sciscintilla_zoom_out(void* self, int range);
void q_sciscintilla_on_zoom_out(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_zoom_out(void* self, int range);
void q_sciscintilla_zoom_out2(void* self);
void q_sciscintilla_on_zoom_out2(void* self, void (*slot)());
void q_sciscintilla_qbase_zoom_out2(void* self);
void q_sciscintilla_zoom_to(void* self, int size);
void q_sciscintilla_on_zoom_to(void* self, void (*slot)(void*, int));
void q_sciscintilla_qbase_zoom_to(void* self, int size);
void q_sciscintilla_cursor_position_changed(void* self, int line, int index);
void q_sciscintilla_on_cursor_position_changed(void* self, void (*slot)(void*, int, int));
void q_sciscintilla_copy_available(void* self, bool yes);
void q_sciscintilla_on_copy_available(void* self, void (*slot)(void*, bool));
void q_sciscintilla_indicator_clicked(void* self, int line, int index, int64_t state);
void q_sciscintilla_on_indicator_clicked(void* self, void (*slot)(void*, int, int, int64_t));
void q_sciscintilla_indicator_released(void* self, int line, int index, int64_t state);
void q_sciscintilla_on_indicator_released(void* self, void (*slot)(void*, int, int, int64_t));
void q_sciscintilla_lines_changed(void* self);
void q_sciscintilla_on_lines_changed(void* self, void (*slot)(void*));
void q_sciscintilla_margin_clicked(void* self, int margin, int line, int64_t state);
void q_sciscintilla_on_margin_clicked(void* self, void (*slot)(void*, int, int, int64_t));
void q_sciscintilla_margin_right_clicked(void* self, int margin, int line, int64_t state);
void q_sciscintilla_on_margin_right_clicked(void* self, void (*slot)(void*, int, int, int64_t));
void q_sciscintilla_modification_attempted(void* self);
void q_sciscintilla_on_modification_attempted(void* self, void (*slot)(void*));
void q_sciscintilla_modification_changed(void* self, bool m);
void q_sciscintilla_on_modification_changed(void* self, void (*slot)(void*, bool));
void q_sciscintilla_selection_changed(void* self);
void q_sciscintilla_on_selection_changed(void* self, void (*slot)(void*));
void q_sciscintilla_text_changed(void* self);
void q_sciscintilla_on_text_changed(void* self, void (*slot)(void*));
void q_sciscintilla_user_list_activated(void* self, int id, const char* stringVal);
void q_sciscintilla_on_user_list_activated(void* self, void (*slot)(void*, int, const char*));
bool q_sciscintilla_event(void* self, void* e);
void q_sciscintilla_on_event(void* self, bool (*slot)(void*, void*));
bool q_sciscintilla_qbase_event(void* self, void* e);
void q_sciscintilla_change_event(void* self, void* e);
void q_sciscintilla_on_change_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_change_event(void* self, void* e);
void q_sciscintilla_context_menu_event(void* self, void* e);
void q_sciscintilla_on_context_menu_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_context_menu_event(void* self, void* e);
void q_sciscintilla_wheel_event(void* self, void* e);
void q_sciscintilla_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_qbase_wheel_event(void* self, void* e);
const char* q_sciscintilla_tr2(const char* s, const char* c);
const char* q_sciscintilla_tr3(const char* s, const char* c, int n);
void q_sciscintilla_clear_annotations1(void* self, int line);
int32_t q_sciscintilla_indicator_define2(void* self, int64_t style, int indicatorNumber);
int32_t q_sciscintilla_marker_define2(void* self, int64_t sym, int markerNumber);
int32_t q_sciscintilla_marker_define22(void* self, char ch, int markerNumber);
int32_t q_sciscintilla_marker_define23(void* self, void* pm, int markerNumber);
int32_t q_sciscintilla_marker_define24(void* self, void* im, int markerNumber);
void q_sciscintilla_marker_delete2(void* self, int linenr, int markerNumber);
void q_sciscintilla_marker_delete_all1(void* self, int markerNumber);
void q_sciscintilla_set_indicator_draw_under2(void* self, bool under, int indicatorNumber);
void q_sciscintilla_set_indicator_foreground_color2(void* self, void* col, int indicatorNumber);
void q_sciscintilla_set_indicator_hover_foreground_color2(void* self, void* col, int indicatorNumber);
void q_sciscintilla_set_indicator_hover_style2(void* self, int64_t style, int indicatorNumber);
void q_sciscintilla_set_indicator_outline_color2(void* self, void* col, int indicatorNumber);
void q_sciscintilla_clear_margin_text1(void* self, int line);
void q_sciscintilla_set_marker_background_color2(void* self, void* col, int markerNumber);
void q_sciscintilla_set_marker_foreground_color2(void* self, void* col, int markerNumber);
void q_sciscintilla_set_wrap_visual_flags2(void* self, int64_t endFlag, int64_t startFlag);
void q_sciscintilla_set_wrap_visual_flags3(void* self, int64_t endFlag, int64_t startFlag, int indent);
QsciScintillaBase* q_sciscintilla_pool();
void q_sciscintilla_replace_horizontal_scroll_bar(void* self, void* scrollBar);
void q_sciscintilla_replace_vertical_scroll_bar(void* self, void* scrollBar);
int64_t q_sciscintilla_send_scintilla(void* self, uint32_t msg);
int64_t q_sciscintilla_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam);
int64_t q_sciscintilla_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam);
int64_t q_sciscintilla_send_scintilla4(void* self, uint32_t msg, const char* lParam);
int64_t q_sciscintilla_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam);
int64_t q_sciscintilla_send_scintilla6(void* self, uint32_t msg, int64_t wParam);
int64_t q_sciscintilla_send_scintilla7(void* self, uint32_t msg, int wParam);
int64_t q_sciscintilla_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText);
int64_t q_sciscintilla_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col);
int64_t q_sciscintilla_send_scintilla10(void* self, uint32_t msg, void* col);
int64_t q_sciscintilla_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax);
int64_t q_sciscintilla_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam);
int64_t q_sciscintilla_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam);
void* q_sciscintilla_send_scintilla_ptr_result(void* self, uint32_t msg);
int32_t q_sciscintilla_command_key(int qt_key, int* modifiers);
void q_sciscintilla_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes);
void q_sciscintilla_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self);
void q_sciscintilla_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self);
void q_sciscintilla_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method);
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method);
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position);
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position);
void q_sciscintilla_s_c_e_n__c_h_a_n_g_e(void* self);
void q_sciscintilla_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction);
void q_sciscintilla_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded);
void q_sciscintilla_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers);
void q_sciscintilla_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y);
void q_sciscintilla_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y);
void q_sciscintilla_s_c_n__f_o_c_u_s_i_n(void* self);
void q_sciscintilla_s_c_n__f_o_c_u_s_o_u_t(void* self);
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers);
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers);
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers);
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers);
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers);
void q_sciscintilla_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3);
void q_sciscintilla_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin);
void q_sciscintilla_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin);
void q_sciscintilla_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);
void q_sciscintilla_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self);
void q_sciscintilla_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2);
void q_sciscintilla_s_c_n__p_a_i_n_t_e_d(void* self);
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self);
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self);
void q_sciscintilla_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position);
void q_sciscintilla_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url);
void q_sciscintilla_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated);
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position);
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method);
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id);
void q_sciscintilla_s_c_n__z_o_o_m(void* self);
int64_t q_sciscintilla_send_scintilla22(void* self, uint32_t msg, uint64_t wParam);
int64_t q_sciscintilla_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam);
int64_t q_sciscintilla_vertical_scroll_bar_policy(void* self);
void q_sciscintilla_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);
QScrollBar* q_sciscintilla_vertical_scroll_bar(void* self);
void q_sciscintilla_set_vertical_scroll_bar(void* self, void* scrollbar);
int64_t q_sciscintilla_horizontal_scroll_bar_policy(void* self);
void q_sciscintilla_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);
QScrollBar* q_sciscintilla_horizontal_scroll_bar(void* self);
void q_sciscintilla_set_horizontal_scroll_bar(void* self, void* scrollbar);
QWidget* q_sciscintilla_corner_widget(void* self);
void q_sciscintilla_set_corner_widget(void* self, void* widget);
void q_sciscintilla_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);
libqt_list /* of QWidget* */ q_sciscintilla_scroll_bar_widgets(void* self, int64_t alignment);
QWidget* q_sciscintilla_viewport(void* self);
void q_sciscintilla_set_viewport(void* self, void* widget);
QSize* q_sciscintilla_maximum_viewport_size(void* self);
int64_t q_sciscintilla_size_adjust_policy(void* self);
void q_sciscintilla_set_size_adjust_policy(void* self, int64_t policy);
int32_t q_sciscintilla_frame_style(void* self);
void q_sciscintilla_set_frame_style(void* self, int frameStyle);
int32_t q_sciscintilla_frame_width(void* self);
int64_t q_sciscintilla_frame_shape(void* self);
void q_sciscintilla_set_frame_shape(void* self, int64_t frameShape);
int64_t q_sciscintilla_frame_shadow(void* self);
void q_sciscintilla_set_frame_shadow(void* self, int64_t frameShadow);
int32_t q_sciscintilla_line_width(void* self);
void q_sciscintilla_set_line_width(void* self, int lineWidth);
int32_t q_sciscintilla_mid_line_width(void* self);
void q_sciscintilla_set_mid_line_width(void* self, int midLineWidth);
QRect* q_sciscintilla_frame_rect(void* self);
void q_sciscintilla_set_frame_rect(void* self, void* frameRect);
uintptr_t q_sciscintilla_win_id(void* self);
void q_sciscintilla_create_win_id(void* self);
uintptr_t q_sciscintilla_internal_win_id(void* self);
uintptr_t q_sciscintilla_effective_win_id(void* self);
QStyle* q_sciscintilla_style(void* self);
void q_sciscintilla_set_style(void* self, void* style);
bool q_sciscintilla_is_top_level(void* self);
bool q_sciscintilla_is_window(void* self);
bool q_sciscintilla_is_modal(void* self);
int64_t q_sciscintilla_window_modality(void* self);
void q_sciscintilla_set_window_modality(void* self, int64_t windowModality);
bool q_sciscintilla_is_enabled(void* self);
bool q_sciscintilla_is_enabled_to(void* self, void* param1);
void q_sciscintilla_set_enabled(void* self, bool enabled);
void q_sciscintilla_set_disabled(void* self, bool disabled);
void q_sciscintilla_set_window_modified(void* self, bool windowModified);
QRect* q_sciscintilla_frame_geometry(void* self);
QRect* q_sciscintilla_geometry(void* self);
QRect* q_sciscintilla_normal_geometry(void* self);
int32_t q_sciscintilla_x(void* self);
int32_t q_sciscintilla_y(void* self);
QPoint* q_sciscintilla_pos(void* self);
QSize* q_sciscintilla_frame_size(void* self);
QSize* q_sciscintilla_size(void* self);
int32_t q_sciscintilla_width(void* self);
int32_t q_sciscintilla_height(void* self);
QRect* q_sciscintilla_rect(void* self);
QRect* q_sciscintilla_children_rect(void* self);
QRegion* q_sciscintilla_children_region(void* self);
QSize* q_sciscintilla_minimum_size(void* self);
QSize* q_sciscintilla_maximum_size(void* self);
int32_t q_sciscintilla_minimum_width(void* self);
int32_t q_sciscintilla_minimum_height(void* self);
int32_t q_sciscintilla_maximum_width(void* self);
int32_t q_sciscintilla_maximum_height(void* self);
void q_sciscintilla_set_minimum_size(void* self, void* minimumSize);
void q_sciscintilla_set_minimum_size2(void* self, int minw, int minh);
void q_sciscintilla_set_maximum_size(void* self, void* maximumSize);
void q_sciscintilla_set_maximum_size2(void* self, int maxw, int maxh);
void q_sciscintilla_set_minimum_width(void* self, int minw);
void q_sciscintilla_set_minimum_height(void* self, int minh);
void q_sciscintilla_set_maximum_width(void* self, int maxw);
void q_sciscintilla_set_maximum_height(void* self, int maxh);
QSize* q_sciscintilla_size_increment(void* self);
void q_sciscintilla_set_size_increment(void* self, void* sizeIncrement);
void q_sciscintilla_set_size_increment2(void* self, int w, int h);
QSize* q_sciscintilla_base_size(void* self);
void q_sciscintilla_set_base_size(void* self, void* baseSize);
void q_sciscintilla_set_base_size2(void* self, int basew, int baseh);
void q_sciscintilla_set_fixed_size(void* self, void* fixedSize);
void q_sciscintilla_set_fixed_size2(void* self, int w, int h);
void q_sciscintilla_set_fixed_width(void* self, int w);
void q_sciscintilla_set_fixed_height(void* self, int h);
QPointF* q_sciscintilla_map_to_global(void* self, void* param1);
QPoint* q_sciscintilla_map_to_global_with_q_point(void* self, void* param1);
QPointF* q_sciscintilla_map_from_global(void* self, void* param1);
QPoint* q_sciscintilla_map_from_global_with_q_point(void* self, void* param1);
QPointF* q_sciscintilla_map_to_parent(void* self, void* param1);
QPoint* q_sciscintilla_map_to_parent_with_q_point(void* self, void* param1);
QPointF* q_sciscintilla_map_from_parent(void* self, void* param1);
QPoint* q_sciscintilla_map_from_parent_with_q_point(void* self, void* param1);
QPointF* q_sciscintilla_map_to(void* self, void* param1, void* param2);
QPoint* q_sciscintilla_map_to2(void* self, void* param1, void* param2);
QPointF* q_sciscintilla_map_from(void* self, void* param1, void* param2);
QPoint* q_sciscintilla_map_from2(void* self, void* param1, void* param2);
QWidget* q_sciscintilla_window(void* self);
QWidget* q_sciscintilla_native_parent_widget(void* self);
QWidget* q_sciscintilla_top_level_widget(void* self);
QPalette* q_sciscintilla_palette(void* self);
void q_sciscintilla_set_palette(void* self, void* palette);
void q_sciscintilla_set_background_role(void* self, int64_t backgroundRole);
int64_t q_sciscintilla_background_role(void* self);
void q_sciscintilla_set_foreground_role(void* self, int64_t foregroundRole);
int64_t q_sciscintilla_foreground_role(void* self);
QFont* q_sciscintilla_font(void* self);
QFontMetrics* q_sciscintilla_font_metrics(void* self);
QFontInfo* q_sciscintilla_font_info(void* self);
QCursor* q_sciscintilla_cursor(void* self);
void q_sciscintilla_set_cursor(void* self, void* cursor);
void q_sciscintilla_unset_cursor(void* self);
void q_sciscintilla_set_mouse_tracking(void* self, bool enable);
bool q_sciscintilla_has_mouse_tracking(void* self);
bool q_sciscintilla_under_mouse(void* self);
void q_sciscintilla_set_tablet_tracking(void* self, bool enable);
bool q_sciscintilla_has_tablet_tracking(void* self);
void q_sciscintilla_set_mask(void* self, void* mask);
void q_sciscintilla_set_mask_with_mask(void* self, void* mask);
QRegion* q_sciscintilla_mask(void* self);
void q_sciscintilla_clear_mask(void* self);
void q_sciscintilla_render(void* self, void* target);
void q_sciscintilla_render_with_painter(void* self, void* painter);
QPixmap* q_sciscintilla_grab(void* self);
QGraphicsEffect* q_sciscintilla_graphics_effect(void* self);
void q_sciscintilla_set_graphics_effect(void* self, void* effect);
void q_sciscintilla_grab_gesture(void* self, int64_t typeVal);
void q_sciscintilla_ungrab_gesture(void* self, int64_t typeVal);
void q_sciscintilla_set_window_title(void* self, const char* windowTitle);
void q_sciscintilla_set_style_sheet(void* self, const char* styleSheet);
const char* q_sciscintilla_style_sheet(void* self);
const char* q_sciscintilla_window_title(void* self);
void q_sciscintilla_set_window_icon(void* self, void* icon);
QIcon* q_sciscintilla_window_icon(void* self);
void q_sciscintilla_set_window_icon_text(void* self, const char* windowIconText);
const char* q_sciscintilla_window_icon_text(void* self);
void q_sciscintilla_set_window_role(void* self, const char* windowRole);
const char* q_sciscintilla_window_role(void* self);
void q_sciscintilla_set_window_file_path(void* self, const char* filePath);
const char* q_sciscintilla_window_file_path(void* self);
void q_sciscintilla_set_window_opacity(void* self, double level);
double q_sciscintilla_window_opacity(void* self);
bool q_sciscintilla_is_window_modified(void* self);
void q_sciscintilla_set_tool_tip(void* self, const char* toolTip);
const char* q_sciscintilla_tool_tip(void* self);
void q_sciscintilla_set_tool_tip_duration(void* self, int msec);
int32_t q_sciscintilla_tool_tip_duration(void* self);
void q_sciscintilla_set_status_tip(void* self, const char* statusTip);
const char* q_sciscintilla_status_tip(void* self);
void q_sciscintilla_set_whats_this(void* self, const char* whatsThis);
const char* q_sciscintilla_whats_this(void* self);
const char* q_sciscintilla_accessible_name(void* self);
void q_sciscintilla_set_accessible_name(void* self, const char* name);
const char* q_sciscintilla_accessible_description(void* self);
void q_sciscintilla_set_accessible_description(void* self, const char* description);
void q_sciscintilla_set_layout_direction(void* self, int64_t direction);
int64_t q_sciscintilla_layout_direction(void* self);
void q_sciscintilla_unset_layout_direction(void* self);
void q_sciscintilla_set_locale(void* self, void* locale);
QLocale* q_sciscintilla_locale(void* self);
void q_sciscintilla_unset_locale(void* self);
bool q_sciscintilla_is_right_to_left(void* self);
bool q_sciscintilla_is_left_to_right(void* self);
void q_sciscintilla_set_focus(void* self);
bool q_sciscintilla_is_active_window(void* self);
void q_sciscintilla_activate_window(void* self);
void q_sciscintilla_clear_focus(void* self);
void q_sciscintilla_set_focus_with_reason(void* self, int64_t reason);
int64_t q_sciscintilla_focus_policy(void* self);
void q_sciscintilla_set_focus_policy(void* self, int64_t policy);
bool q_sciscintilla_has_focus(void* self);
void q_sciscintilla_set_tab_order(void* param1, void* param2);
void q_sciscintilla_set_focus_proxy(void* self, void* focusProxy);
QWidget* q_sciscintilla_focus_proxy(void* self);
int64_t q_sciscintilla_context_menu_policy(void* self);
void q_sciscintilla_set_context_menu_policy(void* self, int64_t policy);
void q_sciscintilla_grab_mouse(void* self);
void q_sciscintilla_grab_mouse_with_q_cursor(void* self, void* param1);
void q_sciscintilla_release_mouse(void* self);
void q_sciscintilla_grab_keyboard(void* self);
void q_sciscintilla_release_keyboard(void* self);
int32_t q_sciscintilla_grab_shortcut(void* self, void* key);
void q_sciscintilla_release_shortcut(void* self, int id);
void q_sciscintilla_set_shortcut_enabled(void* self, int id);
void q_sciscintilla_set_shortcut_auto_repeat(void* self, int id);
QWidget* q_sciscintilla_mouse_grabber();
QWidget* q_sciscintilla_keyboard_grabber();
bool q_sciscintilla_updates_enabled(void* self);
void q_sciscintilla_set_updates_enabled(void* self, bool enable);
QGraphicsProxyWidget* q_sciscintilla_graphics_proxy_widget(void* self);
void q_sciscintilla_update(void* self);
void q_sciscintilla_repaint(void* self);
void q_sciscintilla_update2(void* self, int x, int y, int w, int h);
void q_sciscintilla_update_with_q_rect(void* self, void* param1);
void q_sciscintilla_update_with_q_region(void* self, void* param1);
void q_sciscintilla_repaint2(void* self, int x, int y, int w, int h);
void q_sciscintilla_repaint_with_q_rect(void* self, void* param1);
void q_sciscintilla_repaint_with_q_region(void* self, void* param1);
void q_sciscintilla_set_hidden(void* self, bool hidden);
void q_sciscintilla_show(void* self);
void q_sciscintilla_hide(void* self);
void q_sciscintilla_show_minimized(void* self);
void q_sciscintilla_show_maximized(void* self);
void q_sciscintilla_show_full_screen(void* self);
void q_sciscintilla_show_normal(void* self);
bool q_sciscintilla_close(void* self);
void q_sciscintilla_raise(void* self);
void q_sciscintilla_lower(void* self);
void q_sciscintilla_stack_under(void* self, void* param1);
void q_sciscintilla_move(void* self, int x, int y);
void q_sciscintilla_move_with_q_point(void* self, void* param1);
void q_sciscintilla_resize(void* self, int w, int h);
void q_sciscintilla_resize_with_q_size(void* self, void* param1);
void q_sciscintilla_set_geometry(void* self, int x, int y, int w, int h);
void q_sciscintilla_set_geometry_with_geometry(void* self, void* geometry);
char* q_sciscintilla_save_geometry(void* self);
bool q_sciscintilla_restore_geometry(void* self, const char* geometry);
void q_sciscintilla_adjust_size(void* self);
bool q_sciscintilla_is_visible(void* self);
bool q_sciscintilla_is_visible_to(void* self, void* param1);
bool q_sciscintilla_is_hidden(void* self);
bool q_sciscintilla_is_minimized(void* self);
bool q_sciscintilla_is_maximized(void* self);
bool q_sciscintilla_is_full_screen(void* self);
int64_t q_sciscintilla_window_state(void* self);
void q_sciscintilla_set_window_state(void* self, int64_t state);
void q_sciscintilla_override_window_state(void* self, int64_t state);
QSizePolicy* q_sciscintilla_size_policy(void* self);
void q_sciscintilla_set_size_policy(void* self, void* sizePolicy);
void q_sciscintilla_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);
QRegion* q_sciscintilla_visible_region(void* self);
void q_sciscintilla_set_contents_margins(void* self, int left, int top, int right, int bottom);
void q_sciscintilla_set_contents_margins_with_margins(void* self, void* margins);
QMargins* q_sciscintilla_contents_margins(void* self);
QRect* q_sciscintilla_contents_rect(void* self);
QLayout* q_sciscintilla_layout(void* self);
void q_sciscintilla_set_layout(void* self, void* layout);
void q_sciscintilla_update_geometry(void* self);
void q_sciscintilla_set_parent(void* self, void* parent);
void q_sciscintilla_set_parent2(void* self, void* parent, int64_t f);
void q_sciscintilla_scroll(void* self, int dx, int dy);
void q_sciscintilla_scroll2(void* self, int dx, int dy, void* param3);
QWidget* q_sciscintilla_focus_widget(void* self);
QWidget* q_sciscintilla_next_in_focus_chain(void* self);
QWidget* q_sciscintilla_previous_in_focus_chain(void* self);
bool q_sciscintilla_accept_drops(void* self);
void q_sciscintilla_set_accept_drops(void* self, bool on);
void q_sciscintilla_add_action(void* self, void* action);
void q_sciscintilla_add_actions(void* self, void* actions[]);
void q_sciscintilla_insert_actions(void* self, void* before, void* actions[]);
void q_sciscintilla_insert_action(void* self, void* before, void* action);
void q_sciscintilla_remove_action(void* self, void* action);
libqt_list /* of QAction* */ q_sciscintilla_actions(void* self);
QAction* q_sciscintilla_add_action_with_text(void* self, const char* text);
QAction* q_sciscintilla_add_action2(void* self, void* icon, const char* text);
QAction* q_sciscintilla_add_action3(void* self, const char* text, void* shortcut);
QAction* q_sciscintilla_add_action4(void* self, void* icon, const char* text, void* shortcut);
QWidget* q_sciscintilla_parent_widget(void* self);
void q_sciscintilla_set_window_flags(void* self, int64_t typeVal);
int64_t q_sciscintilla_window_flags(void* self);
void q_sciscintilla_set_window_flag(void* self, int64_t param1);
void q_sciscintilla_override_window_flags(void* self, int64_t typeVal);
int64_t q_sciscintilla_window_type(void* self);
QWidget* q_sciscintilla_find(uint64_t param1);
QWidget* q_sciscintilla_child_at(void* self, int x, int y);
QWidget* q_sciscintilla_child_at_with_q_point(void* self, void* p);
void q_sciscintilla_set_attribute(void* self, int64_t param1);
bool q_sciscintilla_test_attribute(void* self, int64_t param1);
void q_sciscintilla_ensure_polished(void* self);
bool q_sciscintilla_is_ancestor_of(void* self, void* child);
bool q_sciscintilla_auto_fill_background(void* self);
void q_sciscintilla_set_auto_fill_background(void* self, bool enabled);
QBackingStore* q_sciscintilla_backing_store(void* self);
QWindow* q_sciscintilla_window_handle(void* self);
QScreen* q_sciscintilla_screen(void* self);
void q_sciscintilla_set_screen(void* self, void* screen);
QWidget* q_sciscintilla_create_window_container(void* window);
void q_sciscintilla_window_title_changed(void* self, const char* title);
void q_sciscintilla_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_window_icon_changed(void* self, void* icon);
void q_sciscintilla_on_window_icon_changed(void* self, void (*slot)(void*, void*));
void q_sciscintilla_window_icon_text_changed(void* self, const char* iconText);
void q_sciscintilla_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));
void q_sciscintilla_custom_context_menu_requested(void* self, void* pos);
void q_sciscintilla_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));
int64_t q_sciscintilla_input_method_hints(void* self);
void q_sciscintilla_set_input_method_hints(void* self, int64_t hints);
void q_sciscintilla_render2(void* self, void* target, void* targetOffset);
void q_sciscintilla_render3(void* self, void* target, void* targetOffset, void* sourceRegion);
void q_sciscintilla_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);
void q_sciscintilla_render22(void* self, void* painter, void* targetOffset);
void q_sciscintilla_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);
void q_sciscintilla_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);
QPixmap* q_sciscintilla_grab1(void* self, void* rectangle);
void q_sciscintilla_grab_gesture2(void* self, int64_t typeVal, int64_t flags);
int32_t q_sciscintilla_grab_shortcut2(void* self, void* key, int64_t context);
void q_sciscintilla_set_shortcut_enabled2(void* self, int id, bool enable);
void q_sciscintilla_set_shortcut_auto_repeat2(void* self, int id, bool enable);
void q_sciscintilla_set_window_flag2(void* self, int64_t param1, bool on);
void q_sciscintilla_set_attribute2(void* self, int64_t param1, bool on);
QWidget* q_sciscintilla_create_window_container2(void* window, void* parent);
QWidget* q_sciscintilla_create_window_container3(void* window, void* parent, int64_t flags);
const char* q_sciscintilla_object_name(void* self);
void q_sciscintilla_set_object_name(void* self, const char* name);
bool q_sciscintilla_is_widget_type(void* self);
bool q_sciscintilla_is_window_type(void* self);
bool q_sciscintilla_is_quick_item_type(void* self);
bool q_sciscintilla_signals_blocked(void* self);
bool q_sciscintilla_block_signals(void* self, bool b);
QThread* q_sciscintilla_thread(void* self);
void q_sciscintilla_move_to_thread(void* self, void* thread);
int32_t q_sciscintilla_start_timer(void* self, int interval);
void q_sciscintilla_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sciscintilla_children(void* self);
void q_sciscintilla_install_event_filter(void* self, void* filterObj);
void q_sciscintilla_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sciscintilla_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sciscintilla_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sciscintilla_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sciscintilla_disconnect_with_q_meta_object_connection(void* param1);
void q_sciscintilla_dump_object_tree(void* self);
void q_sciscintilla_dump_object_info(void* self);
bool q_sciscintilla_set_property(void* self, const char* name, void* value);
QVariant* q_sciscintilla_property(void* self, const char* name);
const char** q_sciscintilla_dynamic_property_names(void* self);
QBindingStorage* q_sciscintilla_binding_storage(void* self);
QBindingStorage* q_sciscintilla_binding_storage2(void* self);
void q_sciscintilla_destroyed(void* self);
void q_sciscintilla_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sciscintilla_parent(void* self);
bool q_sciscintilla_inherits(void* self, const char* classname);
void q_sciscintilla_delete_later(void* self);
int32_t q_sciscintilla_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sciscintilla_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sciscintilla_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sciscintilla_destroyed1(void* self, void* param1);
void q_sciscintilla_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sciscintilla_painting_active(void* self);
int32_t q_sciscintilla_width_m_m(void* self);
int32_t q_sciscintilla_height_m_m(void* self);
int32_t q_sciscintilla_logical_dpi_x(void* self);
int32_t q_sciscintilla_logical_dpi_y(void* self);
int32_t q_sciscintilla_physical_dpi_x(void* self);
int32_t q_sciscintilla_physical_dpi_y(void* self);
double q_sciscintilla_device_pixel_ratio(void* self);
double q_sciscintilla_device_pixel_ratio_f(void* self);
int32_t q_sciscintilla_color_count(void* self);
int32_t q_sciscintilla_depth(void* self);
double q_sciscintilla_device_pixel_ratio_f_scale();
bool q_sciscintilla_can_insert_from_mime_data(void* self, void* source);
bool q_sciscintilla_qbase_can_insert_from_mime_data(void* self, void* source);
void q_sciscintilla_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*));
char* q_sciscintilla_from_mime_data(void* self, void* source, bool* rectangular);
char* q_sciscintilla_qbase_from_mime_data(void* self, void* source, bool* rectangular);
void q_sciscintilla_on_from_mime_data(void* self, char* (*slot)(void*, void*, bool*));
QMimeData* q_sciscintilla_to_mime_data(void* self, const char* text, bool rectangular);
QMimeData* q_sciscintilla_qbase_to_mime_data(void* self, const char* text, bool rectangular);
void q_sciscintilla_on_to_mime_data(void* self, QMimeData* (*slot)(void*, const char*, bool));
void q_sciscintilla_drag_enter_event(void* self, void* e);
void q_sciscintilla_qbase_drag_enter_event(void* self, void* e);
void q_sciscintilla_on_drag_enter_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_drag_leave_event(void* self, void* e);
void q_sciscintilla_qbase_drag_leave_event(void* self, void* e);
void q_sciscintilla_on_drag_leave_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_drag_move_event(void* self, void* e);
void q_sciscintilla_qbase_drag_move_event(void* self, void* e);
void q_sciscintilla_on_drag_move_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_drop_event(void* self, void* e);
void q_sciscintilla_qbase_drop_event(void* self, void* e);
void q_sciscintilla_on_drop_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_focus_in_event(void* self, void* e);
void q_sciscintilla_qbase_focus_in_event(void* self, void* e);
void q_sciscintilla_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_focus_out_event(void* self, void* e);
void q_sciscintilla_qbase_focus_out_event(void* self, void* e);
void q_sciscintilla_on_focus_out_event(void* self, void (*slot)(void*, void*));
bool q_sciscintilla_focus_next_prev_child(void* self, bool next);
bool q_sciscintilla_qbase_focus_next_prev_child(void* self, bool next);
void q_sciscintilla_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));
void q_sciscintilla_key_press_event(void* self, void* e);
void q_sciscintilla_qbase_key_press_event(void* self, void* e);
void q_sciscintilla_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_input_method_event(void* self, void* event);
void q_sciscintilla_qbase_input_method_event(void* self, void* event);
void q_sciscintilla_on_input_method_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_mouse_double_click_event(void* self, void* e);
void q_sciscintilla_qbase_mouse_double_click_event(void* self, void* e);
void q_sciscintilla_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_mouse_move_event(void* self, void* e);
void q_sciscintilla_qbase_mouse_move_event(void* self, void* e);
void q_sciscintilla_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_mouse_press_event(void* self, void* e);
void q_sciscintilla_qbase_mouse_press_event(void* self, void* e);
void q_sciscintilla_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_mouse_release_event(void* self, void* e);
void q_sciscintilla_qbase_mouse_release_event(void* self, void* e);
void q_sciscintilla_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_paint_event(void* self, void* e);
void q_sciscintilla_qbase_paint_event(void* self, void* e);
void q_sciscintilla_on_paint_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_resize_event(void* self, void* e);
void q_sciscintilla_qbase_resize_event(void* self, void* e);
void q_sciscintilla_on_resize_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_scroll_contents_by(void* self, int dx, int dy);
void q_sciscintilla_qbase_scroll_contents_by(void* self, int dx, int dy);
void q_sciscintilla_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));
QSize* q_sciscintilla_minimum_size_hint(void* self);
QSize* q_sciscintilla_qbase_minimum_size_hint(void* self);
void q_sciscintilla_on_minimum_size_hint(void* self, QSize* (*slot)());
QSize* q_sciscintilla_size_hint(void* self);
QSize* q_sciscintilla_qbase_size_hint(void* self);
void q_sciscintilla_on_size_hint(void* self, QSize* (*slot)());
void q_sciscintilla_setup_viewport(void* self, void* viewport);
void q_sciscintilla_qbase_setup_viewport(void* self, void* viewport);
void q_sciscintilla_on_setup_viewport(void* self, void (*slot)(void*, void*));
bool q_sciscintilla_event_filter(void* self, void* param1, void* param2);
bool q_sciscintilla_qbase_event_filter(void* self, void* param1, void* param2);
void q_sciscintilla_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
bool q_sciscintilla_viewport_event(void* self, void* param1);
bool q_sciscintilla_qbase_viewport_event(void* self, void* param1);
void q_sciscintilla_on_viewport_event(void* self, bool (*slot)(void*, void*));
QSize* q_sciscintilla_viewport_size_hint(void* self);
QSize* q_sciscintilla_qbase_viewport_size_hint(void* self);
void q_sciscintilla_on_viewport_size_hint(void* self, QSize* (*slot)());
void q_sciscintilla_init_style_option(void* self, void* option);
void q_sciscintilla_qbase_init_style_option(void* self, void* option);
void q_sciscintilla_on_init_style_option(void* self, void (*slot)(void*, void*));
int32_t q_sciscintilla_dev_type(void* self);
int32_t q_sciscintilla_qbase_dev_type(void* self);
void q_sciscintilla_on_dev_type(void* self, int32_t (*slot)());
void q_sciscintilla_set_visible(void* self, bool visible);
void q_sciscintilla_qbase_set_visible(void* self, bool visible);
void q_sciscintilla_on_set_visible(void* self, void (*slot)(void*, bool));
int32_t q_sciscintilla_height_for_width(void* self, int param1);
int32_t q_sciscintilla_qbase_height_for_width(void* self, int param1);
void q_sciscintilla_on_height_for_width(void* self, int32_t (*slot)(void*, int));
bool q_sciscintilla_has_height_for_width(void* self);
bool q_sciscintilla_qbase_has_height_for_width(void* self);
void q_sciscintilla_on_has_height_for_width(void* self, bool (*slot)());
QPaintEngine* q_sciscintilla_paint_engine(void* self);
QPaintEngine* q_sciscintilla_qbase_paint_engine(void* self);
void q_sciscintilla_on_paint_engine(void* self, QPaintEngine* (*slot)());
void q_sciscintilla_key_release_event(void* self, void* event);
void q_sciscintilla_qbase_key_release_event(void* self, void* event);
void q_sciscintilla_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_enter_event(void* self, void* event);
void q_sciscintilla_qbase_enter_event(void* self, void* event);
void q_sciscintilla_on_enter_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_leave_event(void* self, void* event);
void q_sciscintilla_qbase_leave_event(void* self, void* event);
void q_sciscintilla_on_leave_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_move_event(void* self, void* event);
void q_sciscintilla_qbase_move_event(void* self, void* event);
void q_sciscintilla_on_move_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_close_event(void* self, void* event);
void q_sciscintilla_qbase_close_event(void* self, void* event);
void q_sciscintilla_on_close_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_tablet_event(void* self, void* event);
void q_sciscintilla_qbase_tablet_event(void* self, void* event);
void q_sciscintilla_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_action_event(void* self, void* event);
void q_sciscintilla_qbase_action_event(void* self, void* event);
void q_sciscintilla_on_action_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_show_event(void* self, void* event);
void q_sciscintilla_qbase_show_event(void* self, void* event);
void q_sciscintilla_on_show_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_hide_event(void* self, void* event);
void q_sciscintilla_qbase_hide_event(void* self, void* event);
void q_sciscintilla_on_hide_event(void* self, void (*slot)(void*, void*));
bool q_sciscintilla_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_sciscintilla_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_sciscintilla_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
int32_t q_sciscintilla_metric(void* self, int64_t param1);
int32_t q_sciscintilla_qbase_metric(void* self, int64_t param1);
void q_sciscintilla_on_metric(void* self, int32_t (*slot)(void*, int64_t));
void q_sciscintilla_init_painter(void* self, void* painter);
void q_sciscintilla_qbase_init_painter(void* self, void* painter);
void q_sciscintilla_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_sciscintilla_redirected(void* self, void* offset);
QPaintDevice* q_sciscintilla_qbase_redirected(void* self, void* offset);
void q_sciscintilla_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_sciscintilla_shared_painter(void* self);
QPainter* q_sciscintilla_qbase_shared_painter(void* self);
void q_sciscintilla_on_shared_painter(void* self, QPainter* (*slot)());
void q_sciscintilla_timer_event(void* self, void* event);
void q_sciscintilla_qbase_timer_event(void* self, void* event);
void q_sciscintilla_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_child_event(void* self, void* event);
void q_sciscintilla_qbase_child_event(void* self, void* event);
void q_sciscintilla_on_child_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_custom_event(void* self, void* event);
void q_sciscintilla_qbase_custom_event(void* self, void* event);
void q_sciscintilla_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sciscintilla_connect_notify(void* self, void* signal);
void q_sciscintilla_qbase_connect_notify(void* self, void* signal);
void q_sciscintilla_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sciscintilla_disconnect_notify(void* self, void* signal);
void q_sciscintilla_qbase_disconnect_notify(void* self, void* signal);
void q_sciscintilla_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_sciscintilla_set_scroll_bars(void* self);
void q_sciscintilla_qbase_set_scroll_bars(void* self);
void q_sciscintilla_on_set_scroll_bars(void* self, void (*slot)());
bool q_sciscintilla_context_menu_needed(void* self, int x, int y);
bool q_sciscintilla_qbase_context_menu_needed(void* self, int x, int y);
void q_sciscintilla_on_context_menu_needed(void* self, bool (*slot)(void*, int, int));
void q_sciscintilla_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_sciscintilla_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);
void q_sciscintilla_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));
QMargins* q_sciscintilla_viewport_margins(void* self);
QMargins* q_sciscintilla_qbase_viewport_margins(void* self);
void q_sciscintilla_on_viewport_margins(void* self, QMargins* (*slot)());
void q_sciscintilla_draw_frame(void* self, void* param1);
void q_sciscintilla_qbase_draw_frame(void* self, void* param1);
void q_sciscintilla_on_draw_frame(void* self, void (*slot)(void*, void*));
void q_sciscintilla_update_micro_focus(void* self);
void q_sciscintilla_qbase_update_micro_focus(void* self);
void q_sciscintilla_on_update_micro_focus(void* self, void (*slot)());
void q_sciscintilla_create(void* self);
void q_sciscintilla_qbase_create(void* self);
void q_sciscintilla_on_create(void* self, void (*slot)());
void q_sciscintilla_destroy(void* self);
void q_sciscintilla_qbase_destroy(void* self);
void q_sciscintilla_on_destroy(void* self, void (*slot)());
bool q_sciscintilla_focus_next_child(void* self);
bool q_sciscintilla_qbase_focus_next_child(void* self);
void q_sciscintilla_on_focus_next_child(void* self, bool (*slot)());
bool q_sciscintilla_focus_previous_child(void* self);
bool q_sciscintilla_qbase_focus_previous_child(void* self);
void q_sciscintilla_on_focus_previous_child(void* self, bool (*slot)());
QObject* q_sciscintilla_sender(void* self);
QObject* q_sciscintilla_qbase_sender(void* self);
void q_sciscintilla_on_sender(void* self, QObject* (*slot)());
int32_t q_sciscintilla_sender_signal_index(void* self);
int32_t q_sciscintilla_qbase_sender_signal_index(void* self);
void q_sciscintilla_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sciscintilla_receivers(void* self, const char* signal);
int32_t q_sciscintilla_qbase_receivers(void* self, const char* signal);
void q_sciscintilla_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sciscintilla_is_signal_connected(void* self, void* signal);
bool q_sciscintilla_qbase_is_signal_connected(void* self, void* signal);
void q_sciscintilla_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sciscintilla_delete(void* self);

/// https://doc.qt.io/qt-6/qsciscintilla.html#types

typedef enum {
    QSCISCINTILLA__AIMAINTAIN = 1,
    QSCISCINTILLA__AIOPENING = 2,
    QSCISCINTILLA__AICLOSING = 4,
    QSCISCINTILLA__MONONE = 0,
    QSCISCINTILLA__MOSUBLINESELECT = 1
} QsciScintilla__;

typedef enum {
    QSCISCINTILLA_ANNOTATIONDISPLAY_ANNOTATIONHIDDEN = 0,
    QSCISCINTILLA_ANNOTATIONDISPLAY_ANNOTATIONSTANDARD = 1,
    QSCISCINTILLA_ANNOTATIONDISPLAY_ANNOTATIONBOXED = 2,
    QSCISCINTILLA_ANNOTATIONDISPLAY_ANNOTATIONINDENTED = 3
} QsciScintilla__AnnotationDisplay;

typedef enum {
    QSCISCINTILLA_AUTOCOMPLETIONUSESINGLE_ACUSNEVER = 0,
    QSCISCINTILLA_AUTOCOMPLETIONUSESINGLE_ACUSEXPLICIT = 1,
    QSCISCINTILLA_AUTOCOMPLETIONUSESINGLE_ACUSALWAYS = 2
} QsciScintilla__AutoCompletionUseSingle;

typedef enum {
    QSCISCINTILLA_AUTOCOMPLETIONSOURCE_ACSNONE = 0,
    QSCISCINTILLA_AUTOCOMPLETIONSOURCE_ACSALL = 1,
    QSCISCINTILLA_AUTOCOMPLETIONSOURCE_ACSDOCUMENT = 2,
    QSCISCINTILLA_AUTOCOMPLETIONSOURCE_ACSAPIS = 3
} QsciScintilla__AutoCompletionSource;

typedef enum {
    QSCISCINTILLA_BRACEMATCH_NOBRACEMATCH = 0,
    QSCISCINTILLA_BRACEMATCH_STRICTBRACEMATCH = 1,
    QSCISCINTILLA_BRACEMATCH_SLOPPYBRACEMATCH = 2
} QsciScintilla__BraceMatch;

typedef enum {
    QSCISCINTILLA_CALLTIPSPOSITION_CALLTIPSBELOWTEXT = 0,
    QSCISCINTILLA_CALLTIPSPOSITION_CALLTIPSABOVETEXT = 1
} QsciScintilla__CallTipsPosition;

typedef enum {
    QSCISCINTILLA_CALLTIPSSTYLE_CALLTIPSNONE = 0,
    QSCISCINTILLA_CALLTIPSSTYLE_CALLTIPSNOCONTEXT = 1,
    QSCISCINTILLA_CALLTIPSSTYLE_CALLTIPSNOAUTOCOMPLETIONCONTEXT = 2,
    QSCISCINTILLA_CALLTIPSSTYLE_CALLTIPSCONTEXT = 3
} QsciScintilla__CallTipsStyle;

typedef enum {
    QSCISCINTILLA_EDGEMODE_EDGENONE = 0,
    QSCISCINTILLA_EDGEMODE_EDGELINE = 1,
    QSCISCINTILLA_EDGEMODE_EDGEBACKGROUND = 2,
    QSCISCINTILLA_EDGEMODE_EDGEMULTIPLELINES = 3
} QsciScintilla__EdgeMode;

typedef enum {
    QSCISCINTILLA_EOLMODE_EOLWINDOWS = 0,
    QSCISCINTILLA_EOLMODE_EOLUNIX = 2,
    QSCISCINTILLA_EOLMODE_EOLMAC = 1
} QsciScintilla__EolMode;

typedef enum {
    QSCISCINTILLA_FOLDSTYLE_NOFOLDSTYLE = 0,
    QSCISCINTILLA_FOLDSTYLE_PLAINFOLDSTYLE = 1,
    QSCISCINTILLA_FOLDSTYLE_CIRCLEDFOLDSTYLE = 2,
    QSCISCINTILLA_FOLDSTYLE_BOXEDFOLDSTYLE = 3,
    QSCISCINTILLA_FOLDSTYLE_CIRCLEDTREEFOLDSTYLE = 4,
    QSCISCINTILLA_FOLDSTYLE_BOXEDTREEFOLDSTYLE = 5
} QsciScintilla__FoldStyle;

typedef enum {
    QSCISCINTILLA_INDICATORSTYLE_PLAININDICATOR = 0,
    QSCISCINTILLA_INDICATORSTYLE_SQUIGGLEINDICATOR = 1,
    QSCISCINTILLA_INDICATORSTYLE_TTINDICATOR = 2,
    QSCISCINTILLA_INDICATORSTYLE_DIAGONALINDICATOR = 3,
    QSCISCINTILLA_INDICATORSTYLE_STRIKEINDICATOR = 4,
    QSCISCINTILLA_INDICATORSTYLE_HIDDENINDICATOR = 5,
    QSCISCINTILLA_INDICATORSTYLE_BOXINDICATOR = 6,
    QSCISCINTILLA_INDICATORSTYLE_ROUNDBOXINDICATOR = 7,
    QSCISCINTILLA_INDICATORSTYLE_STRAIGHTBOXINDICATOR = 8,
    QSCISCINTILLA_INDICATORSTYLE_FULLBOXINDICATOR = 16,
    QSCISCINTILLA_INDICATORSTYLE_DASHESINDICATOR = 9,
    QSCISCINTILLA_INDICATORSTYLE_DOTSINDICATOR = 10,
    QSCISCINTILLA_INDICATORSTYLE_SQUIGGLELOWINDICATOR = 11,
    QSCISCINTILLA_INDICATORSTYLE_DOTBOXINDICATOR = 12,
    QSCISCINTILLA_INDICATORSTYLE_SQUIGGLEPIXMAPINDICATOR = 13,
    QSCISCINTILLA_INDICATORSTYLE_THICKCOMPOSITIONINDICATOR = 14,
    QSCISCINTILLA_INDICATORSTYLE_THINCOMPOSITIONINDICATOR = 15,
    QSCISCINTILLA_INDICATORSTYLE_TEXTCOLORINDICATOR = 17,
    QSCISCINTILLA_INDICATORSTYLE_TRIANGLEINDICATOR = 18,
    QSCISCINTILLA_INDICATORSTYLE_TRIANGLECHARACTERINDICATOR = 19,
    QSCISCINTILLA_INDICATORSTYLE_GRADIENTINDICATOR = 20,
    QSCISCINTILLA_INDICATORSTYLE_CENTREGRADIENTINDICATOR = 21
} QsciScintilla__IndicatorStyle;

typedef enum {
    QSCISCINTILLA_MARGINTYPE_SYMBOLMARGIN = 0,
    QSCISCINTILLA_MARGINTYPE_SYMBOLMARGINDEFAULTFOREGROUNDCOLOR = 3,
    QSCISCINTILLA_MARGINTYPE_SYMBOLMARGINDEFAULTBACKGROUNDCOLOR = 2,
    QSCISCINTILLA_MARGINTYPE_NUMBERMARGIN = 1,
    QSCISCINTILLA_MARGINTYPE_TEXTMARGIN = 4,
    QSCISCINTILLA_MARGINTYPE_TEXTMARGINRIGHTJUSTIFIED = 5,
    QSCISCINTILLA_MARGINTYPE_SYMBOLMARGINCOLOR = 6
} QsciScintilla__MarginType;

typedef enum {
    QSCISCINTILLA_MARKERSYMBOL_CIRCLE = 0,
    QSCISCINTILLA_MARKERSYMBOL_RECTANGLE = 1,
    QSCISCINTILLA_MARKERSYMBOL_RIGHTTRIANGLE = 2,
    QSCISCINTILLA_MARKERSYMBOL_SMALLRECTANGLE = 3,
    QSCISCINTILLA_MARKERSYMBOL_RIGHTARROW = 4,
    QSCISCINTILLA_MARKERSYMBOL_INVISIBLE = 5,
    QSCISCINTILLA_MARKERSYMBOL_DOWNTRIANGLE = 6,
    QSCISCINTILLA_MARKERSYMBOL_MINUS = 7,
    QSCISCINTILLA_MARKERSYMBOL_PLUS = 8,
    QSCISCINTILLA_MARKERSYMBOL_VERTICALLINE = 9,
    QSCISCINTILLA_MARKERSYMBOL_BOTTOMLEFTCORNER = 10,
    QSCISCINTILLA_MARKERSYMBOL_LEFTSIDESPLITTER = 11,
    QSCISCINTILLA_MARKERSYMBOL_BOXEDPLUS = 12,
    QSCISCINTILLA_MARKERSYMBOL_BOXEDPLUSCONNECTED = 13,
    QSCISCINTILLA_MARKERSYMBOL_BOXEDMINUS = 14,
    QSCISCINTILLA_MARKERSYMBOL_BOXEDMINUSCONNECTED = 15,
    QSCISCINTILLA_MARKERSYMBOL_ROUNDEDBOTTOMLEFTCORNER = 16,
    QSCISCINTILLA_MARKERSYMBOL_LEFTSIDEROUNDEDSPLITTER = 17,
    QSCISCINTILLA_MARKERSYMBOL_CIRCLEDPLUS = 18,
    QSCISCINTILLA_MARKERSYMBOL_CIRCLEDPLUSCONNECTED = 19,
    QSCISCINTILLA_MARKERSYMBOL_CIRCLEDMINUS = 20,
    QSCISCINTILLA_MARKERSYMBOL_CIRCLEDMINUSCONNECTED = 21,
    QSCISCINTILLA_MARKERSYMBOL_BACKGROUND = 22,
    QSCISCINTILLA_MARKERSYMBOL_THREEDOTS = 23,
    QSCISCINTILLA_MARKERSYMBOL_THREERIGHTARROWS = 24,
    QSCISCINTILLA_MARKERSYMBOL_FULLRECTANGLE = 26,
    QSCISCINTILLA_MARKERSYMBOL_LEFTRECTANGLE = 27,
    QSCISCINTILLA_MARKERSYMBOL_UNDERLINE = 29,
    QSCISCINTILLA_MARKERSYMBOL_BOOKMARK = 31
} QsciScintilla__MarkerSymbol;

typedef enum {
    QSCISCINTILLA_TABDRAWMODE_TABLONGARROW = 0,
    QSCISCINTILLA_TABDRAWMODE_TABSTRIKEOUT = 1
} QsciScintilla__TabDrawMode;

typedef enum {
    QSCISCINTILLA_WHITESPACEVISIBILITY_WSINVISIBLE = 0,
    QSCISCINTILLA_WHITESPACEVISIBILITY_WSVISIBLE = 1,
    QSCISCINTILLA_WHITESPACEVISIBILITY_WSVISIBLEAFTERINDENT = 2,
    QSCISCINTILLA_WHITESPACEVISIBILITY_WSVISIBLEONLYININDENT = 3
} QsciScintilla__WhitespaceVisibility;

typedef enum {
    QSCISCINTILLA_WRAPMODE_WRAPNONE = 0,
    QSCISCINTILLA_WRAPMODE_WRAPWORD = 1,
    QSCISCINTILLA_WRAPMODE_WRAPCHARACTER = 2,
    QSCISCINTILLA_WRAPMODE_WRAPWHITESPACE = 3
} QsciScintilla__WrapMode;

typedef enum {
    QSCISCINTILLA_WRAPVISUALFLAG_WRAPFLAGNONE = 0,
    QSCISCINTILLA_WRAPVISUALFLAG_WRAPFLAGBYTEXT = 1,
    QSCISCINTILLA_WRAPVISUALFLAG_WRAPFLAGBYBORDER = 2,
    QSCISCINTILLA_WRAPVISUALFLAG_WRAPFLAGINMARGIN = 3
} QsciScintilla__WrapVisualFlag;

typedef enum {
    QSCISCINTILLA_WRAPINDENTMODE_WRAPINDENTFIXED = 0,
    QSCISCINTILLA_WRAPINDENTMODE_WRAPINDENTSAME = 1,
    QSCISCINTILLA_WRAPINDENTMODE_WRAPINDENTINDENTED = 2,
    QSCISCINTILLA_WRAPINDENTMODE_WRAPINDENTDEEPLYINDENTED = 3
} QsciScintilla__WrapIndentMode;

#endif
