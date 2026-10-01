#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCPP_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCPP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)

/// q_scilexercpp_new constructs a new QsciLexerCPP object.
///
QsciLexerCPP* q_scilexercpp_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)

/// q_scilexercpp_new2 constructs a new QsciLexerCPP object.
///
/// @param parent QObject*
///
QsciLexerCPP* q_scilexercpp_new2(void* parent);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)

/// q_scilexercpp_new3 constructs a new QsciLexerCPP object.
///
/// @param parent QObject*
/// @param caseInsensitiveKeywords bool
///
QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QsciLexerCPP*
///
const QMetaObject* q_scilexercpp_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QsciLexerCPP*
/// @param callback const QMetaObject* func(const QsciLexerCPP* self)
///
void q_scilexercpp_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QsciLexerCPP*
///
const QMetaObject* q_scilexercpp_super_meta_object(const void* self);

/// @param self QsciLexerCPP*
/// @param param1 const char*
///
void* q_scilexercpp_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void* func(QsciLexerCPP* self, const char* param1)
///
void q_scilexercpp_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param param1 const char*
///
void* q_scilexercpp_super_metacast(void* self, const char* param1);

/// @param self QsciLexerCPP*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercpp_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexercpp_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercpp_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexercpp_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_language(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_lexer(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QsciLexerCPP*
///
const char** q_scilexercpp_auto_completion_word_separators(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_block_end(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_block_start(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_block_start_keyword(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_brace_style(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_word_characters(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_default_color(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
/// @param style int
///
bool q_scilexercpp_default_eol_fill(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QFont* q_scilexercpp_default_font(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_default_paper(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
/// @param set int
///
const char* q_scilexercpp_keywords(const void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
/// @param style int
///
const char* q_scilexercpp_description(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
///
void q_scilexercpp_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_fold_at_else(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_fold_comments(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_fold_compact(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_fold_preprocessor(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_style_preprocessor(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param allowed bool
///
void q_scilexercpp_set_dollars_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_dollars_allowed(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param enabled bool
///
void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_highlight_triple_quoted_strings(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param enabled bool
///
void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_highlight_hash_quoted_strings(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param enabled bool
///
void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_highlight_back_quoted_strings(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param enabled bool
///
void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_highlight_escape_sequences(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param allowed bool
///
void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_verbatim_string_escape_sequences_allowed(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_set_fold_at_else(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool fold)
///
void q_scilexercpp_on_set_fold_at_else(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_super_set_fold_at_else(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool fold)
///
void q_scilexercpp_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_super_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool fold)
///
void q_scilexercpp_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_super_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_set_fold_preprocessor(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool fold)
///
void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param fold bool
///
void q_scilexercpp_super_set_fold_preprocessor(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param style bool
///
void q_scilexercpp_set_style_preprocessor(void* self, bool style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool style)
///
void q_scilexercpp_on_set_style_preprocessor(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCPP*
/// @param style bool
///
void q_scilexercpp_super_set_style_preprocessor(void* self, bool style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerCPP*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self const QsciLexerCPP*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercpp_write_properties(const void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexercpp_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexercpp_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
/// @param style int*
///
const char* q_scilexercpp_block_end1(const void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
/// @param style int*
///
const char* q_scilexercpp_block_start1(const void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
/// @param style int*
///
const char* q_scilexercpp_block_start_keyword1(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerCPP*
///
QsciAbstractAPIs* q_scilexercpp_apis(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
///
int32_t q_scilexercpp_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerCPP*
///
QsciScintilla* q_scilexercpp_editor(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param apis QsciAbstractAPIs*
///
void q_scilexercpp_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param c QColor*
///
void q_scilexercpp_set_default_color(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param f QFont*
///
void q_scilexercpp_set_default_font(void* self, const void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param c QColor*
///
void q_scilexercpp_set_default_paper(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param qs QSettings*
///
bool q_scilexercpp_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerCPP*
/// @param qs QSettings*
///
bool q_scilexercpp_write_settings(const void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_color_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QColor* c, int style)
///
void q_scilexercpp_on_color_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param eolfilled bool
/// @param style int
///
void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool eolfilled, int style)
///
void q_scilexercpp_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param f QFont*
/// @param style int
///
void q_scilexercpp_font_changed(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QFont* f, int style)
///
void q_scilexercpp_on_font_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_paper_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QColor* c, int style)
///
void q_scilexercpp_on_paper_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param prop const char*
/// @param val const char*
///
void q_scilexercpp_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, const char* prop, const char* val)
///
void q_scilexercpp_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCPP*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercpp_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerCPP*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercpp_write_settings2(const void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerCPP*
/// @param name const char*
///
void q_scilexercpp_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerCPP*
/// @param b bool
///
bool q_scilexercpp_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QsciLexerCPP*
///
QThread* q_scilexercpp_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerCPP*
/// @param thread QThread*
///
bool q_scilexercpp_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCPP*
/// @param interval int
///
int32_t q_scilexercpp_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCPP*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexercpp_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCPP*
/// @param id int
///
void q_scilexercpp_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCPP*
/// @param id enum Qt__TimerId
///
void q_scilexercpp_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QsciLexerCPP*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexercpp_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerCPP*
/// @param parent QObject*
///
void q_scilexercpp_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerCPP*
/// @param filterObj QObject*
///
void q_scilexercpp_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerCPP*
/// @param obj QObject*
///
void q_scilexercpp_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercpp_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexercpp_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerCPP*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercpp_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercpp_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexercpp_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
/// @param receiver QObject*
///
bool q_scilexercpp_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexercpp_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QsciLexerCPP*
///
void q_scilexercpp_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QsciLexerCPP*
///
void q_scilexercpp_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerCPP*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexercpp_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QsciLexerCPP*
/// @param name const char*
///
QVariant* q_scilexercpp_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QsciLexerCPP*
///
const char** q_scilexercpp_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerCPP*
///
QBindingStorage* q_scilexercpp_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QsciLexerCPP*
///
const QBindingStorage* q_scilexercpp_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCPP*
///
void q_scilexercpp_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self)
///
void q_scilexercpp_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QsciLexerCPP*
///
QObject* q_scilexercpp_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QsciLexerCPP*
/// @param classname const char*
///
bool q_scilexercpp_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerCPP*
///
void q_scilexercpp_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCPP*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercpp_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCPP*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercpp_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexercpp_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexercpp_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerCPP*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexercpp_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
/// @param signal const char*
///
bool q_scilexercpp_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexercpp_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercpp_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerCPP*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercpp_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCPP*
/// @param param1 QObject*
///
void q_scilexercpp_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QObject* param1)
///
void q_scilexercpp_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_lexer_id(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
const char* q_scilexercpp_super_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback const char* func(QsciLexerCPP* self)
///
void q_scilexercpp_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_block_lookback(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
bool q_scilexercpp_super_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback bool func(QsciLexerCPP* self)
///
void q_scilexercpp_on_case_sensitive(const void* self, bool (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_super_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QColor* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_color(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
bool q_scilexercpp_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
bool q_scilexercpp_super_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback bool func(QsciLexerCPP* self, int style)
///
void q_scilexercpp_on_eol_fill(const void* self, bool (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QFont* q_scilexercpp_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QFont* q_scilexercpp_super_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QFont* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_font(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_default_style(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_super_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QColor* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_paper(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_super_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QColor* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_default_color2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QFont* q_scilexercpp_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QFont* q_scilexercpp_super_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QFont* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_default_font2(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param style int
///
QColor* q_scilexercpp_super_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QColor* func(QsciLexerCPP* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexercpp_on_default_paper2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param editor QsciScintilla*
///
void q_scilexercpp_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param editor QsciScintilla*
///
void q_scilexercpp_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QsciScintilla* editor)
///
void q_scilexercpp_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_style_bits_needed(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param autoindentstyle int
///
void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param autoindentstyle int
///
void q_scilexercpp_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, int autoindentstyle)
///
void q_scilexercpp_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_super_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QColor* c, int style)
///
void q_scilexercpp_on_set_color(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param eoffill bool
/// @param style int
///
void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param eoffill bool
/// @param style int
///
void q_scilexercpp_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, bool eoffill, int style)
///
void q_scilexercpp_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param f QFont*
/// @param style int
///
void q_scilexercpp_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param f QFont*
/// @param style int
///
void q_scilexercpp_super_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QFont* f, int style)
///
void q_scilexercpp_on_set_font(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param c QColor*
/// @param style int
///
void q_scilexercpp_super_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QColor* c, int style)
///
void q_scilexercpp_on_set_paper(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QEvent*
///
bool q_scilexercpp_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QEvent*
///
bool q_scilexercpp_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback bool func(QsciLexerCPP* self, QEvent* event)
///
void q_scilexercpp_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercpp_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercpp_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback bool func(QsciLexerCPP* self, QObject* watched, QEvent* event)
///
void q_scilexercpp_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QTimerEvent*
///
void q_scilexercpp_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QTimerEvent*
///
void q_scilexercpp_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QTimerEvent* event)
///
void q_scilexercpp_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QChildEvent*
///
void q_scilexercpp_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QChildEvent*
///
void q_scilexercpp_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QChildEvent* event)
///
void q_scilexercpp_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QEvent*
///
void q_scilexercpp_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param event QEvent*
///
void q_scilexercpp_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QEvent* event)
///
void q_scilexercpp_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param signal QMetaMethod*
///
void q_scilexercpp_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param signal QMetaMethod*
///
void q_scilexercpp_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QMetaMethod* signal)
///
void q_scilexercpp_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param signal QMetaMethod*
///
void q_scilexercpp_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param signal QMetaMethod*
///
void q_scilexercpp_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, QMetaMethod* signal)
///
void q_scilexercpp_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param text const char*
///
char* q_scilexercpp_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param text const char*
///
char* q_scilexercpp_super_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback libqt_string func(QsciLexerCPP* self, const char* text)
///
void q_scilexercpp_on_text_as_bytes(const void* self, libqt_string (*callback)(const void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercpp_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercpp_super_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback const char* func(QsciLexerCPP* self, const char* bytes, int size)
///
void q_scilexercpp_on_bytes_as_text(const void* self, const char* (*callback)(const void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
QObject* q_scilexercpp_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
QObject* q_scilexercpp_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback QObject* func(QsciLexerCPP* self)
///
void q_scilexercpp_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
///
int32_t q_scilexercpp_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self)
///
void q_scilexercpp_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param signal const char*
///
int32_t q_scilexercpp_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param signal const char*
///
int32_t q_scilexercpp_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback int32_t func(QsciLexerCPP* self, const char* signal)
///
void q_scilexercpp_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param signal QMetaMethod*
///
bool q_scilexercpp_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param signal QMetaMethod*
///
bool q_scilexercpp_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerCPP*
/// @param callback bool func(QsciLexerCPP* self, QMetaMethod* signal)
///
void q_scilexercpp_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerCPP*
/// @param callback void func(QsciLexerCPP* self, const char* objectName)
///
void q_scilexercpp_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerCPP*
///
void q_scilexercpp_delete(void* self);

typedef enum {
    QSCILEXERCPP__DEFAULT = 0,
    QSCILEXERCPP__INACTIVEDEFAULT = 64,
    QSCILEXERCPP__COMMENT = 1,
    QSCILEXERCPP__INACTIVECOMMENT = 65,
    QSCILEXERCPP__COMMENTLINE = 2,
    QSCILEXERCPP__INACTIVECOMMENTLINE = 66,
    QSCILEXERCPP__COMMENTDOC = 3,
    QSCILEXERCPP__INACTIVECOMMENTDOC = 67,
    QSCILEXERCPP__NUMBER = 4,
    QSCILEXERCPP__INACTIVENUMBER = 68,
    QSCILEXERCPP__KEYWORD = 5,
    QSCILEXERCPP__INACTIVEKEYWORD = 69,
    QSCILEXERCPP__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERCPP__INACTIVEDOUBLEQUOTEDSTRING = 70,
    QSCILEXERCPP__SINGLEQUOTEDSTRING = 7,
    QSCILEXERCPP__INACTIVESINGLEQUOTEDSTRING = 71,
    QSCILEXERCPP__UUID = 8,
    QSCILEXERCPP__INACTIVEUUID = 72,
    QSCILEXERCPP__PREPROCESSOR = 9,
    QSCILEXERCPP__INACTIVEPREPROCESSOR = 73,
    QSCILEXERCPP__OPERATOR = 10,
    QSCILEXERCPP__INACTIVEOPERATOR = 74,
    QSCILEXERCPP__IDENTIFIER = 11,
    QSCILEXERCPP__INACTIVEIDENTIFIER = 75,
    QSCILEXERCPP__UNCLOSEDSTRING = 12,
    QSCILEXERCPP__INACTIVEUNCLOSEDSTRING = 76,
    QSCILEXERCPP__VERBATIMSTRING = 13,
    QSCILEXERCPP__INACTIVEVERBATIMSTRING = 77,
    QSCILEXERCPP__REGEX = 14,
    QSCILEXERCPP__INACTIVEREGEX = 78,
    QSCILEXERCPP__COMMENTLINEDOC = 15,
    QSCILEXERCPP__INACTIVECOMMENTLINEDOC = 79,
    QSCILEXERCPP__KEYWORDSET2 = 16,
    QSCILEXERCPP__INACTIVEKEYWORDSET2 = 80,
    QSCILEXERCPP__COMMENTDOCKEYWORD = 17,
    QSCILEXERCPP__INACTIVECOMMENTDOCKEYWORD = 81,
    QSCILEXERCPP__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERCPP__INACTIVECOMMENTDOCKEYWORDERROR = 82,
    QSCILEXERCPP__GLOBALCLASS = 19,
    QSCILEXERCPP__INACTIVEGLOBALCLASS = 83,
    QSCILEXERCPP__RAWSTRING = 20,
    QSCILEXERCPP__INACTIVERAWSTRING = 84,
    QSCILEXERCPP__TRIPLEQUOTEDVERBATIMSTRING = 21,
    QSCILEXERCPP__INACTIVETRIPLEQUOTEDVERBATIMSTRING = 85,
    QSCILEXERCPP__HASHQUOTEDSTRING = 22,
    QSCILEXERCPP__INACTIVEHASHQUOTEDSTRING = 86,
    QSCILEXERCPP__PREPROCESSORCOMMENT = 23,
    QSCILEXERCPP__INACTIVEPREPROCESSORCOMMENT = 87,
    QSCILEXERCPP__PREPROCESSORCOMMENTLINEDOC = 24,
    QSCILEXERCPP__INACTIVEPREPROCESSORCOMMENTLINEDOC = 88,
    QSCILEXERCPP__USERLITERAL = 25,
    QSCILEXERCPP__INACTIVEUSERLITERAL = 89,
    QSCILEXERCPP__TASKMARKER = 26,
    QSCILEXERCPP__INACTIVETASKMARKER = 90,
    QSCILEXERCPP__ESCAPESEQUENCE = 27,
    QSCILEXERCPP__INACTIVEESCAPESEQUENCE = 91
} QsciLexerCPP__;

#endif
