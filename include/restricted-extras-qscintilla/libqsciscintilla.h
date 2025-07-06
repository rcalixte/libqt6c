#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISCINTILLA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html

/// q_sciscintilla_new constructs a new QsciScintilla object.
///
/// ``` QWidget* parent ```
QsciScintilla* q_sciscintilla_new(void* parent);

/// q_sciscintilla_new2 constructs a new QsciScintilla object.
///
///
QsciScintilla* q_sciscintilla_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciScintilla* self ```
const QMetaObject* q_sciscintilla_meta_object(void* self);

/// ``` QsciScintilla* self, const char* param1 ```
void* q_sciscintilla_metacast(void* self, const char* param1);

/// ``` QsciScintilla* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciscintilla_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, int32_t (*slot)(QsciScintilla*, enum QMetaObject__Call, int, void*) ```
void q_sciscintilla_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sciscintilla_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sciscintilla_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int pos, int* context_start, int* last_word_start ```
const char** q_sciscintilla_api_context(void* self, int pos, int* context_start, int* last_word_start);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, const char** (*slot)(QsciScintilla*, int, int*, int*) ```
void q_sciscintilla_on_api_context(void* self, const char** (*slot)(void*, int, int*, int*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int pos, int* context_start, int* last_word_start ```
const char** q_sciscintilla_qbase_api_context(void* self, int pos, int* context_start, int* last_word_start);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, const char* text, int style ```
void q_sciscintilla_annotate(void* self, int line, const char* text, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, const char* text, QsciStyle* style ```
void q_sciscintilla_annotate2(void* self, int line, const char* text, void* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, QsciStyledText* text ```
void q_sciscintilla_annotate3(void* self, int line, void* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
const char* q_sciscintilla_annotation(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_annotation_display(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_annotations(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_completion_case_sensitivity(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_completion_fillups_enabled(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_completion_replace_word(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_completion_show_single(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_auto_completion_source(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_auto_completion_threshold(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_auto_completion_use_single(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_indent(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_backspace_unindents(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_begin_undo_action(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_brace_matching(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int start, int end ```
char* q_sciscintilla_bytes(void* self, int start, int end);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_call_tips_position(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_call_tips_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_call_tips_visible(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_cancel_find(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_cancel_list(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_case_sensitive(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_folds(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber ```
void q_sciscintilla_clear_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_registered_images(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QColor* q_sciscintilla_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
libqt_list /* of int */ q_sciscintilla_contracted_folds(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__EolMode mode ```
void q_sciscintilla_convert_eols(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QMenu* q_sciscintilla_create_standard_context_menu(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QsciDocument* q_sciscintilla_document(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_end_undo_action(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QColor* q_sciscintilla_edge_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_edge_column(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_edge_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QFont* f ```
void q_sciscintilla_set_font(void* self, void* f);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_eol_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_eol_visibility(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_extra_ascent(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_extra_descent(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber ```
void q_sciscintilla_fill_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11 ```
bool q_sciscintilla_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool) ```
void q_sciscintilla_on_find_first(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11 ```
bool q_sciscintilla_qbase_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11 ```
bool q_sciscintilla_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, const char*, bool, bool, bool, bool, bool, bool, bool) ```
void q_sciscintilla_on_find_first_in_selection(void* self, bool (*slot)(void*, const char*, bool, bool, bool, bool, bool, bool, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11 ```
bool q_sciscintilla_qbase_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_find_next(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, bool (*slot)() ```
void q_sciscintilla_on_find_next(void* self, bool (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_qbase_find_next(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int64_t* brace, int64_t* other, enum QsciScintilla__BraceMatch mode ```
bool q_sciscintilla_find_matching_brace(void* self, int64_t* brace, int64_t* other, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_first_visible_line(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_folding(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int* line, int* index ```
void q_sciscintilla_get_cursor_position(void* self, int* line, int* index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo ```
void q_sciscintilla_get_selection(void* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_has_selected_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
int32_t q_sciscintilla_indentation(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_indentation_guides(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_indentations_use_tabs(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_indentation_width(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__IndicatorStyle style ```
int32_t q_sciscintilla_indicator_define(void* self, int64_t style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int indicatorNumber ```
bool q_sciscintilla_indicator_draw_under(void* self, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_call_tip_active(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_list_active(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_modified(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_read_only(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_redo_available(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_undo_available(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_utf8(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, char ch ```
bool q_sciscintilla_is_word_character(void* self, char ch);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QPoint* point ```
int32_t q_sciscintilla_line_at(void* self, void* point);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int position, int* line, int* index ```
void q_sciscintilla_line_index_from_position(void* self, int position, int* line, int* index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
int32_t q_sciscintilla_line_length(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_lines(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_length(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QsciLexer* q_sciscintilla_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
QColor* q_sciscintilla_margin_background_color(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
bool q_sciscintilla_margin_line_numbers(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
int32_t q_sciscintilla_margin_marker_mask(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_margin_options(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
bool q_sciscintilla_margin_sensitivity(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
int64_t q_sciscintilla_margin_type(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin ```
int32_t q_sciscintilla_margin_width(void* self, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_margins(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__MarkerSymbol sym ```
int32_t q_sciscintilla_marker_define(void* self, int64_t sym);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, char ch ```
int32_t q_sciscintilla_marker_define_with_ch(void* self, char ch);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QPixmap* pm ```
int32_t q_sciscintilla_marker_define_with_pm(void* self, void* pm);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QImage* im ```
int32_t q_sciscintilla_marker_define_with_im(void* self, void* im);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr, int markerNumber ```
int32_t q_sciscintilla_marker_add(void* self, int linenr, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr ```
uint32_t q_sciscintilla_markers_at_line(void* self, int linenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr ```
void q_sciscintilla_marker_delete(void* self, int linenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_marker_delete_all(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int mhandle ```
void q_sciscintilla_marker_delete_handle(void* self, int mhandle);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int mhandle ```
int32_t q_sciscintilla_marker_line(void* self, int mhandle);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr, uint32_t mask ```
int32_t q_sciscintilla_marker_find_next(void* self, int linenr, uint32_t mask);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr, uint32_t mask ```
int32_t q_sciscintilla_marker_find_previous(void* self, int linenr, uint32_t mask);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_overwrite_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QColor* q_sciscintilla_paper(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index ```
int32_t q_sciscintilla_position_from_line_index(void* self, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QIODevice* io ```
bool q_sciscintilla_read(void* self, void* io);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int start, int end ```
void q_sciscintilla_recolor(void* self, int start, int end);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_recolor(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int start, int end ```
void q_sciscintilla_qbase_recolor(void* self, int start, int end);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int id, QPixmap* pm ```
void q_sciscintilla_register_image(void* self, int id, void* pm);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int id, QImage* im ```
void q_sciscintilla_register_image2(void* self, int id, void* im);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* replaceStr ```
void q_sciscintilla_replace(void* self, const char* replaceStr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_replace(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* replaceStr ```
void q_sciscintilla_qbase_replace(void* self, const char* replaceStr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_fold_margin_colors(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_hotspot_background_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_hotspot_foreground_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_scroll_width(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_scroll_width_tracking(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* fore, QColor* back ```
void q_sciscintilla_set_fold_margin_colors(void* self, void* fore, void* back);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__AnnotationDisplay display ```
void q_sciscintilla_set_annotation_display(void* self, int64_t display);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enabled ```
void q_sciscintilla_set_auto_completion_fillups_enabled(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* fillups ```
void q_sciscintilla_set_auto_completion_fillups(void* self, const char* fillups);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* separators[] ```
void q_sciscintilla_set_auto_completion_word_separators(void* self, const char* separators[]);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_call_tips_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_call_tips_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_call_tips_highlight_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__CallTipsPosition position ```
void q_sciscintilla_set_call_tips_position(void* self, int64_t position);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__CallTipsStyle style ```
void q_sciscintilla_set_call_tips_style(void* self, int64_t style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int nr ```
void q_sciscintilla_set_call_tips_visible(void* self, int nr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, libqt_list /* of int */ folds ```
void q_sciscintilla_set_contracted_folds(void* self, libqt_list folds);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QsciDocument* document ```
void q_sciscintilla_set_document(void* self, void* document);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int colnr, QColor* col ```
void q_sciscintilla_add_edge_column(void* self, int colnr, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_edge_columns(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_edge_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int colnr ```
void q_sciscintilla_set_edge_column(void* self, int colnr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__EdgeMode mode ```
void q_sciscintilla_set_edge_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr ```
void q_sciscintilla_set_first_visible_line(void* self, int linenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool under ```
void q_sciscintilla_set_indicator_draw_under(void* self, bool under);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_indicator_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_indicator_hover_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__IndicatorStyle style ```
void q_sciscintilla_set_indicator_hover_style(void* self, int64_t style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_indicator_outline_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, QColor* col ```
void q_sciscintilla_set_margin_background_color(void* self, int margin, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int options ```
void q_sciscintilla_set_margin_options(void* self, int options);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, const char* text, int style ```
void q_sciscintilla_set_margin_text(void* self, int line, const char* text, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, const char* text, QsciStyle* style ```
void q_sciscintilla_set_margin_text2(void* self, int line, const char* text, void* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, QsciStyledText* text ```
void q_sciscintilla_set_margin_text3(void* self, int line, void* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, enum QsciScintilla__MarginType typeVal ```
void q_sciscintilla_set_margin_type(void* self, int margin, int64_t typeVal);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_margin_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margins ```
void q_sciscintilla_set_margins(void* self, int margins);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_marker_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_marker_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_matched_brace_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_matched_brace_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int indicatorNumber ```
void q_sciscintilla_set_matched_brace_indicator(void* self, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_matched_brace_indicator(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int pixelWidth ```
void q_sciscintilla_set_scroll_width(void* self, int pixelWidth);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enabled ```
void q_sciscintilla_set_scroll_width_tracking(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__TabDrawMode mode ```
void q_sciscintilla_set_tab_draw_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_unmatched_brace_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_unmatched_brace_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int indicatorNumber ```
void q_sciscintilla_set_unmatched_brace_indicator(void* self, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_unmatched_brace_indicator(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapVisualFlag endFlag ```
void q_sciscintilla_set_wrap_visual_flags(void* self, int64_t endFlag);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_selected_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_selection_to_eol(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_hotspot_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_hotspot_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_hotspot_underline(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_hotspot_wrap(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool filled ```
void q_sciscintilla_set_selection_to_eol(void* self, bool filled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int extra ```
void q_sciscintilla_set_extra_ascent(void* self, int extra);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int extra ```
void q_sciscintilla_set_extra_descent(void* self, int extra);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool overwrite ```
void q_sciscintilla_set_overwrite_mode(void* self, bool overwrite);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_whitespace_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_whitespace_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int size ```
void q_sciscintilla_set_whitespace_size(void* self, int size);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapIndentMode mode ```
void q_sciscintilla_set_wrap_indent_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int id, const char* list[] ```
void q_sciscintilla_show_user_list(void* self, int id, const char* list[]);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
QsciCommandSet* q_sciscintilla_standard_commands(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_tab_draw_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_tab_indents(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_tab_width(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
const char* q_sciscintilla_text_with_line(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int start, int end ```
const char* q_sciscintilla_text2(void* self, int start, int end);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr ```
int32_t q_sciscintilla_text_height(void* self, int linenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_whitespace_size(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_whitespace_visibility(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index ```
const char* q_sciscintilla_word_at_line_index(void* self, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QPoint* point ```
const char* q_sciscintilla_word_at_point(void* self, void* point);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_word_characters(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_wrap_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_wrap_indent_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QIODevice* io ```
bool q_sciscintilla_write(void* self, void* io);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_append(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_append(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_qbase_append(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_auto_complete_from_all(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_auto_complete_from_all(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_auto_complete_from_all(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_auto_complete_from_a_p_is(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_auto_complete_from_a_p_is(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_auto_complete_from_a_p_is(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_auto_complete_from_document(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_auto_complete_from_document(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_auto_complete_from_document(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_call_tip(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_call_tip(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_call_tip(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_clear(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_clear(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_copy(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_copy(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_copy(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_cut(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_cut(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_cut(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_ensure_cursor_visible(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_ensure_cursor_visible(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_ensure_cursor_visible(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_ensure_line_visible(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_ensure_line_visible(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_qbase_ensure_line_visible(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool children ```
void q_sciscintilla_fold_all(void* self, bool children);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_fold_all(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool children ```
void q_sciscintilla_qbase_fold_all(void* self, bool children);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_fold_line(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_fold_line(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_qbase_fold_line(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_indent(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_indent(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_qbase_indent(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_insert(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_insert(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_qbase_insert(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* text, int line, int index ```
void q_sciscintilla_insert_at(void* self, const char* text, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*, int, int) ```
void q_sciscintilla_on_insert_at(void* self, void (*slot)(void*, const char*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* text, int line, int index ```
void q_sciscintilla_qbase_insert_at(void* self, const char* text, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_move_to_matching_brace(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_move_to_matching_brace(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_move_to_matching_brace(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_paste(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_paste(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_paste(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_redo(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_redo(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_redo(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_remove_selected_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_remove_selected_text(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_remove_selected_text(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_replace_selected_text(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_replace_selected_text(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_qbase_replace_selected_text(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_selection_background_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_reset_selection_background_color(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_reset_selection_background_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_reset_selection_foreground_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_reset_selection_foreground_color(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_reset_selection_foreground_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool selectVal ```
void q_sciscintilla_select_all(void* self, bool selectVal);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_select_all(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool selectVal ```
void q_sciscintilla_qbase_select_all(void* self, bool selectVal);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_select_to_matching_brace(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_select_to_matching_brace(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_select_to_matching_brace(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool cs ```
void q_sciscintilla_set_auto_completion_case_sensitivity(void* self, bool cs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_auto_completion_case_sensitivity(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool cs ```
void q_sciscintilla_qbase_set_auto_completion_case_sensitivity(void* self, bool cs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool replace ```
void q_sciscintilla_set_auto_completion_replace_word(void* self, bool replace);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_auto_completion_replace_word(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool replace ```
void q_sciscintilla_qbase_set_auto_completion_replace_word(void* self, bool replace);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool single ```
void q_sciscintilla_set_auto_completion_show_single(void* self, bool single);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_auto_completion_show_single(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool single ```
void q_sciscintilla_qbase_set_auto_completion_show_single(void* self, bool single);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__AutoCompletionSource source ```
void q_sciscintilla_set_auto_completion_source(void* self, int64_t source);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__AutoCompletionSource) ```
void q_sciscintilla_on_set_auto_completion_source(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__AutoCompletionSource source ```
void q_sciscintilla_qbase_set_auto_completion_source(void* self, int64_t source);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int thresh ```
void q_sciscintilla_set_auto_completion_threshold(void* self, int thresh);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_set_auto_completion_threshold(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int thresh ```
void q_sciscintilla_qbase_set_auto_completion_threshold(void* self, int thresh);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__AutoCompletionUseSingle single ```
void q_sciscintilla_set_auto_completion_use_single(void* self, int64_t single);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__AutoCompletionUseSingle) ```
void q_sciscintilla_on_set_auto_completion_use_single(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__AutoCompletionUseSingle single ```
void q_sciscintilla_qbase_set_auto_completion_use_single(void* self, int64_t single);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool autoindent ```
void q_sciscintilla_set_auto_indent(void* self, bool autoindent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_auto_indent(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool autoindent ```
void q_sciscintilla_qbase_set_auto_indent(void* self, bool autoindent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__BraceMatch bm ```
void q_sciscintilla_set_brace_matching(void* self, int64_t bm);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__BraceMatch) ```
void q_sciscintilla_on_set_brace_matching(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__BraceMatch bm ```
void q_sciscintilla_qbase_set_brace_matching(void* self, int64_t bm);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool unindent ```
void q_sciscintilla_set_backspace_unindents(void* self, bool unindent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_backspace_unindents(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool unindent ```
void q_sciscintilla_qbase_set_backspace_unindents(void* self, bool unindent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_caret_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_caret_foreground_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_caret_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_caret_line_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_caret_line_background_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_caret_line_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_set_caret_line_frame_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_set_caret_line_frame_width(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_qbase_set_caret_line_frame_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_caret_line_visible(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_caret_line_visible(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_qbase_set_caret_line_visible(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_set_caret_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_set_caret_width(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_qbase_set_caret_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* c ```
void q_sciscintilla_set_color(void* self, void* c);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* c ```
void q_sciscintilla_qbase_set_color(void* self, void* c);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index ```
void q_sciscintilla_set_cursor_position(void* self, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_set_cursor_position(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line, int index ```
void q_sciscintilla_qbase_set_cursor_position(void* self, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__EolMode mode ```
void q_sciscintilla_set_eol_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__EolMode) ```
void q_sciscintilla_on_set_eol_mode(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__EolMode mode ```
void q_sciscintilla_qbase_set_eol_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool visible ```
void q_sciscintilla_set_eol_visibility(void* self, bool visible);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_eol_visibility(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool visible ```
void q_sciscintilla_qbase_set_eol_visibility(void* self, bool visible);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__FoldStyle fold, int margin ```
void q_sciscintilla_set_folding(void* self, int64_t fold, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__FoldStyle, int) ```
void q_sciscintilla_on_set_folding(void* self, void (*slot)(void*, int64_t, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__FoldStyle fold, int margin ```
void q_sciscintilla_qbase_set_folding(void* self, int64_t fold, int margin);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int indentation ```
void q_sciscintilla_set_indentation(void* self, int line, int indentation);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_set_indentation(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line, int indentation ```
void q_sciscintilla_qbase_set_indentation(void* self, int line, int indentation);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_indentation_guides(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_indentation_guides(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_qbase_set_indentation_guides(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_indentation_guides_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_indentation_guides_background_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_indentation_guides_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_indentation_guides_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_indentation_guides_foreground_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_indentation_guides_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool tabs ```
void q_sciscintilla_set_indentations_use_tabs(void* self, bool tabs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_indentations_use_tabs(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool tabs ```
void q_sciscintilla_qbase_set_indentations_use_tabs(void* self, bool tabs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_set_indentation_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_set_indentation_width(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_qbase_set_indentation_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QsciLexer* lexer ```
void q_sciscintilla_set_lexer(void* self, void* lexer);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QsciLexer*) ```
void q_sciscintilla_on_set_lexer(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QsciLexer* lexer ```
void q_sciscintilla_qbase_set_lexer(void* self, void* lexer);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_margins_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_margins_background_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_margins_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QFont* f ```
void q_sciscintilla_set_margins_font(void* self, void* f);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QFont*) ```
void q_sciscintilla_on_set_margins_font(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QFont* f ```
void q_sciscintilla_qbase_set_margins_font(void* self, void* f);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_margins_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_margins_foreground_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_margins_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, bool lnrs ```
void q_sciscintilla_set_margin_line_numbers(void* self, int margin, bool lnrs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, bool) ```
void q_sciscintilla_on_set_margin_line_numbers(void* self, void (*slot)(void*, int, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int margin, bool lnrs ```
void q_sciscintilla_qbase_set_margin_line_numbers(void* self, int margin, bool lnrs);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, int mask ```
void q_sciscintilla_set_margin_marker_mask(void* self, int margin, int mask);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_set_margin_marker_mask(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int margin, int mask ```
void q_sciscintilla_qbase_set_margin_marker_mask(void* self, int margin, int mask);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, bool sens ```
void q_sciscintilla_set_margin_sensitivity(void* self, int margin, bool sens);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, bool) ```
void q_sciscintilla_on_set_margin_sensitivity(void* self, void (*slot)(void*, int, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int margin, bool sens ```
void q_sciscintilla_qbase_set_margin_sensitivity(void* self, int margin, bool sens);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, int width ```
void q_sciscintilla_set_margin_width(void* self, int margin, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_set_margin_width(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int margin, int width ```
void q_sciscintilla_qbase_set_margin_width(void* self, int margin, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, const char* s ```
void q_sciscintilla_set_margin_width2(void* self, int margin, const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, const char*) ```
void q_sciscintilla_on_set_margin_width2(void* self, void (*slot)(void*, int, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int margin, const char* s ```
void q_sciscintilla_qbase_set_margin_width2(void* self, int margin, const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool m ```
void q_sciscintilla_set_modified(void* self, bool m);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_modified(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool m ```
void q_sciscintilla_qbase_set_modified(void* self, bool m);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* c ```
void q_sciscintilla_set_paper(void* self, void* c);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_paper(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* c ```
void q_sciscintilla_qbase_set_paper(void* self, void* c);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool ro ```
void q_sciscintilla_set_read_only(void* self, bool ro);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_read_only(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool ro ```
void q_sciscintilla_qbase_set_read_only(void* self, bool ro);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo ```
void q_sciscintilla_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int, int) ```
void q_sciscintilla_on_set_selection(void* self, void (*slot)(void*, int, int, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo ```
void q_sciscintilla_qbase_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_selection_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_selection_background_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_selection_background_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_set_selection_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QColor*) ```
void q_sciscintilla_on_set_selection_foreground_color(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QColor* col ```
void q_sciscintilla_qbase_set_selection_foreground_color(void* self, void* col);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool indent ```
void q_sciscintilla_set_tab_indents(void* self, bool indent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_tab_indents(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool indent ```
void q_sciscintilla_qbase_set_tab_indents(void* self, bool indent);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_set_tab_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_set_tab_width(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int width ```
void q_sciscintilla_qbase_set_tab_width(void* self, int width);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_set_text(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_set_text(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, const char* text ```
void q_sciscintilla_qbase_set_text(void* self, const char* text);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool cp ```
void q_sciscintilla_set_utf8(void* self, bool cp);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_utf8(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, bool cp ```
void q_sciscintilla_qbase_set_utf8(void* self, bool cp);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WhitespaceVisibility mode ```
void q_sciscintilla_set_whitespace_visibility(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__WhitespaceVisibility) ```
void q_sciscintilla_on_set_whitespace_visibility(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__WhitespaceVisibility mode ```
void q_sciscintilla_qbase_set_whitespace_visibility(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapMode mode ```
void q_sciscintilla_set_wrap_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, enum QsciScintilla__WrapMode) ```
void q_sciscintilla_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapMode mode ```
void q_sciscintilla_qbase_set_wrap_mode(void* self, int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_undo(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_undo(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_undo(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_unindent(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_unindent(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_qbase_unindent(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int range ```
void q_sciscintilla_zoom_in(void* self, int range);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_zoom_in(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int range ```
void q_sciscintilla_qbase_zoom_in(void* self, int range);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_zoom_in2(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_zoom_in2(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_zoom_in2(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int range ```
void q_sciscintilla_zoom_out(void* self, int range);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_zoom_out(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int range ```
void q_sciscintilla_qbase_zoom_out(void* self, int range);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_zoom_out2(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_zoom_out2(void* self, void (*slot)());

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_zoom_out2(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int size ```
void q_sciscintilla_zoom_to(void* self, int size);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_zoom_to(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, int size ```
void q_sciscintilla_qbase_zoom_to(void* self, int size);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index ```
void q_sciscintilla_cursor_position_changed(void* self, int line, int index);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_cursor_position_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool yes ```
void q_sciscintilla_copy_available(void* self, bool yes);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_copy_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index, int state ```
void q_sciscintilla_indicator_clicked(void* self, int line, int index, int64_t state);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int) ```
void q_sciscintilla_on_indicator_clicked(void* self, void (*slot)(void*, int, int, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line, int index, int state ```
void q_sciscintilla_indicator_released(void* self, int line, int index, int64_t state);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int) ```
void q_sciscintilla_on_indicator_released(void* self, void (*slot)(void*, int, int, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_lines_changed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*) ```
void q_sciscintilla_on_lines_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, int line, int state ```
void q_sciscintilla_margin_clicked(void* self, int margin, int line, int64_t state);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int) ```
void q_sciscintilla_on_margin_clicked(void* self, void (*slot)(void*, int, int, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int margin, int line, int state ```
void q_sciscintilla_margin_right_clicked(void* self, int margin, int line, int64_t state);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int) ```
void q_sciscintilla_on_margin_right_clicked(void* self, void (*slot)(void*, int, int, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_modification_attempted(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*) ```
void q_sciscintilla_on_modification_attempted(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool m ```
void q_sciscintilla_modification_changed(void* self, bool m);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_modification_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_selection_changed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*) ```
void q_sciscintilla_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_text_changed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*) ```
void q_sciscintilla_on_text_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int id, const char* stringVal ```
void q_sciscintilla_user_list_activated(void* self, int id, const char* stringVal);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, const char*) ```
void q_sciscintilla_on_user_list_activated(void* self, void (*slot)(void*, int, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QEvent* e ```
bool q_sciscintilla_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, QEvent*) ```
void q_sciscintilla_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QEvent* e ```
bool q_sciscintilla_qbase_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QEvent* e ```
void q_sciscintilla_change_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QEvent*) ```
void q_sciscintilla_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QEvent* e ```
void q_sciscintilla_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QContextMenuEvent* e ```
void q_sciscintilla_context_menu_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QContextMenuEvent*) ```
void q_sciscintilla_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QContextMenuEvent* e ```
void q_sciscintilla_qbase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QWheelEvent* e ```
void q_sciscintilla_wheel_event(void* self, void* e);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QWheelEvent*) ```
void q_sciscintilla_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// ``` QsciScintilla* self, QWheelEvent* e ```
void q_sciscintilla_qbase_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sciscintilla_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sciscintilla_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_clear_annotations1(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__IndicatorStyle style, int indicatorNumber ```
int32_t q_sciscintilla_indicator_define2(void* self, int64_t style, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__MarkerSymbol sym, int markerNumber ```
int32_t q_sciscintilla_marker_define2(void* self, int64_t sym, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, char ch, int markerNumber ```
int32_t q_sciscintilla_marker_define22(void* self, char ch, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QPixmap* pm, int markerNumber ```
int32_t q_sciscintilla_marker_define23(void* self, void* pm, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QImage* im, int markerNumber ```
int32_t q_sciscintilla_marker_define24(void* self, void* im, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int linenr, int markerNumber ```
void q_sciscintilla_marker_delete2(void* self, int linenr, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int markerNumber ```
void q_sciscintilla_marker_delete_all1(void* self, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, bool under, int indicatorNumber ```
void q_sciscintilla_set_indicator_draw_under2(void* self, bool under, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col, int indicatorNumber ```
void q_sciscintilla_set_indicator_foreground_color2(void* self, void* col, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col, int indicatorNumber ```
void q_sciscintilla_set_indicator_hover_foreground_color2(void* self, void* col, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__IndicatorStyle style, int indicatorNumber ```
void q_sciscintilla_set_indicator_hover_style2(void* self, int64_t style, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col, int indicatorNumber ```
void q_sciscintilla_set_indicator_outline_color2(void* self, void* col, int indicatorNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, int line ```
void q_sciscintilla_clear_margin_text1(void* self, int line);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col, int markerNumber ```
void q_sciscintilla_set_marker_background_color2(void* self, void* col, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, QColor* col, int markerNumber ```
void q_sciscintilla_set_marker_foreground_color2(void* self, void* col, int markerNumber);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapVisualFlag endFlag, enum QsciScintilla__WrapVisualFlag startFlag ```
void q_sciscintilla_set_wrap_visual_flags2(void* self, int64_t endFlag, int64_t startFlag);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// ``` QsciScintilla* self, enum QsciScintilla__WrapVisualFlag endFlag, enum QsciScintilla__WrapVisualFlag startFlag, int indent ```
void q_sciscintilla_set_wrap_visual_flags3(void* self, int64_t endFlag, int64_t startFlag, int indent);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
///
QsciScintillaBase* q_sciscintilla_pool();

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, QScrollBar* scrollBar ```
void q_sciscintilla_replace_horizontal_scroll_bar(void* self, void* scrollBar);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, QScrollBar* scrollBar ```
void q_sciscintilla_replace_vertical_scroll_bar(void* self, void* scrollBar);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg ```
int64_t q_sciscintilla_send_scintilla(void* self, uint32_t msg);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, void* lParam ```
int64_t q_sciscintilla_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uintptr_t wParam, const char* lParam ```
int64_t q_sciscintilla_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, const char* lParam ```
int64_t q_sciscintilla_send_scintilla4(void* self, uint32_t msg, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, const char* wParam, const char* lParam ```
int64_t q_sciscintilla_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, int64_t wParam ```
int64_t q_sciscintilla_send_scintilla6(void* self, uint32_t msg, int64_t wParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, int wParam ```
int64_t q_sciscintilla_send_scintilla7(void* self, uint32_t msg, int wParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText ```
int64_t q_sciscintilla_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, QColor* col ```
int64_t q_sciscintilla_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, QColor* col ```
int64_t q_sciscintilla_send_scintilla10(void* self, uint32_t msg, void* col);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, QPainter* hdc, QRect* rc, int64_t cpMin, int64_t cpMax ```
int64_t q_sciscintilla_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, QPixmap* lParam ```
int64_t q_sciscintilla_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, QImage* lParam ```
int64_t q_sciscintilla_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg ```
void* q_sciscintilla_send_scintilla_ptr_result(void* self, uint32_t msg);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` int qt_key, int* modifiers ```
int32_t q_sciscintilla_command_key(int qt_key, int* modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, bool yes ```
void q_sciscintilla_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int position, int ch, int method ```
void q_sciscintilla_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int position, int ch, int method ```
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int position ```
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int id, int position ```
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_e_n__c_h_a_n_g_e(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int direction ```
void q_sciscintilla_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int charadded ```
void q_sciscintilla_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int line, int modifiers ```
void q_sciscintilla_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int x, int y ```
void q_sciscintilla_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int x, int y ```
void q_sciscintilla_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__f_o_c_u_s_i_n(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__f_o_c_u_s_o_u_t(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers ```
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers ```
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers ```
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers ```
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers ```
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t param1, uint64_t param2, void* param3 ```
void q_sciscintilla_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers, int margin ```
void q_sciscintilla_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position, int modifiers, int margin ```
void q_sciscintilla_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10 ```
void q_sciscintilla_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int param1, int param2 ```
void q_sciscintilla_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__p_a_i_n_t_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int position ```
void q_sciscintilla_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, QUrl* url ```
void q_sciscintilla_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, int updated ```
void q_sciscintilla_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int id, int ch, int method, int position ```
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int id, int ch, int method ```
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, const char* selection, int id ```
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_s_c_n__z_o_o_m(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam ```
int64_t q_sciscintilla_send_scintilla22(void* self, uint32_t msg, uint64_t wParam);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// ``` QsciScintilla* self, uint32_t msg, uint64_t wParam, int64_t lParam ```
int64_t q_sciscintilla_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QsciScintilla* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_sciscintilla_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QsciScintilla* self ```
QScrollBar* q_sciscintilla_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QsciScintilla* self, QScrollBar* scrollbar ```
void q_sciscintilla_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QsciScintilla* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_sciscintilla_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QsciScintilla* self ```
QScrollBar* q_sciscintilla_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QsciScintilla* self, QScrollBar* scrollbar ```
void q_sciscintilla_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QsciScintilla* self, QWidget* widget ```
void q_sciscintilla_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QsciScintilla* self, QWidget* widget, int alignment ```
void q_sciscintilla_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QsciScintilla* self, int alignment ```
libqt_list /* of QWidget* */ q_sciscintilla_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QsciScintilla* self, QWidget* widget ```
void q_sciscintilla_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QsciScintilla* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_sciscintilla_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QsciScintilla* self, int frameStyle ```
void q_sciscintilla_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QsciScintilla* self, enum QFrame__Shape frameShape ```
void q_sciscintilla_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QsciScintilla* self, enum QFrame__Shadow frameShadow ```
void q_sciscintilla_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QsciScintilla* self, int lineWidth ```
void q_sciscintilla_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QsciScintilla* self, int midLineWidth ```
void q_sciscintilla_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QsciScintilla* self, QRect* frameRect ```
void q_sciscintilla_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QsciScintilla* self ```
uintptr_t q_sciscintilla_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QsciScintilla* self ```
uintptr_t q_sciscintilla_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QsciScintilla* self ```
uintptr_t q_sciscintilla_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QsciScintilla* self ```
QStyle* q_sciscintilla_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QsciScintilla* self, QStyle* style ```
void q_sciscintilla_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QsciScintilla* self, enum Qt__WindowModality windowModality ```
void q_sciscintilla_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QsciScintilla* self, QWidget* param1 ```
bool q_sciscintilla_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QsciScintilla* self, bool enabled ```
void q_sciscintilla_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QsciScintilla* self, bool disabled ```
void q_sciscintilla_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QsciScintilla* self, bool windowModified ```
void q_sciscintilla_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QsciScintilla* self ```
const QRect* q_sciscintilla_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QsciScintilla* self ```
QPoint* q_sciscintilla_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QsciScintilla* self ```
QRegion* q_sciscintilla_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QsciScintilla* self, QSize* minimumSize ```
void q_sciscintilla_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QsciScintilla* self, int minw, int minh ```
void q_sciscintilla_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QsciScintilla* self, QSize* maximumSize ```
void q_sciscintilla_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QsciScintilla* self, int maxw, int maxh ```
void q_sciscintilla_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QsciScintilla* self, int minw ```
void q_sciscintilla_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QsciScintilla* self, int minh ```
void q_sciscintilla_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QsciScintilla* self, int maxw ```
void q_sciscintilla_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QsciScintilla* self, int maxh ```
void q_sciscintilla_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QsciScintilla* self, QSize* sizeIncrement ```
void q_sciscintilla_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QsciScintilla* self, int w, int h ```
void q_sciscintilla_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QsciScintilla* self, QSize* baseSize ```
void q_sciscintilla_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QsciScintilla* self, int basew, int baseh ```
void q_sciscintilla_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QsciScintilla* self, QSize* fixedSize ```
void q_sciscintilla_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QsciScintilla* self, int w, int h ```
void q_sciscintilla_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QsciScintilla* self, int w ```
void q_sciscintilla_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QsciScintilla* self, int h ```
void q_sciscintilla_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QsciScintilla* self, QPointF* param1 ```
QPointF* q_sciscintilla_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QsciScintilla* self, QPoint* param1 ```
QPoint* q_sciscintilla_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QsciScintilla* self, QPointF* param1 ```
QPointF* q_sciscintilla_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QsciScintilla* self, QPoint* param1 ```
QPoint* q_sciscintilla_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QsciScintilla* self, QPointF* param1 ```
QPointF* q_sciscintilla_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QsciScintilla* self, QPoint* param1 ```
QPoint* q_sciscintilla_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QsciScintilla* self, QPointF* param1 ```
QPointF* q_sciscintilla_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QsciScintilla* self, QPoint* param1 ```
QPoint* q_sciscintilla_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QsciScintilla* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sciscintilla_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QsciScintilla* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sciscintilla_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QsciScintilla* self, QWidget* param1, QPointF* param2 ```
QPointF* q_sciscintilla_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QsciScintilla* self, QWidget* param1, QPoint* param2 ```
QPoint* q_sciscintilla_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QsciScintilla* self ```
const QPalette* q_sciscintilla_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QsciScintilla* self, QPalette* palette ```
void q_sciscintilla_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QsciScintilla* self, enum QPalette__ColorRole backgroundRole ```
void q_sciscintilla_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QsciScintilla* self, enum QPalette__ColorRole foregroundRole ```
void q_sciscintilla_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QsciScintilla* self ```
const QFont* q_sciscintilla_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QsciScintilla* self ```
QFontMetrics* q_sciscintilla_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QsciScintilla* self ```
QFontInfo* q_sciscintilla_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QsciScintilla* self ```
QCursor* q_sciscintilla_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QsciScintilla* self, QCursor* cursor ```
void q_sciscintilla_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QsciScintilla* self, QBitmap* mask ```
void q_sciscintilla_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QsciScintilla* self, QRegion* mask ```
void q_sciscintilla_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QsciScintilla* self ```
QRegion* q_sciscintilla_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPaintDevice* target ```
void q_sciscintilla_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPainter* painter ```
void q_sciscintilla_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QsciScintilla* self ```
QPixmap* q_sciscintilla_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QsciScintilla* self ```
QGraphicsEffect* q_sciscintilla_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QsciScintilla* self, QGraphicsEffect* effect ```
void q_sciscintilla_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QsciScintilla* self, enum Qt__GestureType typeVal ```
void q_sciscintilla_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QsciScintilla* self, enum Qt__GestureType typeVal ```
void q_sciscintilla_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QsciScintilla* self, const char* windowTitle ```
void q_sciscintilla_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QsciScintilla* self, const char* styleSheet ```
void q_sciscintilla_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QsciScintilla* self, QIcon* icon ```
void q_sciscintilla_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QsciScintilla* self ```
QIcon* q_sciscintilla_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QsciScintilla* self, const char* windowIconText ```
void q_sciscintilla_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QsciScintilla* self, const char* windowRole ```
void q_sciscintilla_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QsciScintilla* self, const char* filePath ```
void q_sciscintilla_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QsciScintilla* self, double level ```
void q_sciscintilla_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QsciScintilla* self ```
double q_sciscintilla_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QsciScintilla* self, const char* toolTip ```
void q_sciscintilla_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QsciScintilla* self, int msec ```
void q_sciscintilla_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QsciScintilla* self, const char* statusTip ```
void q_sciscintilla_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QsciScintilla* self, const char* whatsThis ```
void q_sciscintilla_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QsciScintilla* self, const char* name ```
void q_sciscintilla_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QsciScintilla* self, const char* description ```
void q_sciscintilla_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QsciScintilla* self, enum Qt__LayoutDirection direction ```
void q_sciscintilla_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QsciScintilla* self, QLocale* locale ```
void q_sciscintilla_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QsciScintilla* self ```
QLocale* q_sciscintilla_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QsciScintilla* self, enum Qt__FocusReason reason ```
void q_sciscintilla_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QsciScintilla* self, enum Qt__FocusPolicy policy ```
void q_sciscintilla_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_sciscintilla_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QsciScintilla* self, QWidget* focusProxy ```
void q_sciscintilla_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QsciScintilla* self, enum Qt__ContextMenuPolicy policy ```
void q_sciscintilla_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QsciScintilla* self, QCursor* param1 ```
void q_sciscintilla_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QsciScintilla* self, QKeySequence* key ```
int32_t q_sciscintilla_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QsciScintilla* self, int id ```
void q_sciscintilla_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QsciScintilla* self, int id ```
void q_sciscintilla_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QsciScintilla* self, int id ```
void q_sciscintilla_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_sciscintilla_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_sciscintilla_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QsciScintilla* self, bool enable ```
void q_sciscintilla_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QsciScintilla* self ```
QGraphicsProxyWidget* q_sciscintilla_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintilla* self, int x, int y, int w, int h ```
void q_sciscintilla_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintilla* self, QRect* param1 ```
void q_sciscintilla_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QsciScintilla* self, QRegion* param1 ```
void q_sciscintilla_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintilla* self, int x, int y, int w, int h ```
void q_sciscintilla_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintilla* self, QRect* param1 ```
void q_sciscintilla_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QsciScintilla* self, QRegion* param1 ```
void q_sciscintilla_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QsciScintilla* self, bool hidden ```
void q_sciscintilla_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QsciScintilla* self, QWidget* param1 ```
void q_sciscintilla_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QsciScintilla* self, int x, int y ```
void q_sciscintilla_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QsciScintilla* self, QPoint* param1 ```
void q_sciscintilla_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QsciScintilla* self, int w, int h ```
void q_sciscintilla_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QsciScintilla* self, QSize* param1 ```
void q_sciscintilla_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QsciScintilla* self, int x, int y, int w, int h ```
void q_sciscintilla_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QsciScintilla* self, QRect* geometry ```
void q_sciscintilla_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QsciScintilla* self ```
char* q_sciscintilla_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QsciScintilla* self, const char* geometry ```
bool q_sciscintilla_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QsciScintilla* self, QWidget* param1 ```
bool q_sciscintilla_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QsciScintilla* self, int state ```
void q_sciscintilla_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QsciScintilla* self, int state ```
void q_sciscintilla_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QsciScintilla* self ```
QSizePolicy* q_sciscintilla_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QsciScintilla* self, QSizePolicy* sizePolicy ```
void q_sciscintilla_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QsciScintilla* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_sciscintilla_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QsciScintilla* self ```
QRegion* q_sciscintilla_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QsciScintilla* self, int left, int top, int right, int bottom ```
void q_sciscintilla_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QsciScintilla* self, QMargins* margins ```
void q_sciscintilla_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QsciScintilla* self ```
QMargins* q_sciscintilla_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QsciScintilla* self ```
QRect* q_sciscintilla_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QsciScintilla* self ```
QLayout* q_sciscintilla_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QsciScintilla* self, QLayout* layout ```
void q_sciscintilla_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QsciScintilla* self, QWidget* parent ```
void q_sciscintilla_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QsciScintilla* self, QWidget* parent, int f ```
void q_sciscintilla_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QsciScintilla* self, int dx, int dy ```
void q_sciscintilla_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QsciScintilla* self, int dx, int dy, QRect* param3 ```
void q_sciscintilla_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QsciScintilla* self, bool on ```
void q_sciscintilla_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintilla* self, QAction* action ```
void q_sciscintilla_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QsciScintilla* self, libqt_list /* of QAction* */ actions ```
void q_sciscintilla_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QsciScintilla* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_sciscintilla_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QsciScintilla* self, QAction* before, QAction* action ```
void q_sciscintilla_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QsciScintilla* self, QAction* action ```
void q_sciscintilla_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QsciScintilla* self ```
libqt_list /* of QAction* */ q_sciscintilla_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintilla* self, const char* text ```
QAction* q_sciscintilla_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintilla* self, QIcon* icon, const char* text ```
QAction* q_sciscintilla_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintilla* self, const char* text, QKeySequence* shortcut ```
QAction* q_sciscintilla_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QsciScintilla* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_sciscintilla_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QsciScintilla* self ```
QWidget* q_sciscintilla_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QsciScintilla* self, int typeVal ```
void q_sciscintilla_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QsciScintilla* self, enum Qt__WindowType param1 ```
void q_sciscintilla_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QsciScintilla* self, int typeVal ```
void q_sciscintilla_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_sciscintilla_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QsciScintilla* self, int x, int y ```
QWidget* q_sciscintilla_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QsciScintilla* self, QPoint* p ```
QWidget* q_sciscintilla_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QsciScintilla* self, QPointF* p ```
QWidget* q_sciscintilla_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QsciScintilla* self, enum Qt__WidgetAttribute param1 ```
void q_sciscintilla_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QsciScintilla* self, enum Qt__WidgetAttribute param1 ```
bool q_sciscintilla_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QsciScintilla* self, QWidget* child ```
bool q_sciscintilla_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QsciScintilla* self, bool enabled ```
void q_sciscintilla_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QsciScintilla* self ```
QBackingStore* q_sciscintilla_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QsciScintilla* self ```
QWindow* q_sciscintilla_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QsciScintilla* self ```
QScreen* q_sciscintilla_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QsciScintilla* self, QScreen* screen ```
void q_sciscintilla_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_sciscintilla_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QsciScintilla* self, const char* title ```
void q_sciscintilla_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QsciScintilla* self, void (*slot)(QWidget*, const char*) ```
void q_sciscintilla_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QsciScintilla* self, QIcon* icon ```
void q_sciscintilla_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QsciScintilla* self, void (*slot)(QWidget*, QIcon*) ```
void q_sciscintilla_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QsciScintilla* self, const char* iconText ```
void q_sciscintilla_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QsciScintilla* self, void (*slot)(QWidget*, const char*) ```
void q_sciscintilla_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QsciScintilla* self, QPoint* pos ```
void q_sciscintilla_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QsciScintilla* self, void (*slot)(QWidget*, QPoint*) ```
void q_sciscintilla_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QsciScintilla* self ```
int64_t q_sciscintilla_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QsciScintilla* self, int hints ```
void q_sciscintilla_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPaintDevice* target, QPoint* targetOffset ```
void q_sciscintilla_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sciscintilla_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sciscintilla_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPainter* painter, QPoint* targetOffset ```
void q_sciscintilla_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_sciscintilla_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QsciScintilla* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_sciscintilla_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QsciScintilla* self, QRect* rectangle ```
QPixmap* q_sciscintilla_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QsciScintilla* self, enum Qt__GestureType typeVal, int flags ```
void q_sciscintilla_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QsciScintilla* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_sciscintilla_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QsciScintilla* self, int id, bool enable ```
void q_sciscintilla_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QsciScintilla* self, int id, bool enable ```
void q_sciscintilla_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QsciScintilla* self, enum Qt__WindowType param1, bool on ```
void q_sciscintilla_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QsciScintilla* self, enum Qt__WidgetAttribute param1, bool on ```
void q_sciscintilla_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_sciscintilla_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_sciscintilla_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciScintilla* self ```
const char* q_sciscintilla_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciScintilla* self, char* name ```
void q_sciscintilla_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciScintilla* self, bool b ```
bool q_sciscintilla_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciScintilla* self ```
QThread* q_sciscintilla_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciScintilla* self, QThread* thread ```
bool q_sciscintilla_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciScintilla* self, int interval ```
int32_t q_sciscintilla_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciScintilla* self, int id ```
void q_sciscintilla_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciScintilla* self, enum Qt__TimerId id ```
void q_sciscintilla_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciScintilla* self ```
libqt_list /* of QObject* */ q_sciscintilla_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciScintilla* self, QObject* filterObj ```
void q_sciscintilla_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciScintilla* self, QObject* obj ```
void q_sciscintilla_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sciscintilla_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciScintilla* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sciscintilla_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sciscintilla_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sciscintilla_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciScintilla* self, const char* name, QVariant* value ```
bool q_sciscintilla_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciScintilla* self, const char* name ```
QVariant* q_sciscintilla_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciScintilla* self ```
const char** q_sciscintilla_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciScintilla* self ```
QBindingStorage* q_sciscintilla_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciScintilla* self ```
const QBindingStorage* q_sciscintilla_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintilla* self, void (*slot)(QObject*) ```
void q_sciscintilla_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciScintilla* self ```
QObject* q_sciscintilla_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciScintilla* self, const char* classname ```
bool q_sciscintilla_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciScintilla* self, QThread* thread, Disambiguated_t* param2 ```
bool q_sciscintilla_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciScintilla* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sciscintilla_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciscintilla_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciScintilla* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sciscintilla_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintilla* self, QObject* param1 ```
void q_sciscintilla_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciScintilla* self, void (*slot)(QObject*, QObject*) ```
void q_sciscintilla_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QsciScintilla* self ```
double q_sciscintilla_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QsciScintilla* self ```
double q_sciscintilla_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_sciscintilla_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_sciscintilla_encode_metric_f(int64_t metric, double value);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMimeData* source ```
bool q_sciscintilla_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMimeData* source ```
bool q_sciscintilla_qbase_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, QMimeData*) ```
void q_sciscintilla_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMimeData* source, bool* rectangular ```
char* q_sciscintilla_from_mime_data(void* self, void* source, bool* rectangular);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMimeData* source, bool* rectangular ```
char* q_sciscintilla_qbase_from_mime_data(void* self, void* source, bool* rectangular);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, char* (*slot)(QsciScintilla*, QMimeData*, bool*) ```
void q_sciscintilla_on_from_mime_data(void* self, char* (*slot)(void*, void*, bool*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, const char* text, bool rectangular ```
QMimeData* q_sciscintilla_to_mime_data(void* self, const char* text, bool rectangular);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, const char* text, bool rectangular ```
QMimeData* q_sciscintilla_qbase_to_mime_data(void* self, const char* text, bool rectangular);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QMimeData* (*slot)(QsciScintilla*, const char*, bool) ```
void q_sciscintilla_on_to_mime_data(void* self, QMimeData* (*slot)(void*, const char*, bool));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QDragEnterEvent* e ```
void q_sciscintilla_drag_enter_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QDragEnterEvent* e ```
void q_sciscintilla_qbase_drag_enter_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QDragEnterEvent*) ```
void q_sciscintilla_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QDragLeaveEvent* e ```
void q_sciscintilla_drag_leave_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QDragLeaveEvent* e ```
void q_sciscintilla_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QDragLeaveEvent*) ```
void q_sciscintilla_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QDragMoveEvent* e ```
void q_sciscintilla_drag_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QDragMoveEvent* e ```
void q_sciscintilla_qbase_drag_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QDragMoveEvent*) ```
void q_sciscintilla_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QDropEvent* e ```
void q_sciscintilla_drop_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QDropEvent* e ```
void q_sciscintilla_qbase_drop_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QDropEvent*) ```
void q_sciscintilla_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QFocusEvent* e ```
void q_sciscintilla_focus_in_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QFocusEvent* e ```
void q_sciscintilla_qbase_focus_in_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QFocusEvent*) ```
void q_sciscintilla_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QFocusEvent* e ```
void q_sciscintilla_focus_out_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QFocusEvent* e ```
void q_sciscintilla_qbase_focus_out_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QFocusEvent*) ```
void q_sciscintilla_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, bool next ```
bool q_sciscintilla_focus_next_prev_child(void* self, bool next);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, bool next ```
bool q_sciscintilla_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QKeyEvent* e ```
void q_sciscintilla_key_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QKeyEvent* e ```
void q_sciscintilla_qbase_key_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QKeyEvent*) ```
void q_sciscintilla_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QInputMethodEvent* event ```
void q_sciscintilla_input_method_event(void* self, void* event);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QInputMethodEvent* event ```
void q_sciscintilla_qbase_input_method_event(void* self, void* event);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QInputMethodEvent*) ```
void q_sciscintilla_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_mouse_double_click_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_qbase_mouse_double_click_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMouseEvent*) ```
void q_sciscintilla_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_mouse_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMouseEvent*) ```
void q_sciscintilla_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_mouse_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMouseEvent*) ```
void q_sciscintilla_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_mouse_release_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMouseEvent* e ```
void q_sciscintilla_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMouseEvent*) ```
void q_sciscintilla_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QPaintEvent* e ```
void q_sciscintilla_paint_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QPaintEvent* e ```
void q_sciscintilla_qbase_paint_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QPaintEvent*) ```
void q_sciscintilla_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QResizeEvent* e ```
void q_sciscintilla_resize_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QResizeEvent* e ```
void q_sciscintilla_qbase_resize_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QResizeEvent*) ```
void q_sciscintilla_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, int dx, int dy ```
void q_sciscintilla_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, int dx, int dy ```
void q_sciscintilla_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QSize* (*slot)() ```
void q_sciscintilla_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QSize* (*slot)() ```
void q_sciscintilla_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QWidget* viewport ```
void q_sciscintilla_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QWidget* viewport ```
void q_sciscintilla_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QWidget*) ```
void q_sciscintilla_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QObject* param1, QEvent* param2 ```
bool q_sciscintilla_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QObject* param1, QEvent* param2 ```
bool q_sciscintilla_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, QObject*, QEvent*) ```
void q_sciscintilla_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* param1 ```
bool q_sciscintilla_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* param1 ```
bool q_sciscintilla_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, QEvent*) ```
void q_sciscintilla_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QSize* q_sciscintilla_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QSize* (*slot)() ```
void q_sciscintilla_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QStyleOptionFrame* option ```
void q_sciscintilla_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QStyleOptionFrame* option ```
void q_sciscintilla_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QStyleOptionFrame*) ```
void q_sciscintilla_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, int32_t (*slot)() ```
void q_sciscintilla_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, bool visible ```
void q_sciscintilla_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, bool visible ```
void q_sciscintilla_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, bool) ```
void q_sciscintilla_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, int param1 ```
int32_t q_sciscintilla_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, int param1 ```
int32_t q_sciscintilla_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, int32_t (*slot)(QsciScintilla*, int) ```
void q_sciscintilla_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)() ```
void q_sciscintilla_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QPaintEngine* q_sciscintilla_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QPaintEngine* q_sciscintilla_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QPaintEngine* (*slot)() ```
void q_sciscintilla_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QKeyEvent* event ```
void q_sciscintilla_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QKeyEvent* event ```
void q_sciscintilla_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QKeyEvent*) ```
void q_sciscintilla_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QEnterEvent* event ```
void q_sciscintilla_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QEnterEvent* event ```
void q_sciscintilla_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QEnterEvent*) ```
void q_sciscintilla_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* event ```
void q_sciscintilla_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* event ```
void q_sciscintilla_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QEvent*) ```
void q_sciscintilla_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMoveEvent* event ```
void q_sciscintilla_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMoveEvent* event ```
void q_sciscintilla_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMoveEvent*) ```
void q_sciscintilla_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QCloseEvent* event ```
void q_sciscintilla_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QCloseEvent* event ```
void q_sciscintilla_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QCloseEvent*) ```
void q_sciscintilla_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QTabletEvent* event ```
void q_sciscintilla_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QTabletEvent* event ```
void q_sciscintilla_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QTabletEvent*) ```
void q_sciscintilla_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QActionEvent* event ```
void q_sciscintilla_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QActionEvent* event ```
void q_sciscintilla_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QActionEvent*) ```
void q_sciscintilla_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QShowEvent* event ```
void q_sciscintilla_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QShowEvent* event ```
void q_sciscintilla_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QShowEvent*) ```
void q_sciscintilla_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QHideEvent* event ```
void q_sciscintilla_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QHideEvent* event ```
void q_sciscintilla_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QHideEvent*) ```
void q_sciscintilla_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, const char* eventType, void* message, intptr_t* result ```
bool q_sciscintilla_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, const char* eventType, void* message, intptr_t* result ```
bool q_sciscintilla_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, const char*, void*, intptr_t*) ```
void q_sciscintilla_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciscintilla_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciscintilla_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, int32_t (*slot)(QsciScintilla*, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciscintilla_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QPainter* painter ```
void q_sciscintilla_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QPainter* painter ```
void q_sciscintilla_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QPainter*) ```
void q_sciscintilla_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QPoint* offset ```
QPaintDevice* q_sciscintilla_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QPoint* offset ```
QPaintDevice* q_sciscintilla_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QPaintDevice* (*slot)(QsciScintilla*, QPoint*) ```
void q_sciscintilla_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QPainter* q_sciscintilla_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QPainter* q_sciscintilla_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QPainter* (*slot)() ```
void q_sciscintilla_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_sciscintilla_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_sciscintilla_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QVariant* (*slot)(QsciScintilla*, enum Qt__InputMethodQuery) ```
void q_sciscintilla_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QTimerEvent* event ```
void q_sciscintilla_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QTimerEvent* event ```
void q_sciscintilla_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QTimerEvent*) ```
void q_sciscintilla_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QChildEvent* event ```
void q_sciscintilla_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QChildEvent* event ```
void q_sciscintilla_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QChildEvent*) ```
void q_sciscintilla_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* event ```
void q_sciscintilla_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QEvent* event ```
void q_sciscintilla_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QEvent*) ```
void q_sciscintilla_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
void q_sciscintilla_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
void q_sciscintilla_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMetaMethod*) ```
void q_sciscintilla_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
void q_sciscintilla_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
void q_sciscintilla_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QMetaMethod*) ```
void q_sciscintilla_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_set_scroll_bars(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_set_scroll_bars(void* self);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_set_scroll_bars(void* self, void (*slot)());

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, int x, int y ```
bool q_sciscintilla_context_menu_needed(void* self, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, int x, int y ```
bool q_sciscintilla_qbase_context_menu_needed(void* self, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, int, int) ```
void q_sciscintilla_on_context_menu_needed(void* self, bool (*slot)(void*, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, int left, int top, int right, int bottom ```
void q_sciscintilla_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, int left, int top, int right, int bottom ```
void q_sciscintilla_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, int, int, int, int) ```
void q_sciscintilla_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QMargins* q_sciscintilla_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QMargins* q_sciscintilla_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QMargins* (*slot)() ```
void q_sciscintilla_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QPainter* param1 ```
void q_sciscintilla_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QPainter* param1 ```
void q_sciscintilla_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)(QsciScintilla*, QPainter*) ```
void q_sciscintilla_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, void (*slot)() ```
void q_sciscintilla_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)() ```
void q_sciscintilla_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
bool q_sciscintilla_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)() ```
void q_sciscintilla_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
QObject* q_sciscintilla_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
QObject* q_sciscintilla_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, QObject* (*slot)() ```
void q_sciscintilla_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self ```
int32_t q_sciscintilla_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, int32_t (*slot)() ```
void q_sciscintilla_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, const char* signal ```
int32_t q_sciscintilla_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, const char* signal ```
int32_t q_sciscintilla_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, int32_t (*slot)(QsciScintilla*, const char*) ```
void q_sciscintilla_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
bool q_sciscintilla_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, QMetaMethod* signal ```
bool q_sciscintilla_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, bool (*slot)(QsciScintilla*, QMetaMethod*) ```
void q_sciscintilla_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_sciscintilla_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_sciscintilla_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciScintilla* self, double (*slot)(QsciScintilla*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciscintilla_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciScintilla* self, void (*slot)(QObject*, const char*) ```
void q_sciscintilla_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciScintilla* self ```
void q_sciscintilla_delete(void* self);

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
