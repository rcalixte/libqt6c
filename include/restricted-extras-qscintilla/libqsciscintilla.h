#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCISCINTILLA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCISCINTILLA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)

/// q_sciscintilla_new constructs a new QsciScintilla object.
///
/// @param parent QWidget*
///
QsciScintilla* q_sciscintilla_new(void* parent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)

/// q_sciscintilla_new2 constructs a new QsciScintilla object.
///
QsciScintilla* q_sciscintilla_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciScintilla*
///
const QMetaObject* q_sciscintilla_meta_object(void* self);

/// @param self QsciScintilla*
/// @param param1 const char*
///
void* q_sciscintilla_metacast(void* self, const char* param1);

/// @param self QsciScintilla*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sciscintilla_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback int32_t func(QsciScintilla* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sciscintilla_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sciscintilla_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sciscintilla_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciScintilla*
/// @param pos int
/// @param context_start int*
/// @param last_word_start int*
///
const char** q_sciscintilla_api_context(void* self, int pos, int* context_start, int* last_word_start);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback const char** func(QsciScintilla* self, int pos, int* context_start, int* last_word_start)
///
void q_sciscintilla_on_api_context(void* self, const char** (*callback)(void*, int, int*, int*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param pos int
/// @param context_start int*
/// @param last_word_start int*
///
const char** q_sciscintilla_qbase_api_context(void* self, int pos, int* context_start, int* last_word_start);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text const char*
/// @param style int
///
void q_sciscintilla_annotate(void* self, int line, const char* text, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text const char*
/// @param style QsciStyle*
///
void q_sciscintilla_annotate2(void* self, int line, const char* text, void* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text QsciStyledText*
///
void q_sciscintilla_annotate3(void* self, int line, void* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
/// @param line int
///
const char* q_sciscintilla_annotation(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__AnnotationDisplay
///
int32_t q_sciscintilla_annotation_display(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_annotations(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_completion_case_sensitivity(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_completion_fillups_enabled(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_completion_replace_word(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_completion_show_single(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__AutoCompletionSource
///
int32_t q_sciscintilla_auto_completion_source(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_auto_completion_threshold(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__AutoCompletionUseSingle
///
int32_t q_sciscintilla_auto_completion_use_single(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_indent(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_backspace_unindents(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_begin_undo_action(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__BraceMatch
///
int32_t q_sciscintilla_brace_matching(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciScintilla*
/// @param start int
/// @param end int
///
char* q_sciscintilla_bytes(void* self, int start, int end);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__CallTipsPosition
///
int32_t q_sciscintilla_call_tips_position(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__CallTipsStyle
///
int32_t q_sciscintilla_call_tips_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_call_tips_visible(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_cancel_find(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_cancel_list(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_case_sensitive(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_folds(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param lineFrom int
/// @param indexFrom int
/// @param lineTo int
/// @param indexTo int
/// @param indicatorNumber int
///
void q_sciscintilla_clear_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_registered_images(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QColor* q_sciscintilla_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return libqt_list of int
///
libqt_list q_sciscintilla_contracted_folds(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__EolMode
///
void q_sciscintilla_convert_eols(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QMenu* q_sciscintilla_create_standard_context_menu(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QsciDocument* q_sciscintilla_document(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_end_undo_action(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QColor* q_sciscintilla_edge_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_edge_column(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__EdgeMode
///
int32_t q_sciscintilla_edge_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param f QFont*
///
void q_sciscintilla_set_font(void* self, void* f);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__EolMode
///
int32_t q_sciscintilla_eol_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_eol_visibility(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_extra_ascent(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_extra_descent(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param lineFrom int
/// @param indexFrom int
/// @param lineTo int
/// @param indexTo int
/// @param indicatorNumber int
///
void q_sciscintilla_fill_indicator_range(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param expr const char*
/// @param re bool
/// @param cs bool
/// @param wo bool
/// @param wrap bool
/// @param forward bool
/// @param line int
/// @param index int
/// @param show bool
/// @param posix bool
/// @param cxx11 bool
///
bool q_sciscintilla_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11)
///
void q_sciscintilla_on_find_first(void* self, bool (*callback)(void*, const char*, bool, bool, bool, bool, bool, int, int, bool, bool, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param expr const char*
/// @param re bool
/// @param cs bool
/// @param wo bool
/// @param wrap bool
/// @param forward bool
/// @param line int
/// @param index int
/// @param show bool
/// @param posix bool
/// @param cxx11 bool
///
bool q_sciscintilla_qbase_find_first(void* self, const char* expr, bool re, bool cs, bool wo, bool wrap, bool forward, int line, int index, bool show, bool posix, bool cxx11);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param expr const char*
/// @param re bool
/// @param cs bool
/// @param wo bool
/// @param forward bool
/// @param show bool
/// @param posix bool
/// @param cxx11 bool
///
bool q_sciscintilla_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11)
///
void q_sciscintilla_on_find_first_in_selection(void* self, bool (*callback)(void*, const char*, bool, bool, bool, bool, bool, bool, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param expr const char*
/// @param re bool
/// @param cs bool
/// @param wo bool
/// @param forward bool
/// @param show bool
/// @param posix bool
/// @param cxx11 bool
///
bool q_sciscintilla_qbase_find_first_in_selection(void* self, const char* expr, bool re, bool cs, bool wo, bool forward, bool show, bool posix, bool cxx11);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_find_next(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback bool func()
///
void q_sciscintilla_on_find_next(void* self, bool (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_qbase_find_next(void* self);

#if defined(__linux__) || defined(__FreeBSD__)
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param brace int64_t*
/// @param other int64_t*
/// @param mode enum QsciScintilla__BraceMatch
///
bool q_sciscintilla_find_matching_brace(void* self, int64_t* brace, int64_t* other, int32_t mode);
#endif

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_first_visible_line(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__FoldStyle
///
int32_t q_sciscintilla_folding(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int*
/// @param index int*
///
void q_sciscintilla_get_cursor_position(void* self, int* line, int* index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param lineFrom int*
/// @param indexFrom int*
/// @param lineTo int*
/// @param indexTo int*
///
void q_sciscintilla_get_selection(void* self, int* lineFrom, int* indexFrom, int* lineTo, int* indexTo);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_has_selected_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
int32_t q_sciscintilla_indentation(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_indentation_guides(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_indentations_use_tabs(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_indentation_width(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param style enum QsciScintilla__IndicatorStyle
///
int32_t q_sciscintilla_indicator_define(void* self, int32_t style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param indicatorNumber int
///
bool q_sciscintilla_indicator_draw_under(void* self, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_call_tip_active(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_list_active(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_modified(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_read_only(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_redo_available(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_undo_available(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_utf8(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param ch char
///
bool q_sciscintilla_is_word_character(void* self, char ch);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param point QPoint*
///
int32_t q_sciscintilla_line_at(void* self, void* point);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param line int*
/// @param index int*
///
void q_sciscintilla_line_index_from_position(void* self, int position, int* line, int* index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
int32_t q_sciscintilla_line_length(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_lines(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_length(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QsciLexer* q_sciscintilla_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
QColor* q_sciscintilla_margin_background_color(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
bool q_sciscintilla_margin_line_numbers(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
int32_t q_sciscintilla_margin_marker_mask(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_margin_options(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
bool q_sciscintilla_margin_sensitivity(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
/// @return enum QsciScintilla__MarginType
///
int32_t q_sciscintilla_margin_type(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
///
int32_t q_sciscintilla_margin_width(void* self, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_margins(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param sym enum QsciScintilla__MarkerSymbol
///
int32_t q_sciscintilla_marker_define(void* self, int32_t sym);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param ch char
///
int32_t q_sciscintilla_marker_define2(void* self, char ch);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param pm QPixmap*
///
int32_t q_sciscintilla_marker_define3(void* self, void* pm);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param im QImage*
///
int32_t q_sciscintilla_marker_define4(void* self, void* im);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
/// @param markerNumber int
///
int32_t q_sciscintilla_marker_add(void* self, int linenr, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
///
uint32_t q_sciscintilla_markers_at_line(void* self, int linenr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
///
void q_sciscintilla_marker_delete(void* self, int linenr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_marker_delete_all(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mhandle int
///
void q_sciscintilla_marker_delete_handle(void* self, int mhandle);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mhandle int
///
int32_t q_sciscintilla_marker_line(void* self, int mhandle);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
/// @param mask uint32_t
///
int32_t q_sciscintilla_marker_find_next(void* self, int linenr, uint32_t mask);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
/// @param mask uint32_t
///
int32_t q_sciscintilla_marker_find_previous(void* self, int linenr, uint32_t mask);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_overwrite_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QColor* q_sciscintilla_paper(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
///
int32_t q_sciscintilla_position_from_line_index(void* self, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param io QIODevice*
///
bool q_sciscintilla_read(void* self, void* io);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param start int
/// @param end int
///
void q_sciscintilla_recolor(void* self, int start, int end);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int start, int end)
///
void q_sciscintilla_on_recolor(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param start int
/// @param end int
///
void q_sciscintilla_qbase_recolor(void* self, int start, int end);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param id int
/// @param pm QPixmap*
///
void q_sciscintilla_register_image(void* self, int id, void* pm);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param id int
/// @param im QImage*
///
void q_sciscintilla_register_image2(void* self, int id, void* im);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param replaceStr const char*
///
void q_sciscintilla_replace(void* self, const char* replaceStr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* replaceStr)
///
void q_sciscintilla_on_replace(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param replaceStr const char*
///
void q_sciscintilla_qbase_replace(void* self, const char* replaceStr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_fold_margin_colors(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_hotspot_background_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_hotspot_foreground_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_scroll_width(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_scroll_width_tracking(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param fore QColor*
/// @param back QColor*
///
void q_sciscintilla_set_fold_margin_colors(void* self, void* fore, void* back);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param display enum QsciScintilla__AnnotationDisplay
///
void q_sciscintilla_set_annotation_display(void* self, int32_t display);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enabled bool
///
void q_sciscintilla_set_auto_completion_fillups_enabled(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param fillups const char*
///
void q_sciscintilla_set_auto_completion_fillups(void* self, const char* fillups);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param separators const char**
///
void q_sciscintilla_set_auto_completion_word_separators(void* self, const char* separators[static 1]);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_call_tips_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_call_tips_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_call_tips_highlight_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param position enum QsciScintilla__CallTipsPosition
///
void q_sciscintilla_set_call_tips_position(void* self, int32_t position);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param style enum QsciScintilla__CallTipsStyle
///
void q_sciscintilla_set_call_tips_style(void* self, int32_t style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param nr int
///
void q_sciscintilla_set_call_tips_visible(void* self, int nr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param folds libqt_list of int
///
void q_sciscintilla_set_contracted_folds(void* self, libqt_list /* of int */ folds);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param document QsciDocument*
///
void q_sciscintilla_set_document(void* self, void* document);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param colnr int
/// @param col QColor*
///
void q_sciscintilla_add_edge_column(void* self, int colnr, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_edge_columns(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_edge_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param colnr int
///
void q_sciscintilla_set_edge_column(void* self, int colnr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__EdgeMode
///
void q_sciscintilla_set_edge_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
///
void q_sciscintilla_set_first_visible_line(void* self, int linenr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param under bool
///
void q_sciscintilla_set_indicator_draw_under(void* self, bool under);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_indicator_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_indicator_hover_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param style enum QsciScintilla__IndicatorStyle
///
void q_sciscintilla_set_indicator_hover_style(void* self, int32_t style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_indicator_outline_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param col QColor*
///
void q_sciscintilla_set_margin_background_color(void* self, int margin, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param options int
///
void q_sciscintilla_set_margin_options(void* self, int options);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text const char*
/// @param style int
///
void q_sciscintilla_set_margin_text(void* self, int line, const char* text, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text const char*
/// @param style QsciStyle*
///
void q_sciscintilla_set_margin_text2(void* self, int line, const char* text, void* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param text QsciStyledText*
///
void q_sciscintilla_set_margin_text3(void* self, int line, void* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param type enum QsciScintilla__MarginType
///
void q_sciscintilla_set_margin_type(void* self, int margin, int32_t type);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_margin_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margins int
///
void q_sciscintilla_set_margins(void* self, int margins);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_marker_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_marker_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_matched_brace_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_matched_brace_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param indicatorNumber int
///
void q_sciscintilla_set_matched_brace_indicator(void* self, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_matched_brace_indicator(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param pixelWidth int
///
void q_sciscintilla_set_scroll_width(void* self, int pixelWidth);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enabled bool
///
void q_sciscintilla_set_scroll_width_tracking(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__TabDrawMode
///
void q_sciscintilla_set_tab_draw_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_unmatched_brace_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_unmatched_brace_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param indicatorNumber int
///
void q_sciscintilla_set_unmatched_brace_indicator(void* self, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_unmatched_brace_indicator(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param endFlag enum QsciScintilla__WrapVisualFlag
///
void q_sciscintilla_set_wrap_visual_flags(void* self, int32_t endFlag);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_selected_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_selection_to_eol(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_hotspot_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_hotspot_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_hotspot_underline(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_hotspot_wrap(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param filled bool
///
void q_sciscintilla_set_selection_to_eol(void* self, bool filled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param extra int
///
void q_sciscintilla_set_extra_ascent(void* self, int extra);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param extra int
///
void q_sciscintilla_set_extra_descent(void* self, int extra);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param overwrite bool
///
void q_sciscintilla_set_overwrite_mode(void* self, bool overwrite);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_whitespace_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_whitespace_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param size int
///
void q_sciscintilla_set_whitespace_size(void* self, int size);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__WrapIndentMode
///
void q_sciscintilla_set_wrap_indent_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param id int
/// @param list const char**
///
void q_sciscintilla_show_user_list(void* self, int id, const char* list[static 1]);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
QsciCommandSet* q_sciscintilla_standard_commands(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__TabDrawMode
///
int32_t q_sciscintilla_tab_draw_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_tab_indents(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_tab_width(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
/// @param line int
///
const char* q_sciscintilla_text2(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
/// @param start int
/// @param end int
///
const char* q_sciscintilla_text3(void* self, int start, int end);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
///
int32_t q_sciscintilla_text_height(void* self, int linenr);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_whitespace_size(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__WhitespaceVisibility
///
int32_t q_sciscintilla_whitespace_visibility(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
///
const char* q_sciscintilla_word_at_line_index(void* self, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
/// @param point QPoint*
///
const char* q_sciscintilla_word_at_point(void* self, void* point);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__WrapMode
///
int32_t q_sciscintilla_wrap_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
/// @return enum QsciScintilla__WrapIndentMode
///
int32_t q_sciscintilla_wrap_indent_mode(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param io QIODevice*
///
bool q_sciscintilla_write(void* self, void* io);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_append(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* text)
///
void q_sciscintilla_on_append(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_qbase_append(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_auto_complete_from_all(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_auto_complete_from_all(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_auto_complete_from_all(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_auto_complete_from_a_p_is(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_auto_complete_from_a_p_is(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_auto_complete_from_a_p_is(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_auto_complete_from_document(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_auto_complete_from_document(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_auto_complete_from_document(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_call_tip(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_call_tip(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_call_tip(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_clear(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_copy(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_copy(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_copy(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_cut(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_cut(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_cut(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_ensure_cursor_visible(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_ensure_cursor_visible(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_ensure_cursor_visible(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_ensure_line_visible(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line)
///
void q_sciscintilla_on_ensure_line_visible(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_qbase_ensure_line_visible(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param children bool
///
void q_sciscintilla_fold_all(void* self, bool children);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool children)
///
void q_sciscintilla_on_fold_all(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param children bool
///
void q_sciscintilla_qbase_fold_all(void* self, bool children);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_fold_line(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line)
///
void q_sciscintilla_on_fold_line(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_qbase_fold_line(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_indent(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line)
///
void q_sciscintilla_on_indent(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_qbase_indent(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_insert(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* text)
///
void q_sciscintilla_on_insert(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_qbase_insert(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param text const char*
/// @param line int
/// @param index int
///
void q_sciscintilla_insert_at(void* self, const char* text, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* text, int line, int index)
///
void q_sciscintilla_on_insert_at(void* self, void (*callback)(void*, const char*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param text const char*
/// @param line int
/// @param index int
///
void q_sciscintilla_qbase_insert_at(void* self, const char* text, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_move_to_matching_brace(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_move_to_matching_brace(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_move_to_matching_brace(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_paste(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_paste(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_paste(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_redo(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_redo(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_redo(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_remove_selected_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_remove_selected_text(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_remove_selected_text(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_replace_selected_text(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* text)
///
void q_sciscintilla_on_replace_selected_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_qbase_replace_selected_text(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_selection_background_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_reset_selection_background_color(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_reset_selection_background_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_reset_selection_foreground_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_reset_selection_foreground_color(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_reset_selection_foreground_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param selectVal bool
///
void q_sciscintilla_select_all(void* self, bool selectVal);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool selectVal)
///
void q_sciscintilla_on_select_all(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param selectVal bool
///
void q_sciscintilla_qbase_select_all(void* self, bool selectVal);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_select_to_matching_brace(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_select_to_matching_brace(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_select_to_matching_brace(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param cs bool
///
void q_sciscintilla_set_auto_completion_case_sensitivity(void* self, bool cs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool cs)
///
void q_sciscintilla_on_set_auto_completion_case_sensitivity(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param cs bool
///
void q_sciscintilla_qbase_set_auto_completion_case_sensitivity(void* self, bool cs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param replace bool
///
void q_sciscintilla_set_auto_completion_replace_word(void* self, bool replace);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool replace)
///
void q_sciscintilla_on_set_auto_completion_replace_word(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param replace bool
///
void q_sciscintilla_qbase_set_auto_completion_replace_word(void* self, bool replace);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param single bool
///
void q_sciscintilla_set_auto_completion_show_single(void* self, bool single);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool single)
///
void q_sciscintilla_on_set_auto_completion_show_single(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param single bool
///
void q_sciscintilla_qbase_set_auto_completion_show_single(void* self, bool single);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param source enum QsciScintilla__AutoCompletionSource
///
void q_sciscintilla_set_auto_completion_source(void* self, int32_t source);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__AutoCompletionSource source)
///
void q_sciscintilla_on_set_auto_completion_source(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param source enum QsciScintilla__AutoCompletionSource
///
void q_sciscintilla_qbase_set_auto_completion_source(void* self, int32_t source);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param thresh int
///
void q_sciscintilla_set_auto_completion_threshold(void* self, int thresh);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int thresh)
///
void q_sciscintilla_on_set_auto_completion_threshold(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param thresh int
///
void q_sciscintilla_qbase_set_auto_completion_threshold(void* self, int thresh);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param single enum QsciScintilla__AutoCompletionUseSingle
///
void q_sciscintilla_set_auto_completion_use_single(void* self, int32_t single);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__AutoCompletionUseSingle single)
///
void q_sciscintilla_on_set_auto_completion_use_single(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param single enum QsciScintilla__AutoCompletionUseSingle
///
void q_sciscintilla_qbase_set_auto_completion_use_single(void* self, int32_t single);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param autoindent bool
///
void q_sciscintilla_set_auto_indent(void* self, bool autoindent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool autoindent)
///
void q_sciscintilla_on_set_auto_indent(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param autoindent bool
///
void q_sciscintilla_qbase_set_auto_indent(void* self, bool autoindent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param bm enum QsciScintilla__BraceMatch
///
void q_sciscintilla_set_brace_matching(void* self, int32_t bm);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__BraceMatch bm)
///
void q_sciscintilla_on_set_brace_matching(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param bm enum QsciScintilla__BraceMatch
///
void q_sciscintilla_qbase_set_brace_matching(void* self, int32_t bm);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param unindent bool
///
void q_sciscintilla_set_backspace_unindents(void* self, bool unindent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool unindent)
///
void q_sciscintilla_on_set_backspace_unindents(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param unindent bool
///
void q_sciscintilla_qbase_set_backspace_unindents(void* self, bool unindent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_caret_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_caret_foreground_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_caret_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_caret_line_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_caret_line_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_caret_line_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_set_caret_line_frame_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int width)
///
void q_sciscintilla_on_set_caret_line_frame_width(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_qbase_set_caret_line_frame_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_caret_line_visible(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool enable)
///
void q_sciscintilla_on_set_caret_line_visible(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_qbase_set_caret_line_visible(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_set_caret_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int width)
///
void q_sciscintilla_on_set_caret_width(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_qbase_set_caret_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param c QColor*
///
void q_sciscintilla_set_color(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* c)
///
void q_sciscintilla_on_set_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param c QColor*
///
void q_sciscintilla_qbase_set_color(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
///
void q_sciscintilla_set_cursor_position(void* self, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line, int index)
///
void q_sciscintilla_on_set_cursor_position(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
///
void q_sciscintilla_qbase_set_cursor_position(void* self, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__EolMode
///
void q_sciscintilla_set_eol_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__EolMode mode)
///
void q_sciscintilla_on_set_eol_mode(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__EolMode
///
void q_sciscintilla_qbase_set_eol_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param visible bool
///
void q_sciscintilla_set_eol_visibility(void* self, bool visible);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool visible)
///
void q_sciscintilla_on_set_eol_visibility(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param visible bool
///
void q_sciscintilla_qbase_set_eol_visibility(void* self, bool visible);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param fold enum QsciScintilla__FoldStyle
/// @param margin int
///
void q_sciscintilla_set_folding(void* self, int32_t fold, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__FoldStyle fold, int margin)
///
void q_sciscintilla_on_set_folding(void* self, void (*callback)(void*, int32_t, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param fold enum QsciScintilla__FoldStyle
/// @param margin int
///
void q_sciscintilla_qbase_set_folding(void* self, int32_t fold, int margin);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param indentation int
///
void q_sciscintilla_set_indentation(void* self, int line, int indentation);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line, int indentation)
///
void q_sciscintilla_on_set_indentation(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
/// @param indentation int
///
void q_sciscintilla_qbase_set_indentation(void* self, int line, int indentation);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_indentation_guides(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool enable)
///
void q_sciscintilla_on_set_indentation_guides(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_qbase_set_indentation_guides(void* self, bool enable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_indentation_guides_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_indentation_guides_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_indentation_guides_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_indentation_guides_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_indentation_guides_foreground_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_indentation_guides_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param tabs bool
///
void q_sciscintilla_set_indentations_use_tabs(void* self, bool tabs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool tabs)
///
void q_sciscintilla_on_set_indentations_use_tabs(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param tabs bool
///
void q_sciscintilla_qbase_set_indentations_use_tabs(void* self, bool tabs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_set_indentation_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int width)
///
void q_sciscintilla_on_set_indentation_width(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_qbase_set_indentation_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param lexer QsciLexer*
///
void q_sciscintilla_set_lexer(void* self, void* lexer);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QsciLexer* lexer)
///
void q_sciscintilla_on_set_lexer(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param lexer QsciLexer*
///
void q_sciscintilla_qbase_set_lexer(void* self, void* lexer);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_margins_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_margins_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_margins_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param f QFont*
///
void q_sciscintilla_set_margins_font(void* self, void* f);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QFont* f)
///
void q_sciscintilla_on_set_margins_font(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param f QFont*
///
void q_sciscintilla_qbase_set_margins_font(void* self, void* f);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_margins_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_margins_foreground_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_margins_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param lnrs bool
///
void q_sciscintilla_set_margin_line_numbers(void* self, int margin, bool lnrs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, bool lnrs)
///
void q_sciscintilla_on_set_margin_line_numbers(void* self, void (*callback)(void*, int, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param margin int
/// @param lnrs bool
///
void q_sciscintilla_qbase_set_margin_line_numbers(void* self, int margin, bool lnrs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param mask int
///
void q_sciscintilla_set_margin_marker_mask(void* self, int margin, int mask);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, int mask)
///
void q_sciscintilla_on_set_margin_marker_mask(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param margin int
/// @param mask int
///
void q_sciscintilla_qbase_set_margin_marker_mask(void* self, int margin, int mask);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param sens bool
///
void q_sciscintilla_set_margin_sensitivity(void* self, int margin, bool sens);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, bool sens)
///
void q_sciscintilla_on_set_margin_sensitivity(void* self, void (*callback)(void*, int, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param margin int
/// @param sens bool
///
void q_sciscintilla_qbase_set_margin_sensitivity(void* self, int margin, bool sens);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param width int
///
void q_sciscintilla_set_margin_width(void* self, int margin, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, int width)
///
void q_sciscintilla_on_set_margin_width(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param margin int
/// @param width int
///
void q_sciscintilla_qbase_set_margin_width(void* self, int margin, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param s const char*
///
void q_sciscintilla_set_margin_width2(void* self, int margin, const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, const char* s)
///
void q_sciscintilla_on_set_margin_width2(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param margin int
/// @param s const char*
///
void q_sciscintilla_qbase_set_margin_width2(void* self, int margin, const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param m bool
///
void q_sciscintilla_set_modified(void* self, bool m);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool m)
///
void q_sciscintilla_on_set_modified(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param m bool
///
void q_sciscintilla_qbase_set_modified(void* self, bool m);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param c QColor*
///
void q_sciscintilla_set_paper(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* c)
///
void q_sciscintilla_on_set_paper(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param c QColor*
///
void q_sciscintilla_qbase_set_paper(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param ro bool
///
void q_sciscintilla_set_read_only(void* self, bool ro);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool ro)
///
void q_sciscintilla_on_set_read_only(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param ro bool
///
void q_sciscintilla_qbase_set_read_only(void* self, bool ro);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param lineFrom int
/// @param indexFrom int
/// @param lineTo int
/// @param indexTo int
///
void q_sciscintilla_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int lineFrom, int indexFrom, int lineTo, int indexTo)
///
void q_sciscintilla_on_set_selection(void* self, void (*callback)(void*, int, int, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param lineFrom int
/// @param indexFrom int
/// @param lineTo int
/// @param indexTo int
///
void q_sciscintilla_qbase_set_selection(void* self, int lineFrom, int indexFrom, int lineTo, int indexTo);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_selection_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_selection_background_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_selection_background_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_set_selection_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QColor* col)
///
void q_sciscintilla_on_set_selection_foreground_color(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param col QColor*
///
void q_sciscintilla_qbase_set_selection_foreground_color(void* self, void* col);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param indent bool
///
void q_sciscintilla_set_tab_indents(void* self, bool indent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool indent)
///
void q_sciscintilla_on_set_tab_indents(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param indent bool
///
void q_sciscintilla_qbase_set_tab_indents(void* self, bool indent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_set_tab_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int width)
///
void q_sciscintilla_on_set_tab_width(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param width int
///
void q_sciscintilla_qbase_set_tab_width(void* self, int width);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_set_text(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* text)
///
void q_sciscintilla_on_set_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param text const char*
///
void q_sciscintilla_qbase_set_text(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param cp bool
///
void q_sciscintilla_set_utf8(void* self, bool cp);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool cp)
///
void q_sciscintilla_on_set_utf8(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param cp bool
///
void q_sciscintilla_qbase_set_utf8(void* self, bool cp);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__WhitespaceVisibility
///
void q_sciscintilla_set_whitespace_visibility(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__WhitespaceVisibility mode)
///
void q_sciscintilla_on_set_whitespace_visibility(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__WhitespaceVisibility
///
void q_sciscintilla_qbase_set_whitespace_visibility(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__WrapMode
///
void q_sciscintilla_set_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, enum QsciScintilla__WrapMode mode)
///
void q_sciscintilla_on_set_wrap_mode(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param mode enum QsciScintilla__WrapMode
///
void q_sciscintilla_qbase_set_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_undo(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_undo(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_undo(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_unindent(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line)
///
void q_sciscintilla_on_unindent(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_qbase_unindent(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param range int
///
void q_sciscintilla_zoom_in(void* self, int range);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int range)
///
void q_sciscintilla_on_zoom_in(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param range int
///
void q_sciscintilla_qbase_zoom_in(void* self, int range);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_zoom_in2(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_zoom_in2(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_zoom_in2(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param range int
///
void q_sciscintilla_zoom_out(void* self, int range);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int range)
///
void q_sciscintilla_on_zoom_out(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param range int
///
void q_sciscintilla_qbase_zoom_out(void* self, int range);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_zoom_out2(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_zoom_out2(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_zoom_out2(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param size int
///
void q_sciscintilla_zoom_to(void* self, int size);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int size)
///
void q_sciscintilla_on_zoom_to(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param size int
///
void q_sciscintilla_qbase_zoom_to(void* self, int size);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
///
void q_sciscintilla_cursor_position_changed(void* self, int line, int index);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line, int index)
///
void q_sciscintilla_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param yes bool
///
void q_sciscintilla_copy_available(void* self, bool yes);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool yes)
///
void q_sciscintilla_on_copy_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
/// @param state flag of enum Qt__KeyboardModifier
///
void q_sciscintilla_indicator_clicked(void* self, int line, int index, int32_t state);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line, int index, flag of enum Qt__KeyboardModifier state)
///
void q_sciscintilla_on_indicator_clicked(void* self, void (*callback)(void*, int, int, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
/// @param index int
/// @param state flag of enum Qt__KeyboardModifier
///
void q_sciscintilla_indicator_released(void* self, int line, int index, int32_t state);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int line, int index, flag of enum Qt__KeyboardModifier state)
///
void q_sciscintilla_on_indicator_released(void* self, void (*callback)(void*, int, int, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_lines_changed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self)
///
void q_sciscintilla_on_lines_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param line int
/// @param state flag of enum Qt__KeyboardModifier
///
void q_sciscintilla_margin_clicked(void* self, int margin, int line, int32_t state);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, int line, flag of enum Qt__KeyboardModifier state)
///
void q_sciscintilla_on_margin_clicked(void* self, void (*callback)(void*, int, int, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param margin int
/// @param line int
/// @param state flag of enum Qt__KeyboardModifier
///
void q_sciscintilla_margin_right_clicked(void* self, int margin, int line, int32_t state);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int margin, int line, flag of enum Qt__KeyboardModifier state)
///
void q_sciscintilla_on_margin_right_clicked(void* self, void (*callback)(void*, int, int, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_modification_attempted(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self)
///
void q_sciscintilla_on_modification_attempted(void* self, void (*callback)(void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param m bool
///
void q_sciscintilla_modification_changed(void* self, bool m);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool m)
///
void q_sciscintilla_on_modification_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_selection_changed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self)
///
void q_sciscintilla_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_text_changed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self)
///
void q_sciscintilla_on_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param id int
/// @param stringVal const char*
///
void q_sciscintilla_user_list_activated(void* self, int id, const char* stringVal);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int id, const char* stringVal)
///
void q_sciscintilla_on_user_list_activated(void* self, void (*callback)(void*, int, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param e QEvent*
///
bool q_sciscintilla_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, QEvent* e)
///
void q_sciscintilla_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param e QEvent*
///
bool q_sciscintilla_qbase_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param e QEvent*
///
void q_sciscintilla_change_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QEvent* e)
///
void q_sciscintilla_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param e QEvent*
///
void q_sciscintilla_qbase_change_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param e QContextMenuEvent*
///
void q_sciscintilla_context_menu_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QContextMenuEvent* e)
///
void q_sciscintilla_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param e QContextMenuEvent*
///
void q_sciscintilla_qbase_context_menu_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param e QWheelEvent*
///
void q_sciscintilla_wheel_event(void* self, void* e);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QWheelEvent* e)
///
void q_sciscintilla_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Base class method implementation
///
/// @param self QsciScintilla*
/// @param e QWheelEvent*
///
void q_sciscintilla_qbase_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sciscintilla_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sciscintilla_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_clear_annotations1(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param style enum QsciScintilla__IndicatorStyle
/// @param indicatorNumber int
///
int32_t q_sciscintilla_indicator_define2(void* self, int32_t style, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param sym enum QsciScintilla__MarkerSymbol
/// @param markerNumber int
///
int32_t q_sciscintilla_marker_define22(void* self, int32_t sym, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param ch char
/// @param markerNumber int
///
int32_t q_sciscintilla_marker_define23(void* self, char ch, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param pm QPixmap*
/// @param markerNumber int
///
int32_t q_sciscintilla_marker_define24(void* self, void* pm, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param im QImage*
/// @param markerNumber int
///
int32_t q_sciscintilla_marker_define25(void* self, void* im, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param linenr int
/// @param markerNumber int
///
void q_sciscintilla_marker_delete2(void* self, int linenr, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param markerNumber int
///
void q_sciscintilla_marker_delete_all1(void* self, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param under bool
/// @param indicatorNumber int
///
void q_sciscintilla_set_indicator_draw_under2(void* self, bool under, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
/// @param indicatorNumber int
///
void q_sciscintilla_set_indicator_foreground_color2(void* self, void* col, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
/// @param indicatorNumber int
///
void q_sciscintilla_set_indicator_hover_foreground_color2(void* self, void* col, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param style enum QsciScintilla__IndicatorStyle
/// @param indicatorNumber int
///
void q_sciscintilla_set_indicator_hover_style2(void* self, int32_t style, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
/// @param indicatorNumber int
///
void q_sciscintilla_set_indicator_outline_color2(void* self, void* col, int indicatorNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param line int
///
void q_sciscintilla_clear_margin_text1(void* self, int line);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
/// @param markerNumber int
///
void q_sciscintilla_set_marker_background_color2(void* self, void* col, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param col QColor*
/// @param markerNumber int
///
void q_sciscintilla_set_marker_foreground_color2(void* self, void* col, int markerNumber);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param endFlag enum QsciScintilla__WrapVisualFlag
/// @param startFlag enum QsciScintilla__WrapVisualFlag
///
void q_sciscintilla_set_wrap_visual_flags2(void* self, int32_t endFlag, int32_t startFlag);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// @param self QsciScintilla*
/// @param endFlag enum QsciScintilla__WrapVisualFlag
/// @param startFlag enum QsciScintilla__WrapVisualFlag
/// @param indent int
///
void q_sciscintilla_set_wrap_visual_flags3(void* self, int32_t endFlag, int32_t startFlag, int indent);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
QsciScintillaBase* q_sciscintilla_pool();

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param scrollBar QScrollBar*
///
void q_sciscintilla_replace_horizontal_scroll_bar(void* self, void* scrollBar);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param scrollBar QScrollBar*
///
void q_sciscintilla_replace_vertical_scroll_bar(void* self, void* scrollBar);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
///
int64_t q_sciscintilla_send_scintilla(void* self, uint32_t msg);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam void*
///
int64_t q_sciscintilla_send_scintilla2(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uintptr_t
/// @param lParam const char*
///
int64_t q_sciscintilla_send_scintilla3(void* self, uint32_t msg, uintptr_t wParam, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param lParam const char*
///
int64_t q_sciscintilla_send_scintilla4(void* self, uint32_t msg, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam const char*
/// @param lParam const char*
///
int64_t q_sciscintilla_send_scintilla5(void* self, uint32_t msg, const char* wParam, const char* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam int64_t
///
int64_t q_sciscintilla_send_scintilla6(void* self, uint32_t msg, int64_t wParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam int
///
int64_t q_sciscintilla_send_scintilla7(void* self, uint32_t msg, int wParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param cpMin int64_t
/// @param cpMax int64_t
/// @param lpstrText char*
///
int64_t q_sciscintilla_send_scintilla8(void* self, uint32_t msg, int64_t cpMin, int64_t cpMax, char* lpstrText);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param col QColor*
///
int64_t q_sciscintilla_send_scintilla9(void* self, uint32_t msg, uint64_t wParam, void* col);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param col QColor*
///
int64_t q_sciscintilla_send_scintilla10(void* self, uint32_t msg, void* col);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param hdc QPainter*
/// @param rc QRect*
/// @param cpMin int64_t
/// @param cpMax int64_t
///
int64_t q_sciscintilla_send_scintilla11(void* self, uint32_t msg, uint64_t wParam, void* hdc, void* rc, int64_t cpMin, int64_t cpMax);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam QPixmap*
///
int64_t q_sciscintilla_send_scintilla12(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam QImage*
///
int64_t q_sciscintilla_send_scintilla13(void* self, uint32_t msg, uint64_t wParam, void* lParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
///
void* q_sciscintilla_send_scintilla_ptr_result(void* self, uint32_t msg);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param qt_key int
/// @param modifiers int*
///
int32_t q_sciscintilla_command_key(int qt_key, int* modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param yes bool
///
void q_sciscintilla_q_s_c_n__s_e_l_c_h_a_n_g_e_d(void* self, bool yes);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__a_u_t_o_c_c_a_n_c_e_l_l_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__a_u_t_o_c_c_h_a_r_d_e_l_e_t_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param position int
/// @param ch int
/// @param method int
///
void q_sciscintilla_s_c_n__a_u_t_o_c_c_o_m_p_l_e_t_e_d(void* self, const char* selection, int position, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param position int
/// @param ch int
/// @param method int
///
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int position, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param position int
///
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int position);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param id int
/// @param position int
///
void q_sciscintilla_s_c_n__a_u_t_o_c_s_e_l_e_c_t_i_o_n_c_h_a_n_g_e(void* self, const char* selection, int id, int position);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_e_n__c_h_a_n_g_e(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param direction int
///
void q_sciscintilla_s_c_n__c_a_l_l_t_i_p_c_l_i_c_k(void* self, int direction);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param charadded int
///
void q_sciscintilla_s_c_n__c_h_a_r_a_d_d_e_d(void* self, int charadded);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param line int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int line, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param x int
/// @param y int
///
void q_sciscintilla_s_c_n__d_w_e_l_l_e_n_d(void* self, int position, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param x int
/// @param y int
///
void q_sciscintilla_s_c_n__d_w_e_l_l_s_t_a_r_t(void* self, int position, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__f_o_c_u_s_i_n(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__f_o_c_u_s_o_u_t(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_d_o_u_b_l_e_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__h_o_t_s_p_o_t_r_e_l_e_a_s_e_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_c_l_i_c_k(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
///
void q_sciscintilla_s_c_n__i_n_d_i_c_a_t_o_r_r_e_l_e_a_s_e(void* self, int position, int modifiers);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param param1 uint32_t
/// @param param2 uint64_t
/// @param param3 void*
///
void q_sciscintilla_s_c_n__m_a_c_r_o_r_e_c_o_r_d(void* self, uint32_t param1, uint64_t param2, void* param3);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
/// @param margin int
///
void q_sciscintilla_s_c_n__m_a_r_g_i_n_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
/// @param modifiers int
/// @param margin int
///
void q_sciscintilla_s_c_n__m_a_r_g_i_n_r_i_g_h_t_c_l_i_c_k(void* self, int position, int modifiers, int margin);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param param1 int
/// @param param2 int
/// @param param3 const char*
/// @param param4 int
/// @param param5 int
/// @param param6 int
/// @param param7 int
/// @param param8 int
/// @param param9 int
/// @param param10 int
///
void q_sciscintilla_s_c_n__m_o_d_i_f_i_e_d(void* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__m_o_d_i_f_y_a_t_t_e_m_p_t_r_o(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param param1 int
/// @param param2 int
///
void q_sciscintilla_s_c_n__n_e_e_d_s_h_o_w_n(void* self, int param1, int param2);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__p_a_i_n_t_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_l_e_f_t(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__s_a_v_e_p_o_i_n_t_r_e_a_c_h_e_d(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param position int
///
void q_sciscintilla_s_c_n__s_t_y_l_e_n_e_e_d_e_d(void* self, int position);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param url QUrl*
///
void q_sciscintilla_s_c_n__u_r_i_d_r_o_p_p_e_d(void* self, void* url);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param updated int
///
void q_sciscintilla_s_c_n__u_p_d_a_t_e_u_i(void* self, int updated);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param id int
/// @param ch int
/// @param method int
/// @param position int
///
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n(void* self, const char* selection, int id, int ch, int method, int position);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param id int
/// @param ch int
/// @param method int
///
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n2(void* self, const char* selection, int id, int ch, int method);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param selection const char*
/// @param id int
///
void q_sciscintilla_s_c_n__u_s_e_r_l_i_s_t_s_e_l_e_c_t_i_o_n3(void* self, const char* selection, int id);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_s_c_n__z_o_o_m(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
///
int64_t q_sciscintilla_send_scintilla22(void* self, uint32_t msg, uint64_t wParam);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @param self QsciScintilla*
/// @param msg uint32_t
/// @param wParam uint64_t
/// @param lParam int64_t
///
int64_t q_sciscintilla_send_scintilla32(void* self, uint32_t msg, uint64_t wParam, int64_t lParam);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_sciscintilla_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QsciScintilla*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_sciscintilla_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QsciScintilla*
///
QScrollBar* q_sciscintilla_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QsciScintilla*
/// @param scrollbar QScrollBar*
///
void q_sciscintilla_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_sciscintilla_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QsciScintilla*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_sciscintilla_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QsciScintilla*
///
QScrollBar* q_sciscintilla_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QsciScintilla*
/// @param scrollbar QScrollBar*
///
void q_sciscintilla_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QsciScintilla*
/// @param widget QWidget*
///
void q_sciscintilla_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QsciScintilla*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_sciscintilla_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QsciScintilla*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_sciscintilla_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QsciScintilla*
/// @param widget QWidget*
///
void q_sciscintilla_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QsciScintilla*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_sciscintilla_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QsciScintilla*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_sciscintilla_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QsciScintilla*
/// @param frameStyle int
///
void q_sciscintilla_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QsciScintilla*
///
/// @return enum QFrame__Shape
///
int32_t q_sciscintilla_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QsciScintilla*
/// @param frameShape enum QFrame__Shape
///
void q_sciscintilla_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QsciScintilla*
///
/// @return enum QFrame__Shadow
///
int32_t q_sciscintilla_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QsciScintilla*
/// @param frameShadow enum QFrame__Shadow
///
void q_sciscintilla_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QsciScintilla*
/// @param lineWidth int
///
void q_sciscintilla_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QsciScintilla*
/// @param midLineWidth int
///
void q_sciscintilla_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QsciScintilla*
/// @param frameRect QRect*
///
void q_sciscintilla_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QsciScintilla*
///
uintptr_t q_sciscintilla_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QsciScintilla*
///
uintptr_t q_sciscintilla_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QsciScintilla*
///
uintptr_t q_sciscintilla_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QsciScintilla*
///
QStyle* q_sciscintilla_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QsciScintilla*
/// @param style QStyle*
///
void q_sciscintilla_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__WindowModality
///
int32_t q_sciscintilla_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QsciScintilla*
/// @param windowModality enum Qt__WindowModality
///
void q_sciscintilla_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
///
bool q_sciscintilla_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QsciScintilla*
/// @param enabled bool
///
void q_sciscintilla_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QsciScintilla*
/// @param disabled bool
///
void q_sciscintilla_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QsciScintilla*
/// @param windowModified bool
///
void q_sciscintilla_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QsciScintilla*
///
const QRect* q_sciscintilla_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QsciScintilla*
///
QPoint* q_sciscintilla_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QsciScintilla*
///
QRegion* q_sciscintilla_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QsciScintilla*
/// @param minimumSize QSize*
///
void q_sciscintilla_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QsciScintilla*
/// @param minw int
/// @param minh int
///
void q_sciscintilla_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QsciScintilla*
/// @param maximumSize QSize*
///
void q_sciscintilla_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QsciScintilla*
/// @param maxw int
/// @param maxh int
///
void q_sciscintilla_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QsciScintilla*
/// @param minw int
///
void q_sciscintilla_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QsciScintilla*
/// @param minh int
///
void q_sciscintilla_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QsciScintilla*
/// @param maxw int
///
void q_sciscintilla_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QsciScintilla*
/// @param maxh int
///
void q_sciscintilla_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QsciScintilla*
/// @param sizeIncrement QSize*
///
void q_sciscintilla_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QsciScintilla*
/// @param w int
/// @param h int
///
void q_sciscintilla_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QsciScintilla*
/// @param baseSize QSize*
///
void q_sciscintilla_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QsciScintilla*
/// @param basew int
/// @param baseh int
///
void q_sciscintilla_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QsciScintilla*
/// @param fixedSize QSize*
///
void q_sciscintilla_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QsciScintilla*
/// @param w int
/// @param h int
///
void q_sciscintilla_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QsciScintilla*
/// @param w int
///
void q_sciscintilla_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QsciScintilla*
/// @param h int
///
void q_sciscintilla_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QsciScintilla*
/// @param param1 QPointF*
///
QPointF* q_sciscintilla_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QsciScintilla*
/// @param param1 QPoint*
///
QPoint* q_sciscintilla_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QsciScintilla*
/// @param param1 QPointF*
///
QPointF* q_sciscintilla_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QsciScintilla*
/// @param param1 QPoint*
///
QPoint* q_sciscintilla_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QsciScintilla*
/// @param param1 QPointF*
///
QPointF* q_sciscintilla_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QsciScintilla*
/// @param param1 QPoint*
///
QPoint* q_sciscintilla_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QsciScintilla*
/// @param param1 QPointF*
///
QPointF* q_sciscintilla_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QsciScintilla*
/// @param param1 QPoint*
///
QPoint* q_sciscintilla_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_sciscintilla_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_sciscintilla_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_sciscintilla_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_sciscintilla_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QsciScintilla*
///
const QPalette* q_sciscintilla_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QsciScintilla*
/// @param palette QPalette*
///
void q_sciscintilla_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QsciScintilla*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_sciscintilla_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QsciScintilla*
///
/// @return enum QPalette__ColorRole
///
int32_t q_sciscintilla_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QsciScintilla*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_sciscintilla_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QsciScintilla*
///
/// @return enum QPalette__ColorRole
///
int32_t q_sciscintilla_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QsciScintilla*
///
const QFont* q_sciscintilla_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QsciScintilla*
///
QFontMetrics* q_sciscintilla_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QsciScintilla*
///
QFontInfo* q_sciscintilla_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QsciScintilla*
///
QCursor* q_sciscintilla_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QsciScintilla*
/// @param cursor QCursor*
///
void q_sciscintilla_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QsciScintilla*
/// @param mask QBitmap*
///
void q_sciscintilla_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QsciScintilla*
/// @param mask QRegion*
///
void q_sciscintilla_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QsciScintilla*
///
QRegion* q_sciscintilla_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param target QPaintDevice*
///
void q_sciscintilla_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param painter QPainter*
///
void q_sciscintilla_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QsciScintilla*
///
QPixmap* q_sciscintilla_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QsciScintilla*
///
QGraphicsEffect* q_sciscintilla_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QsciScintilla*
/// @param effect QGraphicsEffect*
///
void q_sciscintilla_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QsciScintilla*
/// @param type enum Qt__GestureType
///
void q_sciscintilla_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QsciScintilla*
/// @param type enum Qt__GestureType
///
void q_sciscintilla_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QsciScintilla*
/// @param windowTitle const char*
///
void q_sciscintilla_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QsciScintilla*
/// @param styleSheet const char*
///
void q_sciscintilla_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QsciScintilla*
/// @param icon QIcon*
///
void q_sciscintilla_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QsciScintilla*
///
QIcon* q_sciscintilla_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QsciScintilla*
/// @param windowIconText const char*
///
void q_sciscintilla_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QsciScintilla*
/// @param windowRole const char*
///
void q_sciscintilla_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QsciScintilla*
/// @param filePath const char*
///
void q_sciscintilla_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QsciScintilla*
/// @param level double
///
void q_sciscintilla_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QsciScintilla*
///
double q_sciscintilla_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QsciScintilla*
/// @param toolTip const char*
///
void q_sciscintilla_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QsciScintilla*
/// @param msec int
///
void q_sciscintilla_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QsciScintilla*
/// @param statusTip const char*
///
void q_sciscintilla_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QsciScintilla*
/// @param whatsThis const char*
///
void q_sciscintilla_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QsciScintilla*
/// @param name const char*
///
void q_sciscintilla_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QsciScintilla*
/// @param description const char*
///
void q_sciscintilla_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QsciScintilla*
/// @param direction enum Qt__LayoutDirection
///
void q_sciscintilla_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_sciscintilla_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QsciScintilla*
/// @param locale QLocale*
///
void q_sciscintilla_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QsciScintilla*
///
QLocale* q_sciscintilla_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QsciScintilla*
/// @param reason enum Qt__FocusReason
///
void q_sciscintilla_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_sciscintilla_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QsciScintilla*
/// @param policy enum Qt__FocusPolicy
///
void q_sciscintilla_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_sciscintilla_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QsciScintilla*
/// @param focusProxy QWidget*
///
void q_sciscintilla_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_sciscintilla_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QsciScintilla*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_sciscintilla_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QsciScintilla*
/// @param param1 QCursor*
///
void q_sciscintilla_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QsciScintilla*
/// @param key QKeySequence*
///
int32_t q_sciscintilla_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QsciScintilla*
/// @param id int
///
void q_sciscintilla_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QsciScintilla*
/// @param id int
///
void q_sciscintilla_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QsciScintilla*
/// @param id int
///
void q_sciscintilla_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_sciscintilla_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_sciscintilla_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QsciScintilla*
/// @param enable bool
///
void q_sciscintilla_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QsciScintilla*
///
QGraphicsProxyWidget* q_sciscintilla_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_sciscintilla_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintilla*
/// @param param1 QRect*
///
void q_sciscintilla_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QsciScintilla*
/// @param param1 QRegion*
///
void q_sciscintilla_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_sciscintilla_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintilla*
/// @param param1 QRect*
///
void q_sciscintilla_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QsciScintilla*
/// @param param1 QRegion*
///
void q_sciscintilla_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QsciScintilla*
/// @param hidden bool
///
void q_sciscintilla_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
///
void q_sciscintilla_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
///
void q_sciscintilla_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QsciScintilla*
/// @param param1 QPoint*
///
void q_sciscintilla_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QsciScintilla*
/// @param w int
/// @param h int
///
void q_sciscintilla_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QsciScintilla*
/// @param param1 QSize*
///
void q_sciscintilla_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_sciscintilla_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QsciScintilla*
/// @param geometry QRect*
///
void q_sciscintilla_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciScintilla*
///
char* q_sciscintilla_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QsciScintilla*
/// @param geometry const char*
///
bool q_sciscintilla_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QsciScintilla*
/// @param param1 QWidget*
///
bool q_sciscintilla_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QsciScintilla*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_sciscintilla_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QsciScintilla*
/// @param state flag of enum Qt__WindowState
///
void q_sciscintilla_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QsciScintilla*
/// @param state flag of enum Qt__WindowState
///
void q_sciscintilla_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QsciScintilla*
///
QSizePolicy* q_sciscintilla_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QsciScintilla*
/// @param sizePolicy QSizePolicy*
///
void q_sciscintilla_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QsciScintilla*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_sciscintilla_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QsciScintilla*
///
QRegion* q_sciscintilla_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QsciScintilla*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_sciscintilla_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QsciScintilla*
/// @param margins QMargins*
///
void q_sciscintilla_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QsciScintilla*
///
QMargins* q_sciscintilla_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QsciScintilla*
///
QRect* q_sciscintilla_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QsciScintilla*
///
QLayout* q_sciscintilla_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QsciScintilla*
/// @param layout QLayout*
///
void q_sciscintilla_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QsciScintilla*
/// @param parent QWidget*
///
void q_sciscintilla_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QsciScintilla*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_sciscintilla_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QsciScintilla*
/// @param dx int
/// @param dy int
///
void q_sciscintilla_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QsciScintilla*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_sciscintilla_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QsciScintilla*
/// @param on bool
///
void q_sciscintilla_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintilla*
/// @param action QAction*
///
void q_sciscintilla_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QsciScintilla*
/// @param actions libqt_list of QAction*
///
void q_sciscintilla_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QsciScintilla*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_sciscintilla_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QsciScintilla*
/// @param before QAction*
/// @param action QAction*
///
void q_sciscintilla_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QsciScintilla*
/// @param action QAction*
///
void q_sciscintilla_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QsciScintilla*
///
/// @return libqt_list of QAction*
///
libqt_list q_sciscintilla_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintilla*
/// @param text const char*
///
QAction* q_sciscintilla_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintilla*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_sciscintilla_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintilla*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_sciscintilla_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QsciScintilla*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_sciscintilla_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QsciScintilla*
///
QWidget* q_sciscintilla_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QsciScintilla*
/// @param type flag of enum Qt__WindowType
///
void q_sciscintilla_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QsciScintilla*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_sciscintilla_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QsciScintilla*
/// @param param1 enum Qt__WindowType
///
void q_sciscintilla_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QsciScintilla*
/// @param type flag of enum Qt__WindowType
///
void q_sciscintilla_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QsciScintilla*
///
/// @return enum Qt__WindowType
///
int32_t q_sciscintilla_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_sciscintilla_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
///
QWidget* q_sciscintilla_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintilla*
/// @param p QPoint*
///
QWidget* q_sciscintilla_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QsciScintilla*
/// @param p QPointF*
///
QWidget* q_sciscintilla_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QsciScintilla*
/// @param param1 enum Qt__WidgetAttribute
///
void q_sciscintilla_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QsciScintilla*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_sciscintilla_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QsciScintilla*
/// @param child QWidget*
///
bool q_sciscintilla_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QsciScintilla*
/// @param enabled bool
///
void q_sciscintilla_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QsciScintilla*
///
QBackingStore* q_sciscintilla_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QsciScintilla*
///
QWindow* q_sciscintilla_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QsciScintilla*
///
QScreen* q_sciscintilla_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QsciScintilla*
/// @param screen QScreen*
///
void q_sciscintilla_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_sciscintilla_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QsciScintilla*
/// @param title const char*
///
void q_sciscintilla_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* title)
///
void q_sciscintilla_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QsciScintilla*
/// @param icon QIcon*
///
void q_sciscintilla_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QIcon* icon)
///
void q_sciscintilla_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QsciScintilla*
/// @param iconText const char*
///
void q_sciscintilla_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* iconText)
///
void q_sciscintilla_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QsciScintilla*
/// @param pos QPoint*
///
void q_sciscintilla_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QPoint* pos)
///
void q_sciscintilla_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QsciScintilla*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_sciscintilla_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QsciScintilla*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_sciscintilla_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_sciscintilla_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_sciscintilla_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_sciscintilla_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_sciscintilla_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_sciscintilla_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QsciScintilla*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_sciscintilla_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QsciScintilla*
/// @param rectangle QRect*
///
QPixmap* q_sciscintilla_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QsciScintilla*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_sciscintilla_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QsciScintilla*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_sciscintilla_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QsciScintilla*
/// @param id int
/// @param enable bool
///
void q_sciscintilla_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QsciScintilla*
/// @param id int
/// @param enable bool
///
void q_sciscintilla_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QsciScintilla*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_sciscintilla_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QsciScintilla*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_sciscintilla_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_sciscintilla_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_sciscintilla_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciScintilla*
///
const char* q_sciscintilla_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciScintilla*
/// @param name char*
///
void q_sciscintilla_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciScintilla*
/// @param b bool
///
bool q_sciscintilla_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciScintilla*
///
QThread* q_sciscintilla_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciScintilla*
/// @param thread QThread*
///
bool q_sciscintilla_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintilla*
/// @param interval int
///
int32_t q_sciscintilla_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintilla*
/// @param time int64_t of nanoseconds
///
int32_t q_sciscintilla_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciScintilla*
/// @param id int
///
void q_sciscintilla_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciScintilla*
/// @param id enum Qt__TimerId
///
void q_sciscintilla_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciScintilla*
///
/// @return libqt_list of QObject*
///
libqt_list q_sciscintilla_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciScintilla*
/// @param filterObj QObject*
///
void q_sciscintilla_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciScintilla*
/// @param obj QObject*
///
void q_sciscintilla_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sciscintilla_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciScintilla*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sciscintilla_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sciscintilla_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sciscintilla_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciScintilla*
/// @param name const char*
/// @param value QVariant*
///
bool q_sciscintilla_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciScintilla*
/// @param name const char*
///
QVariant* q_sciscintilla_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciScintilla*
///
const char** q_sciscintilla_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciScintilla*
///
QBindingStorage* q_sciscintilla_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciScintilla*
///
const QBindingStorage* q_sciscintilla_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self)
///
void q_sciscintilla_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciScintilla*
///
QObject* q_sciscintilla_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciScintilla*
/// @param classname const char*
///
bool q_sciscintilla_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciScintilla*
///
void q_sciscintilla_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciScintilla*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_sciscintilla_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintilla*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sciscintilla_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciScintilla*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sciscintilla_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sciscintilla_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciScintilla*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sciscintilla_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintilla*
/// @param param1 QObject*
///
void q_sciscintilla_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QObject* param1)
///
void q_sciscintilla_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QsciScintilla*
///
double q_sciscintilla_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QsciScintilla*
///
double q_sciscintilla_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_sciscintilla_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_sciscintilla_encode_metric_f(int32_t metric, double value);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param source QMimeData*
///
bool q_sciscintilla_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param source QMimeData*
///
bool q_sciscintilla_qbase_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, QMimeData* source)
///
void q_sciscintilla_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param source QMimeData*
/// @param rectangular bool*
///
char* q_sciscintilla_from_mime_data(void* self, void* source, bool* rectangular);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param source QMimeData*
/// @param rectangular bool*
///
char* q_sciscintilla_qbase_from_mime_data(void* self, void* source, bool* rectangular);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback char* func(QsciScintilla* self, QMimeData* source, bool* rectangular)
///
void q_sciscintilla_on_from_mime_data(void* self, char* (*callback)(void*, void*, bool*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param text const char*
/// @param rectangular bool
///
QMimeData* q_sciscintilla_to_mime_data(void* self, const char* text, bool rectangular);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param text const char*
/// @param rectangular bool
///
QMimeData* q_sciscintilla_qbase_to_mime_data(void* self, const char* text, bool rectangular);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QMimeData* func(QsciScintilla* self, const char* text, bool rectangular)
///
void q_sciscintilla_on_to_mime_data(void* self, QMimeData* (*callback)(void*, const char*, bool));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragEnterEvent*
///
void q_sciscintilla_drag_enter_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragEnterEvent*
///
void q_sciscintilla_qbase_drag_enter_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QDragEnterEvent* e)
///
void q_sciscintilla_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragLeaveEvent*
///
void q_sciscintilla_drag_leave_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragLeaveEvent*
///
void q_sciscintilla_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QDragLeaveEvent* e)
///
void q_sciscintilla_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragMoveEvent*
///
void q_sciscintilla_drag_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDragMoveEvent*
///
void q_sciscintilla_qbase_drag_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QDragMoveEvent* e)
///
void q_sciscintilla_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDropEvent*
///
void q_sciscintilla_drop_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QDropEvent*
///
void q_sciscintilla_qbase_drop_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QDropEvent* e)
///
void q_sciscintilla_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QFocusEvent*
///
void q_sciscintilla_focus_in_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QFocusEvent*
///
void q_sciscintilla_qbase_focus_in_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QFocusEvent* e)
///
void q_sciscintilla_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QFocusEvent*
///
void q_sciscintilla_focus_out_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QFocusEvent*
///
void q_sciscintilla_qbase_focus_out_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QFocusEvent* e)
///
void q_sciscintilla_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param next bool
///
bool q_sciscintilla_focus_next_prev_child(void* self, bool next);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param next bool
///
bool q_sciscintilla_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, bool next)
///
void q_sciscintilla_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QKeyEvent*
///
void q_sciscintilla_key_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QKeyEvent*
///
void q_sciscintilla_qbase_key_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QKeyEvent* e)
///
void q_sciscintilla_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QInputMethodEvent*
///
void q_sciscintilla_input_method_event(void* self, void* event);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QInputMethodEvent*
///
void q_sciscintilla_qbase_input_method_event(void* self, void* event);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QInputMethodEvent* event)
///
void q_sciscintilla_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_sciscintilla_input_method_query(void* self, int32_t query);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_sciscintilla_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QVariant* func(QsciScintilla* self, enum Qt__InputMethodQuery query)
///
void q_sciscintilla_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_mouse_double_click_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_qbase_mouse_double_click_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMouseEvent* e)
///
void q_sciscintilla_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_mouse_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMouseEvent* e)
///
void q_sciscintilla_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_mouse_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMouseEvent* e)
///
void q_sciscintilla_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_mouse_release_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QMouseEvent*
///
void q_sciscintilla_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMouseEvent* e)
///
void q_sciscintilla_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QPaintEvent*
///
void q_sciscintilla_paint_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QPaintEvent*
///
void q_sciscintilla_qbase_paint_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QPaintEvent* e)
///
void q_sciscintilla_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QResizeEvent*
///
void q_sciscintilla_resize_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param e QResizeEvent*
///
void q_sciscintilla_qbase_resize_event(void* self, void* e);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QResizeEvent* e)
///
void q_sciscintilla_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param dx int
/// @param dy int
///
void q_sciscintilla_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param dx int
/// @param dy int
///
void q_sciscintilla_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int dx, int dy)
///
void q_sciscintilla_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QSize* func()
///
void q_sciscintilla_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QSize* func()
///
void q_sciscintilla_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param viewport QWidget*
///
void q_sciscintilla_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param viewport QWidget*
///
void q_sciscintilla_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QWidget* viewport)
///
void q_sciscintilla_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_sciscintilla_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_sciscintilla_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, QObject* param1, QEvent* param2)
///
void q_sciscintilla_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QEvent*
///
bool q_sciscintilla_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QEvent*
///
bool q_sciscintilla_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, QEvent* param1)
///
void q_sciscintilla_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QSize* q_sciscintilla_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QSize* func()
///
void q_sciscintilla_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param option QStyleOptionFrame*
///
void q_sciscintilla_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param option QStyleOptionFrame*
///
void q_sciscintilla_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QStyleOptionFrame* option)
///
void q_sciscintilla_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback int32_t func()
///
void q_sciscintilla_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param visible bool
///
void q_sciscintilla_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param visible bool
///
void q_sciscintilla_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, bool visible)
///
void q_sciscintilla_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 int
///
int32_t q_sciscintilla_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 int
///
int32_t q_sciscintilla_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback int32_t func(QsciScintilla* self, int param1)
///
void q_sciscintilla_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func()
///
void q_sciscintilla_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QPaintEngine* q_sciscintilla_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QPaintEngine* q_sciscintilla_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QPaintEngine* func()
///
void q_sciscintilla_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QKeyEvent*
///
void q_sciscintilla_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QKeyEvent*
///
void q_sciscintilla_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QKeyEvent* event)
///
void q_sciscintilla_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEnterEvent*
///
void q_sciscintilla_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEnterEvent*
///
void q_sciscintilla_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QEnterEvent* event)
///
void q_sciscintilla_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEvent*
///
void q_sciscintilla_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEvent*
///
void q_sciscintilla_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QEvent* event)
///
void q_sciscintilla_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QMoveEvent*
///
void q_sciscintilla_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QMoveEvent*
///
void q_sciscintilla_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMoveEvent* event)
///
void q_sciscintilla_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QCloseEvent*
///
void q_sciscintilla_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QCloseEvent*
///
void q_sciscintilla_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QCloseEvent* event)
///
void q_sciscintilla_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QTabletEvent*
///
void q_sciscintilla_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QTabletEvent*
///
void q_sciscintilla_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QTabletEvent* event)
///
void q_sciscintilla_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QActionEvent*
///
void q_sciscintilla_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QActionEvent*
///
void q_sciscintilla_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QActionEvent* event)
///
void q_sciscintilla_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QShowEvent*
///
void q_sciscintilla_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QShowEvent*
///
void q_sciscintilla_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QShowEvent* event)
///
void q_sciscintilla_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QHideEvent*
///
void q_sciscintilla_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QHideEvent*
///
void q_sciscintilla_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QHideEvent* event)
///
void q_sciscintilla_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_sciscintilla_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_sciscintilla_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, const char* eventType, void* message, intptr_t* result)
///
void q_sciscintilla_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_sciscintilla_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_sciscintilla_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback int32_t func(QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_sciscintilla_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param painter QPainter*
///
void q_sciscintilla_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param painter QPainter*
///
void q_sciscintilla_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QPainter* painter)
///
void q_sciscintilla_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param offset QPoint*
///
QPaintDevice* q_sciscintilla_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param offset QPoint*
///
QPaintDevice* q_sciscintilla_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QPaintDevice* func(QsciScintilla* self, QPoint* offset)
///
void q_sciscintilla_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QPainter* q_sciscintilla_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QPainter* q_sciscintilla_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QPainter* func()
///
void q_sciscintilla_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QTimerEvent*
///
void q_sciscintilla_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QTimerEvent*
///
void q_sciscintilla_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QTimerEvent* event)
///
void q_sciscintilla_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QChildEvent*
///
void q_sciscintilla_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QChildEvent*
///
void q_sciscintilla_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QChildEvent* event)
///
void q_sciscintilla_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEvent*
///
void q_sciscintilla_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param event QEvent*
///
void q_sciscintilla_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QEvent* event)
///
void q_sciscintilla_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
void q_sciscintilla_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
void q_sciscintilla_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMetaMethod* signal)
///
void q_sciscintilla_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
void q_sciscintilla_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
void q_sciscintilla_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QMetaMethod* signal)
///
void q_sciscintilla_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_set_scroll_bars(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_set_scroll_bars(void* self);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_set_scroll_bars(void* self, void (*callback)());

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
///
bool q_sciscintilla_context_menu_needed(void* self, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param x int
/// @param y int
///
bool q_sciscintilla_qbase_context_menu_needed(void* self, int x, int y);

/// Inherited from QsciScintillaBase
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, int x, int y)
///
void q_sciscintilla_on_context_menu_needed(void* self, bool (*callback)(void*, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_sciscintilla_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_sciscintilla_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, int left, int top, int right, int bottom)
///
void q_sciscintilla_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QMargins* q_sciscintilla_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QMargins* q_sciscintilla_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QMargins* func()
///
void q_sciscintilla_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QPainter*
///
void q_sciscintilla_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param param1 QPainter*
///
void q_sciscintilla_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, QPainter* param1)
///
void q_sciscintilla_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
void q_sciscintilla_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback void func()
///
void q_sciscintilla_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func()
///
void q_sciscintilla_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
bool q_sciscintilla_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func()
///
void q_sciscintilla_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
QObject* q_sciscintilla_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
QObject* q_sciscintilla_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback QObject* func()
///
void q_sciscintilla_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
///
int32_t q_sciscintilla_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback int32_t func()
///
void q_sciscintilla_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal const char*
///
int32_t q_sciscintilla_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal const char*
///
int32_t q_sciscintilla_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback int32_t func(QsciScintilla* self, const char* signal)
///
void q_sciscintilla_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
bool q_sciscintilla_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param signal QMetaMethod*
///
bool q_sciscintilla_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback bool func(QsciScintilla* self, QMetaMethod* signal)
///
void q_sciscintilla_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciScintilla*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_sciscintilla_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_sciscintilla_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciScintilla*
/// @param callback double func(QsciScintilla* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_sciscintilla_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciScintilla*
/// @param callback void func(QsciScintilla* self, const char* objectName)
///
void q_sciscintilla_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciScintilla*
///
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
